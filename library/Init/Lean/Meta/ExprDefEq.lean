/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Lean.Meta.WHNF
import Init.Lean.Meta.InferType
import Init.Lean.Meta.FunInfo
import Init.Lean.Meta.LevelDefEq

namespace Lean
namespace Meta

/--
  Try to solve `a := (fun x => t) =?= b` by eta-expanding `b`.

  Remark: eta-reduction is not a good alternative even in a system without universe cumulativity like Lean.
  Example:
    ```
    (fun x : A => f ?m) =?= f
    ```
    The left-hand side of the constraint above it not eta-reduced because `?m` is a metavariable. -/
@[specialize] private def isDefEqEta
  (whnf    : Expr → MetaM Expr)
  (isDefEq : Expr → Expr → MetaM Bool)
  (a b : Expr) : MetaM Bool :=
if a.isLambda && !b.isLambda then do
  bType ← inferTypeAux whnf b;
  bType ← usingDefault whnf bType;
  match bType with
  | Expr.forallE n d b c =>
    let b' := Lean.mkLambda n c.binderInfo d (mkApp b (mkBVar 0));
    try $ isDefEq a b'
  | _ => pure false
else
  pure false

/--
  Return `true` if `e` is of the form `fun (x_1 ... x_n) => ?m x_1 ... x_n)`, and `?m` is unassigned.
  Remark: `n` may be 0. -/
def isEtaUnassignedMVar (e : Expr) : MetaM Bool :=
match e.etaExpanded? with
| some (Expr.mvar mvarId _) =>
  condM (isReadOnlyOrSyntheticExprMVar mvarId)
    (pure false)
    (condM (isExprMVarAssigned mvarId)
      (pure false)
      (pure true))
| _   => pure false


