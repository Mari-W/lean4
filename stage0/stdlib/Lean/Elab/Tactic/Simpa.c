// Lean compiler output
// Module: Lean.Elab.Tactic.Simpa
// Imports: public import Lean.Meta.Tactic.TryThis public import Lean.Elab.Tactic.Simp public import Lean.Elab.App
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mkArray3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpTheorems___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instInhabitedTacticM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray2___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Context_setFailIfUnchanged(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_simpGoal(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_rename(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_pushGoal___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_closeMainGoal___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_note(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_LocalContext_getRoundtrippingUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_isValidTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_MVarId_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Simp_DischargeWrapper_with___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tactic_simp_trace;
lean_object* l_Lean_Elab_Tactic_mkSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Context_setAutoUnfold(lean_object*);
lean_object* l_Lean_Elab_Tactic_withSimpDiagnostics___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_focus___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unnecessarySimpa"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(182, 23, 154, 96, 189, 166, 9, 1)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "enable the 'unnecessary simpa' linter"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(219, 182, 224, 198, 198, 122, 225, 30)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(171, 130, 7, 230, 108, 210, 159, 46)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_linter_unnecessarySimpa;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "`simp` already closes the goal"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__2_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Use `simp` instead of `simpa`:"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instInhabitedTacticM___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "only"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "simpAutoUnfold"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "simp!"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpTrace"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "simp\?"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "simpTraceArgsRest"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpArgs"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacticSimp\?!_"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simp\?!"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Type mismatch: After simplification, term"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0 = (const lean_object*)&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0_value;
static const lean_ctor_object l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__1 = (const lean_object*)&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0;
static lean_once_cell_t l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "locationHyp"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "at"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "location"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Occurs check failed: Expression"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__6;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "\ncontains the goal "};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__8;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "this"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__9_value),LEAN_SCALAR_PTR_LITERAL(38, 116, 214, 236, 212, 160, 188, 150)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Try this:"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Elab.Tactic.Simpa"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "_private.Lean.Elab.Tactic.Simpa.0.Lean.Elab.Tactic.Simpa.evalSimpaCore"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__4;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "using"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "using!"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "simpaUsingBang"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "simpaUsingBangArgsRest"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "!"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacticSimpa!_"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simpa!"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12;
static const lean_closure_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_getSimpTheorems___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "simpa"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(197, 186, 141, 63, 66, 208, 56, 113)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(158, 198, 190, 154, 66, 126, 242, 208)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "simpaArgsRest"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__5_value),LEAN_SCALAR_PTR_LITERAL(137, 133, 181, 17, 86, 74, 251, 208)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__7_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Simpa"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "evalSimpa"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 230, 37, 137, 25, 71, 189, 138)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(228, 111, 162, 89, 60, 103, 42, 221)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(90) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0_value),((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1_value),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3_value),((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4_value),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___boxed(lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__7_value),LEAN_SCALAR_PTR_LITERAL(207, 241, 251, 37, 131, 174, 231, 55)}};
static const lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__8_value),LEAN_SCALAR_PTR_LITERAL(8, 141, 117, 125, 176, 67, 228, 117)}};
static const lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "evalSimpaUsingBang"};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 230, 37, 137, 25, 71, 189, 138)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(114, 14, 13, 235, 216, 153, 126, 237)}};
static const lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_));
v___x_52_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_));
v___x_53_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__6_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_));
v___x_54_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4__spec__0(v___x_51_, v___x_52_, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4____boxed(lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_();
return v_res_56_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(lean_object* v_o_57_){
_start:
{
lean_object* v___x_58_; uint8_t v___x_59_; 
v___x_58_ = l_Lean_linter_unnecessarySimpa;
v___x_59_ = l_Lean_Linter_getLinterValue(v___x_58_, v_o_57_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa___boxed(lean_object* v_o_60_){
_start:
{
uint8_t v_res_61_; lean_object* v_r_62_; 
v_res_61_ = l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(v_o_60_);
lean_dec_ref(v_o_60_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3(lean_object* v_opts_63_, lean_object* v_opt_64_){
_start:
{
lean_object* v_name_65_; lean_object* v_defValue_66_; lean_object* v_map_67_; lean_object* v___x_68_; 
v_name_65_ = lean_ctor_get(v_opt_64_, 0);
v_defValue_66_ = lean_ctor_get(v_opt_64_, 1);
v_map_67_ = lean_ctor_get(v_opts_63_, 0);
v___x_68_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_67_, v_name_65_);
if (lean_obj_tag(v___x_68_) == 0)
{
uint8_t v___x_69_; 
v___x_69_ = lean_unbox(v_defValue_66_);
return v___x_69_;
}
else
{
lean_object* v_val_70_; 
v_val_70_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_val_70_);
lean_dec_ref_known(v___x_68_, 1);
if (lean_obj_tag(v_val_70_) == 1)
{
uint8_t v_v_71_; 
v_v_71_ = lean_ctor_get_uint8(v_val_70_, 0);
lean_dec_ref_known(v_val_70_, 0);
return v_v_71_;
}
else
{
uint8_t v___x_72_; 
lean_dec(v_val_70_);
v___x_72_ = lean_unbox(v_defValue_66_);
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_opts_73_, lean_object* v_opt_74_){
_start:
{
uint8_t v_res_75_; lean_object* v_r_76_; 
v_res_75_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3(v_opts_73_, v_opt_74_);
lean_dec_ref(v_opt_74_);
lean_dec_ref(v_opts_73_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0(uint8_t v_suppressElabErrors_85_, lean_object* v_x_86_){
_start:
{
if (lean_obj_tag(v_x_86_) == 1)
{
lean_object* v_pre_87_; 
v_pre_87_ = lean_ctor_get(v_x_86_, 0);
switch(lean_obj_tag(v_pre_87_))
{
case 1:
{
lean_object* v_pre_88_; 
v_pre_88_ = lean_ctor_get(v_pre_87_, 0);
switch(lean_obj_tag(v_pre_88_))
{
case 0:
{
lean_object* v_str_89_; lean_object* v_str_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v_str_89_ = lean_ctor_get(v_x_86_, 1);
v_str_90_ = lean_ctor_get(v_pre_87_, 1);
v___x_91_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__0));
v___x_92_ = lean_string_dec_eq(v_str_90_, v___x_91_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1));
v___x_94_ = lean_string_dec_eq(v_str_90_, v___x_93_);
if (v___x_94_ == 0)
{
return v___x_94_;
}
else
{
lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_95_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__2));
v___x_96_ = lean_string_dec_eq(v_str_89_, v___x_95_);
if (v___x_96_ == 0)
{
return v___x_96_;
}
else
{
return v_suppressElabErrors_85_;
}
}
}
else
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__3));
v___x_98_ = lean_string_dec_eq(v_str_89_, v___x_97_);
if (v___x_98_ == 0)
{
return v___x_98_;
}
else
{
return v_suppressElabErrors_85_;
}
}
}
case 1:
{
lean_object* v_pre_99_; 
v_pre_99_ = lean_ctor_get(v_pre_88_, 0);
if (lean_obj_tag(v_pre_99_) == 0)
{
lean_object* v_str_100_; lean_object* v_str_101_; lean_object* v_str_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v_str_100_ = lean_ctor_get(v_x_86_, 1);
v_str_101_ = lean_ctor_get(v_pre_87_, 1);
v_str_102_ = lean_ctor_get(v_pre_88_, 1);
v___x_103_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__4));
v___x_104_ = lean_string_dec_eq(v_str_102_, v___x_103_);
if (v___x_104_ == 0)
{
return v___x_104_;
}
else
{
lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__5));
v___x_106_ = lean_string_dec_eq(v_str_101_, v___x_105_);
if (v___x_106_ == 0)
{
return v___x_106_;
}
else
{
lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_107_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__6));
v___x_108_ = lean_string_dec_eq(v_str_100_, v___x_107_);
if (v___x_108_ == 0)
{
return v___x_108_;
}
else
{
return v_suppressElabErrors_85_;
}
}
}
}
else
{
uint8_t v___x_109_; 
v___x_109_ = 0;
return v___x_109_;
}
}
default: 
{
uint8_t v___x_110_; 
v___x_110_ = 0;
return v___x_110_;
}
}
}
case 0:
{
lean_object* v_str_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_str_111_ = lean_ctor_get(v_x_86_, 1);
v___x_112_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__7));
v___x_113_ = lean_string_dec_eq(v_str_111_, v___x_112_);
if (v___x_113_ == 0)
{
return v___x_113_;
}
else
{
return v_suppressElabErrors_85_;
}
}
default: 
{
uint8_t v___x_114_; 
v___x_114_ = 0;
return v___x_114_;
}
}
}
else
{
uint8_t v___x_115_; 
v___x_115_ = 0;
return v___x_115_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_116_, lean_object* v_x_117_){
_start:
{
uint8_t v_suppressElabErrors_boxed_118_; uint8_t v_res_119_; lean_object* v_r_120_; 
v_suppressElabErrors_boxed_118_ = lean_unbox(v_suppressElabErrors_116_);
v_res_119_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0(v_suppressElabErrors_boxed_118_, v_x_117_);
lean_dec(v_x_117_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2(lean_object* v_msgData_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v___x_127_; lean_object* v_env_128_; uint8_t v___x_129_; lean_object* v_env_130_; lean_object* v___x_131_; lean_object* v_toCold_132_; lean_object* v_mctx_133_; lean_object* v_lctx_134_; lean_object* v_options_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_127_ = lean_st_ref_get(v___y_125_);
v_env_128_ = lean_ctor_get(v___x_127_, 0);
lean_inc_ref(v_env_128_);
lean_dec(v___x_127_);
v___x_129_ = 0;
v_env_130_ = l_Lean_Environment_setRecordingDeps(v_env_128_, v___x_129_);
v___x_131_ = lean_st_ref_get(v___y_123_);
v_toCold_132_ = lean_ctor_get(v___y_124_, 0);
v_mctx_133_ = lean_ctor_get(v___x_131_, 0);
lean_inc_ref(v_mctx_133_);
lean_dec(v___x_131_);
v_lctx_134_ = lean_ctor_get(v___y_122_, 2);
v_options_135_ = lean_ctor_get(v_toCold_132_, 2);
lean_inc_ref(v_options_135_);
lean_inc_ref(v_lctx_134_);
v___x_136_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_136_, 0, v_env_130_);
lean_ctor_set(v___x_136_, 1, v_mctx_133_);
lean_ctor_set(v___x_136_, 2, v_lctx_134_);
lean_ctor_set(v___x_136_, 3, v_options_135_);
v___x_137_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set(v___x_137_, 1, v_msgData_121_);
v___x_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2(v_msgData_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_147_, lean_object* v_msgData_148_, uint8_t v_severity_149_, uint8_t v_isSilent_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v___y_157_; lean_object* v___y_158_; uint8_t v___y_159_; uint8_t v___y_160_; lean_object* v___y_161_; lean_object* v___y_162_; lean_object* v___y_163_; lean_object* v_toCold_164_; lean_object* v___y_165_; lean_object* v___y_194_; lean_object* v___y_195_; lean_object* v___y_196_; uint8_t v___y_197_; uint8_t v___y_198_; lean_object* v___y_199_; uint8_t v___y_200_; lean_object* v___y_201_; lean_object* v___y_221_; uint8_t v___y_222_; lean_object* v___y_223_; uint8_t v___y_224_; lean_object* v___y_225_; uint8_t v___y_226_; lean_object* v___y_227_; uint8_t v___y_231_; uint8_t v___y_232_; uint8_t v___x_242_; uint8_t v___y_244_; uint8_t v___x_250_; 
v___x_242_ = 2;
v___x_250_ = l_Lean_instBEqMessageSeverity_beq(v_severity_149_, v___x_242_);
if (v___x_250_ == 0)
{
v___y_244_ = v___x_250_;
goto v___jp_243_;
}
else
{
uint8_t v___x_251_; 
lean_inc_ref(v_msgData_148_);
v___x_251_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_148_);
if (v___x_251_ == 0)
{
v___y_244_ = v___x_251_;
goto v___jp_243_;
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_dec_ref(v_msgData_148_);
v___x_252_ = lean_box(0);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
}
v___jp_156_:
{
lean_object* v_currNamespace_166_; lean_object* v_openDecls_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v_env_172_; lean_object* v_nextMacroScope_173_; lean_object* v_ngen_174_; lean_object* v_auxDeclNGen_175_; lean_object* v_traceState_176_; lean_object* v_cache_177_; lean_object* v_recordedDeps_178_; lean_object* v_messages_179_; lean_object* v_infoState_180_; lean_object* v_snapshotTasks_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_192_; 
v_currNamespace_166_ = lean_ctor_get(v_toCold_164_, 4);
v_openDecls_167_ = lean_ctor_get(v_toCold_164_, 5);
lean_inc(v_openDecls_167_);
lean_inc(v_currNamespace_166_);
v___x_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_168_, 0, v_currNamespace_166_);
lean_ctor_set(v___x_168_, 1, v_openDecls_167_);
v___x_169_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v___y_158_);
lean_inc_ref(v___y_163_);
lean_inc_ref(v___y_162_);
v___x_170_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_170_, 0, v___y_162_);
lean_ctor_set(v___x_170_, 1, v___y_157_);
lean_ctor_set(v___x_170_, 2, v___y_161_);
lean_ctor_set(v___x_170_, 3, v___y_163_);
lean_ctor_set(v___x_170_, 4, v___x_169_);
lean_ctor_set_uint8(v___x_170_, sizeof(void*)*5, v___y_160_);
lean_ctor_set_uint8(v___x_170_, sizeof(void*)*5 + 1, v___y_159_);
lean_ctor_set_uint8(v___x_170_, sizeof(void*)*5 + 2, v_isSilent_150_);
v___x_171_ = lean_st_ref_take(v___y_165_);
v_env_172_ = lean_ctor_get(v___x_171_, 0);
v_nextMacroScope_173_ = lean_ctor_get(v___x_171_, 1);
v_ngen_174_ = lean_ctor_get(v___x_171_, 2);
v_auxDeclNGen_175_ = lean_ctor_get(v___x_171_, 3);
v_traceState_176_ = lean_ctor_get(v___x_171_, 4);
v_cache_177_ = lean_ctor_get(v___x_171_, 5);
v_recordedDeps_178_ = lean_ctor_get(v___x_171_, 6);
v_messages_179_ = lean_ctor_get(v___x_171_, 7);
v_infoState_180_ = lean_ctor_get(v___x_171_, 8);
v_snapshotTasks_181_ = lean_ctor_get(v___x_171_, 9);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_192_ == 0)
{
v___x_183_ = v___x_171_;
v_isShared_184_ = v_isSharedCheck_192_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_snapshotTasks_181_);
lean_inc(v_infoState_180_);
lean_inc(v_messages_179_);
lean_inc(v_recordedDeps_178_);
lean_inc(v_cache_177_);
lean_inc(v_traceState_176_);
lean_inc(v_auxDeclNGen_175_);
lean_inc(v_ngen_174_);
lean_inc(v_nextMacroScope_173_);
lean_inc(v_env_172_);
lean_dec(v___x_171_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_192_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_185_ = lean_box(0);
v___x_186_ = l_Lean_MessageLog_add(v___x_170_, v_messages_179_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 7, v___x_186_);
v___x_188_ = v___x_183_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_env_172_);
lean_ctor_set(v_reuseFailAlloc_191_, 1, v_nextMacroScope_173_);
lean_ctor_set(v_reuseFailAlloc_191_, 2, v_ngen_174_);
lean_ctor_set(v_reuseFailAlloc_191_, 3, v_auxDeclNGen_175_);
lean_ctor_set(v_reuseFailAlloc_191_, 4, v_traceState_176_);
lean_ctor_set(v_reuseFailAlloc_191_, 5, v_cache_177_);
lean_ctor_set(v_reuseFailAlloc_191_, 6, v_recordedDeps_178_);
lean_ctor_set(v_reuseFailAlloc_191_, 7, v___x_186_);
lean_ctor_set(v_reuseFailAlloc_191_, 8, v_infoState_180_);
lean_ctor_set(v_reuseFailAlloc_191_, 9, v_snapshotTasks_181_);
v___x_188_ = v_reuseFailAlloc_191_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_st_ref_put(v___y_165_, v___x_188_);
v___x_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_190_, 0, v___x_185_);
return v___x_190_;
}
}
}
v___jp_193_:
{
lean_object* v_fileName_202_; lean_object* v_fileMap_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_219_; 
v_fileName_202_ = lean_ctor_get(v___y_196_, 0);
v_fileMap_203_ = lean_ctor_get(v___y_196_, 1);
v___x_204_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_148_);
v___x_205_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2(v___x_204_, v___y_151_, v___y_152_, v___y_153_, v___y_154_);
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_219_ == 0)
{
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_219_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_219_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
lean_inc_ref_n(v_fileMap_203_, 2);
v___x_210_ = l_Lean_FileMap_toPosition(v_fileMap_203_, v___y_199_);
lean_dec(v___y_199_);
v___x_211_ = l_Lean_FileMap_toPosition(v_fileMap_203_, v___y_201_);
lean_dec(v___y_201_);
v___x_212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
v___x_213_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___closed__0));
if (v___y_200_ == 0)
{
lean_del_object(v___x_208_);
lean_dec_ref(v___y_195_);
v___y_157_ = v___x_210_;
v___y_158_ = v_a_206_;
v___y_159_ = v___y_197_;
v___y_160_ = v___y_198_;
v___y_161_ = v___x_212_;
v___y_162_ = v_fileName_202_;
v___y_163_ = v___x_213_;
v_toCold_164_ = v___y_194_;
v___y_165_ = v___y_154_;
goto v___jp_156_;
}
else
{
uint8_t v___x_214_; 
lean_inc(v_a_206_);
v___x_214_ = l_Lean_MessageData_hasTag(v___y_195_, v_a_206_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; lean_object* v___x_217_; 
lean_dec_ref_known(v___x_212_, 1);
lean_dec_ref(v___x_210_);
lean_dec(v_a_206_);
v___x_215_ = lean_box(0);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_215_);
v___x_217_ = v___x_208_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_215_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
else
{
lean_del_object(v___x_208_);
v___y_157_ = v___x_210_;
v___y_158_ = v_a_206_;
v___y_159_ = v___y_197_;
v___y_160_ = v___y_198_;
v___y_161_ = v___x_212_;
v___y_162_ = v_fileName_202_;
v___y_163_ = v___x_213_;
v_toCold_164_ = v___y_194_;
v___y_165_ = v___y_154_;
goto v___jp_156_;
}
}
}
}
v___jp_220_:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_Syntax_getTailPos_x3f(v___y_225_, v___y_226_);
lean_dec(v___y_225_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_inc(v___y_227_);
v___y_194_ = v___y_221_;
v___y_195_ = v___y_223_;
v___y_196_ = v___y_221_;
v___y_197_ = v___y_224_;
v___y_198_ = v___y_226_;
v___y_199_ = v___y_227_;
v___y_200_ = v___y_222_;
v___y_201_ = v___y_227_;
goto v___jp_193_;
}
else
{
lean_object* v_val_229_; 
v_val_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_val_229_);
lean_dec_ref_known(v___x_228_, 1);
v___y_194_ = v___y_221_;
v___y_195_ = v___y_223_;
v___y_196_ = v___y_221_;
v___y_197_ = v___y_224_;
v___y_198_ = v___y_226_;
v___y_199_ = v___y_227_;
v___y_200_ = v___y_222_;
v___y_201_ = v_val_229_;
goto v___jp_193_;
}
}
v___jp_230_:
{
lean_object* v_toCold_233_; lean_object* v_ref_234_; uint8_t v_suppressElabErrors_235_; lean_object* v___x_236_; lean_object* v___f_237_; lean_object* v_ref_238_; lean_object* v___x_239_; 
v_toCold_233_ = lean_ctor_get(v___y_153_, 0);
v_ref_234_ = lean_ctor_get(v___y_153_, 2);
v_suppressElabErrors_235_ = lean_ctor_get_uint8(v___y_153_, sizeof(void*)*3 + 2);
v___x_236_ = lean_box(v_suppressElabErrors_235_);
v___f_237_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_237_, 0, v___x_236_);
v_ref_238_ = l_Lean_replaceRef(v_ref_147_, v_ref_234_);
v___x_239_ = l_Lean_Syntax_getPos_x3f(v_ref_238_, v___y_231_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v___x_240_; 
v___x_240_ = lean_unsigned_to_nat(0u);
v___y_221_ = v_toCold_233_;
v___y_222_ = v_suppressElabErrors_235_;
v___y_223_ = v___f_237_;
v___y_224_ = v___y_232_;
v___y_225_ = v_ref_238_;
v___y_226_ = v___y_231_;
v___y_227_ = v___x_240_;
goto v___jp_220_;
}
else
{
lean_object* v_val_241_; 
v_val_241_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_val_241_);
lean_dec_ref_known(v___x_239_, 1);
v___y_221_ = v_toCold_233_;
v___y_222_ = v_suppressElabErrors_235_;
v___y_223_ = v___f_237_;
v___y_224_ = v___y_232_;
v___y_225_ = v_ref_238_;
v___y_226_ = v___y_231_;
v___y_227_ = v_val_241_;
goto v___jp_220_;
}
}
v___jp_243_:
{
uint8_t v___x_245_; uint8_t v___x_246_; 
v___x_245_ = 1;
v___x_246_ = l_Lean_instBEqMessageSeverity_beq(v_severity_149_, v___x_245_);
if (v___x_246_ == 0)
{
v___y_231_ = v___y_244_;
v___y_232_ = v_severity_149_;
goto v___jp_230_;
}
else
{
lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_247_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_153_);
v___x_248_ = l_Lean_warningAsError;
v___x_249_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3(v___x_247_, v___x_248_);
lean_dec_ref(v___x_247_);
if (v___x_249_ == 0)
{
v___y_231_ = v___y_244_;
v___y_232_ = v_severity_149_;
goto v___jp_230_;
}
else
{
v___y_231_ = v___y_244_;
v___y_232_ = v___x_242_;
goto v___jp_230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_254_, lean_object* v_msgData_255_, lean_object* v_severity_256_, lean_object* v_isSilent_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_){
_start:
{
uint8_t v_severity_boxed_263_; uint8_t v_isSilent_boxed_264_; lean_object* v_res_265_; 
v_severity_boxed_263_ = lean_unbox(v_severity_256_);
v_isSilent_boxed_264_ = lean_unbox(v_isSilent_257_);
v_res_265_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg(v_ref_254_, v_msgData_255_, v_severity_boxed_263_, v_isSilent_boxed_264_, v___y_258_, v___y_259_, v___y_260_, v___y_261_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v_ref_254_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0(lean_object* v_ref_266_, lean_object* v_msgData_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
uint8_t v___x_277_; uint8_t v___x_278_; lean_object* v___x_279_; 
v___x_277_ = 1;
v___x_278_ = 0;
v___x_279_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg(v_ref_266_, v_msgData_267_, v___x_277_, v___x_278_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0___boxed(lean_object* v_ref_280_, lean_object* v_msgData_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0(v_ref_280_, v_msgData_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_);
lean_dec(v___y_289_);
lean_dec_ref(v___y_288_);
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
lean_dec(v___y_285_);
lean_dec_ref(v___y_284_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
lean_dec(v_ref_280_);
return v_res_291_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = ((lean_object*)(l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__0));
v___x_294_ = l_Lean_stringToMessageData(v___x_293_);
return v___x_294_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_296_ = ((lean_object*)(l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__2));
v___x_297_ = l_Lean_stringToMessageData(v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0(lean_object* v_linterOption_298_, lean_object* v_stx_299_, lean_object* v_msg_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_name_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_328_; 
v_name_310_ = lean_ctor_get(v_linterOption_298_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v_linterOption_298_);
if (v_isSharedCheck_328_ == 0)
{
lean_object* v_unused_329_; 
v_unused_329_ = lean_ctor_get(v_linterOption_298_, 1);
lean_dec(v_unused_329_);
v___x_312_ = v_linterOption_298_;
v_isShared_313_ = v_isSharedCheck_328_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_name_310_);
lean_dec(v_linterOption_298_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_328_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_317_; 
v___x_314_ = lean_obj_once(&l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1, &l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1_once, _init_l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__1);
lean_inc(v_name_310_);
v___x_315_ = l_Lean_MessageData_ofName(v_name_310_);
if (v_isShared_313_ == 0)
{
lean_ctor_set_tag(v___x_312_, 7);
lean_ctor_set(v___x_312_, 1, v___x_315_);
lean_ctor_set(v___x_312_, 0, v___x_314_);
v___x_317_ = v___x_312_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v___x_314_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v___x_315_);
v___x_317_ = v_reuseFailAlloc_327_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v_disable_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_318_ = lean_obj_once(&l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3, &l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3_once, _init_l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___closed__3);
v___x_319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_317_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
v_disable_320_ = l_Lean_MessageData_note(v___x_319_);
v___x_321_ = l_Lean_Linter_linterMessageTag;
v___x_322_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_322_, 0, v_msg_300_);
lean_ctor_set(v___x_322_, 1, v_disable_320_);
v___x_323_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_321_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_324_, 0, v_name_310_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
lean_inc(v_stx_299_);
v___x_325_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_325_, 0, v_stx_299_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
v___x_326_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0(v_stx_299_, v___x_325_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
lean_dec(v_stx_299_);
return v___x_326_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0___boxed(lean_object* v_linterOption_330_, lean_object* v_stx_331_, lean_object* v_msg_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0(v_linterOption_330_, v_stx_331_, v_msg_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
return v_res_342_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1(void){
_start:
{
lean_object* v___x_344_; lean_object* v_msg_345_; 
v___x_344_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__0));
v_msg_345_ = l_Lean_stringToMessageData(v___x_344_);
return v_msg_345_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__5));
v___x_353_ = l_Lean_MessageData_ofFormat(v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa(lean_object* v_initialState_354_, lean_object* v_ref_355_, lean_object* v_replacement_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_){
_start:
{
lean_object* v_msg_367_; lean_object* v___y_368_; lean_object* v___y_369_; lean_object* v___y_370_; lean_object* v___y_371_; lean_object* v___y_372_; lean_object* v___y_373_; lean_object* v___y_374_; lean_object* v___y_375_; lean_object* v_msg_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v_msg_378_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__1);
v___x_379_ = lean_box(0);
lean_inc(v_replacement_356_);
v___x_380_ = l_Lean_Meta_Tactic_TryThis_isValidTactic(v_initialState_354_, v_replacement_356_, v___x_379_, v_a_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_);
if (lean_obj_tag(v___x_380_) == 0)
{
lean_object* v_a_381_; uint8_t v___x_382_; 
v_a_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_a_381_);
lean_dec_ref_known(v___x_380_, 1);
v___x_382_ = lean_unbox(v_a_381_);
lean_dec(v_a_381_);
if (v___x_382_ == 0)
{
lean_dec(v_replacement_356_);
v_msg_367_ = v_msg_378_;
v___y_368_ = v_a_357_;
v___y_369_ = v_a_358_;
v___y_370_ = v_a_359_;
v___y_371_ = v_a_360_;
v___y_372_ = v_a_361_;
v___y_373_ = v_a_362_;
v___y_374_ = v_a_363_;
v___y_375_ = v_a_364_;
goto v___jp_366_;
}
else
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; uint8_t v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; lean_object* v___x_394_; 
v___x_383_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__3));
v___x_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v_replacement_356_);
v___x_385_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v___x_379_);
lean_ctor_set(v___x_385_, 2, v___x_379_);
lean_ctor_set(v___x_385_, 3, v___x_379_);
lean_ctor_set(v___x_385_, 4, v___x_379_);
lean_ctor_set(v___x_385_, 5, v___x_379_);
lean_inc(v_ref_355_);
v___x_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_386_, 0, v_ref_355_);
v___x_387_ = 4;
lean_inc_ref(v___x_386_);
v___x_388_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_388_, 0, v___x_385_);
lean_ctor_set(v___x_388_, 1, v___x_386_);
lean_ctor_set(v___x_388_, 2, v___x_379_);
lean_ctor_set_uint8(v___x_388_, sizeof(void*)*3, v___x_387_);
v___x_389_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__6);
v___x_390_ = lean_unsigned_to_nat(1u);
v___x_391_ = lean_mk_empty_array_with_capacity(v___x_390_);
v___x_392_ = lean_array_push(v___x_391_, v___x_388_);
v___x_393_ = 0;
v___x_394_ = l_Lean_MessageData_hint(v___x_389_, v___x_392_, v___x_386_, v___x_379_, v___x_393_, v_a_363_, v_a_364_);
lean_dec_ref(v___x_392_);
if (lean_obj_tag(v___x_394_) == 0)
{
lean_object* v_a_395_; lean_object* v___x_396_; 
v_a_395_ = lean_ctor_get(v___x_394_, 0);
lean_inc(v_a_395_);
lean_dec_ref_known(v___x_394_, 1);
v___x_396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_396_, 0, v_msg_378_);
lean_ctor_set(v___x_396_, 1, v_a_395_);
v_msg_367_ = v___x_396_;
v___y_368_ = v_a_357_;
v___y_369_ = v_a_358_;
v___y_370_ = v_a_359_;
v___y_371_ = v_a_360_;
v___y_372_ = v_a_361_;
v___y_373_ = v_a_362_;
v___y_374_ = v_a_363_;
v___y_375_ = v_a_364_;
goto v___jp_366_;
}
else
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_404_; 
lean_dec(v_ref_355_);
v_a_397_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_404_ == 0)
{
v___x_399_ = v___x_394_;
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_394_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_a_397_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
}
else
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_412_; 
lean_dec(v_replacement_356_);
lean_dec(v_ref_355_);
v_a_405_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_412_ == 0)
{
v___x_407_ = v___x_380_;
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_380_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_410_; 
if (v_isShared_408_ == 0)
{
v___x_410_ = v___x_407_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_405_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
v___jp_366_:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = l_Lean_linter_unnecessarySimpa;
v___x_377_ = l_Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0(v___x_376_, v_ref_355_, v_msg_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
return v___x_377_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___boxed(lean_object* v_initialState_413_, lean_object* v_ref_414_, lean_object* v_replacement_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa(v_initialState_413_, v_ref_414_, v_replacement_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_, v_a_422_, v_a_423_);
lean_dec(v_a_423_);
lean_dec_ref(v_a_422_);
lean_dec(v_a_421_);
lean_dec_ref(v_a_420_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1(lean_object* v_ref_426_, lean_object* v_msgData_427_, uint8_t v_severity_428_, uint8_t v_isSilent_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg(v_ref_426_, v_msgData_427_, v_severity_428_, v_isSilent_429_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_440_, lean_object* v_msgData_441_, lean_object* v_severity_442_, lean_object* v_isSilent_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
uint8_t v_severity_boxed_453_; uint8_t v_isSilent_boxed_454_; lean_object* v_res_455_; 
v_severity_boxed_453_ = lean_unbox(v_severity_442_);
v_isSilent_boxed_454_ = lean_unbox(v_isSilent_443_);
v_res_455_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1(v_ref_440_, v_msgData_441_, v_severity_boxed_453_, v_isSilent_boxed_454_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
lean_dec(v___y_447_);
lean_dec_ref(v___y_446_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec(v_ref_440_);
return v_res_455_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_456_ = lean_box(0);
v___x_457_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v___x_456_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg(){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___closed__0);
v___x_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg___boxed(lean_object* v___y_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0(lean_object* v_00_u03b1_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___boxed(lean_object* v_00_u03b1_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0(v_00_u03b1_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0(lean_object* v_x_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
lean_object* v___x_496_; 
lean_inc(v___y_490_);
lean_inc_ref(v___y_489_);
lean_inc(v___y_488_);
lean_inc_ref(v___y_487_);
v___x_496_ = lean_apply_9(v_x_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, lean_box(0));
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0___boxed(lean_object* v_x_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0(v_x_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(lean_object* v_mvarId_508_, lean_object* v_x_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
lean_object* v___f_519_; lean_object* v___x_520_; 
lean_inc(v___y_513_);
lean_inc_ref(v___y_512_);
lean_inc(v___y_511_);
lean_inc_ref(v___y_510_);
v___f_519_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_519_, 0, v_x_509_);
lean_closure_set(v___f_519_, 1, v___y_510_);
lean_closure_set(v___f_519_, 2, v___y_511_);
lean_closure_set(v___f_519_, 3, v___y_512_);
lean_closure_set(v___f_519_, 4, v___y_513_);
v___x_520_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_508_, v___f_519_, v___y_514_, v___y_515_, v___y_516_, v___y_517_);
if (lean_obj_tag(v___x_520_) == 0)
{
return v___x_520_;
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_520_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_520_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg___boxed(lean_object* v_mvarId_529_, lean_object* v_x_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(v_mvarId_529_, v_x_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3(lean_object* v_00_u03b1_541_, lean_object* v_mvarId_542_, lean_object* v_x_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(v_mvarId_542_, v_x_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___boxed(lean_object* v_00_u03b1_554_, lean_object* v_mvarId_555_, lean_object* v_x_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3(v_00_u03b1_554_, v_mvarId_555_, v_x_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
return v_res_566_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_567_ = lean_unsigned_to_nat(32u);
v___x_568_ = lean_mk_empty_array_with_capacity(v___x_567_);
v___x_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
return v___x_569_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1(void){
_start:
{
size_t v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_570_ = ((size_t)5ULL);
v___x_571_ = lean_unsigned_to_nat(0u);
v___x_572_ = lean_unsigned_to_nat(32u);
v___x_573_ = lean_mk_empty_array_with_capacity(v___x_572_);
v___x_574_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__0);
v___x_575_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_575_, 0, v___x_574_);
lean_ctor_set(v___x_575_, 1, v___x_573_);
lean_ctor_set(v___x_575_, 2, v___x_571_);
lean_ctor_set(v___x_575_, 3, v___x_571_);
lean_ctor_set_usize(v___x_575_, 4, v___x_570_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(lean_object* v___y_576_){
_start:
{
lean_object* v___x_578_; lean_object* v_infoState_579_; lean_object* v_trees_580_; lean_object* v___x_581_; lean_object* v_infoState_582_; lean_object* v_env_583_; lean_object* v_nextMacroScope_584_; lean_object* v_ngen_585_; lean_object* v_auxDeclNGen_586_; lean_object* v_traceState_587_; lean_object* v_cache_588_; lean_object* v_recordedDeps_589_; lean_object* v_messages_590_; lean_object* v_snapshotTasks_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_612_; 
v___x_578_ = lean_st_ref_get(v___y_576_);
v_infoState_579_ = lean_ctor_get(v___x_578_, 8);
lean_inc_ref(v_infoState_579_);
lean_dec(v___x_578_);
v_trees_580_ = lean_ctor_get(v_infoState_579_, 2);
lean_inc_ref(v_trees_580_);
lean_dec_ref(v_infoState_579_);
v___x_581_ = lean_st_ref_take(v___y_576_);
v_infoState_582_ = lean_ctor_get(v___x_581_, 8);
v_env_583_ = lean_ctor_get(v___x_581_, 0);
v_nextMacroScope_584_ = lean_ctor_get(v___x_581_, 1);
v_ngen_585_ = lean_ctor_get(v___x_581_, 2);
v_auxDeclNGen_586_ = lean_ctor_get(v___x_581_, 3);
v_traceState_587_ = lean_ctor_get(v___x_581_, 4);
v_cache_588_ = lean_ctor_get(v___x_581_, 5);
v_recordedDeps_589_ = lean_ctor_get(v___x_581_, 6);
v_messages_590_ = lean_ctor_get(v___x_581_, 7);
v_snapshotTasks_591_ = lean_ctor_get(v___x_581_, 9);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_612_ == 0)
{
v___x_593_ = v___x_581_;
v_isShared_594_ = v_isSharedCheck_612_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_snapshotTasks_591_);
lean_inc(v_infoState_582_);
lean_inc(v_messages_590_);
lean_inc(v_recordedDeps_589_);
lean_inc(v_cache_588_);
lean_inc(v_traceState_587_);
lean_inc(v_auxDeclNGen_586_);
lean_inc(v_ngen_585_);
lean_inc(v_nextMacroScope_584_);
lean_inc(v_env_583_);
lean_dec(v___x_581_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_612_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
uint8_t v_enabled_595_; lean_object* v_assignment_596_; lean_object* v_lazyAssignment_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_610_; 
v_enabled_595_ = lean_ctor_get_uint8(v_infoState_582_, sizeof(void*)*3);
v_assignment_596_ = lean_ctor_get(v_infoState_582_, 0);
v_lazyAssignment_597_ = lean_ctor_get(v_infoState_582_, 1);
v_isSharedCheck_610_ = !lean_is_exclusive(v_infoState_582_);
if (v_isSharedCheck_610_ == 0)
{
lean_object* v_unused_611_; 
v_unused_611_ = lean_ctor_get(v_infoState_582_, 2);
lean_dec(v_unused_611_);
v___x_599_ = v_infoState_582_;
v_isShared_600_ = v_isSharedCheck_610_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_lazyAssignment_597_);
lean_inc(v_assignment_596_);
lean_dec(v_infoState_582_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_610_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_601_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___closed__1);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 2, v___x_601_);
v___x_603_ = v___x_599_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_assignment_596_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_lazyAssignment_597_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v___x_601_);
lean_ctor_set_uint8(v_reuseFailAlloc_609_, sizeof(void*)*3, v_enabled_595_);
v___x_603_ = v_reuseFailAlloc_609_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
lean_object* v___x_605_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 8, v___x_603_);
v___x_605_ = v___x_593_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_env_583_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_nextMacroScope_584_);
lean_ctor_set(v_reuseFailAlloc_608_, 2, v_ngen_585_);
lean_ctor_set(v_reuseFailAlloc_608_, 3, v_auxDeclNGen_586_);
lean_ctor_set(v_reuseFailAlloc_608_, 4, v_traceState_587_);
lean_ctor_set(v_reuseFailAlloc_608_, 5, v_cache_588_);
lean_ctor_set(v_reuseFailAlloc_608_, 6, v_recordedDeps_589_);
lean_ctor_set(v_reuseFailAlloc_608_, 7, v_messages_590_);
lean_ctor_set(v_reuseFailAlloc_608_, 8, v___x_603_);
lean_ctor_set(v_reuseFailAlloc_608_, 9, v_snapshotTasks_591_);
v___x_605_ = v_reuseFailAlloc_608_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = lean_st_ref_put(v___y_576_, v___x_605_);
v___x_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_607_, 0, v_trees_580_);
return v___x_607_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg___boxed(lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(v___y_613_);
lean_dec(v___y_613_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6(lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(v___y_623_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___boxed(lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6(v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
lean_dec(v___y_633_);
lean_dec_ref(v___y_632_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec(v___y_629_);
lean_dec_ref(v___y_628_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(lean_object* v_msg_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v___f_647_; lean_object* v___x_85127__overap_648_; lean_object* v___x_649_; 
v___f_647_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___closed__0));
v___x_85127__overap_648_ = lean_panic_fn_borrowed(v___f_647_, v_msg_637_);
lean_inc(v___y_645_);
lean_inc_ref(v___y_644_);
lean_inc(v___y_643_);
lean_inc_ref(v___y_642_);
lean_inc(v___y_641_);
lean_inc_ref(v___y_640_);
lean_inc(v___y_639_);
lean_inc_ref(v___y_638_);
v___x_649_ = lean_apply_9(v___x_85127__overap_648_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_, lean_box(0));
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8___boxed(lean_object* v_msg_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v_msg_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v___y_654_);
lean_dec_ref(v___y_653_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0(lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
lean_object* v_ref_670_; uint8_t v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v_ref_670_ = lean_ctor_get(v___y_667_, 2);
v___x_671_ = 0;
v___x_672_ = l_Lean_SourceInfo_fromRef(v_ref_670_, v___x_671_);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0___boxed(lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__0(v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
return v_res_683_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3(void){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = l_Array_mkArray0___redArg();
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1(lean_object* v_squeeze_700_, lean_object* v_unfold_701_, lean_object* v___x_702_, lean_object* v___x_703_, lean_object* v___x_704_, lean_object* v___x_705_, lean_object* v___x_706_, lean_object* v_args_707_, lean_object* v_only_708_, uint8_t v___x_709_, lean_object* v___y_710_, lean_object* v_loc_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
if (lean_obj_tag(v_squeeze_700_) == 0)
{
uint8_t v___x_721_; 
v___x_721_ = 0;
if (lean_obj_tag(v_unfold_701_) == 0)
{
lean_object* v_ref_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___y_730_; lean_object* v___y_731_; lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_748_; lean_object* v___y_749_; lean_object* v___y_762_; 
v_ref_722_ = lean_ctor_get(v___y_718_, 2);
v___x_723_ = l_Lean_SourceInfo_fromRef(v_ref_722_, v___x_721_);
v___x_724_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__0));
v___x_725_ = l_Lean_Name_mkStr4(v___x_702_, v___x_703_, v___x_704_, v___x_724_);
lean_inc(v___x_723_);
v___x_726_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_723_);
lean_ctor_set(v___x_726_, 1, v___x_724_);
v___x_727_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_728_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
if (lean_obj_tag(v___y_710_) == 0)
{
lean_object* v___x_771_; 
v___x_771_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_762_ = v___x_771_;
goto v___jp_761_;
}
else
{
lean_object* v_val_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v_val_772_ = lean_ctor_get(v___y_710_, 0);
lean_inc(v_val_772_);
lean_dec_ref_known(v___y_710_, 1);
v___x_773_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___x_774_ = lean_array_push(v___x_773_, v_val_772_);
v___y_762_ = v___x_774_;
goto v___jp_761_;
}
v___jp_729_:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_734_ = l_Array_append___redArg(v___x_728_, v___y_733_);
lean_dec_ref(v___y_733_);
lean_inc(v___x_723_);
v___x_735_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_735_, 0, v___x_723_);
lean_ctor_set(v___x_735_, 1, v___x_727_);
lean_ctor_set(v___x_735_, 2, v___x_734_);
v___x_736_ = l_Lean_Syntax_node6(v___x_723_, v___x_725_, v___x_726_, v___x_705_, v___y_732_, v___y_731_, v___y_730_, v___x_735_);
v___x_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
return v___x_737_;
}
v___jp_738_:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = l_Array_append___redArg(v___x_728_, v___y_741_);
lean_dec_ref(v___y_741_);
lean_inc(v___x_723_);
v___x_743_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_743_, 0, v___x_723_);
lean_ctor_set(v___x_743_, 1, v___x_727_);
lean_ctor_set(v___x_743_, 2, v___x_742_);
if (lean_obj_tag(v_loc_711_) == 1)
{
lean_object* v_val_744_; lean_object* v___x_745_; 
v_val_744_ = lean_ctor_get(v_loc_711_, 0);
lean_inc(v_val_744_);
lean_dec_ref_known(v_loc_711_, 1);
v___x_745_ = l_Array_mkArray1___redArg(v_val_744_);
v___y_730_ = v___x_743_;
v___y_731_ = v___y_739_;
v___y_732_ = v___y_740_;
v___y_733_ = v___x_745_;
goto v___jp_729_;
}
else
{
lean_object* v___x_746_; 
lean_dec(v_loc_711_);
v___x_746_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_730_ = v___x_743_;
v___y_731_ = v___y_739_;
v___y_732_ = v___y_740_;
v___y_733_ = v___x_746_;
goto v___jp_729_;
}
}
v___jp_747_:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = l_Array_append___redArg(v___x_728_, v___y_749_);
lean_dec_ref(v___y_749_);
lean_inc(v___x_723_);
v___x_751_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_751_, 0, v___x_723_);
lean_ctor_set(v___x_751_, 1, v___x_727_);
lean_ctor_set(v___x_751_, 2, v___x_750_);
if (lean_obj_tag(v_args_707_) == 1)
{
lean_object* v_val_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v_val_752_ = lean_ctor_get(v_args_707_, 0);
v___x_753_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___x_723_, 3);
v___x_754_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_723_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
v___x_755_ = l_Array_append___redArg(v___x_728_, v_val_752_);
v___x_756_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_756_, 0, v___x_723_);
lean_ctor_set(v___x_756_, 1, v___x_727_);
lean_ctor_set(v___x_756_, 2, v___x_755_);
v___x_757_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_758_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_758_, 0, v___x_723_);
lean_ctor_set(v___x_758_, 1, v___x_757_);
v___x_759_ = l_Array_mkArray3___redArg(v___x_754_, v___x_756_, v___x_758_);
v___y_739_ = v___x_751_;
v___y_740_ = v___y_748_;
v___y_741_ = v___x_759_;
goto v___jp_738_;
}
else
{
lean_object* v___x_760_; 
v___x_760_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_739_ = v___x_751_;
v___y_740_ = v___y_748_;
v___y_741_ = v___x_760_;
goto v___jp_738_;
}
}
v___jp_761_:
{
lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_763_ = l_Array_append___redArg(v___x_728_, v___y_762_);
lean_dec_ref(v___y_762_);
lean_inc(v___x_723_);
v___x_764_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_764_, 0, v___x_723_);
lean_ctor_set(v___x_764_, 1, v___x_727_);
lean_ctor_set(v___x_764_, 2, v___x_763_);
if (lean_obj_tag(v_only_708_) == 1)
{
lean_object* v_val_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_val_765_ = lean_ctor_get(v_only_708_, 0);
v___x_766_ = l_Lean_SourceInfo_fromRef(v_val_765_, v___x_709_);
v___x_767_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_768_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_768_, 0, v___x_766_);
lean_ctor_set(v___x_768_, 1, v___x_767_);
v___x_769_ = l_Array_mkArray1___redArg(v___x_768_);
v___y_748_ = v___x_764_;
v___y_749_ = v___x_769_;
goto v___jp_747_;
}
else
{
lean_object* v___x_770_; 
v___x_770_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_748_ = v___x_764_;
v___y_749_ = v___x_770_;
goto v___jp_747_;
}
}
}
else
{
lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_834_; 
v_isSharedCheck_834_ = !lean_is_exclusive(v_unfold_701_);
if (v_isSharedCheck_834_ == 0)
{
lean_object* v_unused_835_; 
v_unused_835_ = lean_ctor_get(v_unfold_701_, 0);
lean_dec(v_unused_835_);
v___x_776_ = v_unfold_701_;
v_isShared_777_ = v_isSharedCheck_834_;
goto v_resetjp_775_;
}
else
{
lean_dec(v_unfold_701_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_834_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v_ref_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___y_787_; lean_object* v___y_788_; lean_object* v___y_789_; lean_object* v___y_790_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_807_; lean_object* v___y_808_; lean_object* v___y_821_; 
v_ref_778_ = lean_ctor_get(v___y_718_, 2);
v___x_779_ = l_Lean_SourceInfo_fromRef(v_ref_778_, v___x_721_);
v___x_780_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__7));
v___x_781_ = l_Lean_Name_mkStr4(v___x_702_, v___x_703_, v___x_704_, v___x_780_);
v___x_782_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__8));
lean_inc(v___x_779_);
v___x_783_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_779_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_785_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
if (lean_obj_tag(v___y_710_) == 0)
{
lean_object* v___x_830_; 
v___x_830_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_821_ = v___x_830_;
goto v___jp_820_;
}
else
{
lean_object* v_val_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v_val_831_ = lean_ctor_get(v___y_710_, 0);
lean_inc(v_val_831_);
lean_dec_ref_known(v___y_710_, 1);
v___x_832_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___x_833_ = lean_array_push(v___x_832_, v_val_831_);
v___y_821_ = v___x_833_;
goto v___jp_820_;
}
v___jp_786_:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_795_; 
v___x_791_ = l_Array_append___redArg(v___x_785_, v___y_790_);
lean_dec_ref(v___y_790_);
lean_inc(v___x_779_);
v___x_792_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_792_, 0, v___x_779_);
lean_ctor_set(v___x_792_, 1, v___x_784_);
lean_ctor_set(v___x_792_, 2, v___x_791_);
v___x_793_ = l_Lean_Syntax_node6(v___x_779_, v___x_781_, v___x_783_, v___x_705_, v___y_788_, v___y_787_, v___y_789_, v___x_792_);
if (v_isShared_777_ == 0)
{
lean_ctor_set_tag(v___x_776_, 0);
lean_ctor_set(v___x_776_, 0, v___x_793_);
v___x_795_ = v___x_776_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_793_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
v___jp_797_:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = l_Array_append___redArg(v___x_785_, v___y_800_);
lean_dec_ref(v___y_800_);
lean_inc(v___x_779_);
v___x_802_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_802_, 0, v___x_779_);
lean_ctor_set(v___x_802_, 1, v___x_784_);
lean_ctor_set(v___x_802_, 2, v___x_801_);
if (lean_obj_tag(v_loc_711_) == 1)
{
lean_object* v_val_803_; lean_object* v___x_804_; 
v_val_803_ = lean_ctor_get(v_loc_711_, 0);
lean_inc(v_val_803_);
lean_dec_ref_known(v_loc_711_, 1);
v___x_804_ = l_Array_mkArray1___redArg(v_val_803_);
v___y_787_ = v___y_798_;
v___y_788_ = v___y_799_;
v___y_789_ = v___x_802_;
v___y_790_ = v___x_804_;
goto v___jp_786_;
}
else
{
lean_object* v___x_805_; 
lean_dec(v_loc_711_);
v___x_805_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_787_ = v___y_798_;
v___y_788_ = v___y_799_;
v___y_789_ = v___x_802_;
v___y_790_ = v___x_805_;
goto v___jp_786_;
}
}
v___jp_806_:
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = l_Array_append___redArg(v___x_785_, v___y_808_);
lean_dec_ref(v___y_808_);
lean_inc(v___x_779_);
v___x_810_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_810_, 0, v___x_779_);
lean_ctor_set(v___x_810_, 1, v___x_784_);
lean_ctor_set(v___x_810_, 2, v___x_809_);
if (lean_obj_tag(v_args_707_) == 1)
{
lean_object* v_val_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v_val_811_ = lean_ctor_get(v_args_707_, 0);
v___x_812_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___x_779_, 3);
v___x_813_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_779_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = l_Array_append___redArg(v___x_785_, v_val_811_);
v___x_815_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_815_, 0, v___x_779_);
lean_ctor_set(v___x_815_, 1, v___x_784_);
lean_ctor_set(v___x_815_, 2, v___x_814_);
v___x_816_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_817_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_779_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
v___x_818_ = l_Array_mkArray3___redArg(v___x_813_, v___x_815_, v___x_817_);
v___y_798_ = v___x_810_;
v___y_799_ = v___y_807_;
v___y_800_ = v___x_818_;
goto v___jp_797_;
}
else
{
lean_object* v___x_819_; 
v___x_819_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_798_ = v___x_810_;
v___y_799_ = v___y_807_;
v___y_800_ = v___x_819_;
goto v___jp_797_;
}
}
v___jp_820_:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = l_Array_append___redArg(v___x_785_, v___y_821_);
lean_dec_ref(v___y_821_);
lean_inc(v___x_779_);
v___x_823_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_823_, 0, v___x_779_);
lean_ctor_set(v___x_823_, 1, v___x_784_);
lean_ctor_set(v___x_823_, 2, v___x_822_);
if (lean_obj_tag(v_only_708_) == 1)
{
lean_object* v_val_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_val_824_ = lean_ctor_get(v_only_708_, 0);
v___x_825_ = l_Lean_SourceInfo_fromRef(v_val_824_, v___x_709_);
v___x_826_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_827_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_825_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
v___x_828_ = l_Array_mkArray1___redArg(v___x_827_);
v___y_807_ = v___x_823_;
v___y_808_ = v___x_828_;
goto v___jp_806_;
}
else
{
lean_object* v___x_829_; 
v___x_829_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_807_ = v___x_823_;
v___y_808_ = v___x_829_;
goto v___jp_806_;
}
}
}
}
}
else
{
lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_971_; 
v_isSharedCheck_971_ = !lean_is_exclusive(v_squeeze_700_);
if (v_isSharedCheck_971_ == 0)
{
lean_object* v_unused_972_; 
v_unused_972_ = lean_ctor_get(v_squeeze_700_, 0);
lean_dec(v_unused_972_);
v___x_837_ = v_squeeze_700_;
v_isShared_838_ = v_isSharedCheck_971_;
goto v_resetjp_836_;
}
else
{
lean_dec(v_squeeze_700_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_971_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
if (lean_obj_tag(v_unfold_701_) == 0)
{
lean_object* v_ref_839_; uint8_t v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_890_; 
v_ref_839_ = lean_ctor_get(v___y_718_, 2);
v___x_840_ = 0;
v___x_841_ = l_Lean_SourceInfo_fromRef(v_ref_839_, v___x_840_);
v___x_842_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__9));
lean_inc_ref_n(v___x_704_, 2);
lean_inc_ref_n(v___x_703_, 2);
lean_inc_ref_n(v___x_702_, 2);
v___x_843_ = l_Lean_Name_mkStr4(v___x_702_, v___x_703_, v___x_704_, v___x_842_);
v___x_844_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__10));
lean_inc_n(v___x_841_, 2);
v___x_845_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_841_);
lean_ctor_set(v___x_845_, 1, v___x_844_);
v___x_846_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_847_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
v___x_848_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_848_, 0, v___x_841_);
lean_ctor_set(v___x_848_, 1, v___x_846_);
lean_ctor_set(v___x_848_, 2, v___x_847_);
v___x_849_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__11));
v___x_850_ = l_Lean_Name_mkStr4(v___x_702_, v___x_703_, v___x_704_, v___x_849_);
if (lean_obj_tag(v___y_710_) == 0)
{
lean_object* v___x_899_; 
v___x_899_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_890_ = v___x_899_;
goto v___jp_889_;
}
else
{
lean_object* v_val_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v_val_900_ = lean_ctor_get(v___y_710_, 0);
lean_inc(v_val_900_);
lean_dec_ref_known(v___y_710_, 1);
v___x_901_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___x_902_ = lean_array_push(v___x_901_, v_val_900_);
v___y_890_ = v___x_902_;
goto v___jp_889_;
}
v___jp_851_:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_861_; 
v___x_856_ = l_Array_append___redArg(v___x_847_, v___y_855_);
lean_dec_ref(v___y_855_);
lean_inc_n(v___x_841_, 2);
v___x_857_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_857_, 0, v___x_841_);
lean_ctor_set(v___x_857_, 1, v___x_846_);
lean_ctor_set(v___x_857_, 2, v___x_856_);
v___x_858_ = l_Lean_Syntax_node5(v___x_841_, v___x_850_, v___x_705_, v___y_853_, v___y_854_, v___y_852_, v___x_857_);
v___x_859_ = l_Lean_Syntax_node3(v___x_841_, v___x_843_, v___x_845_, v___x_848_, v___x_858_);
if (v_isShared_838_ == 0)
{
lean_ctor_set_tag(v___x_837_, 0);
lean_ctor_set(v___x_837_, 0, v___x_859_);
v___x_861_ = v___x_837_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_859_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
v___jp_863_:
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = l_Array_append___redArg(v___x_847_, v___y_866_);
lean_dec_ref(v___y_866_);
lean_inc(v___x_841_);
v___x_868_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_868_, 0, v___x_841_);
lean_ctor_set(v___x_868_, 1, v___x_846_);
lean_ctor_set(v___x_868_, 2, v___x_867_);
if (lean_obj_tag(v_loc_711_) == 1)
{
lean_object* v_val_869_; lean_object* v___x_870_; 
v_val_869_ = lean_ctor_get(v_loc_711_, 0);
lean_inc(v_val_869_);
lean_dec_ref_known(v_loc_711_, 1);
v___x_870_ = l_Array_mkArray1___redArg(v_val_869_);
v___y_852_ = v___x_868_;
v___y_853_ = v___y_864_;
v___y_854_ = v___y_865_;
v___y_855_ = v___x_870_;
goto v___jp_851_;
}
else
{
lean_object* v___x_871_; 
lean_dec(v_loc_711_);
v___x_871_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_852_ = v___x_868_;
v___y_853_ = v___y_864_;
v___y_854_ = v___y_865_;
v___y_855_ = v___x_871_;
goto v___jp_851_;
}
}
v___jp_872_:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = l_Array_append___redArg(v___x_847_, v___y_874_);
lean_dec_ref(v___y_874_);
lean_inc(v___x_841_);
v___x_876_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_876_, 0, v___x_841_);
lean_ctor_set(v___x_876_, 1, v___x_846_);
lean_ctor_set(v___x_876_, 2, v___x_875_);
if (lean_obj_tag(v_args_707_) == 1)
{
lean_object* v_val_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v_val_877_ = lean_ctor_get(v_args_707_, 0);
v___x_878_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_879_ = l_Lean_Name_mkStr4(v___x_702_, v___x_703_, v___x_704_, v___x_878_);
v___x_880_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___x_841_, 4);
v___x_881_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_841_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = l_Array_append___redArg(v___x_847_, v_val_877_);
v___x_883_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_883_, 0, v___x_841_);
lean_ctor_set(v___x_883_, 1, v___x_846_);
lean_ctor_set(v___x_883_, 2, v___x_882_);
v___x_884_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_885_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_841_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = l_Lean_Syntax_node3(v___x_841_, v___x_879_, v___x_881_, v___x_883_, v___x_885_);
v___x_887_ = l_Array_mkArray1___redArg(v___x_886_);
v___y_864_ = v___y_873_;
v___y_865_ = v___x_876_;
v___y_866_ = v___x_887_;
goto v___jp_863_;
}
else
{
lean_object* v___x_888_; 
lean_dec_ref(v___x_704_);
lean_dec_ref(v___x_703_);
lean_dec_ref(v___x_702_);
v___x_888_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_864_ = v___y_873_;
v___y_865_ = v___x_876_;
v___y_866_ = v___x_888_;
goto v___jp_863_;
}
}
v___jp_889_:
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = l_Array_append___redArg(v___x_847_, v___y_890_);
lean_dec_ref(v___y_890_);
lean_inc(v___x_841_);
v___x_892_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_892_, 0, v___x_841_);
lean_ctor_set(v___x_892_, 1, v___x_846_);
lean_ctor_set(v___x_892_, 2, v___x_891_);
if (lean_obj_tag(v_only_708_) == 1)
{
lean_object* v_val_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_val_893_ = lean_ctor_get(v_only_708_, 0);
v___x_894_ = l_Lean_SourceInfo_fromRef(v_val_893_, v___x_709_);
v___x_895_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_896_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_894_);
lean_ctor_set(v___x_896_, 1, v___x_895_);
v___x_897_ = l_Array_mkArray1___redArg(v___x_896_);
v___y_873_ = v___x_892_;
v___y_874_ = v___x_897_;
goto v___jp_872_;
}
else
{
lean_object* v___x_898_; 
v___x_898_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_873_ = v___x_892_;
v___y_874_ = v___x_898_;
goto v___jp_872_;
}
}
}
else
{
lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_969_; 
lean_del_object(v___x_837_);
v_isSharedCheck_969_ = !lean_is_exclusive(v_unfold_701_);
if (v_isSharedCheck_969_ == 0)
{
lean_object* v_unused_970_; 
v_unused_970_ = lean_ctor_get(v_unfold_701_, 0);
lean_dec(v_unused_970_);
v___x_904_ = v_unfold_701_;
v_isShared_905_ = v_isSharedCheck_969_;
goto v_resetjp_903_;
}
else
{
lean_dec(v_unfold_701_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_969_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v_ref_906_; uint8_t v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_939_; lean_object* v___y_940_; lean_object* v___y_956_; 
v_ref_906_ = lean_ctor_get(v___y_718_, 2);
v___x_907_ = 0;
v___x_908_ = l_Lean_SourceInfo_fromRef(v_ref_906_, v___x_907_);
v___x_909_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__13));
lean_inc_ref_n(v___x_704_, 2);
lean_inc_ref_n(v___x_703_, 2);
lean_inc_ref_n(v___x_702_, 2);
v___x_910_ = l_Lean_Name_mkStr4(v___x_702_, v___x_703_, v___x_704_, v___x_909_);
v___x_911_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__14));
lean_inc(v___x_908_);
v___x_912_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_908_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
v___x_913_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__11));
v___x_914_ = l_Lean_Name_mkStr4(v___x_702_, v___x_703_, v___x_704_, v___x_913_);
v___x_915_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_916_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
if (lean_obj_tag(v___y_710_) == 0)
{
lean_object* v___x_965_; 
v___x_965_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_956_ = v___x_965_;
goto v___jp_955_;
}
else
{
lean_object* v_val_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v_val_966_ = lean_ctor_get(v___y_710_, 0);
lean_inc(v_val_966_);
lean_dec_ref_known(v___y_710_, 1);
v___x_967_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___x_968_ = lean_array_push(v___x_967_, v_val_966_);
v___y_956_ = v___x_968_;
goto v___jp_955_;
}
v___jp_917_:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_927_; 
v___x_922_ = l_Array_append___redArg(v___x_916_, v___y_921_);
lean_dec_ref(v___y_921_);
lean_inc_n(v___x_908_, 2);
v___x_923_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_923_, 0, v___x_908_);
lean_ctor_set(v___x_923_, 1, v___x_915_);
lean_ctor_set(v___x_923_, 2, v___x_922_);
v___x_924_ = l_Lean_Syntax_node5(v___x_908_, v___x_914_, v___x_705_, v___y_920_, v___y_919_, v___y_918_, v___x_923_);
v___x_925_ = l_Lean_Syntax_node2(v___x_908_, v___x_910_, v___x_912_, v___x_924_);
if (v_isShared_905_ == 0)
{
lean_ctor_set_tag(v___x_904_, 0);
lean_ctor_set(v___x_904_, 0, v___x_925_);
v___x_927_ = v___x_904_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
v___jp_929_:
{
lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_933_ = l_Array_append___redArg(v___x_916_, v___y_932_);
lean_dec_ref(v___y_932_);
lean_inc(v___x_908_);
v___x_934_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_934_, 0, v___x_908_);
lean_ctor_set(v___x_934_, 1, v___x_915_);
lean_ctor_set(v___x_934_, 2, v___x_933_);
if (lean_obj_tag(v_loc_711_) == 1)
{
lean_object* v_val_935_; lean_object* v___x_936_; 
v_val_935_ = lean_ctor_get(v_loc_711_, 0);
lean_inc(v_val_935_);
lean_dec_ref_known(v_loc_711_, 1);
v___x_936_ = l_Array_mkArray1___redArg(v_val_935_);
v___y_918_ = v___x_934_;
v___y_919_ = v___y_931_;
v___y_920_ = v___y_930_;
v___y_921_ = v___x_936_;
goto v___jp_917_;
}
else
{
lean_object* v___x_937_; 
lean_dec(v_loc_711_);
v___x_937_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_918_ = v___x_934_;
v___y_919_ = v___y_931_;
v___y_920_ = v___y_930_;
v___y_921_ = v___x_937_;
goto v___jp_917_;
}
}
v___jp_938_:
{
lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_941_ = l_Array_append___redArg(v___x_916_, v___y_940_);
lean_dec_ref(v___y_940_);
lean_inc(v___x_908_);
v___x_942_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_942_, 0, v___x_908_);
lean_ctor_set(v___x_942_, 1, v___x_915_);
lean_ctor_set(v___x_942_, 2, v___x_941_);
if (lean_obj_tag(v_args_707_) == 1)
{
lean_object* v_val_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v_val_943_ = lean_ctor_get(v_args_707_, 0);
v___x_944_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_945_ = l_Lean_Name_mkStr4(v___x_702_, v___x_703_, v___x_704_, v___x_944_);
v___x_946_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___x_908_, 4);
v___x_947_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_908_);
lean_ctor_set(v___x_947_, 1, v___x_946_);
v___x_948_ = l_Array_append___redArg(v___x_916_, v_val_943_);
v___x_949_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_949_, 0, v___x_908_);
lean_ctor_set(v___x_949_, 1, v___x_915_);
lean_ctor_set(v___x_949_, 2, v___x_948_);
v___x_950_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_951_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_908_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = l_Lean_Syntax_node3(v___x_908_, v___x_945_, v___x_947_, v___x_949_, v___x_951_);
v___x_953_ = l_Array_mkArray1___redArg(v___x_952_);
v___y_930_ = v___y_939_;
v___y_931_ = v___x_942_;
v___y_932_ = v___x_953_;
goto v___jp_929_;
}
else
{
lean_object* v___x_954_; 
lean_dec_ref(v___x_704_);
lean_dec_ref(v___x_703_);
lean_dec_ref(v___x_702_);
v___x_954_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_930_ = v___y_939_;
v___y_931_ = v___x_942_;
v___y_932_ = v___x_954_;
goto v___jp_929_;
}
}
v___jp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = l_Array_append___redArg(v___x_916_, v___y_956_);
lean_dec_ref(v___y_956_);
lean_inc(v___x_908_);
v___x_958_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_958_, 0, v___x_908_);
lean_ctor_set(v___x_958_, 1, v___x_915_);
lean_ctor_set(v___x_958_, 2, v___x_957_);
if (lean_obj_tag(v_only_708_) == 1)
{
lean_object* v_val_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v_val_959_ = lean_ctor_get(v_only_708_, 0);
v___x_960_ = l_Lean_SourceInfo_fromRef(v_val_959_, v___x_709_);
v___x_961_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_962_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_962_, 0, v___x_960_);
lean_ctor_set(v___x_962_, 1, v___x_961_);
v___x_963_ = l_Array_mkArray1___redArg(v___x_962_);
v___y_939_ = v___x_958_;
v___y_940_ = v___x_963_;
goto v___jp_938_;
}
else
{
lean_object* v___x_964_; 
v___x_964_ = lean_mk_empty_array_with_capacity(v___x_706_);
v___y_939_ = v___x_958_;
v___y_940_ = v___x_964_;
goto v___jp_938_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___boxed(lean_object** _args){
lean_object* v_squeeze_973_ = _args[0];
lean_object* v_unfold_974_ = _args[1];
lean_object* v___x_975_ = _args[2];
lean_object* v___x_976_ = _args[3];
lean_object* v___x_977_ = _args[4];
lean_object* v___x_978_ = _args[5];
lean_object* v___x_979_ = _args[6];
lean_object* v_args_980_ = _args[7];
lean_object* v_only_981_ = _args[8];
lean_object* v___x_982_ = _args[9];
lean_object* v___y_983_ = _args[10];
lean_object* v_loc_984_ = _args[11];
lean_object* v___y_985_ = _args[12];
lean_object* v___y_986_ = _args[13];
lean_object* v___y_987_ = _args[14];
lean_object* v___y_988_ = _args[15];
lean_object* v___y_989_ = _args[16];
lean_object* v___y_990_ = _args[17];
lean_object* v___y_991_ = _args[18];
lean_object* v___y_992_ = _args[19];
lean_object* v___y_993_ = _args[20];
_start:
{
uint8_t v___x_94297__boxed_994_; lean_object* v_res_995_; 
v___x_94297__boxed_994_ = lean_unbox(v___x_982_);
v_res_995_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1(v_squeeze_973_, v_unfold_974_, v___x_975_, v___x_976_, v___x_977_, v___x_978_, v___x_979_, v_args_980_, v_only_981_, v___x_94297__boxed_994_, v___y_983_, v_loc_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v_only_981_);
lean_dec(v_args_980_);
lean_dec(v___x_979_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2(lean_object* v_a_996_, lean_object* v_trees_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v___x_1007_; 
lean_inc(v___y_1005_);
lean_inc_ref(v___y_1004_);
lean_inc(v___y_1003_);
lean_inc_ref(v___y_1002_);
lean_inc(v___y_1001_);
lean_inc_ref(v___y_1000_);
lean_inc(v___y_999_);
lean_inc_ref(v___y_998_);
v___x_1007_ = lean_apply_9(v_a_996_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_, lean_box(0));
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1016_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1010_ = v___x_1007_;
v_isShared_1011_ = v_isSharedCheck_1016_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_1007_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1016_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1012_; lean_object* v___x_1014_; 
v___x_1012_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1012_, 0, v_a_1008_);
lean_ctor_set(v___x_1012_, 1, v_trees_997_);
if (v_isShared_1011_ == 0)
{
lean_ctor_set(v___x_1010_, 0, v___x_1012_);
v___x_1014_ = v___x_1010_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v___x_1012_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec_ref(v_trees_997_);
v_a_1017_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1007_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1007_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2___boxed(lean_object* v_a_1025_, lean_object* v_trees_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2(v_a_1025_, v_trees_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_);
lean_dec(v___y_1034_);
lean_dec_ref(v___y_1033_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
return v_res_1036_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__0));
v___x_1039_ = l_Lean_stringToMessageData(v___x_1038_);
return v___x_1039_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__2));
v___x_1042_ = l_Lean_stringToMessageData(v___x_1041_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3(lean_object* v_a_1043_, lean_object* v_a_1044_, uint8_t v___x_1045_, lean_object* v_a_1046_, lean_object* v_mvarCounter_1047_, lean_object* v___x_1048_, uint8_t v___x_1049_, lean_object* v___x_1050_, uint8_t v_useReducible_1051_, uint8_t v___x_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v___x_1062_; 
lean_inc(v_a_1043_);
v___x_1062_ = l_Lean_MVarId_getType(v_a_1043_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v_a_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
lean_inc_n(v_a_1063_, 2);
lean_dec_ref_known(v___x_1062_, 1);
v___x_1064_ = l_Lean_mkIdent(v_a_1044_);
v___x_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1065_, 0, v_a_1063_);
v___x_1066_ = l_Lean_Elab_Term_elabTerm(v___x_1064_, v___x_1065_, v___x_1045_, v___x_1045_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
if (lean_obj_tag(v___x_1066_) == 0)
{
lean_object* v_a_1067_; lean_object* v___y_1069_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1072_; lean_object* v___y_1073_; lean_object* v___y_1074_; lean_object* v___y_1075_; lean_object* v___y_1076_; lean_object* v___x_1101_; 
v_a_1067_ = lean_ctor_get(v___x_1066_, 0);
lean_inc(v_a_1067_);
lean_dec_ref_known(v___x_1066_, 1);
v___x_1101_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_1049_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1290_; 
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1290_ == 0)
{
lean_object* v_unused_1291_; 
v_unused_1291_ = lean_ctor_get(v___x_1101_, 0);
lean_dec(v_unused_1291_);
v___x_1103_ = v___x_1101_;
v_isShared_1104_ = v_isSharedCheck_1290_;
goto v_resetjp_1102_;
}
else
{
lean_dec(v___x_1101_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1290_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1105_; 
lean_inc(v___y_1060_);
lean_inc_ref(v___y_1059_);
lean_inc(v___y_1058_);
lean_inc_ref(v___y_1057_);
lean_inc(v_a_1067_);
v___x_1105_ = lean_infer_type(v_a_1067_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; uint8_t v_____do__lift_1108_; lean_object* v___y_1109_; lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1127_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
lean_inc(v_a_1106_);
lean_dec_ref_known(v___x_1105_, 1);
if (v_useReducible_1051_ == 0)
{
lean_object* v___x_1138_; uint8_t v_foApprox_1139_; uint8_t v_ctxApprox_1140_; uint8_t v_quasiPatternApprox_1141_; uint8_t v_constApprox_1142_; uint8_t v_isDefEqStuckEx_1143_; uint8_t v_unificationHints_1144_; uint8_t v_proofIrrelevance_1145_; uint8_t v_offsetCnstrs_1146_; uint8_t v_transparency_1147_; uint8_t v_etaStruct_1148_; uint8_t v_univApprox_1149_; uint8_t v_iota_1150_; uint8_t v_beta_1151_; uint8_t v_proj_1152_; uint8_t v_zeta_1153_; uint8_t v_zetaDelta_1154_; uint8_t v_zetaUnused_1155_; uint8_t v_zetaHave_1156_; uint8_t v_canUnfoldPredicateConfig_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1190_; 
v___x_1138_ = l_Lean_Meta_Context_config(v___y_1057_);
v_foApprox_1139_ = lean_ctor_get_uint8(v___x_1138_, 0);
v_ctxApprox_1140_ = lean_ctor_get_uint8(v___x_1138_, 1);
v_quasiPatternApprox_1141_ = lean_ctor_get_uint8(v___x_1138_, 2);
v_constApprox_1142_ = lean_ctor_get_uint8(v___x_1138_, 3);
v_isDefEqStuckEx_1143_ = lean_ctor_get_uint8(v___x_1138_, 4);
v_unificationHints_1144_ = lean_ctor_get_uint8(v___x_1138_, 5);
v_proofIrrelevance_1145_ = lean_ctor_get_uint8(v___x_1138_, 6);
v_offsetCnstrs_1146_ = lean_ctor_get_uint8(v___x_1138_, 8);
v_transparency_1147_ = lean_ctor_get_uint8(v___x_1138_, 9);
v_etaStruct_1148_ = lean_ctor_get_uint8(v___x_1138_, 10);
v_univApprox_1149_ = lean_ctor_get_uint8(v___x_1138_, 11);
v_iota_1150_ = lean_ctor_get_uint8(v___x_1138_, 12);
v_beta_1151_ = lean_ctor_get_uint8(v___x_1138_, 13);
v_proj_1152_ = lean_ctor_get_uint8(v___x_1138_, 14);
v_zeta_1153_ = lean_ctor_get_uint8(v___x_1138_, 15);
v_zetaDelta_1154_ = lean_ctor_get_uint8(v___x_1138_, 16);
v_zetaUnused_1155_ = lean_ctor_get_uint8(v___x_1138_, 17);
v_zetaHave_1156_ = lean_ctor_get_uint8(v___x_1138_, 18);
v_canUnfoldPredicateConfig_1157_ = lean_ctor_get_uint8(v___x_1138_, 19);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1159_ = v___x_1138_;
v_isShared_1160_ = v_isSharedCheck_1190_;
goto v_resetjp_1158_;
}
else
{
lean_dec(v___x_1138_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1190_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
uint8_t v_trackZetaDelta_1161_; lean_object* v_zetaDeltaSet_1162_; lean_object* v_lctx_1163_; lean_object* v_localInstances_1164_; lean_object* v_defEqCtx_x3f_1165_; lean_object* v_synthPendingDepth_1166_; lean_object* v_customCanUnfoldPredicate_x3f_1167_; uint8_t v_univApprox_1168_; uint8_t v_inTypeClassResolution_1169_; uint8_t v_cacheInferType_1170_; lean_object* v_rewriteSet_x3f_1171_; uint8_t v_rewriteFuelScope_1172_; lean_object* v___x_1174_; 
v_trackZetaDelta_1161_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8);
v_zetaDeltaSet_1162_ = lean_ctor_get(v___y_1057_, 1);
v_lctx_1163_ = lean_ctor_get(v___y_1057_, 2);
v_localInstances_1164_ = lean_ctor_get(v___y_1057_, 3);
v_defEqCtx_x3f_1165_ = lean_ctor_get(v___y_1057_, 4);
v_synthPendingDepth_1166_ = lean_ctor_get(v___y_1057_, 5);
v_customCanUnfoldPredicate_x3f_1167_ = lean_ctor_get(v___y_1057_, 6);
v_univApprox_1168_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_1169_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 2);
v_cacheInferType_1170_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_1171_ = lean_ctor_get(v___y_1057_, 7);
v_rewriteFuelScope_1172_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 4);
if (v_isShared_1160_ == 0)
{
v___x_1174_ = v___x_1159_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 0, v_foApprox_1139_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 1, v_ctxApprox_1140_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 2, v_quasiPatternApprox_1141_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 3, v_constApprox_1142_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 4, v_isDefEqStuckEx_1143_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 5, v_unificationHints_1144_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 6, v_proofIrrelevance_1145_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 8, v_offsetCnstrs_1146_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 9, v_transparency_1147_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 10, v_etaStruct_1148_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 11, v_univApprox_1149_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 12, v_iota_1150_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 13, v_beta_1151_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 14, v_proj_1152_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 15, v_zeta_1153_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 16, v_zetaDelta_1154_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 17, v_zetaUnused_1155_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 18, v_zetaHave_1156_);
lean_ctor_set_uint8(v_reuseFailAlloc_1189_, 19, v_canUnfoldPredicateConfig_1157_);
v___x_1174_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
uint64_t v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
lean_ctor_set_uint8(v___x_1174_, 7, v___x_1052_);
v___x_1175_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1174_);
v___x_1176_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1176_, 0, v___x_1174_);
lean_ctor_set_uint64(v___x_1176_, sizeof(void*)*1, v___x_1175_);
lean_inc(v_rewriteSet_x3f_1171_);
lean_inc(v_customCanUnfoldPredicate_x3f_1167_);
lean_inc(v_synthPendingDepth_1166_);
lean_inc(v_defEqCtx_x3f_1165_);
lean_inc_ref(v_localInstances_1164_);
lean_inc_ref(v_lctx_1163_);
lean_inc(v_zetaDeltaSet_1162_);
v___x_1177_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
lean_ctor_set(v___x_1177_, 1, v_zetaDeltaSet_1162_);
lean_ctor_set(v___x_1177_, 2, v_lctx_1163_);
lean_ctor_set(v___x_1177_, 3, v_localInstances_1164_);
lean_ctor_set(v___x_1177_, 4, v_defEqCtx_x3f_1165_);
lean_ctor_set(v___x_1177_, 5, v_synthPendingDepth_1166_);
lean_ctor_set(v___x_1177_, 6, v_customCanUnfoldPredicate_x3f_1167_);
lean_ctor_set(v___x_1177_, 7, v_rewriteSet_x3f_1171_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*8, v_trackZetaDelta_1161_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*8 + 1, v_univApprox_1168_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*8 + 2, v_inTypeClassResolution_1169_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*8 + 3, v_cacheInferType_1170_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*8 + 4, v_rewriteFuelScope_1172_);
lean_inc(v_a_1106_);
lean_inc(v_a_1063_);
v___x_1178_ = l_Lean_Meta_isExprDefEq(v_a_1063_, v_a_1106_, v___x_1177_, v___y_1058_, v___y_1059_, v___y_1060_);
lean_dec_ref_known(v___x_1177_, 8);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; uint8_t v___x_1180_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
lean_inc(v_a_1179_);
lean_dec_ref_known(v___x_1178_, 1);
v___x_1180_ = lean_unbox(v_a_1179_);
lean_dec(v_a_1179_);
v_____do__lift_1108_ = v___x_1180_;
v___y_1109_ = v___y_1053_;
v___y_1110_ = v___y_1054_;
v___y_1111_ = v___y_1055_;
v___y_1112_ = v___y_1056_;
v___y_1113_ = v___y_1057_;
v___y_1114_ = v___y_1058_;
v___y_1115_ = v___y_1059_;
v___y_1116_ = v___y_1060_;
goto v___jp_1107_;
}
else
{
lean_object* v_a_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1188_; 
lean_dec(v_a_1106_);
lean_del_object(v___x_1103_);
lean_dec(v_a_1067_);
lean_dec(v_a_1063_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___x_1050_);
lean_dec_ref(v___x_1048_);
lean_dec_ref(v_a_1046_);
lean_dec(v_a_1043_);
v_a_1181_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1183_ = v___x_1178_;
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_1178_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1186_; 
if (v_isShared_1184_ == 0)
{
v___x_1186_ = v___x_1183_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_a_1181_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
}
}
else
{
lean_object* v___x_1191_; uint8_t v_foApprox_1192_; uint8_t v_ctxApprox_1193_; uint8_t v_quasiPatternApprox_1194_; uint8_t v_constApprox_1195_; uint8_t v_isDefEqStuckEx_1196_; uint8_t v_unificationHints_1197_; uint8_t v_proofIrrelevance_1198_; uint8_t v_offsetCnstrs_1199_; uint8_t v_transparency_1200_; uint8_t v_etaStruct_1201_; uint8_t v_univApprox_1202_; uint8_t v_iota_1203_; uint8_t v_beta_1204_; uint8_t v_proj_1205_; uint8_t v_zeta_1206_; uint8_t v_zetaDelta_1207_; uint8_t v_zetaUnused_1208_; uint8_t v_zetaHave_1209_; uint8_t v_canUnfoldPredicateConfig_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1281_; 
v___x_1191_ = l_Lean_Meta_Context_config(v___y_1057_);
v_foApprox_1192_ = lean_ctor_get_uint8(v___x_1191_, 0);
v_ctxApprox_1193_ = lean_ctor_get_uint8(v___x_1191_, 1);
v_quasiPatternApprox_1194_ = lean_ctor_get_uint8(v___x_1191_, 2);
v_constApprox_1195_ = lean_ctor_get_uint8(v___x_1191_, 3);
v_isDefEqStuckEx_1196_ = lean_ctor_get_uint8(v___x_1191_, 4);
v_unificationHints_1197_ = lean_ctor_get_uint8(v___x_1191_, 5);
v_proofIrrelevance_1198_ = lean_ctor_get_uint8(v___x_1191_, 6);
v_offsetCnstrs_1199_ = lean_ctor_get_uint8(v___x_1191_, 8);
v_transparency_1200_ = lean_ctor_get_uint8(v___x_1191_, 9);
v_etaStruct_1201_ = lean_ctor_get_uint8(v___x_1191_, 10);
v_univApprox_1202_ = lean_ctor_get_uint8(v___x_1191_, 11);
v_iota_1203_ = lean_ctor_get_uint8(v___x_1191_, 12);
v_beta_1204_ = lean_ctor_get_uint8(v___x_1191_, 13);
v_proj_1205_ = lean_ctor_get_uint8(v___x_1191_, 14);
v_zeta_1206_ = lean_ctor_get_uint8(v___x_1191_, 15);
v_zetaDelta_1207_ = lean_ctor_get_uint8(v___x_1191_, 16);
v_zetaUnused_1208_ = lean_ctor_get_uint8(v___x_1191_, 17);
v_zetaHave_1209_ = lean_ctor_get_uint8(v___x_1191_, 18);
v_canUnfoldPredicateConfig_1210_ = lean_ctor_get_uint8(v___x_1191_, 19);
v_isSharedCheck_1281_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1212_ = v___x_1191_;
v_isShared_1213_ = v_isSharedCheck_1281_;
goto v_resetjp_1211_;
}
else
{
lean_dec(v___x_1191_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1281_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
uint8_t v___x_1214_; uint8_t v___x_1215_; 
v___x_1214_ = 2;
v___x_1215_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1200_, v___x_1214_);
if (v___x_1215_ == 0)
{
lean_object* v_keyedConfig_1216_; uint8_t v_trackZetaDelta_1217_; lean_object* v_zetaDeltaSet_1218_; lean_object* v_lctx_1219_; lean_object* v_localInstances_1220_; lean_object* v_defEqCtx_x3f_1221_; lean_object* v_synthPendingDepth_1222_; lean_object* v_customCanUnfoldPredicate_x3f_1223_; uint8_t v_univApprox_1224_; uint8_t v_inTypeClassResolution_1225_; uint8_t v_cacheInferType_1226_; lean_object* v_rewriteSet_x3f_1227_; uint8_t v_rewriteFuelScope_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; uint8_t v_foApprox_1232_; uint8_t v_ctxApprox_1233_; uint8_t v_quasiPatternApprox_1234_; uint8_t v_constApprox_1235_; uint8_t v_isDefEqStuckEx_1236_; uint8_t v_unificationHints_1237_; uint8_t v_proofIrrelevance_1238_; uint8_t v_offsetCnstrs_1239_; uint8_t v_transparency_1240_; uint8_t v_etaStruct_1241_; uint8_t v_univApprox_1242_; uint8_t v_iota_1243_; uint8_t v_beta_1244_; uint8_t v_proj_1245_; uint8_t v_zeta_1246_; uint8_t v_zetaDelta_1247_; uint8_t v_zetaUnused_1248_; uint8_t v_zetaHave_1249_; uint8_t v_canUnfoldPredicateConfig_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1261_; 
lean_del_object(v___x_1212_);
v_keyedConfig_1216_ = lean_ctor_get(v___y_1057_, 0);
v_trackZetaDelta_1217_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8);
v_zetaDeltaSet_1218_ = lean_ctor_get(v___y_1057_, 1);
v_lctx_1219_ = lean_ctor_get(v___y_1057_, 2);
v_localInstances_1220_ = lean_ctor_get(v___y_1057_, 3);
v_defEqCtx_x3f_1221_ = lean_ctor_get(v___y_1057_, 4);
v_synthPendingDepth_1222_ = lean_ctor_get(v___y_1057_, 5);
v_customCanUnfoldPredicate_x3f_1223_ = lean_ctor_get(v___y_1057_, 6);
v_univApprox_1224_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_1225_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 2);
v_cacheInferType_1226_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_1227_ = lean_ctor_get(v___y_1057_, 7);
v_rewriteFuelScope_1228_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_1216_);
v___x_1229_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1214_, v_keyedConfig_1216_);
lean_inc(v_rewriteSet_x3f_1227_);
lean_inc(v_customCanUnfoldPredicate_x3f_1223_);
lean_inc(v_synthPendingDepth_1222_);
lean_inc(v_defEqCtx_x3f_1221_);
lean_inc_ref(v_localInstances_1220_);
lean_inc_ref(v_lctx_1219_);
lean_inc(v_zetaDeltaSet_1218_);
v___x_1230_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
lean_ctor_set(v___x_1230_, 1, v_zetaDeltaSet_1218_);
lean_ctor_set(v___x_1230_, 2, v_lctx_1219_);
lean_ctor_set(v___x_1230_, 3, v_localInstances_1220_);
lean_ctor_set(v___x_1230_, 4, v_defEqCtx_x3f_1221_);
lean_ctor_set(v___x_1230_, 5, v_synthPendingDepth_1222_);
lean_ctor_set(v___x_1230_, 6, v_customCanUnfoldPredicate_x3f_1223_);
lean_ctor_set(v___x_1230_, 7, v_rewriteSet_x3f_1227_);
lean_ctor_set_uint8(v___x_1230_, sizeof(void*)*8, v_trackZetaDelta_1217_);
lean_ctor_set_uint8(v___x_1230_, sizeof(void*)*8 + 1, v_univApprox_1224_);
lean_ctor_set_uint8(v___x_1230_, sizeof(void*)*8 + 2, v_inTypeClassResolution_1225_);
lean_ctor_set_uint8(v___x_1230_, sizeof(void*)*8 + 3, v_cacheInferType_1226_);
lean_ctor_set_uint8(v___x_1230_, sizeof(void*)*8 + 4, v_rewriteFuelScope_1228_);
v___x_1231_ = l_Lean_Meta_Context_config(v___x_1230_);
lean_dec_ref_known(v___x_1230_, 8);
v_foApprox_1232_ = lean_ctor_get_uint8(v___x_1231_, 0);
v_ctxApprox_1233_ = lean_ctor_get_uint8(v___x_1231_, 1);
v_quasiPatternApprox_1234_ = lean_ctor_get_uint8(v___x_1231_, 2);
v_constApprox_1235_ = lean_ctor_get_uint8(v___x_1231_, 3);
v_isDefEqStuckEx_1236_ = lean_ctor_get_uint8(v___x_1231_, 4);
v_unificationHints_1237_ = lean_ctor_get_uint8(v___x_1231_, 5);
v_proofIrrelevance_1238_ = lean_ctor_get_uint8(v___x_1231_, 6);
v_offsetCnstrs_1239_ = lean_ctor_get_uint8(v___x_1231_, 8);
v_transparency_1240_ = lean_ctor_get_uint8(v___x_1231_, 9);
v_etaStruct_1241_ = lean_ctor_get_uint8(v___x_1231_, 10);
v_univApprox_1242_ = lean_ctor_get_uint8(v___x_1231_, 11);
v_iota_1243_ = lean_ctor_get_uint8(v___x_1231_, 12);
v_beta_1244_ = lean_ctor_get_uint8(v___x_1231_, 13);
v_proj_1245_ = lean_ctor_get_uint8(v___x_1231_, 14);
v_zeta_1246_ = lean_ctor_get_uint8(v___x_1231_, 15);
v_zetaDelta_1247_ = lean_ctor_get_uint8(v___x_1231_, 16);
v_zetaUnused_1248_ = lean_ctor_get_uint8(v___x_1231_, 17);
v_zetaHave_1249_ = lean_ctor_get_uint8(v___x_1231_, 18);
v_canUnfoldPredicateConfig_1250_ = lean_ctor_get_uint8(v___x_1231_, 19);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1252_ = v___x_1231_;
v_isShared_1253_ = v_isSharedCheck_1261_;
goto v_resetjp_1251_;
}
else
{
lean_dec(v___x_1231_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1261_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 0, v_foApprox_1232_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 1, v_ctxApprox_1233_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 2, v_quasiPatternApprox_1234_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 3, v_constApprox_1235_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 4, v_isDefEqStuckEx_1236_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 5, v_unificationHints_1237_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 6, v_proofIrrelevance_1238_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 8, v_offsetCnstrs_1239_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 9, v_transparency_1240_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 10, v_etaStruct_1241_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 11, v_univApprox_1242_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 12, v_iota_1243_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 13, v_beta_1244_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 14, v_proj_1245_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 15, v_zeta_1246_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 16, v_zetaDelta_1247_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 17, v_zetaUnused_1248_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 18, v_zetaHave_1249_);
lean_ctor_set_uint8(v_reuseFailAlloc_1260_, 19, v_canUnfoldPredicateConfig_1250_);
v___x_1255_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
uint64_t v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
lean_ctor_set_uint8(v___x_1255_, 7, v___x_1052_);
v___x_1256_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1255_);
v___x_1257_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1257_, 0, v___x_1255_);
lean_ctor_set_uint64(v___x_1257_, sizeof(void*)*1, v___x_1256_);
lean_inc(v_rewriteSet_x3f_1227_);
lean_inc(v_customCanUnfoldPredicate_x3f_1223_);
lean_inc(v_synthPendingDepth_1222_);
lean_inc(v_defEqCtx_x3f_1221_);
lean_inc_ref(v_localInstances_1220_);
lean_inc_ref(v_lctx_1219_);
lean_inc(v_zetaDeltaSet_1218_);
v___x_1258_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
lean_ctor_set(v___x_1258_, 1, v_zetaDeltaSet_1218_);
lean_ctor_set(v___x_1258_, 2, v_lctx_1219_);
lean_ctor_set(v___x_1258_, 3, v_localInstances_1220_);
lean_ctor_set(v___x_1258_, 4, v_defEqCtx_x3f_1221_);
lean_ctor_set(v___x_1258_, 5, v_synthPendingDepth_1222_);
lean_ctor_set(v___x_1258_, 6, v_customCanUnfoldPredicate_x3f_1223_);
lean_ctor_set(v___x_1258_, 7, v_rewriteSet_x3f_1227_);
lean_ctor_set_uint8(v___x_1258_, sizeof(void*)*8, v_trackZetaDelta_1217_);
lean_ctor_set_uint8(v___x_1258_, sizeof(void*)*8 + 1, v_univApprox_1224_);
lean_ctor_set_uint8(v___x_1258_, sizeof(void*)*8 + 2, v_inTypeClassResolution_1225_);
lean_ctor_set_uint8(v___x_1258_, sizeof(void*)*8 + 3, v_cacheInferType_1226_);
lean_ctor_set_uint8(v___x_1258_, sizeof(void*)*8 + 4, v_rewriteFuelScope_1228_);
lean_inc(v_a_1106_);
lean_inc(v_a_1063_);
v___x_1259_ = l_Lean_Meta_isExprDefEq(v_a_1063_, v_a_1106_, v___x_1258_, v___y_1058_, v___y_1059_, v___y_1060_);
lean_dec_ref_known(v___x_1258_, 8);
v___y_1127_ = v___x_1259_;
goto v___jp_1126_;
}
}
}
else
{
uint8_t v_trackZetaDelta_1262_; lean_object* v_zetaDeltaSet_1263_; lean_object* v_lctx_1264_; lean_object* v_localInstances_1265_; lean_object* v_defEqCtx_x3f_1266_; lean_object* v_synthPendingDepth_1267_; lean_object* v_customCanUnfoldPredicate_x3f_1268_; uint8_t v_univApprox_1269_; uint8_t v_inTypeClassResolution_1270_; uint8_t v_cacheInferType_1271_; lean_object* v_rewriteSet_x3f_1272_; uint8_t v_rewriteFuelScope_1273_; lean_object* v___x_1275_; 
v_trackZetaDelta_1262_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8);
v_zetaDeltaSet_1263_ = lean_ctor_get(v___y_1057_, 1);
v_lctx_1264_ = lean_ctor_get(v___y_1057_, 2);
v_localInstances_1265_ = lean_ctor_get(v___y_1057_, 3);
v_defEqCtx_x3f_1266_ = lean_ctor_get(v___y_1057_, 4);
v_synthPendingDepth_1267_ = lean_ctor_get(v___y_1057_, 5);
v_customCanUnfoldPredicate_x3f_1268_ = lean_ctor_get(v___y_1057_, 6);
v_univApprox_1269_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_1270_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 2);
v_cacheInferType_1271_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_1272_ = lean_ctor_get(v___y_1057_, 7);
v_rewriteFuelScope_1273_ = lean_ctor_get_uint8(v___y_1057_, sizeof(void*)*8 + 4);
if (v_isShared_1213_ == 0)
{
v___x_1275_ = v___x_1212_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 0, v_foApprox_1192_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 1, v_ctxApprox_1193_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 2, v_quasiPatternApprox_1194_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 3, v_constApprox_1195_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 4, v_isDefEqStuckEx_1196_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 5, v_unificationHints_1197_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 6, v_proofIrrelevance_1198_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 8, v_offsetCnstrs_1199_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 9, v_transparency_1200_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 10, v_etaStruct_1201_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 11, v_univApprox_1202_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 12, v_iota_1203_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 13, v_beta_1204_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 14, v_proj_1205_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 15, v_zeta_1206_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 16, v_zetaDelta_1207_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 17, v_zetaUnused_1208_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 18, v_zetaHave_1209_);
lean_ctor_set_uint8(v_reuseFailAlloc_1280_, 19, v_canUnfoldPredicateConfig_1210_);
v___x_1275_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
uint64_t v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
lean_ctor_set_uint8(v___x_1275_, 7, v___x_1052_);
v___x_1276_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1275_);
v___x_1277_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1277_, 0, v___x_1275_);
lean_ctor_set_uint64(v___x_1277_, sizeof(void*)*1, v___x_1276_);
lean_inc(v_rewriteSet_x3f_1272_);
lean_inc(v_customCanUnfoldPredicate_x3f_1268_);
lean_inc(v_synthPendingDepth_1267_);
lean_inc(v_defEqCtx_x3f_1266_);
lean_inc_ref(v_localInstances_1265_);
lean_inc_ref(v_lctx_1264_);
lean_inc(v_zetaDeltaSet_1263_);
v___x_1278_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
lean_ctor_set(v___x_1278_, 1, v_zetaDeltaSet_1263_);
lean_ctor_set(v___x_1278_, 2, v_lctx_1264_);
lean_ctor_set(v___x_1278_, 3, v_localInstances_1265_);
lean_ctor_set(v___x_1278_, 4, v_defEqCtx_x3f_1266_);
lean_ctor_set(v___x_1278_, 5, v_synthPendingDepth_1267_);
lean_ctor_set(v___x_1278_, 6, v_customCanUnfoldPredicate_x3f_1268_);
lean_ctor_set(v___x_1278_, 7, v_rewriteSet_x3f_1272_);
lean_ctor_set_uint8(v___x_1278_, sizeof(void*)*8, v_trackZetaDelta_1262_);
lean_ctor_set_uint8(v___x_1278_, sizeof(void*)*8 + 1, v_univApprox_1269_);
lean_ctor_set_uint8(v___x_1278_, sizeof(void*)*8 + 2, v_inTypeClassResolution_1270_);
lean_ctor_set_uint8(v___x_1278_, sizeof(void*)*8 + 3, v_cacheInferType_1271_);
lean_ctor_set_uint8(v___x_1278_, sizeof(void*)*8 + 4, v_rewriteFuelScope_1273_);
lean_inc(v_a_1106_);
lean_inc(v_a_1063_);
v___x_1279_ = l_Lean_Meta_isExprDefEq(v_a_1063_, v_a_1106_, v___x_1278_, v___y_1058_, v___y_1059_, v___y_1060_);
lean_dec_ref_known(v___x_1278_, 8);
v___y_1127_ = v___x_1279_;
goto v___jp_1126_;
}
}
}
}
v___jp_1107_:
{
if (v_____do__lift_1108_ == 0)
{
lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1117_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__1, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__1);
lean_inc_ref(v_a_1046_);
v___x_1118_ = l_Lean_indentExpr(v_a_1046_);
v___x_1119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___closed__3);
v___x_1121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1119_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
if (v_isShared_1104_ == 0)
{
lean_ctor_set_tag(v___x_1103_, 1);
lean_ctor_set(v___x_1103_, 0, v___x_1121_);
v___x_1123_ = v___x_1103_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v___x_1121_);
v___x_1123_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
lean_object* v___x_1124_; 
lean_inc(v_a_1067_);
v___x_1124_ = l_Lean_Elab_Term_throwTypeMismatchError___redArg(v___x_1123_, v_a_1063_, v_a_1106_, v_a_1067_, v___x_1050_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
lean_dec_ref(v___x_1123_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_dec_ref_known(v___x_1124_, 1);
v___y_1069_ = v___y_1109_;
v___y_1070_ = v___y_1110_;
v___y_1071_ = v___y_1111_;
v___y_1072_ = v___y_1112_;
v___y_1073_ = v___y_1113_;
v___y_1074_ = v___y_1114_;
v___y_1075_ = v___y_1115_;
v___y_1076_ = v___y_1116_;
goto v___jp_1068_;
}
else
{
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
lean_dec(v_a_1067_);
lean_dec_ref(v___x_1048_);
lean_dec_ref(v_a_1046_);
lean_dec(v_a_1043_);
return v___x_1124_;
}
}
}
else
{
lean_dec(v_a_1106_);
lean_del_object(v___x_1103_);
lean_dec(v_a_1063_);
lean_dec(v___x_1050_);
v___y_1069_ = v___y_1109_;
v___y_1070_ = v___y_1110_;
v___y_1071_ = v___y_1111_;
v___y_1072_ = v___y_1112_;
v___y_1073_ = v___y_1113_;
v___y_1074_ = v___y_1114_;
v___y_1075_ = v___y_1115_;
v___y_1076_ = v___y_1116_;
goto v___jp_1068_;
}
}
v___jp_1126_:
{
if (lean_obj_tag(v___y_1127_) == 0)
{
lean_object* v_a_1128_; uint8_t v___x_1129_; 
v_a_1128_ = lean_ctor_get(v___y_1127_, 0);
lean_inc(v_a_1128_);
lean_dec_ref_known(v___y_1127_, 1);
v___x_1129_ = lean_unbox(v_a_1128_);
lean_dec(v_a_1128_);
v_____do__lift_1108_ = v___x_1129_;
v___y_1109_ = v___y_1053_;
v___y_1110_ = v___y_1054_;
v___y_1111_ = v___y_1055_;
v___y_1112_ = v___y_1056_;
v___y_1113_ = v___y_1057_;
v___y_1114_ = v___y_1058_;
v___y_1115_ = v___y_1059_;
v___y_1116_ = v___y_1060_;
goto v___jp_1107_;
}
else
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
lean_dec(v_a_1106_);
lean_del_object(v___x_1103_);
lean_dec(v_a_1067_);
lean_dec(v_a_1063_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___x_1050_);
lean_dec_ref(v___x_1048_);
lean_dec_ref(v_a_1046_);
lean_dec(v_a_1043_);
v_a_1130_ = lean_ctor_get(v___y_1127_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___y_1127_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___y_1127_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___y_1127_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
}
else
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1289_; 
lean_del_object(v___x_1103_);
lean_dec(v_a_1067_);
lean_dec(v_a_1063_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___x_1050_);
lean_dec_ref(v___x_1048_);
lean_dec_ref(v_a_1046_);
lean_dec(v_a_1043_);
v_a_1282_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1284_ = v___x_1105_;
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1105_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
}
else
{
lean_dec(v_a_1067_);
lean_dec(v_a_1063_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___x_1050_);
lean_dec_ref(v___x_1048_);
lean_dec_ref(v_a_1046_);
lean_dec(v_a_1043_);
return v___x_1101_;
}
v___jp_1068_:
{
lean_object* v___x_1077_; 
v___x_1077_ = l_Lean_Meta_getMVars(v_a_1046_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1079_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref_known(v___x_1077_, 1);
v___x_1079_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_a_1078_, v_mvarCounter_1047_, v___y_1074_);
lean_dec(v_a_1078_);
if (lean_obj_tag(v___x_1079_) == 0)
{
lean_object* v_a_1080_; lean_object* v___x_1081_; 
v_a_1080_ = lean_ctor_get(v___x_1079_, 0);
lean_inc(v_a_1080_);
lean_dec_ref_known(v___x_1079_, 1);
v___x_1081_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_a_1080_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
lean_dec(v_a_1080_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v___x_1082_; 
lean_dec_ref_known(v___x_1081_, 1);
v___x_1082_ = l_Lean_Elab_Tactic_pushGoal___redArg(v_a_1043_, v___y_1070_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_dec_ref_known(v___x_1082_, 1);
v___x_1083_ = l_Lean_Name_mkStr1(v___x_1048_);
v___x_1084_ = l_Lean_Elab_Tactic_closeMainGoal___redArg(v___x_1083_, v_a_1067_, v___x_1049_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
return v___x_1084_;
}
else
{
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v_a_1067_);
lean_dec_ref(v___x_1048_);
return v___x_1082_;
}
}
else
{
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v_a_1067_);
lean_dec_ref(v___x_1048_);
lean_dec(v_a_1043_);
return v___x_1081_;
}
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1092_; 
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v_a_1067_);
lean_dec_ref(v___x_1048_);
lean_dec(v_a_1043_);
v_a_1085_ = lean_ctor_get(v___x_1079_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1079_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1087_ = v___x_1079_;
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1079_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1090_; 
if (v_isShared_1088_ == 0)
{
v___x_1090_ = v___x_1087_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1085_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v_a_1067_);
lean_dec_ref(v___x_1048_);
lean_dec(v_a_1043_);
v_a_1093_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___x_1077_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1077_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1093_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
}
}
else
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1299_; 
lean_dec(v_a_1063_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___x_1050_);
lean_dec_ref(v___x_1048_);
lean_dec_ref(v_a_1046_);
lean_dec(v_a_1043_);
v_a_1292_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1294_ = v___x_1066_;
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v___x_1066_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v_a_1292_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
else
{
lean_object* v_a_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1307_; 
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___x_1050_);
lean_dec_ref(v___x_1048_);
lean_dec_ref(v_a_1046_);
lean_dec(v_a_1044_);
lean_dec(v_a_1043_);
v_a_1300_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1302_ = v___x_1062_;
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_a_1300_);
lean_dec(v___x_1062_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___x_1305_; 
if (v_isShared_1303_ == 0)
{
v___x_1305_ = v___x_1302_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_a_1300_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___boxed(lean_object** _args){
lean_object* v_a_1308_ = _args[0];
lean_object* v_a_1309_ = _args[1];
lean_object* v___x_1310_ = _args[2];
lean_object* v_a_1311_ = _args[3];
lean_object* v_mvarCounter_1312_ = _args[4];
lean_object* v___x_1313_ = _args[5];
lean_object* v___x_1314_ = _args[6];
lean_object* v___x_1315_ = _args[7];
lean_object* v_useReducible_1316_ = _args[8];
lean_object* v___x_1317_ = _args[9];
lean_object* v___y_1318_ = _args[10];
lean_object* v___y_1319_ = _args[11];
lean_object* v___y_1320_ = _args[12];
lean_object* v___y_1321_ = _args[13];
lean_object* v___y_1322_ = _args[14];
lean_object* v___y_1323_ = _args[15];
lean_object* v___y_1324_ = _args[16];
lean_object* v___y_1325_ = _args[17];
lean_object* v___y_1326_ = _args[18];
_start:
{
uint8_t v___x_94932__boxed_1327_; uint8_t v___x_94935__boxed_1328_; uint8_t v_useReducible_boxed_1329_; uint8_t v___x_94937__boxed_1330_; lean_object* v_res_1331_; 
v___x_94932__boxed_1327_ = lean_unbox(v___x_1310_);
v___x_94935__boxed_1328_ = lean_unbox(v___x_1314_);
v_useReducible_boxed_1329_ = lean_unbox(v_useReducible_1316_);
v___x_94937__boxed_1330_ = lean_unbox(v___x_1317_);
v_res_1331_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3(v_a_1308_, v_a_1309_, v___x_94932__boxed_1327_, v_a_1311_, v_mvarCounter_1312_, v___x_1313_, v___x_94935__boxed_1328_, v___x_1315_, v_useReducible_boxed_1329_, v___x_94937__boxed_1330_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
lean_dec(v___y_1321_);
lean_dec_ref(v___y_1320_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec(v_mvarCounter_1312_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4(lean_object* v_a_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v___x_1342_; lean_object* v_infoState_1343_; lean_object* v_env_1344_; lean_object* v_nextMacroScope_1345_; lean_object* v_ngen_1346_; lean_object* v_auxDeclNGen_1347_; lean_object* v_traceState_1348_; lean_object* v_cache_1349_; lean_object* v_recordedDeps_1350_; lean_object* v_messages_1351_; lean_object* v_snapshotTasks_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1373_; 
v___x_1342_ = lean_st_ref_take(v___y_1340_);
v_infoState_1343_ = lean_ctor_get(v___x_1342_, 8);
v_env_1344_ = lean_ctor_get(v___x_1342_, 0);
v_nextMacroScope_1345_ = lean_ctor_get(v___x_1342_, 1);
v_ngen_1346_ = lean_ctor_get(v___x_1342_, 2);
v_auxDeclNGen_1347_ = lean_ctor_get(v___x_1342_, 3);
v_traceState_1348_ = lean_ctor_get(v___x_1342_, 4);
v_cache_1349_ = lean_ctor_get(v___x_1342_, 5);
v_recordedDeps_1350_ = lean_ctor_get(v___x_1342_, 6);
v_messages_1351_ = lean_ctor_get(v___x_1342_, 7);
v_snapshotTasks_1352_ = lean_ctor_get(v___x_1342_, 9);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1354_ = v___x_1342_;
v_isShared_1355_ = v_isSharedCheck_1373_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_snapshotTasks_1352_);
lean_inc(v_infoState_1343_);
lean_inc(v_messages_1351_);
lean_inc(v_recordedDeps_1350_);
lean_inc(v_cache_1349_);
lean_inc(v_traceState_1348_);
lean_inc(v_auxDeclNGen_1347_);
lean_inc(v_ngen_1346_);
lean_inc(v_nextMacroScope_1345_);
lean_inc(v_env_1344_);
lean_dec(v___x_1342_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1373_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
uint8_t v_enabled_1356_; lean_object* v_assignment_1357_; lean_object* v_lazyAssignment_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1371_; 
v_enabled_1356_ = lean_ctor_get_uint8(v_infoState_1343_, sizeof(void*)*3);
v_assignment_1357_ = lean_ctor_get(v_infoState_1343_, 0);
v_lazyAssignment_1358_ = lean_ctor_get(v_infoState_1343_, 1);
v_isSharedCheck_1371_ = !lean_is_exclusive(v_infoState_1343_);
if (v_isSharedCheck_1371_ == 0)
{
lean_object* v_unused_1372_; 
v_unused_1372_ = lean_ctor_get(v_infoState_1343_, 2);
lean_dec(v_unused_1372_);
v___x_1360_ = v_infoState_1343_;
v_isShared_1361_ = v_isSharedCheck_1371_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_lazyAssignment_1358_);
lean_inc(v_assignment_1357_);
lean_dec(v_infoState_1343_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1371_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1362_; lean_object* v___x_1364_; 
v___x_1362_ = lean_box(0);
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 2, v_a_1332_);
v___x_1364_ = v___x_1360_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_assignment_1357_);
lean_ctor_set(v_reuseFailAlloc_1370_, 1, v_lazyAssignment_1358_);
lean_ctor_set(v_reuseFailAlloc_1370_, 2, v_a_1332_);
lean_ctor_set_uint8(v_reuseFailAlloc_1370_, sizeof(void*)*3, v_enabled_1356_);
v___x_1364_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
lean_object* v___x_1366_; 
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 8, v___x_1364_);
v___x_1366_ = v___x_1354_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_env_1344_);
lean_ctor_set(v_reuseFailAlloc_1369_, 1, v_nextMacroScope_1345_);
lean_ctor_set(v_reuseFailAlloc_1369_, 2, v_ngen_1346_);
lean_ctor_set(v_reuseFailAlloc_1369_, 3, v_auxDeclNGen_1347_);
lean_ctor_set(v_reuseFailAlloc_1369_, 4, v_traceState_1348_);
lean_ctor_set(v_reuseFailAlloc_1369_, 5, v_cache_1349_);
lean_ctor_set(v_reuseFailAlloc_1369_, 6, v_recordedDeps_1350_);
lean_ctor_set(v_reuseFailAlloc_1369_, 7, v_messages_1351_);
lean_ctor_set(v_reuseFailAlloc_1369_, 8, v___x_1364_);
lean_ctor_set(v_reuseFailAlloc_1369_, 9, v_snapshotTasks_1352_);
v___x_1366_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = lean_st_ref_put(v___y_1340_, v___x_1366_);
v___x_1368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1362_);
return v___x_1368_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___boxed(lean_object* v_a_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4(v_a_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0(lean_object* v___y_1385_, lean_object* v_mkInfoTree_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v_a_1394_, lean_object* v_a_x3f_1395_){
_start:
{
lean_object* v___x_1397_; lean_object* v_infoState_1398_; lean_object* v_trees_1399_; lean_object* v___x_1400_; 
v___x_1397_ = lean_st_ref_get(v___y_1385_);
v_infoState_1398_ = lean_ctor_get(v___x_1397_, 8);
lean_inc_ref(v_infoState_1398_);
lean_dec(v___x_1397_);
v_trees_1399_ = lean_ctor_get(v_infoState_1398_, 2);
lean_inc_ref(v_trees_1399_);
lean_dec_ref(v_infoState_1398_);
lean_inc(v___y_1385_);
lean_inc_ref(v___y_1393_);
lean_inc(v___y_1392_);
lean_inc_ref(v___y_1391_);
lean_inc(v___y_1390_);
lean_inc_ref(v___y_1389_);
lean_inc(v___y_1388_);
lean_inc_ref(v___y_1387_);
v___x_1400_ = lean_apply_10(v_mkInfoTree_1386_, v_trees_1399_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1385_, lean_box(0));
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1440_; 
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1403_ = v___x_1400_;
v_isShared_1404_ = v_isSharedCheck_1440_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1400_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1440_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1405_; lean_object* v_infoState_1406_; lean_object* v_env_1407_; lean_object* v_nextMacroScope_1408_; lean_object* v_ngen_1409_; lean_object* v_auxDeclNGen_1410_; lean_object* v_traceState_1411_; lean_object* v_cache_1412_; lean_object* v_recordedDeps_1413_; lean_object* v_messages_1414_; lean_object* v_snapshotTasks_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1439_; 
v___x_1405_ = lean_st_ref_take(v___y_1385_);
v_infoState_1406_ = lean_ctor_get(v___x_1405_, 8);
v_env_1407_ = lean_ctor_get(v___x_1405_, 0);
v_nextMacroScope_1408_ = lean_ctor_get(v___x_1405_, 1);
v_ngen_1409_ = lean_ctor_get(v___x_1405_, 2);
v_auxDeclNGen_1410_ = lean_ctor_get(v___x_1405_, 3);
v_traceState_1411_ = lean_ctor_get(v___x_1405_, 4);
v_cache_1412_ = lean_ctor_get(v___x_1405_, 5);
v_recordedDeps_1413_ = lean_ctor_get(v___x_1405_, 6);
v_messages_1414_ = lean_ctor_get(v___x_1405_, 7);
v_snapshotTasks_1415_ = lean_ctor_get(v___x_1405_, 9);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1417_ = v___x_1405_;
v_isShared_1418_ = v_isSharedCheck_1439_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_snapshotTasks_1415_);
lean_inc(v_infoState_1406_);
lean_inc(v_messages_1414_);
lean_inc(v_recordedDeps_1413_);
lean_inc(v_cache_1412_);
lean_inc(v_traceState_1411_);
lean_inc(v_auxDeclNGen_1410_);
lean_inc(v_ngen_1409_);
lean_inc(v_nextMacroScope_1408_);
lean_inc(v_env_1407_);
lean_dec(v___x_1405_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1439_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
uint8_t v_enabled_1419_; lean_object* v_assignment_1420_; lean_object* v_lazyAssignment_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1437_; 
v_enabled_1419_ = lean_ctor_get_uint8(v_infoState_1406_, sizeof(void*)*3);
v_assignment_1420_ = lean_ctor_get(v_infoState_1406_, 0);
v_lazyAssignment_1421_ = lean_ctor_get(v_infoState_1406_, 1);
v_isSharedCheck_1437_ = !lean_is_exclusive(v_infoState_1406_);
if (v_isSharedCheck_1437_ == 0)
{
lean_object* v_unused_1438_; 
v_unused_1438_ = lean_ctor_get(v_infoState_1406_, 2);
lean_dec(v_unused_1438_);
v___x_1423_ = v_infoState_1406_;
v_isShared_1424_ = v_isSharedCheck_1437_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_lazyAssignment_1421_);
lean_inc(v_assignment_1420_);
lean_dec(v_infoState_1406_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1437_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1428_; 
v___x_1425_ = lean_box(0);
v___x_1426_ = l_Lean_PersistentArray_push___redArg(v_a_1394_, v_a_1401_);
if (v_isShared_1424_ == 0)
{
lean_ctor_set(v___x_1423_, 2, v___x_1426_);
v___x_1428_ = v___x_1423_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_assignment_1420_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v_lazyAssignment_1421_);
lean_ctor_set(v_reuseFailAlloc_1436_, 2, v___x_1426_);
lean_ctor_set_uint8(v_reuseFailAlloc_1436_, sizeof(void*)*3, v_enabled_1419_);
v___x_1428_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
lean_object* v___x_1430_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 8, v___x_1428_);
v___x_1430_ = v___x_1417_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_env_1407_);
lean_ctor_set(v_reuseFailAlloc_1435_, 1, v_nextMacroScope_1408_);
lean_ctor_set(v_reuseFailAlloc_1435_, 2, v_ngen_1409_);
lean_ctor_set(v_reuseFailAlloc_1435_, 3, v_auxDeclNGen_1410_);
lean_ctor_set(v_reuseFailAlloc_1435_, 4, v_traceState_1411_);
lean_ctor_set(v_reuseFailAlloc_1435_, 5, v_cache_1412_);
lean_ctor_set(v_reuseFailAlloc_1435_, 6, v_recordedDeps_1413_);
lean_ctor_set(v_reuseFailAlloc_1435_, 7, v_messages_1414_);
lean_ctor_set(v_reuseFailAlloc_1435_, 8, v___x_1428_);
lean_ctor_set(v_reuseFailAlloc_1435_, 9, v_snapshotTasks_1415_);
v___x_1430_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
lean_object* v___x_1431_; lean_object* v___x_1433_; 
v___x_1431_ = lean_st_ref_put(v___y_1385_, v___x_1430_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 0, v___x_1425_);
v___x_1433_ = v___x_1403_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1425_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
lean_dec_ref(v_a_1394_);
v_a_1441_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1400_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1400_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0___boxed(lean_object* v___y_1449_, lean_object* v_mkInfoTree_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v_a_1458_, lean_object* v_a_x3f_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0(v___y_1449_, v_mkInfoTree_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v_a_1458_, v_a_x3f_1459_);
lean_dec(v_a_x3f_1459_);
lean_dec_ref(v___y_1457_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
lean_dec(v___y_1454_);
lean_dec_ref(v___y_1453_);
lean_dec(v___y_1452_);
lean_dec_ref(v___y_1451_);
lean_dec(v___y_1449_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg(lean_object* v_x_1462_, lean_object* v_mkInfoTree_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___x_1473_; lean_object* v_infoState_1474_; uint8_t v_enabled_1475_; 
v___x_1473_ = lean_st_ref_get(v___y_1471_);
v_infoState_1474_ = lean_ctor_get(v___x_1473_, 8);
lean_inc_ref(v_infoState_1474_);
lean_dec(v___x_1473_);
v_enabled_1475_ = lean_ctor_get_uint8(v_infoState_1474_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1474_);
if (v_enabled_1475_ == 0)
{
lean_object* v___x_1476_; 
lean_dec_ref(v_mkInfoTree_1463_);
lean_inc(v___y_1471_);
lean_inc_ref(v___y_1470_);
lean_inc(v___y_1469_);
lean_inc_ref(v___y_1468_);
lean_inc(v___y_1467_);
lean_inc_ref(v___y_1466_);
lean_inc(v___y_1465_);
lean_inc_ref(v___y_1464_);
v___x_1476_ = lean_apply_9(v_x_1462_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, lean_box(0));
return v___x_1476_;
}
else
{
lean_object* v___x_1477_; lean_object* v_a_1478_; lean_object* v_r_1479_; 
v___x_1477_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(v___y_1471_);
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
lean_inc(v_a_1478_);
lean_dec_ref(v___x_1477_);
lean_inc(v___y_1471_);
lean_inc_ref(v___y_1470_);
lean_inc(v___y_1469_);
lean_inc_ref(v___y_1468_);
lean_inc(v___y_1467_);
lean_inc_ref(v___y_1466_);
lean_inc(v___y_1465_);
lean_inc_ref(v___y_1464_);
v_r_1479_ = lean_apply_9(v_x_1462_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, lean_box(0));
if (lean_obj_tag(v_r_1479_) == 0)
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1504_; 
v_a_1480_ = lean_ctor_get(v_r_1479_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v_r_1479_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1482_ = v_r_1479_;
v_isShared_1483_ = v_isSharedCheck_1504_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v_r_1479_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1504_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1485_; 
lean_inc(v_a_1480_);
if (v_isShared_1483_ == 0)
{
lean_ctor_set_tag(v___x_1482_, 1);
v___x_1485_ = v___x_1482_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1480_);
v___x_1485_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0(v___y_1471_, v_mkInfoTree_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v_a_1478_, v___x_1485_);
lean_dec_ref(v___x_1485_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1493_ == 0)
{
lean_object* v_unused_1494_; 
v_unused_1494_ = lean_ctor_get(v___x_1486_, 0);
lean_dec(v_unused_1494_);
v___x_1488_ = v___x_1486_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_dec(v___x_1486_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 0, v_a_1480_);
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1480_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
else
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
lean_dec(v_a_1480_);
v_a_1495_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___x_1486_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1486_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1495_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v_a_1505_ = lean_ctor_get(v_r_1479_, 0);
lean_inc(v_a_1505_);
lean_dec_ref_known(v_r_1479_, 1);
v___x_1506_ = lean_box(0);
v___x_1507_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___lam__0(v___y_1471_, v_mkInfoTree_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v_a_1478_, v___x_1506_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1514_ == 0)
{
lean_object* v_unused_1515_; 
v_unused_1515_ = lean_ctor_get(v___x_1507_, 0);
lean_dec(v_unused_1515_);
v___x_1509_ = v___x_1507_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_dec(v___x_1507_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
lean_ctor_set_tag(v___x_1509_, 1);
lean_ctor_set(v___x_1509_, 0, v_a_1505_);
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1505_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
else
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1523_; 
lean_dec(v_a_1505_);
v_a_1516_ = lean_ctor_get(v___x_1507_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1518_ = v___x_1507_;
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1507_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_a_1516_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg___boxed(lean_object* v_x_1524_, lean_object* v_mkInfoTree_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v_res_1535_; 
v_res_1535_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg(v_x_1524_, v_mkInfoTree_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg(lean_object* v_msg_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
lean_object* v_ref_1542_; lean_object* v___x_1543_; lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1552_; 
v_ref_1542_ = lean_ctor_get(v___y_1539_, 2);
v___x_1543_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__2(v_msg_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_);
v_a_1544_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1546_ = v___x_1543_;
v_isShared_1547_ = v_isSharedCheck_1552_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1543_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1552_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1548_; lean_object* v___x_1550_; 
lean_inc(v_ref_1542_);
v___x_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1548_, 0, v_ref_1542_);
lean_ctor_set(v___x_1548_, 1, v_a_1544_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set_tag(v___x_1546_, 1);
lean_ctor_set(v___x_1546_, 0, v___x_1548_);
v___x_1550_ = v___x_1546_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1548_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg___boxed(lean_object* v_msg_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg(v_msg_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
return v_res_1559_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(lean_object* v_a_1560_, lean_object* v_x_1561_){
_start:
{
if (lean_obj_tag(v_x_1561_) == 0)
{
uint8_t v___x_1562_; 
v___x_1562_ = 0;
return v___x_1562_;
}
else
{
lean_object* v_key_1563_; lean_object* v_tail_1564_; uint8_t v___x_1565_; 
v_key_1563_ = lean_ctor_get(v_x_1561_, 0);
v_tail_1564_ = lean_ctor_get(v_x_1561_, 2);
v___x_1565_ = lean_expr_eqv(v_key_1563_, v_a_1560_);
if (v___x_1565_ == 0)
{
v_x_1561_ = v_tail_1564_;
goto _start;
}
else
{
return v___x_1565_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg___boxed(lean_object* v_a_1567_, lean_object* v_x_1568_){
_start:
{
uint8_t v_res_1569_; lean_object* v_r_1570_; 
v_res_1569_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(v_a_1567_, v_x_1568_);
lean_dec(v_x_1568_);
lean_dec_ref(v_a_1567_);
v_r_1570_ = lean_box(v_res_1569_);
return v_r_1570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23___redArg(lean_object* v_x_1571_, lean_object* v_x_1572_){
_start:
{
if (lean_obj_tag(v_x_1572_) == 0)
{
return v_x_1571_;
}
else
{
lean_object* v_key_1573_; lean_object* v_value_1574_; lean_object* v_tail_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1598_; 
v_key_1573_ = lean_ctor_get(v_x_1572_, 0);
v_value_1574_ = lean_ctor_get(v_x_1572_, 1);
v_tail_1575_ = lean_ctor_get(v_x_1572_, 2);
v_isSharedCheck_1598_ = !lean_is_exclusive(v_x_1572_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1577_ = v_x_1572_;
v_isShared_1578_ = v_isSharedCheck_1598_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_tail_1575_);
lean_inc(v_value_1574_);
lean_inc(v_key_1573_);
lean_dec(v_x_1572_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1598_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1579_; uint64_t v___x_1580_; uint64_t v___x_1581_; uint64_t v___x_1582_; uint64_t v_fold_1583_; uint64_t v___x_1584_; uint64_t v___x_1585_; uint64_t v___x_1586_; size_t v___x_1587_; size_t v___x_1588_; size_t v___x_1589_; size_t v___x_1590_; size_t v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1594_; 
v___x_1579_ = lean_array_get_size(v_x_1571_);
v___x_1580_ = l_Lean_Expr_hash(v_key_1573_);
v___x_1581_ = 32ULL;
v___x_1582_ = lean_uint64_shift_right(v___x_1580_, v___x_1581_);
v_fold_1583_ = lean_uint64_xor(v___x_1580_, v___x_1582_);
v___x_1584_ = 16ULL;
v___x_1585_ = lean_uint64_shift_right(v_fold_1583_, v___x_1584_);
v___x_1586_ = lean_uint64_xor(v_fold_1583_, v___x_1585_);
v___x_1587_ = lean_uint64_to_usize(v___x_1586_);
v___x_1588_ = lean_usize_of_nat(v___x_1579_);
v___x_1589_ = ((size_t)1ULL);
v___x_1590_ = lean_usize_sub(v___x_1588_, v___x_1589_);
v___x_1591_ = lean_usize_land(v___x_1587_, v___x_1590_);
v___x_1592_ = lean_array_uget_borrowed(v_x_1571_, v___x_1591_);
lean_inc(v___x_1592_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 2, v___x_1592_);
v___x_1594_ = v___x_1577_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_key_1573_);
lean_ctor_set(v_reuseFailAlloc_1597_, 1, v_value_1574_);
lean_ctor_set(v_reuseFailAlloc_1597_, 2, v___x_1592_);
v___x_1594_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1595_; 
v___x_1595_ = lean_array_uset(v_x_1571_, v___x_1591_, v___x_1594_);
v_x_1571_ = v___x_1595_;
v_x_1572_ = v_tail_1575_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19___redArg(lean_object* v_i_1599_, lean_object* v_source_1600_, lean_object* v_target_1601_){
_start:
{
lean_object* v___x_1602_; uint8_t v___x_1603_; 
v___x_1602_ = lean_array_get_size(v_source_1600_);
v___x_1603_ = lean_nat_dec_lt(v_i_1599_, v___x_1602_);
if (v___x_1603_ == 0)
{
lean_dec_ref(v_source_1600_);
lean_dec(v_i_1599_);
return v_target_1601_;
}
else
{
lean_object* v_es_1604_; lean_object* v___x_1605_; lean_object* v_source_1606_; lean_object* v_target_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v_es_1604_ = lean_array_fget(v_source_1600_, v_i_1599_);
v___x_1605_ = lean_box(0);
v_source_1606_ = lean_array_fset(v_source_1600_, v_i_1599_, v___x_1605_);
v_target_1607_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23___redArg(v_target_1601_, v_es_1604_);
v___x_1608_ = lean_unsigned_to_nat(1u);
v___x_1609_ = lean_nat_add(v_i_1599_, v___x_1608_);
lean_dec(v_i_1599_);
v_i_1599_ = v___x_1609_;
v_source_1600_ = v_source_1606_;
v_target_1601_ = v_target_1607_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17___redArg(lean_object* v_data_1611_){
_start:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v_nbuckets_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1612_ = lean_array_get_size(v_data_1611_);
v___x_1613_ = lean_unsigned_to_nat(2u);
v_nbuckets_1614_ = lean_nat_mul(v___x_1612_, v___x_1613_);
v___x_1615_ = lean_unsigned_to_nat(0u);
v___x_1616_ = lean_box(0);
v___x_1617_ = lean_mk_array(v_nbuckets_1614_, v___x_1616_);
v___x_1618_ = lean_array_propagate_mark(v_data_1611_, v___x_1617_);
v___x_1619_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19___redArg(v___x_1615_, v_data_1611_, v___x_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11___redArg(lean_object* v_m_1620_, lean_object* v_a_1621_, lean_object* v_b_1622_){
_start:
{
lean_object* v_size_1623_; lean_object* v_buckets_1624_; lean_object* v___x_1625_; uint64_t v___x_1626_; uint64_t v___x_1627_; uint64_t v___x_1628_; uint64_t v_fold_1629_; uint64_t v___x_1630_; uint64_t v___x_1631_; uint64_t v___x_1632_; size_t v___x_1633_; size_t v___x_1634_; size_t v___x_1635_; size_t v___x_1636_; size_t v___x_1637_; lean_object* v_bkt_1638_; uint8_t v___x_1639_; 
v_size_1623_ = lean_ctor_get(v_m_1620_, 0);
v_buckets_1624_ = lean_ctor_get(v_m_1620_, 1);
v___x_1625_ = lean_array_get_size(v_buckets_1624_);
v___x_1626_ = l_Lean_Expr_hash(v_a_1621_);
v___x_1627_ = 32ULL;
v___x_1628_ = lean_uint64_shift_right(v___x_1626_, v___x_1627_);
v_fold_1629_ = lean_uint64_xor(v___x_1626_, v___x_1628_);
v___x_1630_ = 16ULL;
v___x_1631_ = lean_uint64_shift_right(v_fold_1629_, v___x_1630_);
v___x_1632_ = lean_uint64_xor(v_fold_1629_, v___x_1631_);
v___x_1633_ = lean_uint64_to_usize(v___x_1632_);
v___x_1634_ = lean_usize_of_nat(v___x_1625_);
v___x_1635_ = ((size_t)1ULL);
v___x_1636_ = lean_usize_sub(v___x_1634_, v___x_1635_);
v___x_1637_ = lean_usize_land(v___x_1633_, v___x_1636_);
v_bkt_1638_ = lean_array_uget_borrowed(v_buckets_1624_, v___x_1637_);
v___x_1639_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(v_a_1621_, v_bkt_1638_);
if (v___x_1639_ == 0)
{
lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1660_; 
lean_inc_ref(v_buckets_1624_);
lean_inc(v_size_1623_);
v_isSharedCheck_1660_ = !lean_is_exclusive(v_m_1620_);
if (v_isSharedCheck_1660_ == 0)
{
lean_object* v_unused_1661_; lean_object* v_unused_1662_; 
v_unused_1661_ = lean_ctor_get(v_m_1620_, 1);
lean_dec(v_unused_1661_);
v_unused_1662_ = lean_ctor_get(v_m_1620_, 0);
lean_dec(v_unused_1662_);
v___x_1641_ = v_m_1620_;
v_isShared_1642_ = v_isSharedCheck_1660_;
goto v_resetjp_1640_;
}
else
{
lean_dec(v_m_1620_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1660_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1643_; lean_object* v_size_x27_1644_; lean_object* v___x_1645_; lean_object* v_buckets_x27_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; uint8_t v___x_1652_; 
v___x_1643_ = lean_unsigned_to_nat(1u);
v_size_x27_1644_ = lean_nat_add(v_size_1623_, v___x_1643_);
lean_dec(v_size_1623_);
lean_inc(v_bkt_1638_);
v___x_1645_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1645_, 0, v_a_1621_);
lean_ctor_set(v___x_1645_, 1, v_b_1622_);
lean_ctor_set(v___x_1645_, 2, v_bkt_1638_);
v_buckets_x27_1646_ = lean_array_uset(v_buckets_1624_, v___x_1637_, v___x_1645_);
v___x_1647_ = lean_unsigned_to_nat(4u);
v___x_1648_ = lean_nat_mul(v_size_x27_1644_, v___x_1647_);
v___x_1649_ = lean_unsigned_to_nat(3u);
v___x_1650_ = lean_nat_div(v___x_1648_, v___x_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_array_get_size(v_buckets_x27_1646_);
v___x_1652_ = lean_nat_dec_le(v___x_1650_, v___x_1651_);
lean_dec(v___x_1650_);
if (v___x_1652_ == 0)
{
lean_object* v_val_1653_; lean_object* v___x_1655_; 
v_val_1653_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17___redArg(v_buckets_x27_1646_);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 1, v_val_1653_);
lean_ctor_set(v___x_1641_, 0, v_size_x27_1644_);
v___x_1655_ = v___x_1641_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_size_x27_1644_);
lean_ctor_set(v_reuseFailAlloc_1656_, 1, v_val_1653_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
else
{
lean_object* v___x_1658_; 
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 1, v_buckets_x27_1646_);
lean_ctor_set(v___x_1641_, 0, v_size_x27_1644_);
v___x_1658_ = v___x_1641_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_size_x27_1644_);
lean_ctor_set(v_reuseFailAlloc_1659_, 1, v_buckets_x27_1646_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
else
{
lean_dec(v_b_1622_);
lean_dec_ref(v_a_1621_);
return v_m_1620_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg(lean_object* v_mvarId_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
lean_object* v___x_1667_; lean_object* v_mctx_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1667_ = lean_st_ref_get(v___y_1665_);
v_mctx_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc_ref(v_mctx_1668_);
lean_dec(v___x_1667_);
v___x_1669_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_1668_, v_mvarId_1663_);
lean_dec_ref(v_mctx_1668_);
v___x_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1669_);
v___x_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1670_);
lean_ctor_set(v___x_1671_, 1, v___y_1664_);
v___x_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg___boxed(lean_object* v_mvarId_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg(v_mvarId_1673_, v___y_1674_, v___y_1675_);
lean_dec(v___y_1675_);
lean_dec(v_mvarId_1673_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg(lean_object* v_mvarId_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_){
_start:
{
lean_object* v___x_1682_; lean_object* v_mctx_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1682_ = lean_st_ref_get(v___y_1680_);
v_mctx_1683_ = lean_ctor_get(v___x_1682_, 0);
lean_inc_ref(v_mctx_1683_);
lean_dec(v___x_1682_);
v___x_1684_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_1683_, v_mvarId_1678_);
lean_dec_ref(v_mctx_1683_);
v___x_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
lean_ctor_set(v___x_1686_, 1, v___y_1679_);
v___x_1687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1686_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg___boxed(lean_object* v_mvarId_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg(v_mvarId_1688_, v___y_1689_, v___y_1690_);
lean_dec(v___y_1690_);
lean_dec(v_mvarId_1688_);
return v_res_1692_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg(lean_object* v_m_1693_, lean_object* v_a_1694_){
_start:
{
lean_object* v_buckets_1695_; lean_object* v___x_1696_; uint64_t v___x_1697_; uint64_t v___x_1698_; uint64_t v___x_1699_; uint64_t v_fold_1700_; uint64_t v___x_1701_; uint64_t v___x_1702_; uint64_t v___x_1703_; size_t v___x_1704_; size_t v___x_1705_; size_t v___x_1706_; size_t v___x_1707_; size_t v___x_1708_; lean_object* v___x_1709_; uint8_t v___x_1710_; 
v_buckets_1695_ = lean_ctor_get(v_m_1693_, 1);
v___x_1696_ = lean_array_get_size(v_buckets_1695_);
v___x_1697_ = l_Lean_Expr_hash(v_a_1694_);
v___x_1698_ = 32ULL;
v___x_1699_ = lean_uint64_shift_right(v___x_1697_, v___x_1698_);
v_fold_1700_ = lean_uint64_xor(v___x_1697_, v___x_1699_);
v___x_1701_ = 16ULL;
v___x_1702_ = lean_uint64_shift_right(v_fold_1700_, v___x_1701_);
v___x_1703_ = lean_uint64_xor(v_fold_1700_, v___x_1702_);
v___x_1704_ = lean_uint64_to_usize(v___x_1703_);
v___x_1705_ = lean_usize_of_nat(v___x_1696_);
v___x_1706_ = ((size_t)1ULL);
v___x_1707_ = lean_usize_sub(v___x_1705_, v___x_1706_);
v___x_1708_ = lean_usize_land(v___x_1704_, v___x_1707_);
v___x_1709_ = lean_array_uget_borrowed(v_buckets_1695_, v___x_1708_);
v___x_1710_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(v_a_1694_, v___x_1709_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg___boxed(lean_object* v_m_1711_, lean_object* v_a_1712_){
_start:
{
uint8_t v_res_1713_; lean_object* v_r_1714_; 
v_res_1713_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg(v_m_1711_, v_a_1712_);
lean_dec_ref(v_a_1712_);
lean_dec_ref(v_m_1711_);
v_r_1714_ = lean_box(v_res_1713_);
return v_r_1714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(lean_object* v_mvarId_1719_, lean_object* v_e_1720_, lean_object* v_a_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v_d_1732_; lean_object* v_b_1733_; lean_object* v___y_1734_; uint8_t v___x_1740_; 
v___x_1740_ = l_Lean_Expr_hasExprMVar(v_e_1720_);
if (v___x_1740_ == 0)
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
lean_dec_ref(v_e_1720_);
v___x_1741_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0));
v___x_1742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1742_, 0, v___x_1741_);
lean_ctor_set(v___x_1742_, 1, v_a_1721_);
v___x_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1742_);
return v___x_1743_;
}
else
{
uint8_t v___x_1744_; 
v___x_1744_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg(v_a_1721_, v_e_1720_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = lean_box(0);
lean_inc_ref(v_e_1720_);
v___x_1746_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11___redArg(v_a_1721_, v_e_1720_, v___x_1745_);
switch(lean_obj_tag(v_e_1720_))
{
case 11:
{
lean_object* v_struct_1747_; 
v_struct_1747_ = lean_ctor_get(v_e_1720_, 2);
lean_inc_ref(v_struct_1747_);
lean_dec_ref_known(v_e_1720_, 3);
v_e_1720_ = v_struct_1747_;
v_a_1721_ = v___x_1746_;
goto _start;
}
case 7:
{
lean_object* v_binderType_1749_; lean_object* v_body_1750_; 
v_binderType_1749_ = lean_ctor_get(v_e_1720_, 1);
lean_inc_ref(v_binderType_1749_);
v_body_1750_ = lean_ctor_get(v_e_1720_, 2);
lean_inc_ref(v_body_1750_);
lean_dec_ref_known(v_e_1720_, 3);
v_d_1732_ = v_binderType_1749_;
v_b_1733_ = v_body_1750_;
v___y_1734_ = v___x_1746_;
goto v___jp_1731_;
}
case 6:
{
lean_object* v_binderType_1751_; lean_object* v_body_1752_; 
v_binderType_1751_ = lean_ctor_get(v_e_1720_, 1);
lean_inc_ref(v_binderType_1751_);
v_body_1752_ = lean_ctor_get(v_e_1720_, 2);
lean_inc_ref(v_body_1752_);
lean_dec_ref_known(v_e_1720_, 3);
v_d_1732_ = v_binderType_1751_;
v_b_1733_ = v_body_1752_;
v___y_1734_ = v___x_1746_;
goto v___jp_1731_;
}
case 8:
{
lean_object* v_type_1753_; lean_object* v_value_1754_; lean_object* v_body_1755_; lean_object* v___x_1756_; 
v_type_1753_ = lean_ctor_get(v_e_1720_, 1);
lean_inc_ref(v_type_1753_);
v_value_1754_ = lean_ctor_get(v_e_1720_, 2);
lean_inc_ref(v_value_1754_);
v_body_1755_ = lean_ctor_get(v_e_1720_, 3);
lean_inc_ref(v_body_1755_);
lean_dec_ref_known(v_e_1720_, 4);
v___x_1756_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1719_, v_type_1753_, v___x_1746_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
if (lean_obj_tag(v___x_1756_) == 0)
{
lean_object* v_a_1757_; lean_object* v_fst_1758_; 
v_a_1757_ = lean_ctor_get(v___x_1756_, 0);
v_fst_1758_ = lean_ctor_get(v_a_1757_, 0);
if (lean_obj_tag(v_fst_1758_) == 0)
{
lean_dec_ref(v_body_1755_);
lean_dec_ref(v_value_1754_);
return v___x_1756_;
}
else
{
lean_object* v_snd_1759_; lean_object* v___x_1760_; 
lean_inc(v_a_1757_);
lean_dec_ref_known(v___x_1756_, 1);
v_snd_1759_ = lean_ctor_get(v_a_1757_, 1);
lean_inc(v_snd_1759_);
lean_dec(v_a_1757_);
v___x_1760_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1719_, v_value_1754_, v_snd_1759_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; lean_object* v_fst_1762_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
v_fst_1762_ = lean_ctor_get(v_a_1761_, 0);
if (lean_obj_tag(v_fst_1762_) == 0)
{
lean_dec_ref(v_body_1755_);
return v___x_1760_;
}
else
{
lean_object* v_snd_1763_; 
lean_inc(v_a_1761_);
lean_dec_ref_known(v___x_1760_, 1);
v_snd_1763_ = lean_ctor_get(v_a_1761_, 1);
lean_inc(v_snd_1763_);
lean_dec(v_a_1761_);
v_e_1720_ = v_body_1755_;
v_a_1721_ = v_snd_1763_;
goto _start;
}
}
else
{
lean_dec_ref(v_body_1755_);
return v___x_1760_;
}
}
}
else
{
lean_dec_ref(v_body_1755_);
lean_dec_ref(v_value_1754_);
return v___x_1756_;
}
}
case 10:
{
lean_object* v_expr_1765_; 
v_expr_1765_ = lean_ctor_get(v_e_1720_, 1);
lean_inc_ref(v_expr_1765_);
lean_dec_ref_known(v_e_1720_, 2);
v_e_1720_ = v_expr_1765_;
v_a_1721_ = v___x_1746_;
goto _start;
}
case 5:
{
lean_object* v_fn_1767_; lean_object* v_arg_1768_; lean_object* v___x_1769_; 
v_fn_1767_ = lean_ctor_get(v_e_1720_, 0);
lean_inc_ref(v_fn_1767_);
v_arg_1768_ = lean_ctor_get(v_e_1720_, 1);
lean_inc_ref(v_arg_1768_);
lean_dec_ref_known(v_e_1720_, 2);
v___x_1769_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1719_, v_fn_1767_, v___x_1746_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v_fst_1771_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
v_fst_1771_ = lean_ctor_get(v_a_1770_, 0);
if (lean_obj_tag(v_fst_1771_) == 0)
{
lean_dec_ref(v_arg_1768_);
return v___x_1769_;
}
else
{
lean_object* v_snd_1772_; 
lean_inc(v_a_1770_);
lean_dec_ref_known(v___x_1769_, 1);
v_snd_1772_ = lean_ctor_get(v_a_1770_, 1);
lean_inc(v_snd_1772_);
lean_dec(v_a_1770_);
v_e_1720_ = v_arg_1768_;
v_a_1721_ = v_snd_1772_;
goto _start;
}
}
else
{
lean_dec_ref(v_arg_1768_);
return v___x_1769_;
}
}
case 2:
{
lean_object* v_mvarId_1774_; lean_object* v___x_1775_; 
v_mvarId_1774_ = lean_ctor_get(v_e_1720_, 0);
lean_inc(v_mvarId_1774_);
lean_dec_ref_known(v_e_1720_, 1);
v___x_1775_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12(v_mvarId_1719_, v_mvarId_1774_, v___x_1746_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
return v___x_1775_;
}
default: 
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
lean_dec_ref(v_e_1720_);
v___x_1776_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0));
v___x_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1776_);
lean_ctor_set(v___x_1777_, 1, v___x_1746_);
v___x_1778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1777_);
return v___x_1778_;
}
}
}
else
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
lean_dec_ref(v_e_1720_);
v___x_1779_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0));
v___x_1780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1779_);
lean_ctor_set(v___x_1780_, 1, v_a_1721_);
v___x_1781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1780_);
return v___x_1781_;
}
}
v___jp_1731_:
{
lean_object* v___x_1735_; 
v___x_1735_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1719_, v_d_1732_, v___y_1734_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v_fst_1737_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
v_fst_1737_ = lean_ctor_get(v_a_1736_, 0);
if (lean_obj_tag(v_fst_1737_) == 0)
{
lean_dec_ref(v_b_1733_);
return v___x_1735_;
}
else
{
lean_object* v_snd_1738_; 
lean_inc(v_a_1736_);
lean_dec_ref_known(v___x_1735_, 1);
v_snd_1738_ = lean_ctor_get(v_a_1736_, 1);
lean_inc(v_snd_1738_);
lean_dec(v_a_1736_);
v_e_1720_ = v_b_1733_;
v_a_1721_ = v_snd_1738_;
goto _start;
}
}
else
{
lean_dec_ref(v_b_1733_);
return v___x_1735_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12(lean_object* v_mvarId_1782_, lean_object* v_mvarId_x27_1783_, lean_object* v_a_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_){
_start:
{
uint8_t v___x_1794_; 
v___x_1794_ = l_Lean_instBEqMVarId_beq(v_mvarId_1782_, v_mvarId_x27_1783_);
if (v___x_1794_ == 0)
{
lean_object* v___x_1795_; 
v___x_1795_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg(v_mvarId_x27_1783_, v_a_1784_, v___y_1790_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1879_; 
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1798_ = v___x_1795_;
v_isShared_1799_ = v_isSharedCheck_1879_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1795_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1879_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v_fst_1800_; 
v_fst_1800_ = lean_ctor_get(v_a_1796_, 0);
lean_inc(v_fst_1800_);
if (lean_obj_tag(v_fst_1800_) == 0)
{
lean_object* v_snd_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1819_; 
lean_dec(v_mvarId_x27_1783_);
v_snd_1801_ = lean_ctor_get(v_a_1796_, 1);
v_isSharedCheck_1819_ = !lean_is_exclusive(v_a_1796_);
if (v_isSharedCheck_1819_ == 0)
{
lean_object* v_unused_1820_; 
v_unused_1820_ = lean_ctor_get(v_a_1796_, 0);
lean_dec(v_unused_1820_);
v___x_1803_ = v_a_1796_;
v_isShared_1804_ = v_isSharedCheck_1819_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_snd_1801_);
lean_dec(v_a_1796_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1819_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1818_; 
v_a_1805_ = lean_ctor_get(v_fst_1800_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v_fst_1800_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1807_ = v_fst_1800_;
v_isShared_1808_ = v_isSharedCheck_1818_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v_fst_1800_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1818_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1808_ == 0)
{
v___x_1810_ = v___x_1807_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_a_1805_);
v___x_1810_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
lean_object* v___x_1812_; 
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 0, v___x_1810_);
v___x_1812_ = v___x_1803_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v___x_1810_);
lean_ctor_set(v_reuseFailAlloc_1816_, 1, v_snd_1801_);
v___x_1812_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
lean_object* v___x_1814_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 0, v___x_1812_);
v___x_1814_ = v___x_1798_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1812_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
}
}
}
}
}
}
else
{
lean_object* v_a_1821_; 
lean_del_object(v___x_1798_);
v_a_1821_ = lean_ctor_get(v_fst_1800_, 0);
lean_inc(v_a_1821_);
lean_dec_ref_known(v_fst_1800_, 1);
if (lean_obj_tag(v_a_1821_) == 0)
{
lean_object* v_snd_1822_; lean_object* v___x_1823_; 
v_snd_1822_ = lean_ctor_get(v_a_1796_, 1);
lean_inc(v_snd_1822_);
lean_dec(v_a_1796_);
v___x_1823_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg(v_mvarId_x27_1783_, v_snd_1822_, v___y_1790_);
lean_dec(v_mvarId_x27_1783_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1867_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1826_ = v___x_1823_;
v_isShared_1827_ = v_isSharedCheck_1867_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_a_1824_);
lean_dec(v___x_1823_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1867_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v_fst_1828_; 
v_fst_1828_ = lean_ctor_get(v_a_1824_, 0);
lean_inc(v_fst_1828_);
if (lean_obj_tag(v_fst_1828_) == 0)
{
lean_object* v_snd_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1847_; 
v_snd_1829_ = lean_ctor_get(v_a_1824_, 1);
v_isSharedCheck_1847_ = !lean_is_exclusive(v_a_1824_);
if (v_isSharedCheck_1847_ == 0)
{
lean_object* v_unused_1848_; 
v_unused_1848_ = lean_ctor_get(v_a_1824_, 0);
lean_dec(v_unused_1848_);
v___x_1831_ = v_a_1824_;
v_isShared_1832_ = v_isSharedCheck_1847_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_snd_1829_);
lean_dec(v_a_1824_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1847_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v_a_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1846_; 
v_a_1833_ = lean_ctor_get(v_fst_1828_, 0);
v_isSharedCheck_1846_ = !lean_is_exclusive(v_fst_1828_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1835_ = v_fst_1828_;
v_isShared_1836_ = v_isSharedCheck_1846_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_a_1833_);
lean_dec(v_fst_1828_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1846_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1838_; 
if (v_isShared_1836_ == 0)
{
v___x_1838_ = v___x_1835_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_a_1833_);
v___x_1838_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
lean_object* v___x_1840_; 
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 0, v___x_1838_);
v___x_1840_ = v___x_1831_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v___x_1838_);
lean_ctor_set(v_reuseFailAlloc_1844_, 1, v_snd_1829_);
v___x_1840_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
lean_object* v___x_1842_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1840_);
v___x_1842_ = v___x_1826_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v___x_1840_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
}
}
else
{
lean_object* v_a_1849_; 
v_a_1849_ = lean_ctor_get(v_fst_1828_, 0);
lean_inc(v_a_1849_);
lean_dec_ref_known(v_fst_1828_, 1);
if (lean_obj_tag(v_a_1849_) == 0)
{
lean_object* v_snd_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1861_; 
v_snd_1850_ = lean_ctor_get(v_a_1824_, 1);
v_isSharedCheck_1861_ = !lean_is_exclusive(v_a_1824_);
if (v_isSharedCheck_1861_ == 0)
{
lean_object* v_unused_1862_; 
v_unused_1862_ = lean_ctor_get(v_a_1824_, 0);
lean_dec(v_unused_1862_);
v___x_1852_ = v_a_1824_;
v_isShared_1853_ = v_isSharedCheck_1861_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_snd_1850_);
lean_dec(v_a_1824_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1861_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1854_; lean_object* v___x_1856_; 
v___x_1854_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__0));
if (v_isShared_1853_ == 0)
{
lean_ctor_set(v___x_1852_, 0, v___x_1854_);
v___x_1856_ = v___x_1852_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v___x_1854_);
lean_ctor_set(v_reuseFailAlloc_1860_, 1, v_snd_1850_);
v___x_1856_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
lean_object* v___x_1858_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1856_);
v___x_1858_ = v___x_1826_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v___x_1856_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
}
else
{
lean_object* v_val_1863_; lean_object* v_snd_1864_; lean_object* v_mvarIdPending_1865_; 
lean_del_object(v___x_1826_);
v_val_1863_ = lean_ctor_get(v_a_1849_, 0);
lean_inc(v_val_1863_);
lean_dec_ref_known(v_a_1849_, 1);
v_snd_1864_ = lean_ctor_get(v_a_1824_, 1);
lean_inc(v_snd_1864_);
lean_dec(v_a_1824_);
v_mvarIdPending_1865_ = lean_ctor_get(v_val_1863_, 1);
lean_inc(v_mvarIdPending_1865_);
lean_dec(v_val_1863_);
v_mvarId_x27_1783_ = v_mvarIdPending_1865_;
v_a_1784_ = v_snd_1864_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
v_a_1868_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1823_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1823_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
else
{
lean_object* v_snd_1876_; lean_object* v_val_1877_; lean_object* v___x_1878_; 
lean_dec(v_mvarId_x27_1783_);
v_snd_1876_ = lean_ctor_get(v_a_1796_, 1);
lean_inc(v_snd_1876_);
lean_dec(v_a_1796_);
v_val_1877_ = lean_ctor_get(v_a_1821_, 0);
lean_inc(v_val_1877_);
lean_dec_ref_known(v_a_1821_, 1);
v___x_1878_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1782_, v_val_1877_, v_snd_1876_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
return v___x_1878_;
}
}
}
}
else
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
lean_dec(v_mvarId_x27_1783_);
v_a_1880_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1795_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1795_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_a_1880_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
}
else
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
lean_dec(v_mvarId_x27_1783_);
v___x_1888_ = ((lean_object*)(l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___closed__1));
v___x_1889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1888_);
lean_ctor_set(v___x_1889_, 1, v_a_1784_);
v___x_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1890_, 0, v___x_1889_);
return v___x_1890_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12___boxed(lean_object* v_mvarId_1891_, lean_object* v_mvarId_x27_1892_, lean_object* v_a_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12(v_mvarId_1891_, v_mvarId_x27_1892_, v_a_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v_mvarId_1891_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6___boxed(lean_object* v_mvarId_1904_, lean_object* v_e_1905_, lean_object* v_a_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1904_, v_e_1905_, v_a_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_);
lean_dec(v___y_1914_);
lean_dec_ref(v___y_1913_);
lean_dec(v___y_1912_);
lean_dec_ref(v___y_1911_);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v_mvarId_1904_);
return v_res_1916_;
}
}
static lean_object* _init_l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1917_ = lean_box(0);
v___x_1918_ = lean_unsigned_to_nat(16u);
v___x_1919_ = lean_mk_array(v___x_1918_, v___x_1917_);
return v___x_1919_;
}
}
static lean_object* _init_l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1920_ = lean_obj_once(&l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0, &l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0_once, _init_l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__0);
v___x_1921_ = lean_unsigned_to_nat(0u);
v___x_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
lean_ctor_set(v___x_1922_, 1, v___x_1920_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4(lean_object* v_mvarId_1923_, lean_object* v_e_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
uint8_t v___x_1934_; 
v___x_1934_ = l_Lean_Expr_hasExprMVar(v_e_1924_);
if (v___x_1934_ == 0)
{
uint8_t v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
lean_dec_ref(v_e_1924_);
v___x_1935_ = 1;
v___x_1936_ = lean_box(v___x_1935_);
v___x_1937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1937_, 0, v___x_1936_);
return v___x_1937_;
}
else
{
uint8_t v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1938_ = 0;
v___x_1939_ = lean_obj_once(&l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1, &l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1_once, _init_l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___closed__1);
v___x_1940_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6(v_mvarId_1923_, v_e_1924_, v___x_1939_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1954_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1943_ = v___x_1940_;
v_isShared_1944_ = v_isSharedCheck_1954_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1940_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1954_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v_fst_1945_; 
v_fst_1945_ = lean_ctor_get(v_a_1941_, 0);
lean_inc(v_fst_1945_);
lean_dec(v_a_1941_);
if (lean_obj_tag(v_fst_1945_) == 0)
{
lean_object* v___x_1946_; lean_object* v___x_1948_; 
lean_dec_ref_known(v_fst_1945_, 1);
v___x_1946_ = lean_box(v___x_1938_);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 0, v___x_1946_);
v___x_1948_ = v___x_1943_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v___x_1946_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
else
{
lean_object* v___x_1950_; lean_object* v___x_1952_; 
lean_dec_ref_known(v_fst_1945_, 1);
v___x_1950_ = lean_box(v___x_1934_);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 0, v___x_1950_);
v___x_1952_ = v___x_1943_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v___x_1950_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
}
else
{
lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1962_; 
v_a_1955_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1962_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1957_ = v___x_1940_;
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_dec(v___x_1940_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1960_; 
if (v_isShared_1958_ == 0)
{
v___x_1960_ = v___x_1957_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_a_1955_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4___boxed(lean_object* v_mvarId_1963_, lean_object* v_e_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4(v_mvarId_1963_, v_e_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
lean_dec(v___y_1966_);
lean_dec_ref(v___y_1965_);
lean_dec(v_mvarId_1963_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13___redArg(lean_object* v_x_1975_, lean_object* v_x_1976_, lean_object* v_x_1977_, lean_object* v_x_1978_){
_start:
{
lean_object* v_ks_1979_; lean_object* v_vs_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_2004_; 
v_ks_1979_ = lean_ctor_get(v_x_1975_, 0);
v_vs_1980_ = lean_ctor_get(v_x_1975_, 1);
v_isSharedCheck_2004_ = !lean_is_exclusive(v_x_1975_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1982_ = v_x_1975_;
v_isShared_1983_ = v_isSharedCheck_2004_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_vs_1980_);
lean_inc(v_ks_1979_);
lean_dec(v_x_1975_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_2004_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v___x_1984_; uint8_t v___x_1985_; 
v___x_1984_ = lean_array_get_size(v_ks_1979_);
v___x_1985_ = lean_nat_dec_lt(v_x_1976_, v___x_1984_);
if (v___x_1985_ == 0)
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1989_; 
lean_dec(v_x_1976_);
v___x_1986_ = lean_array_push(v_ks_1979_, v_x_1977_);
v___x_1987_ = lean_array_push(v_vs_1980_, v_x_1978_);
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 1, v___x_1987_);
lean_ctor_set(v___x_1982_, 0, v___x_1986_);
v___x_1989_ = v___x_1982_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1986_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v___x_1987_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
else
{
lean_object* v_k_x27_1991_; uint8_t v___x_1992_; 
v_k_x27_1991_ = lean_array_fget_borrowed(v_ks_1979_, v_x_1976_);
v___x_1992_ = l_Lean_instBEqMVarId_beq(v_x_1977_, v_k_x27_1991_);
if (v___x_1992_ == 0)
{
lean_object* v___x_1994_; 
if (v_isShared_1983_ == 0)
{
v___x_1994_ = v___x_1982_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_ks_1979_);
lean_ctor_set(v_reuseFailAlloc_1998_, 1, v_vs_1980_);
v___x_1994_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1995_ = lean_unsigned_to_nat(1u);
v___x_1996_ = lean_nat_add(v_x_1976_, v___x_1995_);
lean_dec(v_x_1976_);
v_x_1975_ = v___x_1994_;
v_x_1976_ = v___x_1996_;
goto _start;
}
}
else
{
lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2002_; 
v___x_1999_ = lean_array_fset(v_ks_1979_, v_x_1976_, v_x_1977_);
v___x_2000_ = lean_array_fset(v_vs_1980_, v_x_1976_, v_x_1978_);
lean_dec(v_x_1976_);
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 1, v___x_2000_);
lean_ctor_set(v___x_1982_, 0, v___x_1999_);
v___x_2002_ = v___x_1982_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v___x_1999_);
lean_ctor_set(v_reuseFailAlloc_2003_, 1, v___x_2000_);
v___x_2002_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
return v___x_2002_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11___redArg(lean_object* v_n_2005_, lean_object* v_k_2006_, lean_object* v_v_2007_){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2008_ = lean_unsigned_to_nat(0u);
v___x_2009_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13___redArg(v_n_2005_, v___x_2008_, v_k_2006_, v_v_2007_);
return v___x_2009_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_2010_; 
v___x_2010_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(lean_object* v_x_2011_, size_t v_x_2012_, size_t v_x_2013_, lean_object* v_x_2014_, lean_object* v_x_2015_){
_start:
{
if (lean_obj_tag(v_x_2011_) == 0)
{
lean_object* v_es_2016_; size_t v___x_2017_; size_t v___x_2018_; lean_object* v_j_2019_; lean_object* v___x_2020_; uint8_t v___x_2021_; 
v_es_2016_ = lean_ctor_get(v_x_2011_, 0);
v___x_2017_ = ((size_t)31ULL);
v___x_2018_ = lean_usize_land(v_x_2012_, v___x_2017_);
v_j_2019_ = lean_usize_to_nat(v___x_2018_);
v___x_2020_ = lean_array_get_size(v_es_2016_);
v___x_2021_ = lean_nat_dec_lt(v_j_2019_, v___x_2020_);
if (v___x_2021_ == 0)
{
lean_dec(v_j_2019_);
lean_dec(v_x_2015_);
lean_dec(v_x_2014_);
return v_x_2011_;
}
else
{
lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2060_; 
lean_inc_ref(v_es_2016_);
v_isSharedCheck_2060_ = !lean_is_exclusive(v_x_2011_);
if (v_isSharedCheck_2060_ == 0)
{
lean_object* v_unused_2061_; 
v_unused_2061_ = lean_ctor_get(v_x_2011_, 0);
lean_dec(v_unused_2061_);
v___x_2023_ = v_x_2011_;
v_isShared_2024_ = v_isSharedCheck_2060_;
goto v_resetjp_2022_;
}
else
{
lean_dec(v_x_2011_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2060_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v_v_2025_; lean_object* v___x_2026_; lean_object* v_xs_x27_2027_; lean_object* v___y_2029_; 
v_v_2025_ = lean_array_fget(v_es_2016_, v_j_2019_);
v___x_2026_ = lean_box(0);
v_xs_x27_2027_ = lean_array_fset(v_es_2016_, v_j_2019_, v___x_2026_);
switch(lean_obj_tag(v_v_2025_))
{
case 0:
{
lean_object* v_key_2034_; lean_object* v_val_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2045_; 
v_key_2034_ = lean_ctor_get(v_v_2025_, 0);
v_val_2035_ = lean_ctor_get(v_v_2025_, 1);
v_isSharedCheck_2045_ = !lean_is_exclusive(v_v_2025_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2037_ = v_v_2025_;
v_isShared_2038_ = v_isSharedCheck_2045_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_val_2035_);
lean_inc(v_key_2034_);
lean_dec(v_v_2025_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2045_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
uint8_t v___x_2039_; 
v___x_2039_ = l_Lean_instBEqMVarId_beq(v_x_2014_, v_key_2034_);
if (v___x_2039_ == 0)
{
lean_object* v___x_2040_; lean_object* v___x_2041_; 
lean_del_object(v___x_2037_);
v___x_2040_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2034_, v_val_2035_, v_x_2014_, v_x_2015_);
v___x_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
v___y_2029_ = v___x_2041_;
goto v___jp_2028_;
}
else
{
lean_object* v___x_2043_; 
lean_dec(v_val_2035_);
lean_dec(v_key_2034_);
if (v_isShared_2038_ == 0)
{
lean_ctor_set(v___x_2037_, 1, v_x_2015_);
lean_ctor_set(v___x_2037_, 0, v_x_2014_);
v___x_2043_ = v___x_2037_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_x_2014_);
lean_ctor_set(v_reuseFailAlloc_2044_, 1, v_x_2015_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
v___y_2029_ = v___x_2043_;
goto v___jp_2028_;
}
}
}
}
case 1:
{
lean_object* v_node_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2058_; 
v_node_2046_ = lean_ctor_get(v_v_2025_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v_v_2025_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2048_ = v_v_2025_;
v_isShared_2049_ = v_isSharedCheck_2058_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_node_2046_);
lean_dec(v_v_2025_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2058_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
size_t v___x_2050_; size_t v___x_2051_; size_t v___x_2052_; size_t v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2056_; 
v___x_2050_ = ((size_t)5ULL);
v___x_2051_ = lean_usize_shift_right(v_x_2012_, v___x_2050_);
v___x_2052_ = ((size_t)1ULL);
v___x_2053_ = lean_usize_add(v_x_2013_, v___x_2052_);
v___x_2054_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(v_node_2046_, v___x_2051_, v___x_2053_, v_x_2014_, v_x_2015_);
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v___x_2054_);
v___x_2056_ = v___x_2048_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v___x_2054_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
v___y_2029_ = v___x_2056_;
goto v___jp_2028_;
}
}
}
default: 
{
lean_object* v___x_2059_; 
v___x_2059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2059_, 0, v_x_2014_);
lean_ctor_set(v___x_2059_, 1, v_x_2015_);
v___y_2029_ = v___x_2059_;
goto v___jp_2028_;
}
}
v___jp_2028_:
{
lean_object* v___x_2030_; lean_object* v___x_2032_; 
v___x_2030_ = lean_array_fset(v_xs_x27_2027_, v_j_2019_, v___y_2029_);
lean_dec(v_j_2019_);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 0, v___x_2030_);
v___x_2032_ = v___x_2023_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v___x_2030_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
}
}
}
else
{
lean_object* v_ks_2062_; lean_object* v_vs_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2081_; 
v_ks_2062_ = lean_ctor_get(v_x_2011_, 0);
v_vs_2063_ = lean_ctor_get(v_x_2011_, 1);
v_isSharedCheck_2081_ = !lean_is_exclusive(v_x_2011_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2065_ = v_x_2011_;
v_isShared_2066_ = v_isSharedCheck_2081_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_vs_2063_);
lean_inc(v_ks_2062_);
lean_dec(v_x_2011_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2081_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_ks_2062_);
lean_ctor_set(v_reuseFailAlloc_2080_, 1, v_vs_2063_);
v___x_2068_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
lean_object* v_newNode_2069_; size_t v___x_2070_; uint8_t v___x_2071_; 
v_newNode_2069_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11___redArg(v___x_2068_, v_x_2014_, v_x_2015_);
v___x_2070_ = ((size_t)7ULL);
v___x_2071_ = lean_usize_dec_le(v___x_2070_, v_x_2013_);
if (v___x_2071_ == 0)
{
lean_object* v___x_2072_; lean_object* v___x_2073_; uint8_t v___x_2074_; 
v___x_2072_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2069_);
v___x_2073_ = lean_unsigned_to_nat(4u);
v___x_2074_ = lean_nat_dec_lt(v___x_2072_, v___x_2073_);
lean_dec(v___x_2072_);
if (v___x_2074_ == 0)
{
lean_object* v_ks_2075_; lean_object* v_vs_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v_ks_2075_ = lean_ctor_get(v_newNode_2069_, 0);
lean_inc_ref(v_ks_2075_);
v_vs_2076_ = lean_ctor_get(v_newNode_2069_, 1);
lean_inc_ref(v_vs_2076_);
lean_dec_ref(v_newNode_2069_);
v___x_2077_ = lean_unsigned_to_nat(0u);
v___x_2078_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___closed__0);
v___x_2079_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg(v_x_2013_, v_ks_2075_, v_vs_2076_, v___x_2077_, v___x_2078_);
lean_dec_ref(v_vs_2076_);
lean_dec_ref(v_ks_2075_);
return v___x_2079_;
}
else
{
return v_newNode_2069_;
}
}
else
{
return v_newNode_2069_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg(size_t v_depth_2082_, lean_object* v_keys_2083_, lean_object* v_vals_2084_, lean_object* v_i_2085_, lean_object* v_entries_2086_){
_start:
{
lean_object* v___x_2087_; uint8_t v___x_2088_; 
v___x_2087_ = lean_array_get_size(v_keys_2083_);
v___x_2088_ = lean_nat_dec_lt(v_i_2085_, v___x_2087_);
if (v___x_2088_ == 0)
{
lean_dec(v_i_2085_);
return v_entries_2086_;
}
else
{
lean_object* v_k_2089_; lean_object* v_v_2090_; uint64_t v___x_2091_; size_t v_h_2092_; size_t v___x_2093_; lean_object* v___x_2094_; size_t v___x_2095_; size_t v___x_2096_; size_t v___x_2097_; size_t v_h_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v_k_2089_ = lean_array_fget_borrowed(v_keys_2083_, v_i_2085_);
v_v_2090_ = lean_array_fget_borrowed(v_vals_2084_, v_i_2085_);
v___x_2091_ = l_Lean_instHashableMVarId_hash(v_k_2089_);
v_h_2092_ = lean_uint64_to_usize(v___x_2091_);
v___x_2093_ = ((size_t)5ULL);
v___x_2094_ = lean_unsigned_to_nat(1u);
v___x_2095_ = ((size_t)1ULL);
v___x_2096_ = lean_usize_sub(v_depth_2082_, v___x_2095_);
v___x_2097_ = lean_usize_mul(v___x_2093_, v___x_2096_);
v_h_2098_ = lean_usize_shift_right(v_h_2092_, v___x_2097_);
v___x_2099_ = lean_nat_add(v_i_2085_, v___x_2094_);
lean_dec(v_i_2085_);
lean_inc(v_v_2090_);
lean_inc(v_k_2089_);
v___x_2100_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(v_entries_2086_, v_h_2098_, v_depth_2082_, v_k_2089_, v_v_2090_);
v_i_2085_ = v___x_2099_;
v_entries_2086_ = v___x_2100_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg___boxed(lean_object* v_depth_2102_, lean_object* v_keys_2103_, lean_object* v_vals_2104_, lean_object* v_i_2105_, lean_object* v_entries_2106_){
_start:
{
size_t v_depth_boxed_2107_; lean_object* v_res_2108_; 
v_depth_boxed_2107_ = lean_unbox_usize(v_depth_2102_);
lean_dec(v_depth_2102_);
v_res_2108_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg(v_depth_boxed_2107_, v_keys_2103_, v_vals_2104_, v_i_2105_, v_entries_2106_);
lean_dec_ref(v_vals_2104_);
lean_dec_ref(v_keys_2103_);
return v_res_2108_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg___boxed(lean_object* v_x_2109_, lean_object* v_x_2110_, lean_object* v_x_2111_, lean_object* v_x_2112_, lean_object* v_x_2113_){
_start:
{
size_t v_x_96441__boxed_2114_; size_t v_x_96442__boxed_2115_; lean_object* v_res_2116_; 
v_x_96441__boxed_2114_ = lean_unbox_usize(v_x_2110_);
lean_dec(v_x_2110_);
v_x_96442__boxed_2115_ = lean_unbox_usize(v_x_2111_);
lean_dec(v_x_2111_);
v_res_2116_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(v_x_2109_, v_x_96441__boxed_2114_, v_x_96442__boxed_2115_, v_x_2112_, v_x_2113_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1___redArg(lean_object* v_x_2117_, lean_object* v_x_2118_, lean_object* v_x_2119_){
_start:
{
uint64_t v___x_2120_; size_t v___x_2121_; size_t v___x_2122_; lean_object* v___x_2123_; 
v___x_2120_ = l_Lean_instHashableMVarId_hash(v_x_2118_);
v___x_2121_ = lean_uint64_to_usize(v___x_2120_);
v___x_2122_ = ((size_t)1ULL);
v___x_2123_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(v_x_2117_, v___x_2121_, v___x_2122_, v_x_2118_, v_x_2119_);
return v___x_2123_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg(lean_object* v_mvarId_2124_, lean_object* v_val_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v___x_2128_; lean_object* v_mctx_2129_; lean_object* v_cache_2130_; lean_object* v_zetaDeltaFVarIds_2131_; lean_object* v_postponed_2132_; lean_object* v_diag_2133_; lean_object* v_rewriteFires_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2164_; 
v___x_2128_ = lean_st_ref_take(v___y_2126_);
v_mctx_2129_ = lean_ctor_get(v___x_2128_, 0);
v_cache_2130_ = lean_ctor_get(v___x_2128_, 1);
v_zetaDeltaFVarIds_2131_ = lean_ctor_get(v___x_2128_, 2);
v_postponed_2132_ = lean_ctor_get(v___x_2128_, 3);
v_diag_2133_ = lean_ctor_get(v___x_2128_, 4);
v_rewriteFires_2134_ = lean_ctor_get(v___x_2128_, 5);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2136_ = v___x_2128_;
v_isShared_2137_ = v_isSharedCheck_2164_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_rewriteFires_2134_);
lean_inc(v_diag_2133_);
lean_inc(v_postponed_2132_);
lean_inc(v_zetaDeltaFVarIds_2131_);
lean_inc(v_cache_2130_);
lean_inc(v_mctx_2129_);
lean_dec(v___x_2128_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2164_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v_depth_2138_; lean_object* v_levelAssignDepth_2139_; lean_object* v_lmvarCounter_2140_; lean_object* v_mvarCounter_2141_; lean_object* v_lDecls_2142_; lean_object* v_decls_2143_; lean_object* v_userNames_2144_; lean_object* v_lAssignment_2145_; lean_object* v_eAssignment_2146_; lean_object* v_dAssignment_2147_; lean_object* v_instanceTypedMVars_2148_; lean_object* v_synthNormMemo_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2163_; 
v_depth_2138_ = lean_ctor_get(v_mctx_2129_, 0);
v_levelAssignDepth_2139_ = lean_ctor_get(v_mctx_2129_, 1);
v_lmvarCounter_2140_ = lean_ctor_get(v_mctx_2129_, 2);
v_mvarCounter_2141_ = lean_ctor_get(v_mctx_2129_, 3);
v_lDecls_2142_ = lean_ctor_get(v_mctx_2129_, 4);
v_decls_2143_ = lean_ctor_get(v_mctx_2129_, 5);
v_userNames_2144_ = lean_ctor_get(v_mctx_2129_, 6);
v_lAssignment_2145_ = lean_ctor_get(v_mctx_2129_, 7);
v_eAssignment_2146_ = lean_ctor_get(v_mctx_2129_, 8);
v_dAssignment_2147_ = lean_ctor_get(v_mctx_2129_, 9);
v_instanceTypedMVars_2148_ = lean_ctor_get(v_mctx_2129_, 10);
v_synthNormMemo_2149_ = lean_ctor_get(v_mctx_2129_, 11);
v_isSharedCheck_2163_ = !lean_is_exclusive(v_mctx_2129_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2151_ = v_mctx_2129_;
v_isShared_2152_ = v_isSharedCheck_2163_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_synthNormMemo_2149_);
lean_inc(v_instanceTypedMVars_2148_);
lean_inc(v_dAssignment_2147_);
lean_inc(v_eAssignment_2146_);
lean_inc(v_lAssignment_2145_);
lean_inc(v_userNames_2144_);
lean_inc(v_decls_2143_);
lean_inc(v_lDecls_2142_);
lean_inc(v_mvarCounter_2141_);
lean_inc(v_lmvarCounter_2140_);
lean_inc(v_levelAssignDepth_2139_);
lean_inc(v_depth_2138_);
lean_dec(v_mctx_2129_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2163_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2156_; 
v___x_2153_ = lean_box(0);
v___x_2154_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1___redArg(v_eAssignment_2146_, v_mvarId_2124_, v_val_2125_);
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 8, v___x_2154_);
v___x_2156_ = v___x_2151_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_depth_2138_);
lean_ctor_set(v_reuseFailAlloc_2162_, 1, v_levelAssignDepth_2139_);
lean_ctor_set(v_reuseFailAlloc_2162_, 2, v_lmvarCounter_2140_);
lean_ctor_set(v_reuseFailAlloc_2162_, 3, v_mvarCounter_2141_);
lean_ctor_set(v_reuseFailAlloc_2162_, 4, v_lDecls_2142_);
lean_ctor_set(v_reuseFailAlloc_2162_, 5, v_decls_2143_);
lean_ctor_set(v_reuseFailAlloc_2162_, 6, v_userNames_2144_);
lean_ctor_set(v_reuseFailAlloc_2162_, 7, v_lAssignment_2145_);
lean_ctor_set(v_reuseFailAlloc_2162_, 8, v___x_2154_);
lean_ctor_set(v_reuseFailAlloc_2162_, 9, v_dAssignment_2147_);
lean_ctor_set(v_reuseFailAlloc_2162_, 10, v_instanceTypedMVars_2148_);
lean_ctor_set(v_reuseFailAlloc_2162_, 11, v_synthNormMemo_2149_);
v___x_2156_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2158_; 
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 0, v___x_2156_);
v___x_2158_ = v___x_2136_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v___x_2156_);
lean_ctor_set(v_reuseFailAlloc_2161_, 1, v_cache_2130_);
lean_ctor_set(v_reuseFailAlloc_2161_, 2, v_zetaDeltaFVarIds_2131_);
lean_ctor_set(v_reuseFailAlloc_2161_, 3, v_postponed_2132_);
lean_ctor_set(v_reuseFailAlloc_2161_, 4, v_diag_2133_);
lean_ctor_set(v_reuseFailAlloc_2161_, 5, v_rewriteFires_2134_);
v___x_2158_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = lean_st_ref_put(v___y_2126_, v___x_2158_);
v___x_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2153_);
return v___x_2160_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg___boxed(lean_object* v_mvarId_2165_, lean_object* v_val_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_){
_start:
{
lean_object* v_res_2169_; 
v_res_2169_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg(v_mvarId_2165_, v_val_2166_, v___y_2167_);
lean_dec(v___y_2167_);
return v_res_2169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg(lean_object* v_o_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v_env_2175_; lean_object* v___x_2176_; lean_object* v_toEnvExtension_2177_; lean_object* v_asyncMode_2178_; lean_object* v___x_2179_; uint8_t v___x_2180_; lean_object* v___x_2181_; lean_object* v_merged_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2190_; 
v___x_2173_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_2174_ = lean_st_ref_get(v___y_2171_);
v_env_2175_ = lean_ctor_get(v___x_2174_, 0);
lean_inc_ref(v_env_2175_);
lean_dec(v___x_2174_);
v___x_2176_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_2177_ = lean_ctor_get(v___x_2176_, 0);
v_asyncMode_2178_ = lean_ctor_get(v_toEnvExtension_2177_, 2);
v___x_2179_ = lean_box(0);
v___x_2180_ = 0;
v___x_2181_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2173_, v___x_2176_, v_env_2175_, v_asyncMode_2178_, v___x_2179_, v___x_2180_);
v_merged_2182_ = lean_ctor_get(v___x_2181_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2190_ == 0)
{
lean_object* v_unused_2191_; 
v_unused_2191_ = lean_ctor_get(v___x_2181_, 1);
lean_dec(v_unused_2191_);
v___x_2184_ = v___x_2181_;
v_isShared_2185_ = v_isSharedCheck_2190_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_merged_2182_);
lean_dec(v___x_2181_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2190_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 1, v_merged_2182_);
lean_ctor_set(v___x_2184_, 0, v_o_2170_);
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_o_2170_);
lean_ctor_set(v_reuseFailAlloc_2189_, 1, v_merged_2182_);
v___x_2187_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
lean_object* v___x_2188_; 
v___x_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2187_);
return v___x_2188_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg___boxed(lean_object* v_o_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
lean_object* v_res_2195_; 
v_res_2195_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg(v_o_2192_, v___y_2193_);
lean_dec(v___y_2193_);
return v_res_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2(lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; 
v___x_2205_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2202_);
v___x_2206_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg(v___x_2205_, v___y_2203_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2___boxed(lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2(v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_);
lean_dec(v___y_2214_);
lean_dec_ref(v___y_2213_);
lean_dec(v___y_2212_);
lean_dec_ref(v___y_2211_);
lean_dec(v___y_2210_);
lean_dec_ref(v___y_2209_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
return v_res_2216_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__6(void){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2224_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__5));
v___x_2225_ = l_Lean_stringToMessageData(v___x_2224_);
return v___x_2225_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__8(void){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2227_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__7));
v___x_2228_ = l_Lean_stringToMessageData(v___x_2227_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5(lean_object* v_usingArg_2232_, lean_object* v_snd_2233_, uint8_t v___x_2234_, lean_object* v___x_2235_, uint8_t v___x_2236_, uint8_t v_useReducible_2237_, uint8_t v___x_2238_, lean_object* v___x_2239_, lean_object* v___x_2240_, lean_object* v_simprocs_2241_, lean_object* v_discharge_x3f_2242_, lean_object* v_snd_2243_, lean_object* v___f_2244_, lean_object* v___x_2245_, lean_object* v___x_2246_, lean_object* v___x_2247_, lean_object* v___x_2248_, lean_object* v___f_2249_, lean_object* v_a_2250_, lean_object* v___x_2251_, lean_object* v___f_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2276_; lean_object* v___y_2277_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2280_; lean_object* v___y_2281_; lean_object* v___y_2282_; lean_object* v___y_2283_; lean_object* v___y_2284_; lean_object* v___y_2285_; lean_object* v___y_2286_; lean_object* v___y_2287_; lean_object* v___y_2288_; lean_object* v___y_2289_; lean_object* v___y_2290_; lean_object* v___y_2291_; lean_object* v___y_2327_; lean_object* v___y_2328_; lean_object* v___y_2329_; lean_object* v___y_2330_; lean_object* v___y_2331_; lean_object* v___y_2332_; lean_object* v___y_2333_; lean_object* v___y_2334_; lean_object* v___y_2335_; lean_object* v___y_2336_; lean_object* v___y_2337_; lean_object* v___y_2338_; 
if (lean_obj_tag(v_usingArg_2232_) == 1)
{
lean_object* v_val_2475_; lean_object* v___y_2477_; lean_object* v___y_2478_; lean_object* v___y_2479_; lean_object* v___y_2480_; lean_object* v___y_2481_; lean_object* v___y_2482_; lean_object* v___y_2483_; lean_object* v___y_2484_; lean_object* v___x_2527_; lean_object* v_infoState_2528_; uint8_t v_enabled_2529_; 
v_val_2475_ = lean_ctor_get(v_usingArg_2232_, 0);
lean_inc(v_val_2475_);
lean_dec_ref_known(v_usingArg_2232_, 1);
v___x_2527_ = lean_st_ref_get(v___y_2260_);
v_infoState_2528_ = lean_ctor_get(v___x_2527_, 8);
lean_inc_ref(v_infoState_2528_);
lean_dec(v___x_2527_);
v_enabled_2529_ = lean_ctor_get_uint8(v_infoState_2528_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2528_);
if (v_enabled_2529_ == 0)
{
lean_dec_ref(v___f_2252_);
v___y_2477_ = v___y_2253_;
v___y_2478_ = v___y_2254_;
v___y_2479_ = v___y_2255_;
v___y_2480_ = v___y_2256_;
v___y_2481_ = v___y_2257_;
v___y_2482_ = v___y_2258_;
v___y_2483_ = v___y_2259_;
v___y_2484_ = v___y_2260_;
goto v___jp_2476_;
}
else
{
lean_object* v___x_2530_; lean_object* v_a_2531_; lean_object* v___f_2532_; lean_object* v___x_2533_; 
v___x_2530_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__6___redArg(v___y_2260_);
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
lean_inc(v_a_2531_);
lean_dec_ref(v___x_2530_);
v___f_2532_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__4___boxed), 10, 1);
lean_closure_set(v___f_2532_, 0, v_a_2531_);
v___x_2533_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg(v___f_2532_, v___f_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_dec_ref_known(v___x_2533_, 1);
v___y_2477_ = v___y_2253_;
v___y_2478_ = v___y_2254_;
v___y_2479_ = v___y_2255_;
v___y_2480_ = v___y_2256_;
v___y_2481_ = v___y_2257_;
v___y_2482_ = v___y_2258_;
v___y_2483_ = v___y_2259_;
v___y_2484_ = v___y_2260_;
goto v___jp_2476_;
}
else
{
lean_object* v_a_2534_; lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2541_; 
lean_dec(v_val_2475_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec_ref(v_snd_2243_);
lean_dec(v_discharge_x3f_2242_);
lean_dec_ref(v_simprocs_2241_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v___x_2235_);
lean_dec(v_snd_2233_);
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2536_ = v___x_2533_;
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
else
{
lean_inc(v_a_2534_);
lean_dec(v___x_2533_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2539_; 
if (v_isShared_2537_ == 0)
{
v___x_2539_ = v___x_2536_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_a_2534_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
}
v___jp_2476_:
{
lean_object* v___x_2485_; lean_object* v_mctx_2486_; lean_object* v_mvarCounter_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2485_ = lean_st_ref_get(v___y_2482_);
v_mctx_2486_ = lean_ctor_get(v___x_2485_, 0);
lean_inc_ref(v_mctx_2486_);
lean_dec(v___x_2485_);
v_mvarCounter_2487_ = lean_ctor_get(v_mctx_2486_, 3);
lean_inc(v_mvarCounter_2487_);
lean_dec_ref(v_mctx_2486_);
v___x_2488_ = lean_box(0);
v___x_2489_ = l_Lean_Elab_Tactic_elabTerm(v_val_2475_, v___x_2488_, v___x_2234_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_);
if (lean_obj_tag(v___x_2489_) == 0)
{
lean_object* v_a_2490_; lean_object* v___x_2491_; 
v_a_2490_ = lean_ctor_get(v___x_2489_, 0);
lean_inc_n(v_a_2490_, 2);
lean_dec_ref_known(v___x_2489_, 1);
v___x_2491_ = l_Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4(v_snd_2233_, v_a_2490_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_);
if (lean_obj_tag(v___x_2491_) == 0)
{
lean_object* v_a_2492_; uint8_t v___x_2493_; 
v_a_2492_ = lean_ctor_get(v___x_2491_, 0);
lean_inc(v_a_2492_);
lean_dec_ref_known(v___x_2491_, 1);
v___x_2493_ = lean_unbox(v_a_2492_);
lean_dec(v_a_2492_);
if (v___x_2493_ == 0)
{
lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
lean_dec(v_mvarCounter_2487_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec_ref(v_snd_2243_);
lean_dec(v_discharge_x3f_2242_);
lean_dec_ref(v_simprocs_2241_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v___x_2235_);
v___x_2494_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__6, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__6_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__6);
v___x_2495_ = l_Lean_indentExpr(v_a_2490_);
v___x_2496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2494_);
lean_ctor_set(v___x_2496_, 1, v___x_2495_);
v___x_2497_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__8, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__8_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__8);
v___x_2498_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2496_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
v___x_2499_ = l_Lean_Expr_mvar___override(v_snd_2233_);
v___x_2500_ = l_Lean_MessageData_ofExpr(v___x_2499_);
v___x_2501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2498_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
v___x_2502_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg(v___x_2501_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_);
v_a_2503_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v___x_2502_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2502_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
else
{
v___y_2327_ = v_a_2490_;
v___y_2328_ = v___x_2488_;
v___y_2329_ = v_mvarCounter_2487_;
v___y_2330_ = v___x_2488_;
v___y_2331_ = v___y_2477_;
v___y_2332_ = v___y_2478_;
v___y_2333_ = v___y_2479_;
v___y_2334_ = v___y_2480_;
v___y_2335_ = v___y_2481_;
v___y_2336_ = v___y_2482_;
v___y_2337_ = v___y_2483_;
v___y_2338_ = v___y_2484_;
goto v___jp_2326_;
}
}
else
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2518_; 
lean_dec(v_a_2490_);
lean_dec(v_mvarCounter_2487_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec_ref(v_snd_2243_);
lean_dec(v_discharge_x3f_2242_);
lean_dec_ref(v_simprocs_2241_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v___x_2235_);
lean_dec(v_snd_2233_);
v_a_2511_ = lean_ctor_get(v___x_2491_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2491_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2513_ = v___x_2491_;
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2491_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2516_; 
if (v_isShared_2514_ == 0)
{
v___x_2516_ = v___x_2513_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2511_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
return v___x_2516_;
}
}
}
}
else
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2526_; 
lean_dec(v_mvarCounter_2487_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec_ref(v_snd_2243_);
lean_dec(v_discharge_x3f_2242_);
lean_dec_ref(v_simprocs_2241_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v___x_2235_);
lean_dec(v_snd_2233_);
v_a_2519_ = lean_ctor_get(v___x_2489_, 0);
v_isSharedCheck_2526_ = !lean_is_exclusive(v___x_2489_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2521_ = v___x_2489_;
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2489_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2524_; 
if (v_isShared_2522_ == 0)
{
v___x_2524_ = v___x_2521_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v_a_2519_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
}
}
else
{
lean_object* v_lctx_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
lean_dec_ref(v___f_2252_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec_ref(v___x_2235_);
lean_dec(v_usingArg_2232_);
v_lctx_2542_ = lean_ctor_get(v___y_2257_, 2);
v___x_2543_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__10));
v___x_2544_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_2542_, v___x_2543_);
if (lean_obj_tag(v___x_2544_) == 1)
{
lean_object* v_val_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v_val_2545_ = lean_ctor_get(v___x_2544_, 0);
lean_inc(v_val_2545_);
lean_dec_ref_known(v___x_2544_, 1);
v___x_2546_ = l_Lean_LocalDecl_fvarId(v_val_2545_);
lean_dec(v_val_2545_);
v___x_2547_ = lean_mk_empty_array_with_capacity(v___x_2239_);
v___x_2548_ = lean_array_push(v___x_2547_, v___x_2546_);
lean_inc_ref(v_snd_2243_);
v___x_2549_ = l_Lean_Meta_simpGoal(v_snd_2233_, v___x_2240_, v_simprocs_2241_, v_discharge_x3f_2242_, v___x_2236_, v___x_2548_, v_snd_2243_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2578_; 
v_a_2550_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2552_ = v___x_2549_;
v_isShared_2553_ = v_isSharedCheck_2578_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2549_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2578_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v_fst_2554_; 
v_fst_2554_ = lean_ctor_get(v_a_2550_, 0);
if (lean_obj_tag(v_fst_2554_) == 1)
{
lean_object* v_val_2555_; lean_object* v_snd_2556_; lean_object* v_snd_2557_; lean_object* v___x_2558_; 
lean_del_object(v___x_2552_);
lean_dec_ref(v_snd_2243_);
v_val_2555_ = lean_ctor_get(v_fst_2554_, 0);
lean_inc(v_val_2555_);
v_snd_2556_ = lean_ctor_get(v_a_2550_, 1);
lean_inc(v_snd_2556_);
lean_dec(v_a_2550_);
v_snd_2557_ = lean_ctor_get(v_val_2555_, 1);
lean_inc(v_snd_2557_);
lean_dec(v_val_2555_);
v___x_2558_ = l_Lean_MVarId_assumption(v_snd_2557_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
if (lean_obj_tag(v___x_2558_) == 0)
{
lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2558_);
if (v_isSharedCheck_2565_ == 0)
{
lean_object* v_unused_2566_; 
v_unused_2566_ = lean_ctor_get(v___x_2558_, 0);
lean_dec(v_unused_2566_);
v___x_2560_ = v___x_2558_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_dec(v___x_2558_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 0, v_snd_2556_);
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_snd_2556_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
lean_dec(v_snd_2556_);
v_a_2567_ = lean_ctor_get(v___x_2558_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2558_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2558_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2558_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
else
{
lean_object* v___x_2576_; 
lean_dec(v_a_2550_);
if (v_isShared_2553_ == 0)
{
lean_ctor_set(v___x_2552_, 0, v_snd_2243_);
v___x_2576_ = v___x_2552_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_snd_2243_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
}
}
else
{
lean_object* v_a_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2586_; 
lean_dec_ref(v_snd_2243_);
v_a_2579_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2581_ = v___x_2549_;
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_a_2579_);
lean_dec(v___x_2549_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v___x_2584_; 
if (v_isShared_2582_ == 0)
{
v___x_2584_ = v___x_2581_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_a_2579_);
v___x_2584_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
return v___x_2584_;
}
}
}
}
else
{
lean_object* v___x_2587_; 
lean_dec(v___x_2544_);
lean_dec(v_discharge_x3f_2242_);
lean_dec_ref(v_simprocs_2241_);
lean_dec_ref(v___x_2240_);
v___x_2587_ = l_Lean_MVarId_assumption(v_snd_2233_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2594_; 
v_isSharedCheck_2594_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2594_ == 0)
{
lean_object* v_unused_2595_; 
v_unused_2595_ = lean_ctor_get(v___x_2587_, 0);
lean_dec(v_unused_2595_);
v___x_2589_ = v___x_2587_;
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
else
{
lean_dec(v___x_2587_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2592_; 
if (v_isShared_2590_ == 0)
{
lean_ctor_set(v___x_2589_, 0, v_snd_2243_);
v___x_2592_ = v___x_2589_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_snd_2243_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
return v___x_2592_;
}
}
}
else
{
lean_object* v_a_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2603_; 
lean_dec_ref(v_snd_2243_);
v_a_2596_ = lean_ctor_get(v___x_2587_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2598_ = v___x_2587_;
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_a_2596_);
lean_dec(v___x_2587_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2601_; 
if (v_isShared_2599_ == 0)
{
v___x_2601_ = v___x_2598_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v_a_2596_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
return v___x_2601_;
}
}
}
}
}
v___jp_2262_:
{
lean_object* v___x_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2273_; 
v___x_2266_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg(v_snd_2233_, v___y_2264_, v___y_2265_);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2273_ == 0)
{
lean_object* v_unused_2274_; 
v_unused_2274_ = lean_ctor_get(v___x_2266_, 0);
lean_dec(v_unused_2274_);
v___x_2268_ = v___x_2266_;
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
else
{
lean_dec(v___x_2266_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 0, v___y_2263_);
v___x_2271_ = v___x_2268_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v___y_2263_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
v___jp_2275_:
{
lean_object* v___x_2292_; 
v___x_2292_ = l_Lean_Core_mkFreshUserName(v___y_2289_, v___y_2279_, v___y_2282_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; lean_object* v___x_2294_; 
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc_n(v_a_2293_, 2);
lean_dec_ref_known(v___x_2292_, 1);
v___x_2294_ = l_Lean_MVarId_rename(v___y_2287_, v___y_2291_, v_a_2293_, v___y_2284_, v___y_2283_, v___y_2279_, v___y_2282_);
if (lean_obj_tag(v___x_2294_) == 0)
{
lean_object* v_a_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___f_2300_; lean_object* v___x_2301_; 
v_a_2295_ = lean_ctor_get(v___x_2294_, 0);
lean_inc_n(v_a_2295_, 2);
lean_dec_ref_known(v___x_2294_, 1);
v___x_2296_ = lean_box(v___x_2234_);
v___x_2297_ = lean_box(v___x_2236_);
v___x_2298_ = lean_box(v_useReducible_2237_);
v___x_2299_ = lean_box(v___x_2238_);
v___f_2300_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__3___boxed), 19, 10);
lean_closure_set(v___f_2300_, 0, v_a_2295_);
lean_closure_set(v___f_2300_, 1, v_a_2293_);
lean_closure_set(v___f_2300_, 2, v___x_2296_);
lean_closure_set(v___f_2300_, 3, v___y_2276_);
lean_closure_set(v___f_2300_, 4, v___y_2278_);
lean_closure_set(v___f_2300_, 5, v___x_2235_);
lean_closure_set(v___f_2300_, 6, v___x_2297_);
lean_closure_set(v___f_2300_, 7, v___y_2277_);
lean_closure_set(v___f_2300_, 8, v___x_2298_);
lean_closure_set(v___f_2300_, 9, v___x_2299_);
v___x_2301_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(v_a_2295_, v___f_2300_, v___y_2285_, v___y_2280_, v___y_2286_, v___y_2281_, v___y_2284_, v___y_2283_, v___y_2279_, v___y_2282_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_dec_ref_known(v___x_2301_, 1);
v___y_2263_ = v___y_2288_;
v___y_2264_ = v___y_2290_;
v___y_2265_ = v___y_2283_;
goto v___jp_2262_;
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_dec_ref(v___y_2290_);
lean_dec_ref(v___y_2288_);
lean_dec(v_snd_2233_);
v_a_2302_ = lean_ctor_get(v___x_2301_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2301_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2301_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
else
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2317_; 
lean_dec(v_a_2293_);
lean_dec_ref(v___y_2290_);
lean_dec_ref(v___y_2288_);
lean_dec(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec_ref(v___x_2235_);
lean_dec(v_snd_2233_);
v_a_2310_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2312_ = v___x_2294_;
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2294_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2315_; 
if (v_isShared_2313_ == 0)
{
v___x_2315_ = v___x_2312_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_a_2310_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
else
{
lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2325_; 
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
lean_dec_ref(v___y_2288_);
lean_dec(v___y_2287_);
lean_dec(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec_ref(v___x_2235_);
lean_dec(v_snd_2233_);
v_a_2318_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2320_ = v___x_2292_;
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v___x_2292_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2323_; 
if (v_isShared_2321_ == 0)
{
v___x_2323_ = v___x_2320_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_a_2318_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
}
}
v___jp_2326_:
{
lean_object* v___x_2339_; 
lean_inc(v_snd_2233_);
v___x_2339_ = l_Lean_MVarId_getType(v_snd_2233_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; lean_object* v___x_2341_; 
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2340_);
lean_dec_ref_known(v___x_2339_, 1);
lean_inc(v_snd_2233_);
v___x_2341_ = l_Lean_MVarId_getTag(v_snd_2233_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_);
if (lean_obj_tag(v___x_2341_) == 0)
{
lean_object* v_a_2342_; lean_object* v___x_2343_; 
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
lean_inc(v_a_2342_);
lean_dec_ref_known(v___x_2341_, 1);
v___x_2343_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_2340_, v_a_2342_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2344_);
lean_dec_ref_known(v___x_2343_, 1);
v___x_2345_ = l_Lean_Expr_mvarId_x21(v_a_2344_);
v___x_2346_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__1));
lean_inc_ref(v___y_2327_);
v___x_2347_ = l_Lean_MVarId_note(v___x_2345_, v___x_2346_, v___y_2327_, v___y_2330_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_);
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v_a_2348_; lean_object* v_fst_2349_; lean_object* v_snd_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; 
v_a_2348_ = lean_ctor_get(v___x_2347_, 0);
lean_inc(v_a_2348_);
lean_dec_ref_known(v___x_2347_, 1);
v_fst_2349_ = lean_ctor_get(v_a_2348_, 0);
lean_inc_n(v_fst_2349_, 2);
v_snd_2350_ = lean_ctor_get(v_a_2348_, 1);
lean_inc(v_snd_2350_);
lean_dec(v_a_2348_);
v___x_2351_ = lean_mk_empty_array_with_capacity(v___x_2239_);
v___x_2352_ = lean_array_push(v___x_2351_, v_fst_2349_);
v___x_2353_ = l_Lean_Meta_simpGoal(v_snd_2350_, v___x_2240_, v_simprocs_2241_, v_discharge_x3f_2242_, v___x_2236_, v___x_2352_, v_snd_2243_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v_fst_2355_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_a_2354_);
lean_dec_ref_known(v___x_2353_, 1);
v_fst_2355_ = lean_ctor_get(v_a_2354_, 0);
if (lean_obj_tag(v_fst_2355_) == 0)
{
lean_object* v_snd_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2426_; 
lean_dec(v_fst_2349_);
lean_dec(v___y_2329_);
lean_dec(v___y_2328_);
lean_dec_ref(v___x_2235_);
v_snd_2356_ = lean_ctor_get(v_a_2354_, 1);
v_isSharedCheck_2426_ = !lean_is_exclusive(v_a_2354_);
if (v_isSharedCheck_2426_ == 0)
{
lean_object* v_unused_2427_; 
v_unused_2427_ = lean_ctor_get(v_a_2354_, 0);
lean_dec(v_unused_2427_);
v___x_2358_ = v_a_2354_;
v_isShared_2359_ = v_isSharedCheck_2426_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_snd_2356_);
lean_dec(v_a_2354_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2426_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2360_; lean_object* v_a_2361_; uint8_t v___x_2362_; 
v___x_2360_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2(v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_);
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
lean_inc(v_a_2361_);
lean_dec_ref(v___x_2360_);
v___x_2362_ = l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(v_a_2361_);
lean_dec(v_a_2361_);
if (v___x_2362_ == 0)
{
lean_del_object(v___x_2358_);
lean_dec_ref(v___y_2327_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
v___y_2263_ = v_snd_2356_;
v___y_2264_ = v_a_2344_;
v___y_2265_ = v___y_2336_;
goto v___jp_2262_;
}
else
{
if (lean_obj_tag(v___y_2327_) == 1)
{
lean_object* v_fvarId_2363_; lean_object* v_lctx_2364_; lean_object* v___x_2365_; 
v_fvarId_2363_ = lean_ctor_get(v___y_2327_, 0);
lean_inc(v_fvarId_2363_);
lean_dec_ref_known(v___y_2327_, 1);
v_lctx_2364_ = lean_ctor_get(v___y_2335_, 2);
lean_inc_ref(v_lctx_2364_);
v___x_2365_ = l_Lean_LocalContext_getRoundtrippingUserName_x3f(v_lctx_2364_, v_fvarId_2363_);
if (lean_obj_tag(v___x_2365_) == 1)
{
lean_object* v_val_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2425_; 
v_val_2366_ = lean_ctor_get(v___x_2365_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2365_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2368_ = v___x_2365_;
v_isShared_2369_ = v_isSharedCheck_2425_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_val_2366_);
lean_dec(v___x_2365_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2425_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2370_ = l_Lean_mkIdent(v_val_2366_);
lean_inc_ref(v___f_2244_);
lean_inc(v___y_2338_);
lean_inc_ref(v___y_2337_);
lean_inc(v___y_2336_);
lean_inc_ref(v___y_2335_);
lean_inc(v___y_2334_);
lean_inc_ref(v___y_2333_);
lean_inc(v___y_2332_);
lean_inc_ref(v___y_2331_);
v___x_2371_ = lean_apply_9(v___f_2244_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_, lean_box(0));
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; 
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
lean_inc_n(v_a_2372_, 2);
lean_dec_ref_known(v___x_2371_, 1);
v___x_2373_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__2));
lean_inc_ref(v___x_2247_);
lean_inc_ref(v___x_2246_);
lean_inc_ref(v___x_2245_);
v___x_2374_ = l_Lean_Name_mkStr4(v___x_2245_, v___x_2246_, v___x_2247_, v___x_2373_);
v___x_2375_ = l_Lean_Syntax_node1(v_a_2372_, v___x_2248_, v___x_2370_);
v___x_2376_ = l_Lean_Syntax_node1(v_a_2372_, v___x_2374_, v___x_2375_);
lean_inc(v___y_2338_);
lean_inc_ref(v___y_2337_);
lean_inc(v___y_2336_);
lean_inc_ref(v___y_2335_);
lean_inc(v___y_2334_);
lean_inc_ref(v___y_2333_);
lean_inc(v___y_2332_);
lean_inc_ref(v___y_2331_);
v___x_2377_ = lean_apply_9(v___f_2244_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_, lean_box(0));
if (lean_obj_tag(v___x_2377_) == 0)
{
lean_object* v_a_2378_; lean_object* v_ref_2379_; lean_object* v___x_2380_; lean_object* v___x_2382_; 
v_a_2378_ = lean_ctor_get(v___x_2377_, 0);
lean_inc_n(v_a_2378_, 2);
lean_dec_ref_known(v___x_2377_, 1);
v_ref_2379_ = lean_ctor_get(v___y_2337_, 2);
v___x_2380_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__3));
if (v_isShared_2359_ == 0)
{
lean_ctor_set_tag(v___x_2358_, 2);
lean_ctor_set(v___x_2358_, 1, v___x_2380_);
lean_ctor_set(v___x_2358_, 0, v_a_2378_);
v___x_2382_ = v___x_2358_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_a_2378_);
lean_ctor_set(v_reuseFailAlloc_2408_, 1, v___x_2380_);
v___x_2382_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2387_; 
v___x_2383_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___closed__4));
v___x_2384_ = l_Lean_Name_mkStr4(v___x_2245_, v___x_2246_, v___x_2247_, v___x_2383_);
v___x_2385_ = l_Lean_Syntax_node2(v_a_2378_, v___x_2384_, v___x_2382_, v___x_2376_);
if (v_isShared_2369_ == 0)
{
lean_ctor_set(v___x_2368_, 0, v___x_2385_);
v___x_2387_ = v___x_2368_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v___x_2385_);
v___x_2387_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
lean_object* v___x_2388_; 
lean_inc(v___y_2338_);
lean_inc_ref(v___y_2337_);
lean_inc(v___y_2336_);
lean_inc_ref(v___y_2335_);
lean_inc(v___y_2334_);
lean_inc_ref(v___y_2333_);
lean_inc(v___y_2332_);
lean_inc_ref(v___y_2331_);
v___x_2388_ = lean_apply_10(v___f_2249_, v___x_2387_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_, lean_box(0));
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v___x_2390_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2389_);
lean_dec_ref_known(v___x_2388_, 1);
lean_inc(v_ref_2379_);
v___x_2390_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa(v_a_2250_, v_ref_2379_, v_a_2389_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_dec_ref_known(v___x_2390_, 1);
v___y_2263_ = v_snd_2356_;
v___y_2264_ = v_a_2344_;
v___y_2265_ = v___y_2336_;
goto v___jp_2262_;
}
else
{
lean_object* v_a_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2398_; 
lean_dec(v_snd_2356_);
lean_dec(v_a_2344_);
lean_dec(v_snd_2233_);
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
v_isSharedCheck_2398_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2393_ = v___x_2390_;
v_isShared_2394_ = v_isSharedCheck_2398_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_a_2391_);
lean_dec(v___x_2390_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2398_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v___x_2396_; 
if (v_isShared_2394_ == 0)
{
v___x_2396_ = v___x_2393_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_a_2391_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
return v___x_2396_;
}
}
}
}
else
{
lean_object* v_a_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2406_; 
lean_dec(v_snd_2356_);
lean_dec(v_a_2344_);
lean_dec_ref(v_a_2250_);
lean_dec(v_snd_2233_);
v_a_2399_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2401_ = v___x_2388_;
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_a_2399_);
lean_dec(v___x_2388_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v___x_2404_; 
if (v_isShared_2402_ == 0)
{
v___x_2404_ = v___x_2401_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_a_2399_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
return v___x_2404_;
}
}
}
}
}
}
else
{
lean_object* v_a_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2416_; 
lean_dec(v___x_2376_);
lean_del_object(v___x_2368_);
lean_del_object(v___x_2358_);
lean_dec(v_snd_2356_);
lean_dec(v_a_2344_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec(v_snd_2233_);
v_a_2409_ = lean_ctor_get(v___x_2377_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2377_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2411_ = v___x_2377_;
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_a_2409_);
lean_dec(v___x_2377_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v___x_2414_; 
if (v_isShared_2412_ == 0)
{
v___x_2414_ = v___x_2411_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_a_2409_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
}
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
lean_dec(v___x_2370_);
lean_del_object(v___x_2368_);
lean_del_object(v___x_2358_);
lean_dec(v_snd_2356_);
lean_dec(v_a_2344_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec(v_snd_2233_);
v_a_2417_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___x_2371_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2371_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
}
}
else
{
lean_dec(v___x_2365_);
lean_del_object(v___x_2358_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
v___y_2263_ = v_snd_2356_;
v___y_2264_ = v_a_2344_;
v___y_2265_ = v___y_2336_;
goto v___jp_2262_;
}
}
else
{
lean_del_object(v___x_2358_);
lean_dec_ref(v___y_2327_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
v___y_2263_ = v_snd_2356_;
v___y_2264_ = v_a_2344_;
v___y_2265_ = v___y_2336_;
goto v___jp_2262_;
}
}
}
}
else
{
lean_object* v_val_2428_; lean_object* v_snd_2429_; lean_object* v_fst_2430_; lean_object* v_snd_2431_; lean_object* v___x_2432_; uint8_t v___x_2433_; 
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
v_val_2428_ = lean_ctor_get(v_fst_2355_, 0);
lean_inc(v_val_2428_);
v_snd_2429_ = lean_ctor_get(v_a_2354_, 1);
lean_inc(v_snd_2429_);
lean_dec(v_a_2354_);
v_fst_2430_ = lean_ctor_get(v_val_2428_, 0);
lean_inc(v_fst_2430_);
v_snd_2431_ = lean_ctor_get(v_val_2428_, 1);
lean_inc(v_snd_2431_);
lean_dec(v_val_2428_);
v___x_2432_ = lean_array_get_size(v_fst_2430_);
v___x_2433_ = lean_nat_dec_lt(v___x_2251_, v___x_2432_);
if (v___x_2433_ == 0)
{
lean_dec(v_fst_2430_);
v___y_2276_ = v___y_2327_;
v___y_2277_ = v___y_2328_;
v___y_2278_ = v___y_2329_;
v___y_2279_ = v___y_2337_;
v___y_2280_ = v___y_2332_;
v___y_2281_ = v___y_2334_;
v___y_2282_ = v___y_2338_;
v___y_2283_ = v___y_2336_;
v___y_2284_ = v___y_2335_;
v___y_2285_ = v___y_2331_;
v___y_2286_ = v___y_2333_;
v___y_2287_ = v_snd_2431_;
v___y_2288_ = v_snd_2429_;
v___y_2289_ = v___x_2346_;
v___y_2290_ = v_a_2344_;
v___y_2291_ = v_fst_2349_;
goto v___jp_2275_;
}
else
{
lean_object* v___x_2434_; 
lean_dec(v_fst_2349_);
v___x_2434_ = lean_array_fget(v_fst_2430_, v___x_2251_);
lean_dec(v_fst_2430_);
v___y_2276_ = v___y_2327_;
v___y_2277_ = v___y_2328_;
v___y_2278_ = v___y_2329_;
v___y_2279_ = v___y_2337_;
v___y_2280_ = v___y_2332_;
v___y_2281_ = v___y_2334_;
v___y_2282_ = v___y_2338_;
v___y_2283_ = v___y_2336_;
v___y_2284_ = v___y_2335_;
v___y_2285_ = v___y_2331_;
v___y_2286_ = v___y_2333_;
v___y_2287_ = v_snd_2431_;
v___y_2288_ = v_snd_2429_;
v___y_2289_ = v___x_2346_;
v___y_2290_ = v_a_2344_;
v___y_2291_ = v___x_2434_;
goto v___jp_2275_;
}
}
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2442_; 
lean_dec(v_fst_2349_);
lean_dec(v_a_2344_);
lean_dec(v___y_2329_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec_ref(v___x_2235_);
lean_dec(v_snd_2233_);
v_a_2435_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2437_ = v___x_2353_;
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2353_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2440_; 
if (v_isShared_2438_ == 0)
{
v___x_2440_ = v___x_2437_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_a_2435_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
}
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2450_; 
lean_dec(v_a_2344_);
lean_dec(v___y_2329_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec_ref(v_snd_2243_);
lean_dec(v_discharge_x3f_2242_);
lean_dec_ref(v_simprocs_2241_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v___x_2235_);
lean_dec(v_snd_2233_);
v_a_2443_ = lean_ctor_get(v___x_2347_, 0);
v_isSharedCheck_2450_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2445_ = v___x_2347_;
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2347_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2448_; 
if (v_isShared_2446_ == 0)
{
v___x_2448_ = v___x_2445_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_a_2443_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
}
else
{
lean_object* v_a_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2458_; 
lean_dec(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec_ref(v_snd_2243_);
lean_dec(v_discharge_x3f_2242_);
lean_dec_ref(v_simprocs_2241_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v___x_2235_);
lean_dec(v_snd_2233_);
v_a_2451_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2458_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2458_ == 0)
{
v___x_2453_ = v___x_2343_;
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_a_2451_);
lean_dec(v___x_2343_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2456_; 
if (v_isShared_2454_ == 0)
{
v___x_2456_ = v___x_2453_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v_a_2451_);
v___x_2456_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
return v___x_2456_;
}
}
}
}
else
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2466_; 
lean_dec(v_a_2340_);
lean_dec(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec_ref(v_snd_2243_);
lean_dec(v_discharge_x3f_2242_);
lean_dec_ref(v_simprocs_2241_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v___x_2235_);
lean_dec(v_snd_2233_);
v_a_2459_ = lean_ctor_get(v___x_2341_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2461_ = v___x_2341_;
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2341_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2464_; 
if (v_isShared_2462_ == 0)
{
v___x_2464_ = v___x_2461_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_a_2459_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
}
else
{
lean_object* v_a_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2474_; 
lean_dec(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
lean_dec_ref(v_a_2250_);
lean_dec_ref(v___f_2249_);
lean_dec(v___x_2248_);
lean_dec_ref(v___x_2247_);
lean_dec_ref(v___x_2246_);
lean_dec_ref(v___x_2245_);
lean_dec_ref(v___f_2244_);
lean_dec_ref(v_snd_2243_);
lean_dec(v_discharge_x3f_2242_);
lean_dec_ref(v_simprocs_2241_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v___x_2235_);
lean_dec(v_snd_2233_);
v_a_2467_ = lean_ctor_get(v___x_2339_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2469_ = v___x_2339_;
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_a_2467_);
lean_dec(v___x_2339_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v___x_2472_; 
if (v_isShared_2470_ == 0)
{
v___x_2472_ = v___x_2469_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_a_2467_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___boxed(lean_object** _args){
lean_object* v_usingArg_2604_ = _args[0];
lean_object* v_snd_2605_ = _args[1];
lean_object* v___x_2606_ = _args[2];
lean_object* v___x_2607_ = _args[3];
lean_object* v___x_2608_ = _args[4];
lean_object* v_useReducible_2609_ = _args[5];
lean_object* v___x_2610_ = _args[6];
lean_object* v___x_2611_ = _args[7];
lean_object* v___x_2612_ = _args[8];
lean_object* v_simprocs_2613_ = _args[9];
lean_object* v_discharge_x3f_2614_ = _args[10];
lean_object* v_snd_2615_ = _args[11];
lean_object* v___f_2616_ = _args[12];
lean_object* v___x_2617_ = _args[13];
lean_object* v___x_2618_ = _args[14];
lean_object* v___x_2619_ = _args[15];
lean_object* v___x_2620_ = _args[16];
lean_object* v___f_2621_ = _args[17];
lean_object* v_a_2622_ = _args[18];
lean_object* v___x_2623_ = _args[19];
lean_object* v___f_2624_ = _args[20];
lean_object* v___y_2625_ = _args[21];
lean_object* v___y_2626_ = _args[22];
lean_object* v___y_2627_ = _args[23];
lean_object* v___y_2628_ = _args[24];
lean_object* v___y_2629_ = _args[25];
lean_object* v___y_2630_ = _args[26];
lean_object* v___y_2631_ = _args[27];
lean_object* v___y_2632_ = _args[28];
lean_object* v___y_2633_ = _args[29];
_start:
{
uint8_t v___x_96754__boxed_2634_; uint8_t v___x_96756__boxed_2635_; uint8_t v_useReducible_boxed_2636_; uint8_t v___x_96757__boxed_2637_; lean_object* v_res_2638_; 
v___x_96754__boxed_2634_ = lean_unbox(v___x_2606_);
v___x_96756__boxed_2635_ = lean_unbox(v___x_2608_);
v_useReducible_boxed_2636_ = lean_unbox(v_useReducible_2609_);
v___x_96757__boxed_2637_ = lean_unbox(v___x_2610_);
v_res_2638_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5(v_usingArg_2604_, v_snd_2605_, v___x_96754__boxed_2634_, v___x_2607_, v___x_96756__boxed_2635_, v_useReducible_boxed_2636_, v___x_96757__boxed_2637_, v___x_2611_, v___x_2612_, v_simprocs_2613_, v_discharge_x3f_2614_, v_snd_2615_, v___f_2616_, v___x_2617_, v___x_2618_, v___x_2619_, v___x_2620_, v___f_2621_, v_a_2622_, v___x_2623_, v___f_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v___y_2630_);
lean_dec_ref(v___y_2629_);
lean_dec(v___y_2628_);
lean_dec_ref(v___y_2627_);
lean_dec(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec(v___x_2623_);
lean_dec(v___x_2611_);
return v_res_2638_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__0(void){
_start:
{
lean_object* v___x_2639_; 
v___x_2639_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2639_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__1(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2640_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__0, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__0_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__0);
v___x_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
return v___x_2641_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__2(void){
_start:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2642_ = lean_unsigned_to_nat(32u);
v___x_2643_ = lean_mk_empty_array_with_capacity(v___x_2642_);
v___x_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2643_);
return v___x_2644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6(lean_object* v___x_2645_, lean_object* v_tk_2646_, lean_object* v___x_2647_, lean_object* v___x_2648_, lean_object* v___x_2649_, lean_object* v_simprocs_2650_, uint8_t v___x_2651_, lean_object* v_usingArg_2652_, lean_object* v___x_2653_, uint8_t v___x_2654_, uint8_t v_useReducible_2655_, uint8_t v___x_2656_, lean_object* v___x_2657_, lean_object* v___f_2658_, lean_object* v___x_2659_, lean_object* v___x_2660_, lean_object* v___x_2661_, lean_object* v___f_2662_, lean_object* v_a_2663_, lean_object* v_usingTk_x3f_2664_, lean_object* v_discharge_x3f_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
lean_object* v___y_2676_; 
if (lean_obj_tag(v_usingTk_x3f_2664_) == 0)
{
lean_object* v___x_2790_; 
v___x_2790_ = lean_box(0);
v___y_2676_ = v___x_2790_;
goto v___jp_2675_;
}
else
{
lean_object* v_val_2791_; 
v_val_2791_ = lean_ctor_get(v_usingTk_x3f_2664_, 0);
lean_inc(v_val_2791_);
lean_dec_ref_known(v_usingTk_x3f_2664_, 1);
v___y_2676_ = v_val_2791_;
goto v___jp_2675_;
}
v___jp_2675_:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2677_ = lean_mk_empty_array_with_capacity(v___x_2645_);
v___x_2678_ = lean_array_push(v___x_2677_, v_tk_2646_);
v___x_2679_ = lean_array_push(v___x_2678_, v___y_2676_);
v___x_2680_ = lean_box(2);
lean_inc(v___x_2647_);
v___x_2681_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2680_);
lean_ctor_set(v___x_2681_, 1, v___x_2647_);
lean_ctor_set(v___x_2681_, 2, v___x_2679_);
v___x_2682_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v___x_2681_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___f_2684_; lean_object* v___x_2685_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
v___f_2684_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__2___boxed), 11, 1);
lean_closure_set(v___f_2684_, 0, v_a_2683_);
v___x_2685_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2667_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_object* v_a_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; size_t v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v_a_2686_ = lean_ctor_get(v___x_2685_, 0);
lean_inc(v_a_2686_);
lean_dec_ref_known(v___x_2685_, 1);
v___x_2687_ = lean_mk_empty_array_with_capacity(v___x_2648_);
v___x_2688_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__1, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__1_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__1);
lean_inc_n(v___x_2648_, 3);
v___x_2689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2688_);
lean_ctor_set(v___x_2689_, 1, v___x_2648_);
v___x_2690_ = lean_unsigned_to_nat(32u);
v___x_2691_ = lean_mk_empty_array_with_capacity(v___x_2690_);
v___x_2692_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__2, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__2_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___closed__2);
v___x_2693_ = ((size_t)5ULL);
v___x_2694_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2694_, 0, v___x_2692_);
lean_ctor_set(v___x_2694_, 1, v___x_2691_);
lean_ctor_set(v___x_2694_, 2, v___x_2648_);
lean_ctor_set(v___x_2694_, 3, v___x_2648_);
lean_ctor_set_usize(v___x_2694_, 4, v___x_2693_);
v___x_2695_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2688_);
lean_ctor_set(v___x_2695_, 1, v___x_2688_);
lean_ctor_set(v___x_2695_, 2, v___x_2688_);
lean_ctor_set(v___x_2695_, 3, v___x_2694_);
v___x_2696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2696_, 0, v___x_2689_);
lean_ctor_set(v___x_2696_, 1, v___x_2695_);
lean_inc_ref(v___x_2696_);
lean_inc(v_discharge_x3f_2665_);
lean_inc_ref(v_simprocs_2650_);
lean_inc_ref(v___x_2649_);
v___x_2697_ = l_Lean_Meta_simpGoal(v_a_2686_, v___x_2649_, v_simprocs_2650_, v_discharge_x3f_2665_, v___x_2651_, v___x_2687_, v___x_2696_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v_a_2698_; lean_object* v_fst_2699_; 
v_a_2698_ = lean_ctor_get(v___x_2697_, 0);
lean_inc(v_a_2698_);
lean_dec_ref_known(v___x_2697_, 1);
v_fst_2699_ = lean_ctor_get(v_a_2698_, 0);
if (lean_obj_tag(v_fst_2699_) == 1)
{
lean_object* v_val_2700_; lean_object* v_snd_2701_; lean_object* v_snd_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2725_; 
lean_dec_ref_known(v___x_2696_, 2);
v_val_2700_ = lean_ctor_get(v_fst_2699_, 0);
lean_inc(v_val_2700_);
v_snd_2701_ = lean_ctor_get(v_a_2698_, 1);
lean_inc(v_snd_2701_);
lean_dec(v_a_2698_);
v_snd_2702_ = lean_ctor_get(v_val_2700_, 1);
v_isSharedCheck_2725_ = !lean_is_exclusive(v_val_2700_);
if (v_isSharedCheck_2725_ == 0)
{
lean_object* v_unused_2726_; 
v_unused_2726_ = lean_ctor_get(v_val_2700_, 0);
lean_dec(v_unused_2726_);
v___x_2704_ = v_val_2700_;
v_isShared_2705_ = v_isSharedCheck_2725_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_snd_2702_);
lean_dec(v_val_2700_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2725_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___y_2710_; lean_object* v___x_2711_; lean_object* v___x_2713_; 
v___x_2706_ = lean_box(v___x_2651_);
v___x_2707_ = lean_box(v___x_2654_);
v___x_2708_ = lean_box(v_useReducible_2655_);
v___x_2709_ = lean_box(v___x_2656_);
lean_inc_n(v_snd_2702_, 2);
v___y_2710_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__5___boxed), 30, 21);
lean_closure_set(v___y_2710_, 0, v_usingArg_2652_);
lean_closure_set(v___y_2710_, 1, v_snd_2702_);
lean_closure_set(v___y_2710_, 2, v___x_2706_);
lean_closure_set(v___y_2710_, 3, v___x_2653_);
lean_closure_set(v___y_2710_, 4, v___x_2707_);
lean_closure_set(v___y_2710_, 5, v___x_2708_);
lean_closure_set(v___y_2710_, 6, v___x_2709_);
lean_closure_set(v___y_2710_, 7, v___x_2657_);
lean_closure_set(v___y_2710_, 8, v___x_2649_);
lean_closure_set(v___y_2710_, 9, v_simprocs_2650_);
lean_closure_set(v___y_2710_, 10, v_discharge_x3f_2665_);
lean_closure_set(v___y_2710_, 11, v_snd_2701_);
lean_closure_set(v___y_2710_, 12, v___f_2658_);
lean_closure_set(v___y_2710_, 13, v___x_2659_);
lean_closure_set(v___y_2710_, 14, v___x_2660_);
lean_closure_set(v___y_2710_, 15, v___x_2661_);
lean_closure_set(v___y_2710_, 16, v___x_2647_);
lean_closure_set(v___y_2710_, 17, v___f_2662_);
lean_closure_set(v___y_2710_, 18, v_a_2663_);
lean_closure_set(v___y_2710_, 19, v___x_2648_);
lean_closure_set(v___y_2710_, 20, v___f_2684_);
v___x_2711_ = lean_box(0);
if (v_isShared_2705_ == 0)
{
lean_ctor_set_tag(v___x_2704_, 1);
lean_ctor_set(v___x_2704_, 1, v___x_2711_);
lean_ctor_set(v___x_2704_, 0, v_snd_2702_);
v___x_2713_ = v___x_2704_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_snd_2702_);
lean_ctor_set(v_reuseFailAlloc_2724_, 1, v___x_2711_);
v___x_2713_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
lean_object* v___x_2714_; 
v___x_2714_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2713_, v___y_2667_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
if (lean_obj_tag(v___x_2714_) == 0)
{
lean_object* v___x_2715_; 
lean_dec_ref_known(v___x_2714_, 1);
v___x_2715_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__3___redArg(v_snd_2702_, v___y_2710_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
return v___x_2715_;
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
lean_dec_ref(v___y_2710_);
lean_dec(v_snd_2702_);
v_a_2716_ = lean_ctor_get(v___x_2714_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2714_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2714_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
}
}
else
{
lean_object* v___x_2727_; lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2765_; 
lean_dec(v_a_2698_);
lean_dec_ref(v___f_2684_);
lean_dec(v_discharge_x3f_2665_);
lean_dec_ref(v___x_2661_);
lean_dec_ref(v___x_2660_);
lean_dec_ref(v___x_2659_);
lean_dec_ref(v___f_2658_);
lean_dec(v___x_2657_);
lean_dec_ref(v___x_2653_);
lean_dec(v_usingArg_2652_);
lean_dec_ref(v_simprocs_2650_);
lean_dec_ref(v___x_2649_);
lean_dec(v___x_2648_);
lean_dec(v___x_2647_);
v___x_2727_ = l_Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2(v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2765_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2730_ = v___x_2727_;
v_isShared_2731_ = v_isSharedCheck_2765_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2727_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2765_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
uint8_t v___x_2732_; 
v___x_2732_ = l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(v_a_2728_);
lean_dec(v_a_2728_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2734_; 
lean_dec_ref(v_a_2663_);
lean_dec_ref(v___f_2662_);
if (v_isShared_2731_ == 0)
{
lean_ctor_set(v___x_2730_, 0, v___x_2696_);
v___x_2734_ = v___x_2730_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2696_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
return v___x_2734_;
}
}
else
{
lean_object* v_ref_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
lean_del_object(v___x_2730_);
v_ref_2736_ = lean_ctor_get(v___y_2672_, 2);
v___x_2737_ = lean_box(0);
lean_inc(v___y_2673_);
lean_inc_ref(v___y_2672_);
lean_inc(v___y_2671_);
lean_inc_ref(v___y_2670_);
lean_inc(v___y_2669_);
lean_inc_ref(v___y_2668_);
lean_inc(v___y_2667_);
lean_inc_ref(v___y_2666_);
v___x_2738_ = lean_apply_10(v___f_2662_, v___x_2737_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, lean_box(0));
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v_a_2739_; lean_object* v___x_2740_; 
v_a_2739_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_a_2739_);
lean_dec_ref_known(v___x_2738_, 1);
lean_inc(v_ref_2736_);
v___x_2740_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa(v_a_2663_, v_ref_2736_, v_a_2739_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2747_; 
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2747_ == 0)
{
lean_object* v_unused_2748_; 
v_unused_2748_ = lean_ctor_get(v___x_2740_, 0);
lean_dec(v_unused_2748_);
v___x_2742_ = v___x_2740_;
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
else
{
lean_dec(v___x_2740_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2745_; 
if (v_isShared_2743_ == 0)
{
lean_ctor_set(v___x_2742_, 0, v___x_2696_);
v___x_2745_ = v___x_2742_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v___x_2696_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
}
else
{
lean_object* v_a_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2756_; 
lean_dec_ref_known(v___x_2696_, 2);
v_a_2749_ = lean_ctor_get(v___x_2740_, 0);
v_isSharedCheck_2756_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2756_ == 0)
{
v___x_2751_ = v___x_2740_;
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_a_2749_);
lean_dec(v___x_2740_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v___x_2754_; 
if (v_isShared_2752_ == 0)
{
v___x_2754_ = v___x_2751_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v_a_2749_);
v___x_2754_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
return v___x_2754_;
}
}
}
}
else
{
lean_object* v_a_2757_; lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2764_; 
lean_dec_ref_known(v___x_2696_, 2);
lean_dec_ref(v_a_2663_);
v_a_2757_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2764_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2759_ = v___x_2738_;
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
else
{
lean_inc(v_a_2757_);
lean_dec(v___x_2738_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v___x_2762_; 
if (v_isShared_2760_ == 0)
{
v___x_2762_ = v___x_2759_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_a_2757_);
v___x_2762_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
return v___x_2762_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2766_; lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2773_; 
lean_dec_ref_known(v___x_2696_, 2);
lean_dec_ref(v___f_2684_);
lean_dec(v_discharge_x3f_2665_);
lean_dec_ref(v_a_2663_);
lean_dec_ref(v___f_2662_);
lean_dec_ref(v___x_2661_);
lean_dec_ref(v___x_2660_);
lean_dec_ref(v___x_2659_);
lean_dec_ref(v___f_2658_);
lean_dec(v___x_2657_);
lean_dec_ref(v___x_2653_);
lean_dec(v_usingArg_2652_);
lean_dec_ref(v_simprocs_2650_);
lean_dec_ref(v___x_2649_);
lean_dec(v___x_2648_);
lean_dec(v___x_2647_);
v_a_2766_ = lean_ctor_get(v___x_2697_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2768_ = v___x_2697_;
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
else
{
lean_inc(v_a_2766_);
lean_dec(v___x_2697_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v___x_2771_; 
if (v_isShared_2769_ == 0)
{
v___x_2771_ = v___x_2768_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_a_2766_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_dec_ref(v___f_2684_);
lean_dec(v_discharge_x3f_2665_);
lean_dec_ref(v_a_2663_);
lean_dec_ref(v___f_2662_);
lean_dec_ref(v___x_2661_);
lean_dec_ref(v___x_2660_);
lean_dec_ref(v___x_2659_);
lean_dec_ref(v___f_2658_);
lean_dec(v___x_2657_);
lean_dec_ref(v___x_2653_);
lean_dec(v_usingArg_2652_);
lean_dec_ref(v_simprocs_2650_);
lean_dec_ref(v___x_2649_);
lean_dec(v___x_2648_);
lean_dec(v___x_2647_);
v_a_2774_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2685_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2685_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec(v_discharge_x3f_2665_);
lean_dec_ref(v_a_2663_);
lean_dec_ref(v___f_2662_);
lean_dec_ref(v___x_2661_);
lean_dec_ref(v___x_2660_);
lean_dec_ref(v___x_2659_);
lean_dec_ref(v___f_2658_);
lean_dec(v___x_2657_);
lean_dec_ref(v___x_2653_);
lean_dec(v_usingArg_2652_);
lean_dec_ref(v_simprocs_2650_);
lean_dec_ref(v___x_2649_);
lean_dec(v___x_2648_);
lean_dec(v___x_2647_);
v_a_2782_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2682_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2682_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___boxed(lean_object** _args){
lean_object* v___x_2792_ = _args[0];
lean_object* v_tk_2793_ = _args[1];
lean_object* v___x_2794_ = _args[2];
lean_object* v___x_2795_ = _args[3];
lean_object* v___x_2796_ = _args[4];
lean_object* v_simprocs_2797_ = _args[5];
lean_object* v___x_2798_ = _args[6];
lean_object* v_usingArg_2799_ = _args[7];
lean_object* v___x_2800_ = _args[8];
lean_object* v___x_2801_ = _args[9];
lean_object* v_useReducible_2802_ = _args[10];
lean_object* v___x_2803_ = _args[11];
lean_object* v___x_2804_ = _args[12];
lean_object* v___f_2805_ = _args[13];
lean_object* v___x_2806_ = _args[14];
lean_object* v___x_2807_ = _args[15];
lean_object* v___x_2808_ = _args[16];
lean_object* v___f_2809_ = _args[17];
lean_object* v_a_2810_ = _args[18];
lean_object* v_usingTk_x3f_2811_ = _args[19];
lean_object* v_discharge_x3f_2812_ = _args[20];
lean_object* v___y_2813_ = _args[21];
lean_object* v___y_2814_ = _args[22];
lean_object* v___y_2815_ = _args[23];
lean_object* v___y_2816_ = _args[24];
lean_object* v___y_2817_ = _args[25];
lean_object* v___y_2818_ = _args[26];
lean_object* v___y_2819_ = _args[27];
lean_object* v___y_2820_ = _args[28];
lean_object* v___y_2821_ = _args[29];
_start:
{
uint8_t v___x_97547__boxed_2822_; uint8_t v___x_97549__boxed_2823_; uint8_t v_useReducible_boxed_2824_; uint8_t v___x_97550__boxed_2825_; lean_object* v_res_2826_; 
v___x_97547__boxed_2822_ = lean_unbox(v___x_2798_);
v___x_97549__boxed_2823_ = lean_unbox(v___x_2801_);
v_useReducible_boxed_2824_ = lean_unbox(v_useReducible_2802_);
v___x_97550__boxed_2825_ = lean_unbox(v___x_2803_);
v_res_2826_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6(v___x_2792_, v_tk_2793_, v___x_2794_, v___x_2795_, v___x_2796_, v_simprocs_2797_, v___x_97547__boxed_2822_, v_usingArg_2799_, v___x_2800_, v___x_97549__boxed_2823_, v_useReducible_boxed_2824_, v___x_97550__boxed_2825_, v___x_2804_, v___f_2805_, v___x_2806_, v___x_2807_, v___x_2808_, v___f_2809_, v_a_2810_, v_usingTk_x3f_2811_, v_discharge_x3f_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
lean_dec(v___y_2820_);
lean_dec_ref(v___y_2819_);
lean_dec(v___y_2818_);
lean_dec_ref(v___y_2817_);
lean_dec(v___y_2816_);
lean_dec_ref(v___y_2815_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
lean_dec(v___x_2792_);
return v_res_2826_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__4(void){
_start:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2831_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__3));
v___x_2832_ = lean_unsigned_to_nat(38u);
v___x_2833_ = lean_unsigned_to_nat(159u);
v___x_2834_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__2));
v___x_2835_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__1));
v___x_2836_ = l_mkPanicMessageWithDecl(v___x_2835_, v___x_2834_, v___x_2833_, v___x_2832_, v___x_2831_);
return v___x_2836_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12(void){
_start:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v___x_2844_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__3));
v___x_2845_ = lean_unsigned_to_nat(15u);
v___x_2846_ = lean_unsigned_to_nat(160u);
v___x_2847_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__2));
v___x_2848_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__1));
v___x_2849_ = l_mkPanicMessageWithDecl(v___x_2848_, v___x_2847_, v___x_2846_, v___x_2845_, v___x_2844_);
return v___x_2849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7(lean_object* v_tk_2851_, lean_object* v___x_2852_, lean_object* v___x_2853_, lean_object* v___x_2854_, lean_object* v___x_2855_, uint8_t v___x_2856_, lean_object* v___x_2857_, lean_object* v___x_2858_, uint8_t v_useReducible_2859_, lean_object* v___f_2860_, lean_object* v___x_2861_, lean_object* v___x_2862_, lean_object* v___x_2863_, lean_object* v___x_2864_, lean_object* v___x_2865_, lean_object* v___x_2866_, lean_object* v_usingArg_2867_, lean_object* v___x_2868_, uint8_t v___x_2869_, lean_object* v___f_2870_, lean_object* v_usingTk_x3f_2871_, lean_object* v_squeeze_2872_, lean_object* v_unfold_2873_, lean_object* v_args_2874_, lean_object* v_only_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_){
_start:
{
lean_object* v___y_2887_; lean_object* v___y_2891_; lean_object* v_stx_2892_; lean_object* v___y_2893_; lean_object* v_ref_2894_; lean_object* v___y_2895_; lean_object* v___y_2914_; lean_object* v_stx_2915_; lean_object* v___y_2916_; lean_object* v___y_2917_; lean_object* v___y_2920_; lean_object* v___y_2921_; lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v___y_2924_; lean_object* v___y_2925_; lean_object* v___y_2926_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___x_2940_; 
v___x_2940_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_2878_, v___y_2880_, v___y_2882_, v___y_2884_);
if (lean_obj_tag(v___x_2940_) == 0)
{
lean_object* v_a_2941_; lean_object* v_ref_2942_; uint8_t v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___y_2951_; lean_object* v___y_2952_; lean_object* v___y_2953_; lean_object* v___y_2954_; lean_object* v___y_2955_; lean_object* v___y_2956_; lean_object* v___y_2957_; lean_object* v___y_2958_; lean_object* v___y_2959_; lean_object* v___y_2960_; lean_object* v___y_2961_; lean_object* v___y_2967_; lean_object* v___y_2968_; lean_object* v___y_2969_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v___y_2975_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3017_; lean_object* v___y_3018_; lean_object* v___y_3019_; lean_object* v___y_3020_; lean_object* v___y_3021_; lean_object* v___y_3022_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3053_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3056_; lean_object* v___y_3057_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3060_; lean_object* v___y_3061_; lean_object* v___y_3062_; lean_object* v___y_3063_; lean_object* v___y_3064_; lean_object* v___y_3065_; lean_object* v___y_3066_; lean_object* v___y_3082_; lean_object* v___y_3083_; lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v___y_3087_; lean_object* v___y_3088_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; lean_object* v___y_3092_; lean_object* v___y_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; lean_object* v___y_3105_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3109_; lean_object* v___y_3110_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3114_; lean_object* v___y_3115_; lean_object* v___y_3121_; lean_object* v___y_3122_; lean_object* v___y_3123_; lean_object* v___y_3124_; lean_object* v___y_3125_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v___y_3128_; lean_object* v___y_3129_; lean_object* v___y_3130_; lean_object* v___y_3131_; lean_object* v___y_3140_; lean_object* v___y_3141_; lean_object* v___y_3142_; lean_object* v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; lean_object* v___y_3147_; lean_object* v___y_3148_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v___y_3166_; lean_object* v___y_3167_; lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v___y_3174_; lean_object* v___y_3175_; lean_object* v___y_3176_; lean_object* v___y_3186_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v___y_3189_; lean_object* v___y_3190_; lean_object* v___y_3191_; lean_object* v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3194_; lean_object* v___y_3195_; lean_object* v___y_3196_; lean_object* v___y_3197_; lean_object* v___y_3198_; lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v___y_3208_; lean_object* v___y_3209_; lean_object* v___y_3210_; lean_object* v___y_3211_; lean_object* v___y_3212_; lean_object* v___y_3213_; lean_object* v___y_3214_; lean_object* v___y_3215_; lean_object* v___y_3216_; lean_object* v___y_3217_; lean_object* v___y_3218_; lean_object* v___y_3234_; lean_object* v___y_3235_; lean_object* v___y_3236_; lean_object* v___y_3237_; lean_object* v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v___y_3243_; lean_object* v___y_3244_; lean_object* v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3256_; lean_object* v___y_3257_; lean_object* v___y_3258_; lean_object* v___y_3259_; lean_object* v___y_3260_; lean_object* v___y_3261_; lean_object* v___y_3262_; uint8_t v___y_3263_; lean_object* v___y_3264_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3351_; lean_object* v___y_3352_; lean_object* v___y_3353_; lean_object* v___y_3354_; uint8_t v___y_3355_; lean_object* v___y_3356_; lean_object* v___y_3357_; lean_object* v_args_3358_; lean_object* v___y_3359_; lean_object* v___y_3360_; lean_object* v___y_3361_; lean_object* v___y_3362_; lean_object* v___y_3363_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3392_; lean_object* v___y_3393_; lean_object* v___y_3394_; lean_object* v___y_3395_; uint8_t v___y_3396_; lean_object* v___y_3397_; lean_object* v_only_3398_; lean_object* v___y_3399_; lean_object* v___y_3400_; lean_object* v___y_3401_; lean_object* v___y_3402_; lean_object* v___y_3403_; lean_object* v___y_3404_; lean_object* v___y_3405_; lean_object* v___y_3406_; lean_object* v___y_3426_; lean_object* v___y_3427_; uint8_t v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3486_; lean_object* v___y_3487_; uint8_t v___y_3488_; lean_object* v___y_3499_; lean_object* v___y_3500_; lean_object* v___y_3501_; uint8_t v___y_3502_; lean_object* v___y_3503_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3569_; 
v_a_2941_ = lean_ctor_get(v___x_2940_, 0);
lean_inc(v_a_2941_);
lean_dec_ref_known(v___x_2940_, 1);
v_ref_2942_ = lean_ctor_get(v___y_2883_, 2);
v___x_2943_ = 0;
v___x_2944_ = l_Lean_SourceInfo_fromRef(v_ref_2942_, v___x_2943_);
v___x_2945_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__0));
lean_inc_ref(v___x_2854_);
lean_inc_ref(v___x_2853_);
lean_inc_ref(v___x_2852_);
v___x_2946_ = l_Lean_Name_mkStr4(v___x_2852_, v___x_2853_, v___x_2854_, v___x_2945_);
lean_inc(v___x_2944_);
v___x_2947_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2944_);
lean_ctor_set(v___x_2947_, 1, v___x_2945_);
v___x_2948_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_2949_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
if (lean_obj_tag(v___y_2876_) == 0)
{
lean_object* v___x_3578_; 
v___x_3578_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_3569_ = v___x_3578_;
goto v___jp_3568_;
}
else
{
lean_object* v_val_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; 
v_val_3579_ = lean_ctor_get(v___y_2876_, 0);
lean_inc(v_val_3579_);
lean_dec_ref_known(v___y_2876_, 1);
v___x_3580_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___x_3581_ = lean_array_push(v___x_3580_, v_val_3579_);
v___y_3569_ = v___x_3581_;
goto v___jp_3568_;
}
v___jp_2950_:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2962_ = l_Array_append___redArg(v___x_2949_, v___y_2961_);
lean_dec_ref(v___y_2961_);
lean_inc_n(v___y_2956_, 2);
v___x_2963_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2963_, 0, v___y_2956_);
lean_ctor_set(v___x_2963_, 1, v___x_2948_);
lean_ctor_set(v___x_2963_, 2, v___x_2962_);
v___x_2964_ = l_Lean_Syntax_node5(v___y_2956_, v___x_2857_, v___y_2952_, v___y_2953_, v___y_2960_, v___y_2959_, v___x_2963_);
v___x_2965_ = l_Lean_Syntax_node2(v___y_2956_, v___y_2955_, v___y_2957_, v___x_2964_);
v___y_2914_ = v___y_2954_;
v_stx_2915_ = v___x_2965_;
v___y_2916_ = v___y_2951_;
v___y_2917_ = v___y_2958_;
goto v___jp_2913_;
}
v___jp_2966_:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2978_ = l_Array_append___redArg(v___x_2949_, v___y_2977_);
lean_dec_ref(v___y_2977_);
lean_inc(v___y_2972_);
v___x_2979_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2979_, 0, v___y_2972_);
lean_ctor_set(v___x_2979_, 1, v___x_2948_);
lean_ctor_set(v___x_2979_, 2, v___x_2978_);
if (lean_obj_tag(v___y_2976_) == 1)
{
lean_object* v_val_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
lean_dec(v___x_2855_);
v_val_2980_ = lean_ctor_get(v___y_2976_, 0);
lean_inc(v_val_2980_);
lean_dec_ref_known(v___y_2976_, 1);
v___x_2981_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__5));
lean_inc(v___y_2972_);
v___x_2982_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2982_, 0, v___y_2972_);
lean_ctor_set(v___x_2982_, 1, v___x_2981_);
v___x_2983_ = l_Array_mkArray2___redArg(v___x_2982_, v_val_2980_);
v___y_2951_ = v___y_2968_;
v___y_2952_ = v___y_2967_;
v___y_2953_ = v___y_2969_;
v___y_2954_ = v___y_2970_;
v___y_2955_ = v___y_2971_;
v___y_2956_ = v___y_2972_;
v___y_2957_ = v___y_2973_;
v___y_2958_ = v___y_2975_;
v___y_2959_ = v___x_2979_;
v___y_2960_ = v___y_2974_;
v___y_2961_ = v___x_2983_;
goto v___jp_2950_;
}
else
{
lean_object* v___x_2984_; 
lean_dec(v___y_2976_);
v___x_2984_ = lean_mk_empty_array_with_capacity(v___x_2855_);
lean_dec(v___x_2855_);
v___y_2951_ = v___y_2968_;
v___y_2952_ = v___y_2967_;
v___y_2953_ = v___y_2969_;
v___y_2954_ = v___y_2970_;
v___y_2955_ = v___y_2971_;
v___y_2956_ = v___y_2972_;
v___y_2957_ = v___y_2973_;
v___y_2958_ = v___y_2975_;
v___y_2959_ = v___x_2979_;
v___y_2960_ = v___y_2974_;
v___y_2961_ = v___x_2984_;
goto v___jp_2950_;
}
}
v___jp_2985_:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; 
v___x_2997_ = l_Array_append___redArg(v___x_2949_, v___y_2996_);
lean_dec_ref(v___y_2996_);
lean_inc(v___y_2992_);
v___x_2998_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2998_, 0, v___y_2992_);
lean_ctor_set(v___x_2998_, 1, v___x_2948_);
lean_ctor_set(v___x_2998_, 2, v___x_2997_);
if (lean_obj_tag(v___y_2991_) == 1)
{
lean_object* v_val_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; 
v_val_2999_ = lean_ctor_get(v___y_2991_, 0);
lean_inc(v_val_2999_);
lean_dec_ref_known(v___y_2991_, 1);
v___x_3000_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_3001_ = l_Lean_Name_mkStr4(v___x_2852_, v___x_2853_, v___x_2854_, v___x_3000_);
v___x_3002_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___y_2992_, 4);
v___x_3003_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3003_, 0, v___y_2992_);
lean_ctor_set(v___x_3003_, 1, v___x_3002_);
v___x_3004_ = l_Array_append___redArg(v___x_2949_, v_val_2999_);
lean_dec(v_val_2999_);
v___x_3005_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3005_, 0, v___y_2992_);
lean_ctor_set(v___x_3005_, 1, v___x_2948_);
lean_ctor_set(v___x_3005_, 2, v___x_3004_);
v___x_3006_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_3007_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3007_, 0, v___y_2992_);
lean_ctor_set(v___x_3007_, 1, v___x_3006_);
v___x_3008_ = l_Lean_Syntax_node3(v___y_2992_, v___x_3001_, v___x_3003_, v___x_3005_, v___x_3007_);
v___x_3009_ = l_Array_mkArray1___redArg(v___x_3008_);
v___y_2967_ = v___y_2987_;
v___y_2968_ = v___y_2986_;
v___y_2969_ = v___y_2988_;
v___y_2970_ = v___y_2989_;
v___y_2971_ = v___y_2990_;
v___y_2972_ = v___y_2992_;
v___y_2973_ = v___y_2993_;
v___y_2974_ = v___x_2998_;
v___y_2975_ = v___y_2994_;
v___y_2976_ = v___y_2995_;
v___y_2977_ = v___x_3009_;
goto v___jp_2966_;
}
else
{
lean_object* v___x_3010_; 
lean_dec(v___y_2991_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
v___x_3010_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_2967_ = v___y_2987_;
v___y_2968_ = v___y_2986_;
v___y_2969_ = v___y_2988_;
v___y_2970_ = v___y_2989_;
v___y_2971_ = v___y_2990_;
v___y_2972_ = v___y_2992_;
v___y_2973_ = v___y_2993_;
v___y_2974_ = v___x_2998_;
v___y_2975_ = v___y_2994_;
v___y_2976_ = v___y_2995_;
v___y_2977_ = v___x_3010_;
goto v___jp_2966_;
}
}
v___jp_3011_:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3023_ = l_Array_append___redArg(v___x_2949_, v___y_3022_);
lean_dec_ref(v___y_3022_);
lean_inc(v___y_3017_);
v___x_3024_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3024_, 0, v___y_3017_);
lean_ctor_set(v___x_3024_, 1, v___x_2948_);
lean_ctor_set(v___x_3024_, 2, v___x_3023_);
if (lean_obj_tag(v___y_3020_) == 1)
{
lean_object* v_val_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; 
v_val_3025_ = lean_ctor_get(v___y_3020_, 0);
lean_inc(v_val_3025_);
lean_dec_ref_known(v___y_3020_, 1);
v___x_3026_ = l_Lean_SourceInfo_fromRef(v_val_3025_, v___x_2856_);
lean_dec(v_val_3025_);
v___x_3027_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_3028_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3026_);
lean_ctor_set(v___x_3028_, 1, v___x_3027_);
v___x_3029_ = l_Array_mkArray1___redArg(v___x_3028_);
v___y_2986_ = v___y_3013_;
v___y_2987_ = v___y_3012_;
v___y_2988_ = v___x_3024_;
v___y_2989_ = v___y_3014_;
v___y_2990_ = v___y_3015_;
v___y_2991_ = v___y_3016_;
v___y_2992_ = v___y_3017_;
v___y_2993_ = v___y_3018_;
v___y_2994_ = v___y_3019_;
v___y_2995_ = v___y_3021_;
v___y_2996_ = v___x_3029_;
goto v___jp_2985_;
}
else
{
lean_object* v___x_3030_; 
lean_dec(v___y_3020_);
v___x_3030_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_2986_ = v___y_3013_;
v___y_2987_ = v___y_3012_;
v___y_2988_ = v___x_3024_;
v___y_2989_ = v___y_3014_;
v___y_2990_ = v___y_3015_;
v___y_2991_ = v___y_3016_;
v___y_2992_ = v___y_3017_;
v___y_2993_ = v___y_3018_;
v___y_2994_ = v___y_3019_;
v___y_2995_ = v___y_3021_;
v___y_2996_ = v___x_3030_;
goto v___jp_2985_;
}
}
v___jp_3031_:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; 
v___x_3046_ = l_Array_append___redArg(v___x_2949_, v___y_3045_);
lean_dec_ref(v___y_3045_);
lean_inc_n(v___y_3044_, 3);
v___x_3047_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3047_, 0, v___y_3044_);
lean_ctor_set(v___x_3047_, 1, v___x_2948_);
lean_ctor_set(v___x_3047_, 2, v___x_3046_);
v___x_3048_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__6));
v___x_3049_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3049_, 0, v___y_3044_);
lean_ctor_set(v___x_3049_, 1, v___x_3048_);
v___x_3050_ = l_Lean_Syntax_node6(v___y_3044_, v___y_3037_, v___y_3032_, v___y_3036_, v___y_3038_, v___x_3047_, v___x_3049_, v___y_3042_);
v___x_3051_ = l_Lean_Syntax_node4(v___y_3044_, v___y_3043_, v___y_3041_, v___y_3040_, v___y_3033_, v___x_3050_);
v___y_2914_ = v___y_3035_;
v_stx_2915_ = v___x_3051_;
v___y_2916_ = v___y_3034_;
v___y_2917_ = v___y_3039_;
goto v___jp_2913_;
}
v___jp_3052_:
{
lean_object* v___x_3067_; lean_object* v___x_3068_; 
v___x_3067_ = l_Array_append___redArg(v___x_2949_, v___y_3066_);
lean_dec_ref(v___y_3066_);
lean_inc(v___y_3065_);
v___x_3068_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3068_, 0, v___y_3065_);
lean_ctor_set(v___x_3068_, 1, v___x_2948_);
lean_ctor_set(v___x_3068_, 2, v___x_3067_);
if (lean_obj_tag(v___y_3061_) == 1)
{
lean_object* v_val_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
lean_dec(v___x_2855_);
v_val_3069_ = lean_ctor_get(v___y_3061_, 0);
lean_inc(v_val_3069_);
lean_dec_ref_known(v___y_3061_, 1);
v___x_3070_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_3071_ = l_Lean_Name_mkStr4(v___x_2852_, v___x_2853_, v___x_2854_, v___x_3070_);
v___x_3072_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___y_3065_, 4);
v___x_3073_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3073_, 0, v___y_3065_);
lean_ctor_set(v___x_3073_, 1, v___x_3072_);
v___x_3074_ = l_Array_append___redArg(v___x_2949_, v_val_3069_);
lean_dec(v_val_3069_);
v___x_3075_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3075_, 0, v___y_3065_);
lean_ctor_set(v___x_3075_, 1, v___x_2948_);
lean_ctor_set(v___x_3075_, 2, v___x_3074_);
v___x_3076_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_3077_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3077_, 0, v___y_3065_);
lean_ctor_set(v___x_3077_, 1, v___x_3076_);
v___x_3078_ = l_Lean_Syntax_node3(v___y_3065_, v___x_3071_, v___x_3073_, v___x_3075_, v___x_3077_);
v___x_3079_ = l_Array_mkArray1___redArg(v___x_3078_);
v___y_3032_ = v___y_3053_;
v___y_3033_ = v___y_3054_;
v___y_3034_ = v___y_3055_;
v___y_3035_ = v___y_3056_;
v___y_3036_ = v___y_3057_;
v___y_3037_ = v___y_3058_;
v___y_3038_ = v___x_3068_;
v___y_3039_ = v___y_3059_;
v___y_3040_ = v___y_3060_;
v___y_3041_ = v___y_3062_;
v___y_3042_ = v___y_3063_;
v___y_3043_ = v___y_3064_;
v___y_3044_ = v___y_3065_;
v___y_3045_ = v___x_3079_;
goto v___jp_3031_;
}
else
{
lean_object* v___x_3080_; 
lean_dec(v___y_3061_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
v___x_3080_ = lean_mk_empty_array_with_capacity(v___x_2855_);
lean_dec(v___x_2855_);
v___y_3032_ = v___y_3053_;
v___y_3033_ = v___y_3054_;
v___y_3034_ = v___y_3055_;
v___y_3035_ = v___y_3056_;
v___y_3036_ = v___y_3057_;
v___y_3037_ = v___y_3058_;
v___y_3038_ = v___x_3068_;
v___y_3039_ = v___y_3059_;
v___y_3040_ = v___y_3060_;
v___y_3041_ = v___y_3062_;
v___y_3042_ = v___y_3063_;
v___y_3043_ = v___y_3064_;
v___y_3044_ = v___y_3065_;
v___y_3045_ = v___x_3080_;
goto v___jp_3031_;
}
}
v___jp_3081_:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; 
v___x_3096_ = l_Array_append___redArg(v___x_2949_, v___y_3095_);
lean_dec_ref(v___y_3095_);
lean_inc(v___y_3094_);
v___x_3097_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3097_, 0, v___y_3094_);
lean_ctor_set(v___x_3097_, 1, v___x_2948_);
lean_ctor_set(v___x_3097_, 2, v___x_3096_);
if (lean_obj_tag(v___y_3093_) == 1)
{
lean_object* v_val_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v_val_3098_ = lean_ctor_get(v___y_3093_, 0);
lean_inc(v_val_3098_);
lean_dec_ref_known(v___y_3093_, 1);
v___x_3099_ = l_Lean_SourceInfo_fromRef(v_val_3098_, v___x_2856_);
lean_dec(v_val_3098_);
v___x_3100_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_3101_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3099_);
lean_ctor_set(v___x_3101_, 1, v___x_3100_);
v___x_3102_ = l_Array_mkArray1___redArg(v___x_3101_);
v___y_3053_ = v___y_3082_;
v___y_3054_ = v___y_3083_;
v___y_3055_ = v___y_3084_;
v___y_3056_ = v___y_3085_;
v___y_3057_ = v___x_3097_;
v___y_3058_ = v___y_3086_;
v___y_3059_ = v___y_3087_;
v___y_3060_ = v___y_3088_;
v___y_3061_ = v___y_3089_;
v___y_3062_ = v___y_3090_;
v___y_3063_ = v___y_3091_;
v___y_3064_ = v___y_3092_;
v___y_3065_ = v___y_3094_;
v___y_3066_ = v___x_3102_;
goto v___jp_3052_;
}
else
{
lean_object* v___x_3103_; 
lean_dec(v___y_3093_);
v___x_3103_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_3053_ = v___y_3082_;
v___y_3054_ = v___y_3083_;
v___y_3055_ = v___y_3084_;
v___y_3056_ = v___y_3085_;
v___y_3057_ = v___x_3097_;
v___y_3058_ = v___y_3086_;
v___y_3059_ = v___y_3087_;
v___y_3060_ = v___y_3088_;
v___y_3061_ = v___y_3089_;
v___y_3062_ = v___y_3090_;
v___y_3063_ = v___y_3091_;
v___y_3064_ = v___y_3092_;
v___y_3065_ = v___y_3094_;
v___y_3066_ = v___x_3103_;
goto v___jp_3052_;
}
}
v___jp_3104_:
{
lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3116_ = l_Array_append___redArg(v___x_2949_, v___y_3115_);
lean_dec_ref(v___y_3115_);
lean_inc_n(v___y_3113_, 2);
v___x_3117_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3117_, 0, v___y_3113_);
lean_ctor_set(v___x_3117_, 1, v___x_2948_);
lean_ctor_set(v___x_3117_, 2, v___x_3116_);
v___x_3118_ = l_Lean_Syntax_node5(v___y_3113_, v___x_2857_, v___y_3108_, v___y_3110_, v___y_3114_, v___y_3111_, v___x_3117_);
lean_inc(v___y_3105_);
v___x_3119_ = l_Lean_Syntax_node4(v___y_3113_, v___x_2858_, v___y_3107_, v___y_3105_, v___y_3105_, v___x_3118_);
v___y_2914_ = v___y_3109_;
v_stx_2915_ = v___x_3119_;
v___y_2916_ = v___y_3106_;
v___y_2917_ = v___y_3112_;
goto v___jp_2913_;
}
v___jp_3120_:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3132_ = l_Array_append___redArg(v___x_2949_, v___y_3131_);
lean_dec_ref(v___y_3131_);
lean_inc(v___y_3128_);
v___x_3133_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3133_, 0, v___y_3128_);
lean_ctor_set(v___x_3133_, 1, v___x_2948_);
lean_ctor_set(v___x_3133_, 2, v___x_3132_);
if (lean_obj_tag(v___y_3130_) == 1)
{
lean_object* v_val_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
lean_dec(v___x_2855_);
v_val_3134_ = lean_ctor_get(v___y_3130_, 0);
lean_inc(v_val_3134_);
lean_dec_ref_known(v___y_3130_, 1);
v___x_3135_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__5));
lean_inc(v___y_3128_);
v___x_3136_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3136_, 0, v___y_3128_);
lean_ctor_set(v___x_3136_, 1, v___x_3135_);
v___x_3137_ = l_Array_mkArray2___redArg(v___x_3136_, v_val_3134_);
v___y_3105_ = v___y_3121_;
v___y_3106_ = v___y_3124_;
v___y_3107_ = v___y_3123_;
v___y_3108_ = v___y_3122_;
v___y_3109_ = v___y_3126_;
v___y_3110_ = v___y_3125_;
v___y_3111_ = v___x_3133_;
v___y_3112_ = v___y_3127_;
v___y_3113_ = v___y_3128_;
v___y_3114_ = v___y_3129_;
v___y_3115_ = v___x_3137_;
goto v___jp_3104_;
}
else
{
lean_object* v___x_3138_; 
lean_dec(v___y_3130_);
v___x_3138_ = lean_mk_empty_array_with_capacity(v___x_2855_);
lean_dec(v___x_2855_);
v___y_3105_ = v___y_3121_;
v___y_3106_ = v___y_3124_;
v___y_3107_ = v___y_3123_;
v___y_3108_ = v___y_3122_;
v___y_3109_ = v___y_3126_;
v___y_3110_ = v___y_3125_;
v___y_3111_ = v___x_3133_;
v___y_3112_ = v___y_3127_;
v___y_3113_ = v___y_3128_;
v___y_3114_ = v___y_3129_;
v___y_3115_ = v___x_3138_;
goto v___jp_3104_;
}
}
v___jp_3139_:
{
lean_object* v___x_3151_; lean_object* v___x_3152_; 
v___x_3151_ = l_Array_append___redArg(v___x_2949_, v___y_3150_);
lean_dec_ref(v___y_3150_);
lean_inc(v___y_3148_);
v___x_3152_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3152_, 0, v___y_3148_);
lean_ctor_set(v___x_3152_, 1, v___x_2948_);
lean_ctor_set(v___x_3152_, 2, v___x_3151_);
if (lean_obj_tag(v___y_3146_) == 1)
{
lean_object* v_val_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v_val_3153_ = lean_ctor_get(v___y_3146_, 0);
lean_inc(v_val_3153_);
lean_dec_ref_known(v___y_3146_, 1);
v___x_3154_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_3155_ = l_Lean_Name_mkStr4(v___x_2852_, v___x_2853_, v___x_2854_, v___x_3154_);
v___x_3156_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___y_3148_, 4);
v___x_3157_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3157_, 0, v___y_3148_);
lean_ctor_set(v___x_3157_, 1, v___x_3156_);
v___x_3158_ = l_Array_append___redArg(v___x_2949_, v_val_3153_);
lean_dec(v_val_3153_);
v___x_3159_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3159_, 0, v___y_3148_);
lean_ctor_set(v___x_3159_, 1, v___x_2948_);
lean_ctor_set(v___x_3159_, 2, v___x_3158_);
v___x_3160_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_3161_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3161_, 0, v___y_3148_);
lean_ctor_set(v___x_3161_, 1, v___x_3160_);
v___x_3162_ = l_Lean_Syntax_node3(v___y_3148_, v___x_3155_, v___x_3157_, v___x_3159_, v___x_3161_);
v___x_3163_ = l_Array_mkArray1___redArg(v___x_3162_);
v___y_3121_ = v___y_3140_;
v___y_3122_ = v___y_3143_;
v___y_3123_ = v___y_3142_;
v___y_3124_ = v___y_3141_;
v___y_3125_ = v___y_3145_;
v___y_3126_ = v___y_3144_;
v___y_3127_ = v___y_3147_;
v___y_3128_ = v___y_3148_;
v___y_3129_ = v___x_3152_;
v___y_3130_ = v___y_3149_;
v___y_3131_ = v___x_3163_;
goto v___jp_3120_;
}
else
{
lean_object* v___x_3164_; 
lean_dec(v___y_3146_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
v___x_3164_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_3121_ = v___y_3140_;
v___y_3122_ = v___y_3143_;
v___y_3123_ = v___y_3142_;
v___y_3124_ = v___y_3141_;
v___y_3125_ = v___y_3145_;
v___y_3126_ = v___y_3144_;
v___y_3127_ = v___y_3147_;
v___y_3128_ = v___y_3148_;
v___y_3129_ = v___x_3152_;
v___y_3130_ = v___y_3149_;
v___y_3131_ = v___x_3164_;
goto v___jp_3120_;
}
}
v___jp_3165_:
{
lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3177_ = l_Array_append___redArg(v___x_2949_, v___y_3176_);
lean_dec_ref(v___y_3176_);
lean_inc(v___y_3173_);
v___x_3178_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3178_, 0, v___y_3173_);
lean_ctor_set(v___x_3178_, 1, v___x_2948_);
lean_ctor_set(v___x_3178_, 2, v___x_3177_);
if (lean_obj_tag(v___y_3174_) == 1)
{
lean_object* v_val_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v_val_3179_ = lean_ctor_get(v___y_3174_, 0);
lean_inc(v_val_3179_);
lean_dec_ref_known(v___y_3174_, 1);
v___x_3180_ = l_Lean_SourceInfo_fromRef(v_val_3179_, v___x_2856_);
lean_dec(v_val_3179_);
v___x_3181_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_3182_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3182_, 0, v___x_3180_);
lean_ctor_set(v___x_3182_, 1, v___x_3181_);
v___x_3183_ = l_Array_mkArray1___redArg(v___x_3182_);
v___y_3140_ = v___y_3166_;
v___y_3141_ = v___y_3169_;
v___y_3142_ = v___y_3168_;
v___y_3143_ = v___y_3167_;
v___y_3144_ = v___y_3170_;
v___y_3145_ = v___x_3178_;
v___y_3146_ = v___y_3171_;
v___y_3147_ = v___y_3172_;
v___y_3148_ = v___y_3173_;
v___y_3149_ = v___y_3175_;
v___y_3150_ = v___x_3183_;
goto v___jp_3139_;
}
else
{
lean_object* v___x_3184_; 
lean_dec(v___y_3174_);
v___x_3184_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_3140_ = v___y_3166_;
v___y_3141_ = v___y_3169_;
v___y_3142_ = v___y_3168_;
v___y_3143_ = v___y_3167_;
v___y_3144_ = v___y_3170_;
v___y_3145_ = v___x_3178_;
v___y_3146_ = v___y_3171_;
v___y_3147_ = v___y_3172_;
v___y_3148_ = v___y_3173_;
v___y_3149_ = v___y_3175_;
v___y_3150_ = v___x_3184_;
goto v___jp_3139_;
}
}
v___jp_3185_:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___x_3199_ = l_Array_append___redArg(v___x_2949_, v___y_3198_);
lean_dec_ref(v___y_3198_);
lean_inc_n(v___y_3196_, 3);
v___x_3200_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3200_, 0, v___y_3196_);
lean_ctor_set(v___x_3200_, 1, v___x_2948_);
lean_ctor_set(v___x_3200_, 2, v___x_3199_);
v___x_3201_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__6));
v___x_3202_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___y_3196_);
lean_ctor_set(v___x_3202_, 1, v___x_3201_);
v___x_3203_ = l_Lean_Syntax_node6(v___y_3196_, v___y_3197_, v___y_3186_, v___y_3188_, v___y_3193_, v___x_3200_, v___x_3202_, v___y_3195_);
lean_inc(v___y_3191_);
v___x_3204_ = l_Lean_Syntax_node4(v___y_3196_, v___y_3190_, v___y_3194_, v___y_3191_, v___y_3191_, v___x_3203_);
v___y_2914_ = v___y_3189_;
v_stx_2915_ = v___x_3204_;
v___y_2916_ = v___y_3187_;
v___y_2917_ = v___y_3192_;
goto v___jp_2913_;
}
v___jp_3205_:
{
lean_object* v___x_3219_; lean_object* v___x_3220_; 
v___x_3219_ = l_Array_append___redArg(v___x_2949_, v___y_3218_);
lean_dec_ref(v___y_3218_);
lean_inc(v___y_3215_);
v___x_3220_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3220_, 0, v___y_3215_);
lean_ctor_set(v___x_3220_, 1, v___x_2948_);
lean_ctor_set(v___x_3220_, 2, v___x_3219_);
if (lean_obj_tag(v___y_3216_) == 1)
{
lean_object* v_val_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; 
lean_dec(v___x_2855_);
v_val_3221_ = lean_ctor_get(v___y_3216_, 0);
lean_inc(v_val_3221_);
lean_dec_ref_known(v___y_3216_, 1);
v___x_3222_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__12));
v___x_3223_ = l_Lean_Name_mkStr4(v___x_2852_, v___x_2853_, v___x_2854_, v___x_3222_);
v___x_3224_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___y_3215_, 4);
v___x_3225_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3225_, 0, v___y_3215_);
lean_ctor_set(v___x_3225_, 1, v___x_3224_);
v___x_3226_ = l_Array_append___redArg(v___x_2949_, v_val_3221_);
lean_dec(v_val_3221_);
v___x_3227_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3227_, 0, v___y_3215_);
lean_ctor_set(v___x_3227_, 1, v___x_2948_);
lean_ctor_set(v___x_3227_, 2, v___x_3226_);
v___x_3228_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_3229_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3229_, 0, v___y_3215_);
lean_ctor_set(v___x_3229_, 1, v___x_3228_);
v___x_3230_ = l_Lean_Syntax_node3(v___y_3215_, v___x_3223_, v___x_3225_, v___x_3227_, v___x_3229_);
v___x_3231_ = l_Array_mkArray1___redArg(v___x_3230_);
v___y_3186_ = v___y_3206_;
v___y_3187_ = v___y_3207_;
v___y_3188_ = v___y_3208_;
v___y_3189_ = v___y_3209_;
v___y_3190_ = v___y_3210_;
v___y_3191_ = v___y_3211_;
v___y_3192_ = v___y_3212_;
v___y_3193_ = v___x_3220_;
v___y_3194_ = v___y_3213_;
v___y_3195_ = v___y_3214_;
v___y_3196_ = v___y_3215_;
v___y_3197_ = v___y_3217_;
v___y_3198_ = v___x_3231_;
goto v___jp_3185_;
}
else
{
lean_object* v___x_3232_; 
lean_dec(v___y_3216_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
v___x_3232_ = lean_mk_empty_array_with_capacity(v___x_2855_);
lean_dec(v___x_2855_);
v___y_3186_ = v___y_3206_;
v___y_3187_ = v___y_3207_;
v___y_3188_ = v___y_3208_;
v___y_3189_ = v___y_3209_;
v___y_3190_ = v___y_3210_;
v___y_3191_ = v___y_3211_;
v___y_3192_ = v___y_3212_;
v___y_3193_ = v___x_3220_;
v___y_3194_ = v___y_3213_;
v___y_3195_ = v___y_3214_;
v___y_3196_ = v___y_3215_;
v___y_3197_ = v___y_3217_;
v___y_3198_ = v___x_3232_;
goto v___jp_3185_;
}
}
v___jp_3233_:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; 
v___x_3247_ = l_Array_append___redArg(v___x_2949_, v___y_3246_);
lean_dec_ref(v___y_3246_);
lean_inc(v___y_3242_);
v___x_3248_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3248_, 0, v___y_3242_);
lean_ctor_set(v___x_3248_, 1, v___x_2948_);
lean_ctor_set(v___x_3248_, 2, v___x_3247_);
if (lean_obj_tag(v___y_3245_) == 1)
{
lean_object* v_val_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
v_val_3249_ = lean_ctor_get(v___y_3245_, 0);
lean_inc(v_val_3249_);
lean_dec_ref_known(v___y_3245_, 1);
v___x_3250_ = l_Lean_SourceInfo_fromRef(v_val_3249_, v___x_2856_);
lean_dec(v_val_3249_);
v___x_3251_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_3252_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3250_);
lean_ctor_set(v___x_3252_, 1, v___x_3251_);
v___x_3253_ = l_Array_mkArray1___redArg(v___x_3252_);
v___y_3206_ = v___y_3234_;
v___y_3207_ = v___y_3235_;
v___y_3208_ = v___x_3248_;
v___y_3209_ = v___y_3236_;
v___y_3210_ = v___y_3237_;
v___y_3211_ = v___y_3238_;
v___y_3212_ = v___y_3239_;
v___y_3213_ = v___y_3240_;
v___y_3214_ = v___y_3241_;
v___y_3215_ = v___y_3242_;
v___y_3216_ = v___y_3243_;
v___y_3217_ = v___y_3244_;
v___y_3218_ = v___x_3253_;
goto v___jp_3205_;
}
else
{
lean_object* v___x_3254_; 
lean_dec(v___y_3245_);
v___x_3254_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_3206_ = v___y_3234_;
v___y_3207_ = v___y_3235_;
v___y_3208_ = v___x_3248_;
v___y_3209_ = v___y_3236_;
v___y_3210_ = v___y_3237_;
v___y_3211_ = v___y_3238_;
v___y_3212_ = v___y_3239_;
v___y_3213_ = v___y_3240_;
v___y_3214_ = v___y_3241_;
v___y_3215_ = v___y_3242_;
v___y_3216_ = v___y_3243_;
v___y_3217_ = v___y_3244_;
v___y_3218_ = v___x_3254_;
goto v___jp_3205_;
}
}
v___jp_3255_:
{
if (v___y_3263_ == 0)
{
if (v_useReducible_2859_ == 0)
{
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
if (lean_obj_tag(v___y_3269_) == 0)
{
lean_dec(v___y_3270_);
lean_dec(v___y_3268_);
lean_dec(v___y_3265_);
lean_dec(v___y_3258_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
v___y_2920_ = v___y_3260_;
v___y_2921_ = v___y_3266_;
v___y_2922_ = v___y_3261_;
v___y_2923_ = v___y_3264_;
v___y_2924_ = v___y_3267_;
v___y_2925_ = v___y_3259_;
v___y_2926_ = v___y_3256_;
v___y_2927_ = v___y_3257_;
v___y_2928_ = v___y_3262_;
goto v___jp_2919_;
}
else
{
lean_object* v_val_3271_; lean_object* v___x_3272_; 
v_val_3271_ = lean_ctor_get(v___y_3269_, 0);
lean_inc(v_val_3271_);
lean_dec_ref_known(v___y_3269_, 1);
lean_inc(v___y_3262_);
lean_inc_ref(v___y_3257_);
v___x_3272_ = lean_apply_9(v___f_2860_, v___y_3266_, v___y_3261_, v___y_3264_, v___y_3267_, v___y_3259_, v___y_3256_, v___y_3257_, v___y_3262_, lean_box(0));
if (lean_obj_tag(v___x_3272_) == 0)
{
lean_object* v_a_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v_a_3273_ = lean_ctor_get(v___x_3272_, 0);
lean_inc_n(v_a_3273_, 3);
lean_dec_ref_known(v___x_3272_, 1);
v___x_3274_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__7));
lean_inc_ref_n(v___x_2854_, 2);
lean_inc_ref_n(v___x_2853_, 2);
lean_inc_ref_n(v___x_2852_, 2);
v___x_3275_ = l_Lean_Name_mkStr4(v___x_2852_, v___x_2853_, v___x_2854_, v___x_3274_);
v___x_3276_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3276_, 0, v_a_3273_);
lean_ctor_set(v___x_3276_, 1, v___x_2861_);
v___x_3277_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3277_, 0, v_a_3273_);
lean_ctor_set(v___x_3277_, 1, v___x_2948_);
lean_ctor_set(v___x_3277_, 2, v___x_2949_);
v___x_3278_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__8));
v___x_3279_ = l_Lean_Name_mkStr4(v___x_2852_, v___x_2853_, v___x_2854_, v___x_3278_);
if (lean_obj_tag(v___y_3270_) == 0)
{
lean_object* v___x_3280_; 
v___x_3280_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_3234_ = v___y_3258_;
v___y_3235_ = v___y_3257_;
v___y_3236_ = v___y_3260_;
v___y_3237_ = v___x_3275_;
v___y_3238_ = v___x_3277_;
v___y_3239_ = v___y_3262_;
v___y_3240_ = v___x_3276_;
v___y_3241_ = v_val_3271_;
v___y_3242_ = v_a_3273_;
v___y_3243_ = v___y_3265_;
v___y_3244_ = v___x_3279_;
v___y_3245_ = v___y_3268_;
v___y_3246_ = v___x_3280_;
goto v___jp_3233_;
}
else
{
lean_object* v_val_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; 
v_val_3281_ = lean_ctor_get(v___y_3270_, 0);
lean_inc(v_val_3281_);
lean_dec_ref_known(v___y_3270_, 1);
v___x_3282_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___x_3283_ = lean_array_push(v___x_3282_, v_val_3281_);
v___y_3234_ = v___y_3258_;
v___y_3235_ = v___y_3257_;
v___y_3236_ = v___y_3260_;
v___y_3237_ = v___x_3275_;
v___y_3238_ = v___x_3277_;
v___y_3239_ = v___y_3262_;
v___y_3240_ = v___x_3276_;
v___y_3241_ = v_val_3271_;
v___y_3242_ = v_a_3273_;
v___y_3243_ = v___y_3265_;
v___y_3244_ = v___x_3279_;
v___y_3245_ = v___y_3268_;
v___y_3246_ = v___x_3283_;
goto v___jp_3233_;
}
}
else
{
lean_object* v_a_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3291_; 
lean_dec(v_val_3271_);
lean_dec(v___y_3270_);
lean_dec(v___y_3268_);
lean_dec(v___y_3265_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3260_);
lean_dec(v___y_3258_);
lean_dec_ref(v___y_3257_);
lean_dec_ref(v___x_2861_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
lean_dec(v_tk_2851_);
v_a_3284_ = lean_ctor_get(v___x_3272_, 0);
v_isSharedCheck_3291_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3291_ == 0)
{
v___x_3286_ = v___x_3272_;
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_a_3284_);
lean_dec(v___x_3272_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3289_; 
if (v_isShared_3287_ == 0)
{
v___x_3289_ = v___x_3286_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_a_3284_);
v___x_3289_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
return v___x_3289_;
}
}
}
}
}
else
{
lean_object* v___x_3292_; 
lean_inc(v___y_3262_);
lean_inc_ref(v___y_3257_);
v___x_3292_ = lean_apply_9(v___f_2860_, v___y_3266_, v___y_3261_, v___y_3264_, v___y_3267_, v___y_3259_, v___y_3256_, v___y_3257_, v___y_3262_, lean_box(0));
if (lean_obj_tag(v___x_3292_) == 0)
{
lean_object* v_a_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
v_a_3293_ = lean_ctor_get(v___x_3292_, 0);
lean_inc_n(v_a_3293_, 3);
lean_dec_ref_known(v___x_3292_, 1);
v___x_3294_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3294_, 0, v_a_3293_);
lean_ctor_set(v___x_3294_, 1, v___x_2861_);
v___x_3295_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3295_, 0, v_a_3293_);
lean_ctor_set(v___x_3295_, 1, v___x_2948_);
lean_ctor_set(v___x_3295_, 2, v___x_2949_);
if (lean_obj_tag(v___y_3270_) == 0)
{
lean_object* v___x_3296_; 
v___x_3296_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_3166_ = v___x_3295_;
v___y_3167_ = v___y_3258_;
v___y_3168_ = v___x_3294_;
v___y_3169_ = v___y_3257_;
v___y_3170_ = v___y_3260_;
v___y_3171_ = v___y_3265_;
v___y_3172_ = v___y_3262_;
v___y_3173_ = v_a_3293_;
v___y_3174_ = v___y_3268_;
v___y_3175_ = v___y_3269_;
v___y_3176_ = v___x_3296_;
goto v___jp_3165_;
}
else
{
lean_object* v_val_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; 
v_val_3297_ = lean_ctor_get(v___y_3270_, 0);
lean_inc(v_val_3297_);
lean_dec_ref_known(v___y_3270_, 1);
v___x_3298_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___x_3299_ = lean_array_push(v___x_3298_, v_val_3297_);
v___y_3166_ = v___x_3295_;
v___y_3167_ = v___y_3258_;
v___y_3168_ = v___x_3294_;
v___y_3169_ = v___y_3257_;
v___y_3170_ = v___y_3260_;
v___y_3171_ = v___y_3265_;
v___y_3172_ = v___y_3262_;
v___y_3173_ = v_a_3293_;
v___y_3174_ = v___y_3268_;
v___y_3175_ = v___y_3269_;
v___y_3176_ = v___x_3299_;
goto v___jp_3165_;
}
}
else
{
lean_object* v_a_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3307_; 
lean_dec(v___y_3270_);
lean_dec(v___y_3269_);
lean_dec(v___y_3268_);
lean_dec(v___y_3265_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3260_);
lean_dec(v___y_3258_);
lean_dec_ref(v___y_3257_);
lean_dec_ref(v___x_2861_);
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
lean_dec(v_tk_2851_);
v_a_3300_ = lean_ctor_get(v___x_3292_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3292_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3302_ = v___x_3292_;
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_a_3300_);
lean_dec(v___x_3292_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3305_; 
if (v_isShared_3303_ == 0)
{
v___x_3305_ = v___x_3302_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_a_3300_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
}
}
}
else
{
lean_dec(v___x_2858_);
if (v_useReducible_2859_ == 0)
{
lean_dec(v___x_2857_);
if (lean_obj_tag(v___y_3269_) == 0)
{
lean_dec(v___y_3270_);
lean_dec(v___y_3268_);
lean_dec(v___y_3265_);
lean_dec(v___y_3258_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
v___y_2920_ = v___y_3260_;
v___y_2921_ = v___y_3266_;
v___y_2922_ = v___y_3261_;
v___y_2923_ = v___y_3264_;
v___y_2924_ = v___y_3267_;
v___y_2925_ = v___y_3259_;
v___y_2926_ = v___y_3256_;
v___y_2927_ = v___y_3257_;
v___y_2928_ = v___y_3262_;
goto v___jp_2919_;
}
else
{
lean_object* v_val_3308_; lean_object* v___x_3309_; 
v_val_3308_ = lean_ctor_get(v___y_3269_, 0);
lean_inc(v_val_3308_);
lean_dec_ref_known(v___y_3269_, 1);
lean_inc(v___y_3262_);
lean_inc_ref(v___y_3257_);
v___x_3309_ = lean_apply_9(v___f_2860_, v___y_3266_, v___y_3261_, v___y_3264_, v___y_3267_, v___y_3259_, v___y_3256_, v___y_3257_, v___y_3262_, lean_box(0));
if (lean_obj_tag(v___x_3309_) == 0)
{
lean_object* v_a_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v_a_3310_ = lean_ctor_get(v___x_3309_, 0);
lean_inc_n(v_a_3310_, 5);
lean_dec_ref_known(v___x_3309_, 1);
v___x_3311_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__7));
lean_inc_ref_n(v___x_2854_, 2);
lean_inc_ref_n(v___x_2853_, 2);
lean_inc_ref_n(v___x_2852_, 2);
v___x_3312_ = l_Lean_Name_mkStr4(v___x_2852_, v___x_2853_, v___x_2854_, v___x_3311_);
v___x_3313_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3313_, 0, v_a_3310_);
lean_ctor_set(v___x_3313_, 1, v___x_2861_);
v___x_3314_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3314_, 0, v_a_3310_);
lean_ctor_set(v___x_3314_, 1, v___x_2948_);
lean_ctor_set(v___x_3314_, 2, v___x_2949_);
v___x_3315_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__9));
v___x_3316_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3316_, 0, v_a_3310_);
lean_ctor_set(v___x_3316_, 1, v___x_3315_);
v___x_3317_ = l_Lean_Syntax_node1(v_a_3310_, v___x_2948_, v___x_3316_);
v___x_3318_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__8));
v___x_3319_ = l_Lean_Name_mkStr4(v___x_2852_, v___x_2853_, v___x_2854_, v___x_3318_);
if (lean_obj_tag(v___y_3270_) == 0)
{
lean_object* v___x_3320_; 
v___x_3320_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_3082_ = v___y_3258_;
v___y_3083_ = v___x_3317_;
v___y_3084_ = v___y_3257_;
v___y_3085_ = v___y_3260_;
v___y_3086_ = v___x_3319_;
v___y_3087_ = v___y_3262_;
v___y_3088_ = v___x_3314_;
v___y_3089_ = v___y_3265_;
v___y_3090_ = v___x_3313_;
v___y_3091_ = v_val_3308_;
v___y_3092_ = v___x_3312_;
v___y_3093_ = v___y_3268_;
v___y_3094_ = v_a_3310_;
v___y_3095_ = v___x_3320_;
goto v___jp_3081_;
}
else
{
lean_object* v_val_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
v_val_3321_ = lean_ctor_get(v___y_3270_, 0);
lean_inc(v_val_3321_);
lean_dec_ref_known(v___y_3270_, 1);
v___x_3322_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___x_3323_ = lean_array_push(v___x_3322_, v_val_3321_);
v___y_3082_ = v___y_3258_;
v___y_3083_ = v___x_3317_;
v___y_3084_ = v___y_3257_;
v___y_3085_ = v___y_3260_;
v___y_3086_ = v___x_3319_;
v___y_3087_ = v___y_3262_;
v___y_3088_ = v___x_3314_;
v___y_3089_ = v___y_3265_;
v___y_3090_ = v___x_3313_;
v___y_3091_ = v_val_3308_;
v___y_3092_ = v___x_3312_;
v___y_3093_ = v___y_3268_;
v___y_3094_ = v_a_3310_;
v___y_3095_ = v___x_3323_;
goto v___jp_3081_;
}
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3331_; 
lean_dec(v_val_3308_);
lean_dec(v___y_3270_);
lean_dec(v___y_3268_);
lean_dec(v___y_3265_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3260_);
lean_dec(v___y_3258_);
lean_dec_ref(v___y_3257_);
lean_dec_ref(v___x_2861_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
lean_dec(v_tk_2851_);
v_a_3324_ = lean_ctor_get(v___x_3309_, 0);
v_isSharedCheck_3331_ = !lean_is_exclusive(v___x_3309_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3326_ = v___x_3309_;
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3309_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3329_; 
if (v_isShared_3327_ == 0)
{
v___x_3329_ = v___x_3326_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_a_3324_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
}
}
}
else
{
lean_object* v___x_3332_; 
lean_dec_ref(v___x_2861_);
lean_inc(v___y_3262_);
lean_inc_ref(v___y_3257_);
v___x_3332_ = lean_apply_9(v___f_2860_, v___y_3266_, v___y_3261_, v___y_3264_, v___y_3267_, v___y_3259_, v___y_3256_, v___y_3257_, v___y_3262_, lean_box(0));
if (lean_obj_tag(v___x_3332_) == 0)
{
lean_object* v_a_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v_a_3333_ = lean_ctor_get(v___x_3332_, 0);
lean_inc_n(v_a_3333_, 2);
lean_dec_ref_known(v___x_3332_, 1);
v___x_3334_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__10));
lean_inc_ref(v___x_2854_);
lean_inc_ref(v___x_2853_);
lean_inc_ref(v___x_2852_);
v___x_3335_ = l_Lean_Name_mkStr4(v___x_2852_, v___x_2853_, v___x_2854_, v___x_3334_);
v___x_3336_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__11));
v___x_3337_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3337_, 0, v_a_3333_);
lean_ctor_set(v___x_3337_, 1, v___x_3336_);
if (lean_obj_tag(v___y_3270_) == 0)
{
lean_object* v___x_3338_; 
v___x_3338_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_3012_ = v___y_3258_;
v___y_3013_ = v___y_3257_;
v___y_3014_ = v___y_3260_;
v___y_3015_ = v___x_3335_;
v___y_3016_ = v___y_3265_;
v___y_3017_ = v_a_3333_;
v___y_3018_ = v___x_3337_;
v___y_3019_ = v___y_3262_;
v___y_3020_ = v___y_3268_;
v___y_3021_ = v___y_3269_;
v___y_3022_ = v___x_3338_;
goto v___jp_3011_;
}
else
{
lean_object* v_val_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; 
v_val_3339_ = lean_ctor_get(v___y_3270_, 0);
lean_inc(v_val_3339_);
lean_dec_ref_known(v___y_3270_, 1);
v___x_3340_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___x_3341_ = lean_array_push(v___x_3340_, v_val_3339_);
v___y_3012_ = v___y_3258_;
v___y_3013_ = v___y_3257_;
v___y_3014_ = v___y_3260_;
v___y_3015_ = v___x_3335_;
v___y_3016_ = v___y_3265_;
v___y_3017_ = v_a_3333_;
v___y_3018_ = v___x_3337_;
v___y_3019_ = v___y_3262_;
v___y_3020_ = v___y_3268_;
v___y_3021_ = v___y_3269_;
v___y_3022_ = v___x_3341_;
goto v___jp_3011_;
}
}
else
{
lean_object* v_a_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3349_; 
lean_dec(v___y_3270_);
lean_dec(v___y_3269_);
lean_dec(v___y_3268_);
lean_dec(v___y_3265_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3260_);
lean_dec(v___y_3258_);
lean_dec_ref(v___y_3257_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
lean_dec(v_tk_2851_);
v_a_3342_ = lean_ctor_get(v___x_3332_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___x_3332_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3344_ = v___x_3332_;
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_a_3342_);
lean_dec(v___x_3332_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3347_; 
if (v_isShared_3345_ == 0)
{
v___x_3347_ = v___x_3344_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_a_3342_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
}
}
}
}
v___jp_3350_:
{
lean_object* v___x_3367_; lean_object* v___x_3368_; uint8_t v___x_3369_; 
v___x_3367_ = lean_unsigned_to_nat(5u);
v___x_3368_ = l_Lean_Syntax_getArg(v___y_3353_, v___x_3367_);
lean_dec(v___y_3353_);
v___x_3369_ = l_Lean_Syntax_matchesNull(v___x_3368_, v___x_2855_);
if (v___x_3369_ == 0)
{
lean_object* v___x_3370_; lean_object* v___x_3371_; 
lean_dec(v_args_3358_);
lean_dec(v___y_3357_);
lean_dec(v___y_3356_);
lean_dec(v___y_3352_);
lean_dec(v___y_3351_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
v___x_3370_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12);
v___x_3371_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_3370_, v___y_3359_, v___y_3360_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_);
lean_dec(v___y_3364_);
lean_dec_ref(v___y_3363_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
lean_dec(v___y_3360_);
lean_dec_ref(v___y_3359_);
if (lean_obj_tag(v___x_3371_) == 0)
{
lean_object* v_a_3372_; 
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc(v_a_3372_);
lean_dec_ref_known(v___x_3371_, 1);
v___y_2914_ = v___y_3354_;
v_stx_2915_ = v_a_3372_;
v___y_2916_ = v___y_3365_;
v___y_2917_ = v___y_3366_;
goto v___jp_2913_;
}
else
{
lean_object* v_a_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3380_; 
lean_dec(v___y_3366_);
lean_dec_ref(v___y_3365_);
lean_dec_ref(v___y_3354_);
lean_dec(v_tk_2851_);
v_a_3373_ = lean_ctor_get(v___x_3371_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3371_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3375_ = v___x_3371_;
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_a_3373_);
lean_dec(v___x_3371_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v___x_3378_; 
if (v_isShared_3376_ == 0)
{
v___x_3378_ = v___x_3375_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v_a_3373_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
}
}
else
{
lean_object* v___x_3381_; 
v___x_3381_ = l_Lean_Syntax_getOptional_x3f(v___y_3352_);
lean_dec(v___y_3352_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v___x_3382_; 
v___x_3382_ = lean_box(0);
v___y_3256_ = v___y_3364_;
v___y_3257_ = v___y_3365_;
v___y_3258_ = v___y_3351_;
v___y_3259_ = v___y_3363_;
v___y_3260_ = v___y_3354_;
v___y_3261_ = v___y_3360_;
v___y_3262_ = v___y_3366_;
v___y_3263_ = v___y_3355_;
v___y_3264_ = v___y_3361_;
v___y_3265_ = v_args_3358_;
v___y_3266_ = v___y_3359_;
v___y_3267_ = v___y_3362_;
v___y_3268_ = v___y_3357_;
v___y_3269_ = v___y_3356_;
v___y_3270_ = v___x_3382_;
goto v___jp_3255_;
}
else
{
lean_object* v_val_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3390_; 
v_val_3383_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3390_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3390_ == 0)
{
v___x_3385_ = v___x_3381_;
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_val_3383_);
lean_dec(v___x_3381_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3388_; 
if (v_isShared_3386_ == 0)
{
v___x_3388_ = v___x_3385_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v_val_3383_);
v___x_3388_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
v___y_3256_ = v___y_3364_;
v___y_3257_ = v___y_3365_;
v___y_3258_ = v___y_3351_;
v___y_3259_ = v___y_3363_;
v___y_3260_ = v___y_3354_;
v___y_3261_ = v___y_3360_;
v___y_3262_ = v___y_3366_;
v___y_3263_ = v___y_3355_;
v___y_3264_ = v___y_3361_;
v___y_3265_ = v_args_3358_;
v___y_3266_ = v___y_3359_;
v___y_3267_ = v___y_3362_;
v___y_3268_ = v___y_3357_;
v___y_3269_ = v___y_3356_;
v___y_3270_ = v___x_3388_;
goto v___jp_3255_;
}
}
}
}
}
v___jp_3391_:
{
lean_object* v___x_3407_; uint8_t v___x_3408_; 
v___x_3407_ = l_Lean_Syntax_getArg(v___y_3395_, v___x_2862_);
v___x_3408_ = l_Lean_Syntax_isNone(v___x_3407_);
if (v___x_3408_ == 0)
{
uint8_t v___x_3409_; 
lean_inc(v___x_3407_);
v___x_3409_ = l_Lean_Syntax_matchesNull(v___x_3407_, v___x_2863_);
if (v___x_3409_ == 0)
{
lean_object* v___x_3410_; lean_object* v___x_3411_; 
lean_dec(v___x_3407_);
lean_dec(v_only_3398_);
lean_dec(v___y_3397_);
lean_dec(v___y_3395_);
lean_dec(v___y_3393_);
lean_dec(v___y_3392_);
lean_dec(v___x_2864_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
v___x_3410_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12);
v___x_3411_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_3410_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_);
lean_dec(v___y_3404_);
lean_dec_ref(v___y_3403_);
lean_dec(v___y_3402_);
lean_dec_ref(v___y_3401_);
lean_dec(v___y_3400_);
lean_dec_ref(v___y_3399_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v_a_3412_; 
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
lean_inc(v_a_3412_);
lean_dec_ref_known(v___x_3411_, 1);
v___y_2914_ = v___y_3394_;
v_stx_2915_ = v_a_3412_;
v___y_2916_ = v___y_3405_;
v___y_2917_ = v___y_3406_;
goto v___jp_2913_;
}
else
{
lean_object* v_a_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3420_; 
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
lean_dec_ref(v___y_3394_);
lean_dec(v_tk_2851_);
v_a_3413_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3420_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3420_ == 0)
{
v___x_3415_ = v___x_3411_;
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_a_3413_);
lean_dec(v___x_3411_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v___x_3418_; 
if (v_isShared_3416_ == 0)
{
v___x_3418_ = v___x_3415_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v_a_3413_);
v___x_3418_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
return v___x_3418_;
}
}
}
}
else
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3421_ = l_Lean_Syntax_getArg(v___x_3407_, v___x_2864_);
lean_dec(v___x_2864_);
lean_dec(v___x_3407_);
v___x_3422_ = l_Lean_Syntax_getArgs(v___x_3421_);
lean_dec(v___x_3421_);
v___x_3423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3422_);
v___y_3351_ = v___y_3392_;
v___y_3352_ = v___y_3393_;
v___y_3353_ = v___y_3395_;
v___y_3354_ = v___y_3394_;
v___y_3355_ = v___y_3396_;
v___y_3356_ = v___y_3397_;
v___y_3357_ = v_only_3398_;
v_args_3358_ = v___x_3423_;
v___y_3359_ = v___y_3399_;
v___y_3360_ = v___y_3400_;
v___y_3361_ = v___y_3401_;
v___y_3362_ = v___y_3402_;
v___y_3363_ = v___y_3403_;
v___y_3364_ = v___y_3404_;
v___y_3365_ = v___y_3405_;
v___y_3366_ = v___y_3406_;
goto v___jp_3350_;
}
}
else
{
lean_object* v___x_3424_; 
lean_dec(v___x_3407_);
lean_dec(v___x_2864_);
v___x_3424_ = lean_box(0);
v___y_3351_ = v___y_3392_;
v___y_3352_ = v___y_3393_;
v___y_3353_ = v___y_3395_;
v___y_3354_ = v___y_3394_;
v___y_3355_ = v___y_3396_;
v___y_3356_ = v___y_3397_;
v___y_3357_ = v_only_3398_;
v_args_3358_ = v___x_3424_;
v___y_3359_ = v___y_3399_;
v___y_3360_ = v___y_3400_;
v___y_3361_ = v___y_3401_;
v___y_3362_ = v___y_3402_;
v___y_3363_ = v___y_3403_;
v___y_3364_ = v___y_3404_;
v___y_3365_ = v___y_3405_;
v___y_3366_ = v___y_3406_;
goto v___jp_3350_;
}
}
v___jp_3425_:
{
lean_object* v_usedTheorems_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v_usedTheorems_3430_ = lean_ctor_get(v___y_3427_, 0);
v___x_3431_ = l_Lean_Syntax_unsetTrailing(v___y_3426_);
v___x_3432_ = l_Lean_Elab_Tactic_mkSimpOnly(v___x_3431_, v_usedTheorems_3430_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
if (lean_obj_tag(v___x_3432_) == 0)
{
lean_object* v_a_3433_; uint8_t v___x_3434_; 
v_a_3433_ = lean_ctor_get(v___x_3432_, 0);
lean_inc_n(v_a_3433_, 2);
lean_dec_ref_known(v___x_3432_, 1);
v___x_3434_ = l_Lean_Syntax_isOfKind(v_a_3433_, v___x_2946_);
lean_dec(v___x_2946_);
if (v___x_3434_ == 0)
{
lean_object* v___x_3435_; lean_object* v___x_3436_; 
lean_inc(v_ref_2942_);
lean_dec(v_a_3433_);
lean_dec(v___y_3429_);
lean_dec(v___x_2866_);
lean_dec(v___x_2864_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
v___x_3435_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12);
v___x_3436_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_3435_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
if (lean_obj_tag(v___x_3436_) == 0)
{
lean_object* v_a_3437_; 
v_a_3437_ = lean_ctor_get(v___x_3436_, 0);
lean_inc(v_a_3437_);
lean_dec_ref_known(v___x_3436_, 1);
v___y_2891_ = v___y_3427_;
v_stx_2892_ = v_a_3437_;
v___y_2893_ = v___y_2883_;
v_ref_2894_ = v_ref_2942_;
v___y_2895_ = v___y_2884_;
goto v___jp_2890_;
}
else
{
lean_object* v_a_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3445_; 
lean_dec_ref(v___y_3427_);
lean_dec(v_ref_2942_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v_tk_2851_);
v_a_3438_ = lean_ctor_get(v___x_3436_, 0);
v_isSharedCheck_3445_ = !lean_is_exclusive(v___x_3436_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3440_ = v___x_3436_;
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_a_3438_);
lean_dec(v___x_3436_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3443_; 
if (v_isShared_3441_ == 0)
{
v___x_3443_ = v___x_3440_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v_a_3438_);
v___x_3443_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
return v___x_3443_;
}
}
}
}
else
{
lean_object* v___x_3446_; uint8_t v___x_3447_; 
v___x_3446_ = l_Lean_Syntax_getArg(v_a_3433_, v___x_2864_);
lean_inc(v___x_3446_);
v___x_3447_ = l_Lean_Syntax_isOfKind(v___x_3446_, v___x_2865_);
if (v___x_3447_ == 0)
{
lean_object* v___x_3448_; lean_object* v___x_3449_; 
lean_inc(v_ref_2942_);
lean_dec(v___x_3446_);
lean_dec(v_a_3433_);
lean_dec(v___y_3429_);
lean_dec(v___x_2866_);
lean_dec(v___x_2864_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
v___x_3448_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12);
v___x_3449_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_3448_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
if (lean_obj_tag(v___x_3449_) == 0)
{
lean_object* v_a_3450_; 
v_a_3450_ = lean_ctor_get(v___x_3449_, 0);
lean_inc(v_a_3450_);
lean_dec_ref_known(v___x_3449_, 1);
v___y_2891_ = v___y_3427_;
v_stx_2892_ = v_a_3450_;
v___y_2893_ = v___y_2883_;
v_ref_2894_ = v_ref_2942_;
v___y_2895_ = v___y_2884_;
goto v___jp_2890_;
}
else
{
lean_object* v_a_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3458_; 
lean_dec_ref(v___y_3427_);
lean_dec(v_ref_2942_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v_tk_2851_);
v_a_3451_ = lean_ctor_get(v___x_3449_, 0);
v_isSharedCheck_3458_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3458_ == 0)
{
v___x_3453_ = v___x_3449_;
v_isShared_3454_ = v_isSharedCheck_3458_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_a_3451_);
lean_dec(v___x_3449_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3458_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v___x_3456_; 
if (v_isShared_3454_ == 0)
{
v___x_3456_ = v___x_3453_;
goto v_reusejp_3455_;
}
else
{
lean_object* v_reuseFailAlloc_3457_; 
v_reuseFailAlloc_3457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3457_, 0, v_a_3451_);
v___x_3456_ = v_reuseFailAlloc_3457_;
goto v_reusejp_3455_;
}
v_reusejp_3455_:
{
return v___x_3456_;
}
}
}
}
else
{
lean_object* v___x_3459_; lean_object* v___x_3460_; uint8_t v___x_3461_; 
v___x_3459_ = l_Lean_Syntax_getArg(v_a_3433_, v___x_2866_);
lean_dec(v___x_2866_);
v___x_3460_ = l_Lean_Syntax_getArg(v_a_3433_, v___x_2863_);
v___x_3461_ = l_Lean_Syntax_isNone(v___x_3460_);
if (v___x_3461_ == 0)
{
uint8_t v___x_3462_; 
lean_inc(v___x_3460_);
v___x_3462_ = l_Lean_Syntax_matchesNull(v___x_3460_, v___x_2864_);
if (v___x_3462_ == 0)
{
lean_object* v___x_3463_; lean_object* v___x_3464_; 
lean_inc(v_ref_2942_);
lean_dec(v___x_3460_);
lean_dec(v___x_3459_);
lean_dec(v___x_3446_);
lean_dec(v_a_3433_);
lean_dec(v___y_3429_);
lean_dec(v___x_2864_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
v___x_3463_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__12);
v___x_3464_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_3463_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; 
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_a_3465_);
lean_dec_ref_known(v___x_3464_, 1);
v___y_2891_ = v___y_3427_;
v_stx_2892_ = v_a_3465_;
v___y_2893_ = v___y_2883_;
v_ref_2894_ = v_ref_2942_;
v___y_2895_ = v___y_2884_;
goto v___jp_2890_;
}
else
{
lean_object* v_a_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3473_; 
lean_dec_ref(v___y_3427_);
lean_dec(v_ref_2942_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v_tk_2851_);
v_a_3466_ = lean_ctor_get(v___x_3464_, 0);
v_isSharedCheck_3473_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3473_ == 0)
{
v___x_3468_ = v___x_3464_;
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_a_3466_);
lean_dec(v___x_3464_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
lean_object* v___x_3471_; 
if (v_isShared_3469_ == 0)
{
v___x_3471_ = v___x_3468_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v_a_3466_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
return v___x_3471_;
}
}
}
}
else
{
lean_object* v___x_3474_; lean_object* v___x_3475_; 
v___x_3474_ = l_Lean_Syntax_getArg(v___x_3460_, v___x_2855_);
lean_dec(v___x_3460_);
v___x_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3474_);
v___y_3392_ = v___x_3446_;
v___y_3393_ = v___x_3459_;
v___y_3394_ = v___y_3427_;
v___y_3395_ = v_a_3433_;
v___y_3396_ = v___y_3428_;
v___y_3397_ = v___y_3429_;
v_only_3398_ = v___x_3475_;
v___y_3399_ = v___y_2877_;
v___y_3400_ = v___y_2878_;
v___y_3401_ = v___y_2879_;
v___y_3402_ = v___y_2880_;
v___y_3403_ = v___y_2881_;
v___y_3404_ = v___y_2882_;
v___y_3405_ = v___y_2883_;
v___y_3406_ = v___y_2884_;
goto v___jp_3391_;
}
}
else
{
lean_object* v___x_3476_; 
lean_dec(v___x_3460_);
v___x_3476_ = lean_box(0);
v___y_3392_ = v___x_3446_;
v___y_3393_ = v___x_3459_;
v___y_3394_ = v___y_3427_;
v___y_3395_ = v_a_3433_;
v___y_3396_ = v___y_3428_;
v___y_3397_ = v___y_3429_;
v_only_3398_ = v___x_3476_;
v___y_3399_ = v___y_2877_;
v___y_3400_ = v___y_2878_;
v___y_3401_ = v___y_2879_;
v___y_3402_ = v___y_2880_;
v___y_3403_ = v___y_2881_;
v___y_3404_ = v___y_2882_;
v___y_3405_ = v___y_2883_;
v___y_3406_ = v___y_2884_;
goto v___jp_3391_;
}
}
}
}
else
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3484_; 
lean_dec(v___y_3429_);
lean_dec_ref(v___y_3427_);
lean_dec(v___x_2946_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___x_2866_);
lean_dec(v___x_2864_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
lean_dec(v_tk_2851_);
v_a_3477_ = lean_ctor_get(v___x_3432_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3432_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3479_ = v___x_3432_;
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v___x_3432_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3482_; 
if (v_isShared_3480_ == 0)
{
v___x_3482_ = v___x_3479_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_a_3477_);
v___x_3482_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
return v___x_3482_;
}
}
}
}
v___jp_3485_:
{
if (lean_obj_tag(v_usingArg_2867_) == 0)
{
v___y_3426_ = v___y_3486_;
v___y_3427_ = v___y_3487_;
v___y_3428_ = v___y_3488_;
v___y_3429_ = v_usingArg_2867_;
goto v___jp_3425_;
}
else
{
lean_object* v_val_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3497_; 
v_val_3489_ = lean_ctor_get(v_usingArg_2867_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v_usingArg_2867_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3491_ = v_usingArg_2867_;
v_isShared_3492_ = v_isSharedCheck_3497_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_val_3489_);
lean_dec(v_usingArg_2867_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3497_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v___x_3493_; lean_object* v___x_3495_; 
v___x_3493_ = l_Lean_Syntax_unsetTrailing(v_val_3489_);
if (v_isShared_3492_ == 0)
{
lean_ctor_set(v___x_3491_, 0, v___x_3493_);
v___x_3495_ = v___x_3491_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v___x_3493_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
v___y_3426_ = v___y_3486_;
v___y_3427_ = v___y_3487_;
v___y_3428_ = v___y_3488_;
v___y_3429_ = v___x_3495_;
goto v___jp_3425_;
}
}
}
}
v___jp_3498_:
{
lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___f_3509_; lean_object* v___x_3510_; 
v___x_3504_ = l_Lean_Meta_Simp_Context_setFailIfUnchanged(v___y_3503_, v___x_2943_);
v___x_3505_ = lean_box(v___x_2856_);
v___x_3506_ = lean_box(v___x_2943_);
v___x_3507_ = lean_box(v_useReducible_2859_);
v___x_3508_ = lean_box(v___x_2869_);
lean_inc_ref(v___x_2854_);
lean_inc_ref(v___x_2853_);
lean_inc_ref(v___x_2852_);
lean_inc_ref(v___f_2860_);
lean_inc(v___x_2864_);
lean_inc_ref(v___x_2861_);
lean_inc(v_usingArg_2867_);
lean_inc(v___x_2855_);
lean_inc(v_tk_2851_);
lean_inc(v___x_2866_);
v___f_3509_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__6___boxed), 30, 20);
lean_closure_set(v___f_3509_, 0, v___x_2866_);
lean_closure_set(v___f_3509_, 1, v_tk_2851_);
lean_closure_set(v___f_3509_, 2, v___x_2948_);
lean_closure_set(v___f_3509_, 3, v___x_2855_);
lean_closure_set(v___f_3509_, 4, v___x_3504_);
lean_closure_set(v___f_3509_, 5, v___y_3499_);
lean_closure_set(v___f_3509_, 6, v___x_3505_);
lean_closure_set(v___f_3509_, 7, v_usingArg_2867_);
lean_closure_set(v___f_3509_, 8, v___x_2861_);
lean_closure_set(v___f_3509_, 9, v___x_3506_);
lean_closure_set(v___f_3509_, 10, v___x_3507_);
lean_closure_set(v___f_3509_, 11, v___x_3508_);
lean_closure_set(v___f_3509_, 12, v___x_2864_);
lean_closure_set(v___f_3509_, 13, v___f_2860_);
lean_closure_set(v___f_3509_, 14, v___x_2852_);
lean_closure_set(v___f_3509_, 15, v___x_2853_);
lean_closure_set(v___f_3509_, 16, v___x_2854_);
lean_closure_set(v___f_3509_, 17, v___f_2870_);
lean_closure_set(v___f_3509_, 18, v_a_2941_);
lean_closure_set(v___f_3509_, 19, v_usingTk_x3f_2871_);
v___x_3510_ = l_Lean_Elab_Tactic_Simp_DischargeWrapper_with___redArg(v___y_3501_, v___f_3509_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
lean_dec(v___y_3501_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; uint8_t v___x_3514_; 
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3511_);
lean_dec_ref_known(v___x_3510_, 1);
v___x_3512_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2883_);
v___x_3513_ = l_Lean_Elab_Tactic_tactic_simp_trace;
v___x_3514_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1_spec__3(v___x_3512_, v___x_3513_);
lean_dec_ref(v___x_3512_);
if (v___x_3514_ == 0)
{
if (lean_obj_tag(v_squeeze_2872_) == 0)
{
lean_dec(v___y_3500_);
lean_dec(v___x_2946_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v_usingArg_2867_);
lean_dec(v___x_2866_);
lean_dec(v___x_2864_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
lean_dec(v_tk_2851_);
v___y_2887_ = v_a_3511_;
goto v___jp_2886_;
}
else
{
v___y_3486_ = v___y_3500_;
v___y_3487_ = v_a_3511_;
v___y_3488_ = v___y_3502_;
goto v___jp_3485_;
}
}
else
{
v___y_3486_ = v___y_3500_;
v___y_3487_ = v_a_3511_;
v___y_3488_ = v___y_3502_;
goto v___jp_3485_;
}
}
else
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3522_; 
lean_dec(v___y_3500_);
lean_dec(v___x_2946_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v_usingArg_2867_);
lean_dec(v___x_2866_);
lean_dec(v___x_2864_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
lean_dec(v_tk_2851_);
v_a_3515_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3522_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3517_ = v___x_3510_;
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3510_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v___x_3520_; 
if (v_isShared_3518_ == 0)
{
v___x_3520_ = v___x_3517_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_a_3515_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
return v___x_3520_;
}
}
}
}
v___jp_3523_:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; uint8_t v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3527_ = l_Array_append___redArg(v___x_2949_, v___y_3526_);
lean_dec_ref(v___y_3526_);
lean_inc_n(v___x_2944_, 2);
v___x_3528_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3528_, 0, v___x_2944_);
lean_ctor_set(v___x_3528_, 1, v___x_2948_);
lean_ctor_set(v___x_3528_, 2, v___x_3527_);
v___x_3529_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3529_, 0, v___x_2944_);
lean_ctor_set(v___x_3529_, 1, v___x_2948_);
lean_ctor_set(v___x_3529_, 2, v___x_2949_);
lean_inc(v___x_2946_);
v___x_3530_ = l_Lean_Syntax_node6(v___x_2944_, v___x_2946_, v___x_2947_, v___x_2868_, v___y_3524_, v___y_3525_, v___x_3528_, v___x_3529_);
v___x_3531_ = 0;
v___x_3532_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__13));
v___x_3533_ = lean_box(v___x_2943_);
v___x_3534_ = lean_box(v___x_3531_);
v___x_3535_ = lean_box(v___x_2943_);
lean_inc(v___x_3530_);
v___x_3536_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_mkSimpContext___boxed), 14, 5);
lean_closure_set(v___x_3536_, 0, v___x_3530_);
lean_closure_set(v___x_3536_, 1, v___x_3533_);
lean_closure_set(v___x_3536_, 2, v___x_3534_);
lean_closure_set(v___x_3536_, 3, v___x_3535_);
lean_closure_set(v___x_3536_, 4, v___x_3532_);
v___x_3537_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___x_3536_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v_a_3538_; 
v_a_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_a_3538_);
lean_dec_ref_known(v___x_3537_, 1);
if (lean_obj_tag(v_unfold_2873_) == 0)
{
lean_object* v_ctx_3539_; lean_object* v_simprocs_3540_; lean_object* v_dischargeWrapper_3541_; 
v_ctx_3539_ = lean_ctor_get(v_a_3538_, 0);
lean_inc_ref(v_ctx_3539_);
v_simprocs_3540_ = lean_ctor_get(v_a_3538_, 1);
lean_inc_ref(v_simprocs_3540_);
v_dischargeWrapper_3541_ = lean_ctor_get(v_a_3538_, 2);
lean_inc(v_dischargeWrapper_3541_);
lean_dec(v_a_3538_);
v___y_3499_ = v_simprocs_3540_;
v___y_3500_ = v___x_3530_;
v___y_3501_ = v_dischargeWrapper_3541_;
v___y_3502_ = v___x_2943_;
v___y_3503_ = v_ctx_3539_;
goto v___jp_3498_;
}
else
{
lean_object* v_ctx_3542_; lean_object* v_simprocs_3543_; lean_object* v_dischargeWrapper_3544_; lean_object* v___x_3545_; 
v_ctx_3542_ = lean_ctor_get(v_a_3538_, 0);
lean_inc_ref(v_ctx_3542_);
v_simprocs_3543_ = lean_ctor_get(v_a_3538_, 1);
lean_inc_ref(v_simprocs_3543_);
v_dischargeWrapper_3544_ = lean_ctor_get(v_a_3538_, 2);
lean_inc(v_dischargeWrapper_3544_);
lean_dec(v_a_3538_);
v___x_3545_ = l_Lean_Meta_Simp_Context_setAutoUnfold(v_ctx_3542_);
v___y_3499_ = v_simprocs_3543_;
v___y_3500_ = v___x_3530_;
v___y_3501_ = v_dischargeWrapper_3544_;
v___y_3502_ = v___x_2869_;
v___y_3503_ = v___x_3545_;
goto v___jp_3498_;
}
}
else
{
lean_object* v_a_3546_; lean_object* v___x_3548_; uint8_t v_isShared_3549_; uint8_t v_isSharedCheck_3553_; 
lean_dec(v___x_3530_);
lean_dec(v___x_2946_);
lean_dec(v_a_2941_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v_usingTk_x3f_2871_);
lean_dec_ref(v___f_2870_);
lean_dec(v_usingArg_2867_);
lean_dec(v___x_2866_);
lean_dec(v___x_2864_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
lean_dec(v_tk_2851_);
v_a_3546_ = lean_ctor_get(v___x_3537_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3537_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3548_ = v___x_3537_;
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
else
{
lean_inc(v_a_3546_);
lean_dec(v___x_3537_);
v___x_3548_ = lean_box(0);
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
v_resetjp_3547_:
{
lean_object* v___x_3551_; 
if (v_isShared_3549_ == 0)
{
v___x_3551_ = v___x_3548_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_a_3546_);
v___x_3551_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
return v___x_3551_;
}
}
}
}
v___jp_3554_:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; 
v___x_3557_ = l_Array_append___redArg(v___x_2949_, v___y_3556_);
lean_dec_ref(v___y_3556_);
lean_inc(v___x_2944_);
v___x_3558_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3558_, 0, v___x_2944_);
lean_ctor_set(v___x_3558_, 1, v___x_2948_);
lean_ctor_set(v___x_3558_, 2, v___x_3557_);
if (lean_obj_tag(v_args_2874_) == 1)
{
lean_object* v_val_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
v_val_3559_ = lean_ctor_get(v_args_2874_, 0);
v___x_3560_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___x_2944_, 3);
v___x_3561_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3561_, 0, v___x_2944_);
lean_ctor_set(v___x_3561_, 1, v___x_3560_);
v___x_3562_ = l_Array_append___redArg(v___x_2949_, v_val_3559_);
v___x_3563_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3563_, 0, v___x_2944_);
lean_ctor_set(v___x_3563_, 1, v___x_2948_);
lean_ctor_set(v___x_3563_, 2, v___x_3562_);
v___x_3564_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_3565_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3565_, 0, v___x_2944_);
lean_ctor_set(v___x_3565_, 1, v___x_3564_);
v___x_3566_ = l_Array_mkArray3___redArg(v___x_3561_, v___x_3563_, v___x_3565_);
v___y_3524_ = v___y_3555_;
v___y_3525_ = v___x_3558_;
v___y_3526_ = v___x_3566_;
goto v___jp_3523_;
}
else
{
lean_object* v___x_3567_; 
v___x_3567_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_3524_ = v___y_3555_;
v___y_3525_ = v___x_3558_;
v___y_3526_ = v___x_3567_;
goto v___jp_3523_;
}
}
v___jp_3568_:
{
lean_object* v___x_3570_; lean_object* v___x_3571_; 
v___x_3570_ = l_Array_append___redArg(v___x_2949_, v___y_3569_);
lean_dec_ref(v___y_3569_);
lean_inc(v___x_2944_);
v___x_3571_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3571_, 0, v___x_2944_);
lean_ctor_set(v___x_3571_, 1, v___x_2948_);
lean_ctor_set(v___x_3571_, 2, v___x_3570_);
if (lean_obj_tag(v_only_2875_) == 1)
{
lean_object* v_val_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; 
v_val_3572_ = lean_ctor_get(v_only_2875_, 0);
v___x_3573_ = l_Lean_SourceInfo_fromRef(v_val_3572_, v___x_2856_);
v___x_3574_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_3575_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3573_);
lean_ctor_set(v___x_3575_, 1, v___x_3574_);
v___x_3576_ = l_Array_mkArray1___redArg(v___x_3575_);
v___y_3555_ = v___x_3571_;
v___y_3556_ = v___x_3576_;
goto v___jp_3554_;
}
else
{
lean_object* v___x_3577_; 
v___x_3577_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___y_3555_ = v___x_3571_;
v___y_3556_ = v___x_3577_;
goto v___jp_3554_;
}
}
}
else
{
lean_object* v_a_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3589_; 
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v_usingTk_x3f_2871_);
lean_dec_ref(v___f_2870_);
lean_dec(v___x_2868_);
lean_dec(v_usingArg_2867_);
lean_dec(v___x_2866_);
lean_dec(v___x_2864_);
lean_dec_ref(v___x_2861_);
lean_dec_ref(v___f_2860_);
lean_dec(v___x_2858_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v___x_2854_);
lean_dec_ref(v___x_2853_);
lean_dec_ref(v___x_2852_);
lean_dec(v_tk_2851_);
v_a_3582_ = lean_ctor_get(v___x_2940_, 0);
v_isSharedCheck_3589_ = !lean_is_exclusive(v___x_2940_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3584_ = v___x_2940_;
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_a_3582_);
lean_dec(v___x_2940_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3587_; 
if (v_isShared_3585_ == 0)
{
v___x_3587_ = v___x_3584_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v_a_3582_);
v___x_3587_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
return v___x_3587_;
}
}
}
v___jp_2886_:
{
lean_object* v_diag_2888_; lean_object* v___x_2889_; 
v_diag_2888_ = lean_ctor_get(v___y_2887_, 1);
lean_inc_ref(v_diag_2888_);
lean_dec_ref(v___y_2887_);
v___x_2889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2889_, 0, v_diag_2888_);
return v___x_2889_;
}
v___jp_2890_:
{
lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; uint8_t v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2896_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa___closed__3));
v___x_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2896_);
lean_ctor_set(v___x_2897_, 1, v_stx_2892_);
v___x_2898_ = lean_box(0);
v___x_2899_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2897_);
lean_ctor_set(v___x_2899_, 1, v___x_2898_);
lean_ctor_set(v___x_2899_, 2, v___x_2898_);
lean_ctor_set(v___x_2899_, 3, v___x_2898_);
lean_ctor_set(v___x_2899_, 4, v___x_2898_);
lean_ctor_set(v___x_2899_, 5, v___x_2898_);
v___x_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2900_, 0, v_ref_2894_);
v___x_2901_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__0));
v___x_2902_ = 4;
v___x_2903_ = l_Lean_MessageData_nil;
v___x_2904_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_tk_2851_, v___x_2899_, v___x_2900_, v___x_2901_, v___x_2898_, v___x_2902_, v___x_2903_, v___y_2893_, v___y_2895_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2893_);
if (lean_obj_tag(v___x_2904_) == 0)
{
lean_dec_ref_known(v___x_2904_, 1);
v___y_2887_ = v___y_2891_;
goto v___jp_2886_;
}
else
{
lean_object* v_a_2905_; lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2912_; 
lean_dec_ref(v___y_2891_);
v_a_2905_ = lean_ctor_get(v___x_2904_, 0);
v_isSharedCheck_2912_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_2912_ == 0)
{
v___x_2907_ = v___x_2904_;
v_isShared_2908_ = v_isSharedCheck_2912_;
goto v_resetjp_2906_;
}
else
{
lean_inc(v_a_2905_);
lean_dec(v___x_2904_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2912_;
goto v_resetjp_2906_;
}
v_resetjp_2906_:
{
lean_object* v___x_2910_; 
if (v_isShared_2908_ == 0)
{
v___x_2910_ = v___x_2907_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v_a_2905_);
v___x_2910_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
return v___x_2910_;
}
}
}
}
v___jp_2913_:
{
lean_object* v_ref_2918_; 
v_ref_2918_ = lean_ctor_get(v___y_2916_, 2);
lean_inc(v_ref_2918_);
v___y_2891_ = v___y_2914_;
v_stx_2892_ = v_stx_2915_;
v___y_2893_ = v___y_2916_;
v_ref_2894_ = v_ref_2918_;
v___y_2895_ = v___y_2917_;
goto v___jp_2890_;
}
v___jp_2919_:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; 
v___x_2929_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__4, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__4_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__4);
v___x_2930_ = l_panic___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__8(v___x_2929_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_);
lean_dec(v___y_2926_);
lean_dec_ref(v___y_2925_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
if (lean_obj_tag(v___x_2930_) == 0)
{
lean_object* v_a_2931_; 
v_a_2931_ = lean_ctor_get(v___x_2930_, 0);
lean_inc(v_a_2931_);
lean_dec_ref_known(v___x_2930_, 1);
v___y_2914_ = v___y_2920_;
v_stx_2915_ = v_a_2931_;
v___y_2916_ = v___y_2927_;
v___y_2917_ = v___y_2928_;
goto v___jp_2913_;
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_dec(v___y_2928_);
lean_dec_ref(v___y_2927_);
lean_dec_ref(v___y_2920_);
lean_dec(v_tk_2851_);
v_a_2932_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2930_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2930_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___boxed(lean_object** _args){
lean_object* v_tk_3590_ = _args[0];
lean_object* v___x_3591_ = _args[1];
lean_object* v___x_3592_ = _args[2];
lean_object* v___x_3593_ = _args[3];
lean_object* v___x_3594_ = _args[4];
lean_object* v___x_3595_ = _args[5];
lean_object* v___x_3596_ = _args[6];
lean_object* v___x_3597_ = _args[7];
lean_object* v_useReducible_3598_ = _args[8];
lean_object* v___f_3599_ = _args[9];
lean_object* v___x_3600_ = _args[10];
lean_object* v___x_3601_ = _args[11];
lean_object* v___x_3602_ = _args[12];
lean_object* v___x_3603_ = _args[13];
lean_object* v___x_3604_ = _args[14];
lean_object* v___x_3605_ = _args[15];
lean_object* v_usingArg_3606_ = _args[16];
lean_object* v___x_3607_ = _args[17];
lean_object* v___x_3608_ = _args[18];
lean_object* v___f_3609_ = _args[19];
lean_object* v_usingTk_x3f_3610_ = _args[20];
lean_object* v_squeeze_3611_ = _args[21];
lean_object* v_unfold_3612_ = _args[22];
lean_object* v_args_3613_ = _args[23];
lean_object* v_only_3614_ = _args[24];
lean_object* v___y_3615_ = _args[25];
lean_object* v___y_3616_ = _args[26];
lean_object* v___y_3617_ = _args[27];
lean_object* v___y_3618_ = _args[28];
lean_object* v___y_3619_ = _args[29];
lean_object* v___y_3620_ = _args[30];
lean_object* v___y_3621_ = _args[31];
lean_object* v___y_3622_ = _args[32];
lean_object* v___y_3623_ = _args[33];
lean_object* v___y_3624_ = _args[34];
_start:
{
uint8_t v___x_97982__boxed_3625_; uint8_t v_useReducible_boxed_3626_; uint8_t v___x_97993__boxed_3627_; lean_object* v_res_3628_; 
v___x_97982__boxed_3625_ = lean_unbox(v___x_3595_);
v_useReducible_boxed_3626_ = lean_unbox(v_useReducible_3598_);
v___x_97993__boxed_3627_ = lean_unbox(v___x_3608_);
v_res_3628_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7(v_tk_3590_, v___x_3591_, v___x_3592_, v___x_3593_, v___x_3594_, v___x_97982__boxed_3625_, v___x_3596_, v___x_3597_, v_useReducible_boxed_3626_, v___f_3599_, v___x_3600_, v___x_3601_, v___x_3602_, v___x_3603_, v___x_3604_, v___x_3605_, v_usingArg_3606_, v___x_3607_, v___x_97993__boxed_3627_, v___f_3609_, v_usingTk_x3f_3610_, v_squeeze_3611_, v_unfold_3612_, v_args_3613_, v_only_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
lean_dec(v_only_3614_);
lean_dec(v_args_3613_);
lean_dec(v_unfold_3612_);
lean_dec(v_squeeze_3611_);
lean_dec(v___x_3604_);
lean_dec(v___x_3602_);
lean_dec(v___x_3601_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore(uint8_t v_useReducible_3654_, lean_object* v_stx_3655_, lean_object* v_a_3656_, lean_object* v_a_3657_, lean_object* v_a_3658_, lean_object* v_a_3659_, lean_object* v_a_3660_, lean_object* v_a_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_){
_start:
{
lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; uint8_t v___x_3670_; 
v___x_3665_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn___closed__5_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_));
v___x_3666_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__0));
v___x_3667_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_logUnnecessarySimpa_spec__0_spec__0_spec__1___redArg___lam__0___closed__1));
v___x_3668_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1));
v___x_3669_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2));
lean_inc(v_stx_3655_);
v___x_3670_ = l_Lean_Syntax_isOfKind(v_stx_3655_, v___x_3669_);
if (v___x_3670_ == 0)
{
lean_object* v___x_3671_; 
lean_dec(v_stx_3655_);
v___x_3671_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3671_;
}
else
{
lean_object* v___f_3672_; lean_object* v___x_3673_; lean_object* v_tk_3674_; lean_object* v___x_3675_; lean_object* v___y_3677_; uint8_t v___y_3678_; lean_object* v___y_3679_; lean_object* v___y_3680_; lean_object* v___y_3681_; lean_object* v___y_3682_; lean_object* v___y_3683_; lean_object* v___y_3684_; lean_object* v___y_3685_; lean_object* v___y_3686_; lean_object* v___y_3687_; lean_object* v___y_3688_; lean_object* v___y_3689_; lean_object* v___y_3690_; lean_object* v___y_3691_; lean_object* v___y_3692_; lean_object* v___y_3693_; lean_object* v___y_3694_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3708_; uint8_t v___y_3709_; lean_object* v___y_3710_; lean_object* v___y_3711_; lean_object* v___y_3712_; lean_object* v___y_3713_; lean_object* v___y_3714_; lean_object* v___y_3715_; lean_object* v___y_3716_; lean_object* v___y_3717_; lean_object* v___y_3718_; lean_object* v___y_3719_; lean_object* v___y_3720_; lean_object* v___y_3721_; lean_object* v___y_3722_; lean_object* v___y_3723_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___y_3727_; lean_object* v_usingTk_x3f_3728_; lean_object* v_usingArg_3729_; lean_object* v___y_3741_; uint8_t v___y_3742_; lean_object* v___y_3743_; lean_object* v___y_3744_; lean_object* v___y_3745_; lean_object* v___y_3746_; lean_object* v___y_3747_; lean_object* v___y_3748_; lean_object* v___y_3749_; lean_object* v___y_3750_; lean_object* v___y_3751_; lean_object* v___y_3752_; lean_object* v___y_3753_; lean_object* v___y_3754_; lean_object* v___y_3755_; lean_object* v___y_3756_; lean_object* v___y_3757_; lean_object* v___y_3758_; lean_object* v___y_3759_; lean_object* v___y_3760_; lean_object* v_args_3761_; uint8_t v___y_3773_; lean_object* v___y_3774_; lean_object* v___y_3775_; lean_object* v___y_3776_; lean_object* v___y_3777_; lean_object* v___y_3778_; lean_object* v___y_3779_; lean_object* v___y_3780_; lean_object* v___y_3781_; lean_object* v___y_3782_; lean_object* v___y_3783_; lean_object* v___y_3784_; lean_object* v_only_3785_; lean_object* v___y_3786_; lean_object* v___y_3787_; lean_object* v___y_3788_; lean_object* v___y_3789_; lean_object* v___y_3790_; lean_object* v___y_3791_; lean_object* v___y_3792_; lean_object* v___y_3793_; lean_object* v___y_3807_; lean_object* v___y_3808_; lean_object* v___y_3809_; lean_object* v___y_3810_; lean_object* v___y_3811_; lean_object* v___y_3812_; lean_object* v___y_3813_; lean_object* v___y_3814_; lean_object* v___y_3815_; lean_object* v___y_3816_; lean_object* v_unfold_3817_; lean_object* v_squeeze_3836_; lean_object* v___y_3837_; lean_object* v___y_3838_; lean_object* v___y_3839_; lean_object* v___y_3840_; lean_object* v___y_3841_; lean_object* v___y_3842_; lean_object* v___y_3843_; lean_object* v___y_3844_; lean_object* v___x_3853_; uint8_t v___x_3854_; 
v___f_3672_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__3));
v___x_3673_ = lean_unsigned_to_nat(0u);
v_tk_3674_ = l_Lean_Syntax_getArg(v_stx_3655_, v___x_3673_);
v___x_3675_ = lean_unsigned_to_nat(1u);
v___x_3853_ = l_Lean_Syntax_getArg(v_stx_3655_, v___x_3675_);
v___x_3854_ = l_Lean_Syntax_isNone(v___x_3853_);
if (v___x_3854_ == 0)
{
uint8_t v___x_3855_; 
lean_inc(v___x_3853_);
v___x_3855_ = l_Lean_Syntax_matchesNull(v___x_3853_, v___x_3675_);
if (v___x_3855_ == 0)
{
lean_object* v___x_3856_; 
lean_dec(v___x_3853_);
lean_dec(v_tk_3674_);
lean_dec(v_stx_3655_);
v___x_3856_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3856_;
}
else
{
lean_object* v_squeeze_3857_; lean_object* v___x_3858_; 
v_squeeze_3857_ = l_Lean_Syntax_getArg(v___x_3853_, v___x_3673_);
lean_dec(v___x_3853_);
v___x_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3858_, 0, v_squeeze_3857_);
v_squeeze_3836_ = v___x_3858_;
v___y_3837_ = v_a_3656_;
v___y_3838_ = v_a_3657_;
v___y_3839_ = v_a_3658_;
v___y_3840_ = v_a_3659_;
v___y_3841_ = v_a_3660_;
v___y_3842_ = v_a_3661_;
v___y_3843_ = v_a_3662_;
v___y_3844_ = v_a_3663_;
goto v___jp_3835_;
}
}
else
{
lean_object* v___x_3859_; 
lean_dec(v___x_3853_);
v___x_3859_ = lean_box(0);
v_squeeze_3836_ = v___x_3859_;
v___y_3837_ = v_a_3656_;
v___y_3838_ = v_a_3657_;
v___y_3839_ = v_a_3658_;
v___y_3840_ = v_a_3659_;
v___y_3841_ = v_a_3660_;
v___y_3842_ = v_a_3661_;
v___y_3843_ = v_a_3662_;
v___y_3844_ = v_a_3663_;
goto v___jp_3835_;
}
v___jp_3676_:
{
lean_object* v___x_3699_; lean_object* v___f_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___f_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3699_ = lean_box(v___x_3670_);
lean_inc(v___y_3698_);
lean_inc(v___y_3690_);
lean_inc(v___y_3691_);
lean_inc(v___y_3679_);
lean_inc(v___y_3695_);
lean_inc(v___y_3686_);
v___f_3700_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___boxed), 21, 11);
lean_closure_set(v___f_3700_, 0, v___y_3686_);
lean_closure_set(v___f_3700_, 1, v___y_3695_);
lean_closure_set(v___f_3700_, 2, v___x_3665_);
lean_closure_set(v___f_3700_, 3, v___x_3666_);
lean_closure_set(v___f_3700_, 4, v___x_3667_);
lean_closure_set(v___f_3700_, 5, v___y_3679_);
lean_closure_set(v___f_3700_, 6, v___x_3673_);
lean_closure_set(v___f_3700_, 7, v___y_3691_);
lean_closure_set(v___f_3700_, 8, v___y_3690_);
lean_closure_set(v___f_3700_, 9, v___x_3699_);
lean_closure_set(v___f_3700_, 10, v___y_3698_);
v___x_3701_ = lean_box(v___x_3670_);
v___x_3702_ = lean_box(v_useReducible_3654_);
v___x_3703_ = lean_box(v___y_3678_);
lean_inc(v___y_3687_);
lean_inc(v___y_3681_);
v___f_3704_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___boxed), 35, 26);
lean_closure_set(v___f_3704_, 0, v_tk_3674_);
lean_closure_set(v___f_3704_, 1, v___x_3665_);
lean_closure_set(v___f_3704_, 2, v___x_3666_);
lean_closure_set(v___f_3704_, 3, v___x_3667_);
lean_closure_set(v___f_3704_, 4, v___x_3673_);
lean_closure_set(v___f_3704_, 5, v___x_3701_);
lean_closure_set(v___f_3704_, 6, v___y_3681_);
lean_closure_set(v___f_3704_, 7, v___x_3669_);
lean_closure_set(v___f_3704_, 8, v___x_3702_);
lean_closure_set(v___f_3704_, 9, v___f_3672_);
lean_closure_set(v___f_3704_, 10, v___x_3668_);
lean_closure_set(v___f_3704_, 11, v___y_3683_);
lean_closure_set(v___f_3704_, 12, v___y_3688_);
lean_closure_set(v___f_3704_, 13, v___x_3675_);
lean_closure_set(v___f_3704_, 14, v___y_3687_);
lean_closure_set(v___f_3704_, 15, v___y_3696_);
lean_closure_set(v___f_3704_, 16, v___y_3694_);
lean_closure_set(v___f_3704_, 17, v___y_3679_);
lean_closure_set(v___f_3704_, 18, v___x_3703_);
lean_closure_set(v___f_3704_, 19, v___f_3700_);
lean_closure_set(v___f_3704_, 20, v___y_3693_);
lean_closure_set(v___f_3704_, 21, v___y_3686_);
lean_closure_set(v___f_3704_, 22, v___y_3695_);
lean_closure_set(v___f_3704_, 23, v___y_3691_);
lean_closure_set(v___f_3704_, 24, v___y_3690_);
lean_closure_set(v___f_3704_, 25, v___y_3698_);
v___x_3705_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withSimpDiagnostics___boxed), 10, 1);
lean_closure_set(v___x_3705_, 0, v___f_3704_);
v___x_3706_ = l_Lean_Elab_Tactic_focus___redArg(v___x_3705_, v___y_3692_, v___y_3677_, v___y_3689_, v___y_3685_, v___y_3682_, v___y_3684_, v___y_3680_, v___y_3697_);
return v___x_3706_;
}
v___jp_3707_:
{
lean_object* v___x_3730_; 
v___x_3730_ = l_Lean_Syntax_getOptional_x3f(v___y_3727_);
lean_dec(v___y_3727_);
if (lean_obj_tag(v___x_3730_) == 0)
{
lean_object* v___x_3731_; 
v___x_3731_ = lean_box(0);
v___y_3677_ = v___y_3708_;
v___y_3678_ = v___y_3709_;
v___y_3679_ = v___y_3710_;
v___y_3680_ = v___y_3711_;
v___y_3681_ = v___y_3712_;
v___y_3682_ = v___y_3713_;
v___y_3683_ = v___y_3714_;
v___y_3684_ = v___y_3715_;
v___y_3685_ = v___y_3716_;
v___y_3686_ = v___y_3717_;
v___y_3687_ = v___y_3718_;
v___y_3688_ = v___y_3719_;
v___y_3689_ = v___y_3721_;
v___y_3690_ = v___y_3720_;
v___y_3691_ = v___y_3722_;
v___y_3692_ = v___y_3723_;
v___y_3693_ = v_usingTk_x3f_3728_;
v___y_3694_ = v_usingArg_3729_;
v___y_3695_ = v___y_3724_;
v___y_3696_ = v___y_3725_;
v___y_3697_ = v___y_3726_;
v___y_3698_ = v___x_3731_;
goto v___jp_3676_;
}
else
{
lean_object* v_val_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3739_; 
v_val_3732_ = lean_ctor_get(v___x_3730_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v___x_3730_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3734_ = v___x_3730_;
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_val_3732_);
lean_dec(v___x_3730_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v___x_3737_; 
if (v_isShared_3735_ == 0)
{
v___x_3737_ = v___x_3734_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v_val_3732_);
v___x_3737_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
v___y_3677_ = v___y_3708_;
v___y_3678_ = v___y_3709_;
v___y_3679_ = v___y_3710_;
v___y_3680_ = v___y_3711_;
v___y_3681_ = v___y_3712_;
v___y_3682_ = v___y_3713_;
v___y_3683_ = v___y_3714_;
v___y_3684_ = v___y_3715_;
v___y_3685_ = v___y_3716_;
v___y_3686_ = v___y_3717_;
v___y_3687_ = v___y_3718_;
v___y_3688_ = v___y_3719_;
v___y_3689_ = v___y_3721_;
v___y_3690_ = v___y_3720_;
v___y_3691_ = v___y_3722_;
v___y_3692_ = v___y_3723_;
v___y_3693_ = v_usingTk_x3f_3728_;
v___y_3694_ = v_usingArg_3729_;
v___y_3695_ = v___y_3724_;
v___y_3696_ = v___y_3725_;
v___y_3697_ = v___y_3726_;
v___y_3698_ = v___x_3737_;
goto v___jp_3676_;
}
}
}
}
v___jp_3740_:
{
lean_object* v___x_3762_; lean_object* v___x_3763_; uint8_t v___x_3764_; 
v___x_3762_ = lean_unsigned_to_nat(4u);
v___x_3763_ = l_Lean_Syntax_getArg(v___y_3747_, v___x_3762_);
lean_dec(v___y_3747_);
v___x_3764_ = l_Lean_Syntax_isNone(v___x_3763_);
if (v___x_3764_ == 0)
{
uint8_t v___x_3765_; 
lean_inc(v___x_3763_);
v___x_3765_ = l_Lean_Syntax_matchesNull(v___x_3763_, v___y_3756_);
lean_dec(v___y_3756_);
if (v___x_3765_ == 0)
{
lean_object* v___x_3766_; 
lean_dec(v___x_3763_);
lean_dec(v_args_3761_);
lean_dec(v___y_3760_);
lean_dec(v___y_3758_);
lean_dec(v___y_3757_);
lean_dec(v___y_3754_);
lean_dec(v___y_3752_);
lean_dec(v___y_3750_);
lean_dec(v___y_3743_);
lean_dec(v_tk_3674_);
v___x_3766_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3766_;
}
else
{
lean_object* v_usingTk_x3f_3767_; lean_object* v_usingArg_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v_usingTk_x3f_3767_ = l_Lean_Syntax_getArg(v___x_3763_, v___x_3673_);
v_usingArg_3768_ = l_Lean_Syntax_getArg(v___x_3763_, v___x_3675_);
lean_dec(v___x_3763_);
v___x_3769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3769_, 0, v_usingTk_x3f_3767_);
v___x_3770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3770_, 0, v_usingArg_3768_);
v___y_3708_ = v___y_3741_;
v___y_3709_ = v___y_3742_;
v___y_3710_ = v___y_3743_;
v___y_3711_ = v___y_3744_;
v___y_3712_ = v___y_3745_;
v___y_3713_ = v___y_3746_;
v___y_3714_ = v___x_3762_;
v___y_3715_ = v___y_3748_;
v___y_3716_ = v___y_3749_;
v___y_3717_ = v___y_3750_;
v___y_3718_ = v___y_3751_;
v___y_3719_ = v___y_3752_;
v___y_3720_ = v___y_3754_;
v___y_3721_ = v___y_3753_;
v___y_3722_ = v_args_3761_;
v___y_3723_ = v___y_3755_;
v___y_3724_ = v___y_3757_;
v___y_3725_ = v___y_3758_;
v___y_3726_ = v___y_3759_;
v___y_3727_ = v___y_3760_;
v_usingTk_x3f_3728_ = v___x_3769_;
v_usingArg_3729_ = v___x_3770_;
goto v___jp_3707_;
}
}
else
{
lean_object* v___x_3771_; 
lean_dec(v___x_3763_);
lean_dec(v___y_3756_);
v___x_3771_ = lean_box(0);
v___y_3708_ = v___y_3741_;
v___y_3709_ = v___y_3742_;
v___y_3710_ = v___y_3743_;
v___y_3711_ = v___y_3744_;
v___y_3712_ = v___y_3745_;
v___y_3713_ = v___y_3746_;
v___y_3714_ = v___x_3762_;
v___y_3715_ = v___y_3748_;
v___y_3716_ = v___y_3749_;
v___y_3717_ = v___y_3750_;
v___y_3718_ = v___y_3751_;
v___y_3719_ = v___y_3752_;
v___y_3720_ = v___y_3754_;
v___y_3721_ = v___y_3753_;
v___y_3722_ = v_args_3761_;
v___y_3723_ = v___y_3755_;
v___y_3724_ = v___y_3757_;
v___y_3725_ = v___y_3758_;
v___y_3726_ = v___y_3759_;
v___y_3727_ = v___y_3760_;
v_usingTk_x3f_3728_ = v___x_3771_;
v_usingArg_3729_ = v___x_3771_;
goto v___jp_3707_;
}
}
v___jp_3772_:
{
lean_object* v___x_3794_; uint8_t v___x_3795_; 
v___x_3794_ = l_Lean_Syntax_getArg(v___y_3784_, v___y_3782_);
lean_dec(v___y_3782_);
v___x_3795_ = l_Lean_Syntax_isNone(v___x_3794_);
if (v___x_3795_ == 0)
{
uint8_t v___x_3796_; 
lean_inc(v___x_3794_);
v___x_3796_ = l_Lean_Syntax_matchesNull(v___x_3794_, v___x_3675_);
if (v___x_3796_ == 0)
{
lean_object* v___x_3797_; 
lean_dec(v___x_3794_);
lean_dec(v_only_3785_);
lean_dec(v___y_3784_);
lean_dec(v___y_3783_);
lean_dec(v___y_3781_);
lean_dec(v___y_3780_);
lean_dec(v___y_3779_);
lean_dec(v___y_3777_);
lean_dec(v___y_3776_);
lean_dec(v___y_3774_);
lean_dec(v_tk_3674_);
v___x_3797_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3797_;
}
else
{
lean_object* v___x_3798_; lean_object* v___x_3799_; uint8_t v___x_3800_; 
v___x_3798_ = l_Lean_Syntax_getArg(v___x_3794_, v___x_3673_);
lean_dec(v___x_3794_);
v___x_3799_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4));
lean_inc(v___x_3798_);
v___x_3800_ = l_Lean_Syntax_isOfKind(v___x_3798_, v___x_3799_);
if (v___x_3800_ == 0)
{
lean_object* v___x_3801_; 
lean_dec(v___x_3798_);
lean_dec(v_only_3785_);
lean_dec(v___y_3784_);
lean_dec(v___y_3783_);
lean_dec(v___y_3781_);
lean_dec(v___y_3780_);
lean_dec(v___y_3779_);
lean_dec(v___y_3777_);
lean_dec(v___y_3776_);
lean_dec(v___y_3774_);
lean_dec(v_tk_3674_);
v___x_3801_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3801_;
}
else
{
lean_object* v___x_3802_; lean_object* v_args_3803_; lean_object* v___x_3804_; 
v___x_3802_ = l_Lean_Syntax_getArg(v___x_3798_, v___x_3675_);
lean_dec(v___x_3798_);
v_args_3803_ = l_Lean_Syntax_getArgs(v___x_3802_);
lean_dec(v___x_3802_);
v___x_3804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3804_, 0, v_args_3803_);
v___y_3741_ = v___y_3787_;
v___y_3742_ = v___y_3773_;
v___y_3743_ = v___y_3774_;
v___y_3744_ = v___y_3792_;
v___y_3745_ = v___y_3775_;
v___y_3746_ = v___y_3790_;
v___y_3747_ = v___y_3784_;
v___y_3748_ = v___y_3791_;
v___y_3749_ = v___y_3789_;
v___y_3750_ = v___y_3779_;
v___y_3751_ = v___y_3778_;
v___y_3752_ = v___y_3780_;
v___y_3753_ = v___y_3788_;
v___y_3754_ = v_only_3785_;
v___y_3755_ = v___y_3786_;
v___y_3756_ = v___y_3781_;
v___y_3757_ = v___y_3776_;
v___y_3758_ = v___y_3777_;
v___y_3759_ = v___y_3793_;
v___y_3760_ = v___y_3783_;
v_args_3761_ = v___x_3804_;
goto v___jp_3740_;
}
}
}
else
{
lean_object* v___x_3805_; 
lean_dec(v___x_3794_);
v___x_3805_ = lean_box(0);
v___y_3741_ = v___y_3787_;
v___y_3742_ = v___y_3773_;
v___y_3743_ = v___y_3774_;
v___y_3744_ = v___y_3792_;
v___y_3745_ = v___y_3775_;
v___y_3746_ = v___y_3790_;
v___y_3747_ = v___y_3784_;
v___y_3748_ = v___y_3791_;
v___y_3749_ = v___y_3789_;
v___y_3750_ = v___y_3779_;
v___y_3751_ = v___y_3778_;
v___y_3752_ = v___y_3780_;
v___y_3753_ = v___y_3788_;
v___y_3754_ = v_only_3785_;
v___y_3755_ = v___y_3786_;
v___y_3756_ = v___y_3781_;
v___y_3757_ = v___y_3776_;
v___y_3758_ = v___y_3777_;
v___y_3759_ = v___y_3793_;
v___y_3760_ = v___y_3783_;
v_args_3761_ = v___x_3805_;
goto v___jp_3740_;
}
}
v___jp_3806_:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; uint8_t v___x_3821_; 
v___x_3818_ = lean_unsigned_to_nat(3u);
v___x_3819_ = l_Lean_Syntax_getArg(v_stx_3655_, v___x_3818_);
lean_dec(v_stx_3655_);
v___x_3820_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6));
lean_inc(v___x_3819_);
v___x_3821_ = l_Lean_Syntax_isOfKind(v___x_3819_, v___x_3820_);
if (v___x_3821_ == 0)
{
lean_object* v___x_3822_; 
lean_dec(v___x_3819_);
lean_dec(v_unfold_3817_);
lean_dec(v___y_3812_);
lean_dec(v___y_3811_);
lean_dec(v_tk_3674_);
v___x_3822_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3822_;
}
else
{
lean_object* v___x_3823_; lean_object* v___x_3824_; uint8_t v___x_3825_; 
v___x_3823_ = l_Lean_Syntax_getArg(v___x_3819_, v___x_3673_);
v___x_3824_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8));
lean_inc(v___x_3823_);
v___x_3825_ = l_Lean_Syntax_isOfKind(v___x_3823_, v___x_3824_);
if (v___x_3825_ == 0)
{
lean_object* v___x_3826_; 
lean_dec(v___x_3823_);
lean_dec(v___x_3819_);
lean_dec(v_unfold_3817_);
lean_dec(v___y_3812_);
lean_dec(v___y_3811_);
lean_dec(v_tk_3674_);
v___x_3826_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3826_;
}
else
{
lean_object* v___x_3827_; lean_object* v___x_3828_; uint8_t v___x_3829_; 
v___x_3827_ = l_Lean_Syntax_getArg(v___x_3819_, v___x_3675_);
v___x_3828_ = l_Lean_Syntax_getArg(v___x_3819_, v___y_3812_);
v___x_3829_ = l_Lean_Syntax_isNone(v___x_3828_);
if (v___x_3829_ == 0)
{
uint8_t v___x_3830_; 
lean_inc(v___x_3828_);
v___x_3830_ = l_Lean_Syntax_matchesNull(v___x_3828_, v___x_3675_);
if (v___x_3830_ == 0)
{
lean_object* v___x_3831_; 
lean_dec(v___x_3828_);
lean_dec(v___x_3827_);
lean_dec(v___x_3823_);
lean_dec(v___x_3819_);
lean_dec(v_unfold_3817_);
lean_dec(v___y_3812_);
lean_dec(v___y_3811_);
lean_dec(v_tk_3674_);
v___x_3831_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3831_;
}
else
{
lean_object* v_only_3832_; lean_object* v___x_3833_; 
v_only_3832_ = l_Lean_Syntax_getArg(v___x_3828_, v___x_3673_);
lean_dec(v___x_3828_);
v___x_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3833_, 0, v_only_3832_);
lean_inc(v___y_3812_);
v___y_3773_ = v___x_3821_;
v___y_3774_ = v___x_3823_;
v___y_3775_ = v___x_3820_;
v___y_3776_ = v_unfold_3817_;
v___y_3777_ = v___y_3812_;
v___y_3778_ = v___x_3824_;
v___y_3779_ = v___y_3811_;
v___y_3780_ = v___x_3818_;
v___y_3781_ = v___y_3812_;
v___y_3782_ = v___x_3818_;
v___y_3783_ = v___x_3827_;
v___y_3784_ = v___x_3819_;
v_only_3785_ = v___x_3833_;
v___y_3786_ = v___y_3816_;
v___y_3787_ = v___y_3814_;
v___y_3788_ = v___y_3815_;
v___y_3789_ = v___y_3808_;
v___y_3790_ = v___y_3809_;
v___y_3791_ = v___y_3810_;
v___y_3792_ = v___y_3807_;
v___y_3793_ = v___y_3813_;
goto v___jp_3772_;
}
}
else
{
lean_object* v___x_3834_; 
lean_dec(v___x_3828_);
v___x_3834_ = lean_box(0);
lean_inc(v___y_3812_);
v___y_3773_ = v___x_3821_;
v___y_3774_ = v___x_3823_;
v___y_3775_ = v___x_3820_;
v___y_3776_ = v_unfold_3817_;
v___y_3777_ = v___y_3812_;
v___y_3778_ = v___x_3824_;
v___y_3779_ = v___y_3811_;
v___y_3780_ = v___x_3818_;
v___y_3781_ = v___y_3812_;
v___y_3782_ = v___x_3818_;
v___y_3783_ = v___x_3827_;
v___y_3784_ = v___x_3819_;
v_only_3785_ = v___x_3834_;
v___y_3786_ = v___y_3816_;
v___y_3787_ = v___y_3814_;
v___y_3788_ = v___y_3815_;
v___y_3789_ = v___y_3808_;
v___y_3790_ = v___y_3809_;
v___y_3791_ = v___y_3810_;
v___y_3792_ = v___y_3807_;
v___y_3793_ = v___y_3813_;
goto v___jp_3772_;
}
}
}
}
v___jp_3835_:
{
lean_object* v___x_3845_; lean_object* v___x_3846_; uint8_t v___x_3847_; 
v___x_3845_ = lean_unsigned_to_nat(2u);
v___x_3846_ = l_Lean_Syntax_getArg(v_stx_3655_, v___x_3845_);
v___x_3847_ = l_Lean_Syntax_isNone(v___x_3846_);
if (v___x_3847_ == 0)
{
uint8_t v___x_3848_; 
lean_inc(v___x_3846_);
v___x_3848_ = l_Lean_Syntax_matchesNull(v___x_3846_, v___x_3675_);
if (v___x_3848_ == 0)
{
lean_object* v___x_3849_; 
lean_dec(v___x_3846_);
lean_dec(v_squeeze_3836_);
lean_dec(v_tk_3674_);
lean_dec(v_stx_3655_);
v___x_3849_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_3849_;
}
else
{
lean_object* v_unfold_3850_; lean_object* v___x_3851_; 
v_unfold_3850_ = l_Lean_Syntax_getArg(v___x_3846_, v___x_3673_);
lean_dec(v___x_3846_);
v___x_3851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3851_, 0, v_unfold_3850_);
v___y_3807_ = v___y_3843_;
v___y_3808_ = v___y_3840_;
v___y_3809_ = v___y_3841_;
v___y_3810_ = v___y_3842_;
v___y_3811_ = v_squeeze_3836_;
v___y_3812_ = v___x_3845_;
v___y_3813_ = v___y_3844_;
v___y_3814_ = v___y_3838_;
v___y_3815_ = v___y_3839_;
v___y_3816_ = v___y_3837_;
v_unfold_3817_ = v___x_3851_;
goto v___jp_3806_;
}
}
else
{
lean_object* v___x_3852_; 
lean_dec(v___x_3846_);
v___x_3852_ = lean_box(0);
v___y_3807_ = v___y_3843_;
v___y_3808_ = v___y_3840_;
v___y_3809_ = v___y_3841_;
v___y_3810_ = v___y_3842_;
v___y_3811_ = v_squeeze_3836_;
v___y_3812_ = v___x_3845_;
v___y_3813_ = v___y_3844_;
v___y_3814_ = v___y_3838_;
v___y_3815_ = v___y_3839_;
v___y_3816_ = v___y_3837_;
v_unfold_3817_ = v___x_3852_;
goto v___jp_3806_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___boxed(lean_object* v_useReducible_3860_, lean_object* v_stx_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_, lean_object* v_a_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_){
_start:
{
uint8_t v_useReducible_boxed_3871_; lean_object* v_res_3872_; 
v_useReducible_boxed_3871_ = lean_unbox(v_useReducible_3860_);
v_res_3872_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore(v_useReducible_boxed_3871_, v_stx_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_, v_a_3867_, v_a_3868_, v_a_3869_);
lean_dec(v_a_3869_);
lean_dec_ref(v_a_3868_);
lean_dec(v_a_3867_);
lean_dec_ref(v_a_3866_);
lean_dec(v_a_3865_);
lean_dec_ref(v_a_3864_);
lean_dec(v_a_3863_);
lean_dec_ref(v_a_3862_);
return v_res_3872_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1(lean_object* v_mvarId_3873_, lean_object* v_val_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
lean_object* v___x_3884_; 
v___x_3884_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___redArg(v_mvarId_3873_, v_val_3874_, v___y_3880_);
return v___x_3884_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1___boxed(lean_object* v_mvarId_3885_, lean_object* v_val_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_){
_start:
{
lean_object* v_res_3896_; 
v_res_3896_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1(v_mvarId_3885_, v_val_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_);
lean_dec(v___y_3894_);
lean_dec_ref(v___y_3893_);
lean_dec(v___y_3892_);
lean_dec_ref(v___y_3891_);
lean_dec(v___y_3890_);
lean_dec_ref(v___y_3889_);
lean_dec(v___y_3888_);
lean_dec_ref(v___y_3887_);
return v_res_3896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3(lean_object* v_o_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_){
_start:
{
lean_object* v___x_3907_; 
v___x_3907_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___redArg(v_o_3897_, v___y_3905_);
return v___x_3907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3___boxed(lean_object* v_o_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_){
_start:
{
lean_object* v_res_3918_; 
v_res_3918_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__2_spec__3(v_o_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_, v___y_3916_);
lean_dec(v___y_3916_);
lean_dec_ref(v___y_3915_);
lean_dec(v___y_3914_);
lean_dec_ref(v___y_3913_);
lean_dec(v___y_3912_);
lean_dec_ref(v___y_3911_);
lean_dec(v___y_3910_);
lean_dec_ref(v___y_3909_);
return v_res_3918_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5(lean_object* v_00_u03b1_3919_, lean_object* v_msg_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_){
_start:
{
lean_object* v___x_3930_; 
v___x_3930_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___redArg(v_msg_3920_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_);
return v___x_3930_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5___boxed(lean_object* v_00_u03b1_3931_, lean_object* v_msg_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_){
_start:
{
lean_object* v_res_3942_; 
v_res_3942_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__5(v_00_u03b1_3931_, v_msg_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_);
lean_dec(v___y_3940_);
lean_dec_ref(v___y_3939_);
lean_dec(v___y_3938_);
lean_dec_ref(v___y_3937_);
lean_dec(v___y_3936_);
lean_dec_ref(v___y_3935_);
lean_dec(v___y_3934_);
lean_dec_ref(v___y_3933_);
return v_res_3942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7(lean_object* v_00_u03b1_3943_, lean_object* v_x_3944_, lean_object* v_mkInfoTree_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_){
_start:
{
lean_object* v___x_3955_; 
v___x_3955_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___redArg(v_x_3944_, v_mkInfoTree_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_);
return v___x_3955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7___boxed(lean_object* v_00_u03b1_3956_, lean_object* v_x_3957_, lean_object* v_mkInfoTree_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_){
_start:
{
lean_object* v_res_3968_; 
v_res_3968_ = l_Lean_Elab_withInfoTreeContext___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__7(v_00_u03b1_3956_, v_x_3957_, v_mkInfoTree_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_, v___y_3966_);
lean_dec(v___y_3966_);
lean_dec_ref(v___y_3965_);
lean_dec(v___y_3964_);
lean_dec_ref(v___y_3963_);
lean_dec(v___y_3962_);
lean_dec_ref(v___y_3961_);
lean_dec(v___y_3960_);
lean_dec_ref(v___y_3959_);
return v_res_3968_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1(lean_object* v_00_u03b2_3969_, lean_object* v_x_3970_, lean_object* v_x_3971_, lean_object* v_x_3972_){
_start:
{
lean_object* v___x_3973_; 
v___x_3973_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1___redArg(v_x_3970_, v_x_3971_, v_x_3972_);
return v___x_3973_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5(lean_object* v_00_u03b2_3974_, lean_object* v_x_3975_, size_t v_x_3976_, size_t v_x_3977_, lean_object* v_x_3978_, lean_object* v_x_3979_){
_start:
{
lean_object* v___x_3980_; 
v___x_3980_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___redArg(v_x_3975_, v_x_3976_, v_x_3977_, v_x_3978_, v_x_3979_);
return v___x_3980_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5___boxed(lean_object* v_00_u03b2_3981_, lean_object* v_x_3982_, lean_object* v_x_3983_, lean_object* v_x_3984_, lean_object* v_x_3985_, lean_object* v_x_3986_){
_start:
{
size_t v_x_100129__boxed_3987_; size_t v_x_100130__boxed_3988_; lean_object* v_res_3989_; 
v_x_100129__boxed_3987_ = lean_unbox_usize(v_x_3983_);
lean_dec(v_x_3983_);
v_x_100130__boxed_3988_ = lean_unbox_usize(v_x_3984_);
lean_dec(v_x_3984_);
v_res_3989_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5(v_00_u03b2_3981_, v_x_3982_, v_x_100129__boxed_3987_, v_x_100130__boxed_3988_, v_x_3985_, v_x_3986_);
return v_res_3989_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10(lean_object* v_00_u03b2_3990_, lean_object* v_m_3991_, lean_object* v_a_3992_){
_start:
{
uint8_t v___x_3993_; 
v___x_3993_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___redArg(v_m_3991_, v_a_3992_);
return v___x_3993_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10___boxed(lean_object* v_00_u03b2_3994_, lean_object* v_m_3995_, lean_object* v_a_3996_){
_start:
{
uint8_t v_res_3997_; lean_object* v_r_3998_; 
v_res_3997_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10(v_00_u03b2_3994_, v_m_3995_, v_a_3996_);
lean_dec_ref(v_a_3996_);
lean_dec_ref(v_m_3995_);
v_r_3998_ = lean_box(v_res_3997_);
return v_r_3998_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11(lean_object* v_00_u03b2_3999_, lean_object* v_m_4000_, lean_object* v_a_4001_, lean_object* v_b_4002_){
_start:
{
lean_object* v___x_4003_; 
v___x_4003_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11___redArg(v_m_4000_, v_a_4001_, v_b_4002_);
return v___x_4003_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19(lean_object* v_mvarId_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_){
_start:
{
lean_object* v___x_4015_; 
v___x_4015_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___redArg(v_mvarId_4004_, v___y_4005_, v___y_4011_);
return v___x_4015_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19___boxed(lean_object* v_mvarId_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_){
_start:
{
lean_object* v_res_4027_; 
v_res_4027_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__19(v_mvarId_4016_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_, v___y_4021_, v___y_4022_, v___y_4023_, v___y_4024_, v___y_4025_);
lean_dec(v___y_4025_);
lean_dec_ref(v___y_4024_);
lean_dec(v___y_4023_);
lean_dec_ref(v___y_4022_);
lean_dec(v___y_4021_);
lean_dec_ref(v___y_4020_);
lean_dec(v___y_4019_);
lean_dec_ref(v___y_4018_);
lean_dec(v_mvarId_4016_);
return v_res_4027_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20(lean_object* v_mvarId_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_){
_start:
{
lean_object* v___x_4039_; 
v___x_4039_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___redArg(v_mvarId_4028_, v___y_4029_, v___y_4035_);
return v___x_4039_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20___boxed(lean_object* v_mvarId_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__12_spec__20(v_mvarId_4040_, v___y_4041_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
lean_dec(v___y_4047_);
lean_dec_ref(v___y_4046_);
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4044_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v_mvarId_4040_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11(lean_object* v_00_u03b2_4052_, lean_object* v_n_4053_, lean_object* v_k_4054_, lean_object* v_v_4055_){
_start:
{
lean_object* v___x_4056_; 
v___x_4056_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11___redArg(v_n_4053_, v_k_4054_, v_v_4055_);
return v___x_4056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12(lean_object* v_00_u03b2_4057_, size_t v_depth_4058_, lean_object* v_keys_4059_, lean_object* v_vals_4060_, lean_object* v_heq_4061_, lean_object* v_i_4062_, lean_object* v_entries_4063_){
_start:
{
lean_object* v___x_4064_; 
v___x_4064_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___redArg(v_depth_4058_, v_keys_4059_, v_vals_4060_, v_i_4062_, v_entries_4063_);
return v___x_4064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12___boxed(lean_object* v_00_u03b2_4065_, lean_object* v_depth_4066_, lean_object* v_keys_4067_, lean_object* v_vals_4068_, lean_object* v_heq_4069_, lean_object* v_i_4070_, lean_object* v_entries_4071_){
_start:
{
size_t v_depth_boxed_4072_; lean_object* v_res_4073_; 
v_depth_boxed_4072_ = lean_unbox_usize(v_depth_4066_);
lean_dec(v_depth_4066_);
v_res_4073_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__12(v_00_u03b2_4065_, v_depth_boxed_4072_, v_keys_4067_, v_vals_4068_, v_heq_4069_, v_i_4070_, v_entries_4071_);
lean_dec_ref(v_vals_4068_);
lean_dec_ref(v_keys_4067_);
return v_res_4073_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15(lean_object* v_00_u03b2_4074_, lean_object* v_a_4075_, lean_object* v_x_4076_){
_start:
{
uint8_t v___x_4077_; 
v___x_4077_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___redArg(v_a_4075_, v_x_4076_);
return v___x_4077_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15___boxed(lean_object* v_00_u03b2_4078_, lean_object* v_a_4079_, lean_object* v_x_4080_){
_start:
{
uint8_t v_res_4081_; lean_object* v_r_4082_; 
v_res_4081_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__10_spec__15(v_00_u03b2_4078_, v_a_4079_, v_x_4080_);
lean_dec(v_x_4080_);
lean_dec_ref(v_a_4079_);
v_r_4082_ = lean_box(v_res_4081_);
return v_r_4082_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17(lean_object* v_00_u03b2_4083_, lean_object* v_data_4084_){
_start:
{
lean_object* v___x_4085_; 
v___x_4085_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17___redArg(v_data_4084_);
return v___x_4085_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13(lean_object* v_00_u03b2_4086_, lean_object* v_x_4087_, lean_object* v_x_4088_, lean_object* v_x_4089_, lean_object* v_x_4090_){
_start:
{
lean_object* v___x_4091_; 
v___x_4091_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__1_spec__1_spec__5_spec__11_spec__13___redArg(v_x_4087_, v_x_4088_, v_x_4089_, v_x_4090_);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19(lean_object* v_00_u03b2_4092_, lean_object* v_i_4093_, lean_object* v_source_4094_, lean_object* v_target_4095_){
_start:
{
lean_object* v___x_4096_; 
v___x_4096_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19___redArg(v_i_4093_, v_source_4094_, v_target_4095_);
return v___x_4096_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23(lean_object* v_00_u03b2_4097_, lean_object* v_x_4098_, lean_object* v_x_4099_){
_start:
{
lean_object* v___x_4100_; 
v___x_4100_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__4_spec__6_spec__11_spec__17_spec__19_spec__23___redArg(v_x_4098_, v_x_4099_);
return v___x_4100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa(lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_, lean_object* v_a_4105_, lean_object* v_a_4106_, lean_object* v_a_4107_, lean_object* v_a_4108_, lean_object* v_a_4109_){
_start:
{
uint8_t v___x_4111_; lean_object* v___x_4112_; 
v___x_4111_ = 1;
v___x_4112_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore(v___x_4111_, v_a_4101_, v_a_4102_, v_a_4103_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
return v___x_4112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___boxed(lean_object* v_a_4113_, lean_object* v_a_4114_, lean_object* v_a_4115_, lean_object* v_a_4116_, lean_object* v_a_4117_, lean_object* v_a_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l_Lean_Elab_Tactic_Simpa_evalSimpa(v_a_4113_, v_a_4114_, v_a_4115_, v_a_4116_, v_a_4117_, v_a_4118_, v_a_4119_, v_a_4120_, v_a_4121_);
lean_dec(v_a_4121_);
lean_dec_ref(v_a_4120_);
lean_dec(v_a_4119_);
lean_dec_ref(v_a_4118_);
lean_dec(v_a_4117_);
lean_dec_ref(v_a_4116_);
lean_dec(v_a_4115_);
lean_dec_ref(v_a_4114_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1(){
_start:
{
lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; 
v___x_4133_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4134_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2));
v___x_4135_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2));
v___x_4136_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpa___boxed), 10, 0);
v___x_4137_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4133_, v___x_4134_, v___x_4135_, v___x_4136_);
return v___x_4137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___boxed(lean_object* v_a_4138_){
_start:
{
lean_object* v_res_4139_; 
v_res_4139_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1();
return v_res_4139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3(){
_start:
{
lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; 
v___x_4166_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2));
v___x_4167_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6));
v___x_4168_ = l_Lean_addBuiltinDeclarationRanges(v___x_4166_, v___x_4167_);
return v___x_4168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___boxed(lean_object* v_a_4169_){
_start:
{
lean_object* v_res_4170_; 
v_res_4170_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3();
return v_res_4170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(lean_object* v_x_4173_){
_start:
{
lean_object* v___x_4174_; 
v___x_4174_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0));
return v___x_4174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___boxed(lean_object* v_x_4175_){
_start:
{
lean_object* v_res_4176_; 
v_res_4176_ = l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(v_x_4175_);
lean_dec(v_x_4175_);
return v_res_4176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang(lean_object* v_stx_4188_, lean_object* v_a_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_){
_start:
{
lean_object* v___y_4199_; lean_object* v___y_4200_; lean_object* v___y_4201_; lean_object* v___y_4202_; lean_object* v___y_4203_; lean_object* v___y_4204_; lean_object* v___y_4205_; lean_object* v___y_4206_; lean_object* v___y_4207_; lean_object* v___y_4208_; lean_object* v___y_4209_; uint8_t v___y_4210_; lean_object* v___y_4211_; lean_object* v___y_4212_; lean_object* v___y_4213_; lean_object* v___y_4214_; lean_object* v___y_4215_; lean_object* v___y_4216_; lean_object* v___y_4217_; lean_object* v___y_4218_; lean_object* v___y_4219_; lean_object* v___y_4220_; lean_object* v___x_4229_; uint8_t v___x_4230_; 
v___x_4229_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0));
lean_inc(v_stx_4188_);
v___x_4230_ = l_Lean_Syntax_isOfKind(v_stx_4188_, v___x_4229_);
if (v___x_4230_ == 0)
{
lean_object* v___x_4231_; 
lean_dec(v_stx_4188_);
v___x_4231_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4231_;
}
else
{
lean_object* v___x_4232_; lean_object* v___y_4234_; lean_object* v___y_4235_; lean_object* v___y_4236_; lean_object* v___y_4237_; lean_object* v___y_4238_; lean_object* v___y_4239_; lean_object* v___y_4240_; lean_object* v___y_4241_; lean_object* v___y_4242_; lean_object* v___y_4243_; lean_object* v___y_4244_; uint8_t v___y_4245_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4270_; lean_object* v___y_4271_; lean_object* v___y_4272_; lean_object* v___y_4273_; lean_object* v___y_4274_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4279_; lean_object* v___y_4280_; uint8_t v___y_4281_; lean_object* v___y_4282_; lean_object* v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4285_; lean_object* v___y_4286_; lean_object* v___y_4287_; lean_object* v___y_4288_; lean_object* v___y_4289_; lean_object* v___y_4290_; lean_object* v___y_4291_; lean_object* v___y_4301_; lean_object* v___y_4302_; lean_object* v___y_4303_; lean_object* v___y_4304_; lean_object* v___y_4305_; lean_object* v___y_4306_; lean_object* v___y_4307_; lean_object* v___y_4308_; lean_object* v___y_4309_; lean_object* v___y_4310_; lean_object* v___y_4311_; uint8_t v___y_4312_; lean_object* v___y_4313_; lean_object* v___y_4314_; lean_object* v___y_4315_; lean_object* v___y_4316_; lean_object* v___y_4317_; lean_object* v___y_4318_; lean_object* v___y_4319_; lean_object* v___y_4320_; lean_object* v___y_4321_; lean_object* v___y_4330_; lean_object* v___y_4331_; lean_object* v___y_4332_; lean_object* v___y_4333_; lean_object* v___y_4334_; lean_object* v___y_4335_; lean_object* v___y_4336_; lean_object* v___y_4337_; lean_object* v___y_4338_; lean_object* v___y_4339_; lean_object* v___y_4340_; uint8_t v___y_4341_; lean_object* v___y_4342_; lean_object* v___y_4343_; lean_object* v___y_4344_; lean_object* v___y_4345_; lean_object* v___y_4346_; lean_object* v___y_4347_; lean_object* v___y_4348_; lean_object* v___y_4349_; lean_object* v___y_4350_; lean_object* v_tk_4359_; lean_object* v___y_4361_; lean_object* v___y_4362_; lean_object* v___y_4363_; lean_object* v___y_4364_; lean_object* v___y_4365_; lean_object* v___y_4366_; lean_object* v___y_4367_; lean_object* v___y_4368_; lean_object* v___y_4369_; lean_object* v___y_4370_; lean_object* v___y_4371_; lean_object* v___y_4372_; lean_object* v___y_4373_; lean_object* v___y_4374_; lean_object* v___y_4375_; lean_object* v___y_4392_; lean_object* v___y_4393_; lean_object* v___y_4394_; lean_object* v___y_4395_; lean_object* v___y_4396_; lean_object* v___y_4397_; lean_object* v_args_4398_; lean_object* v___y_4399_; lean_object* v___y_4400_; lean_object* v___y_4401_; lean_object* v___y_4402_; lean_object* v___y_4403_; lean_object* v___y_4404_; lean_object* v___y_4405_; lean_object* v___y_4406_; lean_object* v___x_4419_; lean_object* v___y_4421_; lean_object* v___y_4422_; lean_object* v___y_4423_; lean_object* v___y_4424_; lean_object* v___y_4425_; lean_object* v___y_4426_; lean_object* v_only_4427_; lean_object* v___y_4428_; lean_object* v___y_4429_; lean_object* v___y_4430_; lean_object* v___y_4431_; lean_object* v___y_4432_; lean_object* v___y_4433_; lean_object* v___y_4434_; lean_object* v___y_4435_; lean_object* v___y_4449_; lean_object* v___y_4450_; lean_object* v_unfold_4451_; lean_object* v___y_4452_; lean_object* v___y_4453_; lean_object* v___y_4454_; lean_object* v___y_4455_; lean_object* v___y_4456_; lean_object* v___y_4457_; lean_object* v___y_4458_; lean_object* v___y_4459_; lean_object* v_squeeze_4478_; lean_object* v___y_4479_; lean_object* v___y_4480_; lean_object* v___y_4481_; lean_object* v___y_4482_; lean_object* v___y_4483_; lean_object* v___y_4484_; lean_object* v___y_4485_; lean_object* v___y_4486_; lean_object* v___x_4495_; uint8_t v___x_4496_; 
v___x_4232_ = lean_unsigned_to_nat(0u);
v_tk_4359_ = l_Lean_Syntax_getArg(v_stx_4188_, v___x_4232_);
v___x_4419_ = lean_unsigned_to_nat(1u);
v___x_4495_ = l_Lean_Syntax_getArg(v_stx_4188_, v___x_4419_);
v___x_4496_ = l_Lean_Syntax_isNone(v___x_4495_);
if (v___x_4496_ == 0)
{
uint8_t v___x_4497_; 
lean_inc(v___x_4495_);
v___x_4497_ = l_Lean_Syntax_matchesNull(v___x_4495_, v___x_4419_);
if (v___x_4497_ == 0)
{
lean_object* v___x_4498_; 
lean_dec(v___x_4495_);
lean_dec(v_tk_4359_);
lean_dec(v_stx_4188_);
v___x_4498_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4498_;
}
else
{
lean_object* v_squeeze_4499_; lean_object* v___x_4500_; 
v_squeeze_4499_ = l_Lean_Syntax_getArg(v___x_4495_, v___x_4232_);
lean_dec(v___x_4495_);
v___x_4500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4500_, 0, v_squeeze_4499_);
v_squeeze_4478_ = v___x_4500_;
v___y_4479_ = v_a_4189_;
v___y_4480_ = v_a_4190_;
v___y_4481_ = v_a_4191_;
v___y_4482_ = v_a_4192_;
v___y_4483_ = v_a_4193_;
v___y_4484_ = v_a_4194_;
v___y_4485_ = v_a_4195_;
v___y_4486_ = v_a_4196_;
goto v___jp_4477_;
}
}
else
{
lean_object* v___x_4501_; 
lean_dec(v___x_4495_);
v___x_4501_ = lean_box(0);
v_squeeze_4478_ = v___x_4501_;
v___y_4479_ = v_a_4189_;
v___y_4480_ = v_a_4190_;
v___y_4481_ = v_a_4191_;
v___y_4482_ = v_a_4192_;
v___y_4483_ = v_a_4193_;
v___y_4484_ = v_a_4194_;
v___y_4485_ = v_a_4195_;
v___y_4486_ = v_a_4196_;
goto v___jp_4477_;
}
v___jp_4233_:
{
lean_object* v___x_4256_; lean_object* v___x_4257_; 
lean_inc_ref(v___y_4253_);
v___x_4256_ = l_Array_append___redArg(v___y_4253_, v___y_4255_);
lean_dec_ref(v___y_4255_);
lean_inc(v___y_4244_);
lean_inc(v___y_4241_);
v___x_4257_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4257_, 0, v___y_4241_);
lean_ctor_set(v___x_4257_, 1, v___y_4244_);
lean_ctor_set(v___x_4257_, 2, v___x_4256_);
if (lean_obj_tag(v___y_4237_) == 1)
{
lean_object* v_val_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; 
v_val_4258_ = lean_ctor_get(v___y_4237_, 0);
lean_inc(v_val_4258_);
lean_dec_ref_known(v___y_4237_, 1);
v___x_4259_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4));
v___x_4260_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__4));
lean_inc_n(v___y_4241_, 4);
v___x_4261_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4261_, 0, v___y_4241_);
lean_ctor_set(v___x_4261_, 1, v___x_4260_);
lean_inc_ref(v___y_4253_);
v___x_4262_ = l_Array_append___redArg(v___y_4253_, v_val_4258_);
lean_dec(v_val_4258_);
lean_inc(v___y_4244_);
v___x_4263_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4263_, 0, v___y_4241_);
lean_ctor_set(v___x_4263_, 1, v___y_4244_);
lean_ctor_set(v___x_4263_, 2, v___x_4262_);
v___x_4264_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__5));
v___x_4265_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4265_, 0, v___y_4241_);
lean_ctor_set(v___x_4265_, 1, v___x_4264_);
v___x_4266_ = l_Lean_Syntax_node3(v___y_4241_, v___x_4259_, v___x_4261_, v___x_4263_, v___x_4265_);
v___x_4267_ = l_Array_mkArray1___redArg(v___x_4266_);
v___y_4199_ = v___y_4234_;
v___y_4200_ = v___y_4235_;
v___y_4201_ = v___y_4236_;
v___y_4202_ = v___y_4238_;
v___y_4203_ = v___y_4239_;
v___y_4204_ = v___y_4240_;
v___y_4205_ = v___y_4241_;
v___y_4206_ = v___x_4257_;
v___y_4207_ = v___y_4242_;
v___y_4208_ = v___y_4243_;
v___y_4209_ = v___y_4244_;
v___y_4210_ = v___y_4245_;
v___y_4211_ = v___y_4246_;
v___y_4212_ = v___y_4248_;
v___y_4213_ = v___y_4247_;
v___y_4214_ = v___y_4250_;
v___y_4215_ = v___y_4249_;
v___y_4216_ = v___y_4252_;
v___y_4217_ = v___y_4251_;
v___y_4218_ = v___y_4253_;
v___y_4219_ = v___y_4254_;
v___y_4220_ = v___x_4267_;
goto v___jp_4198_;
}
else
{
lean_object* v___x_4268_; 
lean_dec(v___y_4237_);
v___x_4268_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0));
v___y_4199_ = v___y_4234_;
v___y_4200_ = v___y_4235_;
v___y_4201_ = v___y_4236_;
v___y_4202_ = v___y_4238_;
v___y_4203_ = v___y_4239_;
v___y_4204_ = v___y_4240_;
v___y_4205_ = v___y_4241_;
v___y_4206_ = v___x_4257_;
v___y_4207_ = v___y_4242_;
v___y_4208_ = v___y_4243_;
v___y_4209_ = v___y_4244_;
v___y_4210_ = v___y_4245_;
v___y_4211_ = v___y_4246_;
v___y_4212_ = v___y_4248_;
v___y_4213_ = v___y_4247_;
v___y_4214_ = v___y_4250_;
v___y_4215_ = v___y_4249_;
v___y_4216_ = v___y_4252_;
v___y_4217_ = v___y_4251_;
v___y_4218_ = v___y_4253_;
v___y_4219_ = v___y_4254_;
v___y_4220_ = v___x_4268_;
goto v___jp_4198_;
}
}
v___jp_4269_:
{
lean_object* v___x_4292_; lean_object* v___x_4293_; 
lean_inc_ref(v___y_4289_);
v___x_4292_ = l_Array_append___redArg(v___y_4289_, v___y_4291_);
lean_dec_ref(v___y_4291_);
lean_inc(v___y_4282_);
lean_inc(v___y_4278_);
v___x_4293_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4293_, 0, v___y_4278_);
lean_ctor_set(v___x_4293_, 1, v___y_4282_);
lean_ctor_set(v___x_4293_, 2, v___x_4292_);
if (lean_obj_tag(v___y_4277_) == 1)
{
lean_object* v_val_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
v_val_4294_ = lean_ctor_get(v___y_4277_, 0);
lean_inc(v_val_4294_);
lean_dec_ref_known(v___y_4277_, 1);
v___x_4295_ = l_Lean_SourceInfo_fromRef(v_val_4294_, v___x_4230_);
lean_dec(v_val_4294_);
v___x_4296_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__6));
v___x_4297_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4295_);
lean_ctor_set(v___x_4297_, 1, v___x_4296_);
v___x_4298_ = l_Array_mkArray1___redArg(v___x_4297_);
v___y_4234_ = v___y_4270_;
v___y_4235_ = v___y_4271_;
v___y_4236_ = v___y_4272_;
v___y_4237_ = v___y_4273_;
v___y_4238_ = v___y_4274_;
v___y_4239_ = v___y_4275_;
v___y_4240_ = v___y_4276_;
v___y_4241_ = v___y_4278_;
v___y_4242_ = v___y_4279_;
v___y_4243_ = v___y_4280_;
v___y_4244_ = v___y_4282_;
v___y_4245_ = v___y_4281_;
v___y_4246_ = v___y_4283_;
v___y_4247_ = v___x_4293_;
v___y_4248_ = v___y_4284_;
v___y_4249_ = v___y_4286_;
v___y_4250_ = v___y_4285_;
v___y_4251_ = v___y_4288_;
v___y_4252_ = v___y_4287_;
v___y_4253_ = v___y_4289_;
v___y_4254_ = v___y_4290_;
v___y_4255_ = v___x_4298_;
goto v___jp_4233_;
}
else
{
lean_object* v___x_4299_; 
v___x_4299_ = l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(v___y_4277_);
lean_dec(v___y_4277_);
v___y_4234_ = v___y_4270_;
v___y_4235_ = v___y_4271_;
v___y_4236_ = v___y_4272_;
v___y_4237_ = v___y_4273_;
v___y_4238_ = v___y_4274_;
v___y_4239_ = v___y_4275_;
v___y_4240_ = v___y_4276_;
v___y_4241_ = v___y_4278_;
v___y_4242_ = v___y_4279_;
v___y_4243_ = v___y_4280_;
v___y_4244_ = v___y_4282_;
v___y_4245_ = v___y_4281_;
v___y_4246_ = v___y_4283_;
v___y_4247_ = v___x_4293_;
v___y_4248_ = v___y_4284_;
v___y_4249_ = v___y_4286_;
v___y_4250_ = v___y_4285_;
v___y_4251_ = v___y_4288_;
v___y_4252_ = v___y_4287_;
v___y_4253_ = v___y_4289_;
v___y_4254_ = v___y_4290_;
v___y_4255_ = v___x_4299_;
goto v___jp_4233_;
}
}
v___jp_4300_:
{
lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; 
lean_inc_ref(v___y_4319_);
v___x_4322_ = l_Array_append___redArg(v___y_4319_, v___y_4321_);
lean_dec_ref(v___y_4321_);
lean_inc(v___y_4313_);
lean_inc(v___y_4309_);
v___x_4323_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4323_, 0, v___y_4309_);
lean_ctor_set(v___x_4323_, 1, v___y_4313_);
lean_ctor_set(v___x_4323_, 2, v___x_4322_);
v___x_4324_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__6));
if (lean_obj_tag(v___y_4316_) == 0)
{
lean_object* v___x_4325_; 
v___x_4325_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0));
v___y_4270_ = v___y_4301_;
v___y_4271_ = v___y_4302_;
v___y_4272_ = v___y_4303_;
v___y_4273_ = v___y_4304_;
v___y_4274_ = v___y_4305_;
v___y_4275_ = v___y_4306_;
v___y_4276_ = v___y_4307_;
v___y_4277_ = v___y_4308_;
v___y_4278_ = v___y_4309_;
v___y_4279_ = v___y_4311_;
v___y_4280_ = v___y_4310_;
v___y_4281_ = v___y_4312_;
v___y_4282_ = v___y_4313_;
v___y_4283_ = v___y_4314_;
v___y_4284_ = v___y_4315_;
v___y_4285_ = v___x_4324_;
v___y_4286_ = v___x_4323_;
v___y_4287_ = v___y_4318_;
v___y_4288_ = v___y_4317_;
v___y_4289_ = v___y_4319_;
v___y_4290_ = v___y_4320_;
v___y_4291_ = v___x_4325_;
goto v___jp_4269_;
}
else
{
lean_object* v_val_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; 
v_val_4326_ = lean_ctor_get(v___y_4316_, 0);
lean_inc(v_val_4326_);
lean_dec_ref_known(v___y_4316_, 1);
v___x_4327_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0___closed__0));
v___x_4328_ = lean_array_push(v___x_4327_, v_val_4326_);
v___y_4270_ = v___y_4301_;
v___y_4271_ = v___y_4302_;
v___y_4272_ = v___y_4303_;
v___y_4273_ = v___y_4304_;
v___y_4274_ = v___y_4305_;
v___y_4275_ = v___y_4306_;
v___y_4276_ = v___y_4307_;
v___y_4277_ = v___y_4308_;
v___y_4278_ = v___y_4309_;
v___y_4279_ = v___y_4311_;
v___y_4280_ = v___y_4310_;
v___y_4281_ = v___y_4312_;
v___y_4282_ = v___y_4313_;
v___y_4283_ = v___y_4314_;
v___y_4284_ = v___y_4315_;
v___y_4285_ = v___x_4324_;
v___y_4286_ = v___x_4323_;
v___y_4287_ = v___y_4318_;
v___y_4288_ = v___y_4317_;
v___y_4289_ = v___y_4319_;
v___y_4290_ = v___y_4320_;
v___y_4291_ = v___x_4328_;
goto v___jp_4269_;
}
}
v___jp_4329_:
{
lean_object* v___x_4351_; lean_object* v___x_4352_; 
lean_inc_ref(v___y_4348_);
v___x_4351_ = l_Array_append___redArg(v___y_4348_, v___y_4350_);
lean_dec_ref(v___y_4350_);
lean_inc(v___y_4342_);
lean_inc(v___y_4338_);
v___x_4352_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4352_, 0, v___y_4338_);
lean_ctor_set(v___x_4352_, 1, v___y_4342_);
lean_ctor_set(v___x_4352_, 2, v___x_4351_);
if (lean_obj_tag(v___y_4339_) == 1)
{
lean_object* v_val_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; 
v_val_4353_ = lean_ctor_get(v___y_4339_, 0);
lean_inc(v_val_4353_);
lean_dec_ref_known(v___y_4339_, 1);
v___x_4354_ = l_Lean_SourceInfo_fromRef(v_val_4353_, v___x_4230_);
lean_dec(v_val_4353_);
v___x_4355_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__9));
v___x_4356_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4356_, 0, v___x_4354_);
lean_ctor_set(v___x_4356_, 1, v___x_4355_);
v___x_4357_ = l_Array_mkArray1___redArg(v___x_4356_);
v___y_4301_ = v___y_4330_;
v___y_4302_ = v___y_4331_;
v___y_4303_ = v___y_4332_;
v___y_4304_ = v___y_4333_;
v___y_4305_ = v___y_4334_;
v___y_4306_ = v___y_4335_;
v___y_4307_ = v___y_4336_;
v___y_4308_ = v___y_4337_;
v___y_4309_ = v___y_4338_;
v___y_4310_ = v___x_4352_;
v___y_4311_ = v___y_4340_;
v___y_4312_ = v___y_4341_;
v___y_4313_ = v___y_4342_;
v___y_4314_ = v___y_4343_;
v___y_4315_ = v___y_4344_;
v___y_4316_ = v___y_4345_;
v___y_4317_ = v___y_4347_;
v___y_4318_ = v___y_4346_;
v___y_4319_ = v___y_4348_;
v___y_4320_ = v___y_4349_;
v___y_4321_ = v___x_4357_;
goto v___jp_4300_;
}
else
{
lean_object* v___x_4358_; 
v___x_4358_ = l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(v___y_4339_);
lean_dec(v___y_4339_);
v___y_4301_ = v___y_4330_;
v___y_4302_ = v___y_4331_;
v___y_4303_ = v___y_4332_;
v___y_4304_ = v___y_4333_;
v___y_4305_ = v___y_4334_;
v___y_4306_ = v___y_4335_;
v___y_4307_ = v___y_4336_;
v___y_4308_ = v___y_4337_;
v___y_4309_ = v___y_4338_;
v___y_4310_ = v___x_4352_;
v___y_4311_ = v___y_4340_;
v___y_4312_ = v___y_4341_;
v___y_4313_ = v___y_4342_;
v___y_4314_ = v___y_4343_;
v___y_4315_ = v___y_4344_;
v___y_4316_ = v___y_4345_;
v___y_4317_ = v___y_4347_;
v___y_4318_ = v___y_4346_;
v___y_4319_ = v___y_4348_;
v___y_4320_ = v___y_4349_;
v___y_4321_ = v___x_4358_;
goto v___jp_4300_;
}
}
v___jp_4360_:
{
lean_object* v_ref_4376_; uint8_t v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; 
v_ref_4376_ = lean_ctor_get(v___y_4362_, 2);
v___x_4377_ = 0;
v___x_4378_ = l_Lean_SourceInfo_fromRef(v_ref_4376_, v___x_4377_);
v___x_4379_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__1));
v___x_4380_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__2));
v___x_4381_ = l_Lean_SourceInfo_fromRef(v_tk_4359_, v___x_4230_);
lean_dec(v_tk_4359_);
v___x_4382_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4382_, 0, v___x_4381_);
lean_ctor_set(v___x_4382_, 1, v___x_4379_);
v___x_4383_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__2));
v___x_4384_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__1___closed__3);
if (lean_obj_tag(v___y_4373_) == 1)
{
lean_object* v_val_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; 
v_val_4385_ = lean_ctor_get(v___y_4373_, 0);
lean_inc(v_val_4385_);
lean_dec_ref_known(v___y_4373_, 1);
v___x_4386_ = l_Lean_SourceInfo_fromRef(v_val_4385_, v___x_4230_);
lean_dec(v_val_4385_);
v___x_4387_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__1));
v___x_4388_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4388_, 0, v___x_4386_);
lean_ctor_set(v___x_4388_, 1, v___x_4387_);
v___x_4389_ = l_Array_mkArray1___redArg(v___x_4388_);
v___y_4330_ = v___y_4361_;
v___y_4331_ = v___x_4382_;
v___y_4332_ = v___x_4380_;
v___y_4333_ = v___y_4363_;
v___y_4334_ = v___y_4362_;
v___y_4335_ = v___y_4364_;
v___y_4336_ = v___y_4365_;
v___y_4337_ = v___y_4366_;
v___y_4338_ = v___x_4378_;
v___y_4339_ = v___y_4367_;
v___y_4340_ = v___y_4368_;
v___y_4341_ = v___x_4377_;
v___y_4342_ = v___x_4383_;
v___y_4343_ = v___y_4369_;
v___y_4344_ = v___y_4370_;
v___y_4345_ = v___y_4375_;
v___y_4346_ = v___y_4371_;
v___y_4347_ = v___y_4372_;
v___y_4348_ = v___x_4384_;
v___y_4349_ = v___y_4374_;
v___y_4350_ = v___x_4389_;
goto v___jp_4329_;
}
else
{
lean_object* v___x_4390_; 
v___x_4390_ = l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___lam__0(v___y_4373_);
lean_dec(v___y_4373_);
v___y_4330_ = v___y_4361_;
v___y_4331_ = v___x_4382_;
v___y_4332_ = v___x_4380_;
v___y_4333_ = v___y_4363_;
v___y_4334_ = v___y_4362_;
v___y_4335_ = v___y_4364_;
v___y_4336_ = v___y_4365_;
v___y_4337_ = v___y_4366_;
v___y_4338_ = v___x_4378_;
v___y_4339_ = v___y_4367_;
v___y_4340_ = v___y_4368_;
v___y_4341_ = v___x_4377_;
v___y_4342_ = v___x_4383_;
v___y_4343_ = v___y_4369_;
v___y_4344_ = v___y_4370_;
v___y_4345_ = v___y_4375_;
v___y_4346_ = v___y_4371_;
v___y_4347_ = v___y_4372_;
v___y_4348_ = v___x_4384_;
v___y_4349_ = v___y_4374_;
v___y_4350_ = v___x_4390_;
goto v___jp_4329_;
}
}
v___jp_4391_:
{
lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; 
v___x_4407_ = lean_unsigned_to_nat(5u);
v___x_4408_ = l_Lean_Syntax_getArg(v___y_4393_, v___x_4407_);
lean_dec(v___y_4393_);
v___x_4409_ = l_Lean_Syntax_getOptional_x3f(v___y_4392_);
lean_dec(v___y_4392_);
if (lean_obj_tag(v___x_4409_) == 0)
{
lean_object* v___x_4410_; 
v___x_4410_ = lean_box(0);
v___y_4361_ = v___y_4399_;
v___y_4362_ = v___y_4405_;
v___y_4363_ = v_args_4398_;
v___y_4364_ = v___y_4404_;
v___y_4365_ = v___y_4402_;
v___y_4366_ = v___y_4394_;
v___y_4367_ = v___y_4395_;
v___y_4368_ = v___y_4401_;
v___y_4369_ = v___y_4406_;
v___y_4370_ = v___y_4400_;
v___y_4371_ = v___y_4403_;
v___y_4372_ = v___y_4396_;
v___y_4373_ = v___y_4397_;
v___y_4374_ = v___x_4408_;
v___y_4375_ = v___x_4410_;
goto v___jp_4360_;
}
else
{
lean_object* v_val_4411_; lean_object* v___x_4413_; uint8_t v_isShared_4414_; uint8_t v_isSharedCheck_4418_; 
v_val_4411_ = lean_ctor_get(v___x_4409_, 0);
v_isSharedCheck_4418_ = !lean_is_exclusive(v___x_4409_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4413_ = v___x_4409_;
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
else
{
lean_inc(v_val_4411_);
lean_dec(v___x_4409_);
v___x_4413_ = lean_box(0);
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
v_resetjp_4412_:
{
lean_object* v___x_4416_; 
if (v_isShared_4414_ == 0)
{
v___x_4416_ = v___x_4413_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v_val_4411_);
v___x_4416_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
v___y_4361_ = v___y_4399_;
v___y_4362_ = v___y_4405_;
v___y_4363_ = v_args_4398_;
v___y_4364_ = v___y_4404_;
v___y_4365_ = v___y_4402_;
v___y_4366_ = v___y_4394_;
v___y_4367_ = v___y_4395_;
v___y_4368_ = v___y_4401_;
v___y_4369_ = v___y_4406_;
v___y_4370_ = v___y_4400_;
v___y_4371_ = v___y_4403_;
v___y_4372_ = v___y_4396_;
v___y_4373_ = v___y_4397_;
v___y_4374_ = v___x_4408_;
v___y_4375_ = v___x_4416_;
goto v___jp_4360_;
}
}
}
}
v___jp_4420_:
{
lean_object* v___x_4436_; uint8_t v___x_4437_; 
v___x_4436_ = l_Lean_Syntax_getArg(v___y_4422_, v___y_4426_);
v___x_4437_ = l_Lean_Syntax_isNone(v___x_4436_);
if (v___x_4437_ == 0)
{
uint8_t v___x_4438_; 
lean_inc(v___x_4436_);
v___x_4438_ = l_Lean_Syntax_matchesNull(v___x_4436_, v___x_4419_);
if (v___x_4438_ == 0)
{
lean_object* v___x_4439_; 
lean_dec(v___x_4436_);
lean_dec(v_only_4427_);
lean_dec(v___y_4425_);
lean_dec(v___y_4424_);
lean_dec(v___y_4423_);
lean_dec(v___y_4422_);
lean_dec(v___y_4421_);
lean_dec(v_tk_4359_);
v___x_4439_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4439_;
}
else
{
lean_object* v___x_4440_; lean_object* v___x_4441_; uint8_t v___x_4442_; 
v___x_4440_ = l_Lean_Syntax_getArg(v___x_4436_, v___x_4232_);
lean_dec(v___x_4436_);
v___x_4441_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__4));
lean_inc(v___x_4440_);
v___x_4442_ = l_Lean_Syntax_isOfKind(v___x_4440_, v___x_4441_);
if (v___x_4442_ == 0)
{
lean_object* v___x_4443_; 
lean_dec(v___x_4440_);
lean_dec(v_only_4427_);
lean_dec(v___y_4425_);
lean_dec(v___y_4424_);
lean_dec(v___y_4423_);
lean_dec(v___y_4422_);
lean_dec(v___y_4421_);
lean_dec(v_tk_4359_);
v___x_4443_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4443_;
}
else
{
lean_object* v___x_4444_; lean_object* v_args_4445_; lean_object* v___x_4446_; 
v___x_4444_ = l_Lean_Syntax_getArg(v___x_4440_, v___x_4419_);
lean_dec(v___x_4440_);
v_args_4445_ = l_Lean_Syntax_getArgs(v___x_4444_);
lean_dec(v___x_4444_);
v___x_4446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4446_, 0, v_args_4445_);
v___y_4392_ = v___y_4421_;
v___y_4393_ = v___y_4422_;
v___y_4394_ = v_only_4427_;
v___y_4395_ = v___y_4423_;
v___y_4396_ = v___y_4424_;
v___y_4397_ = v___y_4425_;
v_args_4398_ = v___x_4446_;
v___y_4399_ = v___y_4428_;
v___y_4400_ = v___y_4429_;
v___y_4401_ = v___y_4430_;
v___y_4402_ = v___y_4431_;
v___y_4403_ = v___y_4432_;
v___y_4404_ = v___y_4433_;
v___y_4405_ = v___y_4434_;
v___y_4406_ = v___y_4435_;
goto v___jp_4391_;
}
}
}
else
{
lean_object* v___x_4447_; 
lean_dec(v___x_4436_);
v___x_4447_ = lean_box(0);
v___y_4392_ = v___y_4421_;
v___y_4393_ = v___y_4422_;
v___y_4394_ = v_only_4427_;
v___y_4395_ = v___y_4423_;
v___y_4396_ = v___y_4424_;
v___y_4397_ = v___y_4425_;
v_args_4398_ = v___x_4447_;
v___y_4399_ = v___y_4428_;
v___y_4400_ = v___y_4429_;
v___y_4401_ = v___y_4430_;
v___y_4402_ = v___y_4431_;
v___y_4403_ = v___y_4432_;
v___y_4404_ = v___y_4433_;
v___y_4405_ = v___y_4434_;
v___y_4406_ = v___y_4435_;
goto v___jp_4391_;
}
}
v___jp_4448_:
{
lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; uint8_t v___x_4463_; 
v___x_4460_ = lean_unsigned_to_nat(3u);
v___x_4461_ = l_Lean_Syntax_getArg(v_stx_4188_, v___x_4460_);
lean_dec(v_stx_4188_);
v___x_4462_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__2));
lean_inc(v___x_4461_);
v___x_4463_ = l_Lean_Syntax_isOfKind(v___x_4461_, v___x_4462_);
if (v___x_4463_ == 0)
{
lean_object* v___x_4464_; 
lean_dec(v___x_4461_);
lean_dec(v_unfold_4451_);
lean_dec(v___y_4450_);
lean_dec(v_tk_4359_);
v___x_4464_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4464_;
}
else
{
lean_object* v___x_4465_; lean_object* v___x_4466_; uint8_t v___x_4467_; 
v___x_4465_ = l_Lean_Syntax_getArg(v___x_4461_, v___x_4232_);
v___x_4466_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___closed__8));
lean_inc(v___x_4465_);
v___x_4467_ = l_Lean_Syntax_isOfKind(v___x_4465_, v___x_4466_);
if (v___x_4467_ == 0)
{
lean_object* v___x_4468_; 
lean_dec(v___x_4465_);
lean_dec(v___x_4461_);
lean_dec(v_unfold_4451_);
lean_dec(v___y_4450_);
lean_dec(v_tk_4359_);
v___x_4468_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4468_;
}
else
{
lean_object* v___x_4469_; lean_object* v___x_4470_; uint8_t v___x_4471_; 
v___x_4469_ = l_Lean_Syntax_getArg(v___x_4461_, v___x_4419_);
v___x_4470_ = l_Lean_Syntax_getArg(v___x_4461_, v___y_4449_);
v___x_4471_ = l_Lean_Syntax_isNone(v___x_4470_);
if (v___x_4471_ == 0)
{
uint8_t v___x_4472_; 
lean_inc(v___x_4470_);
v___x_4472_ = l_Lean_Syntax_matchesNull(v___x_4470_, v___x_4419_);
if (v___x_4472_ == 0)
{
lean_object* v___x_4473_; 
lean_dec(v___x_4470_);
lean_dec(v___x_4469_);
lean_dec(v___x_4465_);
lean_dec(v___x_4461_);
lean_dec(v_unfold_4451_);
lean_dec(v___y_4450_);
lean_dec(v_tk_4359_);
v___x_4473_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4473_;
}
else
{
lean_object* v_only_4474_; lean_object* v___x_4475_; 
v_only_4474_ = l_Lean_Syntax_getArg(v___x_4470_, v___x_4232_);
lean_dec(v___x_4470_);
v___x_4475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4475_, 0, v_only_4474_);
v___y_4421_ = v___x_4469_;
v___y_4422_ = v___x_4461_;
v___y_4423_ = v_unfold_4451_;
v___y_4424_ = v___x_4465_;
v___y_4425_ = v___y_4450_;
v___y_4426_ = v___x_4460_;
v_only_4427_ = v___x_4475_;
v___y_4428_ = v___y_4452_;
v___y_4429_ = v___y_4453_;
v___y_4430_ = v___y_4454_;
v___y_4431_ = v___y_4455_;
v___y_4432_ = v___y_4456_;
v___y_4433_ = v___y_4457_;
v___y_4434_ = v___y_4458_;
v___y_4435_ = v___y_4459_;
goto v___jp_4420_;
}
}
else
{
lean_object* v___x_4476_; 
lean_dec(v___x_4470_);
v___x_4476_ = lean_box(0);
v___y_4421_ = v___x_4469_;
v___y_4422_ = v___x_4461_;
v___y_4423_ = v_unfold_4451_;
v___y_4424_ = v___x_4465_;
v___y_4425_ = v___y_4450_;
v___y_4426_ = v___x_4460_;
v_only_4427_ = v___x_4476_;
v___y_4428_ = v___y_4452_;
v___y_4429_ = v___y_4453_;
v___y_4430_ = v___y_4454_;
v___y_4431_ = v___y_4455_;
v___y_4432_ = v___y_4456_;
v___y_4433_ = v___y_4457_;
v___y_4434_ = v___y_4458_;
v___y_4435_ = v___y_4459_;
goto v___jp_4420_;
}
}
}
}
v___jp_4477_:
{
lean_object* v___x_4487_; lean_object* v___x_4488_; uint8_t v___x_4489_; 
v___x_4487_ = lean_unsigned_to_nat(2u);
v___x_4488_ = l_Lean_Syntax_getArg(v_stx_4188_, v___x_4487_);
v___x_4489_ = l_Lean_Syntax_isNone(v___x_4488_);
if (v___x_4489_ == 0)
{
uint8_t v___x_4490_; 
lean_inc(v___x_4488_);
v___x_4490_ = l_Lean_Syntax_matchesNull(v___x_4488_, v___x_4419_);
if (v___x_4490_ == 0)
{
lean_object* v___x_4491_; 
lean_dec(v___x_4488_);
lean_dec(v_squeeze_4478_);
lean_dec(v_tk_4359_);
lean_dec(v_stx_4188_);
v___x_4491_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore_spec__0___redArg();
return v___x_4491_;
}
else
{
lean_object* v_unfold_4492_; lean_object* v___x_4493_; 
v_unfold_4492_ = l_Lean_Syntax_getArg(v___x_4488_, v___x_4232_);
lean_dec(v___x_4488_);
v___x_4493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4493_, 0, v_unfold_4492_);
v___y_4449_ = v___x_4487_;
v___y_4450_ = v_squeeze_4478_;
v_unfold_4451_ = v___x_4493_;
v___y_4452_ = v___y_4479_;
v___y_4453_ = v___y_4480_;
v___y_4454_ = v___y_4481_;
v___y_4455_ = v___y_4482_;
v___y_4456_ = v___y_4483_;
v___y_4457_ = v___y_4484_;
v___y_4458_ = v___y_4485_;
v___y_4459_ = v___y_4486_;
goto v___jp_4448_;
}
}
else
{
lean_object* v___x_4494_; 
lean_dec(v___x_4488_);
v___x_4494_ = lean_box(0);
v___y_4449_ = v___x_4487_;
v___y_4450_ = v_squeeze_4478_;
v_unfold_4451_ = v___x_4494_;
v___y_4452_ = v___y_4479_;
v___y_4453_ = v___y_4480_;
v___y_4454_ = v___y_4481_;
v___y_4455_ = v___y_4482_;
v___y_4456_ = v___y_4483_;
v___y_4457_ = v___y_4484_;
v___y_4458_ = v___y_4485_;
v___y_4459_ = v___y_4486_;
goto v___jp_4448_;
}
}
}
v___jp_4198_:
{
lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; 
lean_inc_ref(v___y_4218_);
v___x_4221_ = l_Array_append___redArg(v___y_4218_, v___y_4220_);
lean_dec_ref(v___y_4220_);
lean_inc_n(v___y_4209_, 2);
lean_inc_n(v___y_4205_, 4);
v___x_4222_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4222_, 0, v___y_4205_);
lean_ctor_set(v___x_4222_, 1, v___y_4209_);
lean_ctor_set(v___x_4222_, 2, v___x_4221_);
v___x_4223_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore___lam__7___closed__5));
v___x_4224_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4224_, 0, v___y_4205_);
lean_ctor_set(v___x_4224_, 1, v___x_4223_);
v___x_4225_ = l_Lean_Syntax_node2(v___y_4205_, v___y_4209_, v___x_4224_, v___y_4219_);
lean_inc(v___y_4214_);
v___x_4226_ = l_Lean_Syntax_node5(v___y_4205_, v___y_4214_, v___y_4217_, v___y_4213_, v___y_4206_, v___x_4222_, v___x_4225_);
lean_inc(v___y_4201_);
v___x_4227_ = l_Lean_Syntax_node4(v___y_4205_, v___y_4201_, v___y_4200_, v___y_4208_, v___y_4215_, v___x_4226_);
v___x_4228_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaCore(v___y_4210_, v___x_4227_, v___y_4199_, v___y_4212_, v___y_4207_, v___y_4204_, v___y_4216_, v___y_4203_, v___y_4202_, v___y_4211_);
return v___x_4228_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___boxed(lean_object* v_stx_4502_, lean_object* v_a_4503_, lean_object* v_a_4504_, lean_object* v_a_4505_, lean_object* v_a_4506_, lean_object* v_a_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_, lean_object* v_a_4510_, lean_object* v_a_4511_){
_start:
{
lean_object* v_res_4512_; 
v_res_4512_ = l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang(v_stx_4502_, v_a_4503_, v_a_4504_, v_a_4505_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
lean_dec(v_a_4510_);
lean_dec_ref(v_a_4509_);
lean_dec(v_a_4508_);
lean_dec_ref(v_a_4507_);
lean_dec(v_a_4506_);
lean_dec_ref(v_a_4505_);
lean_dec(v_a_4504_);
lean_dec_ref(v_a_4503_);
return v_res_4512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1(){
_start:
{
lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___x_4521_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4522_ = ((lean_object*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___closed__0));
v___x_4523_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___closed__1));
v___x_4524_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___boxed), 10, 0);
v___x_4525_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4521_, v___x_4522_, v___x_4523_, v___x_4524_);
return v___x_4525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1___boxed(lean_object* v_a_4526_){
_start:
{
lean_object* v_res_4527_; 
v_res_4527_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1();
return v_res_4527_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_App(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Simpa(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Simpa_0__Lean_initFn_00___x40_Lean_Elab_Tactic_Simpa_2098002731____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_linter_unnecessarySimpa = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_linter_unnecessarySimpa);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpaUsingBang___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpaUsingBang__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Simpa(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Elab_App(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Simpa(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Simpa(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Simpa(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Simpa(builtin);
}
#ifdef __cplusplus
}
#endif
