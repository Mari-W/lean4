# `unfolding_abstract` across modules: a declaration of a later module reopens a definition made
# abstract in an earlier one. The new member is stored with the later module, the kernel of every
# module importing it sees it, and `leanexport` emits it, so that con-leche accepts the declaration.
cd "$TMP_DIR"
cat > UnfA.lean <<'LEAN'
abstract_block
def double (n : Nat) : Nat := n + n
end
LEAN
cat > UnfB.lean <<'LEAN'
import UnfA
example : double 2 = 4 := by
  fail_if_success exact rfl
  sorry

unfolding_abstract double in
theorem double_two : double 2 = 4 := rfl
LEAN
cat > UnfC.lean <<'LEAN'
import Lean
import UnfB
open Lean in
#eval show CoreM Unit from do
  let env ← getEnv
  for ms? in [env.abstractMembers? ``double, env.toKernelEnv.abstractMembers? ``double] do
    let some ms := ms? | throwError "`double` is not abstract"
    unless ms.contains ``double && ms.contains ``double_two do
      throwError "missing members in {ms}"

-- still stuck outside the member
example : double 2 = 4 := by
  fail_if_success exact rfl
  exact double_two

unfolding_abstract double in
theorem double_three : double 3 = 6 := rfl
LEAN
lean -o UnfA.olean UnfA.lean || fail "UnfA"
LEAN_PATH="$TMP_DIR" lean -o UnfB.olean UnfB.lean > b.out 2>&1 || { cat b.out; fail "UnfB"; }
grep -q "declaration uses \`sorry\`" b.out || { cat b.out; fail "unexpected output of UnfB"; }
LEAN_PATH="$TMP_DIR" lean -o UnfC.olean UnfC.lean || fail "UnfC"

# leanchecker replays each module on top of its imports, so it adds the members of the imported
# `double` itself, and from a fresh environment, where `double` carries all its members
for m in UnfB UnfC; do
  LEAN_PATH="$TMP_DIR" leanchecker $m || fail "leanchecker $m"
  LEAN_PATH="$TMP_DIR" leanchecker --fresh $m || fail "leanchecker --fresh $m"
done

LEAN_PATH="$TMP_DIR" leanexport UnfC -- double_two double_three > export.ndjson || fail "leanexport"
# the abstract record of `double` lists both declarations of the later modules as members
python3 - export.ndjson <<'PY' || fail "export lacks the members"
import json, sys
names, members = {0: ""}, None
for line in open(sys.argv[1]):
    r = json.loads(line)
    if "in" in r:
        n = r.get("str") or r.get("num")
        p, s = names[n["pre"]], str(n.get("str", n.get("i")))
        names[r["in"]] = (p + "." if p else "") + s
    elif "abstract" in r:
        a = r["abstract"]
        if names[a["name"]] == "double":
            members = [names[m] for m in a["members"]]
print("members of double:", members)
sys.exit(0 if members and {"double", "double_two", "double_three"} <= set(members) else 1)
PY

[ -n "${UNFOLDING_EXPORT_OUT:-}" ] && cp export.ndjson "$UNFOLDING_EXPORT_OUT"

if command -v con-leche > /dev/null; then
  con-leche export.ndjson | tee cl.out
  grep -qE '^con-leche: accepted [1-9][0-9]* declarations' cl.out || fail "con-leche rejected the export"
else
  echo "con-leche not built; skipping its check"
fi