/-
  First pass for `isDefEqArgs`. We unify explicit arguments, *and* easy cases
  Here, we say a case is easy if it is of the form

       ?m =?= t
       or
       t  =?= ?m

  where `?m` is unassigned.

  These easy cases are not just an optimization. When
  `?m` is a function, by assigning it to t, we make sure
  a unification constraint (in the explicit part)
  ```
  ?m t =?= f s
  ```
  is not higher-order.

  We also handle the eta-expanded cases:
  ```
  fun x₁ ... xₙ => ?m x₁ ... xₙ =?= t
  t =?= fun x₁ ... xₙ => ?m x₁ ... xₙ

  This is important because type inference often produces
  eta-expanded terms, and without this extra case, we could
  introduce counter intuitive behavior.

  Pre: `paramInfo.size <= args₁.size = args₂.size`
-/
@[specialize] private partial def isDefEqArgsFirstPass
    (isDefEq   : Expr → Expr → MetaM Bool)
    (paramInfo : Array ParamInfo) (args₁ args₂ : Array Expr) : Nat → Array Nat → MetaM (Option (Array Nat))
| i, postponed =>
  if h : i < paramInfo.size then
    let info := paramInfo.get ⟨i, h⟩;
    let a₁ := args₁.get! i;
    let a₂ := args₂.get! i;
    if info.implicit || info.instImplicit then
      condM (isEtaUnassignedMVar a₁ <||> isEtaUnassignedMVar a₂)
        (condM (isDefEq a₁ a₂)
          (isDefEqArgsFirstPass (i+1) postponed)
          (pure none))
        (isDefEqArgsFirstPass (i+1) (postponed.push i))
    else
      condM (isDefEq a₁ a₂)
        (isDefEqArgsFirstPass (i+1) postponed)
        (pure none)
  else
    pure (some postponed)

@[specialize] private partial def isDefEqArgsAux
    (isDefEq   : Expr → Expr → MetaM Bool)
    (args₁ args₂ : Array Expr) (h : args₁.size = args₂.size) : Nat → MetaM Bool
| i =>
  if h₁ : i < args₁.size then
    let a₁ := args₁.get ⟨i, h₁⟩;
    let a₂ := args₂.get ⟨i, h ▸ h₁⟩;
    condM (isDefEq a₁ a₂)
      (isDefEqArgsAux (i+1))
      (pure false)
  else
    pure true

@[specialize] private def isDefEqArgs
  (whnf              : Expr → MetaM Expr)
  (isDefEq           : Expr → Expr → MetaM Bool)
  (synthesizePending : Expr → MetaM Bool)
  (f : Expr) (args₁ args₂ : Array Expr) : MetaM Bool :=
if h : args₁.size = args₂.size then do
  finfo ← getFunInfoNArgsAux whnf f args₁.size;
  isDefEqArgsAux isDefEq args₁ args₂ h finfo.paramInfo.size;
  (some postponed) ← isDefEqArgsFirstPass isDefEq finfo.paramInfo args₁ args₂ 0 #[] | pure false;
  /- Second pass: unify implicit arguments.
     In the second pass, we make sure we are unfolding at
     least non reducible definitions (default setting). -/
  postponed.allM $ fun i => do
    let a₁   := args₁.get! i;
    let a₂   := args₂.get! i;
    let info := finfo.paramInfo.get! i;
    when info.instImplicit $ do {
       synthesizePending a₁;
       synthesizePending a₂;
       pure ()
    };
    usingAtLeastTransparency TransparencyMode.default $ isDefEq a₁ a₂
else
  pure false

/--
  Check whether the types of the free variables at `fvars` are
  definitionally equal to the types at `ds₂`.

  Pre: `fvars.size == ds₂.size`

  This method also updates the set of local instances, and invokes
  the continuation `k` with the updated set.

  We can't use `withNewLocalInstances` because the `isDeq fvarType d₂`
  may use local instances. -/
@[specialize] partial def isDefEqBindingDomain
    (whnf    : Expr → MetaM Expr)
    (isDefEq : Expr → Expr → MetaM Bool)
    (fvars : Array Expr) (ds₂ : Array Expr) : Nat → MetaM Bool → MetaM Bool
| i, k =>
  if h : i < fvars.size then do
    let fvar := fvars.get ⟨i, h⟩;
    fvarDecl ← getLocalDecl fvar.fvarId!;
    let fvarType := fvarDecl.type;
    let d₂       := ds₂.get! i;
    condM (isDefEq fvarType d₂)
      (do c? ← isClass whnf fvarType;
          match c? with
          | some className => withNewLocalInstance className fvar $ isDefEqBindingDomain (i+1) k
          | none           => isDefEqBindingDomain (i+1) k)
      (pure false)
  else
    k

/- Auxiliary function for `isDefEqBinding` for handling binders `forall/fun`.
   It accumulates the new free variables in `fvars`, and declare them at `lctx`.
   We use the domain types of `e₁` to create the new free variables.
   We store the domain types of `e₂` at `ds₂`. -/
@[specialize] private partial def isDefEqBindingAux
  (whnf    : Expr → MetaM Expr)
  (isDefEq : Expr → Expr → MetaM Bool)
  : LocalContext → Array Expr → Expr → Expr → Array Expr → MetaM Bool
| lctx, fvars, e₁, e₂, ds₂ =>
  let process (n : Name) (d₁ d₂ b₁ b₂ : Expr) : MetaM Bool := do {
    let d₁    := d₁.instantiateRev fvars;
    let d₂    := d₂.instantiateRev fvars;
    fvarId    ← mkFreshId;
    let lctx  := lctx.mkLocalDecl fvarId n d₁;
    let fvars := fvars.push (mkFVar fvarId);
    isDefEqBindingAux lctx fvars b₁ b₂ (ds₂.push d₂)
  };
  match e₁, e₂ with
  | Expr.forallE n d₁ b₁ _, Expr.forallE _ d₂ b₂ _ => process n d₁ d₂ b₁ b₂
  | Expr.lam     n d₁ b₁ _, Expr.lam     _ d₂ b₂ _ => process n d₁ d₂ b₁ b₂
  | _,                      _                      =>
    adaptReader (fun (ctx : Context) => { lctx := lctx, .. ctx }) $
      isDefEqBindingDomain whnf isDefEq fvars ds₂ 0 $
        isDefEq (e₁.instantiateRev fvars) (e₂.instantiateRev fvars)

@[inline] private def isDefEqBinding
  (whnf    : Expr → MetaM Expr)
  (isDefEq : Expr → Expr → MetaM Bool)
  (a b : Expr) : MetaM Bool :=
do lctx ← getLCtx;
   isDefEqBindingAux whnf isDefEq lctx #[] a b #[]

/-
  Each metavariable is declared in a particular local context.
  We use the notation `C |- ?m : t` to denote a metavariable `?m` that
  was declared at the local context `C` with type `t` (see `MetavarDecl`).
  We also use `?m@C` as a shorthand for `C |- ?m : t` where `t` is the type of `?m`.

  The following method process the unification constraint

       ?m@C a₁ ... aₙ =?= t

  We say the unification constraint is a pattern IFF

    1) `a₁ ... aₙ` are pairwise distinct free variables that are ​*not*​ let-variables.
    2) `a₁ ... aₙ` are not in `C`
    3) `t` only contains free variables in `C` and/or `{a₁, ..., aₙ}`
    4) For every metavariable `?m'@C'` occurring in `t`, `C'` is a subprefix of `C`
    5) `?m` does not occur in `t`

  Claim: we don't have to check free variable declarations. That is,
  if `t` contains a reference to `x : A := v`, we don't need to check `v`.
  Reason: The reference to `x` is a free variable, and it must be in `C` (by 1 and 3).
  If `x` is in `C`, then any metavariable occurring in `v` must have been defined in a strict subprefix of `C`.
  So, condition 4 and 5 are satisfied.

  If the conditions above have been satisfied, then the
  solution for the unification constrain is

    ?m := fun a₁ ... aₙ => t

  Now, we consider some workarounds/approximations.

 A1) Suppose `t` contains a reference to `x : A := v` and `x` is not in `C` (failed condition 3)
     (precise) solution: unfold `x` in `t`.

 A2) Suppose some `aᵢ` is in `C` (failed condition 2)
     (approximated) solution (when `config.foApprox` is set to true) :
     ignore condition and also use

        ?m := fun a₁ ... aₙ => t

   Here is an example where this approximation fails:
   Given `C` containing `a : nat`, consider the following two constraints
         ?m@C a =?= a
         ?m@C b =?= a

   If we use the approximation in the first constraint, we get
         ?m := fun x => x
   when we apply this solution to the second one we get a failure.

   IMPORTANT: When applying this approximation we need to make sure the
   abstracted term `fun a₁ ... aₙ => t` is type correct. The check
   can only be skipped in the pattern case described above. Consider
   the following example. Given the local context

      (α : Type) (a : α)

   we try to solve

     ?m α =?= @id α a

   If we use the approximation above we obtain:

     ?m := (fun α' => @id α' a)

   which is a type incorrect term. `a` has type `α` but it is expected to have
   type `α'`.

   The problem occurs because the right hand side contains a free variable
   `a` that depends on the free variable `α` being abstracted. Note that
   this dependency cannot occur in patterns.

   Here is another example in the same local context

      ?m_1 α =?= id ?m_2

   If we use the approximation above we obtain:

      ?m_1 := (fun α' => id (?m_2' α'))

   where `?m_2'` is a new metavariable, and `?m_2 := ?m_2 α`

   Now, suppose we assign `?m_2'`.

     ?m_2 := (fun α => @id α a)

   Then, we have

      ?m_1 := (fun α' => id (@id α' a))

   which is again type incorrect.

   We can address the issue on the first example by type checking
   the term after abstraction. This is not a significant performance
   bottleneck because this case doesn't happen very often in practice
   (262 times when compiling stdlib on Jan 2018). The second example
   is trickier, but it also occurs less frequently (8 times when compiling
   stdlib on Jan 2018, and all occurrences were at Init/Control when
   we define monads and auxiliary combinators for them).
   We considered three options for the addressing the issue on the second example:

    a) For each metavariable that may contain a free variable
       that depends on a term being abstracted, we create a fresh metavariable
       with a smaller local context. In the example above, when we perform
       the assignment

         ?m_1 := (fun α' => id (?m_2' α'))

    b) If we find a metavariable with this kind of dependency, we just
       fail and fallback to first-order unification.

    c) If we find a metavariable on the term after abstraction, we just
       fail and fallback to first-order unification.

   The first two options are incomparable, each one of them can solve
   problems where the other fails. The third one is weaker than the second,
   but we didn't find any example in the stdlib where the second option
   applies. The first and third options are also incomparable.

   So, we decide to use the third option since it is the simplest to implement,
   and all examples we have identified are in Init/Control.

 A3) `a₁ ... aₙ` are not pairwise distinct (failed condition 1).
   In Lean3, we would try to approximate this case using an approach similar to A2.
   However, this approximation complicates the code, and is never used in the
   Lean3 stdlib and mathlib.

 A4) `t` contains a metavariable `?m'@C'` where `C'` is not a subprefix of `C`.
   (approximated) solution: restrict the context of `?m'`
   If `?m'` is assigned, the workaround is precise, and we just unfold `?m'`.

 A5) If some `aᵢ` is not a free variable,
     then we use first-order unification (if `config.foApprox` is set to true)

       ?m a_1 ... a_i a_{i+1} ... a_{i+k} =?= f b_1 ... b_k

   reduces to

       ?M a_1 ... a_i =?= f
       a_{i+1}        =?= b_1
       ...
       a_{i+k}        =?= b_k


 A6) If (m =?= v) is of the form

        ?m a_1 ... a_n =?= ?m b_1 ... b_k

     then we use first-order unification (if `config.foApprox` is set to true)
