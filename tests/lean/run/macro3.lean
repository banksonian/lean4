

syntax "call" term:max "(" (sepBy1 term ",") ")" : term

macro_rules
| `(call $f ($args*)) => `($f $(args.getSepElems)*)

#check call Nat.add (1+2, 3)
