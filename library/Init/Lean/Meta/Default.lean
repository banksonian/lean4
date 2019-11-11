/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Lean.Meta.Basic
import Init.Lean.Meta.WHNF
import Init.Lean.Meta.InferType
import Init.Lean.Meta.FunInfo
import Init.Lean.Meta.DefEq

namespace Lean
namespace Meta

/- =========================================== -/
/- BIG HACK until we add `mutual` keyword back -/
/- =========================================== -/
inductive MetaOp
| whnfOp | inferTypeOp | isDefEqOp | synthPendingOp

open MetaOp

private def exprToBool : Expr → Bool
| Expr.sort Level.zero => false
| _                    => true

private def boolToExpr : Bool → Expr
| false => Expr.sort Level.zero
| true  => Expr.bvar 0

private partial def auxFixpoint : MetaOp → Expr → Expr → MetaM Expr
| op, e₁, e₂ =>
  let whnf         := fun e => auxFixpoint whnfOp e e;
  let inferType    := fun e => auxFixpoint inferTypeOp e e;
  let isDefEq      := fun e₁ e₂ => pure false; -- TODO
  let synthPending := fun e => pure false;     -- TODO
  match op with
  | whnfOp         => whnfAux inferType isDefEq synthPending e₁
  | inferTypeOp    => inferType e₁
  | synthPendingOp => boolToExpr <$> synthPending e₁
  | isDefEqOp      => boolToExpr <$> isDefEq e₁ e₂

def whnf (e : Expr) : MetaM Expr :=
auxFixpoint whnfOp e e

def inferType (e : Expr) : MetaM Expr :=
auxFixpoint inferTypeOp e e

def isDefEq (e₁ e₂ : Expr) : MetaM Bool :=
exprToBool <$> auxFixpoint isDefEqOp e₁ e₂
/- =========================================== -/
/-          END OF BIG HACK                    -/
/- =========================================== -/

end Meta
end Lean