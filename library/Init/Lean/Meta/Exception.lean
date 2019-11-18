/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Lean.Environment
import Init.Lean.MetavarContext

namespace Lean
namespace Meta

structure ExceptionContext :=
(env : Environment) (mctx : MetavarContext) (lctx : LocalContext)

inductive Bug
| overwritingExprMVar (mvarId : Name)

inductive Exception
| unknownConst         (constName : Name) (ctx : ExceptionContext)
| unknownFVar          (fvarId : Name) (ctx : ExceptionContext)
| unknownExprMVar      (mvarId : Name) (ctx : ExceptionContext)
| unknownLevelMVar     (mvarId : Name) (ctx : ExceptionContext)
| unexpectedBVar       (bvarIdx : Nat)
| functionExpected     (fType : Expr) (args : Array Expr) (ctx : ExceptionContext)
| typeExpected         (type : Expr) (ctx : ExceptionContext)
| incorrectNumOfLevels (constName : Name) (constLvls : List Level) (ctx : ExceptionContext)
| invalidProjection    (structName : Name) (idx : Nat) (s : Expr) (ctx : ExceptionContext)
| revertFailure        (toRevert : Array Expr) (decl : LocalDecl) (ctx : ExceptionContext)
| readOnlyMVar         (mvarId : Name) (ctx : ExceptionContext)
| bug                  (b : Bug) (ctx : ExceptionContext)
| other                (msg : String)

namespace Exception
instance : Inhabited Exception := ⟨other ""⟩

-- TODO: improve, use (to be implemented) pretty printer
def toStr : Exception → String
| unknownConst c _              => "unknown constant '" ++ toString c ++ "'"
| unknownFVar fvarId _          => "unknown free variable '" ++ toString fvarId ++ "'"
| unknownExprMVar mvarId _      => "unknown metavariable '" ++ toString mvarId ++ "'"
| unknownLevelMVar mvarId _     => "unknown universe level metavariable '" ++ toString mvarId ++ "'"
| unexpectedBVar bvarIdx        => "unexpected loose bound variable #" ++ toString bvarIdx
| functionExpected fType args _ => "function expected"
| typeExpected _ _              => "type expected"
| incorrectNumOfLevels c lvls _ => "incorrect number of universe levels for '" ++ toString c ++ "' " ++ toString lvls
| invalidProjection _ _ _ _     => "invalid projection"
| revertFailure _ _ _           => "revert failure"
| readOnlyMVar _ _              => "try to assign read only metavariable"
| bug _ _                       => "bug"
| other s                       => s

instance : HasToString Exception := ⟨toStr⟩

end Exception

end Meta
end Lean