-/

namespace CheckAssignment

structure Context :=
(lctx         : LocalContext)
(mvarId       : Name)
(mvarDecl     : MetavarDecl)
(fvars        : Array Expr)
(ctxApprox    : Bool)
(hasCtxLocals : Bool)

inductive Exception
| occursCheck
| useFOApprox
| outOfScopeFVar                     (fvarId : Name)
| readOnlyMVarWithBiggerLCtx         (mvarId : Name)
| mvarTypeNotWellFormedInSmallerLCtx (mvarId : Name)
| unknownExprMVar                    (mvarId : Name)

structure State :=
(mctx  : MetavarContext)
(ngen  : NameGenerator)
(cache : ExprStructMap Expr := {})

abbrev CheckAssignmentM := ReaderT Context (EStateM Exception State)

def findCached (e : Expr) : CheckAssignmentM (Option Expr) :=
do s ← get; pure $ s.cache.find e

def cache (e r : Expr) : CheckAssignmentM Unit :=
modify $ fun s => { cache := s.cache.insert e r, .. s }

instance : MonadCache Expr Expr CheckAssignmentM :=
{ findCached := findCached, cache := cache }

@[inline] private def visit (f : Expr → CheckAssignmentM Expr) (e : Expr) : CheckAssignmentM Expr :=
if !e.hasExprMVar && !e.hasFVar then pure e else checkCache e f

