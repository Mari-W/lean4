/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
import LeanExport.Basic
import LeanExport.Parse

open Lean LeanExport

/-- Parses a name as `Name.toString` prints it: numeric components become `Name.num` and `«…»`
groups are unescaped. Names like `_private.M.0.f` do not round-trip through `decodeNameLit`. -/
def parseName (s : String) : Name := Id.run do
  let comp (n : Name) (c : String) : Name := match c.toNat? with
    | some k => .num n k
    | none => .str n c
  let mut n := Name.anonymous
  let mut cur := ""
  let mut esc := false
  for c in s.toList do
    if esc then
      if c == '»' then esc := false else cur := cur.push c
    else if c == '«' then
      esc := true
    else if c == '.' then
      n := comp n cur
      cur := ""
    else
      cur := cur.push c
  return comp n cur

/-- Whether `c` is in `drop` or depends on a declaration in it, memoized. -/
partial def dropsTo (env : Environment) (drop : NameSet) (c : Name) (memo : Std.HashMap Name Bool) :
    Bool × Std.HashMap Name Bool :=
  if let some d := memo[c]? then (d, memo) else
  if drop.contains c then (true, memo.insert c true) else
  -- a cycle-free default while `c` is open
  let memo := memo.insert c false
  match env.find? c with
  | none => (false, memo)
  | some ci => Id.run do
    let mut memo := memo
    let mut d := false
    for u in ci.getUsedConstantsAsSet.toList do
      let (du, m) := dropsTo env drop u memo
      memo := m
      if du then
        d := true
        break
    return (d, memo.insert c d)

def main (args : List String) : IO Unit := do
  initSearchPath (← findSysroot)
  let (opts, args) := args.partition (fun s => s.startsWith "--" && s.length ≥ 3)
  let (imports, constants) := args.span (· != "--")
  let imports := imports.toArray.map fun mod => { module := Syntax.decodeNameLit ("`" ++ mod) |>.get! }
  let env ← importModules imports {}
  let constants? := constants.tail?.map fun cs =>
    cs.map fun c => Syntax.decodeNameLit ("`" ++ c) |>.get!
  -- `LEANEXPORT_RULES=file` (one theorem per line, optional priority, optional `↓` for a rule that
  -- fires before its head is unfolded, as `@[rewrite ↓]`) registers rewrite rules that
  -- every declaration outside their dependencies is checked under, and `LEANEXPORT_ABSTRACT=file`
  -- makes definitions abstract with the rule theorems as members, as in an `abstract_block`.
  -- Together they export a proof of concept without rebuilding the library. See also
  -- `LEANEXPORT_TRUST` below.
  let readLines (var : String) : IO (Array String) := do
    let some f ← IO.getEnv var | return #[]
    return (← IO.FS.lines f).filter (!·.trimAscii.toString.isEmpty)
  let toName (s : String) : Name := parseName s
  let fail (what : String) (ex : Kernel.Exception) : IO Unit := do
    throw <| .userError s!"{what}: {← (ex.toMessageData {}).toString}"
  let mut env := env
  let mut rules := #[]
  for line in ← readLines "LEANEXPORT_RULES" do
    let ws := line.trimAscii.toString.splitOn " " |>.filter (!·.isEmpty)
    let thm := toName ws[0]!
    let prio := (ws[1]?.bind (·.toNat?)).getD 1000
    match env.addRewriteRule thm prio (ws.contains "↓") with
    | .ok e => env := e
    | .error ex => fail s!"rule {thm}" ex
    rules := rules.push thm
  for line in ← readLines "LEANEXPORT_ABSTRACT" do
    let c := toName line.trimAscii.toString
    match env.addAbstract c rules with
    | .ok e => env := e
    | .error ex => fail s!"abstract {c}" ex
  let mut ruleDeps : NameSet := {}
  let mut todo := rules.toList
  while !todo.isEmpty do
    let c := todo.head!
    todo := todo.tail!
    unless ruleDeps.contains c do
      ruleDeps := ruleDeps.insert c
      if let some ci := env.find? c then
        todo := ci.getUsedConstantsAsSet.toList ++ todo
  -- `LEANEXPORT_TRUST=file` exports these theorems as axioms, the proofs a measurement leaves out
  let trusted := (← readLines "LEANEXPORT_TRUST").foldl (fun s l => s.insert (toName l.trimAscii.toString)) ({} : NameSet)
  -- `LEANEXPORT_DROP=file` leaves these declarations out, with everything that depends on them, for
  -- checkers that accept no axioms
  let drop := (← readLines "LEANEXPORT_DROP").foldl (fun s l => s.insert (toName l.trimAscii.toString)) ({} : NameSet)
  let constants? ← if drop.isEmpty then pure constants? else do
    let all := constants?.getD (env.constants.toList.map Prod.fst |>.filter (!·.isInternal))
    let mut memo : Std.HashMap Name Bool := {}
    let mut kept := #[]
    for c in all do
      let (d, m) := dropsTo env drop c memo
      memo := m
      unless d do kept := kept.push c
    IO.eprintln s!"[leanexport] dropped {all.length - kept.size} of {all.length} declarations"
    pure (some kept.toList)
  dumpEnv env constants? opts rules ruleDeps trusted
