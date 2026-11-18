module

/-!
`leanchecker` replays declarations under the rewrite rule sets stored in the `.olean` file and
registers the module's rules as their theorems are replayed.
-/

public axiom plus : Nat → Nat → Nat
public axiom plus_zero_ax (n : Nat) : plus n Nat.zero = n
public axiom plus_succ_ax (n m : Nat) : plus n (Nat.succ m) = Nat.succ (plus n m)

@[rewrite] public theorem plus_zero (n : Nat) : plus n Nat.zero = n := plus_zero_ax n
@[rewrite] public theorem plus_succ (n m : Nat) : plus n (Nat.succ m) = Nat.succ (plus n m) :=
  plus_succ_ax n m

rewrite_rules plus_zero plus_succ in
public theorem plus_two_three : plus 2 3 = 5 := rfl