@[inline] def checkFVar (check : Expr → CheckAssignmentM Expr) (fvar : Expr) : CheckAssignmentM Expr :=
do ctx ← read;
   if ctx.mvarDecl.lctx.containsFVar fvar then pure fvar
   else do
     let lctx := ctx.lctx;
     match lctx.findFVar fvar with
     | some (LocalDecl.ldecl _ _ _ _ v) => visit check v
     | _ =>
       if ctx.fvars.contains fvar then pure fvar
       else throw $ Exception.outOfScopeFVar fvar.fvarId!

@[inline] def getMCtx : CheckAssignmentM MetavarContext :=
do s ← get; pure s.mctx

def mkAuxMVar (lctx : LocalContext) (type : Expr) : CheckAssignmentM Expr :=
do s ← get;
   let mvarId := s.ngen.curr;
   modify $ fun s => { ngen := s.ngen.next, mctx := s.mctx.addExprMVarDecl mvarId Name.anonymous lctx type, .. s };
   pure (mkMVar mvarId)

@[inline] def checkMVar (check : Expr → CheckAssignmentM Expr) (mvar : Expr) : CheckAssignmentM Expr :=
do let mvarId := mvar.mvarId!;
   ctx  ← read;
   mctx ← getMCtx;
   match mctx.getExprAssignment mvarId with
   | some v => visit check v
   | none   =>
     if mvarId == ctx.mvarId then throw Exception.occursCheck
     else match mctx.findDecl mvarId with
       | none          => throw $ Exception.unknownExprMVar mvarId
       | some mvarDecl =>
         if ctx.hasCtxLocals then throw $ Exception.useFOApprox -- we use option c) described at workaround A2
         else if mvarDecl.lctx.isSubPrefixOf ctx.mvarDecl.lctx then pure mvar
         else if mvarDecl.depth != mctx.depth || mvarDecl.synthetic then throw $ Exception.readOnlyMVarWithBiggerLCtx mvarId
         else if ctx.ctxApprox && ctx.mvarDecl.lctx.isSubPrefixOf mvarDecl.lctx then
           let mvarType := mvarDecl.type;
           if mctx.isWellFormed ctx.mvarDecl.lctx mvarType then do
             /- Create an auxiliary metavariable with a smaller context. -/
             newMVar ← mkAuxMVar ctx.mvarDecl.lctx mvarType;
             modify $ fun s => { mctx := s.mctx.assignExpr mvarId newMVar, .. s };
             pure newMVar
           else
             throw $ Exception.mvarTypeNotWellFormedInSmallerLCtx mvarId
         else
           pure mvar

