universes u

axiom elimEx (motive : Nat → Nat → Sort u) (x y : Nat)
  (diag  : (a : Nat) → motive a a)
  (upper : (delta a : Nat) → motive a (a + delta.succ))
  (lower : (delta a : Nat) → motive (a + delta.succ) a)
  : motive y x

theorem ex1 (p q : Nat) : p ≤ q ∨ p > q := by
  cases p, q using elimEx
  | lower d => apply Or.inl -- Error
  | upper d => apply Or.inr -- Error
  | diag    => apply Or.inl; apply Nat.leRefl

theorem ex2 (p q : Nat) : p ≤ q ∨ p > q := by
  cases p, q using elimEx2 -- Error
  | lower d => apply Or.inl
  | upper d => apply Or.inr
  | diag    => apply Or.inl; apply Nat.leRefl

theorem ex3 (p q : Nat) : p ≤ q ∨ p > q := by
  cases p /- Error -/ using elimEx
  | lower d => apply Or.inl
  | upper d => apply Or.inr
  | diag    => apply Or.inl; apply Nat.leRefl

theorem ex4 (p q : Nat) : p ≤ q ∨ p > q := by
  cases p using Nat.add -- Error
  | lower d => apply Or.inl
  | upper d => apply Or.inr
  | diag    => apply Or.inl; apply Nat.leRefl

theorem ex5 (x : Nat) : 0 + x = x := by
  match x with
  | 0   => done -- Error
  | y+1 => done -- Error

theorem ex5b (x : Nat) : 0 + x = x := by
  cases x
  | zero   => done -- Error
  | succ y => done -- Error

inductive Vec : Nat → Type
  | nil  : Vec 0
  | cons : Bool → {n : Nat} → Vec n → Vec (n+1)

theorem ex6 (x : Vec 0) : x = Vec.nil := by
  cases x using Vec.casesOn
  | nil  => rfl
  | cons => done -- Error

theorem ex7 (x : Vec 0) : x = Vec.nil := by
  cases x -- Error: TODO: improve error location
  | nil  => rfl
  | cons => done

theorem ex8 (p q : Nat) : p ≤ q ∨ p > q := by
  cases p, q using elimEx
  | lower d => apply Or.inl; admit
  | upper2 /- Error -/ d => apply Or.inr
  | diag    => apply Or.inl; apply Nat.leRefl

theorem ex9 (p q : Nat) : p ≤ q ∨ p > q := by
  cases p, q using elimEx
  | lower d => apply Or.inl; admit
  | _ => apply Or.inr; admit
  | diag    => apply Or.inl; apply Nat.leRefl

theorem ex10 (p q : Nat) : p ≤ q ∨ p > q := by
  cases p, q using elimEx
  | lower d => apply Or.inl; admit
  | upper d => apply Or.inr; admit
  | diag    => apply Or.inl; apply Nat.leRefl
  | _  /- error unused -/ => admit

theorem ex11 (p q : Nat) : p ≤ q ∨ p > q := by
  cases p, q using elimEx
  | lower d => apply Or.inl; admit
  | upper d => apply Or.inr; admit
  | lower d /- error unused -/ => apply Or.inl; admit
  | diag    => apply Or.inl; apply Nat.leRefl
