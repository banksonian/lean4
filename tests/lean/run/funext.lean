theorem ex1 : (fun y => y + 0) = (fun x => 0 + x) := by
  funext x
  rw [Nat.zeroAdd]
  rfl

theorem ex2 : (fun y x => y + x + 0) = (fun x y => y + x) := by
  funext x y
  rw [Nat.addZero, Nat.addComm]
  rfl

theorem ex3 : (fun (x : Nat × Nat) => x.1 + x.2) = (fun (x : Nat × Nat) => x.2 + x.1) := by
  funext (a, b)
  show a + b = b + a
  rw [Nat.addComm]
  rfl

theorem ex4 : (fun (x : Nat × Nat) (y : Nat × Nat) => x.1 + y.2) = (fun (x : Nat × Nat) (z : Nat × Nat) => z.2 + x.1) := by
  funext (a, b) (c, d)
  show a + d = d + a
  rw [Nat.addComm]
  rfl

theorem ex5 : (fun (x : Id Nat) => x.succ + 0) = (fun (x : Id Nat) => 0 + x.succ) := by
  funext (x : Nat)
  let! y := x + 1 -- if `(x : Nat)` is not used at `funext`, then `x+1` would fail to be elaborated since we don't have the instance `Add (Id Nat)`
  rw [Nat.addComm]
  rfl