partial def check : Expr → CheckAssignmentM Expr
| e@(Expr.mdata _ b _)     => do b ← visit check b; pure $ e.updateMData! b
| e@(Expr.proj _ _ s _)    => do s ← visit check s; pure $ e.updateProj! s
| e@(Expr.app f a _)       => do f ← visit check f; a ← visit check a; pure $ e.updateApp! f a
| e@(Expr.lam _ d b _)     => do d ← visit check d; b ← visit check b; pure $ e.updateLambdaE! d b
| e@(Expr.forallE _ d b _) => do d ← visit check d; b ← visit check b; pure $ e.updateForallE! d b
| e@(Expr.letE _ t v b _)  => do t ← visit check t; v ← visit check v; b ← visit check b; pure $ e.updateLet! t v b
| e@(Expr.bvar _ _)        => pure e
| e@(Expr.sort _ _)        => pure e
| e@(Expr.const _ _ _)     => pure e
| e@(Expr.lit _ _)         => pure e
| e@(Expr.fvar _ _)        => visit (checkFVar check) e
| e@(Expr.mvar _ _)        => visit (checkMVar check) e
| Expr.localE _ _ _ _      => unreachable!

end CheckAssignment

private def checkAssignmentFailure (mvarId : Name) (fvars : Array Expr) (v : Expr) (ex : CheckAssignment.Exception) : MetaM (Option Expr) :=
match ex with
| CheckAssignment.Exception.occursCheck => do
  trace! `Meta.isDefEq.assignment.occursCheck
    (mkMVar mvarId ++ fvars ++ " := " ++ v);
  pure none
| CheckAssignment.Exception.useFOApprox =>
  pure none
| CheckAssignment.Exception.outOfScopeFVar fvarId => do
  trace! `Meta.isDefEq.assignment.outOfScopeFVar
    (mkFVar fvarId ++ " @ " ++ mkMVar mvarId ++ fvars ++ " := " ++ v);
  pure none
| CheckAssignment.Exception.readOnlyMVarWithBiggerLCtx nestedMVarId => do
  trace! `Meta.isDefEq.assignment.readOnlyMVarWithBiggerLCtx
    (mkMVar nestedMVarId ++ " @ " ++ mkMVar mvarId ++ fvars ++ " := " ++ v);
  pure none
| CheckAssignment.Exception.mvarTypeNotWellFormedInSmallerLCtx nestedMVarId => do
  trace! `Meta.isDefEq.assignment.mvarTypeNotWellFormedInSmallerLCtx
    (mkMVar nestedMVarId ++ " @ " ++ mkMVar mvarId ++ fvars ++ " := " ++ v);
  pure none
| CheckAssignment.Exception.unknownExprMVar mvarId =>
  -- This case can only happen if the MetaM API is being misused
  throwEx $ Exception.unknownExprMVar mvarId

/--
  Auxiliary function for handling constraints of the form `?m a₁ ... aₙ =?= v`.
  It will check whether we can perform the assignment
  ```
  ?m := fun fvars => t
  ```
  The result is `none` if the assignment can't be performed.
  The result is `some newV` where `newV` is a possibly updated `v`. This method may need
  to unfold let-declarations. -/
