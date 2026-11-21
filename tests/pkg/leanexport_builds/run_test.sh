# leanexport refuses an import closure whose modules come from different Lean builds, such as a
# library compiled by one toolchain read with `Init` and `Lean` of another. Such a closure is not
# well typed: a structure instance elaborated against one version of `Lean.Meta.Context` misses the
# fields of the other, and every kernel rejects the declaration.
cd "$TMP_DIR"
printf 'def exportBuildsFoo : Nat := 3\n' > ExportBuilds.lean
lean -o ExportBuilds.olean ExportBuilds.lean

LEAN_PATH="$TMP_DIR" leanexport ExportBuilds -- exportBuildsFoo > same.ndjson
grep -q exportBuildsFoo same.ndjson || fail "export of a closure from one build lacks the constant"

# a githash (header bytes 40 to 79) that no build of this test has
printf 'feedfacefeedfacefeedfacefeedfacefeedface' | dd of=ExportBuilds.olean bs=1 seek=40 conv=notrunc 2> /dev/null
if LEAN_PATH="$TMP_DIR" leanexport ExportBuilds -- exportBuildsFoo > mixed.ndjson 2> mixed.err; then
  fail "leanexport accepted modules from different Lean builds"
fi
cat mixed.err
# a loader built with CHECK_OLEAN_VERSION refuses the file before leanexport sees it
grep -qE 'modules from different Lean builds|incompatible header' mixed.err || fail "unexpected error"
