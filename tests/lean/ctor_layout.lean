import Init.Lean.Compiler.IR
open Lean
open Lean.IR

def tst : IO Unit :=
do initSearchPath "../../library:.";
   env ← importModules [`Init.Lean.Compiler.IR.Basic];
   ctorLayout ← IO.ofExcept $ getCtorLayout env `Lean.IR.Expr.reuse;
   ctorLayout.fieldInfo.mfor $ fun finfo => IO.println (format finfo);
   IO.println "---";
   ctorLayout ← IO.ofExcept $ getCtorLayout env `Lean.EnvironmentHeader.mk;
   ctorLayout.fieldInfo.mfor $ fun finfo => IO.println (format finfo);
   IO.println "---";
   ctorLayout ← IO.ofExcept $ getCtorLayout env `Subtype.mk;
   ctorLayout.fieldInfo.mfor $ fun finfo => IO.println (format finfo);
   pure ()

#eval tst