def checkAssignment (mvarId : Name) (fvars : Array Expr) (v : Expr) : MetaM (Option Expr) :=
fun ctx s => if !v.hasExprMVar && !v.hasFVar then EStateM.Result.ok (some v) s else
  let mvarDecl     := s.mctx.getDecl mvarId;
  let hasCtxLocals := fvars.any $ fun fvar => mvarDecl.lctx.containsFVar fvar;
  let checkCtx : CheckAssignment.Context := {
    lctx         := ctx.lctx,
    mvarId       := mvarId,
    mvarDecl     := s.mctx.getDecl mvarId,
    fvars        := fvars,
    ctxApprox    := ctx.config.ctxApprox,
    hasCtxLocals := hasCtxLocals
  };
  match (CheckAssignment.check v checkCtx).run { mctx := s.mctx, ngen := s.ngen } with
  | EStateM.Result.ok e newS     => EStateM.Result.ok (some e) { mctx := newS.mctx, ngen := newS.ngen, .. s }
  | EStateM.Result.error ex newS => checkAssignmentFailure mvarId fvars v ex ctx { ngen := newS.ngen, .. s }

/-
  We try to unify arguments before we try to unify the functions.
  The motivation is the following: the universe constraints in
  the arguments propagate to the function. -/
@[specialize] private partial def isDefEqFOApprox
    (isDefEq : Expr → Expr → MetaM Bool)
    (f₁ f₂ : Expr) (args₁ args₂ : Array Expr) : Nat → Nat → MetaM Bool
| i₁, i₂ =>
  if h : i₂ < args₂.size then
    let arg₁ := args₁.get! i₁;
    let arg₂ := args₂.get ⟨i₂, h⟩;
    condM (isDefEq arg₁ arg₂)
      (isDefEqFOApprox (i₁+1) (i₂+1))
      (pure false)
  else
    isDefEq f₁ f₂

@[specialize] private def processAssignmentFOApproxAux
    (isDefEq : Expr → Expr → MetaM Bool)
    (mvar : Expr) (args : Array Expr) (v : Expr) : MetaM Bool :=
let vArgs := v.getAppArgs;
if vArgs.isEmpty then
  /- ?m a_1 ... a_k =?= t,  where t is not an application -/
  pure false
else if args.size > vArgs.size then
  /-
    ?m a_1 ... a_i a_{i+1} ... a_{i+k} =?= f b_1 ... b_k

    reduces to

    ?m a_1 ... a_i =?= f
    a_{i+1}        =?= b_1
    ...
    a_{i+k}        =?= b_k
  -/
  let f₁ := mkAppRange mvar 0 (args.size - vArgs.size) args;
  let i₁ := args.size - vArgs.size;
  isDefEqFOApprox isDefEq f₁ v.getAppFn args vArgs i₁ 0
else if args.size < vArgs.size then
  /-
    ?m a_1 ... a_k =?= f b_1 ... b_i b_{i+1} ... b_{i+k}

    reduces to

    ?m  =?= f b_1 ... b_i
    a_1 =?= b_{i+1}
    ...
    a_k =?= b_{i+k}
  -/
  let vFn := mkAppRange v.getAppFn 0 (vArgs.size - args.size) vArgs;
  let i₂  := vArgs.size - args.size;
  isDefEqFOApprox isDefEq mvar vFn args vArgs 0 i₂
else
  /-
    ?m a_1 ... a_k =?= f b_1 ... b_k

    reduces to

    ?m  =?= f
    a_1 =?= b_1
    ...
    a_k =?= b_k
  -/
  isDefEqFOApprox isDefEq mvar v.getAppFn args vArgs 0 0

/-
  Auxiliary method for applying first-order unification. It is an approximation.
  Remark: this method is trying to solve the unification constraint:

      ?m a₁ ... aₙ =?= v

   It is uses processAssignmentFOApproxAux, if it fails, it tries to unfold `v`.

   We have added support for unfolding here because we want to be able to solve unification problems such as

      ?m Unit =?= ITactic

   where `ITactic` is defined as

   def ITactic := Tactic Unit
-/
@[specialize] private partial def processAssignmentFOApprox
    (whnf              : Expr → MetaM Expr)
    (isDefEq           : Expr → Expr → MetaM Bool)
    (synthesizePending : Expr → MetaM Bool)
    (mvar : Expr) (args : Array Expr) : Expr → MetaM Bool
| v =>
  condM (try $ processAssignmentFOApproxAux isDefEq mvar args v)
    (pure true)
    (unfoldDefinitionAux whnf (inferTypeAux whnf) isDefEq synthesizePending v (pure false) processAssignmentFOApprox)

private partial def simpAssignmentArgAux : Expr → MetaM Expr
| Expr.mdata _ e _       => simpAssignmentArgAux e
| e@(Expr.fvar fvarId _) => do
  decl ← getLocalDecl fvarId;
  match decl.value? with
  | some value => simpAssignmentArgAux value
  | _          => pure e
