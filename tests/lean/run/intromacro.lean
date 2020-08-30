new_frontend

structure S :=
(x y z : Nat := 0)

def f1 : Nat × Nat → S → Nat :=
begin
  intro (x, y);
  intro ⟨a, b, c⟩;
  exact x+y+a
end

theorem ex1 : f1 (10, 20) { x := 10 } = 40 :=
rfl

def f2 : Nat × Nat → S → Nat :=
begin
  intro (a, b) { y := y, .. };
  exact a+b+y
end

#eval f2 (10, 20) { y := 5 }

theorem ex2 : f2 (10, 20) { y := 5 } = 35 :=
rfl

def f3 : Nat × Nat → S → S → Nat :=
begin
  intro (a, b) { y := y, .. } s;
  exact a+b+y+s.x
end

#eval f3 (10, 20) { y := 5 } { x := 1 }

theorem ex3 : f3 (10, 20) { y := 5 } { x := 1 } = 36 :=
rfl