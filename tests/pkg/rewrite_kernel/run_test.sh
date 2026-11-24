# `@[rewrite kernel]` across modules: the flag is stored in the `.olean`, so the elaborator of an
# importing module ignores the rule, also where a declaration inherits it, while the kernel,
# `leanchecker` and `leanexport` treat it as an ordinary rule.
cd "$TMP_DIR"
cat > RwkA.lean <<'LEAN'
def f (l : List Nat) : List Nat × Nat := (l ++ [], 0)
@[rewrite ↓ kernel] theorem f_eq (l : List Nat) : f l = (l, 0) := by simp [f]
LEAN
cat > RwkB.lean <<'LEAN'
import RwkA
rewrite_rules f_eq in
theorem f_nil : f [] = ([], 0) := by decide +kernel
LEAN
cat > RwkC.lean <<'LEAN'
import Lean
import RwkB
open Lean in
#eval show CoreM Unit from do
  unless (getKernelOnlyRewriteRules (← getEnv)).contains ``f_eq do throwError "flag lost"
-- inherits `f_eq` through `f_nil` in the kernel, but the elaborator does not fire it
theorem f_var (l : List Nat) : (f [] = ([], 0)) ∧ f l = (l, 0) := by
  fail_if_success exact ⟨f_nil, rfl⟩
  exact ⟨f_nil, f_eq l⟩
LEAN
lean -o RwkA.olean RwkA.lean || fail "RwkA"
LEAN_PATH="$TMP_DIR" lean -o RwkB.olean RwkB.lean || fail "RwkB"
LEAN_PATH="$TMP_DIR" lean -o RwkC.olean RwkC.lean || fail "RwkC"
for m in RwkB RwkC; do
  LEAN_PATH="$TMP_DIR" leanchecker $m || fail "leanchecker $m"
  LEAN_PATH="$TMP_DIR" leanchecker --fresh $m || fail "leanchecker --fresh $m"
done
LEAN_PATH="$TMP_DIR" leanexport RwkC -- f_nil f_var > export.ndjson || fail "leanexport"
grep -q '"beforeDeltaKey"' export.ndjson || fail "export lacks the rule"
if command -v con-leche > /dev/null; then
  con-leche export.ndjson | tee cl.out
  grep -qE '^con-leche: accepted [1-9][0-9]* declarations' cl.out || fail "con-leche rejected the export"
fi