| e => pure e

/- Auxiliary procedure for processing `?m a₁ ... aₙ =?= v`.
   We apply it to each `aᵢ`. It instantiates assigned metavariables if `aᵢ` is of the form `f[?n] b₁ ... bₘ`,
   and then removes metadata, and zeta-expand let-decls. -/
private def simpAssignmentArg (arg : Expr) : MetaM Expr :=
do arg ← if arg.getAppFn.hasExprMVar then instantiateMVars arg else pure arg;
   simpAssignmentArgAux arg

/- TODO: type check `e`, move to different file -/
def isTypeCorrect
    (whnf              : Expr → MetaM Expr)
    (isDefEq           : Expr → Expr → MetaM Bool)
    (synthesizePending : Expr → MetaM Bool)
    (e : Expr) : MetaM Bool :=
pure true

@[specialize] private partial def processAssignmentAux
    (whnf              : Expr → MetaM Expr)
    (isDefEq           : Expr → Expr → MetaM Bool)
    (synthesizePending : Expr → MetaM Bool)
    (mvar     : Expr)
    (mvarDecl : MetavarDecl)
    (v : Expr)
    : Nat → Array Expr → MetaM Bool
| i, args =>
  if h : i < args.size then do
    cfg ← getConfig;
    let arg := args.get ⟨i, h⟩;
    arg ← simpAssignmentArg arg;
    let args := args.set ⟨i, h⟩ arg;
    let useFOApprox : Unit → MetaM Bool := fun _ =>
      if cfg.foApprox then
        processAssignmentFOApprox whnf isDefEq synthesizePending mvar args v
      else
        pure false;
    match arg with
    | Expr.fvar fvarId _ =>
      if args.anyRange 0 i (fun prevArg => prevArg == arg) then
        useFOApprox ()
      else if mvarDecl.lctx.contains fvarId && !cfg.quasiPatternApprox then
        useFOApprox ()
      else
        processAssignmentAux (i+1) args
    | _ =>
      useFOApprox ()
  else do
    cfg ← getConfig;
    v ← instantiateMVars v; -- enforce A4
    if cfg.foApprox && args.isEmpty && v.getAppFn == mvar then
      processAssignmentFOApprox whnf isDefEq synthesizePending mvar args v
    else do
      let useFOApprox : Unit → MetaM Bool := fun _ =>
        if cfg.foApprox then processAssignmentFOApprox whnf isDefEq synthesizePending mvar args v
        else pure false;
      let mvarId := mvar.mvarId!;
      v? ← checkAssignment mvarId args v;
      match v? with
      | none => useFOApprox ()
      | some v => do
        v ← mkLambda args v;
        let finalize : Unit → MetaM Bool := fun _ => do {
           -- must check whether types are definitionally equal or not, before assigning and returning true
           mvarType ← inferTypeAux whnf mvar;
           vType    ← inferTypeAux whnf v;
           condM (usingTransparency TransparencyMode.default $ isDefEq mvarType vType)
             (do assignExprMVar mvarId v; pure true)
             (do trace! `Meta.isDefEq.assignment.typeMismatch (mvar ++ " : " ++ mvarType ++ " := " ++ v ++ " : " ++ vType);
                 pure false)
        };
        if args.any (fun arg => mvarDecl.lctx.containsFVar arg) then
          /- We need to type check `v` because abstraction using `mkLambda` may have produced
             a type incorrect term. See discussion at A2 -/
          condM (isTypeCorrect whnf isDefEq synthesizePending v)
            (finalize ())
            (useFOApprox ())
        else
          finalize ()

 /-- Tries to solve `?m a_1 ... a_k =?= v` by assigning `?m`.
     It assumes `?m` is unassigned. -/
@[specialize] private def processAssignment
    (whnf              : Expr → MetaM Expr)
    (isDefEq           : Expr → Expr → MetaM Bool)
    (synthesizePending : Expr → MetaM Bool)
    (mvar : Expr) (args : Array Expr) (v : Expr) : MetaM Bool :=
do mvarDecl ← getMVarDecl mvar.mvarId!;
   processAssignmentAux whnf isDefEq synthesizePending mvar mvarDecl v 0 args

end Meta
end Lean