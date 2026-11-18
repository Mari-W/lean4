// Lean compiler output
// Module: Lean.Meta.LazyDiscrTree
// Imports: public import Lean.Meta.CompletionName public import Lean.Meta.DiscrTree import Init.Omega
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t l_Lean_Meta_DiscrTree_hasNoindexAnnotation(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_reduceDT(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isStrictImplicit(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkNoindexAnnotation(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqLiteral_beq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t l_Lean_Literal_hash(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMatcherAppCore_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedModuleData_default;
lean_object* l_Lean_AsyncConstantInfo_ofConstantInfo(lean_object*);
uint8_t l_Lean_AsyncConstantInfo_isUnsafe(lean_object*);
uint8_t l_Lean_Meta_allowCompletion(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isInternalDetail(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_Meta_Config_toConfigWithKey(lean_object*);
extern lean_object* l_Lean_Options_empty;
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_BaseIO_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_instReprLiteral_repr(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getLocalConstantInfos(lean_object*, uint8_t);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.arrow"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.other"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.star"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.const"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.fvar"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.LazyDiscrTree.Key.lit"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.proj"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Meta_LazyDiscrTree_Key_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_Key_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_Key_instHashable = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "_discr_tree_tmp"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 72, 223, 190, 190, 84, 146, 120)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0 = (const lean_object*)&l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(lean_object*);
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value),LEAN_SCALAR_PTR_LITERAL(50, 34, 112, 179, 66, 45, 192, 92)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2;
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie(lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_initCapacity;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_patternPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_pushArgs___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_patternPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_targetPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_targetPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sorryAx"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 190, 164, 146, 38, 179, 69, 72)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "noConfusionType"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inj"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3_value;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_blacklistInsertion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5;
static const lean_array_object l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_InitResults_append, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Processing failure with "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ":\n  "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "lazy discriminator import initialization"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "build module discriminator tree"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "lazy discriminator local search"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
switch(lean_obj_tag(v_t_5_))
{
case 0:
{
lean_object* v_a_7_; lean_object* v_a_8_; lean_object* v___x_9_; 
v_a_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_7_);
v_a_8_ = lean_ctor_get(v_t_5_, 1);
lean_inc(v_a_8_);
lean_dec_ref_known(v_t_5_, 2);
v___x_9_ = lean_apply_2(v_k_6_, v_a_7_, v_a_8_);
return v___x_9_;
}
case 1:
{
lean_object* v_a_10_; lean_object* v_a_11_; lean_object* v___x_12_; 
v_a_10_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_10_);
v_a_11_ = lean_ctor_get(v_t_5_, 1);
lean_inc(v_a_11_);
lean_dec_ref_known(v_t_5_, 2);
v___x_12_ = lean_apply_2(v_k_6_, v_a_10_, v_a_11_);
return v___x_12_;
}
case 2:
{
lean_object* v_a_13_; lean_object* v___x_14_; 
v_a_13_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_a_13_);
lean_dec_ref_known(v_t_5_, 1);
v___x_14_ = lean_apply_1(v_k_6_, v_a_13_);
return v___x_14_;
}
case 6:
{
lean_object* v_a_15_; lean_object* v_a_16_; lean_object* v_a_17_; lean_object* v___x_18_; 
v_a_15_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_a_15_);
v_a_16_ = lean_ctor_get(v_t_5_, 1);
lean_inc(v_a_16_);
v_a_17_ = lean_ctor_get(v_t_5_, 2);
lean_inc(v_a_17_);
lean_dec_ref_known(v_t_5_, 3);
v___x_18_ = lean_apply_3(v_k_6_, v_a_15_, v_a_16_, v_a_17_);
return v___x_18_;
}
default: 
{
lean_dec(v_t_5_);
return v_k_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_21_, v_k_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___boxed(lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim(v_motive_25_, v_ctorIdx_26_, v_t_27_, v_h_28_, v_k_29_);
lean_dec(v_ctorIdx_26_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim___redArg(lean_object* v_t_31_, lean_object* v_const_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_31_, v_const_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_const_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_35_, v_const_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim___redArg(lean_object* v_t_39_, lean_object* v_fvar_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_39_, v_fvar_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_fvar_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_43_, v_fvar_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim___redArg(lean_object* v_t_47_, lean_object* v_lit_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_47_, v_lit_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim(lean_object* v_motive_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_lit_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_51_, v_lit_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim___redArg(lean_object* v_t_55_, lean_object* v_star_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_55_, v_star_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim(lean_object* v_motive_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_star_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_59_, v_star_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim___redArg(lean_object* v_t_63_, lean_object* v_other_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_63_, v_other_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim(lean_object* v_motive_66_, lean_object* v_t_67_, lean_object* v_h_68_, lean_object* v_other_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_67_, v_other_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim___redArg(lean_object* v_t_71_, lean_object* v_arrow_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_71_, v_arrow_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim(lean_object* v_motive_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_arrow_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_75_, v_arrow_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim___redArg(lean_object* v_t_79_, lean_object* v_proj_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_79_, v_proj_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim(lean_object* v_motive_82_, lean_object* v_t_83_, lean_object* v_h_84_, lean_object* v_proj_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_83_, v_proj_85_);
return v___x_86_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(lean_object* v_x_92_, lean_object* v_x_93_){
_start:
{
switch(lean_obj_tag(v_x_92_))
{
case 0:
{
if (lean_obj_tag(v_x_93_) == 0)
{
lean_object* v_a_94_; lean_object* v_a_95_; lean_object* v_a_96_; lean_object* v_a_97_; uint8_t v___x_98_; 
v_a_94_ = lean_ctor_get(v_x_92_, 0);
v_a_95_ = lean_ctor_get(v_x_92_, 1);
v_a_96_ = lean_ctor_get(v_x_93_, 0);
v_a_97_ = lean_ctor_get(v_x_93_, 1);
v___x_98_ = lean_name_eq(v_a_94_, v_a_96_);
if (v___x_98_ == 0)
{
return v___x_98_;
}
else
{
uint8_t v___x_99_; 
v___x_99_ = lean_nat_dec_eq(v_a_95_, v_a_97_);
return v___x_99_;
}
}
else
{
uint8_t v___x_100_; 
v___x_100_ = 0;
return v___x_100_;
}
}
case 1:
{
if (lean_obj_tag(v_x_93_) == 1)
{
lean_object* v_a_101_; lean_object* v_a_102_; lean_object* v_a_103_; lean_object* v_a_104_; uint8_t v___x_105_; 
v_a_101_ = lean_ctor_get(v_x_92_, 0);
v_a_102_ = lean_ctor_get(v_x_92_, 1);
v_a_103_ = lean_ctor_get(v_x_93_, 0);
v_a_104_ = lean_ctor_get(v_x_93_, 1);
v___x_105_ = l_Lean_instBEqFVarId_beq(v_a_101_, v_a_103_);
if (v___x_105_ == 0)
{
return v___x_105_;
}
else
{
uint8_t v___x_106_; 
v___x_106_ = lean_nat_dec_eq(v_a_102_, v_a_104_);
return v___x_106_;
}
}
else
{
uint8_t v___x_107_; 
v___x_107_ = 0;
return v___x_107_;
}
}
case 2:
{
if (lean_obj_tag(v_x_93_) == 2)
{
lean_object* v_a_108_; lean_object* v_a_109_; uint8_t v___x_110_; 
v_a_108_ = lean_ctor_get(v_x_92_, 0);
v_a_109_ = lean_ctor_get(v_x_93_, 0);
v___x_110_ = l_Lean_instBEqLiteral_beq(v_a_108_, v_a_109_);
return v___x_110_;
}
else
{
uint8_t v___x_111_; 
v___x_111_ = 0;
return v___x_111_;
}
}
case 3:
{
if (lean_obj_tag(v_x_93_) == 3)
{
uint8_t v___x_112_; 
v___x_112_ = 1;
return v___x_112_;
}
else
{
uint8_t v___x_113_; 
v___x_113_ = 0;
return v___x_113_;
}
}
case 4:
{
if (lean_obj_tag(v_x_93_) == 4)
{
uint8_t v___x_114_; 
v___x_114_ = 1;
return v___x_114_;
}
else
{
uint8_t v___x_115_; 
v___x_115_ = 0;
return v___x_115_;
}
}
case 5:
{
if (lean_obj_tag(v_x_93_) == 5)
{
uint8_t v___x_116_; 
v___x_116_ = 1;
return v___x_116_;
}
else
{
uint8_t v___x_117_; 
v___x_117_ = 0;
return v___x_117_;
}
}
default: 
{
if (lean_obj_tag(v_x_93_) == 6)
{
lean_object* v_a_118_; lean_object* v_a_119_; lean_object* v_a_120_; lean_object* v_a_121_; lean_object* v_a_122_; lean_object* v_a_123_; uint8_t v___x_124_; 
v_a_118_ = lean_ctor_get(v_x_92_, 0);
v_a_119_ = lean_ctor_get(v_x_92_, 1);
v_a_120_ = lean_ctor_get(v_x_92_, 2);
v_a_121_ = lean_ctor_get(v_x_93_, 0);
v_a_122_ = lean_ctor_get(v_x_93_, 1);
v_a_123_ = lean_ctor_get(v_x_93_, 2);
v___x_124_ = lean_name_eq(v_a_118_, v_a_121_);
if (v___x_124_ == 0)
{
return v___x_124_;
}
else
{
uint8_t v___x_125_; 
v___x_125_ = lean_nat_dec_eq(v_a_119_, v_a_122_);
if (v___x_125_ == 0)
{
return v___x_125_;
}
else
{
uint8_t v___x_126_; 
v___x_126_ = lean_nat_dec_eq(v_a_120_, v_a_123_);
return v___x_126_;
}
}
}
else
{
uint8_t v___x_127_; 
v___x_127_ = 0;
return v___x_127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed(lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_x_128_, v_x_129_);
lean_dec(v_x_129_);
lean_dec(v_x_128_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_unsigned_to_nat(2u);
v___x_150_ = lean_nat_to_int(v___x_149_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(1u);
v___x_152_ = lean_nat_to_int(v___x_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr(lean_object* v_x_171_, lean_object* v_prec_172_){
_start:
{
lean_object* v___y_174_; lean_object* v___y_181_; lean_object* v___y_188_; 
switch(lean_obj_tag(v_x_171_))
{
case 0:
{
lean_object* v_a_194_; lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_220_; 
v_a_194_ = lean_ctor_get(v_x_171_, 0);
v_a_195_ = lean_ctor_get(v_x_171_, 1);
v_isSharedCheck_220_ = !lean_is_exclusive(v_x_171_);
if (v_isSharedCheck_220_ == 0)
{
v___x_197_ = v_x_171_;
v_isShared_198_ = v_isSharedCheck_220_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_inc(v_a_194_);
lean_dec(v_x_171_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_220_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___y_200_; lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = lean_unsigned_to_nat(1024u);
v___x_217_ = lean_nat_dec_le(v___x_216_, v_prec_172_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; 
v___x_218_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_200_ = v___x_218_;
goto v___jp_199_;
}
else
{
lean_object* v___x_219_; 
v___x_219_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_200_ = v___x_219_;
goto v___jp_199_;
}
v___jp_199_:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_206_; 
v___x_201_ = lean_box(1);
v___x_202_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8));
v___x_203_ = lean_unsigned_to_nat(1024u);
v___x_204_ = l_Lean_Name_reprPrec(v_a_194_, v___x_203_);
if (v_isShared_198_ == 0)
{
lean_ctor_set_tag(v___x_197_, 5);
lean_ctor_set(v___x_197_, 1, v___x_204_);
lean_ctor_set(v___x_197_, 0, v___x_202_);
v___x_206_ = v___x_197_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_202_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v___x_204_);
v___x_206_ = v_reuseFailAlloc_215_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_207_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_201_);
v___x_208_ = l_Nat_reprFast(v_a_195_);
v___x_209_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
v___x_210_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_207_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
lean_inc(v___y_200_);
v___x_211_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_211_, 0, v___y_200_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___x_212_ = 0;
v___x_213_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_213_, 0, v___x_211_);
lean_ctor_set_uint8(v___x_213_, sizeof(void*)*1, v___x_212_);
v___x_214_ = l_Repr_addAppParen(v___x_213_, v_prec_172_);
return v___x_214_;
}
}
}
}
case 1:
{
lean_object* v_a_221_; lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_247_; 
v_a_221_ = lean_ctor_get(v_x_171_, 0);
v_a_222_ = lean_ctor_get(v_x_171_, 1);
v_isSharedCheck_247_ = !lean_is_exclusive(v_x_171_);
if (v_isSharedCheck_247_ == 0)
{
v___x_224_ = v_x_171_;
v_isShared_225_ = v_isSharedCheck_247_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_inc(v_a_221_);
lean_dec(v_x_171_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_247_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___y_227_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_243_ = lean_unsigned_to_nat(1024u);
v___x_244_ = lean_nat_dec_le(v___x_243_, v_prec_172_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; 
v___x_245_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_227_ = v___x_245_;
goto v___jp_226_;
}
else
{
lean_object* v___x_246_; 
v___x_246_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_227_ = v___x_246_;
goto v___jp_226_;
}
v___jp_226_:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_228_ = lean_box(1);
v___x_229_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13));
v___x_230_ = lean_unsigned_to_nat(1024u);
v___x_231_ = l_Lean_Name_reprPrec(v_a_221_, v___x_230_);
if (v_isShared_225_ == 0)
{
lean_ctor_set_tag(v___x_224_, 5);
lean_ctor_set(v___x_224_, 1, v___x_231_);
lean_ctor_set(v___x_224_, 0, v___x_229_);
v___x_233_ = v___x_224_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v___x_231_);
v___x_233_ = v_reuseFailAlloc_242_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___x_228_);
v___x_235_ = l_Nat_reprFast(v_a_222_);
v___x_236_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_234_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
lean_inc(v___y_227_);
v___x_238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_238_, 0, v___y_227_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = 0;
v___x_240_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*1, v___x_239_);
v___x_241_ = l_Repr_addAppParen(v___x_240_, v_prec_172_);
return v___x_241_;
}
}
}
}
case 2:
{
lean_object* v_a_248_; lean_object* v___y_250_; lean_object* v___x_259_; uint8_t v___x_260_; 
v_a_248_ = lean_ctor_get(v_x_171_, 0);
lean_inc_ref(v_a_248_);
lean_dec_ref_known(v_x_171_, 1);
v___x_259_ = lean_unsigned_to_nat(1024u);
v___x_260_ = lean_nat_dec_le(v___x_259_, v_prec_172_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_250_ = v___x_261_;
goto v___jp_249_;
}
else
{
lean_object* v___x_262_; 
v___x_262_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_250_ = v___x_262_;
goto v___jp_249_;
}
v___jp_249_:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_251_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16));
v___x_252_ = lean_unsigned_to_nat(1024u);
v___x_253_ = l_Lean_instReprLiteral_repr(v_a_248_, v___x_252_);
v___x_254_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_251_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
lean_inc(v___y_250_);
v___x_255_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_255_, 0, v___y_250_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = 0;
v___x_257_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_257_, 0, v___x_255_);
lean_ctor_set_uint8(v___x_257_, sizeof(void*)*1, v___x_256_);
v___x_258_ = l_Repr_addAppParen(v___x_257_, v_prec_172_);
return v___x_258_;
}
}
case 3:
{
lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = lean_unsigned_to_nat(1024u);
v___x_264_ = lean_nat_dec_le(v___x_263_, v_prec_172_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; 
v___x_265_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_188_ = v___x_265_;
goto v___jp_187_;
}
else
{
lean_object* v___x_266_; 
v___x_266_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_188_ = v___x_266_;
goto v___jp_187_;
}
}
case 4:
{
lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(1024u);
v___x_268_ = lean_nat_dec_le(v___x_267_, v_prec_172_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
v___x_269_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_181_ = v___x_269_;
goto v___jp_180_;
}
else
{
lean_object* v___x_270_; 
v___x_270_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_181_ = v___x_270_;
goto v___jp_180_;
}
}
case 5:
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = lean_unsigned_to_nat(1024u);
v___x_272_ = lean_nat_dec_le(v___x_271_, v_prec_172_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; 
v___x_273_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_174_ = v___x_273_;
goto v___jp_173_;
}
else
{
lean_object* v___x_274_; 
v___x_274_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_174_ = v___x_274_;
goto v___jp_173_;
}
}
default: 
{
lean_object* v_a_275_; lean_object* v_a_276_; lean_object* v_a_277_; lean_object* v___y_279_; lean_object* v___x_297_; uint8_t v___x_298_; 
v_a_275_ = lean_ctor_get(v_x_171_, 0);
lean_inc(v_a_275_);
v_a_276_ = lean_ctor_get(v_x_171_, 1);
lean_inc(v_a_276_);
v_a_277_ = lean_ctor_get(v_x_171_, 2);
lean_inc(v_a_277_);
lean_dec_ref_known(v_x_171_, 3);
v___x_297_ = lean_unsigned_to_nat(1024u);
v___x_298_ = lean_nat_dec_le(v___x_297_, v_prec_172_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; 
v___x_299_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_279_ = v___x_299_;
goto v___jp_278_;
}
else
{
lean_object* v___x_300_; 
v___x_300_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_279_ = v___x_300_;
goto v___jp_278_;
}
v___jp_278_:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_280_ = lean_box(1);
v___x_281_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19));
v___x_282_ = lean_unsigned_to_nat(1024u);
v___x_283_ = l_Lean_Name_reprPrec(v_a_275_, v___x_282_);
v___x_284_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_281_);
lean_ctor_set(v___x_284_, 1, v___x_283_);
v___x_285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set(v___x_285_, 1, v___x_280_);
v___x_286_ = l_Nat_reprFast(v_a_276_);
v___x_287_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
v___x_288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_285_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
lean_ctor_set(v___x_289_, 1, v___x_280_);
v___x_290_ = l_Nat_reprFast(v_a_277_);
v___x_291_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
v___x_292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_289_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
lean_inc(v___y_279_);
v___x_293_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_293_, 0, v___y_279_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = 0;
v___x_295_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_295_, 0, v___x_293_);
lean_ctor_set_uint8(v___x_295_, sizeof(void*)*1, v___x_294_);
v___x_296_ = l_Repr_addAppParen(v___x_295_, v_prec_172_);
return v___x_296_;
}
}
}
v___jp_173_:
{
lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_175_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1));
lean_inc(v___y_174_);
v___x_176_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_176_, 0, v___y_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = 0;
v___x_178_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set_uint8(v___x_178_, sizeof(void*)*1, v___x_177_);
v___x_179_ = l_Repr_addAppParen(v___x_178_, v_prec_172_);
return v___x_179_;
}
v___jp_180_:
{
lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_182_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3));
lean_inc(v___y_181_);
v___x_183_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_183_, 0, v___y_181_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = 0;
v___x_185_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_185_, 0, v___x_183_);
lean_ctor_set_uint8(v___x_185_, sizeof(void*)*1, v___x_184_);
v___x_186_ = l_Repr_addAppParen(v___x_185_, v_prec_172_);
return v___x_186_;
}
v___jp_187_:
{
lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_189_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5));
lean_inc(v___y_188_);
v___x_190_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_190_, 0, v___y_188_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = 0;
v___x_192_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set_uint8(v___x_192_, sizeof(void*)*1, v___x_191_);
v___x_193_ = l_Repr_addAppParen(v___x_192_, v_prec_172_);
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed(lean_object* v_x_301_, lean_object* v_prec_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lean_Meta_LazyDiscrTree_instReprKey_repr(v_x_301_, v_prec_302_);
lean_dec(v_prec_302_);
return v_res_303_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_LazyDiscrTree_Key_hash(lean_object* v_x_306_){
_start:
{
switch(lean_obj_tag(v_x_306_))
{
case 0:
{
lean_object* v_a_307_; lean_object* v_a_308_; uint64_t v___x_309_; uint64_t v___y_311_; 
v_a_307_ = lean_ctor_get(v_x_306_, 0);
v_a_308_ = lean_ctor_get(v_x_306_, 1);
v___x_309_ = 5237ULL;
if (lean_obj_tag(v_a_307_) == 0)
{
uint64_t v___x_315_; 
v___x_315_ = 1723ULL;
v___y_311_ = v___x_315_;
goto v___jp_310_;
}
else
{
uint64_t v_hash_316_; 
v_hash_316_ = lean_ctor_get_uint64(v_a_307_, sizeof(void*)*2);
v___y_311_ = v_hash_316_;
goto v___jp_310_;
}
v___jp_310_:
{
uint64_t v___x_312_; uint64_t v___x_313_; uint64_t v___x_314_; 
v___x_312_ = lean_uint64_of_nat(v_a_308_);
v___x_313_ = lean_uint64_mix_hash(v___y_311_, v___x_312_);
v___x_314_ = lean_uint64_mix_hash(v___x_309_, v___x_313_);
return v___x_314_;
}
}
case 1:
{
lean_object* v_a_317_; lean_object* v_a_318_; uint64_t v___x_319_; uint64_t v___x_320_; uint64_t v___x_321_; uint64_t v___x_322_; uint64_t v___x_323_; 
v_a_317_ = lean_ctor_get(v_x_306_, 0);
v_a_318_ = lean_ctor_get(v_x_306_, 1);
v___x_319_ = 3541ULL;
v___x_320_ = l_Lean_instHashableFVarId_hash(v_a_317_);
v___x_321_ = lean_uint64_of_nat(v_a_318_);
v___x_322_ = lean_uint64_mix_hash(v___x_320_, v___x_321_);
v___x_323_ = lean_uint64_mix_hash(v___x_319_, v___x_322_);
return v___x_323_;
}
case 2:
{
lean_object* v_a_324_; uint64_t v___x_325_; uint64_t v___x_326_; uint64_t v___x_327_; 
v_a_324_ = lean_ctor_get(v_x_306_, 0);
v___x_325_ = 1879ULL;
v___x_326_ = l_Lean_Literal_hash(v_a_324_);
v___x_327_ = lean_uint64_mix_hash(v___x_325_, v___x_326_);
return v___x_327_;
}
case 3:
{
uint64_t v___x_328_; 
v___x_328_ = 7883ULL;
return v___x_328_;
}
case 4:
{
uint64_t v___x_329_; 
v___x_329_ = 2411ULL;
return v___x_329_;
}
case 5:
{
uint64_t v___x_330_; 
v___x_330_ = 17ULL;
return v___x_330_;
}
default: 
{
lean_object* v_a_331_; lean_object* v_a_332_; lean_object* v_a_333_; uint64_t v___x_334_; uint64_t v___y_336_; 
v_a_331_ = lean_ctor_get(v_x_306_, 0);
v_a_332_ = lean_ctor_get(v_x_306_, 1);
v_a_333_ = lean_ctor_get(v_x_306_, 2);
v___x_334_ = lean_uint64_of_nat(v_a_333_);
if (lean_obj_tag(v_a_331_) == 0)
{
uint64_t v___x_340_; 
v___x_340_ = 1723ULL;
v___y_336_ = v___x_340_;
goto v___jp_335_;
}
else
{
uint64_t v_hash_341_; 
v_hash_341_ = lean_ctor_get_uint64(v_a_331_, sizeof(void*)*2);
v___y_336_ = v_hash_341_;
goto v___jp_335_;
}
v___jp_335_:
{
uint64_t v___x_337_; uint64_t v___x_338_; uint64_t v___x_339_; 
v___x_337_ = lean_uint64_of_nat(v_a_332_);
v___x_338_ = lean_uint64_mix_hash(v___y_336_, v___x_337_);
v___x_339_ = lean_uint64_mix_hash(v___x_334_, v___x_338_);
return v___x_339_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_hash___boxed(lean_object* v_x_342_){
_start:
{
uint64_t v_res_343_; lean_object* v_r_344_; 
v_res_343_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_x_342_);
lean_dec(v_x_342_);
v_r_344_ = lean_box_uint64(v_res_343_);
return v_r_344_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId));
v___x_352_ = l_Lean_mkMVar(v___x_351_);
return v___x_352_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar(void){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0, &l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(lean_object* v_a_354_, lean_object* v_i_355_, lean_object* v_infos_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_362_ = lean_array_get_size(v_infos_356_);
v___x_363_ = lean_nat_dec_lt(v_i_355_, v___x_362_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_Meta_isProof(v_a_354_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
return v___x_364_;
}
else
{
lean_object* v_info_365_; uint8_t v_isInstance_366_; uint8_t v___y_368_; 
v_info_365_ = lean_array_fget_borrowed(v_infos_356_, v_i_355_);
v_isInstance_366_ = lean_ctor_get_uint8(v_info_365_, sizeof(void*)*1 + 4);
if (v_isInstance_366_ == 0)
{
uint8_t v___x_384_; 
v___x_384_ = l_Lean_Meta_ParamInfo_isImplicit(v_info_365_);
if (v___x_384_ == 0)
{
uint8_t v___x_385_; 
v___x_385_ = l_Lean_Meta_ParamInfo_isStrictImplicit(v_info_365_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; 
v___x_386_ = l_Lean_Meta_isProof(v_a_354_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
return v___x_386_;
}
else
{
v___y_368_ = v___x_385_;
goto v___jp_367_;
}
}
else
{
v___y_368_ = v___x_363_;
goto v___jp_367_;
}
}
else
{
lean_object* v___x_387_; lean_object* v___x_388_; 
lean_dec_ref(v_a_354_);
v___x_387_ = lean_box(v___x_363_);
v___x_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
return v___x_388_;
}
v___jp_367_:
{
lean_object* v___x_369_; 
v___x_369_ = l_Lean_Meta_isType(v_a_354_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_383_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_383_ == 0)
{
v___x_372_ = v___x_369_;
v_isShared_373_ = v_isSharedCheck_383_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_369_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_383_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
uint8_t v___x_374_; 
v___x_374_ = lean_unbox(v_a_370_);
lean_dec(v_a_370_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_375_ = lean_box(v___y_368_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_375_);
v___x_377_ = v___x_372_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_375_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
else
{
lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_379_ = lean_box(v_isInstance_366_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_379_);
v___x_381_ = v___x_372_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
else
{
return v___x_369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg___boxed(lean_object* v_a_389_, lean_object* v_i_390_, lean_object* v_infos_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(v_a_389_, v_i_390_, v_infos_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_);
lean_dec(v_a_395_);
lean_dec_ref(v_a_394_);
lean_dec(v_a_393_);
lean_dec_ref(v_a_392_);
lean_dec_ref(v_infos_391_);
lean_dec(v_i_390_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(lean_object* v_infos_398_, lean_object* v_x_399_, lean_object* v_x_400_, lean_object* v_x_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_){
_start:
{
if (lean_obj_tag(v_x_400_) == 5)
{
lean_object* v_fn_407_; lean_object* v_arg_408_; lean_object* v___x_409_; 
v_fn_407_ = lean_ctor_get(v_x_400_, 0);
lean_inc_ref(v_fn_407_);
v_arg_408_ = lean_ctor_get(v_x_400_, 1);
lean_inc_ref_n(v_arg_408_, 2);
lean_dec_ref_known(v_x_400_, 2);
v___x_409_ = l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(v_arg_408_, v_x_399_, v_infos_398_, v_a_402_, v_a_403_, v_a_404_, v_a_405_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; uint8_t v___x_411_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_410_);
lean_dec_ref_known(v___x_409_, 1);
v___x_411_ = lean_unbox(v_a_410_);
lean_dec(v_a_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_412_ = lean_unsigned_to_nat(1u);
v___x_413_ = lean_nat_sub(v_x_399_, v___x_412_);
lean_dec(v_x_399_);
v___x_414_ = lean_array_push(v_x_401_, v_arg_408_);
v_x_399_ = v___x_413_;
v_x_400_ = v_fn_407_;
v_x_401_ = v___x_414_;
goto _start;
}
else
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
lean_dec_ref(v_arg_408_);
v___x_416_ = lean_unsigned_to_nat(1u);
v___x_417_ = lean_nat_sub(v_x_399_, v___x_416_);
lean_dec(v_x_399_);
v___x_418_ = l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar;
v___x_419_ = lean_array_push(v_x_401_, v___x_418_);
v_x_399_ = v___x_417_;
v_x_400_ = v_fn_407_;
v_x_401_ = v___x_419_;
goto _start;
}
}
else
{
lean_object* v_a_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
lean_dec_ref(v_arg_408_);
lean_dec_ref(v_fn_407_);
lean_dec_ref(v_x_401_);
lean_dec(v_x_399_);
v_a_421_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_428_ == 0)
{
v___x_423_ = v___x_409_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_a_421_);
lean_dec(v___x_409_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_421_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
else
{
lean_object* v___x_429_; 
lean_dec_ref(v_x_400_);
lean_dec(v_x_399_);
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v_x_401_);
return v___x_429_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux___boxed(lean_object* v_infos_430_, lean_object* v_x_431_, lean_object* v_x_432_, lean_object* v_x_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(v_infos_430_, v_x_431_, v_x_432_, v_x_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_);
lean_dec(v_a_437_);
lean_dec_ref(v_a_436_);
lean_dec(v_a_435_);
lean_dec_ref(v_a_434_);
lean_dec_ref(v_infos_430_);
return v_res_439_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(lean_object* v_e_454_){
_start:
{
uint8_t v___x_455_; uint8_t v___x_456_; 
v___x_455_ = l_Lean_Expr_isRawNatLit(v_e_454_);
v___x_456_ = 1;
if (v___x_455_ == 0)
{
lean_object* v_f_457_; uint8_t v___x_458_; 
v_f_457_ = l_Lean_Expr_getAppFn(v_e_454_);
v___x_458_ = l_Lean_Expr_isConst(v_f_457_);
if (v___x_458_ == 0)
{
lean_dec_ref(v_f_457_);
lean_dec_ref(v_e_454_);
return v___x_455_;
}
else
{
lean_object* v_fName_459_; lean_object* v___x_477_; uint8_t v___x_478_; 
v_fName_459_ = l_Lean_Expr_constName_x21(v_f_457_);
lean_dec_ref(v_f_457_);
v___x_477_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_478_ = lean_name_eq(v_fName_459_, v___x_477_);
if (v___x_478_ == 0)
{
goto v___jp_466_;
}
else
{
lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_479_ = l_Lean_Expr_getAppNumArgs(v_e_454_);
v___x_480_ = lean_unsigned_to_nat(1u);
v___x_481_ = lean_nat_dec_eq(v___x_479_, v___x_480_);
lean_dec(v___x_479_);
if (v___x_481_ == 0)
{
goto v___jp_466_;
}
else
{
lean_object* v___x_482_; 
lean_dec(v_fName_459_);
v___x_482_ = l_Lean_Expr_appArg_x21(v_e_454_);
lean_dec_ref(v_e_454_);
v_e_454_ = v___x_482_;
goto _start;
}
}
v___jp_460_:
{
lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_461_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2));
v___x_462_ = lean_name_eq(v_fName_459_, v___x_461_);
lean_dec(v_fName_459_);
if (v___x_462_ == 0)
{
lean_dec_ref(v_e_454_);
return v___x_455_;
}
else
{
lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_463_ = l_Lean_Expr_getAppNumArgs(v_e_454_);
lean_dec_ref(v_e_454_);
v___x_464_ = lean_unsigned_to_nat(0u);
v___x_465_ = lean_nat_dec_eq(v___x_463_, v___x_464_);
lean_dec(v___x_463_);
if (v___x_465_ == 0)
{
return v___x_465_;
}
else
{
return v___x_456_;
}
}
}
v___jp_466_:
{
lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_467_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5));
v___x_468_ = lean_name_eq(v_fName_459_, v___x_467_);
if (v___x_468_ == 0)
{
goto v___jp_460_;
}
else
{
lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_469_ = l_Lean_Expr_getAppNumArgs(v_e_454_);
v___x_470_ = lean_unsigned_to_nat(3u);
v___x_471_ = lean_nat_dec_eq(v___x_469_, v___x_470_);
if (v___x_471_ == 0)
{
lean_dec(v___x_469_);
goto v___jp_460_;
}
else
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec(v_fName_459_);
v___x_472_ = lean_unsigned_to_nat(1u);
v___x_473_ = lean_nat_sub(v___x_469_, v___x_472_);
lean_dec(v___x_469_);
v___x_474_ = lean_nat_sub(v___x_473_, v___x_472_);
lean_dec(v___x_473_);
v___x_475_ = l_Lean_Expr_getRevArg_x21(v_e_454_, v___x_474_);
lean_dec_ref(v_e_454_);
v_e_454_ = v___x_475_;
goto _start;
}
}
}
}
}
else
{
lean_dec_ref(v_e_454_);
return v___x_456_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___boxed(lean_object* v_e_484_){
_start:
{
uint8_t v_res_485_; lean_object* v_r_486_; 
v_res_485_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v_e_484_);
v_r_486_ = lean_box(v_res_485_);
return v_r_486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(lean_object* v_e_489_){
_start:
{
lean_object* v_f_490_; 
v_f_490_ = l_Lean_Expr_getAppFn(v_e_489_);
switch(lean_obj_tag(v_f_490_))
{
case 9:
{
lean_object* v_a_491_; 
lean_dec_ref(v_e_489_);
v_a_491_ = lean_ctor_get(v_f_490_, 0);
lean_inc_ref(v_a_491_);
lean_dec_ref_known(v_f_490_, 1);
if (lean_obj_tag(v_a_491_) == 0)
{
lean_object* v_val_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
v_val_492_ = lean_ctor_get(v_a_491_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v_a_491_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v_a_491_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_val_492_);
lean_dec(v_a_491_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
lean_ctor_set_tag(v___x_494_, 1);
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_val_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
else
{
lean_object* v___x_500_; 
lean_dec_ref(v_a_491_);
v___x_500_ = lean_box(0);
return v___x_500_;
}
}
case 4:
{
lean_object* v_declName_501_; lean_object* v___x_522_; uint8_t v___x_523_; 
v_declName_501_ = lean_ctor_get(v_f_490_, 0);
lean_inc(v_declName_501_);
lean_dec_ref_known(v_f_490_, 2);
v___x_522_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_523_ = lean_name_eq(v_declName_501_, v___x_522_);
if (v___x_523_ == 0)
{
goto v___jp_511_;
}
else
{
lean_object* v___x_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_524_ = l_Lean_Expr_getAppNumArgs(v_e_489_);
v___x_525_ = lean_unsigned_to_nat(1u);
v___x_526_ = lean_nat_dec_eq(v___x_524_, v___x_525_);
lean_dec(v___x_524_);
if (v___x_526_ == 0)
{
goto v___jp_511_;
}
else
{
lean_object* v___x_527_; lean_object* v___x_528_; 
lean_dec(v_declName_501_);
v___x_527_ = l_Lean_Expr_appArg_x21(v_e_489_);
lean_dec_ref(v_e_489_);
v___x_528_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(v___x_527_);
if (lean_obj_tag(v___x_528_) == 0)
{
return v___x_528_;
}
else
{
lean_object* v_val_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_537_; 
v_val_529_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_537_ == 0)
{
v___x_531_ = v___x_528_;
v_isShared_532_ = v_isSharedCheck_537_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_val_529_);
lean_dec(v___x_528_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_537_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_533_; lean_object* v___x_535_; 
v___x_533_ = lean_nat_add(v_val_529_, v___x_525_);
lean_dec(v_val_529_);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 0, v___x_533_);
v___x_535_ = v___x_531_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v___x_533_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
}
}
v___jp_502_:
{
lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_503_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2));
v___x_504_ = lean_name_eq(v_declName_501_, v___x_503_);
lean_dec(v_declName_501_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
lean_dec_ref(v_e_489_);
v___x_505_ = lean_box(0);
return v___x_505_;
}
else
{
lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_506_ = l_Lean_Expr_getAppNumArgs(v_e_489_);
lean_dec_ref(v_e_489_);
v___x_507_ = lean_unsigned_to_nat(0u);
v___x_508_ = lean_nat_dec_eq(v___x_506_, v___x_507_);
lean_dec(v___x_506_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; 
v___x_509_ = lean_box(0);
return v___x_509_;
}
else
{
lean_object* v___x_510_; 
v___x_510_ = ((lean_object*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0));
return v___x_510_;
}
}
}
v___jp_511_:
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5));
v___x_513_ = lean_name_eq(v_declName_501_, v___x_512_);
if (v___x_513_ == 0)
{
goto v___jp_502_;
}
else
{
lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
v___x_514_ = l_Lean_Expr_getAppNumArgs(v_e_489_);
v___x_515_ = lean_unsigned_to_nat(3u);
v___x_516_ = lean_nat_dec_eq(v___x_514_, v___x_515_);
if (v___x_516_ == 0)
{
lean_dec(v___x_514_);
goto v___jp_502_;
}
else
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
lean_dec(v_declName_501_);
v___x_517_ = lean_unsigned_to_nat(1u);
v___x_518_ = lean_nat_sub(v___x_514_, v___x_517_);
lean_dec(v___x_514_);
v___x_519_ = lean_nat_sub(v___x_518_, v___x_517_);
lean_dec(v___x_518_);
v___x_520_ = l_Lean_Expr_getRevArg_x21(v_e_489_, v___x_519_);
lean_dec_ref(v_e_489_);
v_e_489_ = v___x_520_;
goto _start;
}
}
}
}
default: 
{
lean_object* v___x_538_; 
lean_dec_ref(v_f_490_);
lean_dec_ref(v_e_489_);
v___x_538_ = lean_box(0);
return v___x_538_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(lean_object* v_e_539_){
_start:
{
uint8_t v___x_540_; 
lean_inc_ref(v_e_539_);
v___x_540_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v_e_539_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; 
lean_dec_ref(v_e_539_);
v___x_541_ = lean_box(0);
return v___x_541_;
}
else
{
lean_object* v___x_542_; 
v___x_542_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(v_e_539_);
if (lean_obj_tag(v___x_542_) == 1)
{
lean_object* v_val_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_551_; 
v_val_543_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_551_ == 0)
{
v___x_545_ = v___x_542_;
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_val_543_);
lean_dec(v___x_542_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_547_, 0, v_val_543_);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 0, v___x_547_);
v___x_549_ = v___x_545_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
else
{
lean_object* v___x_552_; 
lean_dec(v___x_542_);
v___x_552_ = lean_box(0);
return v___x_552_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(lean_object* v_e_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_){
_start:
{
lean_object* v___x_561_; 
lean_inc(v_a_559_);
lean_inc_ref(v_a_558_);
lean_inc(v_a_557_);
lean_inc_ref(v_a_556_);
v___x_561_ = lean_whnf(v_e_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_572_; 
v_a_562_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_572_ == 0)
{
v___x_564_ = v___x_561_;
v_isShared_565_ = v_isSharedCheck_572_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_561_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_572_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; uint8_t v___x_567_; lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_566_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0));
v___x_567_ = l_Lean_Expr_isConstOf(v_a_562_, v___x_566_);
lean_dec(v_a_562_);
v___x_568_ = lean_box(v___x_567_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 0, v___x_568_);
v___x_570_ = v___x_564_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_568_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
v_a_573_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_561_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_561_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___boxed(lean_object* v_e_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v_e_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
lean_dec(v_a_585_);
lean_dec_ref(v_a_584_);
lean_dec(v_a_583_);
lean_dec_ref(v_a_582_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(lean_object* v_fName_601_, lean_object* v_e_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_){
_start:
{
lean_object* v___x_665_; uint8_t v___x_666_; 
v___x_665_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6));
v___x_666_ = lean_name_eq(v_fName_601_, v___x_665_);
if (v___x_666_ == 0)
{
goto v___jp_642_;
}
else
{
lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_667_ = l_Lean_Expr_getAppNumArgs(v_e_602_);
v___x_668_ = lean_unsigned_to_nat(2u);
v___x_669_ = lean_nat_dec_eq(v___x_667_, v___x_668_);
lean_dec(v___x_667_);
if (v___x_669_ == 0)
{
goto v___jp_642_;
}
else
{
lean_object* v___x_670_; uint8_t v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_670_ = l_Lean_Expr_appArg_x21(v_e_602_);
v___x_671_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v___x_670_);
v___x_672_ = lean_box(v___x_671_);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
return v___x_673_;
}
}
v___jp_608_:
{
lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_609_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_610_ = lean_name_eq(v_fName_601_, v___x_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_box(v___x_610_);
v___x_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
return v___x_612_;
}
else
{
lean_object* v___x_613_; lean_object* v___x_614_; uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_613_ = l_Lean_Expr_getAppNumArgs(v_e_602_);
v___x_614_ = lean_unsigned_to_nat(1u);
v___x_615_ = lean_nat_dec_eq(v___x_613_, v___x_614_);
lean_dec(v___x_613_);
v___x_616_ = lean_box(v___x_615_);
v___x_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
return v___x_617_;
}
}
v___jp_618_:
{
lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_619_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2));
v___x_620_ = lean_name_eq(v_fName_601_, v___x_619_);
if (v___x_620_ == 0)
{
goto v___jp_608_;
}
else
{
lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_621_ = l_Lean_Expr_getAppNumArgs(v_e_602_);
v___x_622_ = lean_unsigned_to_nat(6u);
v___x_623_ = lean_nat_dec_eq(v___x_621_, v___x_622_);
if (v___x_623_ == 0)
{
lean_dec(v___x_621_);
goto v___jp_608_;
}
else
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_624_ = lean_unsigned_to_nat(1u);
v___x_625_ = lean_nat_sub(v___x_621_, v___x_624_);
lean_dec(v___x_621_);
v___x_626_ = lean_nat_sub(v___x_625_, v___x_624_);
lean_dec(v___x_625_);
v___x_627_ = l_Lean_Expr_getRevArg_x21(v_e_602_, v___x_626_);
v___x_628_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v___x_627_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; uint8_t v___x_630_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
v___x_630_ = lean_unbox(v_a_629_);
if (v___x_630_ == 0)
{
return v___x_628_;
}
else
{
lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_640_; 
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_640_ == 0)
{
lean_object* v_unused_641_; 
v_unused_641_ = lean_ctor_get(v___x_628_, 0);
lean_dec(v_unused_641_);
v___x_632_ = v___x_628_;
v_isShared_633_ = v_isSharedCheck_640_;
goto v_resetjp_631_;
}
else
{
lean_dec(v___x_628_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_640_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_634_; uint8_t v___x_635_; lean_object* v___x_636_; lean_object* v___x_638_; 
v___x_634_ = l_Lean_Expr_appArg_x21(v_e_602_);
v___x_635_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v___x_634_);
v___x_636_ = lean_box(v___x_635_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v___x_636_);
v___x_638_ = v___x_632_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
else
{
return v___x_628_;
}
}
}
}
v___jp_642_:
{
lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_643_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5));
v___x_644_ = lean_name_eq(v_fName_601_, v___x_643_);
if (v___x_644_ == 0)
{
goto v___jp_618_;
}
else
{
lean_object* v___x_645_; lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_645_ = l_Lean_Expr_getAppNumArgs(v_e_602_);
v___x_646_ = lean_unsigned_to_nat(4u);
v___x_647_ = lean_nat_dec_eq(v___x_645_, v___x_646_);
if (v___x_647_ == 0)
{
lean_dec(v___x_645_);
goto v___jp_618_;
}
else
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_648_ = lean_unsigned_to_nat(1u);
v___x_649_ = lean_nat_sub(v___x_645_, v___x_648_);
lean_dec(v___x_645_);
v___x_650_ = l_Lean_Expr_getRevArg_x21(v_e_602_, v___x_649_);
v___x_651_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v___x_650_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; uint8_t v___x_653_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
v___x_653_ = lean_unbox(v_a_652_);
if (v___x_653_ == 0)
{
return v___x_651_;
}
else
{
lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_663_; 
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_663_ == 0)
{
lean_object* v_unused_664_; 
v_unused_664_ = lean_ctor_get(v___x_651_, 0);
lean_dec(v_unused_664_);
v___x_655_ = v___x_651_;
v_isShared_656_ = v_isSharedCheck_663_;
goto v_resetjp_654_;
}
else
{
lean_dec(v___x_651_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_663_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_657_; uint8_t v___x_658_; lean_object* v___x_659_; lean_object* v___x_661_; 
v___x_657_ = l_Lean_Expr_appArg_x21(v_e_602_);
v___x_658_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v___x_657_);
v___x_659_ = lean_box(v___x_658_);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 0, v___x_659_);
v___x_661_ = v___x_655_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_659_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
else
{
return v___x_651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___boxed(lean_object* v_fName_674_, lean_object* v_e_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_fName_674_, v_e_675_, v_a_676_, v_a_677_, v_a_678_, v_a_679_);
lean_dec(v_a_679_);
lean_dec_ref(v_a_678_);
lean_dec(v_a_677_);
lean_dec_ref(v_a_676_);
lean_dec_ref(v_e_675_);
lean_dec(v_fName_674_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(lean_object* v_fName_682_, lean_object* v_e_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_fName_682_, v_e_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar___boxed(lean_object* v_fName_690_, lean_object* v_e_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(v_fName_690_, v_e_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_);
lean_dec(v_a_695_);
lean_dec_ref(v_a_694_);
lean_dec(v_a_693_);
lean_dec_ref(v_a_692_);
lean_dec_ref(v_e_691_);
lean_dec(v_fName_690_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(lean_object* v_e_700_, lean_object* v___y_701_, lean_object* v___y_702_){
_start:
{
uint8_t v___x_704_; 
v___x_704_ = l_Lean_Expr_hasLooseBVars(v_e_700_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_705_, 0, v_e_700_);
v___x_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
return v___x_706_;
}
else
{
uint8_t v___x_707_; uint8_t v___x_708_; 
v___x_707_ = 0;
v___x_708_ = l_Lean_Expr_isHeadBetaTarget(v_e_700_, v___x_707_);
if (v___x_708_ == 0)
{
lean_object* v___x_709_; lean_object* v___x_710_; 
lean_dec_ref(v_e_700_);
v___x_709_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0));
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
return v___x_710_;
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_711_ = l_Lean_Expr_headBeta(v_e_700_);
v___x_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
v___x_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
return v___x_713_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed(lean_object* v_e_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(v_e_714_, v___y_715_, v___y_716_);
lean_dec(v___y_716_);
lean_dec_ref(v___y_715_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(lean_object* v_e_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v_e_719_);
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed(lean_object* v_e_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(v_e_725_, v___y_726_, v___y_727_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
return v_res_729_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_730_ = lean_box(0);
v___x_731_ = l_Lean_interruptExceptionId;
v___x_732_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_731_);
lean_ctor_set(v___x_732_, 1, v___x_730_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg(){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___closed__0);
v___x_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object* v___y_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
return v_res_737_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_743_ = l_Lean_maxRecDepthErrorMessage;
v___x_744_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_744_, 0, v___x_743_);
return v___x_744_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_746_ = l_Lean_MessageData_ofFormat(v___x_745_);
return v___x_746_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_747_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_748_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2));
v___x_749_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
lean_ctor_set(v___x_749_, 1, v___x_747_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_750_){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_752_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_753_, 0, v_ref_750_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
v___x_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_755_, lean_object* v___y_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_755_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(lean_object* v_x_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
lean_object* v___y_764_; uint8_t v___y_774_; uint16_t v___y_775_; lean_object* v___y_776_; lean_object* v___y_777_; lean_object* v___y_778_; uint8_t v___y_779_; lean_object* v_toCold_784_; lean_object* v_currRecDepth_785_; lean_object* v_ref_786_; uint16_t v_optionFlags_787_; uint8_t v_suppressElabErrors_788_; uint8_t v_isRecordingDeps_789_; lean_object* v_maxRecDepth_790_; lean_object* v_cancelTk_x3f_791_; 
v_toCold_784_ = lean_ctor_get(v___y_760_, 0);
v_currRecDepth_785_ = lean_ctor_get(v___y_760_, 1);
v_ref_786_ = lean_ctor_get(v___y_760_, 2);
v_optionFlags_787_ = lean_ctor_get_uint16(v___y_760_, sizeof(void*)*3);
v_suppressElabErrors_788_ = lean_ctor_get_uint8(v___y_760_, sizeof(void*)*3 + 2);
v_isRecordingDeps_789_ = lean_ctor_get_uint8(v___y_760_, sizeof(void*)*3 + 3);
v_maxRecDepth_790_ = lean_ctor_get(v_toCold_784_, 3);
v_cancelTk_x3f_791_ = lean_ctor_get(v_toCold_784_, 10);
if (lean_obj_tag(v_cancelTk_x3f_791_) == 1)
{
lean_object* v_val_797_; uint8_t v___x_798_; 
v_val_797_ = lean_ctor_get(v_cancelTk_x3f_791_, 0);
v___x_798_ = l_IO_CancelToken_isSet(v_val_797_);
if (v___x_798_ == 0)
{
goto v___jp_792_;
}
else
{
lean_object* v___x_799_; lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_dec_ref(v_x_758_);
v___x_799_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
v_a_800_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_799_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_799_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
else
{
goto v___jp_792_;
}
v___jp_763_:
{
if (lean_obj_tag(v___y_764_) == 0)
{
return v___y_764_;
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
v_a_765_ = lean_ctor_get(v___y_764_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___y_764_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___y_764_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___y_764_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
v___jp_773_:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_780_ = lean_unsigned_to_nat(1u);
v___x_781_ = lean_nat_add(v___y_777_, v___x_780_);
lean_inc_ref(v___y_776_);
v___x_782_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_782_, 0, v___y_776_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
lean_ctor_set(v___x_782_, 2, v___y_778_);
lean_ctor_set_uint16(v___x_782_, sizeof(void*)*3, v___y_775_);
lean_ctor_set_uint8(v___x_782_, sizeof(void*)*3 + 2, v___y_774_);
lean_ctor_set_uint8(v___x_782_, sizeof(void*)*3 + 3, v___y_779_);
lean_inc(v___y_761_);
lean_inc(v___y_759_);
v___x_783_ = lean_apply_4(v_x_758_, v___y_759_, v___x_782_, v___y_761_, lean_box(0));
v___y_764_ = v___x_783_;
goto v___jp_763_;
}
v___jp_792_:
{
lean_object* v___x_793_; uint8_t v___x_794_; 
v___x_793_ = lean_unsigned_to_nat(0u);
v___x_794_ = lean_nat_dec_eq(v_maxRecDepth_790_, v___x_793_);
if (v___x_794_ == 0)
{
uint8_t v___x_795_; 
v___x_795_ = lean_nat_dec_eq(v_currRecDepth_785_, v_maxRecDepth_790_);
if (v___x_795_ == 0)
{
lean_inc(v_ref_786_);
v___y_774_ = v_suppressElabErrors_788_;
v___y_775_ = v_optionFlags_787_;
v___y_776_ = v_toCold_784_;
v___y_777_ = v_currRecDepth_785_;
v___y_778_ = v_ref_786_;
v___y_779_ = v_isRecordingDeps_789_;
goto v___jp_773_;
}
else
{
lean_object* v___x_796_; 
lean_dec_ref(v_x_758_);
lean_inc(v_ref_786_);
v___x_796_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_786_);
v___y_764_ = v___x_796_;
goto v___jp_763_;
}
}
else
{
lean_inc(v_ref_786_);
v___y_774_ = v_suppressElabErrors_788_;
v___y_775_ = v_optionFlags_787_;
v___y_776_ = v_toCold_784_;
v___y_777_ = v_currRecDepth_785_;
v___y_778_ = v_ref_786_;
v___y_779_ = v_isRecordingDeps_789_;
goto v___jp_773_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v_x_808_, v___y_809_, v___y_810_, v___y_811_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_814_, lean_object* v_x_815_){
_start:
{
if (lean_obj_tag(v_x_815_) == 0)
{
lean_object* v___x_816_; 
v___x_816_ = lean_box(0);
return v___x_816_;
}
else
{
lean_object* v_key_817_; lean_object* v_value_818_; lean_object* v_tail_819_; uint8_t v___x_820_; 
v_key_817_ = lean_ctor_get(v_x_815_, 0);
v_value_818_ = lean_ctor_get(v_x_815_, 1);
v_tail_819_ = lean_ctor_get(v_x_815_, 2);
v___x_820_ = l_Lean_ExprStructEq_beq(v_key_817_, v_a_814_);
if (v___x_820_ == 0)
{
v_x_815_ = v_tail_819_;
goto _start;
}
else
{
lean_object* v___x_822_; 
lean_inc(v_value_818_);
v___x_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_822_, 0, v_value_818_);
return v___x_822_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_823_, lean_object* v_x_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(v_a_823_, v_x_824_);
lean_dec(v_x_824_);
lean_dec_ref(v_a_823_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(lean_object* v_m_826_, lean_object* v_a_827_){
_start:
{
lean_object* v_buckets_828_; lean_object* v___x_829_; uint64_t v___x_830_; uint64_t v___x_831_; uint64_t v___x_832_; uint64_t v_fold_833_; uint64_t v___x_834_; uint64_t v___x_835_; uint64_t v___x_836_; size_t v___x_837_; size_t v___x_838_; size_t v___x_839_; size_t v___x_840_; size_t v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v_buckets_828_ = lean_ctor_get(v_m_826_, 1);
v___x_829_ = lean_array_get_size(v_buckets_828_);
v___x_830_ = l_Lean_ExprStructEq_hash(v_a_827_);
v___x_831_ = 32ULL;
v___x_832_ = lean_uint64_shift_right(v___x_830_, v___x_831_);
v_fold_833_ = lean_uint64_xor(v___x_830_, v___x_832_);
v___x_834_ = 16ULL;
v___x_835_ = lean_uint64_shift_right(v_fold_833_, v___x_834_);
v___x_836_ = lean_uint64_xor(v_fold_833_, v___x_835_);
v___x_837_ = lean_uint64_to_usize(v___x_836_);
v___x_838_ = lean_usize_of_nat(v___x_829_);
v___x_839_ = ((size_t)1ULL);
v___x_840_ = lean_usize_sub(v___x_838_, v___x_839_);
v___x_841_ = lean_usize_land(v___x_837_, v___x_840_);
v___x_842_ = lean_array_uget_borrowed(v_buckets_828_, v___x_841_);
v___x_843_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(v_a_827_, v___x_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_844_, lean_object* v_a_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(v_m_844_, v_a_845_);
lean_dec_ref(v_a_845_);
lean_dec_ref(v_m_844_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(lean_object* v_a_847_, lean_object* v_b_848_, lean_object* v_x_849_){
_start:
{
if (lean_obj_tag(v_x_849_) == 0)
{
lean_dec(v_b_848_);
lean_dec_ref(v_a_847_);
return v_x_849_;
}
else
{
lean_object* v_key_850_; lean_object* v_value_851_; lean_object* v_tail_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_864_; 
v_key_850_ = lean_ctor_get(v_x_849_, 0);
v_value_851_ = lean_ctor_get(v_x_849_, 1);
v_tail_852_ = lean_ctor_get(v_x_849_, 2);
v_isSharedCheck_864_ = !lean_is_exclusive(v_x_849_);
if (v_isSharedCheck_864_ == 0)
{
v___x_854_ = v_x_849_;
v_isShared_855_ = v_isSharedCheck_864_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_tail_852_);
lean_inc(v_value_851_);
lean_inc(v_key_850_);
lean_dec(v_x_849_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_864_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
uint8_t v___x_856_; 
v___x_856_ = l_Lean_ExprStructEq_beq(v_key_850_, v_a_847_);
if (v___x_856_ == 0)
{
lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_857_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(v_a_847_, v_b_848_, v_tail_852_);
if (v_isShared_855_ == 0)
{
lean_ctor_set(v___x_854_, 2, v___x_857_);
v___x_859_ = v___x_854_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_key_850_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v_value_851_);
lean_ctor_set(v_reuseFailAlloc_860_, 2, v___x_857_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
else
{
lean_object* v___x_862_; 
lean_dec(v_value_851_);
lean_dec(v_key_850_);
if (v_isShared_855_ == 0)
{
lean_ctor_set(v___x_854_, 1, v_b_848_);
lean_ctor_set(v___x_854_, 0, v_a_847_);
v___x_862_ = v___x_854_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_847_);
lean_ctor_set(v_reuseFailAlloc_863_, 1, v_b_848_);
lean_ctor_set(v_reuseFailAlloc_863_, 2, v_tail_852_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object* v_x_865_, lean_object* v_x_866_){
_start:
{
if (lean_obj_tag(v_x_866_) == 0)
{
return v_x_865_;
}
else
{
lean_object* v_key_867_; lean_object* v_value_868_; lean_object* v_tail_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_892_; 
v_key_867_ = lean_ctor_get(v_x_866_, 0);
v_value_868_ = lean_ctor_get(v_x_866_, 1);
v_tail_869_ = lean_ctor_get(v_x_866_, 2);
v_isSharedCheck_892_ = !lean_is_exclusive(v_x_866_);
if (v_isSharedCheck_892_ == 0)
{
v___x_871_ = v_x_866_;
v_isShared_872_ = v_isSharedCheck_892_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_tail_869_);
lean_inc(v_value_868_);
lean_inc(v_key_867_);
lean_dec(v_x_866_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_892_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_873_; uint64_t v___x_874_; uint64_t v___x_875_; uint64_t v___x_876_; uint64_t v_fold_877_; uint64_t v___x_878_; uint64_t v___x_879_; uint64_t v___x_880_; size_t v___x_881_; size_t v___x_882_; size_t v___x_883_; size_t v___x_884_; size_t v___x_885_; lean_object* v___x_886_; lean_object* v___x_888_; 
v___x_873_ = lean_array_get_size(v_x_865_);
v___x_874_ = l_Lean_ExprStructEq_hash(v_key_867_);
v___x_875_ = 32ULL;
v___x_876_ = lean_uint64_shift_right(v___x_874_, v___x_875_);
v_fold_877_ = lean_uint64_xor(v___x_874_, v___x_876_);
v___x_878_ = 16ULL;
v___x_879_ = lean_uint64_shift_right(v_fold_877_, v___x_878_);
v___x_880_ = lean_uint64_xor(v_fold_877_, v___x_879_);
v___x_881_ = lean_uint64_to_usize(v___x_880_);
v___x_882_ = lean_usize_of_nat(v___x_873_);
v___x_883_ = ((size_t)1ULL);
v___x_884_ = lean_usize_sub(v___x_882_, v___x_883_);
v___x_885_ = lean_usize_land(v___x_881_, v___x_884_);
v___x_886_ = lean_array_uget_borrowed(v_x_865_, v___x_885_);
lean_inc(v___x_886_);
if (v_isShared_872_ == 0)
{
lean_ctor_set(v___x_871_, 2, v___x_886_);
v___x_888_ = v___x_871_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_key_867_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v_value_868_);
lean_ctor_set(v_reuseFailAlloc_891_, 2, v___x_886_);
v___x_888_ = v_reuseFailAlloc_891_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
lean_object* v___x_889_; 
v___x_889_ = lean_array_uset(v_x_865_, v___x_885_, v___x_888_);
v_x_865_ = v___x_889_;
v_x_866_ = v_tail_869_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object* v_i_893_, lean_object* v_source_894_, lean_object* v_target_895_){
_start:
{
lean_object* v___x_896_; uint8_t v___x_897_; 
v___x_896_ = lean_array_get_size(v_source_894_);
v___x_897_ = lean_nat_dec_lt(v_i_893_, v___x_896_);
if (v___x_897_ == 0)
{
lean_dec_ref(v_source_894_);
lean_dec(v_i_893_);
return v_target_895_;
}
else
{
lean_object* v_es_898_; lean_object* v___x_899_; lean_object* v_source_900_; lean_object* v_target_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v_es_898_ = lean_array_fget(v_source_894_, v_i_893_);
v___x_899_ = lean_box(0);
v_source_900_ = lean_array_fset(v_source_894_, v_i_893_, v___x_899_);
v_target_901_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_target_895_, v_es_898_);
v___x_902_ = lean_unsigned_to_nat(1u);
v___x_903_ = lean_nat_add(v_i_893_, v___x_902_);
lean_dec(v_i_893_);
v_i_893_ = v___x_903_;
v_source_894_ = v_source_900_;
v_target_895_ = v_target_901_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_data_905_){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v_nbuckets_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_906_ = lean_array_get_size(v_data_905_);
v___x_907_ = lean_unsigned_to_nat(2u);
v_nbuckets_908_ = lean_nat_mul(v___x_906_, v___x_907_);
v___x_909_ = lean_unsigned_to_nat(0u);
v___x_910_ = lean_box(0);
v___x_911_ = lean_mk_array(v_nbuckets_908_, v___x_910_);
v___x_912_ = lean_array_propagate_mark(v_data_905_, v___x_911_);
v___x_913_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v___x_909_, v_data_905_, v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_a_914_, lean_object* v_x_915_){
_start:
{
if (lean_obj_tag(v_x_915_) == 0)
{
uint8_t v___x_916_; 
v___x_916_ = 0;
return v___x_916_;
}
else
{
lean_object* v_key_917_; lean_object* v_tail_918_; uint8_t v___x_919_; 
v_key_917_ = lean_ctor_get(v_x_915_, 0);
v_tail_918_ = lean_ctor_get(v_x_915_, 2);
v___x_919_ = l_Lean_ExprStructEq_beq(v_key_917_, v_a_914_);
if (v___x_919_ == 0)
{
v_x_915_ = v_tail_918_;
goto _start;
}
else
{
return v___x_919_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object* v_a_921_, lean_object* v_x_922_){
_start:
{
uint8_t v_res_923_; lean_object* v_r_924_; 
v_res_923_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(v_a_921_, v_x_922_);
lean_dec(v_x_922_);
lean_dec_ref(v_a_921_);
v_r_924_ = lean_box(v_res_923_);
return v_r_924_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(lean_object* v_m_925_, lean_object* v_a_926_, lean_object* v_b_927_){
_start:
{
lean_object* v_size_928_; lean_object* v_buckets_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_972_; 
v_size_928_ = lean_ctor_get(v_m_925_, 0);
v_buckets_929_ = lean_ctor_get(v_m_925_, 1);
v_isSharedCheck_972_ = !lean_is_exclusive(v_m_925_);
if (v_isSharedCheck_972_ == 0)
{
v___x_931_ = v_m_925_;
v_isShared_932_ = v_isSharedCheck_972_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_buckets_929_);
lean_inc(v_size_928_);
lean_dec(v_m_925_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_972_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_933_; uint64_t v___x_934_; uint64_t v___x_935_; uint64_t v___x_936_; uint64_t v_fold_937_; uint64_t v___x_938_; uint64_t v___x_939_; uint64_t v___x_940_; size_t v___x_941_; size_t v___x_942_; size_t v___x_943_; size_t v___x_944_; size_t v___x_945_; lean_object* v_bkt_946_; uint8_t v___x_947_; 
v___x_933_ = lean_array_get_size(v_buckets_929_);
v___x_934_ = l_Lean_ExprStructEq_hash(v_a_926_);
v___x_935_ = 32ULL;
v___x_936_ = lean_uint64_shift_right(v___x_934_, v___x_935_);
v_fold_937_ = lean_uint64_xor(v___x_934_, v___x_936_);
v___x_938_ = 16ULL;
v___x_939_ = lean_uint64_shift_right(v_fold_937_, v___x_938_);
v___x_940_ = lean_uint64_xor(v_fold_937_, v___x_939_);
v___x_941_ = lean_uint64_to_usize(v___x_940_);
v___x_942_ = lean_usize_of_nat(v___x_933_);
v___x_943_ = ((size_t)1ULL);
v___x_944_ = lean_usize_sub(v___x_942_, v___x_943_);
v___x_945_ = lean_usize_land(v___x_941_, v___x_944_);
v_bkt_946_ = lean_array_uget_borrowed(v_buckets_929_, v___x_945_);
v___x_947_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(v_a_926_, v_bkt_946_);
if (v___x_947_ == 0)
{
lean_object* v___x_948_; lean_object* v_size_x27_949_; lean_object* v___x_950_; lean_object* v_buckets_x27_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_948_ = lean_unsigned_to_nat(1u);
v_size_x27_949_ = lean_nat_add(v_size_928_, v___x_948_);
lean_dec(v_size_928_);
lean_inc(v_bkt_946_);
v___x_950_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_950_, 0, v_a_926_);
lean_ctor_set(v___x_950_, 1, v_b_927_);
lean_ctor_set(v___x_950_, 2, v_bkt_946_);
v_buckets_x27_951_ = lean_array_uset(v_buckets_929_, v___x_945_, v___x_950_);
v___x_952_ = lean_unsigned_to_nat(4u);
v___x_953_ = lean_nat_mul(v_size_x27_949_, v___x_952_);
v___x_954_ = lean_unsigned_to_nat(3u);
v___x_955_ = lean_nat_div(v___x_953_, v___x_954_);
lean_dec(v___x_953_);
v___x_956_ = lean_array_get_size(v_buckets_x27_951_);
v___x_957_ = lean_nat_dec_le(v___x_955_, v___x_956_);
lean_dec(v___x_955_);
if (v___x_957_ == 0)
{
lean_object* v_val_958_; lean_object* v___x_960_; 
v_val_958_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(v_buckets_x27_951_);
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 1, v_val_958_);
lean_ctor_set(v___x_931_, 0, v_size_x27_949_);
v___x_960_ = v___x_931_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_size_x27_949_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v_val_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
else
{
lean_object* v___x_963_; 
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 1, v_buckets_x27_951_);
lean_ctor_set(v___x_931_, 0, v_size_x27_949_);
v___x_963_ = v___x_931_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_size_x27_949_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_buckets_x27_951_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
else
{
lean_object* v___x_965_; lean_object* v_buckets_x27_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_970_; 
lean_inc(v_bkt_946_);
v___x_965_ = lean_box(0);
v_buckets_x27_966_ = lean_array_uset(v_buckets_929_, v___x_945_, v___x_965_);
v___x_967_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(v_a_926_, v_b_927_, v_bkt_946_);
v___x_968_ = lean_array_uset(v_buckets_x27_966_, v___x_945_, v___x_967_);
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 1, v___x_968_);
v___x_970_ = v___x_931_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_size_928_);
lean_ctor_set(v_reuseFailAlloc_971_, 1, v___x_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(lean_object* v_a_973_, lean_object* v_e_974_, lean_object* v_a_975_){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_977_ = lean_st_ref_take(v_a_973_);
v___x_978_ = lean_box(0);
v___x_979_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(v___x_977_, v_e_974_, v_a_975_);
v___x_980_ = lean_st_ref_put(v_a_973_, v___x_979_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed(lean_object* v_a_981_, lean_object* v_e_982_, lean_object* v_a_983_, lean_object* v___y_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(v_a_981_, v_e_982_, v_a_983_);
lean_dec(v_a_981_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_986_, lean_object* v_x_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = lean_apply_1(v_x_987_, lean_box(0));
v___x_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_993_, lean_object* v_x_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(v_00_u03b1_993_, v_x_994_, v___y_995_, v___y_996_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
return v_res_998_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1000_; lean_object* v_dummy_1001_; 
v___x_1000_ = lean_box(0);
v_dummy_1001_ = l_Lean_Expr_sort___override(v___x_1000_);
return v_dummy_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(lean_object* v_pre_1002_, lean_object* v_post_1003_, size_t v_sz_1004_, size_t v_i_1005_, lean_object* v_bs_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
uint8_t v___x_1011_; 
v___x_1011_ = lean_usize_dec_lt(v_i_1005_, v_sz_1004_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; 
lean_dec_ref(v_post_1003_);
lean_dec_ref(v_pre_1002_);
v___x_1012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1012_, 0, v_bs_1006_);
return v___x_1012_;
}
else
{
lean_object* v_v_1013_; lean_object* v___x_1014_; lean_object* v_bs_x27_1015_; lean_object* v___x_1016_; 
v_v_1013_ = lean_array_uget(v_bs_1006_, v_i_1005_);
v___x_1014_ = lean_unsigned_to_nat(0u);
v_bs_x27_1015_ = lean_array_uset(v_bs_1006_, v_i_1005_, v___x_1014_);
lean_inc_ref(v_post_1003_);
lean_inc_ref(v_pre_1002_);
v___x_1016_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1002_, v_post_1003_, v_v_1013_, v___y_1007_, v___y_1008_, v___y_1009_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v_a_1017_; size_t v___x_1018_; size_t v___x_1019_; lean_object* v___x_1020_; 
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
lean_inc(v_a_1017_);
lean_dec_ref_known(v___x_1016_, 1);
v___x_1018_ = ((size_t)1ULL);
v___x_1019_ = lean_usize_add(v_i_1005_, v___x_1018_);
v___x_1020_ = lean_array_uset(v_bs_x27_1015_, v_i_1005_, v_a_1017_);
v_i_1005_ = v___x_1019_;
v_bs_1006_ = v___x_1020_;
goto _start;
}
else
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
lean_dec_ref(v_bs_x27_1015_);
lean_dec_ref(v_post_1003_);
lean_dec_ref(v_pre_1002_);
v_a_1022_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_1016_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1016_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(lean_object* v_pre_1030_, lean_object* v_post_1031_, lean_object* v_x_1032_, lean_object* v_x_1033_, lean_object* v_x_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_){
_start:
{
if (lean_obj_tag(v_x_1032_) == 5)
{
lean_object* v_fn_1039_; lean_object* v_arg_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v_fn_1039_ = lean_ctor_get(v_x_1032_, 0);
lean_inc_ref(v_fn_1039_);
v_arg_1040_ = lean_ctor_get(v_x_1032_, 1);
lean_inc_ref(v_arg_1040_);
lean_dec_ref_known(v_x_1032_, 2);
v___x_1041_ = lean_array_set(v_x_1033_, v_x_1034_, v_arg_1040_);
v___x_1042_ = lean_unsigned_to_nat(1u);
v___x_1043_ = lean_nat_sub(v_x_1034_, v___x_1042_);
lean_dec(v_x_1034_);
v_x_1032_ = v_fn_1039_;
v_x_1033_ = v___x_1041_;
v_x_1034_ = v___x_1043_;
goto _start;
}
else
{
lean_object* v___x_1045_; 
lean_dec(v_x_1034_);
lean_inc_ref(v_post_1031_);
lean_inc_ref(v_pre_1030_);
v___x_1045_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1030_, v_post_1031_, v_x_1032_, v___y_1035_, v___y_1036_, v___y_1037_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; size_t v_sz_1047_; size_t v___x_1048_; lean_object* v___x_1049_; 
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
lean_inc(v_a_1046_);
lean_dec_ref_known(v___x_1045_, 1);
v_sz_1047_ = lean_array_size(v_x_1033_);
v___x_1048_ = ((size_t)0ULL);
lean_inc_ref(v_post_1031_);
lean_inc_ref(v_pre_1030_);
v___x_1049_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(v_pre_1030_, v_post_1031_, v_sz_1047_, v___x_1048_, v_x_1033_, v___y_1035_, v___y_1036_, v___y_1037_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_a_1050_);
lean_dec_ref_known(v___x_1049_, 1);
v___x_1051_ = l_Lean_mkAppN(v_a_1046_, v_a_1050_);
lean_dec(v_a_1050_);
v___x_1052_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1030_, v_post_1031_, v___x_1051_, v___y_1035_, v___y_1036_, v___y_1037_);
return v___x_1052_;
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1060_; 
lean_dec(v_a_1046_);
lean_dec_ref(v_post_1031_);
lean_dec_ref(v_pre_1030_);
v_a_1053_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1055_ = v___x_1049_;
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1049_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1058_; 
if (v_isShared_1056_ == 0)
{
v___x_1058_ = v___x_1055_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_a_1053_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
else
{
lean_dec_ref(v_x_1033_);
lean_dec_ref(v_post_1031_);
lean_dec_ref(v_pre_1030_);
return v___x_1045_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(lean_object* v___x_1061_, lean_object* v_pre_1062_, lean_object* v_e_1063_, lean_object* v_post_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = l_Lean_Core_checkSystem(v___x_1061_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1069_) == 0)
{
lean_object* v___x_1070_; 
lean_dec_ref_known(v___x_1069_, 1);
lean_inc_ref(v_pre_1062_);
lean_inc(v___y_1067_);
lean_inc_ref(v___y_1066_);
lean_inc_ref(v_e_1063_);
v___x_1070_ = lean_apply_4(v_pre_1062_, v_e_1063_, v___y_1066_, v___y_1067_, lean_box(0));
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1186_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1073_ = v___x_1070_;
v_isShared_1074_ = v_isSharedCheck_1186_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1070_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1186_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___y_1076_; 
switch(lean_obj_tag(v_a_1071_))
{
case 0:
{
lean_object* v_e_1176_; lean_object* v___x_1178_; 
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_e_1063_);
lean_dec_ref(v_pre_1062_);
v_e_1176_ = lean_ctor_get(v_a_1071_, 0);
lean_inc_ref(v_e_1176_);
lean_dec_ref_known(v_a_1071_, 1);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 0, v_e_1176_);
v___x_1178_ = v___x_1073_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_e_1176_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
case 1:
{
lean_object* v_e_1180_; lean_object* v___x_1181_; 
lean_del_object(v___x_1073_);
lean_dec_ref(v_e_1063_);
v_e_1180_ = lean_ctor_get(v_a_1071_, 0);
lean_inc_ref(v_e_1180_);
lean_dec_ref_known(v_a_1071_, 1);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1181_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_e_1180_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1182_; lean_object* v___x_1183_; 
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
lean_inc(v_a_1182_);
lean_dec_ref_known(v___x_1181_, 1);
v___x_1183_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v_a_1182_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1183_;
}
else
{
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1181_;
}
}
default: 
{
lean_object* v_e_x3f_1184_; 
lean_del_object(v___x_1073_);
v_e_x3f_1184_ = lean_ctor_get(v_a_1071_, 0);
lean_inc(v_e_x3f_1184_);
lean_dec_ref_known(v_a_1071_, 1);
if (lean_obj_tag(v_e_x3f_1184_) == 0)
{
v___y_1076_ = v_e_1063_;
goto v___jp_1075_;
}
else
{
lean_object* v_val_1185_; 
lean_dec_ref(v_e_1063_);
v_val_1185_ = lean_ctor_get(v_e_x3f_1184_, 0);
lean_inc(v_val_1185_);
lean_dec_ref_known(v_e_x3f_1184_, 1);
v___y_1076_ = v_val_1185_;
goto v___jp_1075_;
}
}
}
v___jp_1075_:
{
switch(lean_obj_tag(v___y_1076_))
{
case 7:
{
lean_object* v_binderName_1077_; lean_object* v_binderType_1078_; lean_object* v_body_1079_; uint8_t v_binderInfo_1080_; lean_object* v___x_1081_; 
v_binderName_1077_ = lean_ctor_get(v___y_1076_, 0);
v_binderType_1078_ = lean_ctor_get(v___y_1076_, 1);
v_body_1079_ = lean_ctor_get(v___y_1076_, 2);
v_binderInfo_1080_ = lean_ctor_get_uint8(v___y_1076_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1078_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1081_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_binderType_1078_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1083_; 
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc(v_a_1082_);
lean_dec_ref_known(v___x_1081_, 1);
lean_inc_ref(v_body_1079_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1083_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_body_1079_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; size_t v___x_1085_; size_t v___x_1086_; uint8_t v___x_1087_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
v___x_1085_ = lean_ptr_addr(v_binderType_1078_);
v___x_1086_ = lean_ptr_addr(v_a_1082_);
v___x_1087_ = lean_usize_dec_eq(v___x_1085_, v___x_1086_);
if (v___x_1087_ == 0)
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
lean_inc(v_binderName_1077_);
lean_dec_ref_known(v___y_1076_, 3);
v___x_1088_ = l_Lean_Expr_forallE___override(v_binderName_1077_, v_a_1082_, v_a_1084_, v_binderInfo_1080_);
v___x_1089_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1088_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1089_;
}
else
{
size_t v___x_1090_; size_t v___x_1091_; uint8_t v___x_1092_; 
v___x_1090_ = lean_ptr_addr(v_body_1079_);
v___x_1091_ = lean_ptr_addr(v_a_1084_);
v___x_1092_ = lean_usize_dec_eq(v___x_1090_, v___x_1091_);
if (v___x_1092_ == 0)
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
lean_inc(v_binderName_1077_);
lean_dec_ref_known(v___y_1076_, 3);
v___x_1093_ = l_Lean_Expr_forallE___override(v_binderName_1077_, v_a_1082_, v_a_1084_, v_binderInfo_1080_);
v___x_1094_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1093_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1094_;
}
else
{
uint8_t v___x_1095_; 
v___x_1095_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1080_, v_binderInfo_1080_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_inc(v_binderName_1077_);
lean_dec_ref_known(v___y_1076_, 3);
v___x_1096_ = l_Lean_Expr_forallE___override(v_binderName_1077_, v_a_1082_, v_a_1084_, v_binderInfo_1080_);
v___x_1097_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1096_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1097_;
}
else
{
lean_object* v___x_1098_; 
lean_dec(v_a_1084_);
lean_dec(v_a_1082_);
v___x_1098_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1076_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1098_;
}
}
}
}
else
{
lean_dec(v_a_1082_);
lean_dec_ref_known(v___y_1076_, 3);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1083_;
}
}
else
{
lean_dec_ref_known(v___y_1076_, 3);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1081_;
}
}
case 6:
{
lean_object* v_binderName_1099_; lean_object* v_binderType_1100_; lean_object* v_body_1101_; uint8_t v_binderInfo_1102_; lean_object* v___x_1103_; 
v_binderName_1099_ = lean_ctor_get(v___y_1076_, 0);
v_binderType_1100_ = lean_ctor_get(v___y_1076_, 1);
v_body_1101_ = lean_ctor_get(v___y_1076_, 2);
v_binderInfo_1102_ = lean_ctor_get_uint8(v___y_1076_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1100_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1103_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_binderType_1100_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; lean_object* v___x_1105_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1104_);
lean_dec_ref_known(v___x_1103_, 1);
lean_inc_ref(v_body_1101_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1105_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_body_1101_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; size_t v___x_1107_; size_t v___x_1108_; uint8_t v___x_1109_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
lean_inc(v_a_1106_);
lean_dec_ref_known(v___x_1105_, 1);
v___x_1107_ = lean_ptr_addr(v_binderType_1100_);
v___x_1108_ = lean_ptr_addr(v_a_1104_);
v___x_1109_ = lean_usize_dec_eq(v___x_1107_, v___x_1108_);
if (v___x_1109_ == 0)
{
lean_object* v___x_1110_; lean_object* v___x_1111_; 
lean_inc(v_binderName_1099_);
lean_dec_ref_known(v___y_1076_, 3);
v___x_1110_ = l_Lean_Expr_lam___override(v_binderName_1099_, v_a_1104_, v_a_1106_, v_binderInfo_1102_);
v___x_1111_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1110_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1111_;
}
else
{
size_t v___x_1112_; size_t v___x_1113_; uint8_t v___x_1114_; 
v___x_1112_ = lean_ptr_addr(v_body_1101_);
v___x_1113_ = lean_ptr_addr(v_a_1106_);
v___x_1114_ = lean_usize_dec_eq(v___x_1112_, v___x_1113_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
lean_inc(v_binderName_1099_);
lean_dec_ref_known(v___y_1076_, 3);
v___x_1115_ = l_Lean_Expr_lam___override(v_binderName_1099_, v_a_1104_, v_a_1106_, v_binderInfo_1102_);
v___x_1116_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1115_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1116_;
}
else
{
uint8_t v___x_1117_; 
v___x_1117_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1102_, v_binderInfo_1102_);
if (v___x_1117_ == 0)
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
lean_inc(v_binderName_1099_);
lean_dec_ref_known(v___y_1076_, 3);
v___x_1118_ = l_Lean_Expr_lam___override(v_binderName_1099_, v_a_1104_, v_a_1106_, v_binderInfo_1102_);
v___x_1119_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1118_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1119_;
}
else
{
lean_object* v___x_1120_; 
lean_dec(v_a_1106_);
lean_dec(v_a_1104_);
v___x_1120_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1076_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1120_;
}
}
}
}
else
{
lean_dec(v_a_1104_);
lean_dec_ref_known(v___y_1076_, 3);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1105_;
}
}
else
{
lean_dec_ref_known(v___y_1076_, 3);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1103_;
}
}
case 8:
{
lean_object* v_declName_1121_; lean_object* v_type_1122_; lean_object* v_value_1123_; lean_object* v_body_1124_; uint8_t v_nondep_1125_; lean_object* v___x_1126_; 
v_declName_1121_ = lean_ctor_get(v___y_1076_, 0);
v_type_1122_ = lean_ctor_get(v___y_1076_, 1);
v_value_1123_ = lean_ctor_get(v___y_1076_, 2);
v_body_1124_ = lean_ctor_get(v___y_1076_, 3);
v_nondep_1125_ = lean_ctor_get_uint8(v___y_1076_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1122_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1126_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_type_1122_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; lean_object* v___x_1128_; 
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
lean_inc(v_a_1127_);
lean_dec_ref_known(v___x_1126_, 1);
lean_inc_ref(v_value_1123_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1128_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_value_1123_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v_a_1129_; lean_object* v___x_1130_; 
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_a_1129_);
lean_dec_ref_known(v___x_1128_, 1);
lean_inc_ref(v_body_1124_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1130_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_body_1124_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v_a_1131_; size_t v___x_1132_; size_t v___x_1133_; uint8_t v___x_1134_; 
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_a_1131_);
lean_dec_ref_known(v___x_1130_, 1);
v___x_1132_ = lean_ptr_addr(v_type_1122_);
v___x_1133_ = lean_ptr_addr(v_a_1127_);
v___x_1134_ = lean_usize_dec_eq(v___x_1132_, v___x_1133_);
if (v___x_1134_ == 0)
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
lean_inc(v_declName_1121_);
lean_dec_ref_known(v___y_1076_, 4);
v___x_1135_ = l_Lean_Expr_letE___override(v_declName_1121_, v_a_1127_, v_a_1129_, v_a_1131_, v_nondep_1125_);
v___x_1136_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1135_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1136_;
}
else
{
size_t v___x_1137_; size_t v___x_1138_; uint8_t v___x_1139_; 
v___x_1137_ = lean_ptr_addr(v_value_1123_);
v___x_1138_ = lean_ptr_addr(v_a_1129_);
v___x_1139_ = lean_usize_dec_eq(v___x_1137_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
lean_inc(v_declName_1121_);
lean_dec_ref_known(v___y_1076_, 4);
v___x_1140_ = l_Lean_Expr_letE___override(v_declName_1121_, v_a_1127_, v_a_1129_, v_a_1131_, v_nondep_1125_);
v___x_1141_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1140_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1141_;
}
else
{
size_t v___x_1142_; size_t v___x_1143_; uint8_t v___x_1144_; 
v___x_1142_ = lean_ptr_addr(v_body_1124_);
v___x_1143_ = lean_ptr_addr(v_a_1131_);
v___x_1144_ = lean_usize_dec_eq(v___x_1142_, v___x_1143_);
if (v___x_1144_ == 0)
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
lean_inc(v_declName_1121_);
lean_dec_ref_known(v___y_1076_, 4);
v___x_1145_ = l_Lean_Expr_letE___override(v_declName_1121_, v_a_1127_, v_a_1129_, v_a_1131_, v_nondep_1125_);
v___x_1146_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1145_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1146_;
}
else
{
lean_object* v___x_1147_; 
lean_dec(v_a_1131_);
lean_dec(v_a_1129_);
lean_dec(v_a_1127_);
v___x_1147_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1076_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1147_;
}
}
}
}
else
{
lean_dec(v_a_1129_);
lean_dec(v_a_1127_);
lean_dec_ref_known(v___y_1076_, 4);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1130_;
}
}
else
{
lean_dec(v_a_1127_);
lean_dec_ref_known(v___y_1076_, 4);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1128_;
}
}
else
{
lean_dec_ref_known(v___y_1076_, 4);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1126_;
}
}
case 5:
{
lean_object* v_dummy_1148_; lean_object* v_nargs_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v_dummy_1148_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0);
v_nargs_1149_ = l_Lean_Expr_getAppNumArgs(v___y_1076_);
lean_inc(v_nargs_1149_);
v___x_1150_ = lean_mk_array(v_nargs_1149_, v_dummy_1148_);
v___x_1151_ = lean_unsigned_to_nat(1u);
v___x_1152_ = lean_nat_sub(v_nargs_1149_, v___x_1151_);
lean_dec(v_nargs_1149_);
v___x_1153_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(v_pre_1062_, v_post_1064_, v___y_1076_, v___x_1150_, v___x_1152_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1153_;
}
case 10:
{
lean_object* v_data_1154_; lean_object* v_expr_1155_; lean_object* v___x_1156_; 
v_data_1154_ = lean_ctor_get(v___y_1076_, 0);
v_expr_1155_ = lean_ctor_get(v___y_1076_, 1);
lean_inc_ref(v_expr_1155_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1156_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_expr_1155_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; size_t v___x_1158_; size_t v___x_1159_; uint8_t v___x_1160_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1157_);
lean_dec_ref_known(v___x_1156_, 1);
v___x_1158_ = lean_ptr_addr(v_expr_1155_);
v___x_1159_ = lean_ptr_addr(v_a_1157_);
v___x_1160_ = lean_usize_dec_eq(v___x_1158_, v___x_1159_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
lean_inc(v_data_1154_);
lean_dec_ref_known(v___y_1076_, 2);
v___x_1161_ = l_Lean_Expr_mdata___override(v_data_1154_, v_a_1157_);
v___x_1162_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1161_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1162_;
}
else
{
lean_object* v___x_1163_; 
lean_dec(v_a_1157_);
v___x_1163_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1076_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1163_;
}
}
else
{
lean_dec_ref_known(v___y_1076_, 2);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1156_;
}
}
case 11:
{
lean_object* v_typeName_1164_; lean_object* v_idx_1165_; lean_object* v_struct_1166_; lean_object* v___x_1167_; 
v_typeName_1164_ = lean_ctor_get(v___y_1076_, 0);
v_idx_1165_ = lean_ctor_get(v___y_1076_, 1);
v_struct_1166_ = lean_ctor_get(v___y_1076_, 2);
lean_inc_ref(v_struct_1166_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1167_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_struct_1166_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v_a_1168_; size_t v___x_1169_; size_t v___x_1170_; uint8_t v___x_1171_; 
v_a_1168_ = lean_ctor_get(v___x_1167_, 0);
lean_inc(v_a_1168_);
lean_dec_ref_known(v___x_1167_, 1);
v___x_1169_ = lean_ptr_addr(v_struct_1166_);
v___x_1170_ = lean_ptr_addr(v_a_1168_);
v___x_1171_ = lean_usize_dec_eq(v___x_1169_, v___x_1170_);
if (v___x_1171_ == 0)
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
lean_inc(v_idx_1165_);
lean_inc(v_typeName_1164_);
lean_dec_ref_known(v___y_1076_, 3);
v___x_1172_ = l_Lean_Expr_proj___override(v_typeName_1164_, v_idx_1165_, v_a_1168_);
v___x_1173_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1172_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1173_;
}
else
{
lean_object* v___x_1174_; 
lean_dec(v_a_1168_);
v___x_1174_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1076_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1174_;
}
}
else
{
lean_dec_ref_known(v___y_1076_, 3);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1167_;
}
}
default: 
{
lean_object* v___x_1175_; 
v___x_1175_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1076_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1175_;
}
}
}
}
}
else
{
lean_object* v_a_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1194_; 
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_e_1063_);
lean_dec_ref(v_pre_1062_);
v_a_1187_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1189_ = v___x_1070_;
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_a_1187_);
lean_dec(v___x_1070_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v___x_1192_; 
if (v_isShared_1190_ == 0)
{
v___x_1192_ = v___x_1189_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_a_1187_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
}
else
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1202_; 
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_e_1063_);
lean_dec_ref(v_pre_1062_);
v_a_1195_ = lean_ctor_get(v___x_1069_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1069_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1197_ = v___x_1069_;
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v___x_1069_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
if (v_isShared_1198_ == 0)
{
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1195_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed(lean_object* v___x_1203_, lean_object* v_pre_1204_, lean_object* v_e_1205_, lean_object* v_post_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(v___x_1203_, v_pre_1204_, v_e_1205_, v_post_1206_, v___y_1207_, v___y_1208_, v___y_1209_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(lean_object* v_pre_1212_, lean_object* v_post_1213_, lean_object* v_e_1214_, lean_object* v_a_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; 
lean_inc(v_a_1215_);
v___x_1219_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1219_, 0, lean_box(0));
lean_closure_set(v___x_1219_, 1, lean_box(0));
lean_closure_set(v___x_1219_, 2, v_a_1215_);
v___x_1220_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_box(0), v___x_1219_, v___y_1216_, v___y_1217_);
if (lean_obj_tag(v___x_1220_) == 0)
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1252_; 
v_a_1221_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1223_ = v___x_1220_;
v_isShared_1224_ = v_isSharedCheck_1252_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1220_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1252_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1225_; 
v___x_1225_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(v_a_1221_, v_e_1214_);
lean_dec(v_a_1221_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_object* v___x_1226_; lean_object* v___f_1227_; lean_object* v___x_1228_; 
lean_del_object(v___x_1223_);
v___x_1226_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___closed__0));
lean_inc_ref(v_e_1214_);
v___f_1227_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed), 8, 4);
lean_closure_set(v___f_1227_, 0, v___x_1226_);
lean_closure_set(v___f_1227_, 1, v_pre_1212_);
lean_closure_set(v___f_1227_, 2, v_e_1214_);
lean_closure_set(v___f_1227_, 3, v_post_1213_);
v___x_1228_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v___f_1227_, v_a_1215_, v___y_1216_, v___y_1217_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v___f_1230_; lean_object* v___x_1231_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc_n(v_a_1229_, 2);
lean_dec_ref_known(v___x_1228_, 1);
lean_inc(v_a_1215_);
v___f_1230_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1230_, 0, v_a_1215_);
lean_closure_set(v___f_1230_, 1, v_e_1214_);
lean_closure_set(v___f_1230_, 2, v_a_1229_);
v___x_1231_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_box(0), v___f_1230_, v___y_1216_, v___y_1217_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1238_; 
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1238_ == 0)
{
lean_object* v_unused_1239_; 
v_unused_1239_ = lean_ctor_get(v___x_1231_, 0);
lean_dec(v_unused_1239_);
v___x_1233_ = v___x_1231_;
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
else
{
lean_dec(v___x_1231_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1236_; 
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 0, v_a_1229_);
v___x_1236_ = v___x_1233_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_a_1229_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
else
{
lean_object* v_a_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1247_; 
lean_dec(v_a_1229_);
v_a_1240_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1242_ = v___x_1231_;
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_a_1240_);
lean_dec(v___x_1231_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
if (v_isShared_1243_ == 0)
{
v___x_1245_ = v___x_1242_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v_a_1240_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
}
}
else
{
lean_dec_ref(v_e_1214_);
return v___x_1228_;
}
}
else
{
lean_object* v_val_1248_; lean_object* v___x_1250_; 
lean_dec_ref(v_e_1214_);
lean_dec_ref(v_post_1213_);
lean_dec_ref(v_pre_1212_);
v_val_1248_ = lean_ctor_get(v___x_1225_, 0);
lean_inc(v_val_1248_);
lean_dec_ref_known(v___x_1225_, 1);
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 0, v_val_1248_);
v___x_1250_ = v___x_1223_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_val_1248_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
}
else
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
lean_dec_ref(v_e_1214_);
lean_dec_ref(v_post_1213_);
lean_dec_ref(v_pre_1212_);
v_a_1253_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1220_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1220_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(lean_object* v_pre_1261_, lean_object* v_post_1262_, lean_object* v_e_1263_, lean_object* v_a_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v___x_1268_; 
lean_inc_ref(v_post_1262_);
lean_inc(v___y_1266_);
lean_inc_ref(v___y_1265_);
lean_inc_ref(v_e_1263_);
v___x_1268_ = lean_apply_4(v_post_1262_, v_e_1263_, v___y_1265_, v___y_1266_, lean_box(0));
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1287_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1271_ = v___x_1268_;
v_isShared_1272_ = v_isSharedCheck_1287_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1268_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1287_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
switch(lean_obj_tag(v_a_1269_))
{
case 0:
{
lean_object* v_e_1273_; lean_object* v___x_1275_; 
lean_dec_ref(v_e_1263_);
lean_dec_ref(v_post_1262_);
lean_dec_ref(v_pre_1261_);
v_e_1273_ = lean_ctor_get(v_a_1269_, 0);
lean_inc_ref(v_e_1273_);
lean_dec_ref_known(v_a_1269_, 1);
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v_e_1273_);
v___x_1275_ = v___x_1271_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_e_1273_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
case 1:
{
lean_object* v_e_1277_; lean_object* v___x_1278_; 
lean_del_object(v___x_1271_);
lean_dec_ref(v_e_1263_);
v_e_1277_ = lean_ctor_get(v_a_1269_, 0);
lean_inc_ref(v_e_1277_);
lean_dec_ref_known(v_a_1269_, 1);
v___x_1278_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1261_, v_post_1262_, v_e_1277_, v_a_1264_, v___y_1265_, v___y_1266_);
return v___x_1278_;
}
default: 
{
lean_object* v_e_x3f_1279_; 
lean_dec_ref(v_post_1262_);
lean_dec_ref(v_pre_1261_);
v_e_x3f_1279_ = lean_ctor_get(v_a_1269_, 0);
lean_inc(v_e_x3f_1279_);
lean_dec_ref_known(v_a_1269_, 1);
if (lean_obj_tag(v_e_x3f_1279_) == 0)
{
lean_object* v___x_1281_; 
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v_e_1263_);
v___x_1281_ = v___x_1271_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_e_1263_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
else
{
lean_object* v_val_1283_; lean_object* v___x_1285_; 
lean_dec_ref(v_e_1263_);
v_val_1283_ = lean_ctor_get(v_e_x3f_1279_, 0);
lean_inc(v_val_1283_);
lean_dec_ref_known(v_e_x3f_1279_, 1);
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v_val_1283_);
v___x_1285_ = v___x_1271_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_val_1283_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
}
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1295_; 
lean_dec_ref(v_e_1263_);
lean_dec_ref(v_post_1262_);
lean_dec_ref(v_pre_1261_);
v_a_1288_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1290_ = v___x_1268_;
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v___x_1268_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1293_; 
if (v_isShared_1291_ == 0)
{
v___x_1293_ = v___x_1290_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_a_1288_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_1296_, lean_object* v_post_1297_, lean_object* v_e_1298_, lean_object* v_a_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1296_, v_post_1297_, v_e_1298_, v_a_1299_, v___y_1300_, v___y_1301_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec(v_a_1299_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_1304_, lean_object* v_post_1305_, lean_object* v_sz_1306_, lean_object* v_i_1307_, lean_object* v_bs_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
size_t v_sz_boxed_1313_; size_t v_i_boxed_1314_; lean_object* v_res_1315_; 
v_sz_boxed_1313_ = lean_unbox_usize(v_sz_1306_);
lean_dec(v_sz_1306_);
v_i_boxed_1314_ = lean_unbox_usize(v_i_1307_);
lean_dec(v_i_1307_);
v_res_1315_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(v_pre_1304_, v_post_1305_, v_sz_boxed_1313_, v_i_boxed_1314_, v_bs_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v___y_1309_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_1316_, lean_object* v_post_1317_, lean_object* v_x_1318_, lean_object* v_x_1319_, lean_object* v_x_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(v_pre_1316_, v_post_1317_, v_x_1318_, v_x_1319_, v_x_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
lean_dec(v___y_1323_);
lean_dec_ref(v___y_1322_);
lean_dec(v___y_1321_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___boxed(lean_object* v_pre_1326_, lean_object* v_post_1327_, lean_object* v_e_1328_, lean_object* v_a_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_){
_start:
{
lean_object* v_res_1333_; 
v_res_1333_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1326_, v_post_1327_, v_e_1328_, v_a_1329_, v___y_1330_, v___y_1331_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
lean_dec(v_a_1329_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_object* v_00_u03b1_1334_, lean_object* v_x_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = lean_apply_1(v_x_1335_, lean_box(0));
v___x_1340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1341_, lean_object* v_x_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(v_00_u03b1_1341_, v_x_1342_, v___y_1343_, v___y_1344_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
return v_res_1346_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1347_ = lean_box(0);
v___x_1348_ = lean_unsigned_to_nat(16u);
v___x_1349_ = lean_mk_array(v___x_1348_, v___x_1347_);
return v___x_1349_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1350_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0);
v___x_1351_ = lean_unsigned_to_nat(0u);
v___x_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
lean_ctor_set(v___x_1352_, 1, v___x_1350_);
return v___x_1352_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1);
v___x_1354_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1354_, 0, lean_box(0));
lean_closure_set(v___x_1354_, 1, lean_box(0));
lean_closure_set(v___x_1354_, 2, v___x_1353_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(lean_object* v_input_1355_, lean_object* v_pre_1356_, lean_object* v_post_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v_a_1363_; lean_object* v___x_1364_; 
v___x_1361_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2);
v___x_1362_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_box(0), v___x_1361_, v___y_1358_, v___y_1359_);
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
lean_inc(v_a_1363_);
lean_dec_ref(v___x_1362_);
v___x_1364_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1356_, v_post_1357_, v_input_1355_, v_a_1363_, v___y_1358_, v___y_1359_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v_a_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_a_1365_);
lean_dec_ref_known(v___x_1364_, 1);
v___x_1366_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1366_, 0, lean_box(0));
lean_closure_set(v___x_1366_, 1, lean_box(0));
lean_closure_set(v___x_1366_, 2, v_a_1363_);
v___x_1367_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_box(0), v___x_1366_, v___y_1358_, v___y_1359_);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1374_ == 0)
{
lean_object* v_unused_1375_; 
v_unused_1375_ = lean_ctor_get(v___x_1367_, 0);
lean_dec(v_unused_1375_);
v___x_1369_ = v___x_1367_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_dec(v___x_1367_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 0, v_a_1365_);
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1365_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
else
{
lean_dec(v_a_1363_);
return v___x_1364_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___boxed(lean_object* v_input_1376_, lean_object* v_pre_1377_, lean_object* v_post_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(v_input_1376_, v_pre_1377_, v_post_1378_, v___y_1379_, v___y_1380_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(lean_object* v_e_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_){
_start:
{
lean_object* v___f_1389_; lean_object* v___f_1390_; lean_object* v___x_1391_; 
v___f_1389_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0));
v___f_1390_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1));
v___x_1391_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(v_e_1385_, v___f_1389_, v___f_1390_, v_a_1386_, v_a_1387_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___boxed(lean_object* v_e_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_e_1392_, v_a_1393_, v_a_1394_);
lean_dec(v_a_1394_);
lean_dec_ref(v_a_1393_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1397_, lean_object* v_m_1398_, lean_object* v_a_1399_){
_start:
{
lean_object* v___x_1400_; 
v___x_1400_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(v_m_1398_, v_a_1399_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1401_, lean_object* v_m_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_00_u03b2_1401_, v_m_1402_, v_a_1403_);
lean_dec_ref(v_a_1403_);
lean_dec_ref(v_m_1402_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_1405_, lean_object* v_ref_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1406_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1411_, lean_object* v_ref_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_){
_start:
{
lean_object* v_res_1416_; 
v_res_1416_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_1411_, v_ref_1412_, v___y_1413_, v___y_1414_);
lean_dec(v___y_1414_);
lean_dec_ref(v___y_1413_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8(lean_object* v_00_u03b1_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_){
_start:
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___redArg();
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__8(v_00_u03b1_1422_, v___y_1423_, v___y_1424_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_1427_, lean_object* v_x_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
lean_object* v___x_1433_; 
v___x_1433_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v_x_1428_, v___y_1429_, v___y_1430_, v___y_1431_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_1434_, lean_object* v_x_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_){
_start:
{
lean_object* v_res_1440_; 
v_res_1440_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(v_00_u03b1_1434_, v_x_1435_, v___y_1436_, v___y_1437_, v___y_1438_);
lean_dec(v___y_1438_);
lean_dec_ref(v___y_1437_);
lean_dec(v___y_1436_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_1441_, lean_object* v_m_1442_, lean_object* v_a_1443_, lean_object* v_b_1444_){
_start:
{
lean_object* v___x_1445_; 
v___x_1445_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(v_m_1442_, v_a_1443_, v_b_1444_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_1446_, lean_object* v_a_1447_, lean_object* v_x_1448_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1447_, v_x_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1450_, lean_object* v_a_1451_, lean_object* v_x_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_1450_, v_a_1451_, v_x_1452_);
lean_dec(v_x_1452_);
lean_dec_ref(v_a_1451_);
return v_res_1453_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_1454_, lean_object* v_a_1455_, lean_object* v_x_1456_){
_start:
{
uint8_t v___x_1457_; 
v___x_1457_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1455_, v_x_1456_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___boxed(lean_object* v_00_u03b2_1458_, lean_object* v_a_1459_, lean_object* v_x_1460_){
_start:
{
uint8_t v_res_1461_; lean_object* v_r_1462_; 
v_res_1461_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10(v_00_u03b2_1458_, v_a_1459_, v_x_1460_);
lean_dec(v_x_1460_);
lean_dec_ref(v_a_1459_);
v_r_1462_ = lean_box(v_res_1461_);
return v_r_1462_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_1463_, lean_object* v_data_1464_){
_start:
{
lean_object* v___x_1465_; 
v___x_1465_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(v_data_1464_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12(lean_object* v_00_u03b2_1466_, lean_object* v_a_1467_, lean_object* v_b_1468_, lean_object* v_x_1469_){
_start:
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1467_, v_b_1468_, v_x_1469_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object* v_00_u03b2_1471_, lean_object* v_i_1472_, lean_object* v_source_1473_, lean_object* v_target_1474_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v_i_1472_, v_source_1473_, v_target_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_1476_, lean_object* v_x_1477_, lean_object* v_x_1478_){
_start:
{
lean_object* v___x_1479_; 
v___x_1479_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_x_1477_, v_x_1478_);
return v___x_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(lean_object* v_declName_1480_, lean_object* v___y_1481_){
_start:
{
lean_object* v___x_1483_; lean_object* v_env_1484_; uint8_t v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1483_ = lean_st_ref_get(v___y_1481_);
v_env_1484_ = lean_ctor_get(v___x_1483_, 0);
lean_inc_ref(v_env_1484_);
lean_dec(v___x_1483_);
v___x_1485_ = l_Lean_isRecCore(v_env_1484_, v_declName_1480_);
v___x_1486_ = lean_box(v___x_1485_);
v___x_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1486_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg___boxed(lean_object* v_declName_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1488_, v___y_1489_);
lean_dec(v___y_1489_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(lean_object* v_declName_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1492_, v___y_1496_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___boxed(lean_object* v_declName_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(v_declName_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(lean_object* v_declName_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v___x_1509_; lean_object* v_env_1510_; uint8_t v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1509_ = lean_st_ref_get(v___y_1507_);
v_env_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc_ref(v_env_1510_);
lean_dec(v___x_1509_);
v___x_1511_ = l_Lean_getReducibilityStatusCore(v_env_1510_, v_declName_1506_);
v___x_1512_ = lean_box(v___x_1511_);
v___x_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object* v_declName_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1514_, v___y_1515_);
lean_dec(v___y_1515_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(lean_object* v_declName_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
lean_object* v___x_1524_; lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1540_; 
v___x_1524_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1518_, v___y_1522_);
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1527_ = v___x_1524_;
v_isShared_1528_ = v_isSharedCheck_1540_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1524_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1540_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
uint8_t v___x_1529_; 
v___x_1529_ = lean_unbox(v_a_1525_);
lean_dec(v_a_1525_);
if (v___x_1529_ == 0)
{
uint8_t v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1533_; 
v___x_1530_ = 1;
v___x_1531_ = lean_box(v___x_1530_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 0, v___x_1531_);
v___x_1533_ = v___x_1527_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v___x_1531_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
else
{
uint8_t v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1538_; 
v___x_1535_ = 0;
v___x_1536_ = lean_box(v___x_1535_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 0, v___x_1536_);
v___x_1538_ = v___x_1527_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0___boxed(lean_object* v_declName_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(v_declName_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_);
lean_dec(v___y_1545_);
lean_dec_ref(v___y_1544_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(lean_object* v_a_1548_, lean_object* v_b_1549_){
_start:
{
lean_object* v_array_1551_; lean_object* v_start_1552_; lean_object* v_stop_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1570_; 
v_array_1551_ = lean_ctor_get(v_a_1548_, 0);
v_start_1552_ = lean_ctor_get(v_a_1548_, 1);
v_stop_1553_ = lean_ctor_get(v_a_1548_, 2);
v_isSharedCheck_1570_ = !lean_is_exclusive(v_a_1548_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1555_ = v_a_1548_;
v_isShared_1556_ = v_isSharedCheck_1570_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_stop_1553_);
lean_inc(v_start_1552_);
lean_inc(v_array_1551_);
lean_dec(v_a_1548_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1570_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
uint8_t v___x_1557_; 
v___x_1557_ = lean_nat_dec_lt(v_start_1552_, v_stop_1553_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; 
lean_del_object(v___x_1555_);
lean_dec(v_stop_1553_);
lean_dec(v_start_1552_);
lean_dec_ref(v_array_1551_);
v___x_1558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1558_, 0, v_b_1549_);
return v___x_1558_;
}
else
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1563_; 
v___x_1559_ = lean_box(0);
v___x_1560_ = lean_unsigned_to_nat(1u);
v___x_1561_ = lean_nat_add(v_start_1552_, v___x_1560_);
lean_inc_ref(v_array_1551_);
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 1, v___x_1561_);
v___x_1563_ = v___x_1555_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_array_1551_);
lean_ctor_set(v_reuseFailAlloc_1569_, 1, v___x_1561_);
lean_ctor_set(v_reuseFailAlloc_1569_, 2, v_stop_1553_);
v___x_1563_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
lean_object* v___x_1564_; uint8_t v___x_1565_; 
v___x_1564_ = lean_array_fget(v_array_1551_, v_start_1552_);
lean_dec(v_start_1552_);
lean_dec_ref(v_array_1551_);
v___x_1565_ = l_Lean_Expr_hasExprMVar(v___x_1564_);
lean_dec(v___x_1564_);
if (v___x_1565_ == 0)
{
v_a_1548_ = v___x_1563_;
v_b_1549_ = v___x_1559_;
goto _start;
}
else
{
lean_object* v___x_1567_; 
v___x_1567_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_dec_ref_known(v___x_1567_, 1);
v_a_1548_ = v___x_1563_;
v_b_1549_ = v___x_1559_;
goto _start;
}
else
{
lean_dec_ref(v___x_1563_);
return v___x_1567_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg___boxed(lean_object* v_a_1571_, lean_object* v_b_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v_a_1571_, v_b_1572_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(lean_object* v_e_1583_, uint8_t v_isMatch_1584_, uint8_t v_root_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_){
_start:
{
lean_object* v___y_1592_; lean_object* v_b_1593_; lean_object* v___x_1604_; 
v___x_1604_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_1583_, v_root_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_);
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_object* v_a_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1767_; 
v_a_1605_ = lean_ctor_get(v___x_1604_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1604_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1607_ = v___x_1604_;
v_isShared_1608_ = v_isSharedCheck_1767_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_a_1605_);
lean_dec(v___x_1604_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1767_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___y_1610_; lean_object* v___y_1620_; lean_object* v___y_1621_; lean_object* v___y_1622_; lean_object* v___y_1623_; 
if (v_root_1585_ == 0)
{
lean_object* v___x_1755_; 
lean_inc(v_a_1605_);
v___x_1755_ = l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(v_a_1605_);
if (lean_obj_tag(v___x_1755_) == 1)
{
lean_object* v_val_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1766_; 
lean_del_object(v___x_1607_);
lean_dec(v_a_1605_);
v_val_1756_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1758_ = v___x_1755_;
v_isShared_1759_ = v_isSharedCheck_1766_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_val_1756_);
lean_dec(v___x_1755_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1766_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1761_; 
if (v_isShared_1759_ == 0)
{
lean_ctor_set_tag(v___x_1758_, 2);
v___x_1761_ = v___x_1758_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_val_1756_);
v___x_1761_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1762_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_1763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1761_);
lean_ctor_set(v___x_1763_, 1, v___x_1762_);
v___x_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
return v___x_1764_;
}
}
}
else
{
lean_dec(v___x_1755_);
v___y_1620_ = v_a_1586_;
v___y_1621_ = v_a_1587_;
v___y_1622_ = v_a_1588_;
v___y_1623_ = v_a_1589_;
goto v___jp_1619_;
}
}
else
{
v___y_1620_ = v_a_1586_;
v___y_1621_ = v_a_1587_;
v___y_1622_ = v_a_1588_;
v___y_1623_ = v_a_1589_;
goto v___jp_1619_;
}
v___jp_1609_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1617_; 
v___x_1611_ = l_Lean_Expr_getAppNumArgs(v_a_1605_);
lean_inc(v___x_1611_);
v___x_1612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___y_1610_);
lean_ctor_set(v___x_1612_, 1, v___x_1611_);
v___x_1613_ = lean_mk_empty_array_with_capacity(v___x_1611_);
lean_dec(v___x_1611_);
v___x_1614_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1605_, v___x_1613_);
v___x_1615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1612_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
if (v_isShared_1608_ == 0)
{
lean_ctor_set(v___x_1607_, 0, v___x_1615_);
v___x_1617_ = v___x_1607_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v___x_1615_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
v___jp_1619_:
{
lean_object* v___x_1624_; 
v___x_1624_ = l_Lean_Expr_getAppFn(v_a_1605_);
switch(lean_obj_tag(v___x_1624_))
{
case 1:
{
lean_object* v_fvarId_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
lean_del_object(v___x_1607_);
v_fvarId_1625_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_fvarId_1625_);
lean_dec_ref_known(v___x_1624_, 1);
v___x_1626_ = l_Lean_Expr_getAppNumArgs(v_a_1605_);
lean_inc(v___x_1626_);
v___x_1627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1627_, 0, v_fvarId_1625_);
lean_ctor_set(v___x_1627_, 1, v___x_1626_);
v___x_1628_ = lean_mk_empty_array_with_capacity(v___x_1626_);
lean_dec(v___x_1626_);
v___x_1629_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1605_, v___x_1628_);
v___x_1630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1627_);
lean_ctor_set(v___x_1630_, 1, v___x_1629_);
v___x_1631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1630_);
return v___x_1631_;
}
case 2:
{
lean_del_object(v___x_1607_);
lean_dec(v_a_1605_);
if (v_isMatch_1584_ == 0)
{
lean_object* v_mvarId_1632_; lean_object* v___x_1633_; uint8_t v_isDefEqStuckEx_1634_; 
v_mvarId_1632_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_mvarId_1632_);
lean_dec_ref_known(v___x_1624_, 1);
v___x_1633_ = l_Lean_Meta_Context_config(v___y_1620_);
v_isDefEqStuckEx_1634_ = lean_ctor_get_uint8(v___x_1633_, 4);
lean_dec_ref(v___x_1633_);
if (v_isDefEqStuckEx_1634_ == 0)
{
lean_object* v___x_1635_; 
v___x_1635_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_1632_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
if (lean_obj_tag(v___x_1635_) == 0)
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1649_; 
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1638_ = v___x_1635_;
v_isShared_1639_ = v_isSharedCheck_1649_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1635_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1649_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
uint8_t v___x_1640_; 
v___x_1640_ = lean_unbox(v_a_1636_);
lean_dec(v_a_1636_);
if (v___x_1640_ == 0)
{
lean_object* v___x_1641_; lean_object* v___x_1643_; 
v___x_1641_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2));
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v___x_1641_);
v___x_1643_ = v___x_1638_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
else
{
lean_object* v___x_1645_; lean_object* v___x_1647_; 
v___x_1645_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v___x_1645_);
v___x_1647_ = v___x_1638_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v___x_1645_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
else
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1657_; 
v_a_1650_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1652_ = v___x_1635_;
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1635_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1655_; 
if (v_isShared_1653_ == 0)
{
v___x_1655_ = v___x_1652_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1650_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
}
else
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
lean_dec(v_mvarId_1632_);
v___x_1658_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2));
v___x_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
return v___x_1659_;
}
}
else
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
lean_dec_ref_known(v___x_1624_, 1);
v___x_1660_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
v___x_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1660_);
return v___x_1661_;
}
}
case 4:
{
lean_object* v_declName_1662_; lean_object* v___x_1663_; uint8_t v_isDefEqStuckEx_1664_; 
v_declName_1662_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_declName_1662_);
lean_dec_ref_known(v___x_1624_, 2);
v___x_1663_ = l_Lean_Meta_Context_config(v___y_1620_);
v_isDefEqStuckEx_1664_ = lean_ctor_get_uint8(v___x_1663_, 4);
lean_dec_ref(v___x_1663_);
if (v_isDefEqStuckEx_1664_ == 0)
{
v___y_1610_ = v_declName_1662_;
goto v___jp_1609_;
}
else
{
uint8_t v___x_1665_; 
v___x_1665_ = l_Lean_Expr_hasExprMVar(v_a_1605_);
if (v___x_1665_ == 0)
{
v___y_1610_ = v_declName_1662_;
goto v___jp_1609_;
}
else
{
lean_object* v___x_1666_; 
lean_inc(v_declName_1662_);
v___x_1666_ = l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(v_declName_1662_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
if (lean_obj_tag(v___x_1666_) == 0)
{
lean_object* v_a_1667_; uint8_t v___x_1668_; 
v_a_1667_ = lean_ctor_get(v___x_1666_, 0);
lean_inc(v_a_1667_);
lean_dec_ref_known(v___x_1666_, 1);
v___x_1668_ = lean_unbox(v_a_1667_);
lean_dec(v_a_1667_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; lean_object* v_env_1670_; lean_object* v___x_1671_; 
v___x_1669_ = lean_st_ref_get(v___y_1623_);
v_env_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc_ref(v_env_1670_);
lean_dec(v___x_1669_);
v___x_1671_ = l_Lean_Meta_isMatcherAppCore_x3f(v_env_1670_, v_a_1605_);
if (lean_obj_tag(v___x_1671_) == 1)
{
lean_object* v_val_1672_; lean_object* v_numDiscrs_1673_; lean_object* v_nargs_1674_; lean_object* v_dummy_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v_val_1672_ = lean_ctor_get(v___x_1671_, 0);
lean_inc(v_val_1672_);
lean_dec_ref_known(v___x_1671_, 1);
v_numDiscrs_1673_ = lean_ctor_get(v_val_1672_, 1);
lean_inc(v_numDiscrs_1673_);
v_nargs_1674_ = l_Lean_Expr_getAppNumArgs(v_a_1605_);
v_dummy_1675_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0);
lean_inc(v_nargs_1674_);
v___x_1676_ = lean_mk_array(v_nargs_1674_, v_dummy_1675_);
v___x_1677_ = lean_unsigned_to_nat(1u);
v___x_1678_ = lean_nat_sub(v_nargs_1674_, v___x_1677_);
lean_dec(v_nargs_1674_);
lean_inc(v_a_1605_);
v___x_1679_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1605_, v___x_1676_, v___x_1678_);
v___x_1680_ = l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(v_val_1672_);
lean_dec(v_val_1672_);
v___x_1681_ = lean_nat_add(v___x_1680_, v_numDiscrs_1673_);
lean_dec(v_numDiscrs_1673_);
v___x_1682_ = l_Array_toSubarray___redArg(v___x_1679_, v___x_1680_, v___x_1681_);
v___x_1683_ = lean_box(0);
v___x_1684_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v___x_1682_, v___x_1683_);
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_dec_ref_known(v___x_1684_, 1);
v___y_1610_ = v_declName_1662_;
goto v___jp_1609_;
}
else
{
lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
lean_dec(v_declName_1662_);
lean_del_object(v___x_1607_);
lean_dec(v_a_1605_);
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1687_ = v___x_1684_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1684_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1685_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
}
else
{
lean_object* v___x_1693_; lean_object* v_a_1694_; uint8_t v___x_1695_; 
lean_dec(v___x_1671_);
lean_inc(v_declName_1662_);
v___x_1693_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1662_, v___y_1623_);
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
lean_inc(v_a_1694_);
lean_dec_ref(v___x_1693_);
v___x_1695_ = lean_unbox(v_a_1694_);
lean_dec(v_a_1694_);
if (v___x_1695_ == 0)
{
v___y_1610_ = v_declName_1662_;
goto v___jp_1609_;
}
else
{
lean_object* v___x_1696_; 
v___x_1696_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_dec_ref_known(v___x_1696_, 1);
v___y_1610_ = v_declName_1662_;
goto v___jp_1609_;
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
lean_dec(v_declName_1662_);
lean_del_object(v___x_1607_);
lean_dec(v_a_1605_);
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___x_1696_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1696_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
}
}
}
else
{
lean_object* v___x_1705_; 
v___x_1705_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1705_) == 0)
{
lean_dec_ref_known(v___x_1705_, 1);
v___y_1610_ = v_declName_1662_;
goto v___jp_1609_;
}
else
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
lean_dec(v_declName_1662_);
lean_del_object(v___x_1607_);
lean_dec(v_a_1605_);
v_a_1706_ = lean_ctor_get(v___x_1705_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1705_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1705_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1705_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
}
else
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1721_; 
lean_dec(v_declName_1662_);
lean_del_object(v___x_1607_);
lean_dec(v_a_1605_);
v_a_1714_ = lean_ctor_get(v___x_1666_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1666_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1716_ = v___x_1666_;
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1666_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1717_ == 0)
{
v___x_1719_ = v___x_1716_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1714_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
}
}
}
case 7:
{
lean_object* v_binderType_1722_; lean_object* v_body_1723_; uint8_t v___x_1724_; 
lean_del_object(v___x_1607_);
lean_dec(v_a_1605_);
v_binderType_1722_ = lean_ctor_get(v___x_1624_, 1);
lean_inc_ref(v_binderType_1722_);
v_body_1723_ = lean_ctor_get(v___x_1624_, 2);
lean_inc_ref(v_body_1723_);
lean_dec_ref_known(v___x_1624_, 3);
v___x_1724_ = l_Lean_Expr_hasLooseBVars(v_body_1723_);
if (v___x_1724_ == 0)
{
v___y_1592_ = v_binderType_1722_;
v_b_1593_ = v_body_1723_;
goto v___jp_1591_;
}
else
{
lean_object* v___x_1725_; 
v___x_1725_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_body_1723_, v___y_1622_, v___y_1623_);
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_object* v_a_1726_; 
v_a_1726_ = lean_ctor_get(v___x_1725_, 0);
lean_inc(v_a_1726_);
lean_dec_ref_known(v___x_1725_, 1);
v___y_1592_ = v_binderType_1722_;
v_b_1593_ = v_a_1726_;
goto v___jp_1591_;
}
else
{
lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1734_; 
lean_dec_ref(v_binderType_1722_);
v_a_1727_ = lean_ctor_get(v___x_1725_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1729_ = v___x_1725_;
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_dec(v___x_1725_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1732_; 
if (v_isShared_1730_ == 0)
{
v___x_1732_ = v___x_1729_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v_a_1727_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
}
}
}
case 9:
{
lean_object* v_a_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
lean_del_object(v___x_1607_);
lean_dec(v_a_1605_);
v_a_1735_ = lean_ctor_get(v___x_1624_, 0);
lean_inc_ref(v_a_1735_);
lean_dec_ref_known(v___x_1624_, 1);
v___x_1736_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1736_, 0, v_a_1735_);
v___x_1737_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1736_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
v___x_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
return v___x_1739_;
}
case 11:
{
lean_object* v_typeName_1740_; lean_object* v_idx_1741_; lean_object* v_struct_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
lean_del_object(v___x_1607_);
v_typeName_1740_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_typeName_1740_);
v_idx_1741_ = lean_ctor_get(v___x_1624_, 1);
lean_inc(v_idx_1741_);
v_struct_1742_ = lean_ctor_get(v___x_1624_, 2);
lean_inc_ref(v_struct_1742_);
lean_dec_ref_known(v___x_1624_, 3);
v___x_1743_ = l_Lean_Expr_getAppNumArgs(v_a_1605_);
lean_inc(v___x_1743_);
v___x_1744_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_1744_, 0, v_typeName_1740_);
lean_ctor_set(v___x_1744_, 1, v_idx_1741_);
lean_ctor_set(v___x_1744_, 2, v___x_1743_);
v___x_1745_ = lean_unsigned_to_nat(1u);
v___x_1746_ = lean_mk_empty_array_with_capacity(v___x_1745_);
v___x_1747_ = lean_array_push(v___x_1746_, v_struct_1742_);
v___x_1748_ = lean_mk_empty_array_with_capacity(v___x_1743_);
lean_dec(v___x_1743_);
v___x_1749_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1605_, v___x_1748_);
v___x_1750_ = l_Array_append___redArg(v___x_1747_, v___x_1749_);
lean_dec_ref(v___x_1749_);
v___x_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1744_);
lean_ctor_set(v___x_1751_, 1, v___x_1750_);
v___x_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1751_);
return v___x_1752_;
}
default: 
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
lean_dec_ref(v___x_1624_);
lean_del_object(v___x_1607_);
lean_dec(v_a_1605_);
v___x_1753_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
v___x_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
return v___x_1754_;
}
}
}
}
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1775_; 
v_a_1768_ = lean_ctor_get(v___x_1604_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1604_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1770_ = v___x_1604_;
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1604_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1773_; 
if (v_isShared_1771_ == 0)
{
v___x_1773_ = v___x_1770_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1768_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
v___jp_1591_:
{
uint8_t v___x_1594_; 
v___x_1594_ = l_Lean_Expr_hasLooseBVars(v_b_1593_);
if (v___x_1594_ == 0)
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1595_ = lean_box(5);
v___x_1596_ = lean_unsigned_to_nat(2u);
v___x_1597_ = lean_mk_empty_array_with_capacity(v___x_1596_);
v___x_1598_ = lean_array_push(v___x_1597_, v___y_1592_);
v___x_1599_ = lean_array_push(v___x_1598_, v_b_1593_);
v___x_1600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1595_);
lean_ctor_set(v___x_1600_, 1, v___x_1599_);
v___x_1601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
return v___x_1601_;
}
else
{
lean_object* v___x_1602_; lean_object* v___x_1603_; 
lean_dec_ref(v_b_1593_);
lean_dec_ref(v___y_1592_);
v___x_1602_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
v___x_1603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1603_, 0, v___x_1602_);
return v___x_1603_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___boxed(lean_object* v_e_1776_, lean_object* v_isMatch_1777_, lean_object* v_root_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_){
_start:
{
uint8_t v_isMatch_boxed_1784_; uint8_t v_root_boxed_1785_; lean_object* v_res_1786_; 
v_isMatch_boxed_1784_ = lean_unbox(v_isMatch_1777_);
v_root_boxed_1785_ = lean_unbox(v_root_1778_);
v_res_1786_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_1776_, v_isMatch_boxed_1784_, v_root_boxed_1785_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_);
lean_dec(v_a_1782_);
lean_dec_ref(v_a_1781_);
lean_dec(v_a_1780_);
lean_dec_ref(v_a_1779_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(lean_object* v_declName_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v___x_1793_; 
v___x_1793_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1787_, v___y_1791_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___boxed(lean_object* v_declName_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_){
_start:
{
lean_object* v_res_1800_; 
v_res_1800_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(v_declName_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_);
lean_dec(v___y_1798_);
lean_dec_ref(v___y_1797_);
lean_dec(v___y_1796_);
lean_dec_ref(v___y_1795_);
return v_res_1800_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(lean_object* v_inst_1801_, lean_object* v_R_1802_, lean_object* v_a_1803_, lean_object* v_b_1804_, lean_object* v_c_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_){
_start:
{
lean_object* v___x_1811_; 
v___x_1811_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v_a_1803_, v_b_1804_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___boxed(lean_object* v_inst_1812_, lean_object* v_R_1813_, lean_object* v_a_1814_, lean_object* v_b_1815_, lean_object* v_c_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(v_inst_1812_, v_R_1813_, v_a_1814_, v_b_1815_, v_c_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
lean_dec(v___y_1820_);
lean_dec_ref(v___y_1819_);
lean_dec(v___y_1818_);
lean_dec_ref(v___y_1817_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(lean_object* v_e_1823_, uint8_t v_root_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_){
_start:
{
uint8_t v___x_1830_; lean_object* v___x_1831_; 
v___x_1830_ = 1;
v___x_1831_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_1823_, v___x_1830_, v_root_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs___boxed(lean_object* v_e_1832_, lean_object* v_root_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_){
_start:
{
uint8_t v_root_boxed_1839_; lean_object* v_res_1840_; 
v_root_boxed_1839_ = lean_unbox(v_root_1833_);
v_res_1840_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(v_e_1832_, v_root_boxed_1839_, v_a_1834_, v_a_1835_, v_a_1836_, v_a_1837_);
lean_dec(v_a_1837_);
lean_dec_ref(v_a_1836_);
lean_dec(v_a_1835_);
lean_dec_ref(v_a_1834_);
return v_res_1840_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1(void){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1843_ = lean_box(0);
v___x_1844_ = lean_unsigned_to_nat(16u);
v___x_1845_ = lean_mk_array(v___x_1844_, v___x_1843_);
return v___x_1845_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2(void){
_start:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1846_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1);
v___x_1847_ = lean_unsigned_to_nat(0u);
v___x_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
lean_ctor_set(v___x_1848_, 1, v___x_1846_);
return v___x_1848_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4(void){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1851_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3));
v___x_1852_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_1853_ = lean_unsigned_to_nat(0u);
v___x_1854_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0));
v___x_1855_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1854_);
lean_ctor_set(v___x_1855_, 1, v___x_1853_);
lean_ctor_set(v___x_1855_, 2, v___x_1852_);
lean_ctor_set(v___x_1855_, 3, v___x_1851_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg(){
_start:
{
lean_object* v___x_1857_; 
v___x_1857_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__4);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___boxed(lean_object* v___dummy_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg();
return v_res_1859_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0(void){
_start:
{
lean_object* v___x_1860_; 
v___x_1860_ = l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg();
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default(lean_object* v_00_u03b1_1861_){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg(){
_start:
{
lean_object* v___x_1864_; 
v___x_1864_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg___boxed(lean_object* v___dummy_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___redArg();
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie(lean_object* v_a_1867_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
return v___x_1868_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1(void){
_start:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1871_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_1872_ = lean_unsigned_to_nat(0u);
v___x_1873_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_1874_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1873_);
lean_ctor_set(v___x_1874_, 1, v___x_1872_);
lean_ctor_set(v___x_1874_, 2, v___x_1871_);
lean_ctor_set(v___x_1874_, 3, v___x_1873_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg(){
_start:
{
lean_object* v___x_1876_; 
v___x_1876_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__1);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___boxed(lean_object* v___dummy_1877_){
_start:
{
lean_object* v_res_1878_; 
v_res_1878_ = l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg();
return v_res_1878_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0(void){
_start:
{
lean_object* v___x_1879_; 
v___x_1879_ = l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg();
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie(lean_object* v_00_u03b1_1880_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0, &l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(lean_object* v_x_1882_, lean_object* v_x_1883_){
_start:
{
lean_object* v_values_1884_; lean_object* v_star_1885_; lean_object* v_children_1886_; lean_object* v_pending_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1895_; 
v_values_1884_ = lean_ctor_get(v_x_1882_, 0);
v_star_1885_ = lean_ctor_get(v_x_1882_, 1);
v_children_1886_ = lean_ctor_get(v_x_1882_, 2);
v_pending_1887_ = lean_ctor_get(v_x_1882_, 3);
v_isSharedCheck_1895_ = !lean_is_exclusive(v_x_1882_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1889_ = v_x_1882_;
v_isShared_1890_ = v_isSharedCheck_1895_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_pending_1887_);
lean_inc(v_children_1886_);
lean_inc(v_star_1885_);
lean_inc(v_values_1884_);
lean_dec(v_x_1882_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1895_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1891_; lean_object* v___x_1893_; 
v___x_1891_ = lean_array_push(v_pending_1887_, v_x_1883_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 3, v___x_1891_);
v___x_1893_ = v___x_1889_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_values_1884_);
lean_ctor_set(v_reuseFailAlloc_1894_, 1, v_star_1885_);
lean_ctor_set(v_reuseFailAlloc_1894_, 2, v_children_1886_);
lean_ctor_set(v_reuseFailAlloc_1894_, 3, v___x_1891_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending(lean_object* v_00_u03b1_1896_, lean_object* v_x_1897_, lean_object* v_x_1898_){
_start:
{
lean_object* v___x_1899_; 
v___x_1899_ = l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(v_x_1897_, v_x_1898_);
return v___x_1899_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0(void){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1900_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
v___x_1901_ = lean_unsigned_to_nat(1u);
v___x_1902_ = lean_mk_empty_array_with_capacity(v___x_1901_);
v___x_1903_ = lean_array_push(v___x_1902_, v___x_1900_);
return v___x_1903_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1(void){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1904_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_1905_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0);
v___x_1906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1906_, 0, v___x_1905_);
lean_ctor_set(v___x_1906_, 1, v___x_1904_);
return v___x_1906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg(){
_start:
{
lean_object* v___x_1908_; 
v___x_1908_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__1);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___boxed(lean_object* v___dummy_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lean_Meta_LazyDiscrTree_instInhabited___redArg();
return v_res_1910_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Lean_Meta_LazyDiscrTree_instInhabited___redArg();
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited(lean_object* v_00_u03b1_1912_){
_start:
{
lean_object* v___x_1913_; 
v___x_1913_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(lean_object* v_msgData_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v___x_1920_; lean_object* v_env_1921_; uint8_t v___x_1922_; lean_object* v_env_1923_; lean_object* v___x_1924_; lean_object* v_toCold_1925_; lean_object* v_mctx_1926_; lean_object* v_lctx_1927_; lean_object* v_options_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1920_ = lean_st_ref_get(v___y_1918_);
v_env_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc_ref(v_env_1921_);
lean_dec(v___x_1920_);
v___x_1922_ = 0;
v_env_1923_ = l_Lean_Environment_setRecordingDeps(v_env_1921_, v___x_1922_);
v___x_1924_ = lean_st_ref_get(v___y_1916_);
v_toCold_1925_ = lean_ctor_get(v___y_1917_, 0);
v_mctx_1926_ = lean_ctor_get(v___x_1924_, 0);
lean_inc_ref(v_mctx_1926_);
lean_dec(v___x_1924_);
v_lctx_1927_ = lean_ctor_get(v___y_1915_, 2);
v_options_1928_ = lean_ctor_get(v_toCold_1925_, 2);
lean_inc_ref(v_options_1928_);
lean_inc_ref(v_lctx_1927_);
v___x_1929_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1929_, 0, v_env_1923_);
lean_ctor_set(v___x_1929_, 1, v_mctx_1926_);
lean_ctor_set(v___x_1929_, 2, v_lctx_1927_);
lean_ctor_set(v___x_1929_, 3, v_options_1928_);
v___x_1930_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
lean_ctor_set(v___x_1930_, 1, v_msgData_1914_);
v___x_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0___boxed(lean_object* v_msgData_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v_msgData_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_);
lean_dec(v___y_1936_);
lean_dec_ref(v___y_1935_);
lean_dec(v___y_1934_);
lean_dec_ref(v___y_1933_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(lean_object* v_msg_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_){
_start:
{
lean_object* v_ref_1945_; lean_object* v___x_1946_; lean_object* v_a_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1955_; 
v_ref_1945_ = lean_ctor_get(v___y_1942_, 2);
v___x_1946_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v_msg_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
v_a_1947_ = lean_ctor_get(v___x_1946_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1949_ = v___x_1946_;
v_isShared_1950_ = v_isSharedCheck_1955_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_a_1947_);
lean_dec(v___x_1946_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1955_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v___x_1951_; lean_object* v___x_1953_; 
lean_inc(v_ref_1945_);
v___x_1951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1951_, 0, v_ref_1945_);
lean_ctor_set(v___x_1951_, 1, v_a_1947_);
if (v_isShared_1950_ == 0)
{
lean_ctor_set_tag(v___x_1949_, 1);
lean_ctor_set(v___x_1949_, 0, v___x_1951_);
v___x_1953_ = v___x_1949_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v___x_1951_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg___boxed(lean_object* v_msg_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v_msg_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_);
lean_dec(v___y_1960_);
lean_dec_ref(v___y_1959_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
return v_res_1962_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1(void){
_start:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1964_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0));
v___x_1965_ = l_Lean_stringToMessageData(v___x_1964_);
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs(uint8_t v_root_1966_, lean_object* v_todo_1967_, lean_object* v_e_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_){
_start:
{
lean_object* v_v_1975_; uint8_t v___x_1979_; 
v___x_1979_ = l_Lean_Meta_DiscrTree_hasNoindexAnnotation(v_e_1968_);
if (v___x_1979_ == 0)
{
lean_object* v___x_1980_; 
v___x_1980_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_1968_, v_root_1966_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_2123_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_1983_ = v___x_1980_;
v_isShared_1984_ = v_isSharedCheck_2123_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v___x_1980_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_2123_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1985_; lean_object* v_k_1987_; lean_object* v_nargs_1988_; lean_object* v_todo_1989_; lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_1993_; 
v___x_1985_ = l_Lean_Expr_getAppFn(v_a_1981_);
switch(lean_obj_tag(v___x_1985_))
{
case 9:
{
lean_object* v_a_2032_; 
lean_del_object(v___x_1983_);
lean_dec(v_a_1981_);
v_a_2032_ = lean_ctor_get(v___x_1985_, 0);
lean_inc_ref(v_a_2032_);
lean_dec_ref_known(v___x_1985_, 1);
v_v_1975_ = v_a_2032_;
goto v___jp_1974_;
}
case 4:
{
lean_object* v_declName_2033_; lean_object* v___y_2035_; lean_object* v___y_2036_; lean_object* v___y_2037_; lean_object* v___y_2038_; 
lean_del_object(v___x_1983_);
v_declName_2033_ = lean_ctor_get(v___x_1985_, 0);
if (v_root_1966_ == 0)
{
lean_object* v___x_2041_; 
lean_inc(v_a_1981_);
v___x_2041_ = l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(v_a_1981_);
if (lean_obj_tag(v___x_2041_) == 1)
{
lean_object* v_val_2042_; 
lean_dec_ref_known(v___x_1985_, 2);
lean_dec(v_a_1981_);
v_val_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_val_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v_v_1975_ = v_val_2042_;
goto v___jp_1974_;
}
else
{
lean_object* v___x_2043_; 
lean_dec(v___x_2041_);
v___x_2043_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_declName_2033_, v_a_1981_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_);
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v_a_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2054_; 
v_a_2044_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2046_ = v___x_2043_;
v_isShared_2047_ = v_isSharedCheck_2054_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_a_2044_);
lean_dec(v___x_2043_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2054_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
uint8_t v___x_2048_; 
v___x_2048_ = lean_unbox(v_a_2044_);
lean_dec(v_a_2044_);
if (v___x_2048_ == 0)
{
lean_del_object(v___x_2046_);
v___y_2035_ = v_a_1969_;
v___y_2036_ = v_a_1970_;
v___y_2037_ = v_a_1971_;
v___y_2038_ = v_a_1972_;
goto v___jp_2034_;
}
else
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2052_; 
lean_dec_ref_known(v___x_1985_, 2);
lean_dec(v_a_1981_);
v___x_2049_ = lean_box(3);
v___x_2050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2049_);
lean_ctor_set(v___x_2050_, 1, v_todo_1967_);
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 0, v___x_2050_);
v___x_2052_ = v___x_2046_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___x_2050_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
lean_dec_ref_known(v___x_1985_, 2);
lean_dec(v_a_1981_);
lean_dec_ref(v_todo_1967_);
v_a_2055_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_2043_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2043_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
}
else
{
v___y_2035_ = v_a_1969_;
v___y_2036_ = v_a_1970_;
v___y_2037_ = v_a_1971_;
v___y_2038_ = v_a_1972_;
goto v___jp_2034_;
}
v___jp_2034_:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2039_ = l_Lean_Expr_getAppNumArgs(v_a_1981_);
lean_inc(v___x_2039_);
lean_inc(v_declName_2033_);
v___x_2040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2040_, 0, v_declName_2033_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
v_k_1987_ = v___x_2040_;
v_nargs_1988_ = v___x_2039_;
v_todo_1989_ = v_todo_1967_;
v___y_1990_ = v___y_2035_;
v___y_1991_ = v___y_2036_;
v___y_1992_ = v___y_2037_;
v___y_1993_ = v___y_2038_;
goto v___jp_1986_;
}
}
case 11:
{
lean_object* v_typeName_2063_; lean_object* v_idx_2064_; lean_object* v_struct_2065_; lean_object* v___x_2066_; lean_object* v___y_2068_; lean_object* v_env_2072_; uint8_t v___x_2073_; 
lean_del_object(v___x_1983_);
v_typeName_2063_ = lean_ctor_get(v___x_1985_, 0);
v_idx_2064_ = lean_ctor_get(v___x_1985_, 1);
v_struct_2065_ = lean_ctor_get(v___x_1985_, 2);
v___x_2066_ = lean_st_ref_get(v_a_1972_);
v_env_2072_ = lean_ctor_get(v___x_2066_, 0);
lean_inc_ref(v_env_2072_);
lean_dec(v___x_2066_);
v___x_2073_ = l_Lean_isClass(v_env_2072_, v_typeName_2063_);
if (v___x_2073_ == 0)
{
lean_inc_ref(v_struct_2065_);
v___y_2068_ = v_struct_2065_;
goto v___jp_2067_;
}
else
{
lean_object* v___x_2074_; 
lean_inc_ref(v_struct_2065_);
v___x_2074_ = l_Lean_Meta_DiscrTree_mkNoindexAnnotation(v_struct_2065_);
v___y_2068_ = v___x_2074_;
goto v___jp_2067_;
}
v___jp_2067_:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2069_ = l_Lean_Expr_getAppNumArgs(v_a_1981_);
lean_inc(v___x_2069_);
lean_inc(v_idx_2064_);
lean_inc(v_typeName_2063_);
v___x_2070_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_2070_, 0, v_typeName_2063_);
lean_ctor_set(v___x_2070_, 1, v_idx_2064_);
lean_ctor_set(v___x_2070_, 2, v___x_2069_);
v___x_2071_ = lean_array_push(v_todo_1967_, v___y_2068_);
v_k_1987_ = v___x_2070_;
v_nargs_1988_ = v___x_2069_;
v_todo_1989_ = v___x_2071_;
v___y_1990_ = v_a_1969_;
v___y_1991_ = v_a_1970_;
v___y_1992_ = v_a_1971_;
v___y_1993_ = v_a_1972_;
goto v___jp_1986_;
}
}
case 1:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2078_; 
lean_dec_ref_known(v___x_1985_, 1);
lean_dec(v_a_1981_);
v___x_2075_ = lean_box(3);
v___x_2076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2075_);
lean_ctor_set(v___x_2076_, 1, v_todo_1967_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v___x_2076_);
v___x_2078_ = v___x_1983_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___x_2076_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
case 2:
{
lean_object* v_mvarId_2080_; lean_object* v___x_2081_; uint8_t v___x_2082_; 
lean_dec(v_a_1981_);
v_mvarId_2080_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_mvarId_2080_);
lean_dec_ref_known(v___x_1985_, 1);
v___x_2081_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId));
v___x_2082_ = l_Lean_instBEqMVarId_beq(v_mvarId_2080_, v___x_2081_);
lean_dec(v_mvarId_2080_);
if (v___x_2082_ == 0)
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
lean_del_object(v___x_1983_);
lean_dec_ref(v_todo_1967_);
v___x_2083_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1, &l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1);
v___x_2084_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v___x_2083_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_);
return v___x_2084_;
}
else
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2088_; 
v___x_2085_ = lean_box(3);
v___x_2086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2085_);
lean_ctor_set(v___x_2086_, 1, v_todo_1967_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v___x_2086_);
v___x_2088_ = v___x_1983_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v___x_2086_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
case 7:
{
lean_object* v_binderType_2090_; lean_object* v_body_2091_; lean_object* v_b_2093_; uint8_t v___x_2107_; 
lean_dec(v_a_1981_);
v_binderType_2090_ = lean_ctor_get(v___x_1985_, 1);
lean_inc_ref(v_binderType_2090_);
v_body_2091_ = lean_ctor_get(v___x_1985_, 2);
lean_inc_ref(v_body_2091_);
lean_dec_ref_known(v___x_1985_, 3);
v___x_2107_ = l_Lean_Expr_hasLooseBVars(v_body_2091_);
if (v___x_2107_ == 0)
{
v_b_2093_ = v_body_2091_;
goto v___jp_2092_;
}
else
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_body_2091_, v_a_1971_, v_a_1972_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; 
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___x_2108_, 1);
v_b_2093_ = v_a_2109_;
goto v___jp_2092_;
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2117_; 
lean_dec_ref(v_binderType_2090_);
lean_del_object(v___x_1983_);
lean_dec_ref(v_todo_1967_);
v_a_2110_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2112_ = v___x_2108_;
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2108_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2115_; 
if (v_isShared_2113_ == 0)
{
v___x_2115_ = v___x_2112_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_a_2110_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
v___jp_2092_:
{
uint8_t v___x_2094_; 
v___x_2094_ = l_Lean_Expr_hasLooseBVars(v_b_2093_);
if (v___x_2094_ == 0)
{
lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2100_; 
v___x_2095_ = lean_box(5);
v___x_2096_ = lean_array_push(v_todo_1967_, v_binderType_2090_);
v___x_2097_ = lean_array_push(v___x_2096_, v_b_2093_);
v___x_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2095_);
lean_ctor_set(v___x_2098_, 1, v___x_2097_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v___x_2098_);
v___x_2100_ = v___x_1983_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2098_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
else
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2105_; 
lean_dec_ref(v_b_2093_);
lean_dec_ref(v_binderType_2090_);
v___x_2102_ = lean_box(4);
v___x_2103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2102_);
lean_ctor_set(v___x_2103_, 1, v_todo_1967_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v___x_2103_);
v___x_2105_ = v___x_1983_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v___x_2103_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
}
}
default: 
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2121_; 
lean_dec_ref(v___x_1985_);
lean_dec(v_a_1981_);
v___x_2118_ = lean_box(4);
v___x_2119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
lean_ctor_set(v___x_2119_, 1, v_todo_1967_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v___x_2119_);
v___x_2121_ = v___x_1983_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v___x_2119_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
return v___x_2121_;
}
}
}
v___jp_1986_:
{
lean_object* v___x_1994_; 
lean_inc(v_nargs_1988_);
v___x_1994_ = l_Lean_Meta_getFunInfoNArgs(v___x_1985_, v_nargs_1988_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; lean_object* v_paramInfo_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2022_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___x_1994_, 1);
v_paramInfo_1996_ = lean_ctor_get(v_a_1995_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v_a_1995_);
if (v_isSharedCheck_2022_ == 0)
{
lean_object* v_unused_2023_; 
v_unused_2023_ = lean_ctor_get(v_a_1995_, 1);
lean_dec(v_unused_2023_);
v___x_1998_ = v_a_1995_;
v_isShared_1999_ = v_isSharedCheck_2022_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_paramInfo_1996_);
lean_dec(v_a_1995_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2022_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2000_ = lean_unsigned_to_nat(1u);
v___x_2001_ = lean_nat_sub(v_nargs_1988_, v___x_2000_);
lean_dec(v_nargs_1988_);
v___x_2002_ = l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(v_paramInfo_1996_, v___x_2001_, v_a_1981_, v_todo_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_);
lean_dec_ref(v_paramInfo_1996_);
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2013_; 
v_a_2003_ = lean_ctor_get(v___x_2002_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2005_ = v___x_2002_;
v_isShared_2006_ = v_isSharedCheck_2013_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v___x_2002_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2013_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2008_; 
if (v_isShared_1999_ == 0)
{
lean_ctor_set(v___x_1998_, 1, v_a_2003_);
lean_ctor_set(v___x_1998_, 0, v_k_1987_);
v___x_2008_ = v___x_1998_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_k_1987_);
lean_ctor_set(v_reuseFailAlloc_2012_, 1, v_a_2003_);
v___x_2008_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
lean_object* v___x_2010_; 
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 0, v___x_2008_);
v___x_2010_ = v___x_2005_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v___x_2008_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
lean_del_object(v___x_1998_);
lean_dec(v_k_1987_);
v_a_2014_ = lean_ctor_get(v___x_2002_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v___x_2002_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v___x_2002_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2014_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
}
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2031_; 
lean_dec_ref(v_todo_1989_);
lean_dec(v_nargs_1988_);
lean_dec(v_k_1987_);
lean_dec(v_a_1981_);
v_a_2024_ = lean_ctor_get(v___x_1994_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2026_ = v___x_1994_;
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_1994_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2029_; 
if (v_isShared_2027_ == 0)
{
v___x_2029_ = v___x_2026_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_a_2024_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
}
}
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
lean_dec_ref(v_todo_1967_);
v_a_2124_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2126_ = v___x_1980_;
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_1980_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2127_ == 0)
{
v___x_2129_ = v___x_2126_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2124_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
else
{
lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
lean_dec_ref(v_e_1968_);
v___x_2132_ = lean_box(3);
v___x_2133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
lean_ctor_set(v___x_2133_, 1, v_todo_1967_);
v___x_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2133_);
return v___x_2134_;
}
v___jp_1974_:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1976_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1976_, 0, v_v_1975_);
v___x_1977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
lean_ctor_set(v___x_1977_, 1, v_todo_1967_);
v___x_1978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1977_);
return v___x_1978_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___boxed(lean_object* v_root_2135_, lean_object* v_todo_2136_, lean_object* v_e_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_){
_start:
{
uint8_t v_root_boxed_2143_; lean_object* v_res_2144_; 
v_root_boxed_2143_ = lean_unbox(v_root_2135_);
v_res_2144_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v_root_boxed_2143_, v_todo_2136_, v_e_2137_, v_a_2138_, v_a_2139_, v_a_2140_, v_a_2141_);
lean_dec(v_a_2141_);
lean_dec_ref(v_a_2140_);
lean_dec(v_a_2139_);
lean_dec_ref(v_a_2138_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(lean_object* v_00_u03b1_2145_, lean_object* v_msg_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
lean_object* v___x_2152_; 
v___x_2152_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v_msg_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___boxed(lean_object* v_00_u03b1_2153_, lean_object* v_msg_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(v_00_u03b1_2153_, v_msg_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
lean_dec(v___y_2156_);
lean_dec_ref(v___y_2155_);
return v_res_2160_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_initCapacity(void){
_start:
{
lean_object* v___x_2161_; 
v___x_2161_ = lean_unsigned_to_nat(8u);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey(lean_object* v_e_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_){
_start:
{
uint8_t v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2168_ = 1;
v___x_2169_ = lean_unsigned_to_nat(8u);
v___x_2170_ = lean_mk_empty_array_with_capacity(v___x_2169_);
v___x_2171_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v___x_2168_, v___x_2170_, v_e_2162_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey___boxed(lean_object* v_e_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_){
_start:
{
lean_object* v_res_2178_; 
v_res_2178_ = l_Lean_Meta_LazyDiscrTree_rootKey(v_e_2172_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_);
lean_dec(v_a_2176_);
lean_dec_ref(v_a_2175_);
lean_dec(v_a_2174_);
lean_dec_ref(v_a_2173_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath(lean_object* v_op_2179_, uint8_t v_root_2180_, lean_object* v_todo_2181_, lean_object* v_keys_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_){
_start:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; uint8_t v___x_2190_; 
v___x_2188_ = lean_array_get_size(v_todo_2181_);
v___x_2189_ = lean_unsigned_to_nat(0u);
v___x_2190_ = lean_nat_dec_eq(v___x_2188_, v___x_2189_);
if (v___x_2190_ == 0)
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v_e_2194_; lean_object* v_todo_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2191_ = l_Lean_instInhabitedExpr;
v___x_2192_ = lean_unsigned_to_nat(1u);
v___x_2193_ = lean_nat_sub(v___x_2188_, v___x_2192_);
v_e_2194_ = lean_array_get(v___x_2191_, v_todo_2181_, v___x_2193_);
lean_dec(v___x_2193_);
v_todo_2195_ = lean_array_pop(v_todo_2181_);
v___x_2196_ = lean_box(v_root_2180_);
lean_inc_ref(v_op_2179_);
lean_inc(v_a_2186_);
lean_inc_ref(v_a_2185_);
lean_inc(v_a_2184_);
lean_inc_ref(v_a_2183_);
v___x_2197_ = lean_apply_8(v_op_2179_, v___x_2196_, v_todo_2195_, v_e_2194_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_, lean_box(0));
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; lean_object* v_fst_2199_; lean_object* v_snd_2200_; lean_object* v___x_2201_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2197_, 1);
v_fst_2199_ = lean_ctor_get(v_a_2198_, 0);
lean_inc(v_fst_2199_);
v_snd_2200_ = lean_ctor_get(v_a_2198_, 1);
lean_inc(v_snd_2200_);
lean_dec(v_a_2198_);
v___x_2201_ = lean_array_push(v_keys_2182_, v_fst_2199_);
v_root_2180_ = v___x_2190_;
v_todo_2181_ = v_snd_2200_;
v_keys_2182_ = v___x_2201_;
goto _start;
}
else
{
lean_object* v_a_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2210_; 
lean_dec_ref(v_keys_2182_);
lean_dec_ref(v_op_2179_);
v_a_2203_ = lean_ctor_get(v___x_2197_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2205_ = v___x_2197_;
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_a_2203_);
lean_dec(v___x_2197_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
if (v_isShared_2206_ == 0)
{
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2203_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
else
{
lean_object* v___x_2211_; 
lean_dec_ref(v_todo_2181_);
lean_dec_ref(v_op_2179_);
v___x_2211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2211_, 0, v_keys_2182_);
return v___x_2211_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath___boxed(lean_object* v_op_2212_, lean_object* v_root_2213_, lean_object* v_todo_2214_, lean_object* v_keys_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_){
_start:
{
uint8_t v_root_boxed_2221_; lean_object* v_res_2222_; 
v_root_boxed_2221_ = lean_unbox(v_root_2213_);
v_res_2222_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2212_, v_root_boxed_2221_, v_todo_2214_, v_keys_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_);
lean_dec(v_a_2219_);
lean_dec_ref(v_a_2218_);
lean_dec(v_a_2217_);
lean_dec_ref(v_a_2216_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath(lean_object* v_e_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_, lean_object* v_a_2228_){
_start:
{
lean_object* v_op_2230_; lean_object* v___x_2231_; lean_object* v_todo_2232_; uint8_t v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
v_op_2230_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_patternPath___closed__0));
v___x_2231_ = lean_unsigned_to_nat(8u);
v_todo_2232_ = lean_mk_empty_array_with_capacity(v___x_2231_);
v___x_2233_ = 1;
lean_inc_ref(v_todo_2232_);
v___x_2234_ = lean_array_push(v_todo_2232_, v_e_2224_);
v___x_2235_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2230_, v___x_2233_, v___x_2234_, v_todo_2232_, v_a_2225_, v_a_2226_, v_a_2227_, v_a_2228_);
return v___x_2235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___boxed(lean_object* v_e_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l_Lean_Meta_LazyDiscrTree_patternPath(v_e_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_);
lean_dec(v_a_2240_);
lean_dec_ref(v_a_2239_);
lean_dec(v_a_2238_);
lean_dec_ref(v_a_2237_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(uint8_t v_root_2243_, lean_object* v_todo_2244_, lean_object* v_e_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_){
_start:
{
uint8_t v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = 1;
v___x_2252_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_2245_, v___x_2251_, v_root_2243_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2270_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2270_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2255_ = v___x_2252_;
v_isShared_2256_ = v_isSharedCheck_2270_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_a_2253_);
lean_dec(v___x_2252_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2270_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v_fst_2257_; lean_object* v_snd_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2269_; 
v_fst_2257_ = lean_ctor_get(v_a_2253_, 0);
v_snd_2258_ = lean_ctor_get(v_a_2253_, 1);
v_isSharedCheck_2269_ = !lean_is_exclusive(v_a_2253_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2260_ = v_a_2253_;
v_isShared_2261_ = v_isSharedCheck_2269_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_snd_2258_);
lean_inc(v_fst_2257_);
lean_dec(v_a_2253_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2269_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2262_; lean_object* v___x_2264_; 
v___x_2262_ = l_Array_append___redArg(v_todo_2244_, v_snd_2258_);
lean_dec(v_snd_2258_);
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 1, v___x_2262_);
v___x_2264_ = v___x_2260_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_fst_2257_);
lean_ctor_set(v_reuseFailAlloc_2268_, 1, v___x_2262_);
v___x_2264_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
lean_object* v___x_2266_; 
if (v_isShared_2256_ == 0)
{
lean_ctor_set(v___x_2255_, 0, v___x_2264_);
v___x_2266_ = v___x_2255_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v___x_2264_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
}
}
}
else
{
lean_dec_ref(v_todo_2244_);
return v___x_2252_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed(lean_object* v_root_2271_, lean_object* v_todo_2272_, lean_object* v_e_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
uint8_t v_root_boxed_2279_; lean_object* v_res_2280_; 
v_root_boxed_2279_ = lean_unbox(v_root_2271_);
v_res_2280_ = l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(v_root_boxed_2279_, v_todo_2272_, v_e_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath(lean_object* v_e_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_){
_start:
{
lean_object* v_op_2288_; lean_object* v___x_2289_; lean_object* v_todo_2290_; uint8_t v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v_op_2288_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_targetPath___closed__0));
v___x_2289_ = lean_unsigned_to_nat(8u);
v_todo_2290_ = lean_mk_empty_array_with_capacity(v___x_2289_);
v___x_2291_ = 1;
lean_inc_ref(v_todo_2290_);
v___x_2292_ = lean_array_push(v_todo_2290_, v_e_2282_);
v___x_2293_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2288_, v___x_2291_, v___x_2292_, v_todo_2290_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___boxed(lean_object* v_e_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lean_Meta_LazyDiscrTree_targetPath(v_e_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_);
lean_dec(v_a_2298_);
lean_dec_ref(v_a_2297_);
lean_dec(v_a_2296_);
lean_dec_ref(v_a_2295_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(lean_object* v_tries_2301_, lean_object* v_m_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2308_ = lean_st_mk_ref(v_tries_2301_);
lean_inc(v___x_2308_);
v___x_2309_ = lean_apply_6(v_m_2302_, v___x_2308_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_, lean_box(0));
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2319_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2312_ = v___x_2309_;
v_isShared_2313_ = v_isSharedCheck_2319_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2309_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2319_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2317_; 
v___x_2314_ = lean_st_ref_get(v___x_2308_);
lean_dec(v___x_2308_);
v___x_2315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2315_, 0, v_a_2310_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v___x_2315_);
v___x_2317_ = v___x_2312_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v___x_2315_);
v___x_2317_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
return v___x_2317_;
}
}
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
lean_dec(v___x_2308_);
v_a_2320_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2309_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2309_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0___boxed(lean_object* v_tries_2328_, lean_object* v_m_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(v_tries_2328_, v_m_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg(lean_object* v_d_2336_, lean_object* v_m_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_){
_start:
{
lean_object* v_tries_2343_; lean_object* v_roots_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2399_; 
v_tries_2343_ = lean_ctor_get(v_d_2336_, 0);
v_roots_2344_ = lean_ctor_get(v_d_2336_, 1);
v_isSharedCheck_2399_ = !lean_is_exclusive(v_d_2336_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2346_ = v_d_2336_;
v_isShared_2347_ = v_isSharedCheck_2399_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_roots_2344_);
lean_inc(v_tries_2343_);
lean_dec(v_d_2336_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2399_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___y_2349_; lean_object* v___x_2378_; uint8_t v_transparency_2379_; uint8_t v___x_2380_; uint8_t v___x_2381_; 
v___x_2378_ = l_Lean_Meta_Context_config(v_a_2338_);
v_transparency_2379_ = lean_ctor_get_uint8(v___x_2378_, 9);
lean_dec_ref(v___x_2378_);
v___x_2380_ = 2;
v___x_2381_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2379_, v___x_2380_);
if (v___x_2381_ == 0)
{
lean_object* v_keyedConfig_2382_; uint8_t v_trackZetaDelta_2383_; lean_object* v_zetaDeltaSet_2384_; lean_object* v_lctx_2385_; lean_object* v_localInstances_2386_; lean_object* v_defEqCtx_x3f_2387_; lean_object* v_synthPendingDepth_2388_; lean_object* v_customCanUnfoldPredicate_x3f_2389_; uint8_t v_univApprox_2390_; uint8_t v_inTypeClassResolution_2391_; uint8_t v_cacheInferType_2392_; lean_object* v_rewriteSet_x3f_2393_; uint8_t v_rewriteFuelScope_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_keyedConfig_2382_ = lean_ctor_get(v_a_2338_, 0);
v_trackZetaDelta_2383_ = lean_ctor_get_uint8(v_a_2338_, sizeof(void*)*8);
v_zetaDeltaSet_2384_ = lean_ctor_get(v_a_2338_, 1);
v_lctx_2385_ = lean_ctor_get(v_a_2338_, 2);
v_localInstances_2386_ = lean_ctor_get(v_a_2338_, 3);
v_defEqCtx_x3f_2387_ = lean_ctor_get(v_a_2338_, 4);
v_synthPendingDepth_2388_ = lean_ctor_get(v_a_2338_, 5);
v_customCanUnfoldPredicate_x3f_2389_ = lean_ctor_get(v_a_2338_, 6);
v_univApprox_2390_ = lean_ctor_get_uint8(v_a_2338_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_2391_ = lean_ctor_get_uint8(v_a_2338_, sizeof(void*)*8 + 2);
v_cacheInferType_2392_ = lean_ctor_get_uint8(v_a_2338_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_2393_ = lean_ctor_get(v_a_2338_, 7);
v_rewriteFuelScope_2394_ = lean_ctor_get_uint8(v_a_2338_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_2382_);
v___x_2395_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2380_, v_keyedConfig_2382_);
lean_inc(v_rewriteSet_x3f_2393_);
lean_inc(v_customCanUnfoldPredicate_x3f_2389_);
lean_inc(v_synthPendingDepth_2388_);
lean_inc(v_defEqCtx_x3f_2387_);
lean_inc_ref(v_localInstances_2386_);
lean_inc_ref(v_lctx_2385_);
lean_inc(v_zetaDeltaSet_2384_);
v___x_2396_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
lean_ctor_set(v___x_2396_, 1, v_zetaDeltaSet_2384_);
lean_ctor_set(v___x_2396_, 2, v_lctx_2385_);
lean_ctor_set(v___x_2396_, 3, v_localInstances_2386_);
lean_ctor_set(v___x_2396_, 4, v_defEqCtx_x3f_2387_);
lean_ctor_set(v___x_2396_, 5, v_synthPendingDepth_2388_);
lean_ctor_set(v___x_2396_, 6, v_customCanUnfoldPredicate_x3f_2389_);
lean_ctor_set(v___x_2396_, 7, v_rewriteSet_x3f_2393_);
lean_ctor_set_uint8(v___x_2396_, sizeof(void*)*8, v_trackZetaDelta_2383_);
lean_ctor_set_uint8(v___x_2396_, sizeof(void*)*8 + 1, v_univApprox_2390_);
lean_ctor_set_uint8(v___x_2396_, sizeof(void*)*8 + 2, v_inTypeClassResolution_2391_);
lean_ctor_set_uint8(v___x_2396_, sizeof(void*)*8 + 3, v_cacheInferType_2392_);
lean_ctor_set_uint8(v___x_2396_, sizeof(void*)*8 + 4, v_rewriteFuelScope_2394_);
lean_inc(v_a_2341_);
lean_inc_ref(v_a_2340_);
lean_inc(v_a_2339_);
v___x_2397_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(v_tries_2343_, v_m_2337_, v___x_2396_, v_a_2339_, v_a_2340_, v_a_2341_);
v___y_2349_ = v___x_2397_;
goto v___jp_2348_;
}
else
{
lean_object* v___x_2398_; 
lean_inc(v_a_2341_);
lean_inc_ref(v_a_2340_);
lean_inc(v_a_2339_);
lean_inc_ref(v_a_2338_);
v___x_2398_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg___lam__0(v_tries_2343_, v_m_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_);
v___y_2349_ = v___x_2398_;
goto v___jp_2348_;
}
v___jp_2348_:
{
if (lean_obj_tag(v___y_2349_) == 0)
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2369_; 
v_a_2350_ = lean_ctor_get(v___y_2349_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___y_2349_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2352_ = v___y_2349_;
v_isShared_2353_ = v_isSharedCheck_2369_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___y_2349_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2369_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v_fst_2354_; lean_object* v_snd_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2368_; 
v_fst_2354_ = lean_ctor_get(v_a_2350_, 0);
v_snd_2355_ = lean_ctor_get(v_a_2350_, 1);
v_isSharedCheck_2368_ = !lean_is_exclusive(v_a_2350_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2357_ = v_a_2350_;
v_isShared_2358_ = v_isSharedCheck_2368_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_snd_2355_);
lean_inc(v_fst_2354_);
lean_dec(v_a_2350_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2368_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2360_; 
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 0, v_snd_2355_);
v___x_2360_ = v___x_2346_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_snd_2355_);
lean_ctor_set(v_reuseFailAlloc_2367_, 1, v_roots_2344_);
v___x_2360_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
lean_object* v___x_2362_; 
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 1, v___x_2360_);
v___x_2362_ = v___x_2357_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_fst_2354_);
lean_ctor_set(v_reuseFailAlloc_2366_, 1, v___x_2360_);
v___x_2362_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
lean_object* v___x_2364_; 
if (v_isShared_2353_ == 0)
{
lean_ctor_set(v___x_2352_, 0, v___x_2362_);
v___x_2364_ = v___x_2352_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v___x_2362_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
}
}
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
lean_del_object(v___x_2346_);
lean_dec_ref(v_roots_2344_);
v_a_2370_ = lean_ctor_get(v___y_2349_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___y_2349_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___y_2349_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___y_2349_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___boxed(lean_object* v_d_2400_, lean_object* v_m_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_){
_start:
{
lean_object* v_res_2407_; 
v_res_2407_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_2400_, v_m_2401_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_);
lean_dec(v_a_2405_);
lean_dec_ref(v_a_2404_);
lean_dec(v_a_2403_);
lean_dec_ref(v_a_2402_);
return v_res_2407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch(lean_object* v_00_u03b1_2408_, lean_object* v_00_u03b2_2409_, lean_object* v_d_2410_, lean_object* v_m_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_){
_start:
{
lean_object* v___x_2417_; 
v___x_2417_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_2410_, v_m_2411_, v_a_2412_, v_a_2413_, v_a_2414_, v_a_2415_);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___boxed(lean_object* v_00_u03b1_2418_, lean_object* v_00_u03b2_2419_, lean_object* v_d_2420_, lean_object* v_m_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l_Lean_Meta_LazyDiscrTree_runMatch(v_00_u03b1_2418_, v_00_u03b2_2419_, v_d_2420_, v_m_2421_, v_a_2422_, v_a_2423_, v_a_2424_, v_a_2425_);
lean_dec(v_a_2425_);
lean_dec_ref(v_a_2424_);
lean_dec(v_a_2423_);
lean_dec_ref(v_a_2422_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg(lean_object* v_i_2428_, lean_object* v_v_2429_, lean_object* v_a_2430_){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2432_ = lean_st_ref_take(v_a_2430_);
v___x_2433_ = lean_box(0);
v___x_2434_ = lean_array_set(v___x_2432_, v_i_2428_, v_v_2429_);
v___x_2435_ = lean_st_ref_put(v_a_2430_, v___x_2434_);
v___x_2436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2433_);
return v___x_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg___boxed(lean_object* v_i_2437_, lean_object* v_v_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_i_2437_, v_v_2438_, v_a_2439_);
lean_dec(v_a_2439_);
lean_dec(v_i_2437_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie(lean_object* v_00_u03b1_2442_, lean_object* v_i_2443_, lean_object* v_v_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_i_2443_, v_v_2444_, v_a_2445_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___boxed(lean_object* v_00_u03b1_2452_, lean_object* v_i_2453_, lean_object* v_v_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lean_Meta_LazyDiscrTree_setTrie(v_00_u03b1_2452_, v_i_2453_, v_v_2454_, v_a_2455_, v_a_2456_, v_a_2457_, v_a_2458_, v_a_2459_);
lean_dec(v_a_2459_);
lean_dec_ref(v_a_2458_);
lean_dec(v_a_2457_);
lean_dec_ref(v_a_2456_);
lean_dec(v_a_2455_);
lean_dec(v_i_2453_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0(lean_object* v_e_2462_, lean_object* v_a_2463_){
_start:
{
lean_object* v_sz_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v_sz_2464_ = lean_array_get_size(v_a_2463_);
v___x_2465_ = lean_unsigned_to_nat(0u);
v___x_2466_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_2467_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_2468_ = lean_unsigned_to_nat(1u);
v___x_2469_ = lean_mk_empty_array_with_capacity(v___x_2468_);
v___x_2470_ = lean_array_push(v___x_2469_, v_e_2462_);
v___x_2471_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2466_);
lean_ctor_set(v___x_2471_, 1, v___x_2465_);
lean_ctor_set(v___x_2471_, 2, v___x_2467_);
lean_ctor_set(v___x_2471_, 3, v___x_2470_);
v___x_2472_ = lean_array_push(v_a_2463_, v___x_2471_);
v___x_2473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2473_, 0, v_sz_2464_);
lean_ctor_set(v___x_2473_, 1, v___x_2472_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg(lean_object* v_inst_2474_, lean_object* v_e_2475_){
_start:
{
lean_object* v_modifyGet_2476_; lean_object* v___f_2477_; lean_object* v___x_2478_; 
v_modifyGet_2476_ = lean_ctor_get(v_inst_2474_, 2);
lean_inc(v_modifyGet_2476_);
lean_dec_ref(v_inst_2474_);
v___f_2477_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2477_, 0, v_e_2475_);
v___x_2478_ = lean_apply_2(v_modifyGet_2476_, lean_box(0), v___f_2477_);
return v___x_2478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie(lean_object* v_m_2479_, lean_object* v_00_u03b1_2480_, lean_object* v_inst_2481_, lean_object* v_inst_2482_, lean_object* v_e_2483_){
_start:
{
lean_object* v___x_2484_; 
v___x_2484_ = l_Lean_Meta_LazyDiscrTree_newTrie___redArg(v_inst_2482_, v_e_2483_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___boxed(lean_object* v_m_2485_, lean_object* v_00_u03b1_2486_, lean_object* v_inst_2487_, lean_object* v_inst_2488_, lean_object* v_e_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Lean_Meta_LazyDiscrTree_newTrie(v_m_2485_, v_00_u03b1_2486_, v_inst_2487_, v_inst_2488_, v_e_2489_);
lean_dec_ref(v_inst_2487_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(lean_object* v_i_2491_, lean_object* v_e_2492_, lean_object* v_a_2493_){
_start:
{
lean_object* v___x_2495_; lean_object* v_fst_2497_; lean_object* v_snd_2498_; lean_object* v___x_2501_; lean_object* v___x_2502_; uint8_t v___x_2503_; 
v___x_2495_ = lean_st_ref_take(v_a_2493_);
v___x_2501_ = lean_box(0);
v___x_2502_ = lean_array_get_size(v___x_2495_);
v___x_2503_ = lean_nat_dec_lt(v_i_2491_, v___x_2502_);
if (v___x_2503_ == 0)
{
lean_dec_ref(v_e_2492_);
v_fst_2497_ = v___x_2501_;
v_snd_2498_ = v___x_2495_;
goto v___jp_2496_;
}
else
{
lean_object* v_v_2504_; lean_object* v_xs_x27_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v_v_2504_ = lean_array_fget(v___x_2495_, v_i_2491_);
v_xs_x27_2505_ = lean_array_fset(v___x_2495_, v_i_2491_, v___x_2501_);
v___x_2506_ = l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(v_v_2504_, v_e_2492_);
v___x_2507_ = lean_array_fset(v_xs_x27_2505_, v_i_2491_, v___x_2506_);
v_fst_2497_ = v___x_2501_;
v_snd_2498_ = v___x_2507_;
goto v___jp_2496_;
}
v___jp_2496_:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = lean_st_ref_put(v_a_2493_, v_snd_2498_);
v___x_2500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2500_, 0, v_fst_2497_);
return v___x_2500_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___boxed(lean_object* v_i_2508_, lean_object* v_e_2509_, lean_object* v_a_2510_, lean_object* v_a_2511_){
_start:
{
lean_object* v_res_2512_; 
v_res_2512_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_i_2508_, v_e_2509_, v_a_2510_);
lean_dec(v_a_2510_);
lean_dec(v_i_2508_);
return v_res_2512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(lean_object* v_00_u03b1_2513_, lean_object* v_i_2514_, lean_object* v_e_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_){
_start:
{
lean_object* v___x_2522_; 
v___x_2522_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_i_2514_, v_e_2515_, v_a_2516_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___boxed(lean_object* v_00_u03b1_2523_, lean_object* v_i_2524_, lean_object* v_e_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_){
_start:
{
lean_object* v_res_2532_; 
v_res_2532_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(v_00_u03b1_2523_, v_i_2524_, v_e_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_);
lean_dec(v_a_2530_);
lean_dec_ref(v_a_2529_);
lean_dec(v_a_2528_);
lean_dec_ref(v_a_2527_);
lean_dec(v_a_2526_);
lean_dec(v_i_2524_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(lean_object* v_x_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_){
_start:
{
lean_object* v___x_2540_; 
lean_inc(v___y_2534_);
v___x_2540_ = lean_apply_6(v_x_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, lean_box(0));
return v___x_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed(lean_object* v_x_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_){
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(v_x_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
lean_dec(v___y_2542_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(lean_object* v_lctx_2549_, lean_object* v_localInsts_2550_, lean_object* v_x_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_){
_start:
{
lean_object* v___f_2558_; lean_object* v___x_2559_; 
lean_inc(v___y_2552_);
v___f_2558_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2558_, 0, v_x_2551_);
lean_closure_set(v___f_2558_, 1, v___y_2552_);
v___x_2559_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2549_, v_localInsts_2550_, v___f_2558_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_);
if (lean_obj_tag(v___x_2559_) == 0)
{
return v___x_2559_;
}
else
{
lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2567_; 
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2567_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2562_ = v___x_2559_;
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v___x_2559_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2565_; 
if (v_isShared_2563_ == 0)
{
v___x_2565_ = v___x_2562_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_a_2560_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___boxed(lean_object* v_lctx_2568_, lean_object* v_localInsts_2569_, lean_object* v_x_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_lctx_2568_, v_localInsts_2569_, v_x_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec(v___y_2571_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(lean_object* v_00_u03b1_2578_, lean_object* v_00_u03b1_2579_, lean_object* v_lctx_2580_, lean_object* v_localInsts_2581_, lean_object* v_x_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
lean_object* v___x_2589_; 
v___x_2589_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_lctx_2580_, v_localInsts_2581_, v_x_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___boxed(lean_object* v_00_u03b1_2590_, lean_object* v_00_u03b1_2591_, lean_object* v_lctx_2592_, lean_object* v_localInsts_2593_, lean_object* v_x_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_){
_start:
{
lean_object* v_res_2601_; 
v_res_2601_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(v_00_u03b1_2590_, v_00_u03b1_2591_, v_lctx_2592_, v_localInsts_2593_, v_x_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_);
lean_dec(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec(v___y_2597_);
lean_dec_ref(v___y_2596_);
lean_dec(v___y_2595_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(lean_object* v_e_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v___x_2605_; lean_object* v_sz_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2605_ = lean_st_ref_take(v___y_2603_);
v_sz_2606_ = lean_array_get_size(v___x_2605_);
v___x_2607_ = lean_unsigned_to_nat(0u);
v___x_2608_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_2609_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_2610_ = lean_unsigned_to_nat(1u);
v___x_2611_ = lean_mk_empty_array_with_capacity(v___x_2610_);
v___x_2612_ = lean_array_push(v___x_2611_, v_e_2602_);
v___x_2613_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2608_);
lean_ctor_set(v___x_2613_, 1, v___x_2607_);
lean_ctor_set(v___x_2613_, 2, v___x_2609_);
lean_ctor_set(v___x_2613_, 3, v___x_2612_);
v___x_2614_ = lean_array_push(v___x_2605_, v___x_2613_);
v___x_2615_ = lean_st_ref_put(v___y_2603_, v___x_2614_);
v___x_2616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2616_, 0, v_sz_2606_);
return v___x_2616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg___boxed(lean_object* v_e_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_){
_start:
{
lean_object* v_res_2620_; 
v_res_2620_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v_e_2617_, v___y_2618_);
lean_dec(v___y_2618_);
return v_res_2620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(lean_object* v_00_u03b1_2621_, lean_object* v_e_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_){
_start:
{
lean_object* v___x_2629_; 
v___x_2629_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v_e_2622_, v___y_2623_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___boxed(lean_object* v_00_u03b1_2630_, lean_object* v_e_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(v_00_u03b1_2630_, v_e_2631_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
lean_dec(v___y_2636_);
lean_dec_ref(v___y_2635_);
lean_dec(v___y_2634_);
lean_dec_ref(v___y_2633_);
lean_dec(v___y_2632_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(uint8_t v___x_2639_, lean_object* v_todo_2640_, lean_object* v_e_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v___x_2648_; 
v___x_2648_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v___x_2639_, v_todo_2640_, v_e_2641_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed(lean_object* v___x_2649_, lean_object* v_todo_2650_, lean_object* v_e_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_){
_start:
{
uint8_t v___x_3423__boxed_2658_; lean_object* v_res_2659_; 
v___x_3423__boxed_2658_ = lean_unbox(v___x_2649_);
v_res_2659_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(v___x_3423__boxed_2658_, v_todo_2650_, v_e_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
lean_dec(v___y_2656_);
lean_dec_ref(v___y_2655_);
lean_dec(v___y_2654_);
lean_dec_ref(v___y_2653_);
lean_dec(v___y_2652_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(lean_object* v_a_2660_, lean_object* v_b_2661_, lean_object* v_x_2662_){
_start:
{
if (lean_obj_tag(v_x_2662_) == 0)
{
lean_dec(v_b_2661_);
lean_dec(v_a_2660_);
return v_x_2662_;
}
else
{
lean_object* v_key_2663_; lean_object* v_value_2664_; lean_object* v_tail_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2677_; 
v_key_2663_ = lean_ctor_get(v_x_2662_, 0);
v_value_2664_ = lean_ctor_get(v_x_2662_, 1);
v_tail_2665_ = lean_ctor_get(v_x_2662_, 2);
v_isSharedCheck_2677_ = !lean_is_exclusive(v_x_2662_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2667_ = v_x_2662_;
v_isShared_2668_ = v_isSharedCheck_2677_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_tail_2665_);
lean_inc(v_value_2664_);
lean_inc(v_key_2663_);
lean_dec(v_x_2662_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2677_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
uint8_t v___x_2669_; 
v___x_2669_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2663_, v_a_2660_);
if (v___x_2669_ == 0)
{
lean_object* v___x_2670_; lean_object* v___x_2672_; 
v___x_2670_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_2660_, v_b_2661_, v_tail_2665_);
if (v_isShared_2668_ == 0)
{
lean_ctor_set(v___x_2667_, 2, v___x_2670_);
v___x_2672_ = v___x_2667_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_key_2663_);
lean_ctor_set(v_reuseFailAlloc_2673_, 1, v_value_2664_);
lean_ctor_set(v_reuseFailAlloc_2673_, 2, v___x_2670_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
return v___x_2672_;
}
}
else
{
lean_object* v___x_2675_; 
lean_dec(v_value_2664_);
lean_dec(v_key_2663_);
if (v_isShared_2668_ == 0)
{
lean_ctor_set(v___x_2667_, 1, v_b_2661_);
lean_ctor_set(v___x_2667_, 0, v_a_2660_);
v___x_2675_ = v___x_2667_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_a_2660_);
lean_ctor_set(v_reuseFailAlloc_2676_, 1, v_b_2661_);
lean_ctor_set(v_reuseFailAlloc_2676_, 2, v_tail_2665_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(lean_object* v_a_2678_, lean_object* v_x_2679_){
_start:
{
if (lean_obj_tag(v_x_2679_) == 0)
{
uint8_t v___x_2680_; 
v___x_2680_ = 0;
return v___x_2680_;
}
else
{
lean_object* v_key_2681_; lean_object* v_tail_2682_; uint8_t v___x_2683_; 
v_key_2681_ = lean_ctor_get(v_x_2679_, 0);
v_tail_2682_ = lean_ctor_get(v_x_2679_, 2);
v___x_2683_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2681_, v_a_2678_);
if (v___x_2683_ == 0)
{
v_x_2679_ = v_tail_2682_;
goto _start;
}
else
{
return v___x_2683_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg___boxed(lean_object* v_a_2685_, lean_object* v_x_2686_){
_start:
{
uint8_t v_res_2687_; lean_object* v_r_2688_; 
v_res_2687_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_2685_, v_x_2686_);
lean_dec(v_x_2686_);
lean_dec(v_a_2685_);
v_r_2688_ = lean_box(v_res_2687_);
return v_r_2688_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(lean_object* v_x_2689_, lean_object* v_x_2690_){
_start:
{
if (lean_obj_tag(v_x_2690_) == 0)
{
return v_x_2689_;
}
else
{
lean_object* v_key_2691_; lean_object* v_value_2692_; lean_object* v_tail_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2716_; 
v_key_2691_ = lean_ctor_get(v_x_2690_, 0);
v_value_2692_ = lean_ctor_get(v_x_2690_, 1);
v_tail_2693_ = lean_ctor_get(v_x_2690_, 2);
v_isSharedCheck_2716_ = !lean_is_exclusive(v_x_2690_);
if (v_isSharedCheck_2716_ == 0)
{
v___x_2695_ = v_x_2690_;
v_isShared_2696_ = v_isSharedCheck_2716_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_tail_2693_);
lean_inc(v_value_2692_);
lean_inc(v_key_2691_);
lean_dec(v_x_2690_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2716_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2697_; uint64_t v___x_2698_; uint64_t v___x_2699_; uint64_t v___x_2700_; uint64_t v_fold_2701_; uint64_t v___x_2702_; uint64_t v___x_2703_; uint64_t v___x_2704_; size_t v___x_2705_; size_t v___x_2706_; size_t v___x_2707_; size_t v___x_2708_; size_t v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2712_; 
v___x_2697_ = lean_array_get_size(v_x_2689_);
v___x_2698_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_key_2691_);
v___x_2699_ = 32ULL;
v___x_2700_ = lean_uint64_shift_right(v___x_2698_, v___x_2699_);
v_fold_2701_ = lean_uint64_xor(v___x_2698_, v___x_2700_);
v___x_2702_ = 16ULL;
v___x_2703_ = lean_uint64_shift_right(v_fold_2701_, v___x_2702_);
v___x_2704_ = lean_uint64_xor(v_fold_2701_, v___x_2703_);
v___x_2705_ = lean_uint64_to_usize(v___x_2704_);
v___x_2706_ = lean_usize_of_nat(v___x_2697_);
v___x_2707_ = ((size_t)1ULL);
v___x_2708_ = lean_usize_sub(v___x_2706_, v___x_2707_);
v___x_2709_ = lean_usize_land(v___x_2705_, v___x_2708_);
v___x_2710_ = lean_array_uget_borrowed(v_x_2689_, v___x_2709_);
lean_inc(v___x_2710_);
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 2, v___x_2710_);
v___x_2712_ = v___x_2695_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_key_2691_);
lean_ctor_set(v_reuseFailAlloc_2715_, 1, v_value_2692_);
lean_ctor_set(v_reuseFailAlloc_2715_, 2, v___x_2710_);
v___x_2712_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
lean_object* v___x_2713_; 
v___x_2713_ = lean_array_uset(v_x_2689_, v___x_2709_, v___x_2712_);
v_x_2689_ = v___x_2713_;
v_x_2690_ = v_tail_2693_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(lean_object* v_i_2717_, lean_object* v_source_2718_, lean_object* v_target_2719_){
_start:
{
lean_object* v___x_2720_; uint8_t v___x_2721_; 
v___x_2720_ = lean_array_get_size(v_source_2718_);
v___x_2721_ = lean_nat_dec_lt(v_i_2717_, v___x_2720_);
if (v___x_2721_ == 0)
{
lean_dec_ref(v_source_2718_);
lean_dec(v_i_2717_);
return v_target_2719_;
}
else
{
lean_object* v_es_2722_; lean_object* v___x_2723_; lean_object* v_source_2724_; lean_object* v_target_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v_es_2722_ = lean_array_fget(v_source_2718_, v_i_2717_);
v___x_2723_ = lean_box(0);
v_source_2724_ = lean_array_fset(v_source_2718_, v_i_2717_, v___x_2723_);
v_target_2725_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(v_target_2719_, v_es_2722_);
v___x_2726_ = lean_unsigned_to_nat(1u);
v___x_2727_ = lean_nat_add(v_i_2717_, v___x_2726_);
lean_dec(v_i_2717_);
v_i_2717_ = v___x_2727_;
v_source_2718_ = v_source_2724_;
v_target_2719_ = v_target_2725_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(lean_object* v_data_2729_){
_start:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v_nbuckets_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2730_ = lean_array_get_size(v_data_2729_);
v___x_2731_ = lean_unsigned_to_nat(2u);
v_nbuckets_2732_ = lean_nat_mul(v___x_2730_, v___x_2731_);
v___x_2733_ = lean_unsigned_to_nat(0u);
v___x_2734_ = lean_box(0);
v___x_2735_ = lean_mk_array(v_nbuckets_2732_, v___x_2734_);
v___x_2736_ = lean_array_propagate_mark(v_data_2729_, v___x_2735_);
v___x_2737_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(v___x_2733_, v_data_2729_, v___x_2736_);
return v___x_2737_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(lean_object* v_m_2738_, lean_object* v_a_2739_, lean_object* v_b_2740_){
_start:
{
lean_object* v_size_2741_; lean_object* v_buckets_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2785_; 
v_size_2741_ = lean_ctor_get(v_m_2738_, 0);
v_buckets_2742_ = lean_ctor_get(v_m_2738_, 1);
v_isSharedCheck_2785_ = !lean_is_exclusive(v_m_2738_);
if (v_isSharedCheck_2785_ == 0)
{
v___x_2744_ = v_m_2738_;
v_isShared_2745_ = v_isSharedCheck_2785_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_buckets_2742_);
lean_inc(v_size_2741_);
lean_dec(v_m_2738_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2785_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2746_; uint64_t v___x_2747_; uint64_t v___x_2748_; uint64_t v___x_2749_; uint64_t v_fold_2750_; uint64_t v___x_2751_; uint64_t v___x_2752_; uint64_t v___x_2753_; size_t v___x_2754_; size_t v___x_2755_; size_t v___x_2756_; size_t v___x_2757_; size_t v___x_2758_; lean_object* v_bkt_2759_; uint8_t v___x_2760_; 
v___x_2746_ = lean_array_get_size(v_buckets_2742_);
v___x_2747_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_2739_);
v___x_2748_ = 32ULL;
v___x_2749_ = lean_uint64_shift_right(v___x_2747_, v___x_2748_);
v_fold_2750_ = lean_uint64_xor(v___x_2747_, v___x_2749_);
v___x_2751_ = 16ULL;
v___x_2752_ = lean_uint64_shift_right(v_fold_2750_, v___x_2751_);
v___x_2753_ = lean_uint64_xor(v_fold_2750_, v___x_2752_);
v___x_2754_ = lean_uint64_to_usize(v___x_2753_);
v___x_2755_ = lean_usize_of_nat(v___x_2746_);
v___x_2756_ = ((size_t)1ULL);
v___x_2757_ = lean_usize_sub(v___x_2755_, v___x_2756_);
v___x_2758_ = lean_usize_land(v___x_2754_, v___x_2757_);
v_bkt_2759_ = lean_array_uget_borrowed(v_buckets_2742_, v___x_2758_);
v___x_2760_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_2739_, v_bkt_2759_);
if (v___x_2760_ == 0)
{
lean_object* v___x_2761_; lean_object* v_size_x27_2762_; lean_object* v___x_2763_; lean_object* v_buckets_x27_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; uint8_t v___x_2770_; 
v___x_2761_ = lean_unsigned_to_nat(1u);
v_size_x27_2762_ = lean_nat_add(v_size_2741_, v___x_2761_);
lean_dec(v_size_2741_);
lean_inc(v_bkt_2759_);
v___x_2763_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2763_, 0, v_a_2739_);
lean_ctor_set(v___x_2763_, 1, v_b_2740_);
lean_ctor_set(v___x_2763_, 2, v_bkt_2759_);
v_buckets_x27_2764_ = lean_array_uset(v_buckets_2742_, v___x_2758_, v___x_2763_);
v___x_2765_ = lean_unsigned_to_nat(4u);
v___x_2766_ = lean_nat_mul(v_size_x27_2762_, v___x_2765_);
v___x_2767_ = lean_unsigned_to_nat(3u);
v___x_2768_ = lean_nat_div(v___x_2766_, v___x_2767_);
lean_dec(v___x_2766_);
v___x_2769_ = lean_array_get_size(v_buckets_x27_2764_);
v___x_2770_ = lean_nat_dec_le(v___x_2768_, v___x_2769_);
lean_dec(v___x_2768_);
if (v___x_2770_ == 0)
{
lean_object* v_val_2771_; lean_object* v___x_2773_; 
v_val_2771_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(v_buckets_x27_2764_);
if (v_isShared_2745_ == 0)
{
lean_ctor_set(v___x_2744_, 1, v_val_2771_);
lean_ctor_set(v___x_2744_, 0, v_size_x27_2762_);
v___x_2773_ = v___x_2744_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v_size_x27_2762_);
lean_ctor_set(v_reuseFailAlloc_2774_, 1, v_val_2771_);
v___x_2773_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
return v___x_2773_;
}
}
else
{
lean_object* v___x_2776_; 
if (v_isShared_2745_ == 0)
{
lean_ctor_set(v___x_2744_, 1, v_buckets_x27_2764_);
lean_ctor_set(v___x_2744_, 0, v_size_x27_2762_);
v___x_2776_ = v___x_2744_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v_size_x27_2762_);
lean_ctor_set(v_reuseFailAlloc_2777_, 1, v_buckets_x27_2764_);
v___x_2776_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
return v___x_2776_;
}
}
}
else
{
lean_object* v___x_2778_; lean_object* v_buckets_x27_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2783_; 
lean_inc(v_bkt_2759_);
v___x_2778_ = lean_box(0);
v_buckets_x27_2779_ = lean_array_uset(v_buckets_2742_, v___x_2758_, v___x_2778_);
v___x_2780_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_2739_, v_b_2740_, v_bkt_2759_);
v___x_2781_ = lean_array_uset(v_buckets_x27_2779_, v___x_2758_, v___x_2780_);
if (v_isShared_2745_ == 0)
{
lean_ctor_set(v___x_2744_, 1, v___x_2781_);
v___x_2783_ = v___x_2744_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v_size_2741_);
lean_ctor_set(v_reuseFailAlloc_2784_, 1, v___x_2781_);
v___x_2783_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
return v___x_2783_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(lean_object* v_a_2786_, lean_object* v_x_2787_){
_start:
{
if (lean_obj_tag(v_x_2787_) == 0)
{
lean_object* v___x_2788_; 
v___x_2788_ = lean_box(0);
return v___x_2788_;
}
else
{
lean_object* v_key_2789_; lean_object* v_value_2790_; lean_object* v_tail_2791_; uint8_t v___x_2792_; 
v_key_2789_ = lean_ctor_get(v_x_2787_, 0);
v_value_2790_ = lean_ctor_get(v_x_2787_, 1);
v_tail_2791_ = lean_ctor_get(v_x_2787_, 2);
v___x_2792_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2789_, v_a_2786_);
if (v___x_2792_ == 0)
{
v_x_2787_ = v_tail_2791_;
goto _start;
}
else
{
lean_object* v___x_2794_; 
lean_inc(v_value_2790_);
v___x_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2794_, 0, v_value_2790_);
return v___x_2794_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg___boxed(lean_object* v_a_2795_, lean_object* v_x_2796_){
_start:
{
lean_object* v_res_2797_; 
v_res_2797_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_2795_, v_x_2796_);
lean_dec(v_x_2796_);
lean_dec(v_a_2795_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(lean_object* v_m_2798_, lean_object* v_a_2799_){
_start:
{
lean_object* v_buckets_2800_; lean_object* v___x_2801_; uint64_t v___x_2802_; uint64_t v___x_2803_; uint64_t v___x_2804_; uint64_t v_fold_2805_; uint64_t v___x_2806_; uint64_t v___x_2807_; uint64_t v___x_2808_; size_t v___x_2809_; size_t v___x_2810_; size_t v___x_2811_; size_t v___x_2812_; size_t v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v_buckets_2800_ = lean_ctor_get(v_m_2798_, 1);
v___x_2801_ = lean_array_get_size(v_buckets_2800_);
v___x_2802_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_2799_);
v___x_2803_ = 32ULL;
v___x_2804_ = lean_uint64_shift_right(v___x_2802_, v___x_2803_);
v_fold_2805_ = lean_uint64_xor(v___x_2802_, v___x_2804_);
v___x_2806_ = 16ULL;
v___x_2807_ = lean_uint64_shift_right(v_fold_2805_, v___x_2806_);
v___x_2808_ = lean_uint64_xor(v_fold_2805_, v___x_2807_);
v___x_2809_ = lean_uint64_to_usize(v___x_2808_);
v___x_2810_ = lean_usize_of_nat(v___x_2801_);
v___x_2811_ = ((size_t)1ULL);
v___x_2812_ = lean_usize_sub(v___x_2810_, v___x_2811_);
v___x_2813_ = lean_usize_land(v___x_2809_, v___x_2812_);
v___x_2814_ = lean_array_uget_borrowed(v_buckets_2800_, v___x_2813_);
v___x_2815_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_2799_, v___x_2814_);
return v___x_2815_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg___boxed(lean_object* v_m_2816_, lean_object* v_a_2817_){
_start:
{
lean_object* v_res_2818_; 
v_res_2818_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_m_2816_, v_a_2817_);
lean_dec(v_a_2817_);
lean_dec_ref(v_m_2816_);
return v_res_2818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(lean_object* v_p_2819_, lean_object* v_entry_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_){
_start:
{
lean_object* v_snd_2827_; lean_object* v_snd_2828_; lean_object* v_fst_2829_; lean_object* v_fst_2830_; lean_object* v_snd_2831_; lean_object* v_fst_2832_; lean_object* v_fst_2833_; lean_object* v_snd_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; uint8_t v___x_2837_; 
v_snd_2827_ = lean_ctor_get(v_p_2819_, 1);
v_snd_2828_ = lean_ctor_get(v_entry_2820_, 1);
lean_inc(v_snd_2828_);
v_fst_2829_ = lean_ctor_get(v_p_2819_, 0);
v_fst_2830_ = lean_ctor_get(v_snd_2827_, 0);
v_snd_2831_ = lean_ctor_get(v_snd_2827_, 1);
v_fst_2832_ = lean_ctor_get(v_entry_2820_, 0);
lean_inc(v_fst_2832_);
lean_dec_ref(v_entry_2820_);
v_fst_2833_ = lean_ctor_get(v_snd_2828_, 0);
lean_inc(v_fst_2833_);
v_snd_2834_ = lean_ctor_get(v_snd_2828_, 1);
v___x_2835_ = lean_array_get_size(v_fst_2832_);
v___x_2836_ = lean_unsigned_to_nat(0u);
v___x_2837_ = lean_nat_dec_eq(v___x_2835_, v___x_2836_);
if (v___x_2837_ == 0)
{
lean_object* v_fst_2838_; lean_object* v_snd_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2944_; 
v_fst_2838_ = lean_ctor_get(v_fst_2833_, 0);
v_snd_2839_ = lean_ctor_get(v_fst_2833_, 1);
v_isSharedCheck_2944_ = !lean_is_exclusive(v_fst_2833_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2841_ = v_fst_2833_;
v_isShared_2842_ = v_isSharedCheck_2944_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_snd_2839_);
lean_inc(v_fst_2838_);
lean_dec(v_fst_2833_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2944_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v_e_2846_; lean_object* v_todo_2847_; lean_object* v___x_2848_; lean_object* v___f_2849_; lean_object* v___x_2850_; 
v___x_2843_ = l_Lean_instInhabitedExpr;
v___x_2844_ = lean_unsigned_to_nat(1u);
v___x_2845_ = lean_nat_sub(v___x_2835_, v___x_2844_);
v_e_2846_ = lean_array_get(v___x_2843_, v_fst_2832_, v___x_2845_);
lean_dec(v___x_2845_);
v_todo_2847_ = lean_array_pop(v_fst_2832_);
v___x_2848_ = lean_box(v___x_2837_);
v___f_2849_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2849_, 0, v___x_2848_);
lean_closure_set(v___f_2849_, 1, v_todo_2847_);
lean_closure_set(v___f_2849_, 2, v_e_2846_);
v___x_2850_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_fst_2838_, v_snd_2839_, v___f_2849_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_, v_a_2825_);
if (lean_obj_tag(v___x_2850_) == 0)
{
lean_object* v_a_2851_; lean_object* v_fst_2852_; lean_object* v_snd_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_2935_; 
v_a_2851_ = lean_ctor_get(v___x_2850_, 0);
lean_inc(v_a_2851_);
lean_dec_ref_known(v___x_2850_, 1);
v_fst_2852_ = lean_ctor_get(v_a_2851_, 0);
v_snd_2853_ = lean_ctor_get(v_a_2851_, 1);
v_isSharedCheck_2935_ = !lean_is_exclusive(v_a_2851_);
if (v_isSharedCheck_2935_ == 0)
{
v___x_2855_ = v_a_2851_;
v_isShared_2856_ = v_isSharedCheck_2935_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_snd_2853_);
lean_inc(v_fst_2852_);
lean_dec(v_a_2851_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_2935_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v___x_2857_; uint8_t v___x_2858_; 
v___x_2857_ = lean_box(3);
v___x_2858_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_fst_2852_, v___x_2857_);
if (v___x_2858_ == 0)
{
lean_object* v___x_2859_; 
v___x_2859_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_snd_2831_, v_fst_2852_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v___x_2861_; 
lean_inc(v_snd_2831_);
lean_inc(v_fst_2830_);
lean_inc(v_fst_2829_);
lean_dec_ref(v_p_2819_);
lean_inc(v_snd_2828_);
if (v_isShared_2856_ == 0)
{
lean_ctor_set(v___x_2855_, 1, v_snd_2828_);
lean_ctor_set(v___x_2855_, 0, v_snd_2853_);
v___x_2861_ = v___x_2855_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_snd_2853_);
lean_ctor_set(v_reuseFailAlloc_2884_, 1, v_snd_2828_);
v___x_2861_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2881_; 
v_isSharedCheck_2881_ = !lean_is_exclusive(v_snd_2828_);
if (v_isSharedCheck_2881_ == 0)
{
lean_object* v_unused_2882_; lean_object* v_unused_2883_; 
v_unused_2882_ = lean_ctor_get(v_snd_2828_, 1);
lean_dec(v_unused_2882_);
v_unused_2883_ = lean_ctor_get(v_snd_2828_, 0);
lean_dec(v_unused_2883_);
v___x_2863_ = v_snd_2828_;
v_isShared_2864_ = v_isSharedCheck_2881_;
goto v_resetjp_2862_;
}
else
{
lean_dec(v_snd_2828_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2881_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2865_; lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2880_; 
v___x_2865_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v___x_2861_, v_a_2821_);
v_a_2866_ = lean_ctor_get(v___x_2865_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2865_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2868_ = v___x_2865_;
v_isShared_2869_ = v_isSharedCheck_2880_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v___x_2865_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2880_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2870_; lean_object* v___x_2872_; 
v___x_2870_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_snd_2831_, v_fst_2852_, v_a_2866_);
if (v_isShared_2842_ == 0)
{
lean_ctor_set(v___x_2841_, 1, v___x_2870_);
lean_ctor_set(v___x_2841_, 0, v_fst_2830_);
v___x_2872_ = v___x_2841_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_fst_2830_);
lean_ctor_set(v_reuseFailAlloc_2879_, 1, v___x_2870_);
v___x_2872_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
lean_object* v___x_2874_; 
if (v_isShared_2864_ == 0)
{
lean_ctor_set(v___x_2863_, 1, v___x_2872_);
lean_ctor_set(v___x_2863_, 0, v_fst_2829_);
v___x_2874_ = v___x_2863_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_fst_2829_);
lean_ctor_set(v_reuseFailAlloc_2878_, 1, v___x_2872_);
v___x_2874_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
lean_object* v___x_2876_; 
if (v_isShared_2869_ == 0)
{
lean_ctor_set(v___x_2868_, 0, v___x_2874_);
v___x_2876_ = v___x_2868_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v___x_2874_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
}
}
}
}
}
else
{
lean_object* v_val_2885_; lean_object* v___x_2887_; 
lean_dec(v_fst_2852_);
lean_del_object(v___x_2841_);
v_val_2885_ = lean_ctor_get(v___x_2859_, 0);
lean_inc(v_val_2885_);
lean_dec_ref_known(v___x_2859_, 1);
if (v_isShared_2856_ == 0)
{
lean_ctor_set(v___x_2855_, 1, v_snd_2828_);
lean_ctor_set(v___x_2855_, 0, v_snd_2853_);
v___x_2887_ = v___x_2855_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_snd_2853_);
lean_ctor_set(v_reuseFailAlloc_2897_, 1, v_snd_2828_);
v___x_2887_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
lean_object* v___x_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2895_; 
v___x_2888_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_val_2885_, v___x_2887_, v_a_2821_);
lean_dec(v_val_2885_);
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2888_);
if (v_isSharedCheck_2895_ == 0)
{
lean_object* v_unused_2896_; 
v_unused_2896_ = lean_ctor_get(v___x_2888_, 0);
lean_dec(v_unused_2896_);
v___x_2890_ = v___x_2888_;
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
else
{
lean_dec(v___x_2888_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v___x_2893_; 
if (v_isShared_2891_ == 0)
{
lean_ctor_set(v___x_2890_, 0, v_p_2819_);
v___x_2893_ = v___x_2890_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_p_2819_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
}
}
}
else
{
uint8_t v___x_2898_; 
lean_dec(v_fst_2852_);
v___x_2898_ = lean_nat_dec_eq(v_fst_2830_, v___x_2836_);
if (v___x_2898_ == 0)
{
lean_object* v___x_2900_; 
lean_del_object(v___x_2841_);
if (v_isShared_2856_ == 0)
{
lean_ctor_set(v___x_2855_, 1, v_snd_2828_);
lean_ctor_set(v___x_2855_, 0, v_snd_2853_);
v___x_2900_ = v___x_2855_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_snd_2853_);
lean_ctor_set(v_reuseFailAlloc_2910_, 1, v_snd_2828_);
v___x_2900_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
lean_object* v___x_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2908_; 
v___x_2901_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_fst_2830_, v___x_2900_, v_a_2821_);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___x_2901_);
if (v_isSharedCheck_2908_ == 0)
{
lean_object* v_unused_2909_; 
v_unused_2909_ = lean_ctor_get(v___x_2901_, 0);
lean_dec(v_unused_2909_);
v___x_2903_ = v___x_2901_;
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
else
{
lean_dec(v___x_2901_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2906_; 
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 0, v_p_2819_);
v___x_2906_ = v___x_2903_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_p_2819_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
}
else
{
lean_object* v___x_2912_; 
lean_inc(v_snd_2831_);
lean_inc(v_fst_2829_);
lean_dec_ref(v_p_2819_);
lean_inc(v_snd_2828_);
if (v_isShared_2856_ == 0)
{
lean_ctor_set(v___x_2855_, 1, v_snd_2828_);
lean_ctor_set(v___x_2855_, 0, v_snd_2853_);
v___x_2912_ = v___x_2855_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v_snd_2853_);
lean_ctor_set(v_reuseFailAlloc_2934_, 1, v_snd_2828_);
v___x_2912_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2931_; 
v_isSharedCheck_2931_ = !lean_is_exclusive(v_snd_2828_);
if (v_isSharedCheck_2931_ == 0)
{
lean_object* v_unused_2932_; lean_object* v_unused_2933_; 
v_unused_2932_ = lean_ctor_get(v_snd_2828_, 1);
lean_dec(v_unused_2932_);
v_unused_2933_ = lean_ctor_get(v_snd_2828_, 0);
lean_dec(v_unused_2933_);
v___x_2914_ = v_snd_2828_;
v_isShared_2915_ = v_isSharedCheck_2931_;
goto v_resetjp_2913_;
}
else
{
lean_dec(v_snd_2828_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2931_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2916_; lean_object* v_a_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2930_; 
v___x_2916_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v___x_2912_, v_a_2821_);
v_a_2917_ = lean_ctor_get(v___x_2916_, 0);
v_isSharedCheck_2930_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2919_ = v___x_2916_;
v_isShared_2920_ = v_isSharedCheck_2930_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_a_2917_);
lean_dec(v___x_2916_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2930_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2922_; 
if (v_isShared_2842_ == 0)
{
lean_ctor_set(v___x_2841_, 1, v_snd_2831_);
lean_ctor_set(v___x_2841_, 0, v_a_2917_);
v___x_2922_ = v___x_2841_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_a_2917_);
lean_ctor_set(v_reuseFailAlloc_2929_, 1, v_snd_2831_);
v___x_2922_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
lean_object* v___x_2924_; 
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 1, v___x_2922_);
lean_ctor_set(v___x_2914_, 0, v_fst_2829_);
v___x_2924_ = v___x_2914_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_fst_2829_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v___x_2922_);
v___x_2924_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
lean_object* v___x_2926_; 
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 0, v___x_2924_);
v___x_2926_ = v___x_2919_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v___x_2924_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2943_; 
lean_del_object(v___x_2841_);
lean_dec(v_snd_2828_);
lean_dec_ref(v_p_2819_);
v_a_2936_ = lean_ctor_get(v___x_2850_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2850_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2938_ = v___x_2850_;
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v___x_2850_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2941_; 
if (v_isShared_2939_ == 0)
{
v___x_2941_ = v___x_2938_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2936_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
return v___x_2941_;
}
}
}
}
}
else
{
lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2953_; 
lean_inc(v_snd_2834_);
lean_inc(v_fst_2829_);
lean_inc(v_snd_2827_);
lean_dec(v_fst_2833_);
lean_dec(v_fst_2832_);
lean_dec_ref(v_p_2819_);
v_isSharedCheck_2953_ = !lean_is_exclusive(v_snd_2828_);
if (v_isSharedCheck_2953_ == 0)
{
lean_object* v_unused_2954_; lean_object* v_unused_2955_; 
v_unused_2954_ = lean_ctor_get(v_snd_2828_, 1);
lean_dec(v_unused_2954_);
v_unused_2955_ = lean_ctor_get(v_snd_2828_, 0);
lean_dec(v_unused_2955_);
v___x_2946_ = v_snd_2828_;
v_isShared_2947_ = v_isSharedCheck_2953_;
goto v_resetjp_2945_;
}
else
{
lean_dec(v_snd_2828_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2953_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v_values_2948_; lean_object* v___x_2950_; 
v_values_2948_ = lean_array_push(v_fst_2829_, v_snd_2834_);
if (v_isShared_2947_ == 0)
{
lean_ctor_set(v___x_2946_, 1, v_snd_2827_);
lean_ctor_set(v___x_2946_, 0, v_values_2948_);
v___x_2950_ = v___x_2946_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_values_2948_);
lean_ctor_set(v_reuseFailAlloc_2952_, 1, v_snd_2827_);
v___x_2950_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
lean_object* v___x_2951_; 
v___x_2951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
return v___x_2951_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___boxed(lean_object* v_p_2956_, lean_object* v_entry_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_p_2956_, v_entry_2957_, v_a_2958_, v_a_2959_, v_a_2960_, v_a_2961_, v_a_2962_);
lean_dec(v_a_2962_);
lean_dec_ref(v_a_2961_);
lean_dec(v_a_2960_);
lean_dec_ref(v_a_2959_);
lean_dec(v_a_2958_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry(lean_object* v_00_u03b1_2965_, lean_object* v_p_2966_, lean_object* v_entry_2967_, lean_object* v_a_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_){
_start:
{
lean_object* v___x_2974_; 
v___x_2974_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_p_2966_, v_entry_2967_, v_a_2968_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___boxed(lean_object* v_00_u03b1_2975_, lean_object* v_p_2976_, lean_object* v_entry_2977_, lean_object* v_a_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_){
_start:
{
lean_object* v_res_2984_; 
v_res_2984_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry(v_00_u03b1_2975_, v_p_2976_, v_entry_2977_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_, v_a_2982_);
lean_dec(v_a_2982_);
lean_dec_ref(v_a_2981_);
lean_dec(v_a_2980_);
lean_dec_ref(v_a_2979_);
lean_dec(v_a_2978_);
return v_res_2984_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(lean_object* v_00_u03b2_2985_, lean_object* v_m_2986_, lean_object* v_a_2987_){
_start:
{
lean_object* v___x_2988_; 
v___x_2988_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_m_2986_, v_a_2987_);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___boxed(lean_object* v_00_u03b2_2989_, lean_object* v_m_2990_, lean_object* v_a_2991_){
_start:
{
lean_object* v_res_2992_; 
v_res_2992_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(v_00_u03b2_2989_, v_m_2990_, v_a_2991_);
lean_dec(v_a_2991_);
lean_dec_ref(v_m_2990_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3(lean_object* v_00_u03b2_2993_, lean_object* v_m_2994_, lean_object* v_a_2995_, lean_object* v_b_2996_){
_start:
{
lean_object* v___x_2997_; 
v___x_2997_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_m_2994_, v_a_2995_, v_b_2996_);
return v___x_2997_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(lean_object* v_00_u03b2_2998_, lean_object* v_a_2999_, lean_object* v_x_3000_){
_start:
{
lean_object* v___x_3001_; 
v___x_3001_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_2999_, v_x_3000_);
return v___x_3001_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___boxed(lean_object* v_00_u03b2_3002_, lean_object* v_a_3003_, lean_object* v_x_3004_){
_start:
{
lean_object* v_res_3005_; 
v_res_3005_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(v_00_u03b2_3002_, v_a_3003_, v_x_3004_);
lean_dec(v_x_3004_);
lean_dec(v_a_3003_);
return v_res_3005_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(lean_object* v_00_u03b2_3006_, lean_object* v_a_3007_, lean_object* v_x_3008_){
_start:
{
uint8_t v___x_3009_; 
v___x_3009_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_3007_, v_x_3008_);
return v___x_3009_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___boxed(lean_object* v_00_u03b2_3010_, lean_object* v_a_3011_, lean_object* v_x_3012_){
_start:
{
uint8_t v_res_3013_; lean_object* v_r_3014_; 
v_res_3013_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(v_00_u03b2_3010_, v_a_3011_, v_x_3012_);
lean_dec(v_x_3012_);
lean_dec(v_a_3011_);
v_r_3014_ = lean_box(v_res_3013_);
return v_r_3014_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5(lean_object* v_00_u03b2_3015_, lean_object* v_data_3016_){
_start:
{
lean_object* v___x_3017_; 
v___x_3017_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(v_data_3016_);
return v___x_3017_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6(lean_object* v_00_u03b2_3018_, lean_object* v_a_3019_, lean_object* v_b_3020_, lean_object* v_x_3021_){
_start:
{
lean_object* v___x_3022_; 
v___x_3022_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_3019_, v_b_3020_, v_x_3021_);
return v___x_3022_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_3023_, lean_object* v_i_3024_, lean_object* v_source_3025_, lean_object* v_target_3026_){
_start:
{
lean_object* v___x_3027_; 
v___x_3027_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(v_i_3024_, v_source_3025_, v_target_3026_);
return v___x_3027_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_3028_, lean_object* v_x_3029_, lean_object* v_x_3030_){
_start:
{
lean_object* v___x_3031_; 
v___x_3031_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(v_x_3029_, v_x_3030_);
return v___x_3031_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(lean_object* v_as_3032_, size_t v_i_3033_, size_t v_stop_3034_, lean_object* v_b_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_){
_start:
{
uint8_t v___x_3042_; 
v___x_3042_ = lean_usize_dec_eq(v_i_3033_, v_stop_3034_);
if (v___x_3042_ == 0)
{
lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___x_3043_ = lean_array_uget_borrowed(v_as_3032_, v_i_3033_);
lean_inc(v___x_3043_);
v___x_3044_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_b_3035_, v___x_3043_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_);
if (lean_obj_tag(v___x_3044_) == 0)
{
lean_object* v_a_3045_; size_t v___x_3046_; size_t v___x_3047_; 
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
lean_inc(v_a_3045_);
lean_dec_ref_known(v___x_3044_, 1);
v___x_3046_ = ((size_t)1ULL);
v___x_3047_ = lean_usize_add(v_i_3033_, v___x_3046_);
v_i_3033_ = v___x_3047_;
v_b_3035_ = v_a_3045_;
goto _start;
}
else
{
return v___x_3044_;
}
}
else
{
lean_object* v___x_3049_; 
v___x_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3049_, 0, v_b_3035_);
return v___x_3049_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg___boxed(lean_object* v_as_3050_, lean_object* v_i_3051_, lean_object* v_stop_3052_, lean_object* v_b_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_){
_start:
{
size_t v_i_boxed_3060_; size_t v_stop_boxed_3061_; lean_object* v_res_3062_; 
v_i_boxed_3060_ = lean_unbox_usize(v_i_3051_);
lean_dec(v_i_3051_);
v_stop_boxed_3061_ = lean_unbox_usize(v_stop_3052_);
lean_dec(v_stop_3052_);
v_res_3062_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_as_3050_, v_i_boxed_3060_, v_stop_boxed_3061_, v_b_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_);
lean_dec(v___y_3058_);
lean_dec_ref(v___y_3057_);
lean_dec(v___y_3056_);
lean_dec_ref(v___y_3055_);
lean_dec(v___y_3054_);
lean_dec_ref(v_as_3050_);
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(lean_object* v_values_3063_, lean_object* v_starIdx_3064_, lean_object* v_children_3065_, lean_object* v_entries_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_){
_start:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; uint8_t v___x_3077_; 
v___x_3073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3073_, 0, v_starIdx_3064_);
lean_ctor_set(v___x_3073_, 1, v_children_3065_);
v___x_3074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3074_, 0, v_values_3063_);
lean_ctor_set(v___x_3074_, 1, v___x_3073_);
v___x_3075_ = lean_unsigned_to_nat(0u);
v___x_3076_ = lean_array_get_size(v_entries_3066_);
v___x_3077_ = lean_nat_dec_lt(v___x_3075_, v___x_3076_);
if (v___x_3077_ == 0)
{
lean_object* v___x_3078_; 
v___x_3078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3074_);
return v___x_3078_;
}
else
{
size_t v___x_3079_; size_t v___x_3080_; lean_object* v___x_3081_; 
v___x_3079_ = ((size_t)0ULL);
v___x_3080_ = lean_usize_of_nat(v___x_3076_);
v___x_3081_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_entries_3066_, v___x_3079_, v___x_3080_, v___x_3074_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_);
return v___x_3081_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg___boxed(lean_object* v_values_3082_, lean_object* v_starIdx_3083_, lean_object* v_children_3084_, lean_object* v_entries_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_, lean_object* v_a_3090_, lean_object* v_a_3091_){
_start:
{
lean_object* v_res_3092_; 
v_res_3092_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3082_, v_starIdx_3083_, v_children_3084_, v_entries_3085_, v_a_3086_, v_a_3087_, v_a_3088_, v_a_3089_, v_a_3090_);
lean_dec(v_a_3090_);
lean_dec_ref(v_a_3089_);
lean_dec(v_a_3088_);
lean_dec_ref(v_a_3087_);
lean_dec(v_a_3086_);
lean_dec_ref(v_entries_3085_);
return v_res_3092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries(lean_object* v_00_u03b1_3093_, lean_object* v_values_3094_, lean_object* v_starIdx_3095_, lean_object* v_children_3096_, lean_object* v_entries_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_){
_start:
{
lean_object* v___x_3104_; 
v___x_3104_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3094_, v_starIdx_3095_, v_children_3096_, v_entries_3097_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_, v_a_3102_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___boxed(lean_object* v_00_u03b1_3105_, lean_object* v_values_3106_, lean_object* v_starIdx_3107_, lean_object* v_children_3108_, lean_object* v_entries_3109_, lean_object* v_a_3110_, lean_object* v_a_3111_, lean_object* v_a_3112_, lean_object* v_a_3113_, lean_object* v_a_3114_, lean_object* v_a_3115_){
_start:
{
lean_object* v_res_3116_; 
v_res_3116_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries(v_00_u03b1_3105_, v_values_3106_, v_starIdx_3107_, v_children_3108_, v_entries_3109_, v_a_3110_, v_a_3111_, v_a_3112_, v_a_3113_, v_a_3114_);
lean_dec(v_a_3114_);
lean_dec_ref(v_a_3113_);
lean_dec(v_a_3112_);
lean_dec_ref(v_a_3111_);
lean_dec(v_a_3110_);
lean_dec_ref(v_entries_3109_);
return v_res_3116_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(lean_object* v_00_u03b1_3117_, lean_object* v_as_3118_, size_t v_i_3119_, size_t v_stop_3120_, lean_object* v_b_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_){
_start:
{
lean_object* v___x_3128_; 
v___x_3128_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_as_3118_, v_i_3119_, v_stop_3120_, v_b_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_);
return v___x_3128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___boxed(lean_object* v_00_u03b1_3129_, lean_object* v_as_3130_, lean_object* v_i_3131_, lean_object* v_stop_3132_, lean_object* v_b_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_){
_start:
{
size_t v_i_boxed_3140_; size_t v_stop_boxed_3141_; lean_object* v_res_3142_; 
v_i_boxed_3140_ = lean_unbox_usize(v_i_3131_);
lean_dec(v_i_3131_);
v_stop_boxed_3141_ = lean_unbox_usize(v_stop_3132_);
lean_dec(v_stop_3132_);
v_res_3142_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(v_00_u03b1_3129_, v_as_3130_, v_i_boxed_3140_, v_stop_boxed_3141_, v_b_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_, v___y_3138_);
lean_dec(v___y_3138_);
lean_dec_ref(v___y_3137_);
lean_dec(v___y_3136_);
lean_dec_ref(v___y_3135_);
lean_dec(v___y_3134_);
lean_dec_ref(v_as_3130_);
return v_res_3142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg(lean_object* v_c_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_){
_start:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v_values_3153_; lean_object* v_star_3154_; lean_object* v_children_3155_; lean_object* v_pending_3156_; lean_object* v___x_3158_; uint8_t v_isShared_3159_; uint8_t v_isSharedCheck_3186_; 
v___x_3150_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0);
v___x_3151_ = lean_st_ref_get(v_a_3144_);
v___x_3152_ = lean_array_get(v___x_3150_, v___x_3151_, v_c_3143_);
lean_dec(v___x_3151_);
v_values_3153_ = lean_ctor_get(v___x_3152_, 0);
v_star_3154_ = lean_ctor_get(v___x_3152_, 1);
v_children_3155_ = lean_ctor_get(v___x_3152_, 2);
v_pending_3156_ = lean_ctor_get(v___x_3152_, 3);
v_isSharedCheck_3186_ = !lean_is_exclusive(v___x_3152_);
if (v_isSharedCheck_3186_ == 0)
{
v___x_3158_ = v___x_3152_;
v_isShared_3159_ = v_isSharedCheck_3186_;
goto v_resetjp_3157_;
}
else
{
lean_inc(v_pending_3156_);
lean_inc(v_children_3155_);
lean_inc(v_star_3154_);
lean_inc(v_values_3153_);
lean_dec(v___x_3152_);
v___x_3158_ = lean_box(0);
v_isShared_3159_ = v_isSharedCheck_3186_;
goto v_resetjp_3157_;
}
v_resetjp_3157_:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; uint8_t v___x_3162_; 
v___x_3160_ = lean_array_get_size(v_pending_3156_);
v___x_3161_ = lean_unsigned_to_nat(0u);
v___x_3162_ = lean_nat_dec_eq(v___x_3160_, v___x_3161_);
if (v___x_3162_ == 0)
{
lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3163_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_c_3143_, v___x_3150_, v_a_3144_);
lean_dec_ref(v___x_3163_);
v___x_3164_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3153_, v_star_3154_, v_children_3155_, v_pending_3156_, v_a_3144_, v_a_3145_, v_a_3146_, v_a_3147_, v_a_3148_);
lean_dec_ref(v_pending_3156_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_a_3165_; lean_object* v_snd_3166_; lean_object* v_fst_3167_; lean_object* v_fst_3168_; lean_object* v_snd_3169_; lean_object* v___x_3170_; lean_object* v___x_3172_; 
v_a_3165_ = lean_ctor_get(v___x_3164_, 0);
lean_inc(v_a_3165_);
lean_dec_ref_known(v___x_3164_, 1);
v_snd_3166_ = lean_ctor_get(v_a_3165_, 1);
v_fst_3167_ = lean_ctor_get(v_a_3165_, 0);
v_fst_3168_ = lean_ctor_get(v_snd_3166_, 0);
v_snd_3169_ = lean_ctor_get(v_snd_3166_, 1);
v___x_3170_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3));
lean_inc(v_snd_3169_);
lean_inc(v_fst_3168_);
lean_inc(v_fst_3167_);
if (v_isShared_3159_ == 0)
{
lean_ctor_set(v___x_3158_, 3, v___x_3170_);
lean_ctor_set(v___x_3158_, 2, v_snd_3169_);
lean_ctor_set(v___x_3158_, 1, v_fst_3168_);
lean_ctor_set(v___x_3158_, 0, v_fst_3167_);
v___x_3172_ = v___x_3158_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_fst_3167_);
lean_ctor_set(v_reuseFailAlloc_3182_, 1, v_fst_3168_);
lean_ctor_set(v_reuseFailAlloc_3182_, 2, v_snd_3169_);
lean_ctor_set(v_reuseFailAlloc_3182_, 3, v___x_3170_);
v___x_3172_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
lean_object* v___x_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3180_; 
v___x_3173_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_c_3143_, v___x_3172_, v_a_3144_);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3180_ == 0)
{
lean_object* v_unused_3181_; 
v_unused_3181_ = lean_ctor_get(v___x_3173_, 0);
lean_dec(v_unused_3181_);
v___x_3175_ = v___x_3173_;
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
else
{
lean_dec(v___x_3173_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3178_; 
if (v_isShared_3176_ == 0)
{
lean_ctor_set(v___x_3175_, 0, v_a_3165_);
v___x_3178_ = v___x_3175_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_a_3165_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
}
else
{
lean_del_object(v___x_3158_);
return v___x_3164_;
}
}
else
{
lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; 
lean_del_object(v___x_3158_);
lean_dec_ref(v_pending_3156_);
v___x_3183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3183_, 0, v_star_3154_);
lean_ctor_set(v___x_3183_, 1, v_children_3155_);
v___x_3184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3184_, 0, v_values_3153_);
lean_ctor_set(v___x_3184_, 1, v___x_3183_);
v___x_3185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3184_);
return v___x_3185_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg___boxed(lean_object* v_c_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_){
_start:
{
lean_object* v_res_3194_; 
v_res_3194_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3187_, v_a_3188_, v_a_3189_, v_a_3190_, v_a_3191_, v_a_3192_);
lean_dec(v_a_3192_);
lean_dec_ref(v_a_3191_);
lean_dec(v_a_3190_);
lean_dec_ref(v_a_3189_);
lean_dec(v_a_3188_);
lean_dec(v_c_3187_);
return v_res_3194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode(lean_object* v_00_u03b1_3195_, lean_object* v_c_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_){
_start:
{
lean_object* v___x_3203_; 
v___x_3203_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_, v_a_3201_);
return v___x_3203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___boxed(lean_object* v_00_u03b1_3204_, lean_object* v_c_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_){
_start:
{
lean_object* v_res_3212_; 
v_res_3212_ = l_Lean_Meta_LazyDiscrTree_evalNode(v_00_u03b1_3204_, v_c_3205_, v_a_3206_, v_a_3207_, v_a_3208_, v_a_3209_, v_a_3210_);
lean_dec(v_a_3210_);
lean_dec_ref(v_a_3209_);
lean_dec(v_a_3208_);
lean_dec_ref(v_a_3207_);
lean_dec(v_a_3206_);
lean_dec(v_c_3205_);
return v_res_3212_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(lean_object* v_a_3213_, lean_object* v_fallback_3214_, lean_object* v_x_3215_){
_start:
{
if (lean_obj_tag(v_x_3215_) == 0)
{
lean_inc(v_fallback_3214_);
return v_fallback_3214_;
}
else
{
lean_object* v_key_3216_; lean_object* v_value_3217_; lean_object* v_tail_3218_; uint8_t v___x_3219_; 
v_key_3216_ = lean_ctor_get(v_x_3215_, 0);
v_value_3217_ = lean_ctor_get(v_x_3215_, 1);
v_tail_3218_ = lean_ctor_get(v_x_3215_, 2);
v___x_3219_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_3216_, v_a_3213_);
if (v___x_3219_ == 0)
{
v_x_3215_ = v_tail_3218_;
goto _start;
}
else
{
lean_inc(v_value_3217_);
return v_value_3217_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg___boxed(lean_object* v_a_3221_, lean_object* v_fallback_3222_, lean_object* v_x_3223_){
_start:
{
lean_object* v_res_3224_; 
v_res_3224_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3221_, v_fallback_3222_, v_x_3223_);
lean_dec(v_x_3223_);
lean_dec(v_fallback_3222_);
lean_dec(v_a_3221_);
return v_res_3224_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(lean_object* v_m_3225_, lean_object* v_a_3226_, lean_object* v_fallback_3227_){
_start:
{
lean_object* v_buckets_3228_; lean_object* v___x_3229_; uint64_t v___x_3230_; uint64_t v___x_3231_; uint64_t v___x_3232_; uint64_t v_fold_3233_; uint64_t v___x_3234_; uint64_t v___x_3235_; uint64_t v___x_3236_; size_t v___x_3237_; size_t v___x_3238_; size_t v___x_3239_; size_t v___x_3240_; size_t v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; 
v_buckets_3228_ = lean_ctor_get(v_m_3225_, 1);
v___x_3229_ = lean_array_get_size(v_buckets_3228_);
v___x_3230_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_3226_);
v___x_3231_ = 32ULL;
v___x_3232_ = lean_uint64_shift_right(v___x_3230_, v___x_3231_);
v_fold_3233_ = lean_uint64_xor(v___x_3230_, v___x_3232_);
v___x_3234_ = 16ULL;
v___x_3235_ = lean_uint64_shift_right(v_fold_3233_, v___x_3234_);
v___x_3236_ = lean_uint64_xor(v_fold_3233_, v___x_3235_);
v___x_3237_ = lean_uint64_to_usize(v___x_3236_);
v___x_3238_ = lean_usize_of_nat(v___x_3229_);
v___x_3239_ = ((size_t)1ULL);
v___x_3240_ = lean_usize_sub(v___x_3238_, v___x_3239_);
v___x_3241_ = lean_usize_land(v___x_3237_, v___x_3240_);
v___x_3242_ = lean_array_uget_borrowed(v_buckets_3228_, v___x_3241_);
v___x_3243_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3226_, v_fallback_3227_, v___x_3242_);
return v___x_3243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg___boxed(lean_object* v_m_3244_, lean_object* v_a_3245_, lean_object* v_fallback_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_m_3244_, v_a_3245_, v_fallback_3246_);
lean_dec(v_fallback_3246_);
lean_dec(v_a_3245_);
lean_dec_ref(v_m_3244_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(lean_object* v_next_3248_, lean_object* v_rest_3249_, lean_object* v_a_3250_, lean_object* v_a_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_){
_start:
{
lean_object* v___x_3256_; uint8_t v___x_3257_; 
v___x_3256_ = lean_unsigned_to_nat(0u);
v___x_3257_ = lean_nat_dec_eq(v_next_3248_, v___x_3256_);
if (v___x_3257_ == 0)
{
lean_object* v___x_3258_; 
v___x_3258_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_3248_, v_a_3250_, v_a_3251_, v_a_3252_, v_a_3253_, v_a_3254_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3284_; 
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3261_ = v___x_3258_;
v_isShared_3262_ = v_isSharedCheck_3284_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3258_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3284_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v_snd_3263_; 
v_snd_3263_ = lean_ctor_get(v_a_3259_, 1);
lean_inc(v_snd_3263_);
lean_dec(v_a_3259_);
if (lean_obj_tag(v_rest_3249_) == 0)
{
lean_object* v_fst_3264_; lean_object* v_snd_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3273_; 
v_fst_3264_ = lean_ctor_get(v_snd_3263_, 0);
lean_inc(v_fst_3264_);
v_snd_3265_ = lean_ctor_get(v_snd_3263_, 1);
lean_inc(v_snd_3265_);
lean_dec(v_snd_3263_);
v___x_3266_ = lean_st_ref_take(v_a_3250_);
v___x_3267_ = lean_box(0);
v___x_3268_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_3269_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3269_, 0, v___x_3268_);
lean_ctor_set(v___x_3269_, 1, v_fst_3264_);
lean_ctor_set(v___x_3269_, 2, v_snd_3265_);
lean_ctor_set(v___x_3269_, 3, v___x_3268_);
v___x_3270_ = lean_array_set(v___x_3266_, v_next_3248_, v___x_3269_);
lean_dec(v_next_3248_);
v___x_3271_ = lean_st_ref_put(v_a_3250_, v___x_3270_);
if (v_isShared_3262_ == 0)
{
lean_ctor_set(v___x_3261_, 0, v___x_3267_);
v___x_3273_ = v___x_3261_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3274_; 
v_reuseFailAlloc_3274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3274_, 0, v___x_3267_);
v___x_3273_ = v_reuseFailAlloc_3274_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
return v___x_3273_;
}
}
else
{
lean_object* v_fst_3275_; lean_object* v_snd_3276_; lean_object* v_head_3277_; lean_object* v_tail_3278_; lean_object* v___x_3279_; uint8_t v___x_3280_; 
lean_del_object(v___x_3261_);
lean_dec(v_next_3248_);
v_fst_3275_ = lean_ctor_get(v_snd_3263_, 0);
lean_inc(v_fst_3275_);
v_snd_3276_ = lean_ctor_get(v_snd_3263_, 1);
lean_inc(v_snd_3276_);
lean_dec(v_snd_3263_);
v_head_3277_ = lean_ctor_get(v_rest_3249_, 0);
v_tail_3278_ = lean_ctor_get(v_rest_3249_, 1);
v___x_3279_ = lean_box(3);
v___x_3280_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_head_3277_, v___x_3279_);
if (v___x_3280_ == 0)
{
lean_object* v___x_3281_; 
lean_dec(v_fst_3275_);
v___x_3281_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_snd_3276_, v_head_3277_, v___x_3256_);
lean_dec(v_snd_3276_);
v_next_3248_ = v___x_3281_;
v_rest_3249_ = v_tail_3278_;
goto _start;
}
else
{
lean_dec(v_snd_3276_);
v_next_3248_ = v_fst_3275_;
v_rest_3249_ = v_tail_3278_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3285_; lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3292_; 
lean_dec(v_next_3248_);
v_a_3285_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3287_ = v___x_3258_;
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
else
{
lean_inc(v_a_3285_);
lean_dec(v___x_3258_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
lean_object* v___x_3290_; 
if (v_isShared_3288_ == 0)
{
v___x_3290_ = v___x_3287_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v_a_3285_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
}
else
{
lean_object* v___x_3293_; lean_object* v___x_3294_; 
lean_dec(v_next_3248_);
v___x_3293_ = lean_box(0);
v___x_3294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3293_);
return v___x_3294_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg___boxed(lean_object* v_next_3295_, lean_object* v_rest_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(v_next_3295_, v_rest_3296_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
lean_dec(v_a_3301_);
lean_dec_ref(v_a_3300_);
lean_dec(v_a_3299_);
lean_dec_ref(v_a_3298_);
lean_dec(v_a_3297_);
lean_dec(v_rest_3296_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux(lean_object* v_00_u03b1_3304_, lean_object* v_next_3305_, lean_object* v_rest_3306_, lean_object* v_a_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_){
_start:
{
lean_object* v___x_3313_; 
v___x_3313_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(v_next_3305_, v_rest_3306_, v_a_3307_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed(lean_object* v_00_u03b1_3314_, lean_object* v_next_3315_, lean_object* v_rest_3316_, lean_object* v_a_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_){
_start:
{
lean_object* v_res_3323_; 
v_res_3323_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux(v_00_u03b1_3314_, v_next_3315_, v_rest_3316_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_);
lean_dec(v_a_3321_);
lean_dec_ref(v_a_3320_);
lean_dec(v_a_3319_);
lean_dec_ref(v_a_3318_);
lean_dec(v_a_3317_);
lean_dec(v_rest_3316_);
return v_res_3323_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(lean_object* v_00_u03b2_3324_, lean_object* v_m_3325_, lean_object* v_a_3326_, lean_object* v_fallback_3327_){
_start:
{
lean_object* v___x_3328_; 
v___x_3328_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_m_3325_, v_a_3326_, v_fallback_3327_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___boxed(lean_object* v_00_u03b2_3329_, lean_object* v_m_3330_, lean_object* v_a_3331_, lean_object* v_fallback_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(v_00_u03b2_3329_, v_m_3330_, v_a_3331_, v_fallback_3332_);
lean_dec(v_fallback_3332_);
lean_dec(v_a_3331_);
lean_dec_ref(v_m_3330_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(lean_object* v_00_u03b2_3334_, lean_object* v_a_3335_, lean_object* v_fallback_3336_, lean_object* v_x_3337_){
_start:
{
lean_object* v___x_3338_; 
v___x_3338_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3335_, v_fallback_3336_, v_x_3337_);
return v___x_3338_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3339_, lean_object* v_a_3340_, lean_object* v_fallback_3341_, lean_object* v_x_3342_){
_start:
{
lean_object* v_res_3343_; 
v_res_3343_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(v_00_u03b2_3339_, v_a_3340_, v_fallback_3341_, v_x_3342_);
lean_dec(v_x_3342_);
lean_dec(v_fallback_3341_);
lean_dec(v_a_3340_);
return v_res_3343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg(lean_object* v_t_3344_, lean_object* v_path_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_, lean_object* v_a_3348_, lean_object* v_a_3349_){
_start:
{
if (lean_obj_tag(v_path_3345_) == 0)
{
lean_object* v___x_3351_; 
v___x_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3351_, 0, v_t_3344_);
return v___x_3351_;
}
else
{
lean_object* v_head_3352_; lean_object* v_tail_3353_; lean_object* v_roots_3354_; lean_object* v___x_3355_; lean_object* v_idx_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v_head_3352_ = lean_ctor_get(v_path_3345_, 0);
lean_inc(v_head_3352_);
v_tail_3353_ = lean_ctor_get(v_path_3345_, 1);
lean_inc(v_tail_3353_);
lean_dec_ref_known(v_path_3345_, 2);
v_roots_3354_ = lean_ctor_get(v_t_3344_, 1);
v___x_3355_ = lean_unsigned_to_nat(0u);
v_idx_3356_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_roots_3354_, v_head_3352_, v___x_3355_);
lean_dec(v_head_3352_);
v___x_3357_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed), 9, 3);
lean_closure_set(v___x_3357_, 0, lean_box(0));
lean_closure_set(v___x_3357_, 1, v_idx_3356_);
lean_closure_set(v___x_3357_, 2, v_tail_3353_);
v___x_3358_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_t_3344_, v___x_3357_, v_a_3346_, v_a_3347_, v_a_3348_, v_a_3349_);
if (lean_obj_tag(v___x_3358_) == 0)
{
lean_object* v_a_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3367_; 
v_a_3359_ = lean_ctor_get(v___x_3358_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3361_ = v___x_3358_;
v_isShared_3362_ = v_isSharedCheck_3367_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_a_3359_);
lean_dec(v___x_3358_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3367_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v_snd_3363_; lean_object* v___x_3365_; 
v_snd_3363_ = lean_ctor_get(v_a_3359_, 1);
lean_inc(v_snd_3363_);
lean_dec(v_a_3359_);
if (v_isShared_3362_ == 0)
{
lean_ctor_set(v___x_3361_, 0, v_snd_3363_);
v___x_3365_ = v___x_3361_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_snd_3363_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
else
{
lean_object* v_a_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3375_; 
v_a_3368_ = lean_ctor_get(v___x_3358_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3370_ = v___x_3358_;
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_a_3368_);
lean_dec(v___x_3358_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___x_3373_; 
if (v_isShared_3371_ == 0)
{
v___x_3373_ = v___x_3370_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_a_3368_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
return v___x_3373_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg___boxed(lean_object* v_t_3376_, lean_object* v_path_3377_, lean_object* v_a_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_t_3376_, v_path_3377_, v_a_3378_, v_a_3379_, v_a_3380_, v_a_3381_);
lean_dec(v_a_3381_);
lean_dec_ref(v_a_3380_);
lean_dec(v_a_3379_);
lean_dec_ref(v_a_3378_);
return v_res_3383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey(lean_object* v_00_u03b1_3384_, lean_object* v_t_3385_, lean_object* v_path_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_){
_start:
{
lean_object* v___x_3392_; 
v___x_3392_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_t_3385_, v_path_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___boxed(lean_object* v_00_u03b1_3393_, lean_object* v_t_3394_, lean_object* v_path_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_Lean_Meta_LazyDiscrTree_dropKey(v_00_u03b1_3393_, v_t_3394_, v_path_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_);
lean_dec(v_a_3399_);
lean_dec_ref(v_a_3398_);
lean_dec(v_a_3397_);
lean_dec_ref(v_a_3396_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(lean_object* v_score_3404_, lean_object* v_e_3405_, lean_object* v_a_3406_){
_start:
{
lean_object* v___x_3407_; uint8_t v___x_3408_; 
v___x_3407_ = lean_array_get_size(v_a_3406_);
v___x_3408_ = lean_nat_dec_lt(v___x_3407_, v_score_3404_);
if (v___x_3408_ == 0)
{
lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3409_ = lean_unsigned_to_nat(1u);
v___x_3410_ = lean_mk_empty_array_with_capacity(v___x_3409_);
v___x_3411_ = lean_array_push(v___x_3410_, v_e_3405_);
v___x_3412_ = lean_array_push(v_a_3406_, v___x_3411_);
return v___x_3412_;
}
else
{
lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3413_ = ((lean_object*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0));
v___x_3414_ = lean_array_push(v_a_3406_, v___x_3413_);
v_a_3406_ = v___x_3414_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___boxed(lean_object* v_score_3416_, lean_object* v_e_3417_, lean_object* v_a_3418_){
_start:
{
lean_object* v_res_3419_; 
v_res_3419_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3416_, v_e_3417_, v_a_3418_);
lean_dec(v_score_3416_);
return v_res_3419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(lean_object* v_00_u03b1_3420_, lean_object* v_score_3421_, lean_object* v_e_3422_, lean_object* v_a_3423_){
_start:
{
lean_object* v___x_3424_; 
v___x_3424_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3421_, v_e_3422_, v_a_3423_);
return v___x_3424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___boxed(lean_object* v_00_u03b1_3425_, lean_object* v_score_3426_, lean_object* v_e_3427_, lean_object* v_a_3428_){
_start:
{
lean_object* v_res_3429_; 
v_res_3429_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(v_00_u03b1_3425_, v_score_3426_, v_e_3427_, v_a_3428_);
lean_dec(v_score_3426_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(lean_object* v_r_3430_, lean_object* v_score_3431_, lean_object* v_e_3432_){
_start:
{
lean_object* v___x_3433_; lean_object* v___x_3434_; uint8_t v___x_3435_; 
v___x_3433_ = lean_array_get_size(v_e_3432_);
v___x_3434_ = lean_unsigned_to_nat(0u);
v___x_3435_ = lean_nat_dec_eq(v___x_3433_, v___x_3434_);
if (v___x_3435_ == 0)
{
lean_object* v___x_3436_; uint8_t v___x_3437_; 
v___x_3436_ = lean_array_get_size(v_r_3430_);
v___x_3437_ = lean_nat_dec_lt(v_score_3431_, v___x_3436_);
if (v___x_3437_ == 0)
{
lean_object* v___x_3438_; 
v___x_3438_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3431_, v_e_3432_, v_r_3430_);
return v___x_3438_;
}
else
{
lean_object* v_v_3439_; lean_object* v___x_3440_; lean_object* v_xs_x27_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; 
v_v_3439_ = lean_array_fget(v_r_3430_, v_score_3431_);
v___x_3440_ = lean_box(0);
v_xs_x27_3441_ = lean_array_fset(v_r_3430_, v_score_3431_, v___x_3440_);
v___x_3442_ = lean_array_push(v_v_3439_, v_e_3432_);
v___x_3443_ = lean_array_fset(v_xs_x27_3441_, v_score_3431_, v___x_3442_);
return v___x_3443_;
}
}
else
{
lean_dec_ref(v_e_3432_);
return v_r_3430_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg___boxed(lean_object* v_r_3444_, lean_object* v_score_3445_, lean_object* v_e_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_r_3444_, v_score_3445_, v_e_3446_);
lean_dec(v_score_3445_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push(lean_object* v_00_u03b1_3448_, lean_object* v_r_3449_, lean_object* v_score_3450_, lean_object* v_e_3451_){
_start:
{
lean_object* v___x_3452_; 
v___x_3452_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_r_3449_, v_score_3450_, v_e_3451_);
return v___x_3452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___boxed(lean_object* v_00_u03b1_3453_, lean_object* v_r_3454_, lean_object* v_score_3455_, lean_object* v_e_3456_){
_start:
{
lean_object* v_res_3457_; 
v_res_3457_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push(v_00_u03b1_3453_, v_r_3454_, v_score_3455_, v_e_3456_);
lean_dec(v_score_3455_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(lean_object* v_as_3458_, size_t v_i_3459_, size_t v_stop_3460_, lean_object* v_b_3461_){
_start:
{
uint8_t v___x_3462_; 
v___x_3462_ = lean_usize_dec_eq(v_i_3459_, v_stop_3460_);
if (v___x_3462_ == 0)
{
lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; size_t v___x_3466_; size_t v___x_3467_; 
v___x_3463_ = lean_array_uget_borrowed(v_as_3458_, v_i_3459_);
v___x_3464_ = lean_array_get_size(v___x_3463_);
v___x_3465_ = lean_nat_add(v_b_3461_, v___x_3464_);
lean_dec(v_b_3461_);
v___x_3466_ = ((size_t)1ULL);
v___x_3467_ = lean_usize_add(v_i_3459_, v___x_3466_);
v_i_3459_ = v___x_3467_;
v_b_3461_ = v___x_3465_;
goto _start;
}
else
{
return v_b_3461_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg___boxed(lean_object* v_as_3469_, lean_object* v_i_3470_, lean_object* v_stop_3471_, lean_object* v_b_3472_){
_start:
{
size_t v_i_boxed_3473_; size_t v_stop_boxed_3474_; lean_object* v_res_3475_; 
v_i_boxed_3473_ = lean_unbox_usize(v_i_3470_);
lean_dec(v_i_3470_);
v_stop_boxed_3474_ = lean_unbox_usize(v_stop_3471_);
lean_dec(v_stop_3471_);
v_res_3475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v_as_3469_, v_i_boxed_3473_, v_stop_boxed_3474_, v_b_3472_);
lean_dec_ref(v_as_3469_);
return v_res_3475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(lean_object* v_as_3476_, size_t v_i_3477_, size_t v_stop_3478_, lean_object* v_b_3479_){
_start:
{
lean_object* v___y_3481_; uint8_t v___x_3485_; 
v___x_3485_ = lean_usize_dec_eq(v_i_3477_, v_stop_3478_);
if (v___x_3485_ == 0)
{
lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; uint8_t v___x_3489_; 
v___x_3486_ = lean_array_uget_borrowed(v_as_3476_, v_i_3477_);
v___x_3487_ = lean_unsigned_to_nat(0u);
v___x_3488_ = lean_array_get_size(v___x_3486_);
v___x_3489_ = lean_nat_dec_lt(v___x_3487_, v___x_3488_);
if (v___x_3489_ == 0)
{
v___y_3481_ = v_b_3479_;
goto v___jp_3480_;
}
else
{
size_t v___x_3490_; size_t v___x_3491_; lean_object* v___x_3492_; 
v___x_3490_ = ((size_t)0ULL);
v___x_3491_ = lean_usize_of_nat(v___x_3488_);
v___x_3492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v___x_3486_, v___x_3490_, v___x_3491_, v_b_3479_);
v___y_3481_ = v___x_3492_;
goto v___jp_3480_;
}
}
else
{
return v_b_3479_;
}
v___jp_3480_:
{
size_t v___x_3482_; size_t v___x_3483_; 
v___x_3482_ = ((size_t)1ULL);
v___x_3483_ = lean_usize_add(v_i_3477_, v___x_3482_);
v_i_3477_ = v___x_3483_;
v_b_3479_ = v___y_3481_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg___boxed(lean_object* v_as_3493_, lean_object* v_i_3494_, lean_object* v_stop_3495_, lean_object* v_b_3496_){
_start:
{
size_t v_i_boxed_3497_; size_t v_stop_boxed_3498_; lean_object* v_res_3499_; 
v_i_boxed_3497_ = lean_unbox_usize(v_i_3494_);
lean_dec(v_i_3494_);
v_stop_boxed_3498_ = lean_unbox_usize(v_stop_3495_);
lean_dec(v_stop_3495_);
v_res_3499_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_as_3493_, v_i_boxed_3497_, v_stop_boxed_3498_, v_b_3496_);
lean_dec_ref(v_as_3493_);
return v_res_3499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(lean_object* v_mr_3500_){
_start:
{
lean_object* v___x_3501_; lean_object* v___x_3502_; uint8_t v___x_3503_; 
v___x_3501_ = lean_unsigned_to_nat(0u);
v___x_3502_ = lean_array_get_size(v_mr_3500_);
v___x_3503_ = lean_nat_dec_lt(v___x_3501_, v___x_3502_);
if (v___x_3503_ == 0)
{
return v___x_3501_;
}
else
{
size_t v___x_3504_; size_t v___x_3505_; lean_object* v___x_3506_; 
v___x_3504_ = ((size_t)0ULL);
v___x_3505_ = lean_usize_of_nat(v___x_3502_);
v___x_3506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_mr_3500_, v___x_3504_, v___x_3505_, v___x_3501_);
return v___x_3506_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg___boxed(lean_object* v_mr_3507_){
_start:
{
lean_object* v_res_3508_; 
v_res_3508_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_mr_3507_);
lean_dec_ref(v_mr_3507_);
return v_res_3508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size(lean_object* v_00_u03b1_3509_, lean_object* v_mr_3510_){
_start:
{
lean_object* v___x_3511_; 
v___x_3511_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_mr_3510_);
return v___x_3511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___boxed(lean_object* v_00_u03b1_3512_, lean_object* v_mr_3513_){
_start:
{
lean_object* v_res_3514_; 
v_res_3514_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size(v_00_u03b1_3512_, v_mr_3513_);
lean_dec_ref(v_mr_3513_);
return v_res_3514_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(lean_object* v_00_u03b1_3515_, lean_object* v_as_3516_, size_t v_i_3517_, size_t v_stop_3518_, lean_object* v_b_3519_){
_start:
{
lean_object* v___x_3520_; 
v___x_3520_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v_as_3516_, v_i_3517_, v_stop_3518_, v_b_3519_);
return v___x_3520_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___boxed(lean_object* v_00_u03b1_3521_, lean_object* v_as_3522_, lean_object* v_i_3523_, lean_object* v_stop_3524_, lean_object* v_b_3525_){
_start:
{
size_t v_i_boxed_3526_; size_t v_stop_boxed_3527_; lean_object* v_res_3528_; 
v_i_boxed_3526_ = lean_unbox_usize(v_i_3523_);
lean_dec(v_i_3523_);
v_stop_boxed_3527_ = lean_unbox_usize(v_stop_3524_);
lean_dec(v_stop_3524_);
v_res_3528_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(v_00_u03b1_3521_, v_as_3522_, v_i_boxed_3526_, v_stop_boxed_3527_, v_b_3525_);
lean_dec_ref(v_as_3522_);
return v_res_3528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(lean_object* v_00_u03b1_3529_, lean_object* v_as_3530_, size_t v_i_3531_, size_t v_stop_3532_, lean_object* v_b_3533_){
_start:
{
lean_object* v___x_3534_; 
v___x_3534_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_as_3530_, v_i_3531_, v_stop_3532_, v_b_3533_);
return v___x_3534_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___boxed(lean_object* v_00_u03b1_3535_, lean_object* v_as_3536_, lean_object* v_i_3537_, lean_object* v_stop_3538_, lean_object* v_b_3539_){
_start:
{
size_t v_i_boxed_3540_; size_t v_stop_boxed_3541_; lean_object* v_res_3542_; 
v_i_boxed_3540_ = lean_unbox_usize(v_i_3537_);
lean_dec(v_i_3537_);
v_stop_boxed_3541_ = lean_unbox_usize(v_stop_3538_);
lean_dec(v_stop_3538_);
v_res_3542_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(v_00_u03b1_3535_, v_as_3536_, v_i_boxed_3540_, v_stop_boxed_3541_, v_b_3539_);
lean_dec_ref(v_as_3536_);
return v_res_3542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0(lean_object* v_f_3543_, lean_object* v_j_3544_, lean_object* v_x_3545_){
_start:
{
lean_object* v___x_3546_; 
v___x_3546_ = lean_apply_2(v_f_3543_, v_j_3544_, v_x_3545_);
return v___x_3546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1(lean_object* v___f_3566_, lean_object* v_x1_3567_, lean_object* v_x2_3568_){
_start:
{
lean_object* v___x_3569_; size_t v_sz_3570_; size_t v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___x_3569_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v_sz_3570_ = lean_array_size(v_x2_3568_);
v___x_3571_ = ((size_t)0ULL);
v___x_3572_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3569_, v___f_3566_, v_sz_3570_, v___x_3571_, v_x2_3568_);
v___x_3573_ = l_Array_append___redArg(v_x1_3567_, v___x_3572_);
lean_dec(v___x_3572_);
return v___x_3573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(lean_object* v_n_3574_, lean_object* v_mr_3575_, lean_object* v_f_3576_, lean_object* v_i_3577_, lean_object* v_x_3578_, lean_object* v_r_3579_){
_start:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v_j_3582_; lean_object* v_b_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; uint8_t v___x_3587_; 
v___x_3580_ = lean_unsigned_to_nat(1u);
v___x_3581_ = lean_nat_sub(v_n_3574_, v___x_3580_);
v_j_3582_ = lean_nat_sub(v___x_3581_, v_i_3577_);
lean_dec(v___x_3581_);
v_b_3583_ = lean_array_fget_borrowed(v_mr_3575_, v_j_3582_);
v___x_3584_ = lean_unsigned_to_nat(0u);
v___x_3585_ = lean_array_get_size(v_b_3583_);
v___x_3586_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v___x_3587_ = lean_nat_dec_lt(v___x_3584_, v___x_3585_);
if (v___x_3587_ == 0)
{
lean_dec(v_j_3582_);
lean_dec(v_f_3576_);
return v_r_3579_;
}
else
{
lean_object* v___f_3588_; lean_object* v___f_3589_; size_t v___x_3590_; size_t v___x_3591_; lean_object* v___x_3592_; 
v___f_3588_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3588_, 0, v_f_3576_);
lean_closure_set(v___f_3588_, 1, v_j_3582_);
v___f_3589_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1), 3, 1);
lean_closure_set(v___f_3589_, 0, v___f_3588_);
v___x_3590_ = ((size_t)0ULL);
v___x_3591_ = lean_usize_of_nat(v___x_3585_);
lean_inc(v_b_3583_);
v___x_3592_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3586_, v___f_3589_, v_b_3583_, v___x_3590_, v___x_3591_, v_r_3579_);
return v___x_3592_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed(lean_object* v_n_3593_, lean_object* v_mr_3594_, lean_object* v_f_3595_, lean_object* v_i_3596_, lean_object* v_x_3597_, lean_object* v_r_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(v_n_3593_, v_mr_3594_, v_f_3595_, v_i_3596_, v_x_3597_, v_r_3598_);
lean_dec(v_i_3596_);
lean_dec_ref(v_mr_3594_);
lean_dec(v_n_3593_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(lean_object* v_mr_3600_, lean_object* v_a_3601_, lean_object* v_f_3602_){
_start:
{
lean_object* v_n_3603_; lean_object* v___f_3604_; lean_object* v___x_3605_; 
v_n_3603_ = lean_array_get_size(v_mr_3600_);
v___f_3604_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_3604_, 0, v_n_3603_);
lean_closure_set(v___f_3604_, 1, v_mr_3600_);
lean_closure_set(v___f_3604_, 2, v_f_3602_);
v___x_3605_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_box(0), v_n_3603_, v___f_3604_, v_n_3603_, lean_box(0), v_a_3601_);
return v___x_3605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux(lean_object* v_00_u03b1_3606_, lean_object* v_00_u03b2_3607_, lean_object* v_mr_3608_, lean_object* v_a_3609_, lean_object* v_f_3610_){
_start:
{
lean_object* v___x_3611_; 
v___x_3611_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(v_mr_3608_, v_a_3609_, v_f_3610_);
return v___x_3611_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(size_t v_sz_3612_, size_t v_i_3613_, lean_object* v_bs_3614_){
_start:
{
uint8_t v___x_3615_; 
v___x_3615_ = lean_usize_dec_lt(v_i_3613_, v_sz_3612_);
if (v___x_3615_ == 0)
{
return v_bs_3614_;
}
else
{
lean_object* v_v_3616_; lean_object* v___x_3617_; lean_object* v_bs_x27_3618_; size_t v___x_3619_; size_t v___x_3620_; lean_object* v___x_3621_; 
v_v_3616_ = lean_array_uget(v_bs_3614_, v_i_3613_);
v___x_3617_ = lean_unsigned_to_nat(0u);
v_bs_x27_3618_ = lean_array_uset(v_bs_3614_, v_i_3613_, v___x_3617_);
v___x_3619_ = ((size_t)1ULL);
v___x_3620_ = lean_usize_add(v_i_3613_, v___x_3619_);
v___x_3621_ = lean_array_uset(v_bs_x27_3618_, v_i_3613_, v_v_3616_);
v_i_3613_ = v___x_3620_;
v_bs_3614_ = v___x_3621_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg___boxed(lean_object* v_sz_3623_, lean_object* v_i_3624_, lean_object* v_bs_3625_){
_start:
{
size_t v_sz_boxed_3626_; size_t v_i_boxed_3627_; lean_object* v_res_3628_; 
v_sz_boxed_3626_ = lean_unbox_usize(v_sz_3623_);
lean_dec(v_sz_3623_);
v_i_boxed_3627_ = lean_unbox_usize(v_i_3624_);
lean_dec(v_i_3624_);
v_res_3628_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_boxed_3626_, v_i_boxed_3627_, v_bs_3625_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(lean_object* v_as_3629_, size_t v_i_3630_, size_t v_stop_3631_, lean_object* v_b_3632_){
_start:
{
uint8_t v___x_3633_; 
v___x_3633_ = lean_usize_dec_eq(v_i_3630_, v_stop_3631_);
if (v___x_3633_ == 0)
{
lean_object* v___x_3634_; size_t v_sz_3635_; size_t v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; size_t v___x_3639_; size_t v___x_3640_; 
v___x_3634_ = lean_array_uget_borrowed(v_as_3629_, v_i_3630_);
v_sz_3635_ = lean_array_size(v___x_3634_);
v___x_3636_ = ((size_t)0ULL);
lean_inc(v___x_3634_);
v___x_3637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_3635_, v___x_3636_, v___x_3634_);
v___x_3638_ = l_Array_append___redArg(v_b_3632_, v___x_3637_);
lean_dec_ref(v___x_3637_);
v___x_3639_ = ((size_t)1ULL);
v___x_3640_ = lean_usize_add(v_i_3630_, v___x_3639_);
v_i_3630_ = v___x_3640_;
v_b_3632_ = v___x_3638_;
goto _start;
}
else
{
return v_b_3632_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg___boxed(lean_object* v_as_3642_, lean_object* v_i_3643_, lean_object* v_stop_3644_, lean_object* v_b_3645_){
_start:
{
size_t v_i_boxed_3646_; size_t v_stop_boxed_3647_; lean_object* v_res_3648_; 
v_i_boxed_3646_ = lean_unbox_usize(v_i_3643_);
lean_dec(v_i_3643_);
v_stop_boxed_3647_ = lean_unbox_usize(v_stop_3644_);
lean_dec(v_stop_3644_);
v_res_3648_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_as_3642_, v_i_boxed_3646_, v_stop_boxed_3647_, v_b_3645_);
lean_dec_ref(v_as_3642_);
return v_res_3648_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(lean_object* v_n_3649_, lean_object* v_aa_3650_, lean_object* v_n_3651_, lean_object* v_j_3652_, lean_object* v_a_3653_){
_start:
{
lean_object* v_zero_3654_; uint8_t v_isZero_3655_; 
v_zero_3654_ = lean_unsigned_to_nat(0u);
v_isZero_3655_ = lean_nat_dec_eq(v_j_3652_, v_zero_3654_);
if (v_isZero_3655_ == 1)
{
lean_dec(v_j_3652_);
return v_a_3653_;
}
else
{
lean_object* v_one_3656_; lean_object* v_n_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v_j_3660_; lean_object* v_b_3661_; lean_object* v___x_3662_; uint8_t v___x_3663_; 
v_one_3656_ = lean_unsigned_to_nat(1u);
v_n_3657_ = lean_nat_sub(v_j_3652_, v_one_3656_);
v___x_3658_ = lean_nat_sub(v_n_3651_, v_j_3652_);
lean_dec(v_j_3652_);
v___x_3659_ = lean_nat_sub(v_n_3649_, v_one_3656_);
v_j_3660_ = lean_nat_sub(v___x_3659_, v___x_3658_);
lean_dec(v___x_3658_);
lean_dec(v___x_3659_);
v_b_3661_ = lean_array_fget_borrowed(v_aa_3650_, v_j_3660_);
lean_dec(v_j_3660_);
v___x_3662_ = lean_array_get_size(v_b_3661_);
v___x_3663_ = lean_nat_dec_lt(v_zero_3654_, v___x_3662_);
if (v___x_3663_ == 0)
{
v_j_3652_ = v_n_3657_;
goto _start;
}
else
{
size_t v___x_3665_; size_t v___x_3666_; lean_object* v___x_3667_; 
v___x_3665_ = ((size_t)0ULL);
v___x_3666_ = lean_usize_of_nat(v___x_3662_);
v___x_3667_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_b_3661_, v___x_3665_, v___x_3666_, v_a_3653_);
v_j_3652_ = v_n_3657_;
v_a_3653_ = v___x_3667_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg___boxed(lean_object* v_n_3669_, lean_object* v_aa_3670_, lean_object* v_n_3671_, lean_object* v_j_3672_, lean_object* v_a_3673_){
_start:
{
lean_object* v_res_3674_; 
v_res_3674_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3669_, v_aa_3670_, v_n_3671_, v_j_3672_, v_a_3673_);
lean_dec(v_n_3671_);
lean_dec_ref(v_aa_3670_);
lean_dec(v_n_3669_);
return v_res_3674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(lean_object* v_mr_3675_, lean_object* v_a_3676_){
_start:
{
lean_object* v_n_3677_; lean_object* v___x_3678_; 
v_n_3677_ = lean_array_get_size(v_mr_3675_);
v___x_3678_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3677_, v_mr_3675_, v_n_3677_, v_n_3677_, v_a_3676_);
return v___x_3678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg___boxed(lean_object* v_mr_3679_, lean_object* v_a_3680_){
_start:
{
lean_object* v_res_3681_; 
v_res_3681_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3679_, v_a_3680_);
lean_dec_ref(v_mr_3679_);
return v_res_3681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(lean_object* v_mr_3682_, lean_object* v_a_3683_){
_start:
{
lean_object* v___x_3684_; 
v___x_3684_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3682_, v_a_3683_);
return v___x_3684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg___boxed(lean_object* v_mr_3685_, lean_object* v_a_3686_){
_start:
{
lean_object* v_res_3687_; 
v_res_3687_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(v_mr_3685_, v_a_3686_);
lean_dec_ref(v_mr_3685_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(lean_object* v_00_u03b1_3688_, lean_object* v_mr_3689_, lean_object* v_a_3690_){
_start:
{
lean_object* v___x_3691_; 
v___x_3691_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3689_, v_a_3690_);
return v___x_3691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___boxed(lean_object* v_00_u03b1_3692_, lean_object* v_mr_3693_, lean_object* v_a_3694_){
_start:
{
lean_object* v_res_3695_; 
v_res_3695_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(v_00_u03b1_3692_, v_mr_3693_, v_a_3694_);
lean_dec_ref(v_mr_3693_);
return v_res_3695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(lean_object* v_00_u03b1_3696_, lean_object* v_mr_3697_, lean_object* v_a_3698_){
_start:
{
lean_object* v___x_3699_; 
v___x_3699_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3697_, v_a_3698_);
return v___x_3699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___boxed(lean_object* v_00_u03b1_3700_, lean_object* v_mr_3701_, lean_object* v_a_3702_){
_start:
{
lean_object* v_res_3703_; 
v_res_3703_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(v_00_u03b1_3700_, v_mr_3701_, v_a_3702_);
lean_dec_ref(v_mr_3701_);
return v_res_3703_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(lean_object* v_00_u03b1_3704_, size_t v_sz_3705_, size_t v_i_3706_, lean_object* v_bs_3707_){
_start:
{
lean_object* v___x_3708_; 
v___x_3708_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_3705_, v_i_3706_, v_bs_3707_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3709_, lean_object* v_sz_3710_, lean_object* v_i_3711_, lean_object* v_bs_3712_){
_start:
{
size_t v_sz_boxed_3713_; size_t v_i_boxed_3714_; lean_object* v_res_3715_; 
v_sz_boxed_3713_ = lean_unbox_usize(v_sz_3710_);
lean_dec(v_sz_3710_);
v_i_boxed_3714_ = lean_unbox_usize(v_i_3711_);
lean_dec(v_i_3711_);
v_res_3715_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(v_00_u03b1_3709_, v_sz_boxed_3713_, v_i_boxed_3714_, v_bs_3712_);
return v_res_3715_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(lean_object* v_00_u03b1_3716_, lean_object* v_as_3717_, size_t v_i_3718_, size_t v_stop_3719_, lean_object* v_b_3720_){
_start:
{
lean_object* v___x_3721_; 
v___x_3721_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_as_3717_, v_i_3718_, v_stop_3719_, v_b_3720_);
return v___x_3721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3722_, lean_object* v_as_3723_, lean_object* v_i_3724_, lean_object* v_stop_3725_, lean_object* v_b_3726_){
_start:
{
size_t v_i_boxed_3727_; size_t v_stop_boxed_3728_; lean_object* v_res_3729_; 
v_i_boxed_3727_ = lean_unbox_usize(v_i_3724_);
lean_dec(v_i_3724_);
v_stop_boxed_3728_ = lean_unbox_usize(v_stop_3725_);
lean_dec(v_stop_3725_);
v_res_3729_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(v_00_u03b1_3722_, v_as_3723_, v_i_boxed_3727_, v_stop_boxed_3728_, v_b_3726_);
lean_dec_ref(v_as_3723_);
return v_res_3729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(lean_object* v_00_u03b1_3730_, lean_object* v_n_3731_, lean_object* v_aa_3732_, lean_object* v_n_3733_, lean_object* v_j_3734_, lean_object* v_a_3735_, lean_object* v_a_3736_){
_start:
{
lean_object* v___x_3737_; 
v___x_3737_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3731_, v_aa_3732_, v_n_3733_, v_j_3734_, v_a_3736_);
return v___x_3737_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3738_, lean_object* v_n_3739_, lean_object* v_aa_3740_, lean_object* v_n_3741_, lean_object* v_j_3742_, lean_object* v_a_3743_, lean_object* v_a_3744_){
_start:
{
lean_object* v_res_3745_; 
v_res_3745_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(v_00_u03b1_3738_, v_n_3739_, v_aa_3740_, v_n_3741_, v_j_3742_, v_a_3743_, v_a_3744_);
lean_dec(v_n_3741_);
lean_dec_ref(v_aa_3740_);
lean_dec(v_n_3739_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(lean_object* v_snd_3753_, lean_object* v___x_3754_, lean_object* v_score_3755_, lean_object* v___x_3756_, lean_object* v_k_3757_, lean_object* v_args_3758_, lean_object* v_cases_3759_){
_start:
{
lean_object* v___x_3760_; 
v___x_3760_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_snd_3753_, v_k_3757_);
if (lean_obj_tag(v___x_3760_) == 0)
{
lean_dec_ref(v___x_3754_);
return v_cases_3759_;
}
else
{
lean_object* v_val_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
v_val_3761_ = lean_ctor_get(v___x_3760_, 0);
lean_inc(v_val_3761_);
lean_dec_ref_known(v___x_3760_, 1);
v___x_3762_ = l_Array_append___redArg(v___x_3754_, v_args_3758_);
v___x_3763_ = lean_nat_add(v_score_3755_, v___x_3756_);
v___x_3764_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3764_, 0, v___x_3762_);
lean_ctor_set(v___x_3764_, 1, v___x_3763_);
lean_ctor_set(v___x_3764_, 2, v_val_3761_);
v___x_3765_ = lean_array_push(v_cases_3759_, v___x_3764_);
return v___x_3765_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed(lean_object* v_snd_3766_, lean_object* v___x_3767_, lean_object* v_score_3768_, lean_object* v___x_3769_, lean_object* v_k_3770_, lean_object* v_args_3771_, lean_object* v_cases_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(v_snd_3766_, v___x_3767_, v_score_3768_, v___x_3769_, v_k_3770_, v_args_3771_, v_cases_3772_);
lean_dec_ref(v_args_3771_);
lean_dec(v_k_3770_);
lean_dec(v___x_3769_);
lean_dec(v_score_3768_);
lean_dec_ref(v_snd_3766_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(lean_object* v_cases_3774_, lean_object* v_result_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_, lean_object* v_a_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_){
_start:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; uint8_t v___x_3784_; 
v___x_3782_ = lean_array_get_size(v_cases_3774_);
v___x_3783_ = lean_unsigned_to_nat(0u);
v___x_3784_ = lean_nat_dec_eq(v___x_3782_, v___x_3783_);
if (v___x_3784_ == 0)
{
lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v_ca_3788_; lean_object* v_todo_3789_; lean_object* v_score_3790_; lean_object* v_c_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3857_; 
v___x_3785_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default));
v___x_3786_ = lean_unsigned_to_nat(1u);
v___x_3787_ = lean_nat_sub(v___x_3782_, v___x_3786_);
v_ca_3788_ = lean_array_get(v___x_3785_, v_cases_3774_, v___x_3787_);
lean_dec(v___x_3787_);
v_todo_3789_ = lean_ctor_get(v_ca_3788_, 0);
v_score_3790_ = lean_ctor_get(v_ca_3788_, 1);
v_c_3791_ = lean_ctor_get(v_ca_3788_, 2);
v_isSharedCheck_3857_ = !lean_is_exclusive(v_ca_3788_);
if (v_isSharedCheck_3857_ == 0)
{
v___x_3793_ = v_ca_3788_;
v_isShared_3794_ = v_isSharedCheck_3857_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_c_3791_);
lean_inc(v_score_3790_);
lean_inc(v_todo_3789_);
lean_dec(v_ca_3788_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3857_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v___x_3795_; lean_object* v_cases_3796_; lean_object* v___x_3797_; 
v___x_3795_ = l_Lean_instInhabitedExpr;
v_cases_3796_ = lean_array_pop(v_cases_3774_);
v___x_3797_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3791_, v_a_3776_, v_a_3777_, v_a_3778_, v_a_3779_, v_a_3780_);
lean_dec(v_c_3791_);
if (lean_obj_tag(v___x_3797_) == 0)
{
lean_object* v_a_3798_; lean_object* v___y_3800_; uint8_t v___y_3801_; lean_object* v___y_3802_; lean_object* v___y_3803_; lean_object* v_snd_3826_; lean_object* v_fst_3827_; lean_object* v_fst_3828_; lean_object* v_snd_3829_; lean_object* v___x_3830_; uint8_t v___y_3832_; uint8_t v___x_3842_; 
v_a_3798_ = lean_ctor_get(v___x_3797_, 0);
lean_inc(v_a_3798_);
lean_dec_ref_known(v___x_3797_, 1);
v_snd_3826_ = lean_ctor_get(v_a_3798_, 1);
lean_inc(v_snd_3826_);
v_fst_3827_ = lean_ctor_get(v_a_3798_, 0);
lean_inc(v_fst_3827_);
lean_dec(v_a_3798_);
v_fst_3828_ = lean_ctor_get(v_snd_3826_, 0);
lean_inc(v_fst_3828_);
v_snd_3829_ = lean_ctor_get(v_snd_3826_, 1);
lean_inc(v_snd_3829_);
lean_dec(v_snd_3826_);
v___x_3830_ = lean_array_get_size(v_todo_3789_);
v___x_3842_ = lean_nat_dec_eq(v___x_3830_, v___x_3783_);
if (v___x_3842_ == 0)
{
uint8_t v___x_3843_; 
lean_dec(v_fst_3827_);
v___x_3843_ = lean_nat_dec_eq(v_fst_3828_, v___x_3783_);
if (v___x_3843_ == 0)
{
v___y_3832_ = v___x_3842_;
goto v___jp_3831_;
}
else
{
lean_object* v_size_3844_; uint8_t v___x_3845_; 
v_size_3844_ = lean_ctor_get(v_snd_3829_, 0);
v___x_3845_ = lean_nat_dec_eq(v_size_3844_, v___x_3783_);
if (v___x_3845_ == 0)
{
v___y_3832_ = v___x_3845_;
goto v___jp_3831_;
}
else
{
lean_dec(v_snd_3829_);
lean_dec(v_fst_3828_);
lean_del_object(v___x_3793_);
lean_dec(v_score_3790_);
lean_dec_ref(v_todo_3789_);
v_cases_3774_ = v_cases_3796_;
goto _start;
}
}
}
else
{
lean_object* v___x_3847_; 
lean_dec(v_snd_3829_);
lean_dec(v_fst_3828_);
lean_del_object(v___x_3793_);
lean_dec_ref(v_todo_3789_);
v___x_3847_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_result_3775_, v_score_3790_, v_fst_3827_);
lean_dec(v_score_3790_);
v_cases_3774_ = v_cases_3796_;
v_result_3775_ = v___x_3847_;
goto _start;
}
v___jp_3799_:
{
uint8_t v___x_3804_; lean_object* v___x_3805_; 
v___x_3804_ = 1;
v___x_3805_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v___y_3802_, v___x_3804_, v___y_3801_, v_a_3777_, v_a_3778_, v_a_3779_, v_a_3780_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v_a_3806_; lean_object* v_fst_3807_; 
v_a_3806_ = lean_ctor_get(v___x_3805_, 0);
lean_inc(v_a_3806_);
lean_dec_ref_known(v___x_3805_, 1);
v_fst_3807_ = lean_ctor_get(v_a_3806_, 0);
lean_inc(v_fst_3807_);
switch(lean_obj_tag(v_fst_3807_))
{
case 3:
{
lean_dec(v_a_3806_);
lean_dec_ref(v___y_3800_);
v_cases_3774_ = v___y_3803_;
goto _start;
}
case 5:
{
lean_object* v_snd_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; 
v_snd_3809_ = lean_ctor_get(v_a_3806_, 1);
lean_inc(v_snd_3809_);
lean_dec(v_a_3806_);
v___x_3810_ = lean_box(4);
v___x_3811_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
lean_inc_ref(v___y_3800_);
v___x_3812_ = lean_apply_3(v___y_3800_, v___x_3810_, v___x_3811_, v___y_3803_);
v___x_3813_ = lean_apply_3(v___y_3800_, v_fst_3807_, v_snd_3809_, v___x_3812_);
v_cases_3774_ = v___x_3813_;
goto _start;
}
default: 
{
lean_object* v_snd_3815_; lean_object* v___x_3816_; 
v_snd_3815_ = lean_ctor_get(v_a_3806_, 1);
lean_inc(v_snd_3815_);
lean_dec(v_a_3806_);
v___x_3816_ = lean_apply_3(v___y_3800_, v_fst_3807_, v_snd_3815_, v___y_3803_);
v_cases_3774_ = v___x_3816_;
goto _start;
}
}
}
else
{
lean_object* v_a_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3825_; 
lean_dec_ref(v___y_3803_);
lean_dec_ref(v___y_3800_);
lean_dec_ref(v_result_3775_);
v_a_3818_ = lean_ctor_get(v___x_3805_, 0);
v_isSharedCheck_3825_ = !lean_is_exclusive(v___x_3805_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3820_ = v___x_3805_;
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_a_3818_);
lean_dec(v___x_3805_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
lean_object* v___x_3823_; 
if (v_isShared_3821_ == 0)
{
v___x_3823_ = v___x_3820_;
goto v_reusejp_3822_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_a_3818_);
v___x_3823_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3822_;
}
v_reusejp_3822_:
{
return v___x_3823_;
}
}
}
}
v___jp_3831_:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___f_3836_; uint8_t v___x_3837_; 
v___x_3833_ = lean_nat_sub(v___x_3830_, v___x_3786_);
v___x_3834_ = lean_array_get(v___x_3795_, v_todo_3789_, v___x_3833_);
lean_dec(v___x_3833_);
v___x_3835_ = lean_array_pop(v_todo_3789_);
lean_inc(v_score_3790_);
lean_inc_ref(v___x_3835_);
v___f_3836_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed), 7, 4);
lean_closure_set(v___f_3836_, 0, v_snd_3829_);
lean_closure_set(v___f_3836_, 1, v___x_3835_);
lean_closure_set(v___f_3836_, 2, v_score_3790_);
lean_closure_set(v___f_3836_, 3, v___x_3786_);
v___x_3837_ = lean_nat_dec_eq(v_fst_3828_, v___x_3783_);
if (v___x_3837_ == 0)
{
lean_object* v___x_3839_; 
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 2, v_fst_3828_);
lean_ctor_set(v___x_3793_, 0, v___x_3835_);
v___x_3839_ = v___x_3793_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v___x_3835_);
lean_ctor_set(v_reuseFailAlloc_3841_, 1, v_score_3790_);
lean_ctor_set(v_reuseFailAlloc_3841_, 2, v_fst_3828_);
v___x_3839_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
lean_object* v___x_3840_; 
v___x_3840_ = lean_array_push(v_cases_3796_, v___x_3839_);
v___y_3800_ = v___f_3836_;
v___y_3801_ = v___y_3832_;
v___y_3802_ = v___x_3834_;
v___y_3803_ = v___x_3840_;
goto v___jp_3799_;
}
}
else
{
lean_dec_ref(v___x_3835_);
lean_dec(v_fst_3828_);
lean_del_object(v___x_3793_);
lean_dec(v_score_3790_);
v___y_3800_ = v___f_3836_;
v___y_3801_ = v___y_3832_;
v___y_3802_ = v___x_3834_;
v___y_3803_ = v_cases_3796_;
goto v___jp_3799_;
}
}
}
else
{
lean_object* v_a_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3856_; 
lean_dec_ref(v_cases_3796_);
lean_del_object(v___x_3793_);
lean_dec(v_score_3790_);
lean_dec_ref(v_todo_3789_);
lean_dec_ref(v_result_3775_);
v_a_3849_ = lean_ctor_get(v___x_3797_, 0);
v_isSharedCheck_3856_ = !lean_is_exclusive(v___x_3797_);
if (v_isSharedCheck_3856_ == 0)
{
v___x_3851_ = v___x_3797_;
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_a_3849_);
lean_dec(v___x_3797_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___x_3854_; 
if (v_isShared_3852_ == 0)
{
v___x_3854_ = v___x_3851_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v_a_3849_);
v___x_3854_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
return v___x_3854_;
}
}
}
}
}
else
{
lean_object* v___x_3858_; 
lean_dec_ref(v_cases_3774_);
v___x_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3858_, 0, v_result_3775_);
return v___x_3858_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___boxed(lean_object* v_cases_3859_, lean_object* v_result_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_){
_start:
{
lean_object* v_res_3867_; 
v_res_3867_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v_cases_3859_, v_result_3860_, v_a_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_);
lean_dec(v_a_3865_);
lean_dec_ref(v_a_3864_);
lean_dec(v_a_3863_);
lean_dec_ref(v_a_3862_);
lean_dec(v_a_3861_);
return v_res_3867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop(lean_object* v_00_u03b1_3868_, lean_object* v_cases_3869_, lean_object* v_result_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_, lean_object* v_a_3874_, lean_object* v_a_3875_){
_start:
{
lean_object* v___x_3877_; 
v___x_3877_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v_cases_3869_, v_result_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_, v_a_3875_);
return v___x_3877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___boxed(lean_object* v_00_u03b1_3878_, lean_object* v_cases_3879_, lean_object* v_result_3880_, lean_object* v_a_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_, lean_object* v_a_3884_, lean_object* v_a_3885_, lean_object* v_a_3886_){
_start:
{
lean_object* v_res_3887_; 
v_res_3887_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop(v_00_u03b1_3878_, v_cases_3879_, v_result_3880_, v_a_3881_, v_a_3882_, v_a_3883_, v_a_3884_, v_a_3885_);
lean_dec(v_a_3885_);
lean_dec_ref(v_a_3884_);
lean_dec(v_a_3883_);
lean_dec_ref(v_a_3882_);
lean_dec(v_a_3881_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(lean_object* v_root_3890_, lean_object* v_a_3891_, lean_object* v_a_3892_, lean_object* v_a_3893_, lean_object* v_a_3894_, lean_object* v_a_3895_){
_start:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3897_ = lean_box(3);
v___x_3898_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_root_3890_, v___x_3897_);
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3899_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0));
v___x_3900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3900_, 0, v___x_3899_);
return v___x_3900_;
}
else
{
lean_object* v_val_3901_; lean_object* v___x_3902_; 
v_val_3901_ = lean_ctor_get(v___x_3898_, 0);
lean_inc(v_val_3901_);
lean_dec_ref_known(v___x_3898_, 1);
v___x_3902_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_val_3901_, v_a_3891_, v_a_3892_, v_a_3893_, v_a_3894_, v_a_3895_);
lean_dec(v_val_3901_);
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v_a_3903_; lean_object* v___x_3905_; uint8_t v_isShared_3906_; uint8_t v_isSharedCheck_3914_; 
v_a_3903_ = lean_ctor_get(v___x_3902_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3905_ = v___x_3902_;
v_isShared_3906_ = v_isSharedCheck_3914_;
goto v_resetjp_3904_;
}
else
{
lean_inc(v_a_3903_);
lean_dec(v___x_3902_);
v___x_3905_ = lean_box(0);
v_isShared_3906_ = v_isSharedCheck_3914_;
goto v_resetjp_3904_;
}
v_resetjp_3904_:
{
lean_object* v_fst_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3912_; 
v_fst_3907_ = lean_ctor_get(v_a_3903_, 0);
lean_inc(v_fst_3907_);
lean_dec(v_a_3903_);
v___x_3908_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0));
v___x_3909_ = lean_unsigned_to_nat(1u);
v___x_3910_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v___x_3908_, v___x_3909_, v_fst_3907_);
if (v_isShared_3906_ == 0)
{
lean_ctor_set(v___x_3905_, 0, v___x_3910_);
v___x_3912_ = v___x_3905_;
goto v_reusejp_3911_;
}
else
{
lean_object* v_reuseFailAlloc_3913_; 
v_reuseFailAlloc_3913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3913_, 0, v___x_3910_);
v___x_3912_ = v_reuseFailAlloc_3913_;
goto v_reusejp_3911_;
}
v_reusejp_3911_:
{
return v___x_3912_;
}
}
}
else
{
lean_object* v_a_3915_; lean_object* v___x_3917_; uint8_t v_isShared_3918_; uint8_t v_isSharedCheck_3922_; 
v_a_3915_ = lean_ctor_get(v___x_3902_, 0);
v_isSharedCheck_3922_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_3922_ == 0)
{
v___x_3917_ = v___x_3902_;
v_isShared_3918_ = v_isSharedCheck_3922_;
goto v_resetjp_3916_;
}
else
{
lean_inc(v_a_3915_);
lean_dec(v___x_3902_);
v___x_3917_ = lean_box(0);
v_isShared_3918_ = v_isSharedCheck_3922_;
goto v_resetjp_3916_;
}
v_resetjp_3916_:
{
lean_object* v___x_3920_; 
if (v_isShared_3918_ == 0)
{
v___x_3920_ = v___x_3917_;
goto v_reusejp_3919_;
}
else
{
lean_object* v_reuseFailAlloc_3921_; 
v_reuseFailAlloc_3921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3921_, 0, v_a_3915_);
v___x_3920_ = v_reuseFailAlloc_3921_;
goto v_reusejp_3919_;
}
v_reusejp_3919_:
{
return v___x_3920_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___boxed(lean_object* v_root_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_, lean_object* v_a_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_, lean_object* v_a_3929_){
_start:
{
lean_object* v_res_3930_; 
v_res_3930_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_3923_, v_a_3924_, v_a_3925_, v_a_3926_, v_a_3927_, v_a_3928_);
lean_dec(v_a_3928_);
lean_dec_ref(v_a_3927_);
lean_dec(v_a_3926_);
lean_dec_ref(v_a_3925_);
lean_dec(v_a_3924_);
lean_dec_ref(v_root_3923_);
return v_res_3930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult(lean_object* v_00_u03b1_3931_, lean_object* v_root_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_){
_start:
{
lean_object* v___x_3939_; 
v___x_3939_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
return v___x_3939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___boxed(lean_object* v_00_u03b1_3940_, lean_object* v_root_3941_, lean_object* v_a_3942_, lean_object* v_a_3943_, lean_object* v_a_3944_, lean_object* v_a_3945_, lean_object* v_a_3946_, lean_object* v_a_3947_){
_start:
{
lean_object* v_res_3948_; 
v_res_3948_ = l_Lean_Meta_LazyDiscrTree_getStarResult(v_00_u03b1_3940_, v_root_3941_, v_a_3942_, v_a_3943_, v_a_3944_, v_a_3945_, v_a_3946_);
lean_dec(v_a_3946_);
lean_dec_ref(v_a_3945_);
lean_dec(v_a_3944_);
lean_dec_ref(v_a_3943_);
lean_dec(v_a_3942_);
lean_dec_ref(v_root_3941_);
return v_res_3948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase(lean_object* v_r_3949_, lean_object* v_k_3950_, lean_object* v_args_3951_, lean_object* v_cases_3952_){
_start:
{
lean_object* v___x_3953_; 
v___x_3953_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_r_3949_, v_k_3950_);
if (lean_obj_tag(v___x_3953_) == 0)
{
lean_dec_ref(v_args_3951_);
return v_cases_3952_;
}
else
{
lean_object* v_val_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; 
v_val_3954_ = lean_ctor_get(v___x_3953_, 0);
lean_inc(v_val_3954_);
lean_dec_ref_known(v___x_3953_, 1);
v___x_3955_ = lean_unsigned_to_nat(1u);
v___x_3956_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3956_, 0, v_args_3951_);
lean_ctor_set(v___x_3956_, 1, v___x_3955_);
lean_ctor_set(v___x_3956_, 2, v_val_3954_);
v___x_3957_ = lean_array_push(v_cases_3952_, v___x_3956_);
return v___x_3957_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase___boxed(lean_object* v_r_3958_, lean_object* v_k_3959_, lean_object* v_args_3960_, lean_object* v_cases_3961_){
_start:
{
lean_object* v_res_3962_; 
v_res_3962_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_r_3958_, v_k_3959_, v_args_3960_, v_cases_3961_);
lean_dec(v_k_3959_);
lean_dec_ref(v_r_3958_);
return v_res_3962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(lean_object* v_root_3965_, lean_object* v_e_3966_, lean_object* v_a_3967_, lean_object* v_a_3968_, lean_object* v_a_3969_, lean_object* v_a_3970_, lean_object* v_a_3971_){
_start:
{
lean_object* v___x_3973_; 
v___x_3973_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_3965_, v_a_3967_, v_a_3968_, v_a_3969_, v_a_3970_, v_a_3971_);
if (lean_obj_tag(v___x_3973_) == 0)
{
lean_object* v_a_3974_; uint8_t v___x_3975_; lean_object* v___x_3976_; 
v_a_3974_ = lean_ctor_get(v___x_3973_, 0);
lean_inc(v_a_3974_);
lean_dec_ref_known(v___x_3973_, 1);
v___x_3975_ = 1;
v___x_3976_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_3966_, v___x_3975_, v___x_3975_, v_a_3968_, v_a_3969_, v_a_3970_, v_a_3971_);
if (lean_obj_tag(v___x_3976_) == 0)
{
lean_object* v_a_3977_; lean_object* v_fst_3978_; 
v_a_3977_ = lean_ctor_get(v___x_3976_, 0);
lean_inc(v_a_3977_);
lean_dec_ref_known(v___x_3976_, 1);
v_fst_3978_ = lean_ctor_get(v_a_3977_, 0);
lean_inc(v_fst_3978_);
switch(lean_obj_tag(v_fst_3978_))
{
case 3:
{
lean_object* v___x_3979_; lean_object* v___x_3980_; 
lean_dec(v_a_3977_);
v___x_3979_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0));
v___x_3980_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_3979_, v_a_3974_, v_a_3967_, v_a_3968_, v_a_3969_, v_a_3970_, v_a_3971_);
return v___x_3980_;
}
case 5:
{
lean_object* v_snd_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; 
v_snd_3981_ = lean_ctor_get(v_a_3977_, 1);
lean_inc(v_snd_3981_);
lean_dec(v_a_3977_);
v___x_3982_ = lean_box(4);
v___x_3983_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_3984_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_3965_, v___x_3982_, v___x_3983_, v___x_3983_);
v___x_3985_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_3965_, v_fst_3978_, v_snd_3981_, v___x_3984_);
v___x_3986_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_3985_, v_a_3974_, v_a_3967_, v_a_3968_, v_a_3969_, v_a_3970_, v_a_3971_);
return v___x_3986_;
}
default: 
{
lean_object* v_snd_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; 
v_snd_3987_ = lean_ctor_get(v_a_3977_, 1);
lean_inc(v_snd_3987_);
lean_dec(v_a_3977_);
v___x_3988_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0));
v___x_3989_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_3965_, v_fst_3978_, v_snd_3987_, v___x_3988_);
lean_dec(v_fst_3978_);
v___x_3990_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_3989_, v_a_3974_, v_a_3967_, v_a_3968_, v_a_3969_, v_a_3970_, v_a_3971_);
return v___x_3990_;
}
}
}
else
{
lean_object* v_a_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_3998_; 
lean_dec(v_a_3974_);
v_a_3991_ = lean_ctor_get(v___x_3976_, 0);
v_isSharedCheck_3998_ = !lean_is_exclusive(v___x_3976_);
if (v_isSharedCheck_3998_ == 0)
{
v___x_3993_ = v___x_3976_;
v_isShared_3994_ = v_isSharedCheck_3998_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_a_3991_);
lean_dec(v___x_3976_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_3998_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v___x_3996_; 
if (v_isShared_3994_ == 0)
{
v___x_3996_ = v___x_3993_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v_a_3991_);
v___x_3996_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
return v___x_3996_;
}
}
}
}
else
{
lean_dec_ref(v_e_3966_);
return v___x_3973_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___boxed(lean_object* v_root_3999_, lean_object* v_e_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_){
_start:
{
lean_object* v_res_4007_; 
v_res_4007_ = l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(v_root_3999_, v_e_4000_, v_a_4001_, v_a_4002_, v_a_4003_, v_a_4004_, v_a_4005_);
lean_dec(v_a_4005_);
lean_dec_ref(v_a_4004_);
lean_dec(v_a_4003_);
lean_dec_ref(v_a_4002_);
lean_dec(v_a_4001_);
lean_dec_ref(v_root_3999_);
return v_res_4007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore(lean_object* v_00_u03b1_4008_, lean_object* v_root_4009_, lean_object* v_e_4010_, lean_object* v_a_4011_, lean_object* v_a_4012_, lean_object* v_a_4013_, lean_object* v_a_4014_, lean_object* v_a_4015_){
_start:
{
lean_object* v___x_4017_; 
v___x_4017_ = l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(v_root_4009_, v_e_4010_, v_a_4011_, v_a_4012_, v_a_4013_, v_a_4014_, v_a_4015_);
return v___x_4017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed(lean_object* v_00_u03b1_4018_, lean_object* v_root_4019_, lean_object* v_e_4020_, lean_object* v_a_4021_, lean_object* v_a_4022_, lean_object* v_a_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_){
_start:
{
lean_object* v_res_4027_; 
v_res_4027_ = l_Lean_Meta_LazyDiscrTree_getMatchCore(v_00_u03b1_4018_, v_root_4019_, v_e_4020_, v_a_4021_, v_a_4022_, v_a_4023_, v_a_4024_, v_a_4025_);
lean_dec(v_a_4025_);
lean_dec_ref(v_a_4024_);
lean_dec(v_a_4023_);
lean_dec_ref(v_a_4022_);
lean_dec(v_a_4021_);
lean_dec_ref(v_root_4019_);
return v_res_4027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg(lean_object* v_d_4028_, lean_object* v_e_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_, lean_object* v_a_4033_){
_start:
{
lean_object* v___y_4036_; lean_object* v_roots_4053_; lean_object* v___x_4054_; uint8_t v_transparency_4055_; lean_object* v___x_4056_; uint8_t v___x_4057_; uint8_t v___x_4058_; 
v_roots_4053_ = lean_ctor_get(v_d_4028_, 1);
v___x_4054_ = l_Lean_Meta_Context_config(v_a_4030_);
v_transparency_4055_ = lean_ctor_get_uint8(v___x_4054_, 9);
lean_dec_ref(v___x_4054_);
lean_inc_ref(v_roots_4053_);
v___x_4056_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed), 9, 3);
lean_closure_set(v___x_4056_, 0, lean_box(0));
lean_closure_set(v___x_4056_, 1, v_roots_4053_);
lean_closure_set(v___x_4056_, 2, v_e_4029_);
v___x_4057_ = 2;
v___x_4058_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4055_, v___x_4057_);
if (v___x_4058_ == 0)
{
lean_object* v_keyedConfig_4059_; uint8_t v_trackZetaDelta_4060_; lean_object* v_zetaDeltaSet_4061_; lean_object* v_lctx_4062_; lean_object* v_localInstances_4063_; lean_object* v_defEqCtx_x3f_4064_; lean_object* v_synthPendingDepth_4065_; lean_object* v_customCanUnfoldPredicate_x3f_4066_; uint8_t v_univApprox_4067_; uint8_t v_inTypeClassResolution_4068_; uint8_t v_cacheInferType_4069_; lean_object* v_rewriteSet_x3f_4070_; uint8_t v_rewriteFuelScope_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; 
v_keyedConfig_4059_ = lean_ctor_get(v_a_4030_, 0);
v_trackZetaDelta_4060_ = lean_ctor_get_uint8(v_a_4030_, sizeof(void*)*8);
v_zetaDeltaSet_4061_ = lean_ctor_get(v_a_4030_, 1);
v_lctx_4062_ = lean_ctor_get(v_a_4030_, 2);
v_localInstances_4063_ = lean_ctor_get(v_a_4030_, 3);
v_defEqCtx_x3f_4064_ = lean_ctor_get(v_a_4030_, 4);
v_synthPendingDepth_4065_ = lean_ctor_get(v_a_4030_, 5);
v_customCanUnfoldPredicate_x3f_4066_ = lean_ctor_get(v_a_4030_, 6);
v_univApprox_4067_ = lean_ctor_get_uint8(v_a_4030_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_4068_ = lean_ctor_get_uint8(v_a_4030_, sizeof(void*)*8 + 2);
v_cacheInferType_4069_ = lean_ctor_get_uint8(v_a_4030_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_4070_ = lean_ctor_get(v_a_4030_, 7);
v_rewriteFuelScope_4071_ = lean_ctor_get_uint8(v_a_4030_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_4059_);
v___x_4072_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4057_, v_keyedConfig_4059_);
lean_inc(v_rewriteSet_x3f_4070_);
lean_inc(v_customCanUnfoldPredicate_x3f_4066_);
lean_inc(v_synthPendingDepth_4065_);
lean_inc(v_defEqCtx_x3f_4064_);
lean_inc_ref(v_localInstances_4063_);
lean_inc_ref(v_lctx_4062_);
lean_inc(v_zetaDeltaSet_4061_);
v___x_4073_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_4073_, 0, v___x_4072_);
lean_ctor_set(v___x_4073_, 1, v_zetaDeltaSet_4061_);
lean_ctor_set(v___x_4073_, 2, v_lctx_4062_);
lean_ctor_set(v___x_4073_, 3, v_localInstances_4063_);
lean_ctor_set(v___x_4073_, 4, v_defEqCtx_x3f_4064_);
lean_ctor_set(v___x_4073_, 5, v_synthPendingDepth_4065_);
lean_ctor_set(v___x_4073_, 6, v_customCanUnfoldPredicate_x3f_4066_);
lean_ctor_set(v___x_4073_, 7, v_rewriteSet_x3f_4070_);
lean_ctor_set_uint8(v___x_4073_, sizeof(void*)*8, v_trackZetaDelta_4060_);
lean_ctor_set_uint8(v___x_4073_, sizeof(void*)*8 + 1, v_univApprox_4067_);
lean_ctor_set_uint8(v___x_4073_, sizeof(void*)*8 + 2, v_inTypeClassResolution_4068_);
lean_ctor_set_uint8(v___x_4073_, sizeof(void*)*8 + 3, v_cacheInferType_4069_);
lean_ctor_set_uint8(v___x_4073_, sizeof(void*)*8 + 4, v_rewriteFuelScope_4071_);
v___x_4074_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_4028_, v___x_4056_, v___x_4073_, v_a_4031_, v_a_4032_, v_a_4033_);
lean_dec_ref_known(v___x_4073_, 8);
v___y_4036_ = v___x_4074_;
goto v___jp_4035_;
}
else
{
lean_object* v___x_4075_; 
v___x_4075_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_4028_, v___x_4056_, v_a_4030_, v_a_4031_, v_a_4032_, v_a_4033_);
v___y_4036_ = v___x_4075_;
goto v___jp_4035_;
}
v___jp_4035_:
{
if (lean_obj_tag(v___y_4036_) == 0)
{
lean_object* v_a_4037_; lean_object* v___x_4039_; uint8_t v_isShared_4040_; uint8_t v_isSharedCheck_4044_; 
v_a_4037_ = lean_ctor_get(v___y_4036_, 0);
v_isSharedCheck_4044_ = !lean_is_exclusive(v___y_4036_);
if (v_isSharedCheck_4044_ == 0)
{
v___x_4039_ = v___y_4036_;
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
else
{
lean_inc(v_a_4037_);
lean_dec(v___y_4036_);
v___x_4039_ = lean_box(0);
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
v_resetjp_4038_:
{
lean_object* v___x_4042_; 
if (v_isShared_4040_ == 0)
{
v___x_4042_ = v___x_4039_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4043_; 
v_reuseFailAlloc_4043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4043_, 0, v_a_4037_);
v___x_4042_ = v_reuseFailAlloc_4043_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
return v___x_4042_;
}
}
}
else
{
lean_object* v_a_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4052_; 
v_a_4045_ = lean_ctor_get(v___y_4036_, 0);
v_isSharedCheck_4052_ = !lean_is_exclusive(v___y_4036_);
if (v_isSharedCheck_4052_ == 0)
{
v___x_4047_ = v___y_4036_;
v_isShared_4048_ = v_isSharedCheck_4052_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_a_4045_);
lean_dec(v___y_4036_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4052_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
lean_object* v___x_4050_; 
if (v_isShared_4048_ == 0)
{
v___x_4050_ = v___x_4047_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v_a_4045_);
v___x_4050_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
return v___x_4050_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg___boxed(lean_object* v_d_4076_, lean_object* v_e_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_){
_start:
{
lean_object* v_res_4083_; 
v_res_4083_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_d_4076_, v_e_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_);
lean_dec(v_a_4081_);
lean_dec_ref(v_a_4080_);
lean_dec(v_a_4079_);
lean_dec_ref(v_a_4078_);
return v_res_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch(lean_object* v_00_u03b1_4084_, lean_object* v_d_4085_, lean_object* v_e_4086_, lean_object* v_a_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_){
_start:
{
lean_object* v___x_4092_; 
v___x_4092_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_d_4085_, v_e_4086_, v_a_4087_, v_a_4088_, v_a_4089_, v_a_4090_);
return v___x_4092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___boxed(lean_object* v_00_u03b1_4093_, lean_object* v_d_4094_, lean_object* v_e_4095_, lean_object* v_a_4096_, lean_object* v_a_4097_, lean_object* v_a_4098_, lean_object* v_a_4099_, lean_object* v_a_4100_){
_start:
{
lean_object* v_res_4101_; 
v_res_4101_ = l_Lean_Meta_LazyDiscrTree_getMatch(v_00_u03b1_4093_, v_d_4094_, v_e_4095_, v_a_4096_, v_a_4097_, v_a_4098_, v_a_4099_);
lean_dec(v_a_4099_);
lean_dec_ref(v_a_4098_);
lean_dec(v_a_4097_);
lean_dec_ref(v_a_4096_);
return v_res_4101_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1(void){
_start:
{
lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; 
v___x_4104_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0));
v___x_4105_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_4106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4105_);
lean_ctor_set(v___x_4106_, 1, v___x_4104_);
return v___x_4106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg(){
_start:
{
lean_object* v___x_4108_; 
v___x_4108_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
return v___x_4108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___boxed(lean_object* v___dummy_4109_){
_start:
{
lean_object* v_res_4110_; 
v_res_4110_ = l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg();
return v_res_4110_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0(void){
_start:
{
lean_object* v___x_4111_; 
v___x_4111_ = l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg();
return v___x_4111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default(lean_object* v_00_u03b1_4112_){
_start:
{
lean_object* v___x_4113_; 
v___x_4113_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0);
return v___x_4113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg(){
_start:
{
lean_object* v___x_4115_; 
v___x_4115_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0);
return v___x_4115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg___boxed(lean_object* v___dummy_4116_){
_start:
{
lean_object* v_res_4117_; 
v_res_4117_ = l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___redArg();
return v_res_4117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree(lean_object* v_a_4118_){
_start:
{
lean_object* v___x_4119_; 
v___x_4119_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0);
return v___x_4119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(lean_object* v_d_4120_, lean_object* v_k_4121_, lean_object* v_f_4122_){
_start:
{
lean_object* v_roots_4123_; lean_object* v_tries_4124_; lean_object* v___x_4125_; 
v_roots_4123_ = lean_ctor_get(v_d_4120_, 0);
v_tries_4124_ = lean_ctor_get(v_d_4120_, 1);
v___x_4125_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_roots_4123_, v_k_4121_);
if (lean_obj_tag(v___x_4125_) == 0)
{
lean_object* v___x_4127_; uint8_t v_isShared_4128_; uint8_t v_isSharedCheck_4137_; 
lean_inc_ref(v_tries_4124_);
lean_inc_ref(v_roots_4123_);
v_isSharedCheck_4137_ = !lean_is_exclusive(v_d_4120_);
if (v_isSharedCheck_4137_ == 0)
{
lean_object* v_unused_4138_; lean_object* v_unused_4139_; 
v_unused_4138_ = lean_ctor_get(v_d_4120_, 1);
lean_dec(v_unused_4138_);
v_unused_4139_ = lean_ctor_get(v_d_4120_, 0);
lean_dec(v_unused_4139_);
v___x_4127_ = v_d_4120_;
v_isShared_4128_ = v_isSharedCheck_4137_;
goto v_resetjp_4126_;
}
else
{
lean_dec(v_d_4120_);
v___x_4127_ = lean_box(0);
v_isShared_4128_ = v_isSharedCheck_4137_;
goto v_resetjp_4126_;
}
v_resetjp_4126_:
{
lean_object* v___x_4129_; lean_object* v_roots_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4135_; 
v___x_4129_ = lean_array_get_size(v_tries_4124_);
v_roots_4130_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_roots_4123_, v_k_4121_, v___x_4129_);
v___x_4131_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__3));
v___x_4132_ = lean_apply_1(v_f_4122_, v___x_4131_);
v___x_4133_ = lean_array_push(v_tries_4124_, v___x_4132_);
if (v_isShared_4128_ == 0)
{
lean_ctor_set(v___x_4127_, 1, v___x_4133_);
lean_ctor_set(v___x_4127_, 0, v_roots_4130_);
v___x_4135_ = v___x_4127_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_roots_4130_);
lean_ctor_set(v_reuseFailAlloc_4136_, 1, v___x_4133_);
v___x_4135_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
return v___x_4135_;
}
}
}
else
{
lean_object* v_val_4140_; lean_object* v___x_4141_; uint8_t v___x_4142_; 
lean_dec(v_k_4121_);
v_val_4140_ = lean_ctor_get(v___x_4125_, 0);
lean_inc(v_val_4140_);
lean_dec_ref_known(v___x_4125_, 1);
v___x_4141_ = lean_array_get_size(v_tries_4124_);
v___x_4142_ = lean_nat_dec_lt(v_val_4140_, v___x_4141_);
if (v___x_4142_ == 0)
{
lean_dec(v_val_4140_);
lean_dec_ref(v_f_4122_);
return v_d_4120_;
}
else
{
lean_object* v___x_4144_; uint8_t v_isShared_4145_; uint8_t v_isSharedCheck_4154_; 
lean_inc_ref(v_tries_4124_);
lean_inc_ref(v_roots_4123_);
v_isSharedCheck_4154_ = !lean_is_exclusive(v_d_4120_);
if (v_isSharedCheck_4154_ == 0)
{
lean_object* v_unused_4155_; lean_object* v_unused_4156_; 
v_unused_4155_ = lean_ctor_get(v_d_4120_, 1);
lean_dec(v_unused_4155_);
v_unused_4156_ = lean_ctor_get(v_d_4120_, 0);
lean_dec(v_unused_4156_);
v___x_4144_ = v_d_4120_;
v_isShared_4145_ = v_isSharedCheck_4154_;
goto v_resetjp_4143_;
}
else
{
lean_dec(v_d_4120_);
v___x_4144_ = lean_box(0);
v_isShared_4145_ = v_isSharedCheck_4154_;
goto v_resetjp_4143_;
}
v_resetjp_4143_:
{
lean_object* v_v_4146_; lean_object* v___x_4147_; lean_object* v_xs_x27_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4152_; 
v_v_4146_ = lean_array_fget(v_tries_4124_, v_val_4140_);
v___x_4147_ = lean_box(0);
v_xs_x27_4148_ = lean_array_fset(v_tries_4124_, v_val_4140_, v___x_4147_);
v___x_4149_ = lean_apply_1(v_f_4122_, v_v_4146_);
v___x_4150_ = lean_array_fset(v_xs_x27_4148_, v_val_4140_, v___x_4149_);
lean_dec(v_val_4140_);
if (v_isShared_4145_ == 0)
{
lean_ctor_set(v___x_4144_, 1, v___x_4150_);
v___x_4152_ = v___x_4144_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v_roots_4123_);
lean_ctor_set(v_reuseFailAlloc_4153_, 1, v___x_4150_);
v___x_4152_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
return v___x_4152_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt(lean_object* v_00_u03b1_4157_, lean_object* v_d_4158_, lean_object* v_k_4159_, lean_object* v_f_4160_){
_start:
{
lean_object* v___x_4161_; 
v___x_4161_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_d_4158_, v_k_4159_, v_f_4160_);
return v___x_4161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0(lean_object* v_e_4162_, lean_object* v_x_4163_){
_start:
{
lean_object* v___x_4164_; 
v___x_4164_ = lean_array_push(v_x_4163_, v_e_4162_);
return v___x_4164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(lean_object* v_d_4165_, lean_object* v_k_4166_, lean_object* v_e_4167_){
_start:
{
lean_object* v___f_4168_; lean_object* v___x_4169_; 
v___f_4168_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4168_, 0, v_e_4167_);
v___x_4169_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_d_4165_, v_k_4166_, v___f_4168_);
return v___x_4169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push(lean_object* v_00_u03b1_4170_, lean_object* v_d_4171_, lean_object* v_k_4172_, lean_object* v_e_4173_){
_start:
{
lean_object* v___x_4174_; 
v___x_4174_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(v_d_4171_, v_k_4172_, v_e_4173_);
return v___x_4174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(size_t v_sz_4175_, size_t v_i_4176_, lean_object* v_bs_4177_){
_start:
{
uint8_t v___x_4178_; 
v___x_4178_ = lean_usize_dec_lt(v_i_4176_, v_sz_4175_);
if (v___x_4178_ == 0)
{
return v_bs_4177_;
}
else
{
lean_object* v_v_4179_; lean_object* v___x_4180_; lean_object* v_bs_x27_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; size_t v___x_4185_; size_t v___x_4186_; lean_object* v___x_4187_; 
v_v_4179_ = lean_array_uget(v_bs_4177_, v_i_4176_);
v___x_4180_ = lean_unsigned_to_nat(0u);
v_bs_x27_4181_ = lean_array_uset(v_bs_4177_, v_i_4176_, v___x_4180_);
v___x_4182_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__0));
v___x_4183_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_4184_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4184_, 0, v___x_4182_);
lean_ctor_set(v___x_4184_, 1, v___x_4180_);
lean_ctor_set(v___x_4184_, 2, v___x_4183_);
lean_ctor_set(v___x_4184_, 3, v_v_4179_);
v___x_4185_ = ((size_t)1ULL);
v___x_4186_ = lean_usize_add(v_i_4176_, v___x_4185_);
v___x_4187_ = lean_array_uset(v_bs_x27_4181_, v_i_4176_, v___x_4184_);
v_i_4176_ = v___x_4186_;
v_bs_4177_ = v___x_4187_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg___boxed(lean_object* v_sz_4189_, lean_object* v_i_4190_, lean_object* v_bs_4191_){
_start:
{
size_t v_sz_boxed_4192_; size_t v_i_boxed_4193_; lean_object* v_res_4194_; 
v_sz_boxed_4192_ = lean_unbox_usize(v_sz_4189_);
lean_dec(v_sz_4189_);
v_i_boxed_4193_ = lean_unbox_usize(v_i_4190_);
lean_dec(v_i_4190_);
v_res_4194_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_boxed_4192_, v_i_boxed_4193_, v_bs_4191_);
return v_res_4194_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(lean_object* v_x_4195_, lean_object* v_x_4196_){
_start:
{
if (lean_obj_tag(v_x_4196_) == 0)
{
return v_x_4195_;
}
else
{
lean_object* v_key_4197_; lean_object* v_value_4198_; lean_object* v_tail_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v_key_4197_ = lean_ctor_get(v_x_4196_, 0);
lean_inc(v_key_4197_);
v_value_4198_ = lean_ctor_get(v_x_4196_, 1);
lean_inc(v_value_4198_);
v_tail_4199_ = lean_ctor_get(v_x_4196_, 2);
lean_inc(v_tail_4199_);
lean_dec_ref_known(v_x_4196_, 3);
v___x_4200_ = lean_unsigned_to_nat(1u);
v___x_4201_ = lean_nat_add(v_value_4198_, v___x_4200_);
lean_dec(v_value_4198_);
v___x_4202_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_x_4195_, v_key_4197_, v___x_4201_);
v_x_4195_ = v___x_4202_;
v_x_4196_ = v_tail_4199_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(lean_object* v_as_4204_, size_t v_i_4205_, size_t v_stop_4206_, lean_object* v_b_4207_){
_start:
{
uint8_t v___x_4208_; 
v___x_4208_ = lean_usize_dec_eq(v_i_4205_, v_stop_4206_);
if (v___x_4208_ == 0)
{
lean_object* v___x_4209_; lean_object* v___x_4210_; size_t v___x_4211_; size_t v___x_4212_; 
v___x_4209_ = lean_array_uget_borrowed(v_as_4204_, v_i_4205_);
lean_inc(v___x_4209_);
v___x_4210_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(v_b_4207_, v___x_4209_);
v___x_4211_ = ((size_t)1ULL);
v___x_4212_ = lean_usize_add(v_i_4205_, v___x_4211_);
v_i_4205_ = v___x_4212_;
v_b_4207_ = v___x_4210_;
goto _start;
}
else
{
return v_b_4207_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2___boxed(lean_object* v_as_4214_, lean_object* v_i_4215_, lean_object* v_stop_4216_, lean_object* v_b_4217_){
_start:
{
size_t v_i_boxed_4218_; size_t v_stop_boxed_4219_; lean_object* v_res_4220_; 
v_i_boxed_4218_ = lean_unbox_usize(v_i_4215_);
lean_dec(v_i_4215_);
v_stop_boxed_4219_ = lean_unbox_usize(v_stop_4216_);
lean_dec(v_stop_4216_);
v_res_4220_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(v_as_4214_, v_i_boxed_4218_, v_stop_boxed_4219_, v_b_4217_);
lean_dec_ref(v_as_4214_);
return v_res_4220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(lean_object* v_d_4221_){
_start:
{
lean_object* v_roots_4222_; lean_object* v_tries_4223_; lean_object* v___x_4225_; uint8_t v_isShared_4226_; uint8_t v_isSharedCheck_4246_; 
v_roots_4222_ = lean_ctor_get(v_d_4221_, 0);
v_tries_4223_ = lean_ctor_get(v_d_4221_, 1);
v_isSharedCheck_4246_ = !lean_is_exclusive(v_d_4221_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4225_ = v_d_4221_;
v_isShared_4226_ = v_isSharedCheck_4246_;
goto v_resetjp_4224_;
}
else
{
lean_inc(v_tries_4223_);
lean_inc(v_roots_4222_);
lean_dec(v_d_4221_);
v___x_4225_ = lean_box(0);
v_isShared_4226_ = v_isSharedCheck_4246_;
goto v_resetjp_4224_;
}
v_resetjp_4224_:
{
lean_object* v___y_4228_; lean_object* v_buckets_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; uint8_t v___x_4242_; 
v_buckets_4239_ = lean_ctor_get(v_roots_4222_, 1);
v___x_4240_ = lean_unsigned_to_nat(0u);
v___x_4241_ = lean_array_get_size(v_buckets_4239_);
v___x_4242_ = lean_nat_dec_lt(v___x_4240_, v___x_4241_);
if (v___x_4242_ == 0)
{
v___y_4228_ = v_roots_4222_;
goto v___jp_4227_;
}
else
{
size_t v___x_4243_; size_t v___x_4244_; lean_object* v___x_4245_; 
lean_inc_ref(v_buckets_4239_);
v___x_4243_ = ((size_t)0ULL);
v___x_4244_ = lean_usize_of_nat(v___x_4241_);
v___x_4245_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(v_buckets_4239_, v___x_4243_, v___x_4244_, v_roots_4222_);
lean_dec_ref(v_buckets_4239_);
v___y_4228_ = v___x_4245_;
goto v___jp_4227_;
}
v___jp_4227_:
{
lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; size_t v_sz_4232_; size_t v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4237_; 
v___x_4229_ = lean_unsigned_to_nat(1u);
v___x_4230_ = lean_mk_empty_array_with_capacity(v___x_4229_);
lean_dec_ref(v___x_4230_);
v___x_4231_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___redArg___closed__0);
v_sz_4232_ = lean_array_size(v_tries_4223_);
v___x_4233_ = ((size_t)0ULL);
v___x_4234_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_4232_, v___x_4233_, v_tries_4223_);
v___x_4235_ = l_Array_append___redArg(v___x_4231_, v___x_4234_);
lean_dec_ref(v___x_4234_);
if (v_isShared_4226_ == 0)
{
lean_ctor_set(v___x_4225_, 1, v___y_4228_);
lean_ctor_set(v___x_4225_, 0, v___x_4235_);
v___x_4237_ = v___x_4225_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4238_; 
v_reuseFailAlloc_4238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4238_, 0, v___x_4235_);
lean_ctor_set(v_reuseFailAlloc_4238_, 1, v___y_4228_);
v___x_4237_ = v_reuseFailAlloc_4238_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
return v___x_4237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy(lean_object* v_00_u03b1_4247_, lean_object* v_d_4248_){
_start:
{
lean_object* v___x_4249_; 
v___x_4249_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_d_4248_);
return v___x_4249_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(lean_object* v_00_u03b1_4250_, size_t v_sz_4251_, size_t v_i_4252_, lean_object* v_bs_4253_){
_start:
{
lean_object* v___x_4254_; 
v___x_4254_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_4251_, v_i_4252_, v_bs_4253_);
return v___x_4254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___boxed(lean_object* v_00_u03b1_4255_, lean_object* v_sz_4256_, lean_object* v_i_4257_, lean_object* v_bs_4258_){
_start:
{
size_t v_sz_boxed_4259_; size_t v_i_boxed_4260_; lean_object* v_res_4261_; 
v_sz_boxed_4259_ = lean_unbox_usize(v_sz_4256_);
lean_dec(v_sz_4256_);
v_i_boxed_4260_ = lean_unbox_usize(v_i_4257_);
lean_dec(v_i_4257_);
v_res_4261_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(v_00_u03b1_4255_, v_sz_boxed_4259_, v_i_boxed_4260_, v_bs_4258_);
return v_res_4261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(lean_object* v_y_4262_, lean_object* v_x_4263_){
_start:
{
lean_object* v___x_4264_; 
v___x_4264_ = l_Array_append___redArg(v_x_4263_, v_y_4262_);
return v___x_4264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed(lean_object* v_y_4265_, lean_object* v_x_4266_){
_start:
{
lean_object* v_res_4267_; 
v_res_4267_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(v_y_4265_, v_x_4266_);
lean_dec_ref(v_y_4265_);
return v_res_4267_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4268_; 
v___x_4268_ = l_Array_instInhabited___redArg();
return v___x_4268_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(lean_object* v_tries_4269_, lean_object* v_snd_4270_, lean_object* v_x_4271_, lean_object* v_x_4272_){
_start:
{
if (lean_obj_tag(v_x_4272_) == 0)
{
lean_dec_ref(v_snd_4270_);
return v_x_4271_;
}
else
{
lean_object* v_key_4273_; lean_object* v_value_4274_; lean_object* v_tail_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; 
v_key_4273_ = lean_ctor_get(v_x_4272_, 0);
lean_inc(v_key_4273_);
v_value_4274_ = lean_ctor_get(v_x_4272_, 1);
lean_inc(v_value_4274_);
v_tail_4275_ = lean_ctor_get(v_x_4272_, 2);
lean_inc(v_tail_4275_);
lean_dec_ref_known(v_x_4272_, 3);
v___x_4276_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0);
v___x_4277_ = lean_array_get_borrowed(v___x_4276_, v_tries_4269_, v_value_4274_);
lean_dec(v_value_4274_);
lean_inc_ref(v_snd_4270_);
lean_inc(v___x_4277_);
v___x_4278_ = lean_apply_1(v_snd_4270_, v___x_4277_);
v___x_4279_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_x_4271_, v_key_4273_, v___x_4278_);
v_x_4271_ = v___x_4279_;
v_x_4272_ = v_tail_4275_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___boxed(lean_object* v_tries_4281_, lean_object* v_snd_4282_, lean_object* v_x_4283_, lean_object* v_x_4284_){
_start:
{
lean_object* v_res_4285_; 
v_res_4285_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4281_, v_snd_4282_, v_x_4283_, v_x_4284_);
lean_dec_ref(v_tries_4281_);
return v_res_4285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(lean_object* v_tries_4286_, lean_object* v_snd_4287_, lean_object* v_as_4288_, size_t v_i_4289_, size_t v_stop_4290_, lean_object* v_b_4291_){
_start:
{
uint8_t v___x_4292_; 
v___x_4292_ = lean_usize_dec_eq(v_i_4289_, v_stop_4290_);
if (v___x_4292_ == 0)
{
lean_object* v___x_4293_; lean_object* v___x_4294_; size_t v___x_4295_; size_t v___x_4296_; 
v___x_4293_ = lean_array_uget_borrowed(v_as_4288_, v_i_4289_);
lean_inc(v___x_4293_);
lean_inc_ref(v_snd_4287_);
v___x_4294_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4286_, v_snd_4287_, v_b_4291_, v___x_4293_);
v___x_4295_ = ((size_t)1ULL);
v___x_4296_ = lean_usize_add(v_i_4289_, v___x_4295_);
v_i_4289_ = v___x_4296_;
v_b_4291_ = v___x_4294_;
goto _start;
}
else
{
lean_dec_ref(v_snd_4287_);
return v_b_4291_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg___boxed(lean_object* v_tries_4298_, lean_object* v_snd_4299_, lean_object* v_as_4300_, lean_object* v_i_4301_, lean_object* v_stop_4302_, lean_object* v_b_4303_){
_start:
{
size_t v_i_boxed_4304_; size_t v_stop_boxed_4305_; lean_object* v_res_4306_; 
v_i_boxed_4304_ = lean_unbox_usize(v_i_4301_);
lean_dec(v_i_4301_);
v_stop_boxed_4305_ = lean_unbox_usize(v_stop_4302_);
lean_dec(v_stop_4302_);
v_res_4306_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4298_, v_snd_4299_, v_as_4300_, v_i_boxed_4304_, v_stop_boxed_4305_, v_b_4303_);
lean_dec_ref(v_as_4300_);
lean_dec_ref(v_tries_4298_);
return v_res_4306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(lean_object* v_x_4309_, lean_object* v_y_4310_){
_start:
{
lean_object* v_fst_4312_; lean_object* v_buckets_4313_; lean_object* v_tries_4314_; lean_object* v_snd_4315_; lean_object* v_roots_4322_; lean_object* v_roots_4323_; lean_object* v_tries_4324_; lean_object* v_size_4325_; lean_object* v_buckets_4326_; lean_object* v_tries_4327_; lean_object* v_size_4328_; lean_object* v_buckets_4329_; uint8_t v___x_4330_; 
v_roots_4322_ = lean_ctor_get(v_y_4310_, 0);
v_roots_4323_ = lean_ctor_get(v_x_4309_, 0);
v_tries_4324_ = lean_ctor_get(v_y_4310_, 1);
v_size_4325_ = lean_ctor_get(v_roots_4322_, 0);
v_buckets_4326_ = lean_ctor_get(v_roots_4322_, 1);
v_tries_4327_ = lean_ctor_get(v_x_4309_, 1);
v_size_4328_ = lean_ctor_get(v_roots_4323_, 0);
v_buckets_4329_ = lean_ctor_get(v_roots_4323_, 1);
v___x_4330_ = lean_nat_dec_le(v_size_4325_, v_size_4328_);
if (v___x_4330_ == 0)
{
lean_object* v___f_4331_; 
lean_inc_ref(v_buckets_4329_);
lean_inc_ref(v_tries_4327_);
lean_dec_ref(v_x_4309_);
v___f_4331_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0));
v_fst_4312_ = v_y_4310_;
v_buckets_4313_ = v_buckets_4329_;
v_tries_4314_ = v_tries_4327_;
v_snd_4315_ = v___f_4331_;
goto v___jp_4311_;
}
else
{
lean_object* v___f_4332_; 
lean_inc_ref(v_buckets_4326_);
lean_inc_ref(v_tries_4324_);
lean_dec_ref(v_y_4310_);
v___f_4332_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1));
v_fst_4312_ = v_x_4309_;
v_buckets_4313_ = v_buckets_4326_;
v_tries_4314_ = v_tries_4324_;
v_snd_4315_ = v___f_4332_;
goto v___jp_4311_;
}
v___jp_4311_:
{
lean_object* v___x_4316_; lean_object* v___x_4317_; uint8_t v___x_4318_; 
v___x_4316_ = lean_unsigned_to_nat(0u);
v___x_4317_ = lean_array_get_size(v_buckets_4313_);
v___x_4318_ = lean_nat_dec_lt(v___x_4316_, v___x_4317_);
if (v___x_4318_ == 0)
{
lean_dec_ref(v_tries_4314_);
lean_dec_ref(v_buckets_4313_);
return v_fst_4312_;
}
else
{
size_t v___x_4319_; size_t v___x_4320_; lean_object* v___x_4321_; 
v___x_4319_ = ((size_t)0ULL);
v___x_4320_ = lean_usize_of_nat(v___x_4317_);
lean_inc_ref(v_snd_4315_);
v___x_4321_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4314_, v_snd_4315_, v_buckets_4313_, v___x_4319_, v___x_4320_, v_fst_4312_);
lean_dec_ref(v_buckets_4313_);
lean_dec_ref(v_tries_4314_);
return v___x_4321_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append(lean_object* v_00_u03b1_4333_, lean_object* v_x_4334_, lean_object* v_y_4335_){
_start:
{
lean_object* v___x_4336_; 
v___x_4336_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(v_x_4334_, v_y_4335_);
return v___x_4336_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(lean_object* v_00_u03b1_4337_, lean_object* v_tries_4338_, lean_object* v_snd_4339_, lean_object* v_x_4340_, lean_object* v_x_4341_){
_start:
{
lean_object* v___x_4342_; 
v___x_4342_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4338_, v_snd_4339_, v_x_4340_, v_x_4341_);
return v___x_4342_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___boxed(lean_object* v_00_u03b1_4343_, lean_object* v_tries_4344_, lean_object* v_snd_4345_, lean_object* v_x_4346_, lean_object* v_x_4347_){
_start:
{
lean_object* v_res_4348_; 
v_res_4348_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(v_00_u03b1_4343_, v_tries_4344_, v_snd_4345_, v_x_4346_, v_x_4347_);
lean_dec_ref(v_tries_4344_);
return v_res_4348_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(lean_object* v_00_u03b1_4349_, lean_object* v_tries_4350_, lean_object* v_snd_4351_, lean_object* v_as_4352_, size_t v_i_4353_, size_t v_stop_4354_, lean_object* v_b_4355_){
_start:
{
lean_object* v___x_4356_; 
v___x_4356_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4350_, v_snd_4351_, v_as_4352_, v_i_4353_, v_stop_4354_, v_b_4355_);
return v___x_4356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___boxed(lean_object* v_00_u03b1_4357_, lean_object* v_tries_4358_, lean_object* v_snd_4359_, lean_object* v_as_4360_, lean_object* v_i_4361_, lean_object* v_stop_4362_, lean_object* v_b_4363_){
_start:
{
size_t v_i_boxed_4364_; size_t v_stop_boxed_4365_; lean_object* v_res_4366_; 
v_i_boxed_4364_ = lean_unbox_usize(v_i_4361_);
lean_dec(v_i_4361_);
v_stop_boxed_4365_ = lean_unbox_usize(v_stop_4362_);
lean_dec(v_stop_4362_);
v_res_4366_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(v_00_u03b1_4357_, v_tries_4358_, v_snd_4359_, v_as_4360_, v_i_boxed_4364_, v_stop_boxed_4365_, v_b_4363_);
lean_dec_ref(v_as_4360_);
lean_dec_ref(v_tries_4358_);
return v_res_4366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg(){
_start:
{
lean_object* v___x_4369_; 
v___x_4369_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0));
return v___x_4369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___boxed(lean_object* v___dummy_4370_){
_start:
{
lean_object* v_res_4371_; 
v_res_4371_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg();
return v_res_4371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend(lean_object* v_00_u03b1_4372_){
_start:
{
lean_object* v___x_4373_; 
v___x_4373_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___redArg___closed__0));
return v___x_4373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object* v_expr_4374_, lean_object* v_value_4375_, lean_object* v_a_4376_, lean_object* v_a_4377_, lean_object* v_a_4378_, lean_object* v_a_4379_){
_start:
{
lean_object* v_lctx_4381_; lean_object* v_localInstances_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; 
v_lctx_4381_ = lean_ctor_get(v_a_4376_, 2);
v_localInstances_4382_ = lean_ctor_get(v_a_4376_, 3);
lean_inc_ref(v_localInstances_4382_);
lean_inc_ref(v_lctx_4381_);
v___x_4383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4383_, 0, v_lctx_4381_);
lean_ctor_set(v___x_4383_, 1, v_localInstances_4382_);
v___x_4384_ = l_Lean_Meta_LazyDiscrTree_rootKey(v_expr_4374_, v_a_4376_, v_a_4377_, v_a_4378_, v_a_4379_);
if (lean_obj_tag(v___x_4384_) == 0)
{
lean_object* v_a_4385_; lean_object* v___x_4387_; uint8_t v_isShared_4388_; uint8_t v_isSharedCheck_4403_; 
v_a_4385_ = lean_ctor_get(v___x_4384_, 0);
v_isSharedCheck_4403_ = !lean_is_exclusive(v___x_4384_);
if (v_isSharedCheck_4403_ == 0)
{
v___x_4387_ = v___x_4384_;
v_isShared_4388_ = v_isSharedCheck_4403_;
goto v_resetjp_4386_;
}
else
{
lean_inc(v_a_4385_);
lean_dec(v___x_4384_);
v___x_4387_ = lean_box(0);
v_isShared_4388_ = v_isSharedCheck_4403_;
goto v_resetjp_4386_;
}
v_resetjp_4386_:
{
lean_object* v_fst_4389_; lean_object* v_snd_4390_; lean_object* v___x_4392_; uint8_t v_isShared_4393_; uint8_t v_isSharedCheck_4402_; 
v_fst_4389_ = lean_ctor_get(v_a_4385_, 0);
v_snd_4390_ = lean_ctor_get(v_a_4385_, 1);
v_isSharedCheck_4402_ = !lean_is_exclusive(v_a_4385_);
if (v_isSharedCheck_4402_ == 0)
{
v___x_4392_ = v_a_4385_;
v_isShared_4393_ = v_isSharedCheck_4402_;
goto v_resetjp_4391_;
}
else
{
lean_inc(v_snd_4390_);
lean_inc(v_fst_4389_);
lean_dec(v_a_4385_);
v___x_4392_ = lean_box(0);
v_isShared_4393_ = v_isSharedCheck_4402_;
goto v_resetjp_4391_;
}
v_resetjp_4391_:
{
lean_object* v___x_4395_; 
if (v_isShared_4393_ == 0)
{
lean_ctor_set(v___x_4392_, 1, v_value_4375_);
lean_ctor_set(v___x_4392_, 0, v___x_4383_);
v___x_4395_ = v___x_4392_;
goto v_reusejp_4394_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v___x_4383_);
lean_ctor_set(v_reuseFailAlloc_4401_, 1, v_value_4375_);
v___x_4395_ = v_reuseFailAlloc_4401_;
goto v_reusejp_4394_;
}
v_reusejp_4394_:
{
lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4399_; 
v___x_4396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4396_, 0, v_snd_4390_);
lean_ctor_set(v___x_4396_, 1, v___x_4395_);
v___x_4397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4397_, 0, v_fst_4389_);
lean_ctor_set(v___x_4397_, 1, v___x_4396_);
if (v_isShared_4388_ == 0)
{
lean_ctor_set(v___x_4387_, 0, v___x_4397_);
v___x_4399_ = v___x_4387_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v___x_4397_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
}
}
}
else
{
lean_object* v_a_4404_; lean_object* v___x_4406_; uint8_t v_isShared_4407_; uint8_t v_isSharedCheck_4411_; 
lean_dec_ref_known(v___x_4383_, 2);
lean_dec(v_value_4375_);
v_a_4404_ = lean_ctor_get(v___x_4384_, 0);
v_isSharedCheck_4411_ = !lean_is_exclusive(v___x_4384_);
if (v_isSharedCheck_4411_ == 0)
{
v___x_4406_ = v___x_4384_;
v_isShared_4407_ = v_isSharedCheck_4411_;
goto v_resetjp_4405_;
}
else
{
lean_inc(v_a_4404_);
lean_dec(v___x_4384_);
v___x_4406_ = lean_box(0);
v_isShared_4407_ = v_isSharedCheck_4411_;
goto v_resetjp_4405_;
}
v_resetjp_4405_:
{
lean_object* v___x_4409_; 
if (v_isShared_4407_ == 0)
{
v___x_4409_ = v___x_4406_;
goto v_reusejp_4408_;
}
else
{
lean_object* v_reuseFailAlloc_4410_; 
v_reuseFailAlloc_4410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4410_, 0, v_a_4404_);
v___x_4409_ = v_reuseFailAlloc_4410_;
goto v_reusejp_4408_;
}
v_reusejp_4408_:
{
return v___x_4409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg___boxed(lean_object* v_expr_4412_, lean_object* v_value_4413_, lean_object* v_a_4414_, lean_object* v_a_4415_, lean_object* v_a_4416_, lean_object* v_a_4417_, lean_object* v_a_4418_){
_start:
{
lean_object* v_res_4419_; 
v_res_4419_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v_expr_4412_, v_value_4413_, v_a_4414_, v_a_4415_, v_a_4416_, v_a_4417_);
lean_dec(v_a_4417_);
lean_dec_ref(v_a_4416_);
lean_dec(v_a_4415_);
lean_dec_ref(v_a_4414_);
return v_res_4419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(lean_object* v_00_u03b1_4420_, lean_object* v_expr_4421_, lean_object* v_value_4422_, lean_object* v_a_4423_, lean_object* v_a_4424_, lean_object* v_a_4425_, lean_object* v_a_4426_){
_start:
{
lean_object* v___x_4428_; 
v___x_4428_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v_expr_4421_, v_value_4422_, v_a_4423_, v_a_4424_, v_a_4425_, v_a_4426_);
return v___x_4428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___boxed(lean_object* v_00_u03b1_4429_, lean_object* v_expr_4430_, lean_object* v_value_4431_, lean_object* v_a_4432_, lean_object* v_a_4433_, lean_object* v_a_4434_, lean_object* v_a_4435_, lean_object* v_a_4436_){
_start:
{
lean_object* v_res_4437_; 
v_res_4437_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(v_00_u03b1_4429_, v_expr_4430_, v_value_4431_, v_a_4432_, v_a_4433_, v_a_4434_, v_a_4435_);
lean_dec(v_a_4435_);
lean_dec_ref(v_a_4434_);
lean_dec(v_a_4433_);
lean_dec_ref(v_a_4432_);
return v_res_4437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(lean_object* v_e_4438_, lean_object* v_idx_4439_, lean_object* v_value_4440_, lean_object* v_a_4441_, lean_object* v_a_4442_, lean_object* v_a_4443_, lean_object* v_a_4444_){
_start:
{
lean_object* v_entry_4446_; lean_object* v___x_4448_; uint8_t v_isShared_4449_; uint8_t v_isSharedCheck_4492_; 
v_entry_4446_ = lean_ctor_get(v_e_4438_, 1);
v_isSharedCheck_4492_ = !lean_is_exclusive(v_e_4438_);
if (v_isSharedCheck_4492_ == 0)
{
lean_object* v_unused_4493_; 
v_unused_4493_ = lean_ctor_get(v_e_4438_, 0);
lean_dec(v_unused_4493_);
v___x_4448_ = v_e_4438_;
v_isShared_4449_ = v_isSharedCheck_4492_;
goto v_resetjp_4447_;
}
else
{
lean_inc(v_entry_4446_);
lean_dec(v_e_4438_);
v___x_4448_ = lean_box(0);
v_isShared_4449_ = v_isSharedCheck_4492_;
goto v_resetjp_4447_;
}
v_resetjp_4447_:
{
lean_object* v_snd_4450_; lean_object* v_fst_4451_; lean_object* v_fst_4452_; lean_object* v___x_4454_; uint8_t v_isShared_4455_; uint8_t v_isSharedCheck_4490_; 
v_snd_4450_ = lean_ctor_get(v_entry_4446_, 1);
lean_inc(v_snd_4450_);
v_fst_4451_ = lean_ctor_get(v_entry_4446_, 0);
lean_inc(v_fst_4451_);
lean_dec_ref(v_entry_4446_);
v_fst_4452_ = lean_ctor_get(v_snd_4450_, 0);
v_isSharedCheck_4490_ = !lean_is_exclusive(v_snd_4450_);
if (v_isSharedCheck_4490_ == 0)
{
lean_object* v_unused_4491_; 
v_unused_4491_ = lean_ctor_get(v_snd_4450_, 1);
lean_dec(v_unused_4491_);
v___x_4454_ = v_snd_4450_;
v_isShared_4455_ = v_isSharedCheck_4490_;
goto v_resetjp_4453_;
}
else
{
lean_inc(v_fst_4452_);
lean_dec(v_snd_4450_);
v___x_4454_ = lean_box(0);
v_isShared_4455_ = v_isSharedCheck_4490_;
goto v_resetjp_4453_;
}
v_resetjp_4453_:
{
lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; 
v___x_4456_ = l_Lean_instInhabitedExpr;
v___x_4457_ = lean_array_get(v___x_4456_, v_fst_4451_, v_idx_4439_);
lean_dec(v_fst_4451_);
v___x_4458_ = l_Lean_Meta_LazyDiscrTree_rootKey(v___x_4457_, v_a_4441_, v_a_4442_, v_a_4443_, v_a_4444_);
if (lean_obj_tag(v___x_4458_) == 0)
{
lean_object* v_a_4459_; lean_object* v___x_4461_; uint8_t v_isShared_4462_; uint8_t v_isSharedCheck_4481_; 
v_a_4459_ = lean_ctor_get(v___x_4458_, 0);
v_isSharedCheck_4481_ = !lean_is_exclusive(v___x_4458_);
if (v_isSharedCheck_4481_ == 0)
{
v___x_4461_ = v___x_4458_;
v_isShared_4462_ = v_isSharedCheck_4481_;
goto v_resetjp_4460_;
}
else
{
lean_inc(v_a_4459_);
lean_dec(v___x_4458_);
v___x_4461_ = lean_box(0);
v_isShared_4462_ = v_isSharedCheck_4481_;
goto v_resetjp_4460_;
}
v_resetjp_4460_:
{
lean_object* v_fst_4463_; lean_object* v_snd_4464_; lean_object* v___x_4466_; uint8_t v_isShared_4467_; uint8_t v_isSharedCheck_4480_; 
v_fst_4463_ = lean_ctor_get(v_a_4459_, 0);
v_snd_4464_ = lean_ctor_get(v_a_4459_, 1);
v_isSharedCheck_4480_ = !lean_is_exclusive(v_a_4459_);
if (v_isSharedCheck_4480_ == 0)
{
v___x_4466_ = v_a_4459_;
v_isShared_4467_ = v_isSharedCheck_4480_;
goto v_resetjp_4465_;
}
else
{
lean_inc(v_snd_4464_);
lean_inc(v_fst_4463_);
lean_dec(v_a_4459_);
v___x_4466_ = lean_box(0);
v_isShared_4467_ = v_isSharedCheck_4480_;
goto v_resetjp_4465_;
}
v_resetjp_4465_:
{
lean_object* v___x_4469_; 
if (v_isShared_4467_ == 0)
{
lean_ctor_set(v___x_4466_, 1, v_value_4440_);
lean_ctor_set(v___x_4466_, 0, v_fst_4452_);
v___x_4469_ = v___x_4466_;
goto v_reusejp_4468_;
}
else
{
lean_object* v_reuseFailAlloc_4479_; 
v_reuseFailAlloc_4479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4479_, 0, v_fst_4452_);
lean_ctor_set(v_reuseFailAlloc_4479_, 1, v_value_4440_);
v___x_4469_ = v_reuseFailAlloc_4479_;
goto v_reusejp_4468_;
}
v_reusejp_4468_:
{
lean_object* v___x_4471_; 
if (v_isShared_4455_ == 0)
{
lean_ctor_set(v___x_4454_, 1, v___x_4469_);
lean_ctor_set(v___x_4454_, 0, v_snd_4464_);
v___x_4471_ = v___x_4454_;
goto v_reusejp_4470_;
}
else
{
lean_object* v_reuseFailAlloc_4478_; 
v_reuseFailAlloc_4478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4478_, 0, v_snd_4464_);
lean_ctor_set(v_reuseFailAlloc_4478_, 1, v___x_4469_);
v___x_4471_ = v_reuseFailAlloc_4478_;
goto v_reusejp_4470_;
}
v_reusejp_4470_:
{
lean_object* v___x_4473_; 
if (v_isShared_4449_ == 0)
{
lean_ctor_set(v___x_4448_, 1, v___x_4471_);
lean_ctor_set(v___x_4448_, 0, v_fst_4463_);
v___x_4473_ = v___x_4448_;
goto v_reusejp_4472_;
}
else
{
lean_object* v_reuseFailAlloc_4477_; 
v_reuseFailAlloc_4477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4477_, 0, v_fst_4463_);
lean_ctor_set(v_reuseFailAlloc_4477_, 1, v___x_4471_);
v___x_4473_ = v_reuseFailAlloc_4477_;
goto v_reusejp_4472_;
}
v_reusejp_4472_:
{
lean_object* v___x_4475_; 
if (v_isShared_4462_ == 0)
{
lean_ctor_set(v___x_4461_, 0, v___x_4473_);
v___x_4475_ = v___x_4461_;
goto v_reusejp_4474_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v___x_4473_);
v___x_4475_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4474_;
}
v_reusejp_4474_:
{
return v___x_4475_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4489_; 
lean_del_object(v___x_4454_);
lean_dec(v_fst_4452_);
lean_del_object(v___x_4448_);
lean_dec(v_value_4440_);
v_a_4482_ = lean_ctor_get(v___x_4458_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___x_4458_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4484_ = v___x_4458_;
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_a_4482_);
lean_dec(v___x_4458_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4487_; 
if (v_isShared_4485_ == 0)
{
v___x_4487_ = v___x_4484_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v_a_4482_);
v___x_4487_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
return v___x_4487_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg___boxed(lean_object* v_e_4494_, lean_object* v_idx_4495_, lean_object* v_value_4496_, lean_object* v_a_4497_, lean_object* v_a_4498_, lean_object* v_a_4499_, lean_object* v_a_4500_, lean_object* v_a_4501_){
_start:
{
lean_object* v_res_4502_; 
v_res_4502_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_e_4494_, v_idx_4495_, v_value_4496_, v_a_4497_, v_a_4498_, v_a_4499_, v_a_4500_);
lean_dec(v_a_4500_);
lean_dec_ref(v_a_4499_);
lean_dec(v_a_4498_);
lean_dec_ref(v_a_4497_);
lean_dec(v_idx_4495_);
return v_res_4502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(lean_object* v_00_u03b1_4503_, lean_object* v_e_4504_, lean_object* v_idx_4505_, lean_object* v_value_4506_, lean_object* v_a_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_, lean_object* v_a_4510_){
_start:
{
lean_object* v___x_4512_; 
v___x_4512_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_e_4504_, v_idx_4505_, v_value_4506_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
return v___x_4512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___boxed(lean_object* v_00_u03b1_4513_, lean_object* v_e_4514_, lean_object* v_idx_4515_, lean_object* v_value_4516_, lean_object* v_a_4517_, lean_object* v_a_4518_, lean_object* v_a_4519_, lean_object* v_a_4520_, lean_object* v_a_4521_){
_start:
{
lean_object* v_res_4522_; 
v_res_4522_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(v_00_u03b1_4513_, v_e_4514_, v_idx_4515_, v_value_4516_, v_a_4517_, v_a_4518_, v_a_4519_, v_a_4520_);
lean_dec(v_a_4520_);
lean_dec_ref(v_a_4519_);
lean_dec(v_a_4518_);
lean_dec_ref(v_a_4517_);
lean_dec(v_idx_4515_);
return v_res_4522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new(){
_start:
{
lean_object* v___x_4526_; lean_object* v___x_4527_; 
v___x_4526_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0));
v___x_4527_ = lean_st_mk_ref(v___x_4526_);
return v___x_4527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___boxed(lean_object* v_a_4528_){
_start:
{
lean_object* v_res_4529_; 
v_res_4529_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
return v_res_4529_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0(void){
_start:
{
lean_object* v___x_4530_; 
v___x_4530_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4530_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1(void){
_start:
{
lean_object* v___x_4531_; lean_object* v___x_4532_; 
v___x_4531_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0);
v___x_4532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4532_, 0, v___x_4531_);
return v___x_4532_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2(void){
_start:
{
lean_object* v___x_4533_; lean_object* v___x_4534_; 
v___x_4533_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1);
v___x_4534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4534_, 0, v___x_4533_);
lean_ctor_set(v___x_4534_, 1, v___x_4533_);
return v___x_4534_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3(void){
_start:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; 
v___x_4535_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1);
v___x_4536_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4536_, 0, v___x_4535_);
lean_ctor_set(v___x_4536_, 1, v___x_4535_);
lean_ctor_set(v___x_4536_, 2, v___x_4535_);
lean_ctor_set(v___x_4536_, 3, v___x_4535_);
lean_ctor_set(v___x_4536_, 4, v___x_4535_);
lean_ctor_set(v___x_4536_, 5, v___x_4535_);
return v___x_4536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty(lean_object* v_ngen_4537_){
_start:
{
lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; 
v___x_4538_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2);
v___x_4539_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3);
v___x_4540_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4540_, 0, v_ngen_4537_);
lean_ctor_set(v___x_4540_, 1, v___x_4538_);
lean_ctor_set(v___x_4540_, 2, v___x_4539_);
return v___x_4540_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(lean_object* v_env_4541_, lean_object* v_declName_4542_){
_start:
{
uint8_t v___x_4543_; 
v___x_4543_ = l_Lean_isPrivateName(v_declName_4542_);
if (v___x_4543_ == 0)
{
return v___x_4543_;
}
else
{
lean_object* v___x_4544_; 
v___x_4544_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4541_, v_declName_4542_);
if (lean_obj_tag(v___x_4544_) == 0)
{
return v___x_4543_;
}
else
{
lean_object* v_val_4545_; lean_object* v___x_4546_; uint8_t v_isModule_4547_; lean_object* v_modules_4548_; uint8_t v___x_4549_; 
v_val_4545_ = lean_ctor_get(v___x_4544_, 0);
lean_inc(v_val_4545_);
lean_dec_ref_known(v___x_4544_, 1);
v___x_4546_ = l_Lean_Environment_header(v_env_4541_);
v_isModule_4547_ = lean_ctor_get_uint8(v___x_4546_, sizeof(void*)*8 + 4);
v_modules_4548_ = lean_ctor_get(v___x_4546_, 3);
lean_inc_ref(v_modules_4548_);
lean_dec_ref(v___x_4546_);
v___x_4549_ = 0;
if (v_isModule_4547_ == 0)
{
lean_dec_ref(v_modules_4548_);
lean_dec(v_val_4545_);
return v___x_4549_;
}
else
{
lean_object* v___x_4550_; uint8_t v___x_4551_; 
v___x_4550_ = lean_array_get_size(v_modules_4548_);
v___x_4551_ = lean_nat_dec_lt(v_val_4545_, v___x_4550_);
if (v___x_4551_ == 0)
{
lean_dec_ref(v_modules_4548_);
lean_dec(v_val_4545_);
return v___x_4549_;
}
else
{
lean_object* v___x_4552_; lean_object* v_toImport_4553_; uint8_t v_importAll_4554_; 
v___x_4552_ = lean_array_fget(v_modules_4548_, v_val_4545_);
lean_dec(v_val_4545_);
lean_dec_ref(v_modules_4548_);
v_toImport_4553_ = lean_ctor_get(v___x_4552_, 0);
lean_inc_ref(v_toImport_4553_);
lean_dec(v___x_4552_);
v_importAll_4554_ = lean_ctor_get_uint8(v_toImport_4553_, sizeof(void*)*1);
lean_dec_ref(v_toImport_4553_);
return v_importAll_4554_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName___boxed(lean_object* v_env_4555_, lean_object* v_declName_4556_){
_start:
{
uint8_t v_res_4557_; lean_object* v_r_4558_; 
v_res_4557_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(v_env_4555_, v_declName_4556_);
lean_dec(v_declName_4556_);
lean_dec_ref(v_env_4555_);
v_r_4558_ = lean_box(v_res_4557_);
return v_r_4558_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_blacklistInsertion(lean_object* v_env_4564_, lean_object* v_declName_4565_){
_start:
{
uint8_t v___x_4566_; 
lean_inc(v_declName_4565_);
lean_inc_ref(v_env_4564_);
v___x_4566_ = l_Lean_Meta_allowCompletion(v_env_4564_, v_declName_4565_);
if (v___x_4566_ == 0)
{
uint8_t v___x_4567_; 
lean_dec(v_declName_4565_);
lean_dec_ref(v_env_4564_);
v___x_4567_ = 1;
return v___x_4567_;
}
else
{
lean_object* v___x_4568_; uint8_t v___x_4569_; 
v___x_4568_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1));
v___x_4569_ = lean_name_eq(v_declName_4565_, v___x_4568_);
if (v___x_4569_ == 0)
{
uint8_t v___x_4578_; 
lean_inc(v_declName_4565_);
v___x_4578_ = l_Lean_Name_isInternalDetail(v_declName_4565_);
if (v___x_4578_ == 0)
{
lean_dec_ref(v_env_4564_);
goto v___jp_4574_;
}
else
{
uint8_t v___x_4579_; 
v___x_4579_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(v_env_4564_, v_declName_4565_);
lean_dec_ref(v_env_4564_);
if (v___x_4579_ == 0)
{
lean_dec(v_declName_4565_);
return v___x_4578_;
}
else
{
goto v___jp_4574_;
}
}
}
else
{
lean_dec(v_declName_4565_);
lean_dec_ref(v_env_4564_);
return v___x_4569_;
}
v___jp_4570_:
{
if (lean_obj_tag(v_declName_4565_) == 1)
{
lean_object* v_str_4571_; lean_object* v___x_4572_; uint8_t v___x_4573_; 
v_str_4571_ = lean_ctor_get(v_declName_4565_, 1);
lean_inc_ref(v_str_4571_);
lean_dec_ref_known(v_declName_4565_, 2);
v___x_4572_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2));
v___x_4573_ = lean_string_dec_eq(v_str_4571_, v___x_4572_);
lean_dec_ref(v_str_4571_);
return v___x_4573_;
}
else
{
lean_dec(v_declName_4565_);
return v___x_4569_;
}
}
v___jp_4574_:
{
if (lean_obj_tag(v_declName_4565_) == 1)
{
lean_object* v_str_4575_; lean_object* v___x_4576_; uint8_t v___x_4577_; 
v_str_4575_ = lean_ctor_get(v_declName_4565_, 1);
v___x_4576_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3));
v___x_4577_ = lean_string_dec_eq(v_str_4575_, v___x_4576_);
if (v___x_4577_ == 0)
{
goto v___jp_4570_;
}
else
{
lean_dec_ref_known(v_declName_4565_, 2);
return v___x_4577_;
}
}
else
{
goto v___jp_4570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___boxed(lean_object* v_env_4580_, lean_object* v_declName_4581_){
_start:
{
uint8_t v_res_4582_; lean_object* v_r_4583_; 
v_res_4582_ = l_Lean_Meta_LazyDiscrTree_blacklistInsertion(v_env_4580_, v_declName_4581_);
v_r_4583_ = lean_box(v_res_4582_);
return v_r_4583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(lean_object* v_opts_4584_, lean_object* v_opt_4585_){
_start:
{
lean_object* v_name_4586_; lean_object* v_defValue_4587_; lean_object* v_map_4588_; lean_object* v___x_4589_; 
v_name_4586_ = lean_ctor_get(v_opt_4585_, 0);
v_defValue_4587_ = lean_ctor_get(v_opt_4585_, 1);
v_map_4588_ = lean_ctor_get(v_opts_4584_, 0);
v___x_4589_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4588_, v_name_4586_);
if (lean_obj_tag(v___x_4589_) == 0)
{
lean_inc(v_defValue_4587_);
return v_defValue_4587_;
}
else
{
lean_object* v_val_4590_; 
v_val_4590_ = lean_ctor_get(v___x_4589_, 0);
lean_inc(v_val_4590_);
lean_dec_ref_known(v___x_4589_, 1);
if (lean_obj_tag(v_val_4590_) == 3)
{
lean_object* v_v_4591_; 
v_v_4591_ = lean_ctor_get(v_val_4590_, 0);
lean_inc(v_v_4591_);
lean_dec_ref_known(v_val_4590_, 1);
return v_v_4591_;
}
else
{
lean_dec(v_val_4590_);
lean_inc(v_defValue_4587_);
return v_defValue_4587_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0___boxed(lean_object* v_opts_4592_, lean_object* v_opt_4593_){
_start:
{
lean_object* v_res_4594_; 
v_res_4594_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v_opts_4592_, v_opt_4593_);
lean_dec_ref(v_opt_4593_);
lean_dec_ref(v_opts_4592_);
return v_res_4594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg(lean_object* v_as_4595_, size_t v_i_4596_, size_t v_stop_4597_, lean_object* v_b_4598_){
_start:
{
uint8_t v___x_4599_; 
v___x_4599_ = lean_usize_dec_eq(v_i_4596_, v_stop_4597_);
if (v___x_4599_ == 0)
{
lean_object* v___x_4600_; lean_object* v_key_4601_; lean_object* v_entry_4602_; lean_object* v___x_4603_; size_t v___x_4604_; size_t v___x_4605_; 
v___x_4600_ = lean_array_uget_borrowed(v_as_4595_, v_i_4596_);
v_key_4601_ = lean_ctor_get(v___x_4600_, 0);
v_entry_4602_ = lean_ctor_get(v___x_4600_, 1);
lean_inc_ref(v_entry_4602_);
lean_inc(v_key_4601_);
v___x_4603_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(v_b_4598_, v_key_4601_, v_entry_4602_);
v___x_4604_ = ((size_t)1ULL);
v___x_4605_ = lean_usize_add(v_i_4596_, v___x_4604_);
v_i_4596_ = v___x_4605_;
v_b_4598_ = v___x_4603_;
goto _start;
}
else
{
return v_b_4598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg___boxed(lean_object* v_as_4607_, lean_object* v_i_4608_, lean_object* v_stop_4609_, lean_object* v_b_4610_){
_start:
{
size_t v_i_boxed_4611_; size_t v_stop_boxed_4612_; lean_object* v_res_4613_; 
v_i_boxed_4611_ = lean_unbox_usize(v_i_4608_);
lean_dec(v_i_4608_);
v_stop_boxed_4612_ = lean_unbox_usize(v_stop_4609_);
lean_dec(v_stop_4609_);
v_res_4613_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg(v_as_4607_, v_i_boxed_4611_, v_stop_boxed_4612_, v_b_4610_);
lean_dec_ref(v_as_4607_);
return v_res_4613_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0(void){
_start:
{
lean_object* v___x_4614_; lean_object* v___x_4615_; 
v___x_4614_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0);
v___x_4615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4615_, 0, v___x_4614_);
return v___x_4615_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1(void){
_start:
{
lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; 
v___x_4616_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_4617_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4618_ = lean_unsigned_to_nat(0u);
v___x_4619_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4619_, 0, v___x_4618_);
lean_ctor_set(v___x_4619_, 1, v___x_4618_);
lean_ctor_set(v___x_4619_, 2, v___x_4618_);
lean_ctor_set(v___x_4619_, 3, v___x_4618_);
lean_ctor_set(v___x_4619_, 4, v___x_4617_);
lean_ctor_set(v___x_4619_, 5, v___x_4617_);
lean_ctor_set(v___x_4619_, 6, v___x_4617_);
lean_ctor_set(v___x_4619_, 7, v___x_4617_);
lean_ctor_set(v___x_4619_, 8, v___x_4617_);
lean_ctor_set(v___x_4619_, 9, v___x_4617_);
lean_ctor_set(v___x_4619_, 10, v___x_4617_);
lean_ctor_set(v___x_4619_, 11, v___x_4616_);
return v___x_4619_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2(void){
_start:
{
lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; 
v___x_4620_ = lean_unsigned_to_nat(32u);
v___x_4621_ = lean_mk_empty_array_with_capacity(v___x_4620_);
v___x_4622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4622_, 0, v___x_4621_);
return v___x_4622_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3(void){
_start:
{
size_t v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; 
v___x_4623_ = ((size_t)5ULL);
v___x_4624_ = lean_unsigned_to_nat(0u);
v___x_4625_ = lean_unsigned_to_nat(32u);
v___x_4626_ = lean_mk_empty_array_with_capacity(v___x_4625_);
v___x_4627_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2);
v___x_4628_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4628_, 0, v___x_4627_);
lean_ctor_set(v___x_4628_, 1, v___x_4626_);
lean_ctor_set(v___x_4628_, 2, v___x_4624_);
lean_ctor_set(v___x_4628_, 3, v___x_4624_);
lean_ctor_set_usize(v___x_4628_, 4, v___x_4623_);
return v___x_4628_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4(void){
_start:
{
lean_object* v___x_4629_; lean_object* v___x_4630_; 
v___x_4629_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4630_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4630_, 0, v___x_4629_);
lean_ctor_set(v___x_4630_, 1, v___x_4629_);
lean_ctor_set(v___x_4630_, 2, v___x_4629_);
lean_ctor_set(v___x_4630_, 3, v___x_4629_);
lean_ctor_set(v___x_4630_, 4, v___x_4629_);
return v___x_4630_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5(void){
_start:
{
lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; 
v___x_4631_ = lean_box(1);
v___x_4632_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4633_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4634_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4634_, 0, v___x_4633_);
lean_ctor_set(v___x_4634_, 1, v___x_4632_);
lean_ctor_set(v___x_4634_, 2, v___x_4631_);
return v___x_4634_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7(void){
_start:
{
lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; 
v___x_4637_ = lean_unsigned_to_nat(1u);
v___x_4638_ = l_Lean_firstFrontendMacroScope;
v___x_4639_ = lean_nat_add(v___x_4638_, v___x_4637_);
return v___x_4639_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9(void){
_start:
{
lean_object* v___x_4644_; uint64_t v___x_4645_; lean_object* v___x_4646_; 
v___x_4644_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4645_ = 0ULL;
v___x_4646_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4646_, 0, v___x_4644_);
lean_ctor_set_uint64(v___x_4646_, sizeof(void*)*1, v___x_4645_);
return v___x_4646_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10(void){
_start:
{
lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; 
v___x_4647_ = lean_unsigned_to_nat(0u);
v___x_4648_ = l_Lean_Options_empty;
v___x_4649_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6));
v___x_4650_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4650_, 0, v___x_4649_);
lean_ctor_set(v___x_4650_, 1, v___x_4648_);
lean_ctor_set(v___x_4650_, 2, v___x_4649_);
lean_ctor_set(v___x_4650_, 3, v___x_4647_);
lean_ctor_set(v___x_4650_, 4, v___x_4647_);
lean_ctor_set(v___x_4650_, 5, v___x_4647_);
return v___x_4650_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11(void){
_start:
{
lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; 
v___x_4651_ = l_Lean_NameSet_empty;
v___x_4652_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4653_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4653_, 0, v___x_4652_);
lean_ctor_set(v___x_4653_, 1, v___x_4652_);
lean_ctor_set(v___x_4653_, 2, v___x_4651_);
return v___x_4653_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12(void){
_start:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; uint8_t v___x_4656_; lean_object* v___x_4657_; 
v___x_4654_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4655_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4656_ = 1;
v___x_4657_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4657_, 0, v___x_4655_);
lean_ctor_set(v___x_4657_, 1, v___x_4655_);
lean_ctor_set(v___x_4657_, 2, v___x_4654_);
lean_ctor_set_uint8(v___x_4657_, sizeof(void*)*3, v___x_4656_);
return v___x_4657_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13(void){
_start:
{
lean_object* v___x_4658_; lean_object* v___x_4659_; 
v___x_4658_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4659_, 0, v___x_4658_);
lean_ctor_set(v___x_4659_, 1, v___x_4658_);
return v___x_4659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(lean_object* v_cctx_4660_, lean_object* v_env_4661_, lean_object* v_modName_4662_, lean_object* v_d_4663_, lean_object* v_cacheRef_4664_, lean_object* v_tree_4665_, lean_object* v_act_4666_, lean_object* v_c_4667_){
_start:
{
uint8_t v___x_4669_; 
lean_inc_ref(v_c_4667_);
v___x_4669_ = l_Lean_AsyncConstantInfo_isUnsafe(v_c_4667_);
if (v___x_4669_ == 0)
{
lean_object* v_name_4670_; uint8_t v___x_4671_; 
v_name_4670_ = lean_ctor_get(v_c_4667_, 0);
lean_inc_n(v_name_4670_, 2);
lean_inc_ref(v_env_4661_);
v___x_4671_ = l_Lean_Meta_LazyDiscrTree_blacklistInsertion(v_env_4661_, v_name_4670_);
if (v___x_4671_ == 0)
{
lean_object* v___x_4672_; uint8_t v___x_4673_; lean_object* v___x_4674_; lean_object* v_ngen_4675_; lean_object* v_core_4676_; lean_object* v_meta_4677_; lean_object* v___x_4679_; uint8_t v_isShared_4680_; uint8_t v_isSharedCheck_4801_; 
v___x_4672_ = lean_box(1);
v___x_4673_ = 1;
v___x_4674_ = lean_st_ref_get(v_cacheRef_4664_);
v_ngen_4675_ = lean_ctor_get(v___x_4674_, 0);
v_core_4676_ = lean_ctor_get(v___x_4674_, 1);
v_meta_4677_ = lean_ctor_get(v___x_4674_, 2);
v_isSharedCheck_4801_ = !lean_is_exclusive(v___x_4674_);
if (v_isSharedCheck_4801_ == 0)
{
v___x_4679_ = v___x_4674_;
v_isShared_4680_ = v_isSharedCheck_4801_;
goto v_resetjp_4678_;
}
else
{
lean_inc(v_meta_4677_);
lean_inc(v_core_4676_);
lean_inc(v_ngen_4675_);
lean_dec(v___x_4674_);
v___x_4679_ = lean_box(0);
v_isShared_4680_ = v_isSharedCheck_4801_;
goto v_resetjp_4678_;
}
v_resetjp_4678_:
{
lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; uint8_t v___x_4688_; uint8_t v___x_4689_; uint8_t v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; uint16_t v___y_4706_; lean_object* v___y_4707_; lean_object* v_fileName_4708_; lean_object* v_fileMap_4709_; lean_object* v_currNamespace_4710_; lean_object* v_openDecls_4711_; lean_object* v_initHeartbeats_4712_; lean_object* v_maxHeartbeats_4713_; lean_object* v_quotContext_4714_; lean_object* v_currMacroScope_4715_; lean_object* v_cancelTk_x3f_4716_; lean_object* v_inheritedTraceOptions_4717_; lean_object* v_currRecDepth_4718_; lean_object* v_ref_4719_; uint8_t v_suppressElabErrors_4720_; uint8_t v_isRecordingDeps_4721_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v_toCold_4750_; lean_object* v_currRecDepth_4751_; lean_object* v_ref_4752_; uint8_t v_suppressElabErrors_4753_; uint8_t v_isRecordingDeps_4754_; lean_object* v_fileName_4755_; lean_object* v_fileMap_4756_; lean_object* v_options_4757_; lean_object* v_currNamespace_4758_; lean_object* v_openDecls_4759_; lean_object* v_initHeartbeats_4760_; lean_object* v_maxHeartbeats_4761_; lean_object* v_quotContext_4762_; lean_object* v_currMacroScope_4763_; lean_object* v_cancelTk_x3f_4764_; uint8_t v___y_4766_; lean_object* v___y_4767_; uint16_t v___y_4768_; lean_object* v___y_4791_; 
v___x_4681_ = lean_unsigned_to_nat(0u);
v___x_4682_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_4683_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4684_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4);
v___x_4685_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4685_, 0, v___x_4682_);
lean_ctor_set(v___x_4685_, 1, v_meta_4677_);
lean_ctor_set(v___x_4685_, 2, v___x_4672_);
lean_ctor_set(v___x_4685_, 3, v___x_4683_);
lean_ctor_set(v___x_4685_, 4, v___x_4684_);
lean_ctor_set(v___x_4685_, 5, v___x_4681_);
lean_inc_ref(v_ngen_4675_);
v___x_4686_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_4675_);
v___x_4687_ = lean_st_ref_swap(v_cacheRef_4664_, v___x_4686_);
lean_dec(v___x_4687_);
v___x_4688_ = 2;
v___x_4689_ = 0;
v___x_4690_ = 2;
v___x_4691_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_4691_, 0, v___x_4671_);
lean_ctor_set_uint8(v___x_4691_, 1, v___x_4671_);
lean_ctor_set_uint8(v___x_4691_, 2, v___x_4671_);
lean_ctor_set_uint8(v___x_4691_, 3, v___x_4671_);
lean_ctor_set_uint8(v___x_4691_, 4, v___x_4671_);
lean_ctor_set_uint8(v___x_4691_, 5, v___x_4673_);
lean_ctor_set_uint8(v___x_4691_, 6, v___x_4673_);
lean_ctor_set_uint8(v___x_4691_, 7, v___x_4671_);
lean_ctor_set_uint8(v___x_4691_, 8, v___x_4673_);
lean_ctor_set_uint8(v___x_4691_, 9, v___x_4688_);
lean_ctor_set_uint8(v___x_4691_, 10, v___x_4689_);
lean_ctor_set_uint8(v___x_4691_, 11, v___x_4673_);
lean_ctor_set_uint8(v___x_4691_, 12, v___x_4673_);
lean_ctor_set_uint8(v___x_4691_, 13, v___x_4673_);
lean_ctor_set_uint8(v___x_4691_, 14, v___x_4690_);
lean_ctor_set_uint8(v___x_4691_, 15, v___x_4673_);
lean_ctor_set_uint8(v___x_4691_, 16, v___x_4673_);
lean_ctor_set_uint8(v___x_4691_, 17, v___x_4673_);
lean_ctor_set_uint8(v___x_4691_, 18, v___x_4673_);
lean_ctor_set_uint8(v___x_4691_, 19, v___x_4671_);
v___x_4692_ = l_Lean_Meta_Config_toConfigWithKey(v___x_4691_);
v___x_4693_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5);
v___x_4694_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6));
v___x_4695_ = lean_box(0);
v___x_4696_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_4696_, 0, v___x_4692_);
lean_ctor_set(v___x_4696_, 1, v___x_4672_);
lean_ctor_set(v___x_4696_, 2, v___x_4693_);
lean_ctor_set(v___x_4696_, 3, v___x_4694_);
lean_ctor_set(v___x_4696_, 4, v___x_4695_);
lean_ctor_set(v___x_4696_, 5, v___x_4681_);
lean_ctor_set(v___x_4696_, 6, v___x_4695_);
lean_ctor_set(v___x_4696_, 7, v___x_4695_);
lean_ctor_set_uint8(v___x_4696_, sizeof(void*)*8, v___x_4671_);
lean_ctor_set_uint8(v___x_4696_, sizeof(void*)*8 + 1, v___x_4671_);
lean_ctor_set_uint8(v___x_4696_, sizeof(void*)*8 + 2, v___x_4671_);
lean_ctor_set_uint8(v___x_4696_, sizeof(void*)*8 + 3, v___x_4673_);
lean_ctor_set_uint8(v___x_4696_, sizeof(void*)*8 + 4, v___x_4671_);
v___x_4697_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7);
v___x_4698_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8));
v___x_4699_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9);
v___x_4700_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10);
v___x_4701_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11);
v___x_4702_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12);
v___x_4703_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4703_, 0, v_env_4661_);
lean_ctor_set(v___x_4703_, 1, v___x_4697_);
lean_ctor_set(v___x_4703_, 2, v_ngen_4675_);
lean_ctor_set(v___x_4703_, 3, v___x_4698_);
lean_ctor_set(v___x_4703_, 4, v___x_4699_);
lean_ctor_set(v___x_4703_, 5, v_core_4676_);
lean_ctor_set(v___x_4703_, 6, v___x_4700_);
lean_ctor_set(v___x_4703_, 7, v___x_4701_);
lean_ctor_set(v___x_4703_, 8, v___x_4702_);
lean_ctor_set(v___x_4703_, 9, v___x_4694_);
v___x_4704_ = lean_st_mk_ref(v___x_4703_);
v___x_4748_ = l_Lean_inheritedTraceOptions;
v___x_4749_ = lean_st_ref_get(v___x_4748_);
v_toCold_4750_ = lean_ctor_get(v_cctx_4660_, 0);
lean_inc_ref(v_toCold_4750_);
v_currRecDepth_4751_ = lean_ctor_get(v_cctx_4660_, 1);
lean_inc(v_currRecDepth_4751_);
v_ref_4752_ = lean_ctor_get(v_cctx_4660_, 2);
lean_inc(v_ref_4752_);
v_suppressElabErrors_4753_ = lean_ctor_get_uint8(v_cctx_4660_, sizeof(void*)*3 + 2);
v_isRecordingDeps_4754_ = lean_ctor_get_uint8(v_cctx_4660_, sizeof(void*)*3 + 3);
lean_dec_ref(v_cctx_4660_);
v_fileName_4755_ = lean_ctor_get(v_toCold_4750_, 0);
lean_inc_ref(v_fileName_4755_);
v_fileMap_4756_ = lean_ctor_get(v_toCold_4750_, 1);
lean_inc_ref(v_fileMap_4756_);
v_options_4757_ = lean_ctor_get(v_toCold_4750_, 2);
lean_inc_ref(v_options_4757_);
v_currNamespace_4758_ = lean_ctor_get(v_toCold_4750_, 4);
lean_inc(v_currNamespace_4758_);
v_openDecls_4759_ = lean_ctor_get(v_toCold_4750_, 5);
lean_inc(v_openDecls_4759_);
v_initHeartbeats_4760_ = lean_ctor_get(v_toCold_4750_, 6);
lean_inc(v_initHeartbeats_4760_);
v_maxHeartbeats_4761_ = lean_ctor_get(v_toCold_4750_, 7);
lean_inc(v_maxHeartbeats_4761_);
v_quotContext_4762_ = lean_ctor_get(v_toCold_4750_, 8);
lean_inc(v_quotContext_4762_);
v_currMacroScope_4763_ = lean_ctor_get(v_toCold_4750_, 9);
lean_inc(v_currMacroScope_4763_);
v_cancelTk_x3f_4764_ = lean_ctor_get(v_toCold_4750_, 10);
lean_inc(v_cancelTk_x3f_4764_);
lean_dec_ref(v_toCold_4750_);
if (v_isRecordingDeps_4754_ == 0)
{
v___y_4791_ = v_options_4757_;
goto v___jp_4790_;
}
else
{
lean_object* v___x_4800_; 
v___x_4800_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_4757_);
v___y_4791_ = v___x_4800_;
goto v___jp_4790_;
}
v___jp_4705_:
{
lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; 
v___x_4722_ = l_Lean_maxRecDepth;
v___x_4723_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v___y_4707_, v___x_4722_);
v___x_4724_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4724_, 0, v_fileName_4708_);
lean_ctor_set(v___x_4724_, 1, v_fileMap_4709_);
lean_ctor_set(v___x_4724_, 2, v___y_4707_);
lean_ctor_set(v___x_4724_, 3, v___x_4723_);
lean_ctor_set(v___x_4724_, 4, v_currNamespace_4710_);
lean_ctor_set(v___x_4724_, 5, v_openDecls_4711_);
lean_ctor_set(v___x_4724_, 6, v_initHeartbeats_4712_);
lean_ctor_set(v___x_4724_, 7, v_maxHeartbeats_4713_);
lean_ctor_set(v___x_4724_, 8, v_quotContext_4714_);
lean_ctor_set(v___x_4724_, 9, v_currMacroScope_4715_);
lean_ctor_set(v___x_4724_, 10, v_cancelTk_x3f_4716_);
lean_ctor_set(v___x_4724_, 11, v_inheritedTraceOptions_4717_);
v___x_4725_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_4725_, 0, v___x_4724_);
lean_ctor_set(v___x_4725_, 1, v_currRecDepth_4718_);
lean_ctor_set(v___x_4725_, 2, v_ref_4719_);
lean_ctor_set_uint16(v___x_4725_, sizeof(void*)*3, v___y_4706_);
lean_ctor_set_uint8(v___x_4725_, sizeof(void*)*3 + 2, v_suppressElabErrors_4720_);
lean_ctor_set_uint8(v___x_4725_, sizeof(void*)*3 + 3, v_isRecordingDeps_4721_);
v___x_4726_ = lean_st_mk_ref(v___x_4685_);
lean_inc(v___x_4704_);
lean_inc(v___x_4726_);
lean_inc(v_name_4670_);
v___x_4727_ = lean_apply_7(v_act_4666_, v_name_4670_, v_c_4667_, v___x_4696_, v___x_4726_, v___x_4725_, v___x_4704_, lean_box(0));
if (lean_obj_tag(v___x_4727_) == 0)
{
lean_object* v_a_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v_ngen_4731_; lean_object* v_cache_4732_; lean_object* v_cache_4733_; lean_object* v___x_4735_; 
lean_dec(v_name_4670_);
lean_dec(v_modName_4662_);
v_a_4728_ = lean_ctor_get(v___x_4727_, 0);
lean_inc(v_a_4728_);
lean_dec_ref_known(v___x_4727_, 1);
v___x_4729_ = lean_st_ref_get(v___x_4726_);
lean_dec(v___x_4726_);
v___x_4730_ = lean_st_ref_get(v___x_4704_);
lean_dec(v___x_4704_);
v_ngen_4731_ = lean_ctor_get(v___x_4730_, 2);
lean_inc_ref(v_ngen_4731_);
v_cache_4732_ = lean_ctor_get(v___x_4730_, 5);
lean_inc_ref(v_cache_4732_);
lean_dec(v___x_4730_);
v_cache_4733_ = lean_ctor_get(v___x_4729_, 1);
lean_inc_ref(v_cache_4733_);
lean_dec(v___x_4729_);
if (v_isShared_4680_ == 0)
{
lean_ctor_set(v___x_4679_, 2, v_cache_4733_);
lean_ctor_set(v___x_4679_, 1, v_cache_4732_);
lean_ctor_set(v___x_4679_, 0, v_ngen_4731_);
v___x_4735_ = v___x_4679_;
goto v_reusejp_4734_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v_ngen_4731_);
lean_ctor_set(v_reuseFailAlloc_4742_, 1, v_cache_4732_);
lean_ctor_set(v_reuseFailAlloc_4742_, 2, v_cache_4733_);
v___x_4735_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4734_;
}
v_reusejp_4734_:
{
lean_object* v___x_4736_; lean_object* v___x_4737_; uint8_t v___x_4738_; 
v___x_4736_ = lean_st_ref_swap(v_cacheRef_4664_, v___x_4735_);
lean_dec(v___x_4736_);
v___x_4737_ = lean_array_get_size(v_a_4728_);
v___x_4738_ = lean_nat_dec_lt(v___x_4681_, v___x_4737_);
if (v___x_4738_ == 0)
{
lean_dec(v_a_4728_);
return v_tree_4665_;
}
else
{
size_t v___x_4739_; size_t v___x_4740_; lean_object* v___x_4741_; 
v___x_4739_ = ((size_t)0ULL);
v___x_4740_ = lean_usize_of_nat(v___x_4737_);
v___x_4741_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg(v_a_4728_, v___x_4739_, v___x_4740_, v_tree_4665_);
lean_dec(v_a_4728_);
return v___x_4741_;
}
}
}
else
{
lean_object* v_a_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; 
lean_dec(v___x_4726_);
lean_dec(v___x_4704_);
lean_del_object(v___x_4679_);
v_a_4743_ = lean_ctor_get(v___x_4727_, 0);
lean_inc(v_a_4743_);
lean_dec_ref_known(v___x_4727_, 1);
v___x_4744_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4744_, 0, v_modName_4662_);
lean_ctor_set(v___x_4744_, 1, v_name_4670_);
lean_ctor_set(v___x_4744_, 2, v_a_4743_);
v___x_4745_ = lean_st_ref_take(v_d_4663_);
v___x_4746_ = lean_array_push(v___x_4745_, v___x_4744_);
v___x_4747_ = lean_st_ref_put(v_d_4663_, v___x_4746_);
return v_tree_4665_;
}
}
v___jp_4765_:
{
lean_object* v___x_4769_; lean_object* v_env_4770_; lean_object* v_nextMacroScope_4771_; lean_object* v_ngen_4772_; lean_object* v_auxDeclNGen_4773_; lean_object* v_traceState_4774_; lean_object* v_recordedDeps_4775_; lean_object* v_messages_4776_; lean_object* v_infoState_4777_; lean_object* v_snapshotTasks_4778_; lean_object* v___x_4780_; uint8_t v_isShared_4781_; uint8_t v_isSharedCheck_4788_; 
v___x_4769_ = lean_st_ref_take(v___x_4704_);
v_env_4770_ = lean_ctor_get(v___x_4769_, 0);
v_nextMacroScope_4771_ = lean_ctor_get(v___x_4769_, 1);
v_ngen_4772_ = lean_ctor_get(v___x_4769_, 2);
v_auxDeclNGen_4773_ = lean_ctor_get(v___x_4769_, 3);
v_traceState_4774_ = lean_ctor_get(v___x_4769_, 4);
v_recordedDeps_4775_ = lean_ctor_get(v___x_4769_, 6);
v_messages_4776_ = lean_ctor_get(v___x_4769_, 7);
v_infoState_4777_ = lean_ctor_get(v___x_4769_, 8);
v_snapshotTasks_4778_ = lean_ctor_get(v___x_4769_, 9);
v_isSharedCheck_4788_ = !lean_is_exclusive(v___x_4769_);
if (v_isSharedCheck_4788_ == 0)
{
lean_object* v_unused_4789_; 
v_unused_4789_ = lean_ctor_get(v___x_4769_, 5);
lean_dec(v_unused_4789_);
v___x_4780_ = v___x_4769_;
v_isShared_4781_ = v_isSharedCheck_4788_;
goto v_resetjp_4779_;
}
else
{
lean_inc(v_snapshotTasks_4778_);
lean_inc(v_infoState_4777_);
lean_inc(v_messages_4776_);
lean_inc(v_recordedDeps_4775_);
lean_inc(v_traceState_4774_);
lean_inc(v_auxDeclNGen_4773_);
lean_inc(v_ngen_4772_);
lean_inc(v_nextMacroScope_4771_);
lean_inc(v_env_4770_);
lean_dec(v___x_4769_);
v___x_4780_ = lean_box(0);
v_isShared_4781_ = v_isSharedCheck_4788_;
goto v_resetjp_4779_;
}
v_resetjp_4779_:
{
lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4785_; 
v___x_4782_ = l_Lean_Kernel_enableDiag(v_env_4770_, v___y_4766_);
v___x_4783_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13);
if (v_isShared_4781_ == 0)
{
lean_ctor_set(v___x_4780_, 5, v___x_4783_);
lean_ctor_set(v___x_4780_, 0, v___x_4782_);
v___x_4785_ = v___x_4780_;
goto v_reusejp_4784_;
}
else
{
lean_object* v_reuseFailAlloc_4787_; 
v_reuseFailAlloc_4787_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4787_, 0, v___x_4782_);
lean_ctor_set(v_reuseFailAlloc_4787_, 1, v_nextMacroScope_4771_);
lean_ctor_set(v_reuseFailAlloc_4787_, 2, v_ngen_4772_);
lean_ctor_set(v_reuseFailAlloc_4787_, 3, v_auxDeclNGen_4773_);
lean_ctor_set(v_reuseFailAlloc_4787_, 4, v_traceState_4774_);
lean_ctor_set(v_reuseFailAlloc_4787_, 5, v___x_4783_);
lean_ctor_set(v_reuseFailAlloc_4787_, 6, v_recordedDeps_4775_);
lean_ctor_set(v_reuseFailAlloc_4787_, 7, v_messages_4776_);
lean_ctor_set(v_reuseFailAlloc_4787_, 8, v_infoState_4777_);
lean_ctor_set(v_reuseFailAlloc_4787_, 9, v_snapshotTasks_4778_);
v___x_4785_ = v_reuseFailAlloc_4787_;
goto v_reusejp_4784_;
}
v_reusejp_4784_:
{
lean_object* v___x_4786_; 
v___x_4786_ = lean_st_ref_put(v___x_4704_, v___x_4785_);
v___y_4706_ = v___y_4768_;
v___y_4707_ = v___y_4767_;
v_fileName_4708_ = v_fileName_4755_;
v_fileMap_4709_ = v_fileMap_4756_;
v_currNamespace_4710_ = v_currNamespace_4758_;
v_openDecls_4711_ = v_openDecls_4759_;
v_initHeartbeats_4712_ = v_initHeartbeats_4760_;
v_maxHeartbeats_4713_ = v_maxHeartbeats_4761_;
v_quotContext_4714_ = v_quotContext_4762_;
v_currMacroScope_4715_ = v_currMacroScope_4763_;
v_cancelTk_x3f_4716_ = v_cancelTk_x3f_4764_;
v_inheritedTraceOptions_4717_ = v___x_4749_;
v_currRecDepth_4718_ = v_currRecDepth_4751_;
v_ref_4719_ = v_ref_4752_;
v_suppressElabErrors_4720_ = v_suppressElabErrors_4753_;
v_isRecordingDeps_4721_ = v_isRecordingDeps_4754_;
goto v___jp_4705_;
}
}
}
v___jp_4790_:
{
uint16_t v___x_4792_; lean_object* v___x_4793_; lean_object* v_env_4794_; uint8_t v___x_4795_; uint16_t v___x_4796_; uint16_t v___x_4797_; uint16_t v___x_4798_; uint8_t v___x_4799_; 
v___x_4792_ = l_Lean_OptionFlags_ofOptions(v___y_4791_);
v___x_4793_ = lean_st_ref_get(v___x_4704_);
v_env_4794_ = lean_ctor_get(v___x_4793_, 0);
lean_inc_ref(v_env_4794_);
lean_dec(v___x_4793_);
v___x_4795_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4794_);
lean_dec_ref(v_env_4794_);
v___x_4796_ = 512;
v___x_4797_ = lean_uint16_land(v___x_4792_, v___x_4796_);
v___x_4798_ = 0;
v___x_4799_ = lean_uint16_dec_eq(v___x_4797_, v___x_4798_);
if (v___x_4799_ == 0)
{
if (v___x_4795_ == 0)
{
v___y_4766_ = v___x_4673_;
v___y_4767_ = v___y_4791_;
v___y_4768_ = v___x_4792_;
goto v___jp_4765_;
}
else
{
v___y_4706_ = v___x_4792_;
v___y_4707_ = v___y_4791_;
v_fileName_4708_ = v_fileName_4755_;
v_fileMap_4709_ = v_fileMap_4756_;
v_currNamespace_4710_ = v_currNamespace_4758_;
v_openDecls_4711_ = v_openDecls_4759_;
v_initHeartbeats_4712_ = v_initHeartbeats_4760_;
v_maxHeartbeats_4713_ = v_maxHeartbeats_4761_;
v_quotContext_4714_ = v_quotContext_4762_;
v_currMacroScope_4715_ = v_currMacroScope_4763_;
v_cancelTk_x3f_4716_ = v_cancelTk_x3f_4764_;
v_inheritedTraceOptions_4717_ = v___x_4749_;
v_currRecDepth_4718_ = v_currRecDepth_4751_;
v_ref_4719_ = v_ref_4752_;
v_suppressElabErrors_4720_ = v_suppressElabErrors_4753_;
v_isRecordingDeps_4721_ = v_isRecordingDeps_4754_;
goto v___jp_4705_;
}
}
else
{
if (v___x_4795_ == 0)
{
v___y_4706_ = v___x_4792_;
v___y_4707_ = v___y_4791_;
v_fileName_4708_ = v_fileName_4755_;
v_fileMap_4709_ = v_fileMap_4756_;
v_currNamespace_4710_ = v_currNamespace_4758_;
v_openDecls_4711_ = v_openDecls_4759_;
v_initHeartbeats_4712_ = v_initHeartbeats_4760_;
v_maxHeartbeats_4713_ = v_maxHeartbeats_4761_;
v_quotContext_4714_ = v_quotContext_4762_;
v_currMacroScope_4715_ = v_currMacroScope_4763_;
v_cancelTk_x3f_4716_ = v_cancelTk_x3f_4764_;
v_inheritedTraceOptions_4717_ = v___x_4749_;
v_currRecDepth_4718_ = v_currRecDepth_4751_;
v_ref_4719_ = v_ref_4752_;
v_suppressElabErrors_4720_ = v_suppressElabErrors_4753_;
v_isRecordingDeps_4721_ = v_isRecordingDeps_4754_;
goto v___jp_4705_;
}
else
{
v___y_4766_ = v___x_4671_;
v___y_4767_ = v___y_4791_;
v___y_4768_ = v___x_4792_;
goto v___jp_4765_;
}
}
}
}
}
else
{
lean_dec(v_name_4670_);
lean_dec_ref(v_c_4667_);
lean_dec_ref(v_act_4666_);
lean_dec(v_modName_4662_);
lean_dec_ref(v_env_4661_);
lean_dec_ref(v_cctx_4660_);
return v_tree_4665_;
}
}
else
{
lean_dec_ref(v_c_4667_);
lean_dec_ref(v_act_4666_);
lean_dec(v_modName_4662_);
lean_dec_ref(v_env_4661_);
lean_dec_ref(v_cctx_4660_);
return v_tree_4665_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___boxed(lean_object* v_cctx_4802_, lean_object* v_env_4803_, lean_object* v_modName_4804_, lean_object* v_d_4805_, lean_object* v_cacheRef_4806_, lean_object* v_tree_4807_, lean_object* v_act_4808_, lean_object* v_c_4809_, lean_object* v_a_4810_){
_start:
{
lean_object* v_res_4811_; 
v_res_4811_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4802_, v_env_4803_, v_modName_4804_, v_d_4805_, v_cacheRef_4806_, v_tree_4807_, v_act_4808_, v_c_4809_);
lean_dec(v_cacheRef_4806_);
lean_dec(v_d_4805_);
return v_res_4811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData(lean_object* v_00_u03b1_4812_, lean_object* v_cctx_4813_, lean_object* v_env_4814_, lean_object* v_modName_4815_, lean_object* v_d_4816_, lean_object* v_cacheRef_4817_, lean_object* v_tree_4818_, lean_object* v_act_4819_, lean_object* v_c_4820_){
_start:
{
lean_object* v___x_4822_; 
v___x_4822_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4813_, v_env_4814_, v_modName_4815_, v_d_4816_, v_cacheRef_4817_, v_tree_4818_, v_act_4819_, v_c_4820_);
return v___x_4822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___boxed(lean_object* v_00_u03b1_4823_, lean_object* v_cctx_4824_, lean_object* v_env_4825_, lean_object* v_modName_4826_, lean_object* v_d_4827_, lean_object* v_cacheRef_4828_, lean_object* v_tree_4829_, lean_object* v_act_4830_, lean_object* v_c_4831_, lean_object* v_a_4832_){
_start:
{
lean_object* v_res_4833_; 
v_res_4833_ = l_Lean_Meta_LazyDiscrTree_addConstImportData(v_00_u03b1_4823_, v_cctx_4824_, v_env_4825_, v_modName_4826_, v_d_4827_, v_cacheRef_4828_, v_tree_4829_, v_act_4830_, v_c_4831_);
lean_dec(v_cacheRef_4828_);
lean_dec(v_d_4827_);
return v_res_4833_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(lean_object* v_00_u03b1_4834_, lean_object* v_as_4835_, size_t v_i_4836_, size_t v_stop_4837_, lean_object* v_b_4838_){
_start:
{
lean_object* v___x_4839_; 
v___x_4839_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___redArg(v_as_4835_, v_i_4836_, v_stop_4837_, v_b_4838_);
return v___x_4839_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___boxed(lean_object* v_00_u03b1_4840_, lean_object* v_as_4841_, lean_object* v_i_4842_, lean_object* v_stop_4843_, lean_object* v_b_4844_){
_start:
{
size_t v_i_boxed_4845_; size_t v_stop_boxed_4846_; lean_object* v_res_4847_; 
v_i_boxed_4845_ = lean_unbox_usize(v_i_4842_);
lean_dec(v_i_4842_);
v_stop_boxed_4846_ = lean_unbox_usize(v_stop_4843_);
lean_dec(v_stop_4843_);
v_res_4847_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(v_00_u03b1_4840_, v_as_4841_, v_i_boxed_4845_, v_stop_boxed_4846_, v_b_4844_);
lean_dec_ref(v_as_4841_);
return v_res_4847_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0(void){
_start:
{
lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; 
v___x_4848_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__0));
v___x_4849_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
v___x_4850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4850_, 0, v___x_4849_);
lean_ctor_set(v___x_4850_, 1, v___x_4848_);
return v___x_4850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg(){
_start:
{
lean_object* v___x_4852_; 
v___x_4852_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___closed__0);
return v___x_4852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg___boxed(lean_object* v___dummy_4853_){
_start:
{
lean_object* v_res_4854_; 
v_res_4854_ = l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg();
return v_res_4854_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0(void){
_start:
{
lean_object* v___x_4855_; 
v___x_4855_ = l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___redArg();
return v___x_4855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults(lean_object* v_00_u03b1_4856_){
_start:
{
lean_object* v___x_4857_; 
v___x_4857_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0);
return v___x_4857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(lean_object* v_x_4858_, lean_object* v_y_4859_){
_start:
{
lean_object* v_tree_4860_; lean_object* v_errors_4861_; lean_object* v_tree_4862_; lean_object* v_errors_4863_; lean_object* v___x_4865_; uint8_t v_isShared_4866_; uint8_t v_isSharedCheck_4872_; 
v_tree_4860_ = lean_ctor_get(v_x_4858_, 0);
lean_inc_ref(v_tree_4860_);
v_errors_4861_ = lean_ctor_get(v_x_4858_, 1);
lean_inc_ref(v_errors_4861_);
lean_dec_ref(v_x_4858_);
v_tree_4862_ = lean_ctor_get(v_y_4859_, 0);
v_errors_4863_ = lean_ctor_get(v_y_4859_, 1);
v_isSharedCheck_4872_ = !lean_is_exclusive(v_y_4859_);
if (v_isSharedCheck_4872_ == 0)
{
v___x_4865_ = v_y_4859_;
v_isShared_4866_ = v_isSharedCheck_4872_;
goto v_resetjp_4864_;
}
else
{
lean_inc(v_errors_4863_);
lean_inc(v_tree_4862_);
lean_dec(v_y_4859_);
v___x_4865_ = lean_box(0);
v_isShared_4866_ = v_isSharedCheck_4872_;
goto v_resetjp_4864_;
}
v_resetjp_4864_:
{
lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4870_; 
v___x_4867_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(v_tree_4860_, v_tree_4862_);
v___x_4868_ = l_Array_append___redArg(v_errors_4861_, v_errors_4863_);
lean_dec_ref(v_errors_4863_);
if (v_isShared_4866_ == 0)
{
lean_ctor_set(v___x_4865_, 1, v___x_4868_);
lean_ctor_set(v___x_4865_, 0, v___x_4867_);
v___x_4870_ = v___x_4865_;
goto v_reusejp_4869_;
}
else
{
lean_object* v_reuseFailAlloc_4871_; 
v_reuseFailAlloc_4871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4871_, 0, v___x_4867_);
lean_ctor_set(v_reuseFailAlloc_4871_, 1, v___x_4868_);
v___x_4870_ = v_reuseFailAlloc_4871_;
goto v_reusejp_4869_;
}
v_reusejp_4869_:
{
return v___x_4870_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append(lean_object* v_00_u03b1_4873_, lean_object* v_x_4874_, lean_object* v_y_4875_){
_start:
{
lean_object* v___x_4876_; 
v___x_4876_ = l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(v_x_4874_, v_y_4875_);
return v___x_4876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg(){
_start:
{
lean_object* v___x_4879_; 
v___x_4879_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0));
return v___x_4879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___boxed(lean_object* v___dummy_4880_){
_start:
{
lean_object* v_res_4881_; 
v_res_4881_ = l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg();
return v_res_4881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend(lean_object* v_00_u03b1_4882_){
_start:
{
lean_object* v___x_4883_; 
v___x_4883_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0));
return v___x_4883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg(lean_object* v_d_4884_, lean_object* v_tree_4885_){
_start:
{
lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; 
v___x_4887_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0));
v___x_4888_ = lean_st_ref_swap(v_d_4884_, v___x_4887_);
v___x_4889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4889_, 0, v_tree_4885_);
lean_ctor_set(v___x_4889_, 1, v___x_4888_);
return v___x_4889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg___boxed(lean_object* v_d_4890_, lean_object* v_tree_4891_, lean_object* v_a_4892_){
_start:
{
lean_object* v_res_4893_; 
v_res_4893_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_4890_, v_tree_4891_);
lean_dec(v_d_4890_);
return v_res_4893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat(lean_object* v_00_u03b1_4894_, lean_object* v_d_4895_, lean_object* v_tree_4896_){
_start:
{
lean_object* v___x_4898_; 
v___x_4898_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_4895_, v_tree_4896_);
return v___x_4898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___boxed(lean_object* v_00_u03b1_4899_, lean_object* v_d_4900_, lean_object* v_tree_4901_, lean_object* v_a_4902_){
_start:
{
lean_object* v_res_4903_; 
v_res_4903_ = l_Lean_Meta_LazyDiscrTree_toFlat(v_00_u03b1_4899_, v_d_4900_, v_tree_4901_);
lean_dec(v_d_4900_);
return v_res_4903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(lean_object* v_cctx_4904_, lean_object* v_env_4905_, lean_object* v_act_4906_, lean_object* v_d_4907_, lean_object* v_cacheRef_4908_, lean_object* v_tree_4909_, lean_object* v_mname_4910_, lean_object* v_mdata_4911_, lean_object* v_i_4912_){
_start:
{
lean_object* v_constants_4914_; lean_object* v___x_4915_; uint8_t v___x_4916_; 
v_constants_4914_ = lean_ctor_get(v_mdata_4911_, 2);
v___x_4915_ = lean_array_get_size(v_constants_4914_);
v___x_4916_ = lean_nat_dec_lt(v_i_4912_, v___x_4915_);
if (v___x_4916_ == 0)
{
lean_dec(v_i_4912_);
lean_dec(v_mname_4910_);
lean_dec_ref(v_act_4906_);
lean_dec_ref(v_env_4905_);
lean_dec_ref(v_cctx_4904_);
return v_tree_4909_;
}
else
{
lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; 
v___x_4917_ = lean_array_fget_borrowed(v_constants_4914_, v_i_4912_);
lean_inc(v___x_4917_);
v___x_4918_ = l_Lean_AsyncConstantInfo_ofConstantInfo(v___x_4917_);
lean_inc_ref(v_act_4906_);
lean_inc(v_mname_4910_);
lean_inc_ref(v_env_4905_);
lean_inc_ref(v_cctx_4904_);
v___x_4919_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4904_, v_env_4905_, v_mname_4910_, v_d_4907_, v_cacheRef_4908_, v_tree_4909_, v_act_4906_, v___x_4918_);
v___x_4920_ = lean_unsigned_to_nat(1u);
v___x_4921_ = lean_nat_add(v_i_4912_, v___x_4920_);
lean_dec(v_i_4912_);
v_tree_4909_ = v___x_4919_;
v_i_4912_ = v___x_4921_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg___boxed(lean_object* v_cctx_4923_, lean_object* v_env_4924_, lean_object* v_act_4925_, lean_object* v_d_4926_, lean_object* v_cacheRef_4927_, lean_object* v_tree_4928_, lean_object* v_mname_4929_, lean_object* v_mdata_4930_, lean_object* v_i_4931_, lean_object* v_a_4932_){
_start:
{
lean_object* v_res_4933_; 
v_res_4933_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_4923_, v_env_4924_, v_act_4925_, v_d_4926_, v_cacheRef_4927_, v_tree_4928_, v_mname_4929_, v_mdata_4930_, v_i_4931_);
lean_dec_ref(v_mdata_4930_);
lean_dec(v_cacheRef_4927_);
lean_dec(v_d_4926_);
return v_res_4933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule(lean_object* v_00_u03b1_4934_, lean_object* v_cctx_4935_, lean_object* v_env_4936_, lean_object* v_act_4937_, lean_object* v_d_4938_, lean_object* v_cacheRef_4939_, lean_object* v_tree_4940_, lean_object* v_mname_4941_, lean_object* v_mdata_4942_, lean_object* v_i_4943_){
_start:
{
lean_object* v___x_4945_; 
v___x_4945_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_4935_, v_env_4936_, v_act_4937_, v_d_4938_, v_cacheRef_4939_, v_tree_4940_, v_mname_4941_, v_mdata_4942_, v_i_4943_);
return v___x_4945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___boxed(lean_object* v_00_u03b1_4946_, lean_object* v_cctx_4947_, lean_object* v_env_4948_, lean_object* v_act_4949_, lean_object* v_d_4950_, lean_object* v_cacheRef_4951_, lean_object* v_tree_4952_, lean_object* v_mname_4953_, lean_object* v_mdata_4954_, lean_object* v_i_4955_, lean_object* v_a_4956_){
_start:
{
lean_object* v_res_4957_; 
v_res_4957_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule(v_00_u03b1_4946_, v_cctx_4947_, v_env_4948_, v_act_4949_, v_d_4950_, v_cacheRef_4951_, v_tree_4952_, v_mname_4953_, v_mdata_4954_, v_i_4955_);
lean_dec_ref(v_mdata_4954_);
lean_dec(v_cacheRef_4951_);
lean_dec(v_d_4950_);
return v_res_4957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(lean_object* v_cctx_4958_, lean_object* v_env_4959_, lean_object* v_act_4960_, lean_object* v_d_4961_, lean_object* v_cacheRef_4962_, lean_object* v_tree_4963_, lean_object* v_start_4964_, lean_object* v_stop_4965_){
_start:
{
uint8_t v___x_4967_; 
v___x_4967_ = lean_nat_dec_lt(v_start_4964_, v_stop_4965_);
if (v___x_4967_ == 0)
{
lean_object* v___x_4968_; 
lean_dec(v_start_4964_);
lean_dec_ref(v_act_4960_);
lean_dec_ref(v_env_4959_);
lean_dec_ref(v_cctx_4958_);
v___x_4968_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_4961_, v_tree_4963_);
return v___x_4968_;
}
else
{
lean_object* v___x_4969_; lean_object* v_moduleNames_4970_; lean_object* v_moduleData_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v_mname_4974_; lean_object* v_mdata_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; 
v___x_4969_ = l_Lean_Environment_header(v_env_4959_);
v_moduleNames_4970_ = lean_ctor_get(v___x_4969_, 4);
lean_inc_ref(v_moduleNames_4970_);
v_moduleData_4971_ = lean_ctor_get(v___x_4969_, 7);
lean_inc_ref(v_moduleData_4971_);
lean_dec_ref(v___x_4969_);
v___x_4972_ = lean_box(0);
v___x_4973_ = l_Lean_instInhabitedModuleData_default;
v_mname_4974_ = lean_array_get(v___x_4972_, v_moduleNames_4970_, v_start_4964_);
lean_dec_ref(v_moduleNames_4970_);
v_mdata_4975_ = lean_array_get(v___x_4973_, v_moduleData_4971_, v_start_4964_);
lean_dec_ref(v_moduleData_4971_);
v___x_4976_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_act_4960_);
lean_inc_ref(v_env_4959_);
lean_inc_ref(v_cctx_4958_);
v___x_4977_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_4958_, v_env_4959_, v_act_4960_, v_d_4961_, v_cacheRef_4962_, v_tree_4963_, v_mname_4974_, v_mdata_4975_, v___x_4976_);
lean_dec(v_mdata_4975_);
v___x_4978_ = lean_unsigned_to_nat(1u);
v___x_4979_ = lean_nat_add(v_start_4964_, v___x_4978_);
lean_dec(v_start_4964_);
v_tree_4963_ = v___x_4977_;
v_start_4964_ = v___x_4979_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg___boxed(lean_object* v_cctx_4981_, lean_object* v_env_4982_, lean_object* v_act_4983_, lean_object* v_d_4984_, lean_object* v_cacheRef_4985_, lean_object* v_tree_4986_, lean_object* v_start_4987_, lean_object* v_stop_4988_, lean_object* v_a_4989_){
_start:
{
lean_object* v_res_4990_; 
v_res_4990_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_4981_, v_env_4982_, v_act_4983_, v_d_4984_, v_cacheRef_4985_, v_tree_4986_, v_start_4987_, v_stop_4988_);
lean_dec(v_stop_4988_);
lean_dec(v_cacheRef_4985_);
lean_dec(v_d_4984_);
return v_res_4990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(lean_object* v_00_u03b1_4991_, lean_object* v_cctx_4992_, lean_object* v_env_4993_, lean_object* v_act_4994_, lean_object* v_d_4995_, lean_object* v_cacheRef_4996_, lean_object* v_tree_4997_, lean_object* v_start_4998_, lean_object* v_stop_4999_){
_start:
{
lean_object* v___x_5001_; 
v___x_5001_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_4992_, v_env_4993_, v_act_4994_, v_d_4995_, v_cacheRef_4996_, v_tree_4997_, v_start_4998_, v_stop_4999_);
return v___x_5001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___boxed(lean_object* v_00_u03b1_5002_, lean_object* v_cctx_5003_, lean_object* v_env_5004_, lean_object* v_act_5005_, lean_object* v_d_5006_, lean_object* v_cacheRef_5007_, lean_object* v_tree_5008_, lean_object* v_start_5009_, lean_object* v_stop_5010_, lean_object* v_a_5011_){
_start:
{
lean_object* v_res_5012_; 
v_res_5012_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(v_00_u03b1_5002_, v_cctx_5003_, v_env_5004_, v_act_5005_, v_d_5006_, v_cacheRef_5007_, v_tree_5008_, v_start_5009_, v_stop_5010_);
lean_dec(v_stop_5010_);
lean_dec(v_cacheRef_5007_);
lean_dec(v_d_5006_);
return v_res_5012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(lean_object* v_cctx_5013_, lean_object* v_ngen_5014_, lean_object* v_env_5015_, lean_object* v_act_5016_, lean_object* v_start_5017_, lean_object* v_stop_5018_){
_start:
{
lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; 
v___x_5020_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_5014_);
v___x_5021_ = lean_st_mk_ref(v___x_5020_);
v___x_5022_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
v___x_5023_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
v___x_5024_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_5013_, v_env_5015_, v_act_5016_, v___x_5022_, v___x_5021_, v___x_5023_, v_start_5017_, v_stop_5018_);
lean_dec(v___x_5021_);
lean_dec(v___x_5022_);
return v___x_5024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg___boxed(lean_object* v_cctx_5025_, lean_object* v_ngen_5026_, lean_object* v_env_5027_, lean_object* v_act_5028_, lean_object* v_start_5029_, lean_object* v_stop_5030_, lean_object* v_a_5031_){
_start:
{
lean_object* v_res_5032_; 
v_res_5032_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(v_cctx_5025_, v_ngen_5026_, v_env_5027_, v_act_5028_, v_start_5029_, v_stop_5030_);
lean_dec(v_stop_5030_);
return v_res_5032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(lean_object* v_00_u03b1_5033_, lean_object* v_cctx_5034_, lean_object* v_ngen_5035_, lean_object* v_env_5036_, lean_object* v_act_5037_, lean_object* v_start_5038_, lean_object* v_stop_5039_){
_start:
{
lean_object* v___x_5041_; 
v___x_5041_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(v_cctx_5034_, v_ngen_5035_, v_env_5036_, v_act_5037_, v_start_5038_, v_stop_5039_);
return v___x_5041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed(lean_object* v_00_u03b1_5042_, lean_object* v_cctx_5043_, lean_object* v_ngen_5044_, lean_object* v_env_5045_, lean_object* v_act_5046_, lean_object* v_start_5047_, lean_object* v_stop_5048_, lean_object* v_a_5049_){
_start:
{
lean_object* v_res_5050_; 
v_res_5050_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(v_00_u03b1_5042_, v_cctx_5043_, v_ngen_5044_, v_env_5045_, v_act_5046_, v_start_5047_, v_stop_5048_);
lean_dec(v_stop_5048_);
return v_res_5050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0(lean_object* v_inst_5051_, lean_object* v_x1_5052_, lean_object* v_x2_5053_){
_start:
{
lean_object* v___x_5054_; lean_object* v___x_5055_; 
v___x_5054_ = lean_task_get_own(v_x2_5053_);
v___x_5055_ = lean_apply_2(v_inst_5051_, v_x1_5052_, v___x_5054_);
return v___x_5055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg(lean_object* v_inst_5056_, lean_object* v_z_5057_, lean_object* v_tasks_5058_){
_start:
{
lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; uint8_t v___x_5062_; 
v___x_5059_ = lean_unsigned_to_nat(0u);
v___x_5060_ = lean_array_get_size(v_tasks_5058_);
v___x_5061_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v___x_5062_ = lean_nat_dec_lt(v___x_5059_, v___x_5060_);
if (v___x_5062_ == 0)
{
lean_dec_ref(v_tasks_5058_);
lean_dec(v_inst_5056_);
return v_z_5057_;
}
else
{
lean_object* v___f_5063_; size_t v___x_5064_; size_t v___x_5065_; lean_object* v___x_5066_; 
v___f_5063_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5063_, 0, v_inst_5056_);
v___x_5064_ = ((size_t)0ULL);
v___x_5065_ = lean_usize_of_nat(v___x_5060_);
v___x_5066_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_5061_, v___f_5063_, v_tasks_5058_, v___x_5064_, v___x_5065_, v_z_5057_);
return v___x_5066_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet(lean_object* v_00_u03b1_5067_, lean_object* v_inst_5068_, lean_object* v_z_5069_, lean_object* v_tasks_5070_){
_start:
{
lean_object* v___x_5071_; 
v___x_5071_ = l_Lean_Meta_LazyDiscrTree_combineGet___redArg(v_inst_5068_, v_z_5069_, v_tasks_5070_);
return v___x_5071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0(lean_object* v_toPure_5072_, lean_object* v___x_5073_, lean_object* v_____r_5074_){
_start:
{
lean_object* v___x_5075_; 
v___x_5075_ = lean_apply_2(v_toPure_5072_, lean_box(0), v___x_5073_);
return v___x_5075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1(lean_object* v_toPure_5076_, lean_object* v_setNGen_5077_, lean_object* v_toBind_5078_, lean_object* v_ngen_5079_){
_start:
{
lean_object* v_namePrefix_5080_; lean_object* v_idx_5081_; lean_object* v___x_5083_; uint8_t v_isShared_5084_; uint8_t v_isSharedCheck_5095_; 
v_namePrefix_5080_ = lean_ctor_get(v_ngen_5079_, 0);
v_idx_5081_ = lean_ctor_get(v_ngen_5079_, 1);
v_isSharedCheck_5095_ = !lean_is_exclusive(v_ngen_5079_);
if (v_isSharedCheck_5095_ == 0)
{
v___x_5083_ = v_ngen_5079_;
v_isShared_5084_ = v_isSharedCheck_5095_;
goto v_resetjp_5082_;
}
else
{
lean_inc(v_idx_5081_);
lean_inc(v_namePrefix_5080_);
lean_dec(v_ngen_5079_);
v___x_5083_ = lean_box(0);
v_isShared_5084_ = v_isSharedCheck_5095_;
goto v_resetjp_5082_;
}
v_resetjp_5082_:
{
lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5088_; 
lean_inc(v_idx_5081_);
lean_inc(v_namePrefix_5080_);
v___x_5085_ = l_Lean_Name_num___override(v_namePrefix_5080_, v_idx_5081_);
v___x_5086_ = lean_unsigned_to_nat(1u);
if (v_isShared_5084_ == 0)
{
lean_ctor_set(v___x_5083_, 1, v___x_5086_);
lean_ctor_set(v___x_5083_, 0, v___x_5085_);
v___x_5088_ = v___x_5083_;
goto v_reusejp_5087_;
}
else
{
lean_object* v_reuseFailAlloc_5094_; 
v_reuseFailAlloc_5094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5094_, 0, v___x_5085_);
lean_ctor_set(v_reuseFailAlloc_5094_, 1, v___x_5086_);
v___x_5088_ = v_reuseFailAlloc_5094_;
goto v_reusejp_5087_;
}
v_reusejp_5087_:
{
lean_object* v___f_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; 
v___f_5089_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5089_, 0, v_toPure_5076_);
lean_closure_set(v___f_5089_, 1, v___x_5088_);
v___x_5090_ = lean_nat_add(v_idx_5081_, v___x_5086_);
lean_dec(v_idx_5081_);
v___x_5091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5091_, 0, v_namePrefix_5080_);
lean_ctor_set(v___x_5091_, 1, v___x_5090_);
v___x_5092_ = lean_apply_1(v_setNGen_5077_, v___x_5091_);
v___x_5093_ = lean_apply_4(v_toBind_5078_, lean_box(0), lean_box(0), v___x_5092_, v___f_5089_);
return v___x_5093_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(lean_object* v_inst_5096_, lean_object* v_inst_5097_){
_start:
{
lean_object* v_toApplicative_5098_; lean_object* v_toBind_5099_; lean_object* v_getNGen_5100_; lean_object* v_setNGen_5101_; lean_object* v_toPure_5102_; lean_object* v___f_5103_; lean_object* v___x_5104_; 
v_toApplicative_5098_ = lean_ctor_get(v_inst_5096_, 0);
lean_inc_ref(v_toApplicative_5098_);
v_toBind_5099_ = lean_ctor_get(v_inst_5096_, 1);
lean_inc_n(v_toBind_5099_, 2);
lean_dec_ref(v_inst_5096_);
v_getNGen_5100_ = lean_ctor_get(v_inst_5097_, 0);
lean_inc(v_getNGen_5100_);
v_setNGen_5101_ = lean_ctor_get(v_inst_5097_, 1);
lean_inc(v_setNGen_5101_);
lean_dec_ref(v_inst_5097_);
v_toPure_5102_ = lean_ctor_get(v_toApplicative_5098_, 1);
lean_inc(v_toPure_5102_);
lean_dec_ref(v_toApplicative_5098_);
v___f_5103_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1), 4, 3);
lean_closure_set(v___f_5103_, 0, v_toPure_5102_);
lean_closure_set(v___f_5103_, 1, v_setNGen_5101_);
lean_closure_set(v___f_5103_, 2, v_toBind_5099_);
v___x_5104_ = lean_apply_4(v_toBind_5099_, lean_box(0), lean_box(0), v_getNGen_5100_, v___f_5103_);
return v___x_5104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen(lean_object* v_M_5105_, lean_object* v_inst_5106_, lean_object* v_inst_5107_){
_start:
{
lean_object* v___x_5108_; 
v___x_5108_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(v_inst_5106_, v_inst_5107_);
return v___x_5108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(lean_object* v_cctx_5109_, lean_object* v_env_5110_, lean_object* v_modName_5111_, lean_object* v_d_5112_, lean_object* v_val_5113_, lean_object* v_act_5114_, lean_object* v_as_5115_, size_t v_sz_5116_, size_t v_i_5117_, lean_object* v_b_5118_){
_start:
{
uint8_t v___x_5120_; 
v___x_5120_ = lean_usize_dec_lt(v_i_5117_, v_sz_5116_);
if (v___x_5120_ == 0)
{
lean_dec_ref(v_act_5114_);
lean_dec(v_modName_5111_);
lean_dec_ref(v_env_5110_);
lean_dec_ref(v_cctx_5109_);
return v_b_5118_;
}
else
{
lean_object* v_a_5121_; lean_object* v___x_5122_; size_t v___x_5123_; size_t v___x_5124_; 
v_a_5121_ = lean_array_uget_borrowed(v_as_5115_, v_i_5117_);
lean_inc(v_a_5121_);
lean_inc_ref(v_act_5114_);
lean_inc(v_modName_5111_);
lean_inc_ref(v_env_5110_);
lean_inc_ref(v_cctx_5109_);
v___x_5122_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_5109_, v_env_5110_, v_modName_5111_, v_d_5112_, v_val_5113_, v_b_5118_, v_act_5114_, v_a_5121_);
v___x_5123_ = ((size_t)1ULL);
v___x_5124_ = lean_usize_add(v_i_5117_, v___x_5123_);
v_i_5117_ = v___x_5124_;
v_b_5118_ = v___x_5122_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg___boxed(lean_object* v_cctx_5126_, lean_object* v_env_5127_, lean_object* v_modName_5128_, lean_object* v_d_5129_, lean_object* v_val_5130_, lean_object* v_act_5131_, lean_object* v_as_5132_, lean_object* v_sz_5133_, lean_object* v_i_5134_, lean_object* v_b_5135_, lean_object* v___y_5136_){
_start:
{
size_t v_sz_boxed_5137_; size_t v_i_boxed_5138_; lean_object* v_res_5139_; 
v_sz_boxed_5137_ = lean_unbox_usize(v_sz_5133_);
lean_dec(v_sz_5133_);
v_i_boxed_5138_ = lean_unbox_usize(v_i_5134_);
lean_dec(v_i_5134_);
v_res_5139_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(v_cctx_5126_, v_env_5127_, v_modName_5128_, v_d_5129_, v_val_5130_, v_act_5131_, v_as_5132_, v_sz_boxed_5137_, v_i_boxed_5138_, v_b_5135_);
lean_dec_ref(v_as_5132_);
lean_dec(v_val_5130_);
lean_dec(v_d_5129_);
return v_res_5139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(lean_object* v_cctx_5140_, lean_object* v_ngen_5141_, lean_object* v_env_5142_, lean_object* v_d_5143_, lean_object* v_act_5144_){
_start:
{
lean_object* v___x_5146_; lean_object* v_mainModule_5147_; lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5150_; uint8_t v___x_5151_; lean_object* v___x_5152_; size_t v_sz_5153_; size_t v___x_5154_; lean_object* v___x_5155_; 
v___x_5146_ = l_Lean_Environment_header(v_env_5142_);
v_mainModule_5147_ = lean_ctor_get(v___x_5146_, 0);
lean_inc(v_mainModule_5147_);
lean_dec_ref(v___x_5146_);
v___x_5148_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_5141_);
v___x_5149_ = lean_st_mk_ref(v___x_5148_);
v___x_5150_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___redArg___closed__1);
v___x_5151_ = 1;
v___x_5152_ = l_Lean_Environment_getLocalConstantInfos(v_env_5142_, v___x_5151_);
v_sz_5153_ = lean_array_size(v___x_5152_);
v___x_5154_ = ((size_t)0ULL);
v___x_5155_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(v_cctx_5140_, v_env_5142_, v_mainModule_5147_, v_d_5143_, v___x_5149_, v_act_5144_, v___x_5152_, v_sz_5153_, v___x_5154_, v___x_5150_);
lean_dec_ref(v___x_5152_);
lean_dec(v___x_5149_);
return v___x_5155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___boxed(lean_object* v_cctx_5156_, lean_object* v_ngen_5157_, lean_object* v_env_5158_, lean_object* v_d_5159_, lean_object* v_act_5160_, lean_object* v_a_5161_){
_start:
{
lean_object* v_res_5162_; 
v_res_5162_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_cctx_5156_, v_ngen_5157_, v_env_5158_, v_d_5159_, v_act_5160_);
lean_dec(v_d_5159_);
return v_res_5162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(lean_object* v_00_u03b1_5163_, lean_object* v_cctx_5164_, lean_object* v_ngen_5165_, lean_object* v_env_5166_, lean_object* v_d_5167_, lean_object* v_act_5168_){
_start:
{
lean_object* v___x_5170_; 
v___x_5170_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_cctx_5164_, v_ngen_5165_, v_env_5166_, v_d_5167_, v_act_5168_);
return v___x_5170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___boxed(lean_object* v_00_u03b1_5171_, lean_object* v_cctx_5172_, lean_object* v_ngen_5173_, lean_object* v_env_5174_, lean_object* v_d_5175_, lean_object* v_act_5176_, lean_object* v_a_5177_){
_start:
{
lean_object* v_res_5178_; 
v_res_5178_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(v_00_u03b1_5171_, v_cctx_5172_, v_ngen_5173_, v_env_5174_, v_d_5175_, v_act_5176_);
lean_dec(v_d_5175_);
return v_res_5178_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(lean_object* v_00_u03b1_5179_, lean_object* v_cctx_5180_, lean_object* v_env_5181_, lean_object* v_modName_5182_, lean_object* v_d_5183_, lean_object* v_val_5184_, lean_object* v_act_5185_, lean_object* v_as_5186_, size_t v_sz_5187_, size_t v_i_5188_, lean_object* v_b_5189_){
_start:
{
lean_object* v___x_5191_; 
v___x_5191_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(v_cctx_5180_, v_env_5181_, v_modName_5182_, v_d_5183_, v_val_5184_, v_act_5185_, v_as_5186_, v_sz_5187_, v_i_5188_, v_b_5189_);
return v___x_5191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___boxed(lean_object* v_00_u03b1_5192_, lean_object* v_cctx_5193_, lean_object* v_env_5194_, lean_object* v_modName_5195_, lean_object* v_d_5196_, lean_object* v_val_5197_, lean_object* v_act_5198_, lean_object* v_as_5199_, lean_object* v_sz_5200_, lean_object* v_i_5201_, lean_object* v_b_5202_, lean_object* v___y_5203_){
_start:
{
size_t v_sz_boxed_5204_; size_t v_i_boxed_5205_; lean_object* v_res_5206_; 
v_sz_boxed_5204_ = lean_unbox_usize(v_sz_5200_);
lean_dec(v_sz_5200_);
v_i_boxed_5205_ = lean_unbox_usize(v_i_5201_);
lean_dec(v_i_5201_);
v_res_5206_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(v_00_u03b1_5192_, v_cctx_5193_, v_env_5194_, v_modName_5195_, v_d_5196_, v_val_5197_, v_act_5198_, v_as_5199_, v_sz_boxed_5204_, v_i_boxed_5205_, v_b_5202_);
lean_dec_ref(v_as_5199_);
lean_dec(v_val_5197_);
lean_dec(v_d_5196_);
return v_res_5206_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(lean_object* v_x_5207_, lean_object* v_x_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_, lean_object* v___y_5212_){
_start:
{
if (lean_obj_tag(v_x_5208_) == 0)
{
lean_object* v___x_5214_; 
v___x_5214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5214_, 0, v_x_5207_);
return v___x_5214_;
}
else
{
lean_object* v_head_5215_; lean_object* v_tail_5216_; lean_object* v___x_5217_; 
v_head_5215_ = lean_ctor_get(v_x_5208_, 0);
lean_inc(v_head_5215_);
v_tail_5216_ = lean_ctor_get(v_x_5208_, 1);
lean_inc(v_tail_5216_);
lean_dec_ref_known(v_x_5208_, 2);
v___x_5217_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_x_5207_, v_head_5215_, v___y_5209_, v___y_5210_, v___y_5211_, v___y_5212_);
if (lean_obj_tag(v___x_5217_) == 0)
{
lean_object* v_a_5218_; 
v_a_5218_ = lean_ctor_get(v___x_5217_, 0);
lean_inc(v_a_5218_);
lean_dec_ref_known(v___x_5217_, 1);
v_x_5207_ = v_a_5218_;
v_x_5208_ = v_tail_5216_;
goto _start;
}
else
{
lean_dec(v_tail_5216_);
return v___x_5217_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg___boxed(lean_object* v_x_5220_, lean_object* v_x_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_, lean_object* v___y_5224_, lean_object* v___y_5225_, lean_object* v___y_5226_){
_start:
{
lean_object* v_res_5227_; 
v_res_5227_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_x_5220_, v_x_5221_, v___y_5222_, v___y_5223_, v___y_5224_, v___y_5225_);
lean_dec(v___y_5225_);
lean_dec_ref(v___y_5224_);
lean_dec(v___y_5223_);
lean_dec_ref(v___y_5222_);
return v_res_5227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(lean_object* v_t_5228_, lean_object* v_keys_5229_, lean_object* v_a_5230_, lean_object* v_a_5231_, lean_object* v_a_5232_, lean_object* v_a_5233_){
_start:
{
lean_object* v___x_5235_; 
v___x_5235_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_t_5228_, v_keys_5229_, v_a_5230_, v_a_5231_, v_a_5232_, v_a_5233_);
return v___x_5235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg___boxed(lean_object* v_t_5236_, lean_object* v_keys_5237_, lean_object* v_a_5238_, lean_object* v_a_5239_, lean_object* v_a_5240_, lean_object* v_a_5241_, lean_object* v_a_5242_){
_start:
{
lean_object* v_res_5243_; 
v_res_5243_ = l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(v_t_5236_, v_keys_5237_, v_a_5238_, v_a_5239_, v_a_5240_, v_a_5241_);
lean_dec(v_a_5241_);
lean_dec_ref(v_a_5240_);
lean_dec(v_a_5239_);
lean_dec_ref(v_a_5238_);
return v_res_5243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys(lean_object* v_00_u03b1_5244_, lean_object* v_t_5245_, lean_object* v_keys_5246_, lean_object* v_a_5247_, lean_object* v_a_5248_, lean_object* v_a_5249_, lean_object* v_a_5250_){
_start:
{
lean_object* v___x_5252_; 
v___x_5252_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_t_5245_, v_keys_5246_, v_a_5247_, v_a_5248_, v_a_5249_, v_a_5250_);
return v___x_5252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___boxed(lean_object* v_00_u03b1_5253_, lean_object* v_t_5254_, lean_object* v_keys_5255_, lean_object* v_a_5256_, lean_object* v_a_5257_, lean_object* v_a_5258_, lean_object* v_a_5259_, lean_object* v_a_5260_){
_start:
{
lean_object* v_res_5261_; 
v_res_5261_ = l_Lean_Meta_LazyDiscrTree_dropKeys(v_00_u03b1_5253_, v_t_5254_, v_keys_5255_, v_a_5256_, v_a_5257_, v_a_5258_, v_a_5259_);
lean_dec(v_a_5259_);
lean_dec_ref(v_a_5258_);
lean_dec(v_a_5257_);
lean_dec_ref(v_a_5256_);
return v_res_5261_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(lean_object* v_00_u03b1_5262_, lean_object* v_x_5263_, lean_object* v_x_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_, lean_object* v___y_5268_){
_start:
{
lean_object* v___x_5270_; 
v___x_5270_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_x_5263_, v_x_5264_, v___y_5265_, v___y_5266_, v___y_5267_, v___y_5268_);
return v___x_5270_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___boxed(lean_object* v_00_u03b1_5271_, lean_object* v_x_5272_, lean_object* v_x_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_){
_start:
{
lean_object* v_res_5279_; 
v_res_5279_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(v_00_u03b1_5271_, v_x_5272_, v_x_5273_, v___y_5274_, v___y_5275_, v___y_5276_, v___y_5277_);
lean_dec(v___y_5277_);
lean_dec_ref(v___y_5276_);
lean_dec(v___y_5275_);
lean_dec_ref(v___y_5274_);
return v_res_5279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(lean_object* v_as_5280_, size_t v_sz_5281_, size_t v_i_5282_, lean_object* v_b_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_){
_start:
{
uint8_t v___x_5290_; 
v___x_5290_ = lean_usize_dec_lt(v_i_5282_, v_sz_5281_);
if (v___x_5290_ == 0)
{
lean_object* v___x_5291_; 
v___x_5291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5291_, 0, v_b_5283_);
return v___x_5291_;
}
else
{
lean_object* v_a_5292_; lean_object* v___x_5293_; 
v_a_5292_ = lean_array_uget_borrowed(v_as_5280_, v_i_5282_);
v___x_5293_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5292_, v_b_5283_, v___y_5284_, v___y_5285_, v___y_5286_, v___y_5287_, v___y_5288_);
if (lean_obj_tag(v___x_5293_) == 0)
{
lean_object* v_a_5294_; lean_object* v___x_5296_; uint8_t v_isShared_5297_; uint8_t v_isSharedCheck_5306_; 
v_a_5294_ = lean_ctor_get(v___x_5293_, 0);
v_isSharedCheck_5306_ = !lean_is_exclusive(v___x_5293_);
if (v_isSharedCheck_5306_ == 0)
{
v___x_5296_ = v___x_5293_;
v_isShared_5297_ = v_isSharedCheck_5306_;
goto v_resetjp_5295_;
}
else
{
lean_inc(v_a_5294_);
lean_dec(v___x_5293_);
v___x_5296_ = lean_box(0);
v_isShared_5297_ = v_isSharedCheck_5306_;
goto v_resetjp_5295_;
}
v_resetjp_5295_:
{
if (lean_obj_tag(v_a_5294_) == 0)
{
lean_object* v_a_5298_; lean_object* v___x_5300_; 
v_a_5298_ = lean_ctor_get(v_a_5294_, 0);
lean_inc(v_a_5298_);
lean_dec_ref_known(v_a_5294_, 1);
if (v_isShared_5297_ == 0)
{
lean_ctor_set(v___x_5296_, 0, v_a_5298_);
v___x_5300_ = v___x_5296_;
goto v_reusejp_5299_;
}
else
{
lean_object* v_reuseFailAlloc_5301_; 
v_reuseFailAlloc_5301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5301_, 0, v_a_5298_);
v___x_5300_ = v_reuseFailAlloc_5301_;
goto v_reusejp_5299_;
}
v_reusejp_5299_:
{
return v___x_5300_;
}
}
else
{
lean_object* v_a_5302_; size_t v___x_5303_; size_t v___x_5304_; 
lean_del_object(v___x_5296_);
v_a_5302_ = lean_ctor_get(v_a_5294_, 0);
lean_inc(v_a_5302_);
lean_dec_ref_known(v_a_5294_, 1);
v___x_5303_ = ((size_t)1ULL);
v___x_5304_ = lean_usize_add(v_i_5282_, v___x_5303_);
v_i_5282_ = v___x_5304_;
v_b_5283_ = v_a_5302_;
goto _start;
}
}
}
else
{
lean_object* v_a_5307_; lean_object* v___x_5309_; uint8_t v_isShared_5310_; uint8_t v_isSharedCheck_5314_; 
v_a_5307_ = lean_ctor_get(v___x_5293_, 0);
v_isSharedCheck_5314_ = !lean_is_exclusive(v___x_5293_);
if (v_isSharedCheck_5314_ == 0)
{
v___x_5309_ = v___x_5293_;
v_isShared_5310_ = v_isSharedCheck_5314_;
goto v_resetjp_5308_;
}
else
{
lean_inc(v_a_5307_);
lean_dec(v___x_5293_);
v___x_5309_ = lean_box(0);
v_isShared_5310_ = v_isSharedCheck_5314_;
goto v_resetjp_5308_;
}
v_resetjp_5308_:
{
lean_object* v___x_5312_; 
if (v_isShared_5310_ == 0)
{
v___x_5312_ = v___x_5309_;
goto v_reusejp_5311_;
}
else
{
lean_object* v_reuseFailAlloc_5313_; 
v_reuseFailAlloc_5313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5313_, 0, v_a_5307_);
v___x_5312_ = v_reuseFailAlloc_5313_;
goto v_reusejp_5311_;
}
v_reusejp_5311_:
{
return v___x_5312_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(lean_object* v_next_5315_, lean_object* v_a_5316_, lean_object* v_a_5317_, lean_object* v_a_5318_, lean_object* v_a_5319_, lean_object* v_a_5320_){
_start:
{
lean_object* v___x_5322_; uint8_t v___x_5323_; 
v___x_5322_ = lean_unsigned_to_nat(0u);
v___x_5323_ = lean_nat_dec_eq(v_next_5315_, v___x_5322_);
if (v___x_5323_ == 0)
{
lean_object* v___x_5324_; 
v___x_5324_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_5315_, v_a_5316_, v_a_5317_, v_a_5318_, v_a_5319_, v_a_5320_);
if (lean_obj_tag(v___x_5324_) == 0)
{
lean_object* v_a_5325_; lean_object* v_snd_5326_; lean_object* v_fst_5327_; lean_object* v_fst_5328_; lean_object* v_snd_5329_; lean_object* v___x_5330_; 
v_a_5325_ = lean_ctor_get(v___x_5324_, 0);
lean_inc(v_a_5325_);
lean_dec_ref_known(v___x_5324_, 1);
v_snd_5326_ = lean_ctor_get(v_a_5325_, 1);
lean_inc(v_snd_5326_);
v_fst_5327_ = lean_ctor_get(v_a_5325_, 0);
lean_inc(v_fst_5327_);
lean_dec(v_a_5325_);
v_fst_5328_ = lean_ctor_get(v_snd_5326_, 0);
lean_inc(v_fst_5328_);
v_snd_5329_ = lean_ctor_get(v_snd_5326_, 1);
lean_inc(v_snd_5329_);
lean_dec(v_snd_5326_);
v___x_5330_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_fst_5328_, v_a_5316_, v_a_5317_, v_a_5318_, v_a_5319_, v_a_5320_);
if (lean_obj_tag(v___x_5330_) == 0)
{
lean_object* v_a_5331_; lean_object* v_buckets_5332_; lean_object* v___x_5333_; size_t v_sz_5334_; size_t v___x_5335_; lean_object* v___x_5336_; 
v_a_5331_ = lean_ctor_get(v___x_5330_, 0);
lean_inc(v_a_5331_);
lean_dec_ref_known(v___x_5330_, 1);
v_buckets_5332_ = lean_ctor_get(v_snd_5329_, 1);
v___x_5333_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v_sz_5334_ = lean_array_size(v_buckets_5332_);
v___x_5335_ = ((size_t)0ULL);
v___x_5336_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_buckets_5332_, v_sz_5334_, v___x_5335_, v___x_5333_, v_a_5316_, v_a_5317_, v_a_5318_, v_a_5319_, v_a_5320_);
if (lean_obj_tag(v___x_5336_) == 0)
{
lean_object* v_a_5337_; lean_object* v___x_5339_; uint8_t v_isShared_5340_; uint8_t v_isSharedCheck_5350_; 
v_a_5337_ = lean_ctor_get(v___x_5336_, 0);
v_isSharedCheck_5350_ = !lean_is_exclusive(v___x_5336_);
if (v_isSharedCheck_5350_ == 0)
{
v___x_5339_ = v___x_5336_;
v_isShared_5340_ = v_isSharedCheck_5350_;
goto v_resetjp_5338_;
}
else
{
lean_inc(v_a_5337_);
lean_dec(v___x_5336_);
v___x_5339_ = lean_box(0);
v_isShared_5340_ = v_isSharedCheck_5350_;
goto v_resetjp_5338_;
}
v_resetjp_5338_:
{
lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5348_; 
v___x_5341_ = lean_st_ref_take(v_a_5316_);
v___x_5342_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5342_, 0, v___x_5333_);
lean_ctor_set(v___x_5342_, 1, v_fst_5328_);
lean_ctor_set(v___x_5342_, 2, v_snd_5329_);
lean_ctor_set(v___x_5342_, 3, v___x_5333_);
v___x_5343_ = lean_array_set(v___x_5341_, v_next_5315_, v___x_5342_);
v___x_5344_ = lean_st_ref_put(v_a_5316_, v___x_5343_);
v___x_5345_ = l_Array_append___redArg(v_fst_5327_, v_a_5331_);
lean_dec(v_a_5331_);
v___x_5346_ = l_Array_append___redArg(v___x_5345_, v_a_5337_);
lean_dec(v_a_5337_);
if (v_isShared_5340_ == 0)
{
lean_ctor_set(v___x_5339_, 0, v___x_5346_);
v___x_5348_ = v___x_5339_;
goto v_reusejp_5347_;
}
else
{
lean_object* v_reuseFailAlloc_5349_; 
v_reuseFailAlloc_5349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5349_, 0, v___x_5346_);
v___x_5348_ = v_reuseFailAlloc_5349_;
goto v_reusejp_5347_;
}
v_reusejp_5347_:
{
return v___x_5348_;
}
}
}
else
{
lean_dec(v_a_5331_);
lean_dec(v_snd_5329_);
lean_dec(v_fst_5328_);
lean_dec(v_fst_5327_);
return v___x_5336_;
}
}
else
{
lean_dec(v_snd_5329_);
lean_dec(v_fst_5328_);
lean_dec(v_fst_5327_);
return v___x_5330_;
}
}
else
{
lean_object* v_a_5351_; lean_object* v___x_5353_; uint8_t v_isShared_5354_; uint8_t v_isSharedCheck_5358_; 
v_a_5351_ = lean_ctor_get(v___x_5324_, 0);
v_isSharedCheck_5358_ = !lean_is_exclusive(v___x_5324_);
if (v_isSharedCheck_5358_ == 0)
{
v___x_5353_ = v___x_5324_;
v_isShared_5354_ = v_isSharedCheck_5358_;
goto v_resetjp_5352_;
}
else
{
lean_inc(v_a_5351_);
lean_dec(v___x_5324_);
v___x_5353_ = lean_box(0);
v_isShared_5354_ = v_isSharedCheck_5358_;
goto v_resetjp_5352_;
}
v_resetjp_5352_:
{
lean_object* v___x_5356_; 
if (v_isShared_5354_ == 0)
{
v___x_5356_ = v___x_5353_;
goto v_reusejp_5355_;
}
else
{
lean_object* v_reuseFailAlloc_5357_; 
v_reuseFailAlloc_5357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5357_, 0, v_a_5351_);
v___x_5356_ = v_reuseFailAlloc_5357_;
goto v_reusejp_5355_;
}
v_reusejp_5355_:
{
return v___x_5356_;
}
}
}
}
else
{
lean_object* v___x_5359_; lean_object* v___x_5360_; 
v___x_5359_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5360_, 0, v___x_5359_);
return v___x_5360_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(lean_object* v_a_5361_, lean_object* v_a_5362_, lean_object* v___y_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_){
_start:
{
if (lean_obj_tag(v_a_5361_) == 0)
{
lean_object* v___x_5369_; lean_object* v___x_5370_; 
v___x_5369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5369_, 0, v_a_5362_);
v___x_5370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5370_, 0, v___x_5369_);
return v___x_5370_;
}
else
{
lean_object* v_value_5371_; lean_object* v_tail_5372_; lean_object* v___x_5373_; 
v_value_5371_ = lean_ctor_get(v_a_5361_, 1);
v_tail_5372_ = lean_ctor_get(v_a_5361_, 2);
v___x_5373_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_value_5371_, v___y_5363_, v___y_5364_, v___y_5365_, v___y_5366_, v___y_5367_);
if (lean_obj_tag(v___x_5373_) == 0)
{
lean_object* v_a_5374_; lean_object* v___x_5375_; 
v_a_5374_ = lean_ctor_get(v___x_5373_, 0);
lean_inc(v_a_5374_);
lean_dec_ref_known(v___x_5373_, 1);
v___x_5375_ = l_Array_append___redArg(v_a_5362_, v_a_5374_);
lean_dec(v_a_5374_);
v_a_5361_ = v_tail_5372_;
v_a_5362_ = v___x_5375_;
goto _start;
}
else
{
lean_object* v_a_5377_; lean_object* v___x_5379_; uint8_t v_isShared_5380_; uint8_t v_isSharedCheck_5384_; 
lean_dec_ref(v_a_5362_);
v_a_5377_ = lean_ctor_get(v___x_5373_, 0);
v_isSharedCheck_5384_ = !lean_is_exclusive(v___x_5373_);
if (v_isSharedCheck_5384_ == 0)
{
v___x_5379_ = v___x_5373_;
v_isShared_5380_ = v_isSharedCheck_5384_;
goto v_resetjp_5378_;
}
else
{
lean_inc(v_a_5377_);
lean_dec(v___x_5373_);
v___x_5379_ = lean_box(0);
v_isShared_5380_ = v_isSharedCheck_5384_;
goto v_resetjp_5378_;
}
v_resetjp_5378_:
{
lean_object* v___x_5382_; 
if (v_isShared_5380_ == 0)
{
v___x_5382_ = v___x_5379_;
goto v_reusejp_5381_;
}
else
{
lean_object* v_reuseFailAlloc_5383_; 
v_reuseFailAlloc_5383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5383_, 0, v_a_5377_);
v___x_5382_ = v_reuseFailAlloc_5383_;
goto v_reusejp_5381_;
}
v_reusejp_5381_:
{
return v___x_5382_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg___boxed(lean_object* v_a_5385_, lean_object* v_a_5386_, lean_object* v___y_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_){
_start:
{
lean_object* v_res_5393_; 
v_res_5393_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5385_, v_a_5386_, v___y_5387_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_);
lean_dec(v___y_5391_);
lean_dec_ref(v___y_5390_);
lean_dec(v___y_5389_);
lean_dec_ref(v___y_5388_);
lean_dec(v___y_5387_);
lean_dec(v_a_5385_);
return v_res_5393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg___boxed(lean_object* v_as_5394_, lean_object* v_sz_5395_, lean_object* v_i_5396_, lean_object* v_b_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_, lean_object* v___y_5400_, lean_object* v___y_5401_, lean_object* v___y_5402_, lean_object* v___y_5403_){
_start:
{
size_t v_sz_boxed_5404_; size_t v_i_boxed_5405_; lean_object* v_res_5406_; 
v_sz_boxed_5404_ = lean_unbox_usize(v_sz_5395_);
lean_dec(v_sz_5395_);
v_i_boxed_5405_ = lean_unbox_usize(v_i_5396_);
lean_dec(v_i_5396_);
v_res_5406_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_as_5394_, v_sz_boxed_5404_, v_i_boxed_5405_, v_b_5397_, v___y_5398_, v___y_5399_, v___y_5400_, v___y_5401_, v___y_5402_);
lean_dec(v___y_5402_);
lean_dec_ref(v___y_5401_);
lean_dec(v___y_5400_);
lean_dec_ref(v___y_5399_);
lean_dec(v___y_5398_);
lean_dec_ref(v_as_5394_);
return v_res_5406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg___boxed(lean_object* v_next_5407_, lean_object* v_a_5408_, lean_object* v_a_5409_, lean_object* v_a_5410_, lean_object* v_a_5411_, lean_object* v_a_5412_, lean_object* v_a_5413_){
_start:
{
lean_object* v_res_5414_; 
v_res_5414_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5407_, v_a_5408_, v_a_5409_, v_a_5410_, v_a_5411_, v_a_5412_);
lean_dec(v_a_5412_);
lean_dec_ref(v_a_5411_);
lean_dec(v_a_5410_);
lean_dec_ref(v_a_5409_);
lean_dec(v_a_5408_);
lean_dec(v_next_5407_);
return v_res_5414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(lean_object* v_00_u03b1_5415_, lean_object* v_next_5416_, lean_object* v_a_5417_, lean_object* v_a_5418_, lean_object* v_a_5419_, lean_object* v_a_5420_, lean_object* v_a_5421_){
_start:
{
lean_object* v___x_5423_; 
v___x_5423_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5416_, v_a_5417_, v_a_5418_, v_a_5419_, v_a_5420_, v_a_5421_);
return v___x_5423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___boxed(lean_object* v_00_u03b1_5424_, lean_object* v_next_5425_, lean_object* v_a_5426_, lean_object* v_a_5427_, lean_object* v_a_5428_, lean_object* v_a_5429_, lean_object* v_a_5430_, lean_object* v_a_5431_){
_start:
{
lean_object* v_res_5432_; 
v_res_5432_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(v_00_u03b1_5424_, v_next_5425_, v_a_5426_, v_a_5427_, v_a_5428_, v_a_5429_, v_a_5430_);
lean_dec(v_a_5430_);
lean_dec_ref(v_a_5429_);
lean_dec(v_a_5428_);
lean_dec_ref(v_a_5427_);
lean_dec(v_a_5426_);
lean_dec(v_next_5425_);
return v_res_5432_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(lean_object* v_00_u03b1_5433_, lean_object* v_a_5434_, lean_object* v_a_5435_, lean_object* v___y_5436_, lean_object* v___y_5437_, lean_object* v___y_5438_, lean_object* v___y_5439_, lean_object* v___y_5440_){
_start:
{
lean_object* v___x_5442_; 
v___x_5442_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5434_, v_a_5435_, v___y_5436_, v___y_5437_, v___y_5438_, v___y_5439_, v___y_5440_);
return v___x_5442_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___boxed(lean_object* v_00_u03b1_5443_, lean_object* v_a_5444_, lean_object* v_a_5445_, lean_object* v___y_5446_, lean_object* v___y_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_){
_start:
{
lean_object* v_res_5452_; 
v_res_5452_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(v_00_u03b1_5443_, v_a_5444_, v_a_5445_, v___y_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_);
lean_dec(v___y_5450_);
lean_dec_ref(v___y_5449_);
lean_dec(v___y_5448_);
lean_dec_ref(v___y_5447_);
lean_dec(v___y_5446_);
lean_dec(v_a_5444_);
return v_res_5452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(lean_object* v_00_u03b1_5453_, lean_object* v_as_5454_, size_t v_sz_5455_, size_t v_i_5456_, lean_object* v_b_5457_, lean_object* v___y_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_){
_start:
{
lean_object* v___x_5464_; 
v___x_5464_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_as_5454_, v_sz_5455_, v_i_5456_, v_b_5457_, v___y_5458_, v___y_5459_, v___y_5460_, v___y_5461_, v___y_5462_);
return v___x_5464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___boxed(lean_object* v_00_u03b1_5465_, lean_object* v_as_5466_, lean_object* v_sz_5467_, lean_object* v_i_5468_, lean_object* v_b_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_, lean_object* v___y_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_){
_start:
{
size_t v_sz_boxed_5476_; size_t v_i_boxed_5477_; lean_object* v_res_5478_; 
v_sz_boxed_5476_ = lean_unbox_usize(v_sz_5467_);
lean_dec(v_sz_5467_);
v_i_boxed_5477_ = lean_unbox_usize(v_i_5468_);
lean_dec(v_i_5468_);
v_res_5478_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(v_00_u03b1_5465_, v_as_5466_, v_sz_boxed_5476_, v_i_boxed_5477_, v_b_5469_, v___y_5470_, v___y_5471_, v___y_5472_, v___y_5473_, v___y_5474_);
lean_dec(v___y_5474_);
lean_dec_ref(v___y_5473_);
lean_dec(v___y_5472_);
lean_dec_ref(v___y_5471_);
lean_dec(v___y_5470_);
lean_dec_ref(v_as_5466_);
return v_res_5478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(lean_object* v_next_5479_, lean_object* v_rest_5480_, lean_object* v_a_5481_, lean_object* v_a_5482_, lean_object* v_a_5483_, lean_object* v_a_5484_, lean_object* v_a_5485_){
_start:
{
lean_object* v___x_5487_; uint8_t v___x_5488_; 
v___x_5487_ = lean_unsigned_to_nat(0u);
v___x_5488_ = lean_nat_dec_eq(v_next_5479_, v___x_5487_);
if (v___x_5488_ == 0)
{
lean_object* v___x_5489_; 
v___x_5489_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_5479_, v_a_5481_, v_a_5482_, v_a_5483_, v_a_5484_, v_a_5485_);
if (lean_obj_tag(v___x_5489_) == 0)
{
lean_object* v_a_5490_; lean_object* v_snd_5491_; 
v_a_5490_ = lean_ctor_get(v___x_5489_, 0);
lean_inc(v_a_5490_);
lean_dec_ref_known(v___x_5489_, 1);
v_snd_5491_ = lean_ctor_get(v_a_5490_, 1);
lean_inc(v_snd_5491_);
lean_dec(v_a_5490_);
if (lean_obj_tag(v_rest_5480_) == 0)
{
lean_object* v___x_5492_; 
lean_dec(v_snd_5491_);
v___x_5492_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5479_, v_a_5481_, v_a_5482_, v_a_5483_, v_a_5484_, v_a_5485_);
lean_dec(v_next_5479_);
return v___x_5492_;
}
else
{
lean_object* v_fst_5493_; lean_object* v_snd_5494_; lean_object* v_head_5495_; lean_object* v_tail_5496_; lean_object* v___x_5497_; uint8_t v___x_5498_; 
lean_dec(v_next_5479_);
v_fst_5493_ = lean_ctor_get(v_snd_5491_, 0);
lean_inc(v_fst_5493_);
v_snd_5494_ = lean_ctor_get(v_snd_5491_, 1);
lean_inc(v_snd_5494_);
lean_dec(v_snd_5491_);
v_head_5495_ = lean_ctor_get(v_rest_5480_, 0);
v_tail_5496_ = lean_ctor_get(v_rest_5480_, 1);
v___x_5497_ = lean_box(3);
v___x_5498_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_head_5495_, v___x_5497_);
if (v___x_5498_ == 0)
{
lean_object* v___x_5499_; 
lean_dec(v_fst_5493_);
v___x_5499_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_snd_5494_, v_head_5495_, v___x_5487_);
lean_dec(v_snd_5494_);
v_next_5479_ = v___x_5499_;
v_rest_5480_ = v_tail_5496_;
goto _start;
}
else
{
lean_dec(v_snd_5494_);
v_next_5479_ = v_fst_5493_;
v_rest_5480_ = v_tail_5496_;
goto _start;
}
}
}
else
{
lean_object* v_a_5502_; lean_object* v___x_5504_; uint8_t v_isShared_5505_; uint8_t v_isSharedCheck_5509_; 
lean_dec(v_next_5479_);
v_a_5502_ = lean_ctor_get(v___x_5489_, 0);
v_isSharedCheck_5509_ = !lean_is_exclusive(v___x_5489_);
if (v_isSharedCheck_5509_ == 0)
{
v___x_5504_ = v___x_5489_;
v_isShared_5505_ = v_isSharedCheck_5509_;
goto v_resetjp_5503_;
}
else
{
lean_inc(v_a_5502_);
lean_dec(v___x_5489_);
v___x_5504_ = lean_box(0);
v_isShared_5505_ = v_isSharedCheck_5509_;
goto v_resetjp_5503_;
}
v_resetjp_5503_:
{
lean_object* v___x_5507_; 
if (v_isShared_5505_ == 0)
{
v___x_5507_ = v___x_5504_;
goto v_reusejp_5506_;
}
else
{
lean_object* v_reuseFailAlloc_5508_; 
v_reuseFailAlloc_5508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5508_, 0, v_a_5502_);
v___x_5507_ = v_reuseFailAlloc_5508_;
goto v_reusejp_5506_;
}
v_reusejp_5506_:
{
return v___x_5507_;
}
}
}
}
else
{
lean_object* v___x_5510_; lean_object* v___x_5511_; 
lean_dec(v_next_5479_);
v___x_5510_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5511_, 0, v___x_5510_);
return v___x_5511_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg___boxed(lean_object* v_next_5512_, lean_object* v_rest_5513_, lean_object* v_a_5514_, lean_object* v_a_5515_, lean_object* v_a_5516_, lean_object* v_a_5517_, lean_object* v_a_5518_, lean_object* v_a_5519_){
_start:
{
lean_object* v_res_5520_; 
v_res_5520_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(v_next_5512_, v_rest_5513_, v_a_5514_, v_a_5515_, v_a_5516_, v_a_5517_, v_a_5518_);
lean_dec(v_a_5518_);
lean_dec_ref(v_a_5517_);
lean_dec(v_a_5516_);
lean_dec_ref(v_a_5515_);
lean_dec(v_a_5514_);
lean_dec(v_rest_5513_);
return v_res_5520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux(lean_object* v_00_u03b1_5521_, lean_object* v_next_5522_, lean_object* v_rest_5523_, lean_object* v_a_5524_, lean_object* v_a_5525_, lean_object* v_a_5526_, lean_object* v_a_5527_, lean_object* v_a_5528_){
_start:
{
lean_object* v___x_5530_; 
v___x_5530_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(v_next_5522_, v_rest_5523_, v_a_5524_, v_a_5525_, v_a_5526_, v_a_5527_, v_a_5528_);
return v___x_5530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed(lean_object* v_00_u03b1_5531_, lean_object* v_next_5532_, lean_object* v_rest_5533_, lean_object* v_a_5534_, lean_object* v_a_5535_, lean_object* v_a_5536_, lean_object* v_a_5537_, lean_object* v_a_5538_, lean_object* v_a_5539_){
_start:
{
lean_object* v_res_5540_; 
v_res_5540_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux(v_00_u03b1_5531_, v_next_5532_, v_rest_5533_, v_a_5534_, v_a_5535_, v_a_5536_, v_a_5537_, v_a_5538_);
lean_dec(v_a_5538_);
lean_dec_ref(v_a_5537_);
lean_dec(v_a_5536_);
lean_dec_ref(v_a_5535_);
lean_dec(v_a_5534_);
lean_dec(v_rest_5533_);
return v_res_5540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg(lean_object* v_t_5541_, lean_object* v_path_5542_, lean_object* v_a_5543_, lean_object* v_a_5544_, lean_object* v_a_5545_, lean_object* v_a_5546_){
_start:
{
if (lean_obj_tag(v_path_5542_) == 0)
{
lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; 
v___x_5548_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5549_, 0, v___x_5548_);
lean_ctor_set(v___x_5549_, 1, v_t_5541_);
v___x_5550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5550_, 0, v___x_5549_);
return v___x_5550_;
}
else
{
lean_object* v_head_5551_; lean_object* v_tail_5552_; lean_object* v_roots_5553_; lean_object* v___x_5554_; lean_object* v_idx_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; 
v_head_5551_ = lean_ctor_get(v_path_5542_, 0);
lean_inc(v_head_5551_);
v_tail_5552_ = lean_ctor_get(v_path_5542_, 1);
lean_inc(v_tail_5552_);
lean_dec_ref_known(v_path_5542_, 2);
v_roots_5553_ = lean_ctor_get(v_t_5541_, 1);
v___x_5554_ = lean_unsigned_to_nat(0u);
v_idx_5555_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_roots_5553_, v_head_5551_, v___x_5554_);
lean_dec(v_head_5551_);
v___x_5556_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed), 9, 3);
lean_closure_set(v___x_5556_, 0, lean_box(0));
lean_closure_set(v___x_5556_, 1, v_idx_5555_);
lean_closure_set(v___x_5556_, 2, v_tail_5552_);
v___x_5557_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_t_5541_, v___x_5556_, v_a_5543_, v_a_5544_, v_a_5545_, v_a_5546_);
return v___x_5557_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg___boxed(lean_object* v_t_5558_, lean_object* v_path_5559_, lean_object* v_a_5560_, lean_object* v_a_5561_, lean_object* v_a_5562_, lean_object* v_a_5563_, lean_object* v_a_5564_){
_start:
{
lean_object* v_res_5565_; 
v_res_5565_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_t_5558_, v_path_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_);
lean_dec(v_a_5563_);
lean_dec_ref(v_a_5562_);
lean_dec(v_a_5561_);
lean_dec_ref(v_a_5560_);
return v_res_5565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey(lean_object* v_00_u03b1_5566_, lean_object* v_t_5567_, lean_object* v_path_5568_, lean_object* v_a_5569_, lean_object* v_a_5570_, lean_object* v_a_5571_, lean_object* v_a_5572_){
_start:
{
lean_object* v___x_5574_; 
v___x_5574_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_t_5567_, v_path_5568_, v_a_5569_, v_a_5570_, v_a_5571_, v_a_5572_);
return v___x_5574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___boxed(lean_object* v_00_u03b1_5575_, lean_object* v_t_5576_, lean_object* v_path_5577_, lean_object* v_a_5578_, lean_object* v_a_5579_, lean_object* v_a_5580_, lean_object* v_a_5581_, lean_object* v_a_5582_){
_start:
{
lean_object* v_res_5583_; 
v_res_5583_ = l_Lean_Meta_LazyDiscrTree_extractKey(v_00_u03b1_5575_, v_t_5576_, v_path_5577_, v_a_5578_, v_a_5579_, v_a_5580_, v_a_5581_);
lean_dec(v_a_5581_);
lean_dec_ref(v_a_5580_);
lean_dec(v_a_5579_);
lean_dec_ref(v_a_5578_);
return v_res_5583_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(lean_object* v_as_x27_5584_, lean_object* v_b_5585_, lean_object* v___y_5586_, lean_object* v___y_5587_, lean_object* v___y_5588_, lean_object* v___y_5589_){
_start:
{
if (lean_obj_tag(v_as_x27_5584_) == 0)
{
lean_object* v___x_5591_; 
v___x_5591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5591_, 0, v_b_5585_);
return v___x_5591_;
}
else
{
lean_object* v_head_5592_; lean_object* v_tail_5593_; lean_object* v_fst_5594_; lean_object* v_snd_5595_; lean_object* v___x_5596_; 
v_head_5592_ = lean_ctor_get(v_as_x27_5584_, 0);
v_tail_5593_ = lean_ctor_get(v_as_x27_5584_, 1);
v_fst_5594_ = lean_ctor_get(v_b_5585_, 0);
lean_inc(v_fst_5594_);
v_snd_5595_ = lean_ctor_get(v_b_5585_, 1);
lean_inc(v_snd_5595_);
lean_dec_ref(v_b_5585_);
lean_inc(v_head_5592_);
v___x_5596_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_snd_5595_, v_head_5592_, v___y_5586_, v___y_5587_, v___y_5588_, v___y_5589_);
if (lean_obj_tag(v___x_5596_) == 0)
{
lean_object* v_a_5597_; lean_object* v_fst_5598_; lean_object* v_snd_5599_; lean_object* v___x_5601_; uint8_t v_isShared_5602_; uint8_t v_isSharedCheck_5608_; 
v_a_5597_ = lean_ctor_get(v___x_5596_, 0);
lean_inc(v_a_5597_);
lean_dec_ref_known(v___x_5596_, 1);
v_fst_5598_ = lean_ctor_get(v_a_5597_, 0);
v_snd_5599_ = lean_ctor_get(v_a_5597_, 1);
v_isSharedCheck_5608_ = !lean_is_exclusive(v_a_5597_);
if (v_isSharedCheck_5608_ == 0)
{
v___x_5601_ = v_a_5597_;
v_isShared_5602_ = v_isSharedCheck_5608_;
goto v_resetjp_5600_;
}
else
{
lean_inc(v_snd_5599_);
lean_inc(v_fst_5598_);
lean_dec(v_a_5597_);
v___x_5601_ = lean_box(0);
v_isShared_5602_ = v_isSharedCheck_5608_;
goto v_resetjp_5600_;
}
v_resetjp_5600_:
{
lean_object* v___x_5603_; lean_object* v___x_5605_; 
v___x_5603_ = l_Array_append___redArg(v_fst_5594_, v_fst_5598_);
lean_dec(v_fst_5598_);
if (v_isShared_5602_ == 0)
{
lean_ctor_set(v___x_5601_, 0, v___x_5603_);
v___x_5605_ = v___x_5601_;
goto v_reusejp_5604_;
}
else
{
lean_object* v_reuseFailAlloc_5607_; 
v_reuseFailAlloc_5607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5607_, 0, v___x_5603_);
lean_ctor_set(v_reuseFailAlloc_5607_, 1, v_snd_5599_);
v___x_5605_ = v_reuseFailAlloc_5607_;
goto v_reusejp_5604_;
}
v_reusejp_5604_:
{
v_as_x27_5584_ = v_tail_5593_;
v_b_5585_ = v___x_5605_;
goto _start;
}
}
}
else
{
lean_dec(v_fst_5594_);
return v___x_5596_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg___boxed(lean_object* v_as_x27_5609_, lean_object* v_b_5610_, lean_object* v___y_5611_, lean_object* v___y_5612_, lean_object* v___y_5613_, lean_object* v___y_5614_, lean_object* v___y_5615_){
_start:
{
lean_object* v_res_5616_; 
v_res_5616_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_as_x27_5609_, v_b_5610_, v___y_5611_, v___y_5612_, v___y_5613_, v___y_5614_);
lean_dec(v___y_5614_);
lean_dec_ref(v___y_5613_);
lean_dec(v___y_5612_);
lean_dec_ref(v___y_5611_);
lean_dec(v_as_x27_5609_);
return v_res_5616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(lean_object* v_t_5617_, lean_object* v_keys_5618_, lean_object* v_a_5619_, lean_object* v_a_5620_, lean_object* v_a_5621_, lean_object* v_a_5622_){
_start:
{
lean_object* v_allExtracted_5624_; lean_object* v___x_5625_; lean_object* v___x_5626_; 
v_allExtracted_5624_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___x_5625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5625_, 0, v_allExtracted_5624_);
lean_ctor_set(v___x_5625_, 1, v_t_5617_);
v___x_5626_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_keys_5618_, v___x_5625_, v_a_5619_, v_a_5620_, v_a_5621_, v_a_5622_);
if (lean_obj_tag(v___x_5626_) == 0)
{
lean_object* v_a_5627_; lean_object* v___x_5629_; uint8_t v_isShared_5630_; uint8_t v_isSharedCheck_5643_; 
v_a_5627_ = lean_ctor_get(v___x_5626_, 0);
v_isSharedCheck_5643_ = !lean_is_exclusive(v___x_5626_);
if (v_isSharedCheck_5643_ == 0)
{
v___x_5629_ = v___x_5626_;
v_isShared_5630_ = v_isSharedCheck_5643_;
goto v_resetjp_5628_;
}
else
{
lean_inc(v_a_5627_);
lean_dec(v___x_5626_);
v___x_5629_ = lean_box(0);
v_isShared_5630_ = v_isSharedCheck_5643_;
goto v_resetjp_5628_;
}
v_resetjp_5628_:
{
lean_object* v_fst_5631_; lean_object* v_snd_5632_; lean_object* v___x_5634_; uint8_t v_isShared_5635_; uint8_t v_isSharedCheck_5642_; 
v_fst_5631_ = lean_ctor_get(v_a_5627_, 0);
v_snd_5632_ = lean_ctor_get(v_a_5627_, 1);
v_isSharedCheck_5642_ = !lean_is_exclusive(v_a_5627_);
if (v_isSharedCheck_5642_ == 0)
{
v___x_5634_ = v_a_5627_;
v_isShared_5635_ = v_isSharedCheck_5642_;
goto v_resetjp_5633_;
}
else
{
lean_inc(v_snd_5632_);
lean_inc(v_fst_5631_);
lean_dec(v_a_5627_);
v___x_5634_ = lean_box(0);
v_isShared_5635_ = v_isSharedCheck_5642_;
goto v_resetjp_5633_;
}
v_resetjp_5633_:
{
lean_object* v___x_5637_; 
if (v_isShared_5635_ == 0)
{
v___x_5637_ = v___x_5634_;
goto v_reusejp_5636_;
}
else
{
lean_object* v_reuseFailAlloc_5641_; 
v_reuseFailAlloc_5641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5641_, 0, v_fst_5631_);
lean_ctor_set(v_reuseFailAlloc_5641_, 1, v_snd_5632_);
v___x_5637_ = v_reuseFailAlloc_5641_;
goto v_reusejp_5636_;
}
v_reusejp_5636_:
{
lean_object* v___x_5639_; 
if (v_isShared_5630_ == 0)
{
lean_ctor_set(v___x_5629_, 0, v___x_5637_);
v___x_5639_ = v___x_5629_;
goto v_reusejp_5638_;
}
else
{
lean_object* v_reuseFailAlloc_5640_; 
v_reuseFailAlloc_5640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5640_, 0, v___x_5637_);
v___x_5639_ = v_reuseFailAlloc_5640_;
goto v_reusejp_5638_;
}
v_reusejp_5638_:
{
return v___x_5639_;
}
}
}
}
}
else
{
return v___x_5626_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg___boxed(lean_object* v_t_5644_, lean_object* v_keys_5645_, lean_object* v_a_5646_, lean_object* v_a_5647_, lean_object* v_a_5648_, lean_object* v_a_5649_, lean_object* v_a_5650_){
_start:
{
lean_object* v_res_5651_; 
v_res_5651_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_t_5644_, v_keys_5645_, v_a_5646_, v_a_5647_, v_a_5648_, v_a_5649_);
lean_dec(v_a_5649_);
lean_dec_ref(v_a_5648_);
lean_dec(v_a_5647_);
lean_dec_ref(v_a_5646_);
lean_dec(v_keys_5645_);
return v_res_5651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys(lean_object* v_00_u03b1_5652_, lean_object* v_t_5653_, lean_object* v_keys_5654_, lean_object* v_a_5655_, lean_object* v_a_5656_, lean_object* v_a_5657_, lean_object* v_a_5658_){
_start:
{
lean_object* v___x_5660_; 
v___x_5660_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_t_5653_, v_keys_5654_, v_a_5655_, v_a_5656_, v_a_5657_, v_a_5658_);
return v___x_5660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___boxed(lean_object* v_00_u03b1_5661_, lean_object* v_t_5662_, lean_object* v_keys_5663_, lean_object* v_a_5664_, lean_object* v_a_5665_, lean_object* v_a_5666_, lean_object* v_a_5667_, lean_object* v_a_5668_){
_start:
{
lean_object* v_res_5669_; 
v_res_5669_ = l_Lean_Meta_LazyDiscrTree_extractKeys(v_00_u03b1_5661_, v_t_5662_, v_keys_5663_, v_a_5664_, v_a_5665_, v_a_5666_, v_a_5667_);
lean_dec(v_a_5667_);
lean_dec_ref(v_a_5666_);
lean_dec(v_a_5665_);
lean_dec_ref(v_a_5664_);
lean_dec(v_keys_5663_);
return v_res_5669_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(lean_object* v_00_u03b1_5670_, lean_object* v_as_5671_, lean_object* v_as_x27_5672_, lean_object* v_b_5673_, lean_object* v_a_5674_, lean_object* v___y_5675_, lean_object* v___y_5676_, lean_object* v___y_5677_, lean_object* v___y_5678_){
_start:
{
lean_object* v___x_5680_; 
v___x_5680_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_as_x27_5672_, v_b_5673_, v___y_5675_, v___y_5676_, v___y_5677_, v___y_5678_);
return v___x_5680_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___boxed(lean_object* v_00_u03b1_5681_, lean_object* v_as_5682_, lean_object* v_as_x27_5683_, lean_object* v_b_5684_, lean_object* v_a_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_){
_start:
{
lean_object* v_res_5691_; 
v_res_5691_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(v_00_u03b1_5681_, v_as_5682_, v_as_x27_5683_, v_b_5684_, v_a_5685_, v___y_5686_, v___y_5687_, v___y_5688_, v___y_5689_);
lean_dec(v___y_5689_);
lean_dec_ref(v___y_5688_);
lean_dec(v___y_5687_);
lean_dec_ref(v___y_5686_);
lean_dec(v_as_x27_5683_);
lean_dec(v_as_5682_);
return v_res_5691_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1(void){
_start:
{
lean_object* v___x_5693_; lean_object* v___x_5694_; 
v___x_5693_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0));
v___x_5694_ = l_Lean_stringToMessageData(v___x_5693_);
return v___x_5694_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3(void){
_start:
{
lean_object* v___x_5696_; lean_object* v___x_5697_; 
v___x_5696_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2));
v___x_5697_ = l_Lean_stringToMessageData(v___x_5696_);
return v___x_5697_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5(void){
_start:
{
lean_object* v___x_5699_; lean_object* v___x_5700_; 
v___x_5699_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4));
v___x_5700_ = l_Lean_stringToMessageData(v___x_5699_);
return v___x_5700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(lean_object* v_inst_5701_, lean_object* v_inst_5702_, lean_object* v_inst_5703_, lean_object* v_inst_5704_, lean_object* v_f_5705_){
_start:
{
lean_object* v_module_5706_; lean_object* v_const_5707_; lean_object* v_exception_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; 
v_module_5706_ = lean_ctor_get(v_f_5705_, 0);
lean_inc(v_module_5706_);
v_const_5707_ = lean_ctor_get(v_f_5705_, 1);
lean_inc(v_const_5707_);
v_exception_5708_ = lean_ctor_get(v_f_5705_, 2);
lean_inc_ref(v_exception_5708_);
lean_dec_ref(v_f_5705_);
v___x_5709_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_5710_ = l_Lean_MessageData_ofName(v_const_5707_);
v___x_5711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5711_, 0, v___x_5709_);
lean_ctor_set(v___x_5711_, 1, v___x_5710_);
v___x_5712_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_5713_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5713_, 0, v___x_5711_);
lean_ctor_set(v___x_5713_, 1, v___x_5712_);
v___x_5714_ = l_Lean_MessageData_ofName(v_module_5706_);
v___x_5715_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5715_, 0, v___x_5713_);
lean_ctor_set(v___x_5715_, 1, v___x_5714_);
v___x_5716_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_5717_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5717_, 0, v___x_5715_);
lean_ctor_set(v___x_5717_, 1, v___x_5716_);
v___x_5718_ = l_Lean_Exception_toMessageData(v_exception_5708_);
v___x_5719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5719_, 0, v___x_5717_);
lean_ctor_set(v___x_5719_, 1, v___x_5718_);
v___x_5720_ = l_Lean_logError___redArg(v_inst_5701_, v_inst_5702_, v_inst_5703_, v_inst_5704_, v___x_5719_);
return v___x_5720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure(lean_object* v_m_5721_, lean_object* v_inst_5722_, lean_object* v_inst_5723_, lean_object* v_inst_5724_, lean_object* v_inst_5725_, lean_object* v_f_5726_){
_start:
{
lean_object* v___x_5727_; 
v___x_5727_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(v_inst_5722_, v_inst_5723_, v_inst_5724_, v_inst_5725_, v_f_5726_);
return v___x_5727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0(lean_object* v_tasks_5728_, lean_object* v_toPure_5729_, lean_object* v_t_5730_){
_start:
{
lean_object* v___x_5731_; lean_object* v___x_5732_; 
v___x_5731_ = lean_array_push(v_tasks_5728_, v_t_5730_);
v___x_5732_ = lean_apply_2(v_toPure_5729_, lean_box(0), v___x_5731_);
return v___x_5732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(lean_object* v_inst_5733_, lean_object* v_inst_5734_, lean_object* v_cctx_5735_, lean_object* v_env_5736_, lean_object* v_act_5737_, lean_object* v_constantsPerTask_5738_, lean_object* v_n_5739_, lean_object* v_ngen_5740_, lean_object* v_tasks_5741_, lean_object* v_start_5742_, lean_object* v_cnt_5743_, lean_object* v_idx_5744_){
_start:
{
lean_object* v___x_5745_; lean_object* v_toApplicative_5746_; lean_object* v_moduleData_5747_; lean_object* v_toBind_5748_; lean_object* v_toPure_5749_; lean_object* v___x_5750_; uint8_t v___x_5751_; 
v___x_5745_ = l_Lean_Environment_header(v_env_5736_);
v_toApplicative_5746_ = lean_ctor_get(v_inst_5733_, 0);
v_moduleData_5747_ = lean_ctor_get(v___x_5745_, 7);
lean_inc_ref(v_moduleData_5747_);
lean_dec_ref(v___x_5745_);
v_toBind_5748_ = lean_ctor_get(v_inst_5733_, 1);
v_toPure_5749_ = lean_ctor_get(v_toApplicative_5746_, 1);
v___x_5750_ = lean_array_get_size(v_moduleData_5747_);
v___x_5751_ = lean_nat_dec_lt(v_idx_5744_, v___x_5750_);
if (v___x_5751_ == 0)
{
uint8_t v___x_5752_; 
lean_inc(v_toPure_5749_);
lean_inc(v_toBind_5748_);
lean_dec_ref(v_moduleData_5747_);
lean_dec(v_idx_5744_);
lean_dec(v_cnt_5743_);
lean_dec(v_constantsPerTask_5738_);
lean_dec_ref(v_inst_5733_);
v___x_5752_ = lean_nat_dec_lt(v_start_5742_, v_n_5739_);
if (v___x_5752_ == 0)
{
lean_object* v___x_5753_; 
lean_dec(v_toBind_5748_);
lean_dec(v_start_5742_);
lean_dec_ref(v_ngen_5740_);
lean_dec(v_n_5739_);
lean_dec_ref(v_act_5737_);
lean_dec_ref(v_env_5736_);
lean_dec_ref(v_cctx_5735_);
lean_dec(v_inst_5734_);
v___x_5753_ = lean_apply_2(v_toPure_5749_, lean_box(0), v_tasks_5741_);
return v___x_5753_;
}
else
{
lean_object* v_namePrefix_5754_; lean_object* v_idx_5755_; lean_object* v___x_5757_; uint8_t v_isShared_5758_; uint8_t v_isSharedCheck_5770_; 
v_namePrefix_5754_ = lean_ctor_get(v_ngen_5740_, 0);
v_idx_5755_ = lean_ctor_get(v_ngen_5740_, 1);
v_isSharedCheck_5770_ = !lean_is_exclusive(v_ngen_5740_);
if (v_isSharedCheck_5770_ == 0)
{
v___x_5757_ = v_ngen_5740_;
v_isShared_5758_ = v_isSharedCheck_5770_;
goto v_resetjp_5756_;
}
else
{
lean_inc(v_idx_5755_);
lean_inc(v_namePrefix_5754_);
lean_dec(v_ngen_5740_);
v___x_5757_ = lean_box(0);
v_isShared_5758_ = v_isSharedCheck_5770_;
goto v_resetjp_5756_;
}
v_resetjp_5756_:
{
lean_object* v___f_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5763_; 
v___f_5759_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5759_, 0, v_tasks_5741_);
lean_closure_set(v___f_5759_, 1, v_toPure_5749_);
v___x_5760_ = l_Lean_Name_num___override(v_namePrefix_5754_, v_idx_5755_);
v___x_5761_ = lean_unsigned_to_nat(1u);
if (v_isShared_5758_ == 0)
{
lean_ctor_set(v___x_5757_, 1, v___x_5761_);
lean_ctor_set(v___x_5757_, 0, v___x_5760_);
v___x_5763_ = v___x_5757_;
goto v_reusejp_5762_;
}
else
{
lean_object* v_reuseFailAlloc_5769_; 
v_reuseFailAlloc_5769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5769_, 0, v___x_5760_);
lean_ctor_set(v_reuseFailAlloc_5769_, 1, v___x_5761_);
v___x_5763_ = v_reuseFailAlloc_5769_;
goto v_reusejp_5762_;
}
v_reusejp_5762_:
{
lean_object* v___x_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; 
v___x_5764_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_5764_, 0, lean_box(0));
lean_closure_set(v___x_5764_, 1, v_cctx_5735_);
lean_closure_set(v___x_5764_, 2, v___x_5763_);
lean_closure_set(v___x_5764_, 3, v_env_5736_);
lean_closure_set(v___x_5764_, 4, v_act_5737_);
lean_closure_set(v___x_5764_, 5, v_start_5742_);
lean_closure_set(v___x_5764_, 6, v_n_5739_);
v___x_5765_ = lean_unsigned_to_nat(0u);
v___x_5766_ = lean_alloc_closure((void*)(l_BaseIO_asTask___boxed), 4, 3);
lean_closure_set(v___x_5766_, 0, lean_box(0));
lean_closure_set(v___x_5766_, 1, v___x_5764_);
lean_closure_set(v___x_5766_, 2, v___x_5765_);
v___x_5767_ = lean_apply_2(v_inst_5734_, lean_box(0), v___x_5766_);
v___x_5768_ = lean_apply_4(v_toBind_5748_, lean_box(0), lean_box(0), v___x_5767_, v___f_5759_);
return v___x_5768_;
}
}
}
}
else
{
lean_object* v_mdata_5771_; lean_object* v_constants_5772_; lean_object* v___x_5773_; lean_object* v_cnt_5774_; uint8_t v___x_5775_; 
v_mdata_5771_ = lean_array_fget(v_moduleData_5747_, v_idx_5744_);
lean_dec_ref(v_moduleData_5747_);
v_constants_5772_ = lean_ctor_get(v_mdata_5771_, 2);
lean_inc_ref(v_constants_5772_);
lean_dec(v_mdata_5771_);
v___x_5773_ = lean_array_get_size(v_constants_5772_);
lean_dec_ref(v_constants_5772_);
v_cnt_5774_ = lean_nat_add(v_cnt_5743_, v___x_5773_);
lean_dec(v_cnt_5743_);
v___x_5775_ = lean_nat_dec_lt(v_constantsPerTask_5738_, v_cnt_5774_);
if (v___x_5775_ == 0)
{
lean_object* v___x_5776_; lean_object* v___x_5777_; 
v___x_5776_ = lean_unsigned_to_nat(1u);
v___x_5777_ = lean_nat_add(v_idx_5744_, v___x_5776_);
lean_dec(v_idx_5744_);
v_cnt_5743_ = v_cnt_5774_;
v_idx_5744_ = v___x_5777_;
goto _start;
}
else
{
lean_object* v_namePrefix_5779_; lean_object* v_idx_5780_; lean_object* v___x_5782_; uint8_t v_isShared_5783_; uint8_t v_isSharedCheck_5798_; 
lean_inc(v_toBind_5748_);
lean_dec(v_cnt_5774_);
v_namePrefix_5779_ = lean_ctor_get(v_ngen_5740_, 0);
v_idx_5780_ = lean_ctor_get(v_ngen_5740_, 1);
v_isSharedCheck_5798_ = !lean_is_exclusive(v_ngen_5740_);
if (v_isSharedCheck_5798_ == 0)
{
v___x_5782_ = v_ngen_5740_;
v_isShared_5783_ = v_isSharedCheck_5798_;
goto v_resetjp_5781_;
}
else
{
lean_inc(v_idx_5780_);
lean_inc(v_namePrefix_5779_);
lean_dec(v_ngen_5740_);
v___x_5782_ = lean_box(0);
v_isShared_5783_ = v_isSharedCheck_5798_;
goto v_resetjp_5781_;
}
v_resetjp_5781_:
{
lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5787_; 
lean_inc(v_idx_5780_);
lean_inc(v_namePrefix_5779_);
v___x_5784_ = l_Lean_Name_num___override(v_namePrefix_5779_, v_idx_5780_);
v___x_5785_ = lean_unsigned_to_nat(1u);
if (v_isShared_5783_ == 0)
{
lean_ctor_set(v___x_5782_, 1, v___x_5785_);
lean_ctor_set(v___x_5782_, 0, v___x_5784_);
v___x_5787_ = v___x_5782_;
goto v_reusejp_5786_;
}
else
{
lean_object* v_reuseFailAlloc_5797_; 
v_reuseFailAlloc_5797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5797_, 0, v___x_5784_);
lean_ctor_set(v_reuseFailAlloc_5797_, 1, v___x_5785_);
v___x_5787_ = v_reuseFailAlloc_5797_;
goto v_reusejp_5786_;
}
v_reusejp_5786_:
{
lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; lean_object* v___f_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; 
v___x_5788_ = lean_nat_add(v_idx_5780_, v___x_5785_);
lean_dec(v_idx_5780_);
v___x_5789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5789_, 0, v_namePrefix_5779_);
lean_ctor_set(v___x_5789_, 1, v___x_5788_);
v___x_5790_ = lean_nat_add(v_idx_5744_, v___x_5785_);
lean_dec(v_idx_5744_);
lean_inc(v___x_5790_);
lean_inc_ref(v_act_5737_);
lean_inc_ref(v_env_5736_);
lean_inc_ref(v_cctx_5735_);
lean_inc(v_inst_5734_);
v___f_5791_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1), 11, 10);
lean_closure_set(v___f_5791_, 0, v_tasks_5741_);
lean_closure_set(v___f_5791_, 1, v_inst_5733_);
lean_closure_set(v___f_5791_, 2, v_inst_5734_);
lean_closure_set(v___f_5791_, 3, v_cctx_5735_);
lean_closure_set(v___f_5791_, 4, v_env_5736_);
lean_closure_set(v___f_5791_, 5, v_act_5737_);
lean_closure_set(v___f_5791_, 6, v_constantsPerTask_5738_);
lean_closure_set(v___f_5791_, 7, v_n_5739_);
lean_closure_set(v___f_5791_, 8, v___x_5789_);
lean_closure_set(v___f_5791_, 9, v___x_5790_);
v___x_5792_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_5792_, 0, lean_box(0));
lean_closure_set(v___x_5792_, 1, v_cctx_5735_);
lean_closure_set(v___x_5792_, 2, v___x_5787_);
lean_closure_set(v___x_5792_, 3, v_env_5736_);
lean_closure_set(v___x_5792_, 4, v_act_5737_);
lean_closure_set(v___x_5792_, 5, v_start_5742_);
lean_closure_set(v___x_5792_, 6, v___x_5790_);
v___x_5793_ = lean_unsigned_to_nat(0u);
v___x_5794_ = lean_alloc_closure((void*)(l_BaseIO_asTask___boxed), 4, 3);
lean_closure_set(v___x_5794_, 0, lean_box(0));
lean_closure_set(v___x_5794_, 1, v___x_5792_);
lean_closure_set(v___x_5794_, 2, v___x_5793_);
v___x_5795_ = lean_apply_2(v_inst_5734_, lean_box(0), v___x_5794_);
v___x_5796_ = lean_apply_4(v_toBind_5748_, lean_box(0), lean_box(0), v___x_5795_, v___f_5791_);
return v___x_5796_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1(lean_object* v_tasks_5799_, lean_object* v_inst_5800_, lean_object* v_inst_5801_, lean_object* v_cctx_5802_, lean_object* v_env_5803_, lean_object* v_act_5804_, lean_object* v_constantsPerTask_5805_, lean_object* v_n_5806_, lean_object* v___x_5807_, lean_object* v___x_5808_, lean_object* v_t_5809_){
_start:
{
lean_object* v___x_5810_; lean_object* v___x_5811_; lean_object* v___x_5812_; 
v___x_5810_ = lean_array_push(v_tasks_5799_, v_t_5809_);
v___x_5811_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_5808_);
v___x_5812_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_5800_, v_inst_5801_, v_cctx_5802_, v_env_5803_, v_act_5804_, v_constantsPerTask_5805_, v_n_5806_, v___x_5807_, v___x_5810_, v___x_5808_, v___x_5811_, v___x_5808_);
return v___x_5812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go(lean_object* v_m_5813_, lean_object* v_00_u03b1_5814_, lean_object* v_inst_5815_, lean_object* v_inst_5816_, lean_object* v_cctx_5817_, lean_object* v_env_5818_, lean_object* v_act_5819_, lean_object* v_constantsPerTask_5820_, lean_object* v_n_5821_, lean_object* v_ngen_5822_, lean_object* v_tasks_5823_, lean_object* v_start_5824_, lean_object* v_cnt_5825_, lean_object* v_idx_5826_){
_start:
{
lean_object* v___x_5827_; 
v___x_5827_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_5815_, v_inst_5816_, v_cctx_5817_, v_env_5818_, v_act_5819_, v_constantsPerTask_5820_, v_n_5821_, v_ngen_5822_, v_tasks_5823_, v_start_5824_, v_cnt_5825_, v_idx_5826_);
return v___x_5827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter___redArg(lean_object* v_x_5828_, lean_object* v_h__1_5829_){
_start:
{
lean_object* v_fst_5830_; lean_object* v_snd_5831_; lean_object* v___x_5832_; 
v_fst_5830_ = lean_ctor_get(v_x_5828_, 0);
lean_inc(v_fst_5830_);
v_snd_5831_ = lean_ctor_get(v_x_5828_, 1);
lean_inc(v_snd_5831_);
lean_dec_ref(v_x_5828_);
v___x_5832_ = lean_apply_2(v_h__1_5829_, v_fst_5830_, v_snd_5831_);
return v___x_5832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter(lean_object* v_motive_5833_, lean_object* v_x_5834_, lean_object* v_h__1_5835_){
_start:
{
lean_object* v_fst_5836_; lean_object* v_snd_5837_; lean_object* v___x_5838_; 
v_fst_5836_ = lean_ctor_get(v_x_5834_, 0);
lean_inc(v_fst_5836_);
v_snd_5837_ = lean_ctor_get(v_x_5834_, 1);
lean_inc(v_snd_5837_);
lean_dec_ref(v_x_5834_);
v___x_5838_ = lean_apply_2(v_h__1_5835_, v_fst_5836_, v_snd_5837_);
return v___x_5838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0(lean_object* v_inst_5839_, lean_object* v_inst_5840_, lean_object* v_inst_5841_, lean_object* v_inst_5842_, lean_object* v_x_5843_, lean_object* v___y_5844_){
_start:
{
lean_object* v___x_5845_; 
v___x_5845_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(v_inst_5839_, v_inst_5840_, v_inst_5841_, v_inst_5842_, v___y_5844_);
return v___x_5845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1(lean_object* v_tree_5846_, lean_object* v_toPure_5847_, lean_object* v_____r_5848_){
_start:
{
lean_object* v___x_5849_; lean_object* v___x_5850_; 
v___x_5849_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_5846_);
v___x_5850_ = lean_apply_2(v_toPure_5847_, lean_box(0), v___x_5849_);
return v___x_5850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2(lean_object* v___x_5851_, lean_object* v___x_5852_, lean_object* v_toPure_5853_, lean_object* v_toBind_5854_, lean_object* v_inst_5855_, lean_object* v___f_5856_, lean_object* v_tasks_5857_){
_start:
{
lean_object* v___x_5858_; lean_object* v___x_5859_; lean_object* v___x_5860_; lean_object* v___x_5861_; lean_object* v___x_5862_; lean_object* v_r_5863_; lean_object* v_tree_5864_; lean_object* v_errors_5865_; lean_object* v___f_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; uint8_t v___x_5869_; 
v___x_5858_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__1);
lean_inc(v___x_5851_);
v___x_5859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5859_, 0, v___x_5851_);
lean_ctor_set(v___x_5859_, 1, v___x_5858_);
v___x_5860_ = lean_mk_empty_array_with_capacity(v___x_5851_);
lean_inc_ref(v___x_5860_);
v___x_5861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5861_, 0, v___x_5859_);
lean_ctor_set(v___x_5861_, 1, v___x_5860_);
v___x_5862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5862_, 0, v___x_5861_);
lean_ctor_set(v___x_5862_, 1, v___x_5860_);
v_r_5863_ = l_Lean_Meta_LazyDiscrTree_combineGet___redArg(v___x_5852_, v___x_5862_, v_tasks_5857_);
v_tree_5864_ = lean_ctor_get(v_r_5863_, 0);
lean_inc_ref(v_tree_5864_);
v_errors_5865_ = lean_ctor_get(v_r_5863_, 1);
lean_inc_ref(v_errors_5865_);
lean_dec(v_r_5863_);
lean_inc(v_toPure_5853_);
v___f_5866_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1), 3, 2);
lean_closure_set(v___f_5866_, 0, v_tree_5864_);
lean_closure_set(v___f_5866_, 1, v_toPure_5853_);
v___x_5867_ = lean_array_get_size(v_errors_5865_);
v___x_5868_ = lean_box(0);
v___x_5869_ = lean_nat_dec_lt(v___x_5851_, v___x_5867_);
lean_dec(v___x_5851_);
if (v___x_5869_ == 0)
{
lean_object* v___x_5870_; lean_object* v___x_5871_; 
lean_dec_ref(v_errors_5865_);
lean_dec(v___f_5856_);
lean_dec_ref(v_inst_5855_);
v___x_5870_ = lean_apply_2(v_toPure_5853_, lean_box(0), v___x_5868_);
v___x_5871_ = lean_apply_4(v_toBind_5854_, lean_box(0), lean_box(0), v___x_5870_, v___f_5866_);
return v___x_5871_;
}
else
{
size_t v___x_5872_; size_t v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; 
lean_dec(v_toPure_5853_);
v___x_5872_ = ((size_t)0ULL);
v___x_5873_ = lean_usize_of_nat(v___x_5867_);
v___x_5874_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_5855_, v___f_5856_, v_errors_5865_, v___x_5872_, v___x_5873_, v___x_5868_);
v___x_5875_ = lean_apply_4(v_toBind_5854_, lean_box(0), lean_box(0), v___x_5874_, v___f_5866_);
return v___x_5875_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(lean_object* v_inst_5878_, lean_object* v_inst_5879_, lean_object* v_inst_5880_, lean_object* v_inst_5881_, lean_object* v_inst_5882_, lean_object* v_cctx_5883_, lean_object* v_ngen_5884_, lean_object* v_env_5885_, lean_object* v_act_5886_, lean_object* v_constantsPerTask_5887_){
_start:
{
lean_object* v___x_5888_; lean_object* v_moduleData_5889_; lean_object* v_toApplicative_5890_; lean_object* v_toBind_5891_; lean_object* v_n_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v_toPure_5896_; lean_object* v___f_5897_; lean_object* v___x_5898_; lean_object* v___f_5899_; lean_object* v___x_5900_; 
v___x_5888_ = l_Lean_Environment_header(v_env_5885_);
v_moduleData_5889_ = lean_ctor_get(v___x_5888_, 7);
lean_inc_ref(v_moduleData_5889_);
lean_dec_ref(v___x_5888_);
v_toApplicative_5890_ = lean_ctor_get(v_inst_5878_, 0);
v_toBind_5891_ = lean_ctor_get(v_inst_5878_, 1);
lean_inc_n(v_toBind_5891_, 2);
v_n_5892_ = lean_array_get_size(v_moduleData_5889_);
lean_dec_ref(v_moduleData_5889_);
v___x_5893_ = lean_unsigned_to_nat(0u);
v___x_5894_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
lean_inc_ref_n(v_inst_5878_, 2);
v___x_5895_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_5878_, v_inst_5882_, v_cctx_5883_, v_env_5885_, v_act_5886_, v_constantsPerTask_5887_, v_n_5892_, v_ngen_5884_, v___x_5894_, v___x_5893_, v___x_5893_, v___x_5893_);
v_toPure_5896_ = lean_ctor_get(v_toApplicative_5890_, 1);
lean_inc(v_toPure_5896_);
v___f_5897_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0), 6, 4);
lean_closure_set(v___f_5897_, 0, v_inst_5878_);
lean_closure_set(v___f_5897_, 1, v_inst_5879_);
lean_closure_set(v___f_5897_, 2, v_inst_5880_);
lean_closure_set(v___f_5897_, 3, v_inst_5881_);
v___x_5898_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___redArg___closed__0));
v___f_5899_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2), 7, 6);
lean_closure_set(v___f_5899_, 0, v___x_5893_);
lean_closure_set(v___f_5899_, 1, v___x_5898_);
lean_closure_set(v___f_5899_, 2, v_toPure_5896_);
lean_closure_set(v___f_5899_, 3, v_toBind_5891_);
lean_closure_set(v___f_5899_, 4, v_inst_5878_);
lean_closure_set(v___f_5899_, 5, v___f_5897_);
v___x_5900_ = lean_apply_4(v_toBind_5891_, lean_box(0), lean_box(0), v___x_5895_, v___f_5899_);
return v___x_5900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree(lean_object* v_m_5901_, lean_object* v_00_u03b1_5902_, lean_object* v_inst_5903_, lean_object* v_inst_5904_, lean_object* v_inst_5905_, lean_object* v_inst_5906_, lean_object* v_inst_5907_, lean_object* v_cctx_5908_, lean_object* v_ngen_5909_, lean_object* v_env_5910_, lean_object* v_act_5911_, lean_object* v_constantsPerTask_5912_){
_start:
{
lean_object* v___x_5913_; 
v___x_5913_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(v_inst_5903_, v_inst_5904_, v_inst_5905_, v_inst_5906_, v_inst_5907_, v_cctx_5908_, v_ngen_5909_, v_env_5910_, v_act_5911_, v_constantsPerTask_5912_);
return v___x_5913_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0(void){
_start:
{
lean_object* v___x_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; 
v___x_5914_ = lean_box(0);
v___x_5915_ = lean_unsigned_to_nat(16u);
v___x_5916_ = lean_mk_array(v___x_5915_, v___x_5914_);
return v___x_5916_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1(void){
_start:
{
lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; 
v___x_5917_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0, &l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0);
v___x_5918_ = lean_unsigned_to_nat(0u);
v___x_5919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5919_, 0, v___x_5918_);
lean_ctor_set(v___x_5919_, 1, v___x_5917_);
return v___x_5919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx(lean_object* v_ctx_5920_){
_start:
{
lean_object* v_toCold_5921_; lean_object* v_ref_5922_; lean_object* v___x_5924_; uint8_t v_isShared_5925_; uint8_t v_isSharedCheck_5956_; 
v_toCold_5921_ = lean_ctor_get(v_ctx_5920_, 0);
v_ref_5922_ = lean_ctor_get(v_ctx_5920_, 2);
v_isSharedCheck_5956_ = !lean_is_exclusive(v_ctx_5920_);
if (v_isSharedCheck_5956_ == 0)
{
lean_object* v_unused_5957_; 
v_unused_5957_ = lean_ctor_get(v_ctx_5920_, 1);
lean_dec(v_unused_5957_);
v___x_5924_ = v_ctx_5920_;
v_isShared_5925_ = v_isSharedCheck_5956_;
goto v_resetjp_5923_;
}
else
{
lean_inc(v_ref_5922_);
lean_inc(v_toCold_5921_);
lean_dec(v_ctx_5920_);
v___x_5924_ = lean_box(0);
v_isShared_5925_ = v_isSharedCheck_5956_;
goto v_resetjp_5923_;
}
v_resetjp_5923_:
{
lean_object* v_fileName_5926_; lean_object* v_fileMap_5927_; lean_object* v_options_5928_; lean_object* v_maxRecDepth_5929_; lean_object* v___x_5931_; uint8_t v_isShared_5932_; uint8_t v_isSharedCheck_5947_; 
v_fileName_5926_ = lean_ctor_get(v_toCold_5921_, 0);
v_fileMap_5927_ = lean_ctor_get(v_toCold_5921_, 1);
v_options_5928_ = lean_ctor_get(v_toCold_5921_, 2);
v_maxRecDepth_5929_ = lean_ctor_get(v_toCold_5921_, 3);
v_isSharedCheck_5947_ = !lean_is_exclusive(v_toCold_5921_);
if (v_isSharedCheck_5947_ == 0)
{
lean_object* v_unused_5948_; lean_object* v_unused_5949_; lean_object* v_unused_5950_; lean_object* v_unused_5951_; lean_object* v_unused_5952_; lean_object* v_unused_5953_; lean_object* v_unused_5954_; lean_object* v_unused_5955_; 
v_unused_5948_ = lean_ctor_get(v_toCold_5921_, 11);
lean_dec(v_unused_5948_);
v_unused_5949_ = lean_ctor_get(v_toCold_5921_, 10);
lean_dec(v_unused_5949_);
v_unused_5950_ = lean_ctor_get(v_toCold_5921_, 9);
lean_dec(v_unused_5950_);
v_unused_5951_ = lean_ctor_get(v_toCold_5921_, 8);
lean_dec(v_unused_5951_);
v_unused_5952_ = lean_ctor_get(v_toCold_5921_, 7);
lean_dec(v_unused_5952_);
v_unused_5953_ = lean_ctor_get(v_toCold_5921_, 6);
lean_dec(v_unused_5953_);
v_unused_5954_ = lean_ctor_get(v_toCold_5921_, 5);
lean_dec(v_unused_5954_);
v_unused_5955_ = lean_ctor_get(v_toCold_5921_, 4);
lean_dec(v_unused_5955_);
v___x_5931_ = v_toCold_5921_;
v_isShared_5932_ = v_isSharedCheck_5947_;
goto v_resetjp_5930_;
}
else
{
lean_inc(v_maxRecDepth_5929_);
lean_inc(v_options_5928_);
lean_inc(v_fileMap_5927_);
lean_inc(v_fileName_5926_);
lean_dec(v_toCold_5921_);
v___x_5931_ = lean_box(0);
v_isShared_5932_ = v_isSharedCheck_5947_;
goto v_resetjp_5930_;
}
v_resetjp_5930_:
{
lean_object* v___x_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5940_; 
v___x_5933_ = lean_box(0);
v___x_5934_ = lean_box(0);
v___x_5935_ = lean_unsigned_to_nat(0u);
v___x_5936_ = l_Lean_firstFrontendMacroScope;
v___x_5937_ = lean_box(0);
v___x_5938_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1, &l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1);
lean_inc_ref(v_options_5928_);
if (v_isShared_5932_ == 0)
{
lean_ctor_set(v___x_5931_, 11, v___x_5938_);
lean_ctor_set(v___x_5931_, 10, v___x_5937_);
lean_ctor_set(v___x_5931_, 9, v___x_5936_);
lean_ctor_set(v___x_5931_, 8, v___x_5933_);
lean_ctor_set(v___x_5931_, 7, v___x_5935_);
lean_ctor_set(v___x_5931_, 6, v___x_5935_);
lean_ctor_set(v___x_5931_, 5, v___x_5934_);
lean_ctor_set(v___x_5931_, 4, v___x_5933_);
v___x_5940_ = v___x_5931_;
goto v_reusejp_5939_;
}
else
{
lean_object* v_reuseFailAlloc_5946_; 
v_reuseFailAlloc_5946_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_5946_, 0, v_fileName_5926_);
lean_ctor_set(v_reuseFailAlloc_5946_, 1, v_fileMap_5927_);
lean_ctor_set(v_reuseFailAlloc_5946_, 2, v_options_5928_);
lean_ctor_set(v_reuseFailAlloc_5946_, 3, v_maxRecDepth_5929_);
lean_ctor_set(v_reuseFailAlloc_5946_, 4, v___x_5933_);
lean_ctor_set(v_reuseFailAlloc_5946_, 5, v___x_5934_);
lean_ctor_set(v_reuseFailAlloc_5946_, 6, v___x_5935_);
lean_ctor_set(v_reuseFailAlloc_5946_, 7, v___x_5935_);
lean_ctor_set(v_reuseFailAlloc_5946_, 8, v___x_5933_);
lean_ctor_set(v_reuseFailAlloc_5946_, 9, v___x_5936_);
lean_ctor_set(v_reuseFailAlloc_5946_, 10, v___x_5937_);
lean_ctor_set(v_reuseFailAlloc_5946_, 11, v___x_5938_);
v___x_5940_ = v_reuseFailAlloc_5946_;
goto v_reusejp_5939_;
}
v_reusejp_5939_:
{
uint16_t v___x_5941_; uint8_t v___x_5942_; lean_object* v___x_5944_; 
v___x_5941_ = l_Lean_OptionFlags_ofOptions(v_options_5928_);
lean_dec_ref(v_options_5928_);
v___x_5942_ = 0;
if (v_isShared_5925_ == 0)
{
lean_ctor_set(v___x_5924_, 1, v___x_5935_);
lean_ctor_set(v___x_5924_, 0, v___x_5940_);
v___x_5944_ = v___x_5924_;
goto v_reusejp_5943_;
}
else
{
lean_object* v_reuseFailAlloc_5945_; 
v_reuseFailAlloc_5945_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v_reuseFailAlloc_5945_, 0, v___x_5940_);
lean_ctor_set(v_reuseFailAlloc_5945_, 1, v___x_5935_);
lean_ctor_set(v_reuseFailAlloc_5945_, 2, v_ref_5922_);
v___x_5944_ = v_reuseFailAlloc_5945_;
goto v_reusejp_5943_;
}
v_reusejp_5943_:
{
lean_ctor_set_uint16(v___x_5944_, sizeof(void*)*3, v___x_5941_);
lean_ctor_set_uint8(v___x_5944_, sizeof(void*)*3 + 2, v___x_5942_);
lean_ctor_set_uint8(v___x_5944_, sizeof(void*)*3 + 3, v___x_5942_);
return v___x_5944_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(lean_object* v_category_5958_, lean_object* v_opts_5959_, lean_object* v_act_5960_, lean_object* v_decl_5961_, lean_object* v___y_5962_, lean_object* v___y_5963_, lean_object* v___y_5964_, lean_object* v___y_5965_){
_start:
{
lean_object* v___x_5967_; lean_object* v___x_5968_; 
lean_inc(v___y_5965_);
lean_inc_ref(v___y_5964_);
lean_inc(v___y_5963_);
lean_inc_ref(v___y_5962_);
v___x_5967_ = lean_apply_4(v_act_5960_, v___y_5962_, v___y_5963_, v___y_5964_, v___y_5965_);
v___x_5968_ = l_Lean_profileitIOUnsafe___redArg(v_category_5958_, v_opts_5959_, v___x_5967_, v_decl_5961_);
return v___x_5968_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg___boxed(lean_object* v_category_5969_, lean_object* v_opts_5970_, lean_object* v_act_5971_, lean_object* v_decl_5972_, lean_object* v___y_5973_, lean_object* v___y_5974_, lean_object* v___y_5975_, lean_object* v___y_5976_, lean_object* v___y_5977_){
_start:
{
lean_object* v_res_5978_; 
v_res_5978_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v_category_5969_, v_opts_5970_, v_act_5971_, v_decl_5972_, v___y_5973_, v___y_5974_, v___y_5975_, v___y_5976_);
lean_dec(v___y_5976_);
lean_dec_ref(v___y_5975_);
lean_dec(v___y_5974_);
lean_dec_ref(v___y_5973_);
lean_dec_ref(v_opts_5970_);
lean_dec_ref(v_category_5969_);
return v_res_5978_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(lean_object* v_00_u03b1_5979_, lean_object* v_category_5980_, lean_object* v_opts_5981_, lean_object* v_act_5982_, lean_object* v_decl_5983_, lean_object* v___y_5984_, lean_object* v___y_5985_, lean_object* v___y_5986_, lean_object* v___y_5987_){
_start:
{
lean_object* v___x_5989_; 
v___x_5989_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v_category_5980_, v_opts_5981_, v_act_5982_, v_decl_5983_, v___y_5984_, v___y_5985_, v___y_5986_, v___y_5987_);
return v___x_5989_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___boxed(lean_object* v_00_u03b1_5990_, lean_object* v_category_5991_, lean_object* v_opts_5992_, lean_object* v_act_5993_, lean_object* v_decl_5994_, lean_object* v___y_5995_, lean_object* v___y_5996_, lean_object* v___y_5997_, lean_object* v___y_5998_, lean_object* v___y_5999_){
_start:
{
lean_object* v_res_6000_; 
v_res_6000_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(v_00_u03b1_5990_, v_category_5991_, v_opts_5992_, v_act_5993_, v_decl_5994_, v___y_5995_, v___y_5996_, v___y_5997_, v___y_5998_);
lean_dec(v___y_5998_);
lean_dec_ref(v___y_5997_);
lean_dec(v___y_5996_);
lean_dec_ref(v___y_5995_);
lean_dec_ref(v_opts_5992_);
lean_dec_ref(v_category_5991_);
return v_res_6000_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(lean_object* v_cctx_6001_, lean_object* v_env_6002_, lean_object* v_act_6003_, lean_object* v_constantsPerTask_6004_, lean_object* v_n_6005_, lean_object* v_ngen_6006_, lean_object* v_tasks_6007_, lean_object* v_start_6008_, lean_object* v_cnt_6009_, lean_object* v_idx_6010_){
_start:
{
lean_object* v___x_6012_; lean_object* v_moduleData_6013_; lean_object* v___x_6014_; uint8_t v___x_6015_; 
v___x_6012_ = l_Lean_Environment_header(v_env_6002_);
v_moduleData_6013_ = lean_ctor_get(v___x_6012_, 7);
lean_inc_ref(v_moduleData_6013_);
lean_dec_ref(v___x_6012_);
v___x_6014_ = lean_array_get_size(v_moduleData_6013_);
v___x_6015_ = lean_nat_dec_lt(v_idx_6010_, v___x_6014_);
if (v___x_6015_ == 0)
{
uint8_t v___x_6016_; 
lean_dec_ref(v_moduleData_6013_);
lean_dec(v_idx_6010_);
lean_dec(v_cnt_6009_);
v___x_6016_ = lean_nat_dec_lt(v_start_6008_, v_n_6005_);
if (v___x_6016_ == 0)
{
lean_object* v___x_6017_; 
lean_dec(v_start_6008_);
lean_dec_ref(v_ngen_6006_);
lean_dec(v_n_6005_);
lean_dec_ref(v_act_6003_);
lean_dec_ref(v_env_6002_);
lean_dec_ref(v_cctx_6001_);
v___x_6017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6017_, 0, v_tasks_6007_);
return v___x_6017_;
}
else
{
lean_object* v_namePrefix_6018_; lean_object* v_idx_6019_; lean_object* v___x_6021_; uint8_t v_isShared_6022_; uint8_t v_isSharedCheck_6033_; 
v_namePrefix_6018_ = lean_ctor_get(v_ngen_6006_, 0);
v_idx_6019_ = lean_ctor_get(v_ngen_6006_, 1);
v_isSharedCheck_6033_ = !lean_is_exclusive(v_ngen_6006_);
if (v_isSharedCheck_6033_ == 0)
{
v___x_6021_ = v_ngen_6006_;
v_isShared_6022_ = v_isSharedCheck_6033_;
goto v_resetjp_6020_;
}
else
{
lean_inc(v_idx_6019_);
lean_inc(v_namePrefix_6018_);
lean_dec(v_ngen_6006_);
v___x_6021_ = lean_box(0);
v_isShared_6022_ = v_isSharedCheck_6033_;
goto v_resetjp_6020_;
}
v_resetjp_6020_:
{
lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6026_; 
v___x_6023_ = l_Lean_Name_num___override(v_namePrefix_6018_, v_idx_6019_);
v___x_6024_ = lean_unsigned_to_nat(1u);
if (v_isShared_6022_ == 0)
{
lean_ctor_set(v___x_6021_, 1, v___x_6024_);
lean_ctor_set(v___x_6021_, 0, v___x_6023_);
v___x_6026_ = v___x_6021_;
goto v_reusejp_6025_;
}
else
{
lean_object* v_reuseFailAlloc_6032_; 
v_reuseFailAlloc_6032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6032_, 0, v___x_6023_);
lean_ctor_set(v_reuseFailAlloc_6032_, 1, v___x_6024_);
v___x_6026_ = v_reuseFailAlloc_6032_;
goto v_reusejp_6025_;
}
v_reusejp_6025_:
{
lean_object* v___x_6027_; lean_object* v___x_6028_; lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; 
v___x_6027_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_6027_, 0, lean_box(0));
lean_closure_set(v___x_6027_, 1, v_cctx_6001_);
lean_closure_set(v___x_6027_, 2, v___x_6026_);
lean_closure_set(v___x_6027_, 3, v_env_6002_);
lean_closure_set(v___x_6027_, 4, v_act_6003_);
lean_closure_set(v___x_6027_, 5, v_start_6008_);
lean_closure_set(v___x_6027_, 6, v_n_6005_);
v___x_6028_ = lean_unsigned_to_nat(0u);
v___x_6029_ = lean_io_as_task(v___x_6027_, v___x_6028_);
v___x_6030_ = lean_array_push(v_tasks_6007_, v___x_6029_);
v___x_6031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6031_, 0, v___x_6030_);
return v___x_6031_;
}
}
}
}
else
{
lean_object* v_mdata_6034_; lean_object* v_constants_6035_; lean_object* v___x_6036_; lean_object* v_cnt_6037_; uint8_t v___x_6038_; 
v_mdata_6034_ = lean_array_fget(v_moduleData_6013_, v_idx_6010_);
lean_dec_ref(v_moduleData_6013_);
v_constants_6035_ = lean_ctor_get(v_mdata_6034_, 2);
lean_inc_ref(v_constants_6035_);
lean_dec(v_mdata_6034_);
v___x_6036_ = lean_array_get_size(v_constants_6035_);
lean_dec_ref(v_constants_6035_);
v_cnt_6037_ = lean_nat_add(v_cnt_6009_, v___x_6036_);
lean_dec(v_cnt_6009_);
v___x_6038_ = lean_nat_dec_lt(v_constantsPerTask_6004_, v_cnt_6037_);
if (v___x_6038_ == 0)
{
lean_object* v___x_6039_; lean_object* v___x_6040_; 
v___x_6039_ = lean_unsigned_to_nat(1u);
v___x_6040_ = lean_nat_add(v_idx_6010_, v___x_6039_);
lean_dec(v_idx_6010_);
v_cnt_6009_ = v_cnt_6037_;
v_idx_6010_ = v___x_6040_;
goto _start;
}
else
{
lean_object* v_namePrefix_6042_; lean_object* v_idx_6043_; lean_object* v___x_6045_; uint8_t v_isShared_6046_; uint8_t v_isSharedCheck_6060_; 
lean_dec(v_cnt_6037_);
v_namePrefix_6042_ = lean_ctor_get(v_ngen_6006_, 0);
v_idx_6043_ = lean_ctor_get(v_ngen_6006_, 1);
v_isSharedCheck_6060_ = !lean_is_exclusive(v_ngen_6006_);
if (v_isSharedCheck_6060_ == 0)
{
v___x_6045_ = v_ngen_6006_;
v_isShared_6046_ = v_isSharedCheck_6060_;
goto v_resetjp_6044_;
}
else
{
lean_inc(v_idx_6043_);
lean_inc(v_namePrefix_6042_);
lean_dec(v_ngen_6006_);
v___x_6045_ = lean_box(0);
v_isShared_6046_ = v_isSharedCheck_6060_;
goto v_resetjp_6044_;
}
v_resetjp_6044_:
{
lean_object* v___x_6047_; lean_object* v___x_6048_; lean_object* v___x_6050_; 
lean_inc(v_idx_6043_);
lean_inc(v_namePrefix_6042_);
v___x_6047_ = l_Lean_Name_num___override(v_namePrefix_6042_, v_idx_6043_);
v___x_6048_ = lean_unsigned_to_nat(1u);
if (v_isShared_6046_ == 0)
{
lean_ctor_set(v___x_6045_, 1, v___x_6048_);
lean_ctor_set(v___x_6045_, 0, v___x_6047_);
v___x_6050_ = v___x_6045_;
goto v_reusejp_6049_;
}
else
{
lean_object* v_reuseFailAlloc_6059_; 
v_reuseFailAlloc_6059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6059_, 0, v___x_6047_);
lean_ctor_set(v_reuseFailAlloc_6059_, 1, v___x_6048_);
v___x_6050_ = v_reuseFailAlloc_6059_;
goto v_reusejp_6049_;
}
v_reusejp_6049_:
{
lean_object* v___x_6051_; lean_object* v___x_6052_; lean_object* v___x_6053_; lean_object* v___x_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; 
v___x_6051_ = lean_nat_add(v_idx_6043_, v___x_6048_);
lean_dec(v_idx_6043_);
v___x_6052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6052_, 0, v_namePrefix_6042_);
lean_ctor_set(v___x_6052_, 1, v___x_6051_);
v___x_6053_ = lean_nat_add(v_idx_6010_, v___x_6048_);
lean_dec(v_idx_6010_);
lean_inc_n(v___x_6053_, 2);
lean_inc_ref(v_act_6003_);
lean_inc_ref(v_env_6002_);
lean_inc_ref(v_cctx_6001_);
v___x_6054_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_6054_, 0, lean_box(0));
lean_closure_set(v___x_6054_, 1, v_cctx_6001_);
lean_closure_set(v___x_6054_, 2, v___x_6050_);
lean_closure_set(v___x_6054_, 3, v_env_6002_);
lean_closure_set(v___x_6054_, 4, v_act_6003_);
lean_closure_set(v___x_6054_, 5, v_start_6008_);
lean_closure_set(v___x_6054_, 6, v___x_6053_);
v___x_6055_ = lean_unsigned_to_nat(0u);
v___x_6056_ = lean_io_as_task(v___x_6054_, v___x_6055_);
v___x_6057_ = lean_array_push(v_tasks_6007_, v___x_6056_);
v_ngen_6006_ = v___x_6052_;
v_tasks_6007_ = v___x_6057_;
v_start_6008_ = v___x_6053_;
v_cnt_6009_ = v___x_6055_;
v_idx_6010_ = v___x_6053_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg___boxed(lean_object* v_cctx_6061_, lean_object* v_env_6062_, lean_object* v_act_6063_, lean_object* v_constantsPerTask_6064_, lean_object* v_n_6065_, lean_object* v_ngen_6066_, lean_object* v_tasks_6067_, lean_object* v_start_6068_, lean_object* v_cnt_6069_, lean_object* v_idx_6070_, lean_object* v___y_6071_){
_start:
{
lean_object* v_res_6072_; 
v_res_6072_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6061_, v_env_6062_, v_act_6063_, v_constantsPerTask_6064_, v_n_6065_, v_ngen_6066_, v_tasks_6067_, v_start_6068_, v_cnt_6069_, v_idx_6070_);
lean_dec(v_constantsPerTask_6064_);
return v_res_6072_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(uint8_t v_suppressElabErrors_6081_, lean_object* v_x_6082_){
_start:
{
if (lean_obj_tag(v_x_6082_) == 1)
{
lean_object* v_pre_6083_; 
v_pre_6083_ = lean_ctor_get(v_x_6082_, 0);
switch(lean_obj_tag(v_pre_6083_))
{
case 1:
{
lean_object* v_pre_6084_; 
v_pre_6084_ = lean_ctor_get(v_pre_6083_, 0);
switch(lean_obj_tag(v_pre_6084_))
{
case 0:
{
lean_object* v_str_6085_; lean_object* v_str_6086_; lean_object* v___x_6087_; uint8_t v___x_6088_; 
v_str_6085_ = lean_ctor_get(v_x_6082_, 1);
v_str_6086_ = lean_ctor_get(v_pre_6083_, 1);
v___x_6087_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0));
v___x_6088_ = lean_string_dec_eq(v_str_6086_, v___x_6087_);
if (v___x_6088_ == 0)
{
lean_object* v___x_6089_; uint8_t v___x_6090_; 
v___x_6089_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1));
v___x_6090_ = lean_string_dec_eq(v_str_6086_, v___x_6089_);
if (v___x_6090_ == 0)
{
return v___x_6090_;
}
else
{
lean_object* v___x_6091_; uint8_t v___x_6092_; 
v___x_6091_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2));
v___x_6092_ = lean_string_dec_eq(v_str_6085_, v___x_6091_);
if (v___x_6092_ == 0)
{
return v___x_6092_;
}
else
{
return v_suppressElabErrors_6081_;
}
}
}
else
{
lean_object* v___x_6093_; uint8_t v___x_6094_; 
v___x_6093_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3));
v___x_6094_ = lean_string_dec_eq(v_str_6085_, v___x_6093_);
if (v___x_6094_ == 0)
{
return v___x_6094_;
}
else
{
return v_suppressElabErrors_6081_;
}
}
}
case 1:
{
lean_object* v_pre_6095_; 
v_pre_6095_ = lean_ctor_get(v_pre_6084_, 0);
if (lean_obj_tag(v_pre_6095_) == 0)
{
lean_object* v_str_6096_; lean_object* v_str_6097_; lean_object* v_str_6098_; lean_object* v___x_6099_; uint8_t v___x_6100_; 
v_str_6096_ = lean_ctor_get(v_x_6082_, 1);
v_str_6097_ = lean_ctor_get(v_pre_6083_, 1);
v_str_6098_ = lean_ctor_get(v_pre_6084_, 1);
v___x_6099_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4));
v___x_6100_ = lean_string_dec_eq(v_str_6098_, v___x_6099_);
if (v___x_6100_ == 0)
{
return v___x_6100_;
}
else
{
lean_object* v___x_6101_; uint8_t v___x_6102_; 
v___x_6101_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5));
v___x_6102_ = lean_string_dec_eq(v_str_6097_, v___x_6101_);
if (v___x_6102_ == 0)
{
return v___x_6102_;
}
else
{
lean_object* v___x_6103_; uint8_t v___x_6104_; 
v___x_6103_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6));
v___x_6104_ = lean_string_dec_eq(v_str_6096_, v___x_6103_);
if (v___x_6104_ == 0)
{
return v___x_6104_;
}
else
{
return v_suppressElabErrors_6081_;
}
}
}
}
else
{
uint8_t v___x_6105_; 
v___x_6105_ = 0;
return v___x_6105_;
}
}
default: 
{
uint8_t v___x_6106_; 
v___x_6106_ = 0;
return v___x_6106_;
}
}
}
case 0:
{
lean_object* v_str_6107_; lean_object* v___x_6108_; uint8_t v___x_6109_; 
v_str_6107_ = lean_ctor_get(v_x_6082_, 1);
v___x_6108_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7));
v___x_6109_ = lean_string_dec_eq(v_str_6107_, v___x_6108_);
if (v___x_6109_ == 0)
{
return v___x_6109_;
}
else
{
return v_suppressElabErrors_6081_;
}
}
default: 
{
uint8_t v___x_6110_; 
v___x_6110_ = 0;
return v___x_6110_;
}
}
}
else
{
uint8_t v___x_6111_; 
v___x_6111_ = 0;
return v___x_6111_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed(lean_object* v_suppressElabErrors_6112_, lean_object* v_x_6113_){
_start:
{
uint8_t v_suppressElabErrors_boxed_6114_; uint8_t v_res_6115_; lean_object* v_r_6116_; 
v_suppressElabErrors_boxed_6114_ = lean_unbox(v_suppressElabErrors_6112_);
v_res_6115_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(v_suppressElabErrors_boxed_6114_, v_x_6113_);
lean_dec(v_x_6113_);
v_r_6116_ = lean_box(v_res_6115_);
return v_r_6116_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9(lean_object* v_opts_6117_, lean_object* v_opt_6118_){
_start:
{
lean_object* v_name_6119_; lean_object* v_defValue_6120_; lean_object* v_map_6121_; lean_object* v___x_6122_; 
v_name_6119_ = lean_ctor_get(v_opt_6118_, 0);
v_defValue_6120_ = lean_ctor_get(v_opt_6118_, 1);
v_map_6121_ = lean_ctor_get(v_opts_6117_, 0);
v___x_6122_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_6121_, v_name_6119_);
if (lean_obj_tag(v___x_6122_) == 0)
{
uint8_t v___x_6123_; 
v___x_6123_ = lean_unbox(v_defValue_6120_);
return v___x_6123_;
}
else
{
lean_object* v_val_6124_; 
v_val_6124_ = lean_ctor_get(v___x_6122_, 0);
lean_inc(v_val_6124_);
lean_dec_ref_known(v___x_6122_, 1);
if (lean_obj_tag(v_val_6124_) == 1)
{
uint8_t v_v_6125_; 
v_v_6125_ = lean_ctor_get_uint8(v_val_6124_, 0);
lean_dec_ref_known(v_val_6124_, 0);
return v_v_6125_;
}
else
{
uint8_t v___x_6126_; 
lean_dec(v_val_6124_);
v___x_6126_ = lean_unbox(v_defValue_6120_);
return v___x_6126_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9___boxed(lean_object* v_opts_6127_, lean_object* v_opt_6128_){
_start:
{
uint8_t v_res_6129_; lean_object* v_r_6130_; 
v_res_6129_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9(v_opts_6127_, v_opt_6128_);
lean_dec_ref(v_opt_6128_);
lean_dec_ref(v_opts_6127_);
v_r_6130_ = lean_box(v_res_6129_);
return v_r_6130_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(lean_object* v_ref_6132_, lean_object* v_msgData_6133_, uint8_t v_severity_6134_, uint8_t v_isSilent_6135_, lean_object* v___y_6136_, lean_object* v___y_6137_, lean_object* v___y_6138_, lean_object* v___y_6139_){
_start:
{
uint8_t v___y_6142_; lean_object* v___y_6143_; lean_object* v___y_6144_; lean_object* v___y_6145_; lean_object* v___y_6146_; lean_object* v___y_6147_; uint8_t v___y_6148_; lean_object* v_toCold_6149_; lean_object* v___y_6150_; lean_object* v___y_6179_; lean_object* v___y_6180_; uint8_t v___y_6181_; lean_object* v___y_6182_; lean_object* v___y_6183_; uint8_t v___y_6184_; uint8_t v___y_6185_; lean_object* v___y_6186_; lean_object* v___y_6206_; lean_object* v___y_6207_; uint8_t v___y_6208_; uint8_t v___y_6209_; lean_object* v___y_6210_; uint8_t v___y_6211_; lean_object* v___y_6212_; uint8_t v___y_6216_; uint8_t v___y_6217_; uint8_t v___x_6227_; uint8_t v___y_6229_; uint8_t v___x_6235_; 
v___x_6227_ = 2;
v___x_6235_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6134_, v___x_6227_);
if (v___x_6235_ == 0)
{
v___y_6229_ = v___x_6235_;
goto v___jp_6228_;
}
else
{
uint8_t v___x_6236_; 
lean_inc_ref(v_msgData_6133_);
v___x_6236_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_6133_);
if (v___x_6236_ == 0)
{
v___y_6229_ = v___x_6236_;
goto v___jp_6228_;
}
else
{
lean_object* v___x_6237_; lean_object* v___x_6238_; 
lean_dec_ref(v_msgData_6133_);
v___x_6237_ = lean_box(0);
v___x_6238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6238_, 0, v___x_6237_);
return v___x_6238_;
}
}
v___jp_6141_:
{
lean_object* v_currNamespace_6151_; lean_object* v_openDecls_6152_; lean_object* v___x_6153_; lean_object* v___x_6154_; lean_object* v___x_6155_; lean_object* v___x_6156_; lean_object* v_env_6157_; lean_object* v_nextMacroScope_6158_; lean_object* v_ngen_6159_; lean_object* v_auxDeclNGen_6160_; lean_object* v_traceState_6161_; lean_object* v_cache_6162_; lean_object* v_recordedDeps_6163_; lean_object* v_messages_6164_; lean_object* v_infoState_6165_; lean_object* v_snapshotTasks_6166_; lean_object* v___x_6168_; uint8_t v_isShared_6169_; uint8_t v_isSharedCheck_6177_; 
v_currNamespace_6151_ = lean_ctor_get(v_toCold_6149_, 4);
v_openDecls_6152_ = lean_ctor_get(v_toCold_6149_, 5);
lean_inc(v_openDecls_6152_);
lean_inc(v_currNamespace_6151_);
v___x_6153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6153_, 0, v_currNamespace_6151_);
lean_ctor_set(v___x_6153_, 1, v_openDecls_6152_);
v___x_6154_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6154_, 0, v___x_6153_);
lean_ctor_set(v___x_6154_, 1, v___y_6144_);
lean_inc_ref(v___y_6145_);
lean_inc_ref(v___y_6146_);
v___x_6155_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_6155_, 0, v___y_6146_);
lean_ctor_set(v___x_6155_, 1, v___y_6147_);
lean_ctor_set(v___x_6155_, 2, v___y_6143_);
lean_ctor_set(v___x_6155_, 3, v___y_6145_);
lean_ctor_set(v___x_6155_, 4, v___x_6154_);
lean_ctor_set_uint8(v___x_6155_, sizeof(void*)*5, v___y_6142_);
lean_ctor_set_uint8(v___x_6155_, sizeof(void*)*5 + 1, v___y_6148_);
lean_ctor_set_uint8(v___x_6155_, sizeof(void*)*5 + 2, v_isSilent_6135_);
v___x_6156_ = lean_st_ref_take(v___y_6150_);
v_env_6157_ = lean_ctor_get(v___x_6156_, 0);
v_nextMacroScope_6158_ = lean_ctor_get(v___x_6156_, 1);
v_ngen_6159_ = lean_ctor_get(v___x_6156_, 2);
v_auxDeclNGen_6160_ = lean_ctor_get(v___x_6156_, 3);
v_traceState_6161_ = lean_ctor_get(v___x_6156_, 4);
v_cache_6162_ = lean_ctor_get(v___x_6156_, 5);
v_recordedDeps_6163_ = lean_ctor_get(v___x_6156_, 6);
v_messages_6164_ = lean_ctor_get(v___x_6156_, 7);
v_infoState_6165_ = lean_ctor_get(v___x_6156_, 8);
v_snapshotTasks_6166_ = lean_ctor_get(v___x_6156_, 9);
v_isSharedCheck_6177_ = !lean_is_exclusive(v___x_6156_);
if (v_isSharedCheck_6177_ == 0)
{
v___x_6168_ = v___x_6156_;
v_isShared_6169_ = v_isSharedCheck_6177_;
goto v_resetjp_6167_;
}
else
{
lean_inc(v_snapshotTasks_6166_);
lean_inc(v_infoState_6165_);
lean_inc(v_messages_6164_);
lean_inc(v_recordedDeps_6163_);
lean_inc(v_cache_6162_);
lean_inc(v_traceState_6161_);
lean_inc(v_auxDeclNGen_6160_);
lean_inc(v_ngen_6159_);
lean_inc(v_nextMacroScope_6158_);
lean_inc(v_env_6157_);
lean_dec(v___x_6156_);
v___x_6168_ = lean_box(0);
v_isShared_6169_ = v_isSharedCheck_6177_;
goto v_resetjp_6167_;
}
v_resetjp_6167_:
{
lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6173_; 
v___x_6170_ = lean_box(0);
v___x_6171_ = l_Lean_MessageLog_add(v___x_6155_, v_messages_6164_);
if (v_isShared_6169_ == 0)
{
lean_ctor_set(v___x_6168_, 7, v___x_6171_);
v___x_6173_ = v___x_6168_;
goto v_reusejp_6172_;
}
else
{
lean_object* v_reuseFailAlloc_6176_; 
v_reuseFailAlloc_6176_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6176_, 0, v_env_6157_);
lean_ctor_set(v_reuseFailAlloc_6176_, 1, v_nextMacroScope_6158_);
lean_ctor_set(v_reuseFailAlloc_6176_, 2, v_ngen_6159_);
lean_ctor_set(v_reuseFailAlloc_6176_, 3, v_auxDeclNGen_6160_);
lean_ctor_set(v_reuseFailAlloc_6176_, 4, v_traceState_6161_);
lean_ctor_set(v_reuseFailAlloc_6176_, 5, v_cache_6162_);
lean_ctor_set(v_reuseFailAlloc_6176_, 6, v_recordedDeps_6163_);
lean_ctor_set(v_reuseFailAlloc_6176_, 7, v___x_6171_);
lean_ctor_set(v_reuseFailAlloc_6176_, 8, v_infoState_6165_);
lean_ctor_set(v_reuseFailAlloc_6176_, 9, v_snapshotTasks_6166_);
v___x_6173_ = v_reuseFailAlloc_6176_;
goto v_reusejp_6172_;
}
v_reusejp_6172_:
{
lean_object* v___x_6174_; lean_object* v___x_6175_; 
v___x_6174_ = lean_st_ref_put(v___y_6150_, v___x_6173_);
v___x_6175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6175_, 0, v___x_6170_);
return v___x_6175_;
}
}
}
v___jp_6178_:
{
lean_object* v_fileName_6187_; lean_object* v_fileMap_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v_a_6191_; lean_object* v___x_6193_; uint8_t v_isShared_6194_; uint8_t v_isSharedCheck_6204_; 
v_fileName_6187_ = lean_ctor_get(v___y_6182_, 0);
v_fileMap_6188_ = lean_ctor_get(v___y_6182_, 1);
v___x_6189_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_6133_);
v___x_6190_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v___x_6189_, v___y_6136_, v___y_6137_, v___y_6138_, v___y_6139_);
v_a_6191_ = lean_ctor_get(v___x_6190_, 0);
v_isSharedCheck_6204_ = !lean_is_exclusive(v___x_6190_);
if (v_isSharedCheck_6204_ == 0)
{
v___x_6193_ = v___x_6190_;
v_isShared_6194_ = v_isSharedCheck_6204_;
goto v_resetjp_6192_;
}
else
{
lean_inc(v_a_6191_);
lean_dec(v___x_6190_);
v___x_6193_ = lean_box(0);
v_isShared_6194_ = v_isSharedCheck_6204_;
goto v_resetjp_6192_;
}
v_resetjp_6192_:
{
lean_object* v___x_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; lean_object* v___x_6198_; 
lean_inc_ref_n(v_fileMap_6188_, 2);
v___x_6195_ = l_Lean_FileMap_toPosition(v_fileMap_6188_, v___y_6183_);
lean_dec(v___y_6183_);
v___x_6196_ = l_Lean_FileMap_toPosition(v_fileMap_6188_, v___y_6186_);
lean_dec(v___y_6186_);
v___x_6197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6197_, 0, v___x_6196_);
v___x_6198_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0));
if (v___y_6185_ == 0)
{
lean_del_object(v___x_6193_);
lean_dec_ref(v___y_6180_);
v___y_6142_ = v___y_6181_;
v___y_6143_ = v___x_6197_;
v___y_6144_ = v_a_6191_;
v___y_6145_ = v___x_6198_;
v___y_6146_ = v_fileName_6187_;
v___y_6147_ = v___x_6195_;
v___y_6148_ = v___y_6184_;
v_toCold_6149_ = v___y_6179_;
v___y_6150_ = v___y_6139_;
goto v___jp_6141_;
}
else
{
uint8_t v___x_6199_; 
lean_inc(v_a_6191_);
v___x_6199_ = l_Lean_MessageData_hasTag(v___y_6180_, v_a_6191_);
if (v___x_6199_ == 0)
{
lean_object* v___x_6200_; lean_object* v___x_6202_; 
lean_dec_ref_known(v___x_6197_, 1);
lean_dec_ref(v___x_6195_);
lean_dec(v_a_6191_);
v___x_6200_ = lean_box(0);
if (v_isShared_6194_ == 0)
{
lean_ctor_set(v___x_6193_, 0, v___x_6200_);
v___x_6202_ = v___x_6193_;
goto v_reusejp_6201_;
}
else
{
lean_object* v_reuseFailAlloc_6203_; 
v_reuseFailAlloc_6203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6203_, 0, v___x_6200_);
v___x_6202_ = v_reuseFailAlloc_6203_;
goto v_reusejp_6201_;
}
v_reusejp_6201_:
{
return v___x_6202_;
}
}
else
{
lean_del_object(v___x_6193_);
v___y_6142_ = v___y_6181_;
v___y_6143_ = v___x_6197_;
v___y_6144_ = v_a_6191_;
v___y_6145_ = v___x_6198_;
v___y_6146_ = v_fileName_6187_;
v___y_6147_ = v___x_6195_;
v___y_6148_ = v___y_6184_;
v_toCold_6149_ = v___y_6179_;
v___y_6150_ = v___y_6139_;
goto v___jp_6141_;
}
}
}
}
v___jp_6205_:
{
lean_object* v___x_6213_; 
v___x_6213_ = l_Lean_Syntax_getTailPos_x3f(v___y_6210_, v___y_6209_);
lean_dec(v___y_6210_);
if (lean_obj_tag(v___x_6213_) == 0)
{
lean_inc(v___y_6212_);
v___y_6179_ = v___y_6206_;
v___y_6180_ = v___y_6207_;
v___y_6181_ = v___y_6209_;
v___y_6182_ = v___y_6206_;
v___y_6183_ = v___y_6212_;
v___y_6184_ = v___y_6211_;
v___y_6185_ = v___y_6208_;
v___y_6186_ = v___y_6212_;
goto v___jp_6178_;
}
else
{
lean_object* v_val_6214_; 
v_val_6214_ = lean_ctor_get(v___x_6213_, 0);
lean_inc(v_val_6214_);
lean_dec_ref_known(v___x_6213_, 1);
v___y_6179_ = v___y_6206_;
v___y_6180_ = v___y_6207_;
v___y_6181_ = v___y_6209_;
v___y_6182_ = v___y_6206_;
v___y_6183_ = v___y_6212_;
v___y_6184_ = v___y_6211_;
v___y_6185_ = v___y_6208_;
v___y_6186_ = v_val_6214_;
goto v___jp_6178_;
}
}
v___jp_6215_:
{
lean_object* v_toCold_6218_; lean_object* v_ref_6219_; uint8_t v_suppressElabErrors_6220_; lean_object* v___x_6221_; lean_object* v___f_6222_; lean_object* v_ref_6223_; lean_object* v___x_6224_; 
v_toCold_6218_ = lean_ctor_get(v___y_6138_, 0);
v_ref_6219_ = lean_ctor_get(v___y_6138_, 2);
v_suppressElabErrors_6220_ = lean_ctor_get_uint8(v___y_6138_, sizeof(void*)*3 + 2);
v___x_6221_ = lean_box(v_suppressElabErrors_6220_);
v___f_6222_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed), 2, 1);
lean_closure_set(v___f_6222_, 0, v___x_6221_);
v_ref_6223_ = l_Lean_replaceRef(v_ref_6132_, v_ref_6219_);
v___x_6224_ = l_Lean_Syntax_getPos_x3f(v_ref_6223_, v___y_6216_);
if (lean_obj_tag(v___x_6224_) == 0)
{
lean_object* v___x_6225_; 
v___x_6225_ = lean_unsigned_to_nat(0u);
v___y_6206_ = v_toCold_6218_;
v___y_6207_ = v___f_6222_;
v___y_6208_ = v_suppressElabErrors_6220_;
v___y_6209_ = v___y_6216_;
v___y_6210_ = v_ref_6223_;
v___y_6211_ = v___y_6217_;
v___y_6212_ = v___x_6225_;
goto v___jp_6205_;
}
else
{
lean_object* v_val_6226_; 
v_val_6226_ = lean_ctor_get(v___x_6224_, 0);
lean_inc(v_val_6226_);
lean_dec_ref_known(v___x_6224_, 1);
v___y_6206_ = v_toCold_6218_;
v___y_6207_ = v___f_6222_;
v___y_6208_ = v_suppressElabErrors_6220_;
v___y_6209_ = v___y_6216_;
v___y_6210_ = v_ref_6223_;
v___y_6211_ = v___y_6217_;
v___y_6212_ = v_val_6226_;
goto v___jp_6205_;
}
}
v___jp_6228_:
{
uint8_t v___x_6230_; uint8_t v___x_6231_; 
v___x_6230_ = 1;
v___x_6231_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6134_, v___x_6230_);
if (v___x_6231_ == 0)
{
v___y_6216_ = v___y_6229_;
v___y_6217_ = v_severity_6134_;
goto v___jp_6215_;
}
else
{
lean_object* v___x_6232_; lean_object* v___x_6233_; uint8_t v___x_6234_; 
v___x_6232_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_6138_);
v___x_6233_ = l_Lean_warningAsError;
v___x_6234_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9(v___x_6232_, v___x_6233_);
lean_dec_ref(v___x_6232_);
if (v___x_6234_ == 0)
{
v___y_6216_ = v___y_6229_;
v___y_6217_ = v_severity_6134_;
goto v___jp_6215_;
}
else
{
v___y_6216_ = v___y_6229_;
v___y_6217_ = v___x_6227_;
goto v___jp_6215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___boxed(lean_object* v_ref_6239_, lean_object* v_msgData_6240_, lean_object* v_severity_6241_, lean_object* v_isSilent_6242_, lean_object* v___y_6243_, lean_object* v___y_6244_, lean_object* v___y_6245_, lean_object* v___y_6246_, lean_object* v___y_6247_){
_start:
{
uint8_t v_severity_boxed_6248_; uint8_t v_isSilent_boxed_6249_; lean_object* v_res_6250_; 
v_severity_boxed_6248_ = lean_unbox(v_severity_6241_);
v_isSilent_boxed_6249_ = lean_unbox(v_isSilent_6242_);
v_res_6250_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(v_ref_6239_, v_msgData_6240_, v_severity_boxed_6248_, v_isSilent_boxed_6249_, v___y_6243_, v___y_6244_, v___y_6245_, v___y_6246_);
lean_dec(v___y_6246_);
lean_dec_ref(v___y_6245_);
lean_dec(v___y_6244_);
lean_dec_ref(v___y_6243_);
lean_dec(v_ref_6239_);
return v_res_6250_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(lean_object* v_msgData_6251_, uint8_t v_severity_6252_, uint8_t v_isSilent_6253_, lean_object* v___y_6254_, lean_object* v___y_6255_, lean_object* v___y_6256_, lean_object* v___y_6257_){
_start:
{
lean_object* v_ref_6259_; lean_object* v___x_6260_; 
v_ref_6259_ = lean_ctor_get(v___y_6256_, 2);
v___x_6260_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(v_ref_6259_, v_msgData_6251_, v_severity_6252_, v_isSilent_6253_, v___y_6254_, v___y_6255_, v___y_6256_, v___y_6257_);
return v___x_6260_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_msgData_6261_, lean_object* v_severity_6262_, lean_object* v_isSilent_6263_, lean_object* v___y_6264_, lean_object* v___y_6265_, lean_object* v___y_6266_, lean_object* v___y_6267_, lean_object* v___y_6268_){
_start:
{
uint8_t v_severity_boxed_6269_; uint8_t v_isSilent_boxed_6270_; lean_object* v_res_6271_; 
v_severity_boxed_6269_ = lean_unbox(v_severity_6262_);
v_isSilent_boxed_6270_ = lean_unbox(v_isSilent_6263_);
v_res_6271_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(v_msgData_6261_, v_severity_boxed_6269_, v_isSilent_boxed_6270_, v___y_6264_, v___y_6265_, v___y_6266_, v___y_6267_);
lean_dec(v___y_6267_);
lean_dec_ref(v___y_6266_);
lean_dec(v___y_6265_);
lean_dec_ref(v___y_6264_);
return v_res_6271_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(lean_object* v_msgData_6272_, lean_object* v___y_6273_, lean_object* v___y_6274_, lean_object* v___y_6275_, lean_object* v___y_6276_){
_start:
{
uint8_t v___x_6278_; uint8_t v___x_6279_; lean_object* v___x_6280_; 
v___x_6278_ = 2;
v___x_6279_ = 0;
v___x_6280_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(v_msgData_6272_, v___x_6278_, v___x_6279_, v___y_6273_, v___y_6274_, v___y_6275_, v___y_6276_);
return v___x_6280_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_6281_, lean_object* v___y_6282_, lean_object* v___y_6283_, lean_object* v___y_6284_, lean_object* v___y_6285_, lean_object* v___y_6286_){
_start:
{
lean_object* v_res_6287_; 
v_res_6287_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(v_msgData_6281_, v___y_6282_, v___y_6283_, v___y_6284_, v___y_6285_);
lean_dec(v___y_6285_);
lean_dec_ref(v___y_6284_);
lean_dec(v___y_6283_);
lean_dec_ref(v___y_6282_);
return v_res_6287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(lean_object* v_f_6288_, lean_object* v___y_6289_, lean_object* v___y_6290_, lean_object* v___y_6291_, lean_object* v___y_6292_){
_start:
{
lean_object* v_module_6294_; lean_object* v_const_6295_; lean_object* v_exception_6296_; lean_object* v___x_6297_; lean_object* v___x_6298_; lean_object* v___x_6299_; lean_object* v___x_6300_; lean_object* v___x_6301_; lean_object* v___x_6302_; lean_object* v___x_6303_; lean_object* v___x_6304_; lean_object* v___x_6305_; lean_object* v___x_6306_; lean_object* v___x_6307_; lean_object* v___x_6308_; 
v_module_6294_ = lean_ctor_get(v_f_6288_, 0);
lean_inc(v_module_6294_);
v_const_6295_ = lean_ctor_get(v_f_6288_, 1);
lean_inc(v_const_6295_);
v_exception_6296_ = lean_ctor_get(v_f_6288_, 2);
lean_inc_ref(v_exception_6296_);
lean_dec_ref(v_f_6288_);
v___x_6297_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_6298_ = l_Lean_MessageData_ofName(v_const_6295_);
v___x_6299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6299_, 0, v___x_6297_);
lean_ctor_set(v___x_6299_, 1, v___x_6298_);
v___x_6300_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_6301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6301_, 0, v___x_6299_);
lean_ctor_set(v___x_6301_, 1, v___x_6300_);
v___x_6302_ = l_Lean_MessageData_ofName(v_module_6294_);
v___x_6303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6303_, 0, v___x_6301_);
lean_ctor_set(v___x_6303_, 1, v___x_6302_);
v___x_6304_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_6305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6305_, 0, v___x_6303_);
lean_ctor_set(v___x_6305_, 1, v___x_6304_);
v___x_6306_ = l_Lean_Exception_toMessageData(v_exception_6296_);
v___x_6307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6307_, 0, v___x_6305_);
lean_ctor_set(v___x_6307_, 1, v___x_6306_);
v___x_6308_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(v___x_6307_, v___y_6289_, v___y_6290_, v___y_6291_, v___y_6292_);
return v___x_6308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0___boxed(lean_object* v_f_6309_, lean_object* v___y_6310_, lean_object* v___y_6311_, lean_object* v___y_6312_, lean_object* v___y_6313_, lean_object* v___y_6314_){
_start:
{
lean_object* v_res_6315_; 
v_res_6315_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(v_f_6309_, v___y_6310_, v___y_6311_, v___y_6312_, v___y_6313_);
lean_dec(v___y_6313_);
lean_dec_ref(v___y_6312_);
lean_dec(v___y_6311_);
lean_dec_ref(v___y_6310_);
return v_res_6315_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(lean_object* v_as_6316_, size_t v_i_6317_, size_t v_stop_6318_, lean_object* v_b_6319_, lean_object* v___y_6320_, lean_object* v___y_6321_, lean_object* v___y_6322_, lean_object* v___y_6323_){
_start:
{
uint8_t v___x_6325_; 
v___x_6325_ = lean_usize_dec_eq(v_i_6317_, v_stop_6318_);
if (v___x_6325_ == 0)
{
lean_object* v___x_6326_; lean_object* v___x_6327_; 
v___x_6326_ = lean_array_uget_borrowed(v_as_6316_, v_i_6317_);
lean_inc(v___x_6326_);
v___x_6327_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(v___x_6326_, v___y_6320_, v___y_6321_, v___y_6322_, v___y_6323_);
if (lean_obj_tag(v___x_6327_) == 0)
{
lean_object* v_a_6328_; size_t v___x_6329_; size_t v___x_6330_; 
v_a_6328_ = lean_ctor_get(v___x_6327_, 0);
lean_inc(v_a_6328_);
lean_dec_ref_known(v___x_6327_, 1);
v___x_6329_ = ((size_t)1ULL);
v___x_6330_ = lean_usize_add(v_i_6317_, v___x_6329_);
v_i_6317_ = v___x_6330_;
v_b_6319_ = v_a_6328_;
goto _start;
}
else
{
return v___x_6327_;
}
}
else
{
lean_object* v___x_6332_; 
v___x_6332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6332_, 0, v_b_6319_);
return v___x_6332_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3___boxed(lean_object* v_as_6333_, lean_object* v_i_6334_, lean_object* v_stop_6335_, lean_object* v_b_6336_, lean_object* v___y_6337_, lean_object* v___y_6338_, lean_object* v___y_6339_, lean_object* v___y_6340_, lean_object* v___y_6341_){
_start:
{
size_t v_i_boxed_6342_; size_t v_stop_boxed_6343_; lean_object* v_res_6344_; 
v_i_boxed_6342_ = lean_unbox_usize(v_i_6334_);
lean_dec(v_i_6334_);
v_stop_boxed_6343_ = lean_unbox_usize(v_stop_6335_);
lean_dec(v_stop_6335_);
v_res_6344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(v_as_6333_, v_i_boxed_6342_, v_stop_boxed_6343_, v_b_6336_, v___y_6337_, v___y_6338_, v___y_6339_, v___y_6340_);
lean_dec(v___y_6340_);
lean_dec_ref(v___y_6339_);
lean_dec(v___y_6338_);
lean_dec_ref(v___y_6337_);
lean_dec_ref(v_as_6333_);
return v_res_6344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(lean_object* v_as_6345_, size_t v_i_6346_, size_t v_stop_6347_, lean_object* v_b_6348_){
_start:
{
uint8_t v___x_6349_; 
v___x_6349_ = lean_usize_dec_eq(v_i_6346_, v_stop_6347_);
if (v___x_6349_ == 0)
{
lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; size_t v___x_6353_; size_t v___x_6354_; 
v___x_6350_ = lean_array_uget_borrowed(v_as_6345_, v_i_6346_);
lean_inc(v___x_6350_);
v___x_6351_ = lean_task_get_own(v___x_6350_);
v___x_6352_ = l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(v_b_6348_, v___x_6351_);
v___x_6353_ = ((size_t)1ULL);
v___x_6354_ = lean_usize_add(v_i_6346_, v___x_6353_);
v_i_6346_ = v___x_6354_;
v_b_6348_ = v___x_6352_;
goto _start;
}
else
{
return v_b_6348_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_as_6356_, lean_object* v_i_6357_, lean_object* v_stop_6358_, lean_object* v_b_6359_){
_start:
{
size_t v_i_boxed_6360_; size_t v_stop_boxed_6361_; lean_object* v_res_6362_; 
v_i_boxed_6360_ = lean_unbox_usize(v_i_6357_);
lean_dec(v_i_6357_);
v_stop_boxed_6361_ = lean_unbox_usize(v_stop_6358_);
lean_dec(v_stop_6358_);
v_res_6362_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_as_6356_, v_i_boxed_6360_, v_stop_boxed_6361_, v_b_6359_);
lean_dec_ref(v_as_6356_);
return v_res_6362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(lean_object* v_z_6363_, lean_object* v_tasks_6364_){
_start:
{
lean_object* v___x_6365_; lean_object* v___x_6366_; uint8_t v___x_6367_; 
v___x_6365_ = lean_unsigned_to_nat(0u);
v___x_6366_ = lean_array_get_size(v_tasks_6364_);
v___x_6367_ = lean_nat_dec_lt(v___x_6365_, v___x_6366_);
if (v___x_6367_ == 0)
{
return v_z_6363_;
}
else
{
size_t v___x_6368_; size_t v___x_6369_; lean_object* v___x_6370_; 
v___x_6368_ = ((size_t)0ULL);
v___x_6369_ = lean_usize_of_nat(v___x_6366_);
v___x_6370_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_tasks_6364_, v___x_6368_, v___x_6369_, v_z_6363_);
return v___x_6370_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg___boxed(lean_object* v_z_6371_, lean_object* v_tasks_6372_){
_start:
{
lean_object* v_res_6373_; 
v_res_6373_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v_z_6371_, v_tasks_6372_);
lean_dec_ref(v_tasks_6372_);
return v_res_6373_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_6374_; lean_object* v___x_6375_; lean_object* v___x_6376_; 
v___x_6374_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6375_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___redArg___closed__2);
v___x_6376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6376_, 0, v___x_6375_);
lean_ctor_set(v___x_6376_, 1, v___x_6374_);
return v___x_6376_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_6377_; lean_object* v___x_6378_; lean_object* v___x_6379_; 
v___x_6377_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6378_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0);
v___x_6379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6379_, 0, v___x_6378_);
lean_ctor_set(v___x_6379_, 1, v___x_6377_);
return v___x_6379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(lean_object* v_cctx_6380_, lean_object* v_ngen_6381_, lean_object* v_env_6382_, lean_object* v_act_6383_, lean_object* v_constantsPerTask_6384_, lean_object* v___y_6385_, lean_object* v___y_6386_, lean_object* v___y_6387_, lean_object* v___y_6388_){
_start:
{
lean_object* v___x_6390_; lean_object* v_moduleData_6391_; lean_object* v_n_6392_; lean_object* v___x_6393_; lean_object* v___x_6394_; lean_object* v___x_6395_; lean_object* v_a_6396_; lean_object* v___x_6398_; uint8_t v_isShared_6399_; uint8_t v_isSharedCheck_6431_; 
v___x_6390_ = l_Lean_Environment_header(v_env_6382_);
v_moduleData_6391_ = lean_ctor_get(v___x_6390_, 7);
lean_inc_ref(v_moduleData_6391_);
lean_dec_ref(v___x_6390_);
v_n_6392_ = lean_array_get_size(v_moduleData_6391_);
lean_dec_ref(v_moduleData_6391_);
v___x_6393_ = lean_unsigned_to_nat(0u);
v___x_6394_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6395_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6380_, v_env_6382_, v_act_6383_, v_constantsPerTask_6384_, v_n_6392_, v_ngen_6381_, v___x_6394_, v___x_6393_, v___x_6393_, v___x_6393_);
v_a_6396_ = lean_ctor_get(v___x_6395_, 0);
v_isSharedCheck_6431_ = !lean_is_exclusive(v___x_6395_);
if (v_isSharedCheck_6431_ == 0)
{
v___x_6398_ = v___x_6395_;
v_isShared_6399_ = v_isSharedCheck_6431_;
goto v_resetjp_6397_;
}
else
{
lean_inc(v_a_6396_);
lean_dec(v___x_6395_);
v___x_6398_ = lean_box(0);
v_isShared_6399_ = v_isSharedCheck_6431_;
goto v_resetjp_6397_;
}
v_resetjp_6397_:
{
lean_object* v___x_6400_; lean_object* v_r_6401_; lean_object* v_tree_6402_; lean_object* v_errors_6403_; lean_object* v___x_6404_; uint8_t v___x_6405_; 
v___x_6400_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1);
v_r_6401_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v___x_6400_, v_a_6396_);
lean_dec(v_a_6396_);
v_tree_6402_ = lean_ctor_get(v_r_6401_, 0);
lean_inc_ref(v_tree_6402_);
v_errors_6403_ = lean_ctor_get(v_r_6401_, 1);
lean_inc_ref(v_errors_6403_);
lean_dec_ref(v_r_6401_);
v___x_6404_ = lean_array_get_size(v_errors_6403_);
v___x_6405_ = lean_nat_dec_lt(v___x_6393_, v___x_6404_);
if (v___x_6405_ == 0)
{
lean_object* v___x_6406_; lean_object* v___x_6408_; 
lean_dec_ref(v_errors_6403_);
v___x_6406_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_6402_);
if (v_isShared_6399_ == 0)
{
lean_ctor_set(v___x_6398_, 0, v___x_6406_);
v___x_6408_ = v___x_6398_;
goto v_reusejp_6407_;
}
else
{
lean_object* v_reuseFailAlloc_6409_; 
v_reuseFailAlloc_6409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6409_, 0, v___x_6406_);
v___x_6408_ = v_reuseFailAlloc_6409_;
goto v_reusejp_6407_;
}
v_reusejp_6407_:
{
return v___x_6408_;
}
}
else
{
lean_object* v___x_6410_; size_t v___x_6411_; size_t v___x_6412_; lean_object* v___x_6413_; 
lean_del_object(v___x_6398_);
v___x_6410_ = lean_box(0);
v___x_6411_ = ((size_t)0ULL);
v___x_6412_ = lean_usize_of_nat(v___x_6404_);
v___x_6413_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(v_errors_6403_, v___x_6411_, v___x_6412_, v___x_6410_, v___y_6385_, v___y_6386_, v___y_6387_, v___y_6388_);
lean_dec_ref(v_errors_6403_);
if (lean_obj_tag(v___x_6413_) == 0)
{
lean_object* v___x_6415_; uint8_t v_isShared_6416_; uint8_t v_isSharedCheck_6421_; 
v_isSharedCheck_6421_ = !lean_is_exclusive(v___x_6413_);
if (v_isSharedCheck_6421_ == 0)
{
lean_object* v_unused_6422_; 
v_unused_6422_ = lean_ctor_get(v___x_6413_, 0);
lean_dec(v_unused_6422_);
v___x_6415_ = v___x_6413_;
v_isShared_6416_ = v_isSharedCheck_6421_;
goto v_resetjp_6414_;
}
else
{
lean_dec(v___x_6413_);
v___x_6415_ = lean_box(0);
v_isShared_6416_ = v_isSharedCheck_6421_;
goto v_resetjp_6414_;
}
v_resetjp_6414_:
{
lean_object* v___x_6417_; lean_object* v___x_6419_; 
v___x_6417_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_6402_);
if (v_isShared_6416_ == 0)
{
lean_ctor_set(v___x_6415_, 0, v___x_6417_);
v___x_6419_ = v___x_6415_;
goto v_reusejp_6418_;
}
else
{
lean_object* v_reuseFailAlloc_6420_; 
v_reuseFailAlloc_6420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6420_, 0, v___x_6417_);
v___x_6419_ = v_reuseFailAlloc_6420_;
goto v_reusejp_6418_;
}
v_reusejp_6418_:
{
return v___x_6419_;
}
}
}
else
{
lean_object* v_a_6423_; lean_object* v___x_6425_; uint8_t v_isShared_6426_; uint8_t v_isSharedCheck_6430_; 
lean_dec_ref(v_tree_6402_);
v_a_6423_ = lean_ctor_get(v___x_6413_, 0);
v_isSharedCheck_6430_ = !lean_is_exclusive(v___x_6413_);
if (v_isSharedCheck_6430_ == 0)
{
v___x_6425_ = v___x_6413_;
v_isShared_6426_ = v_isSharedCheck_6430_;
goto v_resetjp_6424_;
}
else
{
lean_inc(v_a_6423_);
lean_dec(v___x_6413_);
v___x_6425_ = lean_box(0);
v_isShared_6426_ = v_isSharedCheck_6430_;
goto v_resetjp_6424_;
}
v_resetjp_6424_:
{
lean_object* v___x_6428_; 
if (v_isShared_6426_ == 0)
{
v___x_6428_ = v___x_6425_;
goto v_reusejp_6427_;
}
else
{
lean_object* v_reuseFailAlloc_6429_; 
v_reuseFailAlloc_6429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6429_, 0, v_a_6423_);
v___x_6428_ = v_reuseFailAlloc_6429_;
goto v_reusejp_6427_;
}
v_reusejp_6427_:
{
return v___x_6428_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___boxed(lean_object* v_cctx_6432_, lean_object* v_ngen_6433_, lean_object* v_env_6434_, lean_object* v_act_6435_, lean_object* v_constantsPerTask_6436_, lean_object* v___y_6437_, lean_object* v___y_6438_, lean_object* v___y_6439_, lean_object* v___y_6440_, lean_object* v___y_6441_){
_start:
{
lean_object* v_res_6442_; 
v_res_6442_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v_cctx_6432_, v_ngen_6433_, v_env_6434_, v_act_6435_, v_constantsPerTask_6436_, v___y_6437_, v___y_6438_, v___y_6439_, v___y_6440_);
lean_dec(v___y_6440_);
lean_dec_ref(v___y_6439_);
lean_dec(v___y_6438_);
lean_dec_ref(v___y_6437_);
lean_dec(v_constantsPerTask_6436_);
return v_res_6442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(lean_object* v_a_6443_, lean_object* v___x_6444_, lean_object* v_addEntry_6445_, lean_object* v_constantsPerTask_6446_, lean_object* v_droppedEntriesRef_6447_, lean_object* v_droppedKeys_6448_, lean_object* v___y_6449_, lean_object* v___y_6450_, lean_object* v___y_6451_, lean_object* v___y_6452_){
_start:
{
lean_object* v___x_6454_; lean_object* v_env_6455_; lean_object* v___x_6456_; lean_object* v___x_6457_; 
v___x_6454_ = lean_st_ref_get(v___y_6452_);
v_env_6455_ = lean_ctor_get(v___x_6454_, 0);
lean_inc_ref(v_env_6455_);
lean_dec(v___x_6454_);
lean_inc_ref(v_a_6443_);
v___x_6456_ = l_Lean_Meta_LazyDiscrTree_createTreeCtx(v_a_6443_);
v___x_6457_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v___x_6456_, v___x_6444_, v_env_6455_, v_addEntry_6445_, v_constantsPerTask_6446_, v___y_6449_, v___y_6450_, v___y_6451_, v___y_6452_);
if (lean_obj_tag(v___x_6457_) == 0)
{
if (lean_obj_tag(v_droppedEntriesRef_6447_) == 1)
{
lean_object* v_a_6458_; lean_object* v_val_6459_; lean_object* v___x_6461_; uint8_t v_isShared_6462_; uint8_t v_isSharedCheck_6492_; 
v_a_6458_ = lean_ctor_get(v___x_6457_, 0);
lean_inc(v_a_6458_);
lean_dec_ref_known(v___x_6457_, 1);
v_val_6459_ = lean_ctor_get(v_droppedEntriesRef_6447_, 0);
v_isSharedCheck_6492_ = !lean_is_exclusive(v_droppedEntriesRef_6447_);
if (v_isSharedCheck_6492_ == 0)
{
v___x_6461_ = v_droppedEntriesRef_6447_;
v_isShared_6462_ = v_isSharedCheck_6492_;
goto v_resetjp_6460_;
}
else
{
lean_inc(v_val_6459_);
lean_dec(v_droppedEntriesRef_6447_);
v___x_6461_ = lean_box(0);
v_isShared_6462_ = v_isSharedCheck_6492_;
goto v_resetjp_6460_;
}
v_resetjp_6460_:
{
lean_object* v___x_6463_; 
v___x_6463_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_a_6458_, v_droppedKeys_6448_, v___y_6449_, v___y_6450_, v___y_6451_, v___y_6452_);
lean_dec(v_droppedKeys_6448_);
if (lean_obj_tag(v___x_6463_) == 0)
{
lean_object* v_a_6464_; lean_object* v___x_6466_; uint8_t v_isShared_6467_; uint8_t v_isSharedCheck_6483_; 
v_a_6464_ = lean_ctor_get(v___x_6463_, 0);
v_isSharedCheck_6483_ = !lean_is_exclusive(v___x_6463_);
if (v_isSharedCheck_6483_ == 0)
{
v___x_6466_ = v___x_6463_;
v_isShared_6467_ = v_isSharedCheck_6483_;
goto v_resetjp_6465_;
}
else
{
lean_inc(v_a_6464_);
lean_dec(v___x_6463_);
v___x_6466_ = lean_box(0);
v_isShared_6467_ = v_isSharedCheck_6483_;
goto v_resetjp_6465_;
}
v_resetjp_6465_:
{
lean_object* v_fst_6468_; lean_object* v_snd_6469_; lean_object* v___x_6470_; lean_object* v___y_6472_; 
v_fst_6468_ = lean_ctor_get(v_a_6464_, 0);
lean_inc(v_fst_6468_);
v_snd_6469_ = lean_ctor_get(v_a_6464_, 1);
lean_inc(v_snd_6469_);
lean_dec(v_a_6464_);
v___x_6470_ = lean_st_ref_get(v_val_6459_);
if (lean_obj_tag(v___x_6470_) == 0)
{
lean_object* v___x_6481_; 
v___x_6481_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___y_6472_ = v___x_6481_;
goto v___jp_6471_;
}
else
{
lean_object* v_val_6482_; 
v_val_6482_ = lean_ctor_get(v___x_6470_, 0);
lean_inc(v_val_6482_);
lean_dec_ref_known(v___x_6470_, 1);
v___y_6472_ = v_val_6482_;
goto v___jp_6471_;
}
v___jp_6471_:
{
lean_object* v___x_6473_; lean_object* v___x_6475_; 
v___x_6473_ = l_Array_append___redArg(v___y_6472_, v_fst_6468_);
lean_dec(v_fst_6468_);
if (v_isShared_6462_ == 0)
{
lean_ctor_set(v___x_6461_, 0, v___x_6473_);
v___x_6475_ = v___x_6461_;
goto v_reusejp_6474_;
}
else
{
lean_object* v_reuseFailAlloc_6480_; 
v_reuseFailAlloc_6480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6480_, 0, v___x_6473_);
v___x_6475_ = v_reuseFailAlloc_6480_;
goto v_reusejp_6474_;
}
v_reusejp_6474_:
{
lean_object* v___x_6476_; lean_object* v___x_6478_; 
v___x_6476_ = lean_st_ref_swap(v_val_6459_, v___x_6475_);
lean_dec(v_val_6459_);
lean_dec(v___x_6476_);
if (v_isShared_6467_ == 0)
{
lean_ctor_set(v___x_6466_, 0, v_snd_6469_);
v___x_6478_ = v___x_6466_;
goto v_reusejp_6477_;
}
else
{
lean_object* v_reuseFailAlloc_6479_; 
v_reuseFailAlloc_6479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6479_, 0, v_snd_6469_);
v___x_6478_ = v_reuseFailAlloc_6479_;
goto v_reusejp_6477_;
}
v_reusejp_6477_:
{
return v___x_6478_;
}
}
}
}
}
else
{
lean_object* v_a_6484_; lean_object* v___x_6486_; uint8_t v_isShared_6487_; uint8_t v_isSharedCheck_6491_; 
lean_del_object(v___x_6461_);
lean_dec(v_val_6459_);
v_a_6484_ = lean_ctor_get(v___x_6463_, 0);
v_isSharedCheck_6491_ = !lean_is_exclusive(v___x_6463_);
if (v_isSharedCheck_6491_ == 0)
{
v___x_6486_ = v___x_6463_;
v_isShared_6487_ = v_isSharedCheck_6491_;
goto v_resetjp_6485_;
}
else
{
lean_inc(v_a_6484_);
lean_dec(v___x_6463_);
v___x_6486_ = lean_box(0);
v_isShared_6487_ = v_isSharedCheck_6491_;
goto v_resetjp_6485_;
}
v_resetjp_6485_:
{
lean_object* v___x_6489_; 
if (v_isShared_6487_ == 0)
{
v___x_6489_ = v___x_6486_;
goto v_reusejp_6488_;
}
else
{
lean_object* v_reuseFailAlloc_6490_; 
v_reuseFailAlloc_6490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6490_, 0, v_a_6484_);
v___x_6489_ = v_reuseFailAlloc_6490_;
goto v_reusejp_6488_;
}
v_reusejp_6488_:
{
return v___x_6489_;
}
}
}
}
}
else
{
lean_object* v_a_6493_; lean_object* v___x_6494_; 
lean_dec(v_droppedEntriesRef_6447_);
v_a_6493_ = lean_ctor_get(v___x_6457_, 0);
lean_inc(v_a_6493_);
lean_dec_ref_known(v___x_6457_, 1);
v___x_6494_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_a_6493_, v_droppedKeys_6448_, v___y_6449_, v___y_6450_, v___y_6451_, v___y_6452_);
return v___x_6494_;
}
}
else
{
lean_dec(v_droppedKeys_6448_);
lean_dec(v_droppedEntriesRef_6447_);
return v___x_6457_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed(lean_object* v_a_6495_, lean_object* v___x_6496_, lean_object* v_addEntry_6497_, lean_object* v_constantsPerTask_6498_, lean_object* v_droppedEntriesRef_6499_, lean_object* v_droppedKeys_6500_, lean_object* v___y_6501_, lean_object* v___y_6502_, lean_object* v___y_6503_, lean_object* v___y_6504_, lean_object* v___y_6505_){
_start:
{
lean_object* v_res_6506_; 
v_res_6506_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(v_a_6495_, v___x_6496_, v_addEntry_6497_, v_constantsPerTask_6498_, v_droppedEntriesRef_6499_, v_droppedKeys_6500_, v___y_6501_, v___y_6502_, v___y_6503_, v___y_6504_);
lean_dec(v___y_6504_);
lean_dec_ref(v___y_6503_);
lean_dec(v___y_6502_);
lean_dec_ref(v___y_6501_);
lean_dec(v_constantsPerTask_6498_);
lean_dec_ref(v_a_6495_);
return v_res_6506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(lean_object* v_ref_6508_, lean_object* v_addEntry_6509_, lean_object* v_droppedKeys_6510_, lean_object* v_constantsPerTask_6511_, lean_object* v_droppedEntriesRef_6512_, lean_object* v_ty_6513_, lean_object* v_a_6514_, lean_object* v_a_6515_, lean_object* v_a_6516_, lean_object* v_a_6517_){
_start:
{
lean_object* v_a_6520_; lean_object* v___x_6542_; lean_object* v_ngen_6543_; lean_object* v_namePrefix_6544_; lean_object* v_idx_6545_; lean_object* v___x_6547_; uint8_t v_isShared_6548_; uint8_t v_isSharedCheck_6591_; 
v___x_6542_ = lean_st_ref_get(v_a_6517_);
v_ngen_6543_ = lean_ctor_get(v___x_6542_, 2);
lean_inc_ref(v_ngen_6543_);
lean_dec(v___x_6542_);
v_namePrefix_6544_ = lean_ctor_get(v_ngen_6543_, 0);
v_idx_6545_ = lean_ctor_get(v_ngen_6543_, 1);
v_isSharedCheck_6591_ = !lean_is_exclusive(v_ngen_6543_);
if (v_isSharedCheck_6591_ == 0)
{
v___x_6547_ = v_ngen_6543_;
v_isShared_6548_ = v_isSharedCheck_6591_;
goto v_resetjp_6546_;
}
else
{
lean_inc(v_idx_6545_);
lean_inc(v_namePrefix_6544_);
lean_dec(v_ngen_6543_);
v___x_6547_ = lean_box(0);
v_isShared_6548_ = v_isSharedCheck_6591_;
goto v_resetjp_6546_;
}
v___jp_6519_:
{
lean_object* v___x_6521_; 
v___x_6521_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_a_6520_, v_ty_6513_, v_a_6514_, v_a_6515_, v_a_6516_, v_a_6517_);
if (lean_obj_tag(v___x_6521_) == 0)
{
lean_object* v_a_6522_; lean_object* v___x_6524_; uint8_t v_isShared_6525_; uint8_t v_isSharedCheck_6533_; 
v_a_6522_ = lean_ctor_get(v___x_6521_, 0);
v_isSharedCheck_6533_ = !lean_is_exclusive(v___x_6521_);
if (v_isSharedCheck_6533_ == 0)
{
v___x_6524_ = v___x_6521_;
v_isShared_6525_ = v_isSharedCheck_6533_;
goto v_resetjp_6523_;
}
else
{
lean_inc(v_a_6522_);
lean_dec(v___x_6521_);
v___x_6524_ = lean_box(0);
v_isShared_6525_ = v_isSharedCheck_6533_;
goto v_resetjp_6523_;
}
v_resetjp_6523_:
{
lean_object* v_fst_6526_; lean_object* v_snd_6527_; lean_object* v___x_6528_; lean_object* v___x_6529_; lean_object* v___x_6531_; 
v_fst_6526_ = lean_ctor_get(v_a_6522_, 0);
lean_inc(v_fst_6526_);
v_snd_6527_ = lean_ctor_get(v_a_6522_, 1);
lean_inc(v_snd_6527_);
lean_dec(v_a_6522_);
v___x_6528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6528_, 0, v_snd_6527_);
v___x_6529_ = lean_st_ref_swap(v_ref_6508_, v___x_6528_);
lean_dec(v___x_6529_);
if (v_isShared_6525_ == 0)
{
lean_ctor_set(v___x_6524_, 0, v_fst_6526_);
v___x_6531_ = v___x_6524_;
goto v_reusejp_6530_;
}
else
{
lean_object* v_reuseFailAlloc_6532_; 
v_reuseFailAlloc_6532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6532_, 0, v_fst_6526_);
v___x_6531_ = v_reuseFailAlloc_6532_;
goto v_reusejp_6530_;
}
v_reusejp_6530_:
{
return v___x_6531_;
}
}
}
else
{
lean_object* v_a_6534_; lean_object* v___x_6536_; uint8_t v_isShared_6537_; uint8_t v_isSharedCheck_6541_; 
v_a_6534_ = lean_ctor_get(v___x_6521_, 0);
v_isSharedCheck_6541_ = !lean_is_exclusive(v___x_6521_);
if (v_isSharedCheck_6541_ == 0)
{
v___x_6536_ = v___x_6521_;
v_isShared_6537_ = v_isSharedCheck_6541_;
goto v_resetjp_6535_;
}
else
{
lean_inc(v_a_6534_);
lean_dec(v___x_6521_);
v___x_6536_ = lean_box(0);
v_isShared_6537_ = v_isSharedCheck_6541_;
goto v_resetjp_6535_;
}
v_resetjp_6535_:
{
lean_object* v___x_6539_; 
if (v_isShared_6537_ == 0)
{
v___x_6539_ = v___x_6536_;
goto v_reusejp_6538_;
}
else
{
lean_object* v_reuseFailAlloc_6540_; 
v_reuseFailAlloc_6540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6540_, 0, v_a_6534_);
v___x_6539_ = v_reuseFailAlloc_6540_;
goto v_reusejp_6538_;
}
v_reusejp_6538_:
{
return v___x_6539_;
}
}
}
}
v_resetjp_6546_:
{
lean_object* v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6552_; 
lean_inc(v_idx_6545_);
lean_inc(v_namePrefix_6544_);
v___x_6549_ = l_Lean_Name_num___override(v_namePrefix_6544_, v_idx_6545_);
v___x_6550_ = lean_unsigned_to_nat(1u);
if (v_isShared_6548_ == 0)
{
lean_ctor_set(v___x_6547_, 1, v___x_6550_);
lean_ctor_set(v___x_6547_, 0, v___x_6549_);
v___x_6552_ = v___x_6547_;
goto v_reusejp_6551_;
}
else
{
lean_object* v_reuseFailAlloc_6590_; 
v_reuseFailAlloc_6590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6590_, 0, v___x_6549_);
lean_ctor_set(v_reuseFailAlloc_6590_, 1, v___x_6550_);
v___x_6552_ = v_reuseFailAlloc_6590_;
goto v_reusejp_6551_;
}
v_reusejp_6551_:
{
lean_object* v___f_6553_; lean_object* v___x_6554_; lean_object* v___x_6555_; lean_object* v___x_6556_; lean_object* v_env_6557_; lean_object* v_nextMacroScope_6558_; lean_object* v_auxDeclNGen_6559_; lean_object* v_traceState_6560_; lean_object* v_cache_6561_; lean_object* v_recordedDeps_6562_; lean_object* v_messages_6563_; lean_object* v_infoState_6564_; lean_object* v_snapshotTasks_6565_; lean_object* v___x_6567_; uint8_t v_isShared_6568_; uint8_t v_isSharedCheck_6588_; 
lean_inc_ref(v_a_6516_);
v___f_6553_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_6553_, 0, v_a_6516_);
lean_closure_set(v___f_6553_, 1, v___x_6552_);
lean_closure_set(v___f_6553_, 2, v_addEntry_6509_);
lean_closure_set(v___f_6553_, 3, v_constantsPerTask_6511_);
lean_closure_set(v___f_6553_, 4, v_droppedEntriesRef_6512_);
lean_closure_set(v___f_6553_, 5, v_droppedKeys_6510_);
v___x_6554_ = lean_nat_add(v_idx_6545_, v___x_6550_);
lean_dec(v_idx_6545_);
v___x_6555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6555_, 0, v_namePrefix_6544_);
lean_ctor_set(v___x_6555_, 1, v___x_6554_);
v___x_6556_ = lean_st_ref_take(v_a_6517_);
v_env_6557_ = lean_ctor_get(v___x_6556_, 0);
v_nextMacroScope_6558_ = lean_ctor_get(v___x_6556_, 1);
v_auxDeclNGen_6559_ = lean_ctor_get(v___x_6556_, 3);
v_traceState_6560_ = lean_ctor_get(v___x_6556_, 4);
v_cache_6561_ = lean_ctor_get(v___x_6556_, 5);
v_recordedDeps_6562_ = lean_ctor_get(v___x_6556_, 6);
v_messages_6563_ = lean_ctor_get(v___x_6556_, 7);
v_infoState_6564_ = lean_ctor_get(v___x_6556_, 8);
v_snapshotTasks_6565_ = lean_ctor_get(v___x_6556_, 9);
v_isSharedCheck_6588_ = !lean_is_exclusive(v___x_6556_);
if (v_isSharedCheck_6588_ == 0)
{
lean_object* v_unused_6589_; 
v_unused_6589_ = lean_ctor_get(v___x_6556_, 2);
lean_dec(v_unused_6589_);
v___x_6567_ = v___x_6556_;
v_isShared_6568_ = v_isSharedCheck_6588_;
goto v_resetjp_6566_;
}
else
{
lean_inc(v_snapshotTasks_6565_);
lean_inc(v_infoState_6564_);
lean_inc(v_messages_6563_);
lean_inc(v_recordedDeps_6562_);
lean_inc(v_cache_6561_);
lean_inc(v_traceState_6560_);
lean_inc(v_auxDeclNGen_6559_);
lean_inc(v_nextMacroScope_6558_);
lean_inc(v_env_6557_);
lean_dec(v___x_6556_);
v___x_6567_ = lean_box(0);
v_isShared_6568_ = v_isSharedCheck_6588_;
goto v_resetjp_6566_;
}
v_resetjp_6566_:
{
lean_object* v___x_6570_; 
if (v_isShared_6568_ == 0)
{
lean_ctor_set(v___x_6567_, 2, v___x_6555_);
v___x_6570_ = v___x_6567_;
goto v_reusejp_6569_;
}
else
{
lean_object* v_reuseFailAlloc_6587_; 
v_reuseFailAlloc_6587_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6587_, 0, v_env_6557_);
lean_ctor_set(v_reuseFailAlloc_6587_, 1, v_nextMacroScope_6558_);
lean_ctor_set(v_reuseFailAlloc_6587_, 2, v___x_6555_);
lean_ctor_set(v_reuseFailAlloc_6587_, 3, v_auxDeclNGen_6559_);
lean_ctor_set(v_reuseFailAlloc_6587_, 4, v_traceState_6560_);
lean_ctor_set(v_reuseFailAlloc_6587_, 5, v_cache_6561_);
lean_ctor_set(v_reuseFailAlloc_6587_, 6, v_recordedDeps_6562_);
lean_ctor_set(v_reuseFailAlloc_6587_, 7, v_messages_6563_);
lean_ctor_set(v_reuseFailAlloc_6587_, 8, v_infoState_6564_);
lean_ctor_set(v_reuseFailAlloc_6587_, 9, v_snapshotTasks_6565_);
v___x_6570_ = v_reuseFailAlloc_6587_;
goto v_reusejp_6569_;
}
v_reusejp_6569_:
{
lean_object* v___x_6571_; lean_object* v___x_6572_; 
v___x_6571_ = lean_st_ref_put(v_a_6517_, v___x_6570_);
v___x_6572_ = lean_st_ref_get(v_ref_6508_);
if (lean_obj_tag(v___x_6572_) == 0)
{
lean_object* v___x_6573_; lean_object* v___x_6574_; lean_object* v___x_6575_; lean_object* v___x_6576_; 
v___x_6573_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_6516_);
v___x_6574_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0));
v___x_6575_ = lean_box(0);
v___x_6576_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_6574_, v___x_6573_, v___f_6553_, v___x_6575_, v_a_6514_, v_a_6515_, v_a_6516_, v_a_6517_);
lean_dec_ref(v___x_6573_);
if (lean_obj_tag(v___x_6576_) == 0)
{
lean_object* v_a_6577_; 
v_a_6577_ = lean_ctor_get(v___x_6576_, 0);
lean_inc(v_a_6577_);
lean_dec_ref_known(v___x_6576_, 1);
v_a_6520_ = v_a_6577_;
goto v___jp_6519_;
}
else
{
lean_object* v_a_6578_; lean_object* v___x_6580_; uint8_t v_isShared_6581_; uint8_t v_isSharedCheck_6585_; 
lean_dec_ref(v_ty_6513_);
v_a_6578_ = lean_ctor_get(v___x_6576_, 0);
v_isSharedCheck_6585_ = !lean_is_exclusive(v___x_6576_);
if (v_isSharedCheck_6585_ == 0)
{
v___x_6580_ = v___x_6576_;
v_isShared_6581_ = v_isSharedCheck_6585_;
goto v_resetjp_6579_;
}
else
{
lean_inc(v_a_6578_);
lean_dec(v___x_6576_);
v___x_6580_ = lean_box(0);
v_isShared_6581_ = v_isSharedCheck_6585_;
goto v_resetjp_6579_;
}
v_resetjp_6579_:
{
lean_object* v___x_6583_; 
if (v_isShared_6581_ == 0)
{
v___x_6583_ = v___x_6580_;
goto v_reusejp_6582_;
}
else
{
lean_object* v_reuseFailAlloc_6584_; 
v_reuseFailAlloc_6584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6584_, 0, v_a_6578_);
v___x_6583_ = v_reuseFailAlloc_6584_;
goto v_reusejp_6582_;
}
v_reusejp_6582_:
{
return v___x_6583_;
}
}
}
}
else
{
lean_object* v_val_6586_; 
lean_dec_ref(v___f_6553_);
v_val_6586_ = lean_ctor_get(v___x_6572_, 0);
lean_inc(v_val_6586_);
lean_dec_ref_known(v___x_6572_, 1);
v_a_6520_ = v_val_6586_;
goto v___jp_6519_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___boxed(lean_object* v_ref_6592_, lean_object* v_addEntry_6593_, lean_object* v_droppedKeys_6594_, lean_object* v_constantsPerTask_6595_, lean_object* v_droppedEntriesRef_6596_, lean_object* v_ty_6597_, lean_object* v_a_6598_, lean_object* v_a_6599_, lean_object* v_a_6600_, lean_object* v_a_6601_, lean_object* v_a_6602_){
_start:
{
lean_object* v_res_6603_; 
v_res_6603_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ref_6592_, v_addEntry_6593_, v_droppedKeys_6594_, v_constantsPerTask_6595_, v_droppedEntriesRef_6596_, v_ty_6597_, v_a_6598_, v_a_6599_, v_a_6600_, v_a_6601_);
lean_dec(v_a_6601_);
lean_dec_ref(v_a_6600_);
lean_dec(v_a_6599_);
lean_dec_ref(v_a_6598_);
lean_dec(v_ref_6592_);
return v_res_6603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches(lean_object* v_00_u03b1_6604_, lean_object* v_ref_6605_, lean_object* v_addEntry_6606_, lean_object* v_droppedKeys_6607_, lean_object* v_constantsPerTask_6608_, lean_object* v_droppedEntriesRef_6609_, lean_object* v_ty_6610_, lean_object* v_a_6611_, lean_object* v_a_6612_, lean_object* v_a_6613_, lean_object* v_a_6614_){
_start:
{
lean_object* v___x_6616_; 
v___x_6616_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ref_6605_, v_addEntry_6606_, v_droppedKeys_6607_, v_constantsPerTask_6608_, v_droppedEntriesRef_6609_, v_ty_6610_, v_a_6611_, v_a_6612_, v_a_6613_, v_a_6614_);
return v___x_6616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___boxed(lean_object* v_00_u03b1_6617_, lean_object* v_ref_6618_, lean_object* v_addEntry_6619_, lean_object* v_droppedKeys_6620_, lean_object* v_constantsPerTask_6621_, lean_object* v_droppedEntriesRef_6622_, lean_object* v_ty_6623_, lean_object* v_a_6624_, lean_object* v_a_6625_, lean_object* v_a_6626_, lean_object* v_a_6627_, lean_object* v_a_6628_){
_start:
{
lean_object* v_res_6629_; 
v_res_6629_ = l_Lean_Meta_LazyDiscrTree_findImportMatches(v_00_u03b1_6617_, v_ref_6618_, v_addEntry_6619_, v_droppedKeys_6620_, v_constantsPerTask_6621_, v_droppedEntriesRef_6622_, v_ty_6623_, v_a_6624_, v_a_6625_, v_a_6626_, v_a_6627_);
lean_dec(v_a_6627_);
lean_dec_ref(v_a_6626_);
lean_dec(v_a_6625_);
lean_dec_ref(v_a_6624_);
lean_dec(v_ref_6618_);
return v_res_6629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(lean_object* v_00_u03b1_6630_, lean_object* v_cctx_6631_, lean_object* v_ngen_6632_, lean_object* v_env_6633_, lean_object* v_act_6634_, lean_object* v_constantsPerTask_6635_, lean_object* v___y_6636_, lean_object* v___y_6637_, lean_object* v___y_6638_, lean_object* v___y_6639_){
_start:
{
lean_object* v___x_6641_; 
v___x_6641_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v_cctx_6631_, v_ngen_6632_, v_env_6633_, v_act_6634_, v_constantsPerTask_6635_, v___y_6636_, v___y_6637_, v___y_6638_, v___y_6639_);
return v___x_6641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___boxed(lean_object* v_00_u03b1_6642_, lean_object* v_cctx_6643_, lean_object* v_ngen_6644_, lean_object* v_env_6645_, lean_object* v_act_6646_, lean_object* v_constantsPerTask_6647_, lean_object* v___y_6648_, lean_object* v___y_6649_, lean_object* v___y_6650_, lean_object* v___y_6651_, lean_object* v___y_6652_){
_start:
{
lean_object* v_res_6653_; 
v_res_6653_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(v_00_u03b1_6642_, v_cctx_6643_, v_ngen_6644_, v_env_6645_, v_act_6646_, v_constantsPerTask_6647_, v___y_6648_, v___y_6649_, v___y_6650_, v___y_6651_);
lean_dec(v___y_6651_);
lean_dec_ref(v___y_6650_);
lean_dec(v___y_6649_);
lean_dec_ref(v___y_6648_);
lean_dec(v_constantsPerTask_6647_);
return v_res_6653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(lean_object* v_00_u03b1_6654_, lean_object* v_cctx_6655_, lean_object* v_env_6656_, lean_object* v_act_6657_, lean_object* v_constantsPerTask_6658_, lean_object* v_n_6659_, lean_object* v_ngen_6660_, lean_object* v_tasks_6661_, lean_object* v_start_6662_, lean_object* v_cnt_6663_, lean_object* v_idx_6664_, lean_object* v___y_6665_, lean_object* v___y_6666_, lean_object* v___y_6667_, lean_object* v___y_6668_){
_start:
{
lean_object* v___x_6670_; 
v___x_6670_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6655_, v_env_6656_, v_act_6657_, v_constantsPerTask_6658_, v_n_6659_, v_ngen_6660_, v_tasks_6661_, v_start_6662_, v_cnt_6663_, v_idx_6664_);
return v___x_6670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___boxed(lean_object* v_00_u03b1_6671_, lean_object* v_cctx_6672_, lean_object* v_env_6673_, lean_object* v_act_6674_, lean_object* v_constantsPerTask_6675_, lean_object* v_n_6676_, lean_object* v_ngen_6677_, lean_object* v_tasks_6678_, lean_object* v_start_6679_, lean_object* v_cnt_6680_, lean_object* v_idx_6681_, lean_object* v___y_6682_, lean_object* v___y_6683_, lean_object* v___y_6684_, lean_object* v___y_6685_, lean_object* v___y_6686_){
_start:
{
lean_object* v_res_6687_; 
v_res_6687_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(v_00_u03b1_6671_, v_cctx_6672_, v_env_6673_, v_act_6674_, v_constantsPerTask_6675_, v_n_6676_, v_ngen_6677_, v_tasks_6678_, v_start_6679_, v_cnt_6680_, v_idx_6681_, v___y_6682_, v___y_6683_, v___y_6684_, v___y_6685_);
lean_dec(v___y_6685_);
lean_dec_ref(v___y_6684_);
lean_dec(v___y_6683_);
lean_dec_ref(v___y_6682_);
lean_dec(v_constantsPerTask_6675_);
return v_res_6687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(lean_object* v_00_u03b1_6688_, lean_object* v_z_6689_, lean_object* v_tasks_6690_){
_start:
{
lean_object* v___x_6691_; 
v___x_6691_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v_z_6689_, v_tasks_6690_);
return v___x_6691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___boxed(lean_object* v_00_u03b1_6692_, lean_object* v_z_6693_, lean_object* v_tasks_6694_){
_start:
{
lean_object* v_res_6695_; 
v_res_6695_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(v_00_u03b1_6692_, v_z_6693_, v_tasks_6694_);
lean_dec_ref(v_tasks_6694_);
return v_res_6695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(lean_object* v_00_u03b1_6696_, lean_object* v_as_6697_, size_t v_i_6698_, size_t v_stop_6699_, lean_object* v_b_6700_){
_start:
{
lean_object* v___x_6701_; 
v___x_6701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_as_6697_, v_i_6698_, v_stop_6699_, v_b_6700_);
return v___x_6701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b1_6702_, lean_object* v_as_6703_, lean_object* v_i_6704_, lean_object* v_stop_6705_, lean_object* v_b_6706_){
_start:
{
size_t v_i_boxed_6707_; size_t v_stop_boxed_6708_; lean_object* v_res_6709_; 
v_i_boxed_6707_ = lean_unbox_usize(v_i_6704_);
lean_dec(v_i_6704_);
v_stop_boxed_6708_ = lean_unbox_usize(v_stop_6705_);
lean_dec(v_stop_6705_);
v_res_6709_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(v_00_u03b1_6702_, v_as_6703_, v_i_boxed_6707_, v_stop_boxed_6708_, v_b_6706_);
lean_dec_ref(v_as_6703_);
return v_res_6709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(lean_object* v___y_6710_){
_start:
{
lean_object* v___x_6712_; lean_object* v_ngen_6713_; lean_object* v_namePrefix_6714_; lean_object* v_idx_6715_; lean_object* v___x_6717_; uint8_t v_isShared_6718_; uint8_t v_isSharedCheck_6746_; 
v___x_6712_ = lean_st_ref_get(v___y_6710_);
v_ngen_6713_ = lean_ctor_get(v___x_6712_, 2);
lean_inc_ref(v_ngen_6713_);
lean_dec(v___x_6712_);
v_namePrefix_6714_ = lean_ctor_get(v_ngen_6713_, 0);
v_idx_6715_ = lean_ctor_get(v_ngen_6713_, 1);
v_isSharedCheck_6746_ = !lean_is_exclusive(v_ngen_6713_);
if (v_isSharedCheck_6746_ == 0)
{
v___x_6717_ = v_ngen_6713_;
v_isShared_6718_ = v_isSharedCheck_6746_;
goto v_resetjp_6716_;
}
else
{
lean_inc(v_idx_6715_);
lean_inc(v_namePrefix_6714_);
lean_dec(v_ngen_6713_);
v___x_6717_ = lean_box(0);
v_isShared_6718_ = v_isSharedCheck_6746_;
goto v_resetjp_6716_;
}
v_resetjp_6716_:
{
lean_object* v___x_6719_; lean_object* v___x_6720_; lean_object* v___x_6722_; 
lean_inc(v_idx_6715_);
lean_inc(v_namePrefix_6714_);
v___x_6719_ = l_Lean_Name_num___override(v_namePrefix_6714_, v_idx_6715_);
v___x_6720_ = lean_unsigned_to_nat(1u);
if (v_isShared_6718_ == 0)
{
lean_ctor_set(v___x_6717_, 1, v___x_6720_);
lean_ctor_set(v___x_6717_, 0, v___x_6719_);
v___x_6722_ = v___x_6717_;
goto v_reusejp_6721_;
}
else
{
lean_object* v_reuseFailAlloc_6745_; 
v_reuseFailAlloc_6745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6745_, 0, v___x_6719_);
lean_ctor_set(v_reuseFailAlloc_6745_, 1, v___x_6720_);
v___x_6722_ = v_reuseFailAlloc_6745_;
goto v_reusejp_6721_;
}
v_reusejp_6721_:
{
lean_object* v___x_6723_; lean_object* v___x_6724_; lean_object* v___x_6725_; lean_object* v_env_6726_; lean_object* v_nextMacroScope_6727_; lean_object* v_auxDeclNGen_6728_; lean_object* v_traceState_6729_; lean_object* v_cache_6730_; lean_object* v_recordedDeps_6731_; lean_object* v_messages_6732_; lean_object* v_infoState_6733_; lean_object* v_snapshotTasks_6734_; lean_object* v___x_6736_; uint8_t v_isShared_6737_; uint8_t v_isSharedCheck_6743_; 
v___x_6723_ = lean_nat_add(v_idx_6715_, v___x_6720_);
lean_dec(v_idx_6715_);
v___x_6724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6724_, 0, v_namePrefix_6714_);
lean_ctor_set(v___x_6724_, 1, v___x_6723_);
v___x_6725_ = lean_st_ref_take(v___y_6710_);
v_env_6726_ = lean_ctor_get(v___x_6725_, 0);
v_nextMacroScope_6727_ = lean_ctor_get(v___x_6725_, 1);
v_auxDeclNGen_6728_ = lean_ctor_get(v___x_6725_, 3);
v_traceState_6729_ = lean_ctor_get(v___x_6725_, 4);
v_cache_6730_ = lean_ctor_get(v___x_6725_, 5);
v_recordedDeps_6731_ = lean_ctor_get(v___x_6725_, 6);
v_messages_6732_ = lean_ctor_get(v___x_6725_, 7);
v_infoState_6733_ = lean_ctor_get(v___x_6725_, 8);
v_snapshotTasks_6734_ = lean_ctor_get(v___x_6725_, 9);
v_isSharedCheck_6743_ = !lean_is_exclusive(v___x_6725_);
if (v_isSharedCheck_6743_ == 0)
{
lean_object* v_unused_6744_; 
v_unused_6744_ = lean_ctor_get(v___x_6725_, 2);
lean_dec(v_unused_6744_);
v___x_6736_ = v___x_6725_;
v_isShared_6737_ = v_isSharedCheck_6743_;
goto v_resetjp_6735_;
}
else
{
lean_inc(v_snapshotTasks_6734_);
lean_inc(v_infoState_6733_);
lean_inc(v_messages_6732_);
lean_inc(v_recordedDeps_6731_);
lean_inc(v_cache_6730_);
lean_inc(v_traceState_6729_);
lean_inc(v_auxDeclNGen_6728_);
lean_inc(v_nextMacroScope_6727_);
lean_inc(v_env_6726_);
lean_dec(v___x_6725_);
v___x_6736_ = lean_box(0);
v_isShared_6737_ = v_isSharedCheck_6743_;
goto v_resetjp_6735_;
}
v_resetjp_6735_:
{
lean_object* v___x_6739_; 
if (v_isShared_6737_ == 0)
{
lean_ctor_set(v___x_6736_, 2, v___x_6724_);
v___x_6739_ = v___x_6736_;
goto v_reusejp_6738_;
}
else
{
lean_object* v_reuseFailAlloc_6742_; 
v_reuseFailAlloc_6742_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6742_, 0, v_env_6726_);
lean_ctor_set(v_reuseFailAlloc_6742_, 1, v_nextMacroScope_6727_);
lean_ctor_set(v_reuseFailAlloc_6742_, 2, v___x_6724_);
lean_ctor_set(v_reuseFailAlloc_6742_, 3, v_auxDeclNGen_6728_);
lean_ctor_set(v_reuseFailAlloc_6742_, 4, v_traceState_6729_);
lean_ctor_set(v_reuseFailAlloc_6742_, 5, v_cache_6730_);
lean_ctor_set(v_reuseFailAlloc_6742_, 6, v_recordedDeps_6731_);
lean_ctor_set(v_reuseFailAlloc_6742_, 7, v_messages_6732_);
lean_ctor_set(v_reuseFailAlloc_6742_, 8, v_infoState_6733_);
lean_ctor_set(v_reuseFailAlloc_6742_, 9, v_snapshotTasks_6734_);
v___x_6739_ = v_reuseFailAlloc_6742_;
goto v_reusejp_6738_;
}
v_reusejp_6738_:
{
lean_object* v___x_6740_; lean_object* v___x_6741_; 
v___x_6740_ = lean_st_ref_put(v___y_6710_, v___x_6739_);
v___x_6741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6741_, 0, v___x_6722_);
return v___x_6741_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg___boxed(lean_object* v___y_6747_, lean_object* v___y_6748_){
_start:
{
lean_object* v_res_6749_; 
v_res_6749_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v___y_6747_);
lean_dec(v___y_6747_);
return v_res_6749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(lean_object* v___y_6750_, lean_object* v___y_6751_){
_start:
{
lean_object* v___x_6753_; 
v___x_6753_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v___y_6751_);
return v___x_6753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___boxed(lean_object* v___y_6754_, lean_object* v___y_6755_, lean_object* v___y_6756_){
_start:
{
lean_object* v_res_6757_; 
v_res_6757_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(v___y_6754_, v___y_6755_);
lean_dec(v___y_6755_);
lean_dec_ref(v___y_6754_);
return v_res_6757_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_6758_; lean_object* v___x_6759_; lean_object* v___x_6760_; 
v___x_6758_ = lean_unsigned_to_nat(32u);
v___x_6759_ = lean_mk_empty_array_with_capacity(v___x_6758_);
v___x_6760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6760_, 0, v___x_6759_);
return v___x_6760_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1(void){
_start:
{
size_t v___x_6761_; lean_object* v___x_6762_; lean_object* v___x_6763_; lean_object* v___x_6764_; lean_object* v___x_6765_; lean_object* v___x_6766_; 
v___x_6761_ = ((size_t)5ULL);
v___x_6762_ = lean_unsigned_to_nat(0u);
v___x_6763_ = lean_unsigned_to_nat(32u);
v___x_6764_ = lean_mk_empty_array_with_capacity(v___x_6763_);
v___x_6765_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0);
v___x_6766_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_6766_, 0, v___x_6765_);
lean_ctor_set(v___x_6766_, 1, v___x_6764_);
lean_ctor_set(v___x_6766_, 2, v___x_6762_);
lean_ctor_set(v___x_6766_, 3, v___x_6762_);
lean_ctor_set_usize(v___x_6766_, 4, v___x_6761_);
return v___x_6766_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2(void){
_start:
{
lean_object* v___x_6767_; lean_object* v___x_6768_; lean_object* v___x_6769_; lean_object* v___x_6770_; 
v___x_6767_ = lean_box(1);
v___x_6768_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1);
v___x_6769_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_6770_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6770_, 0, v___x_6769_);
lean_ctor_set(v___x_6770_, 1, v___x_6768_);
lean_ctor_set(v___x_6770_, 2, v___x_6767_);
return v___x_6770_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_msgData_6771_, lean_object* v___y_6772_, lean_object* v___y_6773_){
_start:
{
lean_object* v___x_6775_; lean_object* v_toCold_6776_; lean_object* v_env_6777_; lean_object* v_options_6778_; uint8_t v___x_6779_; lean_object* v_env_6780_; lean_object* v___x_6781_; lean_object* v___x_6782_; lean_object* v___x_6783_; lean_object* v___x_6784_; lean_object* v___x_6785_; 
v___x_6775_ = lean_st_ref_get(v___y_6773_);
v_toCold_6776_ = lean_ctor_get(v___y_6772_, 0);
v_env_6777_ = lean_ctor_get(v___x_6775_, 0);
lean_inc_ref(v_env_6777_);
lean_dec(v___x_6775_);
v_options_6778_ = lean_ctor_get(v_toCold_6776_, 2);
v___x_6779_ = 0;
v_env_6780_ = l_Lean_Environment_setRecordingDeps(v_env_6777_, v___x_6779_);
v___x_6781_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_6782_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2);
lean_inc_ref(v_options_6778_);
v___x_6783_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6783_, 0, v_env_6780_);
lean_ctor_set(v___x_6783_, 1, v___x_6781_);
lean_ctor_set(v___x_6783_, 2, v___x_6782_);
lean_ctor_set(v___x_6783_, 3, v_options_6778_);
v___x_6784_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_6784_, 0, v___x_6783_);
lean_ctor_set(v___x_6784_, 1, v_msgData_6771_);
v___x_6785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6785_, 0, v___x_6784_);
return v___x_6785_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object* v_msgData_6786_, lean_object* v___y_6787_, lean_object* v___y_6788_, lean_object* v___y_6789_){
_start:
{
lean_object* v_res_6790_; 
v_res_6790_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(v_msgData_6786_, v___y_6787_, v___y_6788_);
lean_dec(v___y_6788_);
lean_dec_ref(v___y_6787_);
return v_res_6790_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(lean_object* v_ref_6791_, lean_object* v_msgData_6792_, uint8_t v_severity_6793_, uint8_t v_isSilent_6794_, lean_object* v___y_6795_, lean_object* v___y_6796_){
_start:
{
lean_object* v___y_6799_; lean_object* v___y_6800_; lean_object* v___y_6801_; lean_object* v___y_6802_; uint8_t v___y_6803_; lean_object* v___y_6804_; uint8_t v___y_6805_; lean_object* v_toCold_6806_; lean_object* v___y_6807_; lean_object* v___y_6836_; lean_object* v___y_6837_; uint8_t v___y_6838_; uint8_t v___y_6839_; lean_object* v___y_6840_; lean_object* v___y_6841_; uint8_t v___y_6842_; lean_object* v___y_6843_; uint8_t v___y_6863_; lean_object* v___y_6864_; lean_object* v___y_6865_; lean_object* v___y_6866_; uint8_t v___y_6867_; uint8_t v___y_6868_; lean_object* v___y_6869_; uint8_t v___y_6873_; uint8_t v___y_6874_; uint8_t v___x_6884_; uint8_t v___y_6886_; uint8_t v___x_6892_; 
v___x_6884_ = 2;
v___x_6892_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6793_, v___x_6884_);
if (v___x_6892_ == 0)
{
v___y_6886_ = v___x_6892_;
goto v___jp_6885_;
}
else
{
uint8_t v___x_6893_; 
lean_inc_ref(v_msgData_6792_);
v___x_6893_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_6792_);
if (v___x_6893_ == 0)
{
v___y_6886_ = v___x_6893_;
goto v___jp_6885_;
}
else
{
lean_object* v___x_6894_; lean_object* v___x_6895_; 
lean_dec_ref(v_msgData_6792_);
v___x_6894_ = lean_box(0);
v___x_6895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6895_, 0, v___x_6894_);
return v___x_6895_;
}
}
v___jp_6798_:
{
lean_object* v_currNamespace_6808_; lean_object* v_openDecls_6809_; lean_object* v___x_6810_; lean_object* v___x_6811_; lean_object* v___x_6812_; lean_object* v___x_6813_; lean_object* v_env_6814_; lean_object* v_nextMacroScope_6815_; lean_object* v_ngen_6816_; lean_object* v_auxDeclNGen_6817_; lean_object* v_traceState_6818_; lean_object* v_cache_6819_; lean_object* v_recordedDeps_6820_; lean_object* v_messages_6821_; lean_object* v_infoState_6822_; lean_object* v_snapshotTasks_6823_; lean_object* v___x_6825_; uint8_t v_isShared_6826_; uint8_t v_isSharedCheck_6834_; 
v_currNamespace_6808_ = lean_ctor_get(v_toCold_6806_, 4);
v_openDecls_6809_ = lean_ctor_get(v_toCold_6806_, 5);
lean_inc(v_openDecls_6809_);
lean_inc(v_currNamespace_6808_);
v___x_6810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6810_, 0, v_currNamespace_6808_);
lean_ctor_set(v___x_6810_, 1, v_openDecls_6809_);
v___x_6811_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6811_, 0, v___x_6810_);
lean_ctor_set(v___x_6811_, 1, v___y_6799_);
lean_inc_ref(v___y_6804_);
lean_inc_ref(v___y_6800_);
v___x_6812_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_6812_, 0, v___y_6800_);
lean_ctor_set(v___x_6812_, 1, v___y_6801_);
lean_ctor_set(v___x_6812_, 2, v___y_6802_);
lean_ctor_set(v___x_6812_, 3, v___y_6804_);
lean_ctor_set(v___x_6812_, 4, v___x_6811_);
lean_ctor_set_uint8(v___x_6812_, sizeof(void*)*5, v___y_6805_);
lean_ctor_set_uint8(v___x_6812_, sizeof(void*)*5 + 1, v___y_6803_);
lean_ctor_set_uint8(v___x_6812_, sizeof(void*)*5 + 2, v_isSilent_6794_);
v___x_6813_ = lean_st_ref_take(v___y_6807_);
v_env_6814_ = lean_ctor_get(v___x_6813_, 0);
v_nextMacroScope_6815_ = lean_ctor_get(v___x_6813_, 1);
v_ngen_6816_ = lean_ctor_get(v___x_6813_, 2);
v_auxDeclNGen_6817_ = lean_ctor_get(v___x_6813_, 3);
v_traceState_6818_ = lean_ctor_get(v___x_6813_, 4);
v_cache_6819_ = lean_ctor_get(v___x_6813_, 5);
v_recordedDeps_6820_ = lean_ctor_get(v___x_6813_, 6);
v_messages_6821_ = lean_ctor_get(v___x_6813_, 7);
v_infoState_6822_ = lean_ctor_get(v___x_6813_, 8);
v_snapshotTasks_6823_ = lean_ctor_get(v___x_6813_, 9);
v_isSharedCheck_6834_ = !lean_is_exclusive(v___x_6813_);
if (v_isSharedCheck_6834_ == 0)
{
v___x_6825_ = v___x_6813_;
v_isShared_6826_ = v_isSharedCheck_6834_;
goto v_resetjp_6824_;
}
else
{
lean_inc(v_snapshotTasks_6823_);
lean_inc(v_infoState_6822_);
lean_inc(v_messages_6821_);
lean_inc(v_recordedDeps_6820_);
lean_inc(v_cache_6819_);
lean_inc(v_traceState_6818_);
lean_inc(v_auxDeclNGen_6817_);
lean_inc(v_ngen_6816_);
lean_inc(v_nextMacroScope_6815_);
lean_inc(v_env_6814_);
lean_dec(v___x_6813_);
v___x_6825_ = lean_box(0);
v_isShared_6826_ = v_isSharedCheck_6834_;
goto v_resetjp_6824_;
}
v_resetjp_6824_:
{
lean_object* v___x_6827_; lean_object* v___x_6828_; lean_object* v___x_6830_; 
v___x_6827_ = lean_box(0);
v___x_6828_ = l_Lean_MessageLog_add(v___x_6812_, v_messages_6821_);
if (v_isShared_6826_ == 0)
{
lean_ctor_set(v___x_6825_, 7, v___x_6828_);
v___x_6830_ = v___x_6825_;
goto v_reusejp_6829_;
}
else
{
lean_object* v_reuseFailAlloc_6833_; 
v_reuseFailAlloc_6833_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6833_, 0, v_env_6814_);
lean_ctor_set(v_reuseFailAlloc_6833_, 1, v_nextMacroScope_6815_);
lean_ctor_set(v_reuseFailAlloc_6833_, 2, v_ngen_6816_);
lean_ctor_set(v_reuseFailAlloc_6833_, 3, v_auxDeclNGen_6817_);
lean_ctor_set(v_reuseFailAlloc_6833_, 4, v_traceState_6818_);
lean_ctor_set(v_reuseFailAlloc_6833_, 5, v_cache_6819_);
lean_ctor_set(v_reuseFailAlloc_6833_, 6, v_recordedDeps_6820_);
lean_ctor_set(v_reuseFailAlloc_6833_, 7, v___x_6828_);
lean_ctor_set(v_reuseFailAlloc_6833_, 8, v_infoState_6822_);
lean_ctor_set(v_reuseFailAlloc_6833_, 9, v_snapshotTasks_6823_);
v___x_6830_ = v_reuseFailAlloc_6833_;
goto v_reusejp_6829_;
}
v_reusejp_6829_:
{
lean_object* v___x_6831_; lean_object* v___x_6832_; 
v___x_6831_ = lean_st_ref_put(v___y_6807_, v___x_6830_);
v___x_6832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6832_, 0, v___x_6827_);
return v___x_6832_;
}
}
}
v___jp_6835_:
{
lean_object* v_fileName_6844_; lean_object* v_fileMap_6845_; lean_object* v___x_6846_; lean_object* v___x_6847_; lean_object* v_a_6848_; lean_object* v___x_6850_; uint8_t v_isShared_6851_; uint8_t v_isSharedCheck_6861_; 
v_fileName_6844_ = lean_ctor_get(v___y_6840_, 0);
v_fileMap_6845_ = lean_ctor_get(v___y_6840_, 1);
v___x_6846_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_6792_);
v___x_6847_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(v___x_6846_, v___y_6795_, v___y_6796_);
v_a_6848_ = lean_ctor_get(v___x_6847_, 0);
v_isSharedCheck_6861_ = !lean_is_exclusive(v___x_6847_);
if (v_isSharedCheck_6861_ == 0)
{
v___x_6850_ = v___x_6847_;
v_isShared_6851_ = v_isSharedCheck_6861_;
goto v_resetjp_6849_;
}
else
{
lean_inc(v_a_6848_);
lean_dec(v___x_6847_);
v___x_6850_ = lean_box(0);
v_isShared_6851_ = v_isSharedCheck_6861_;
goto v_resetjp_6849_;
}
v_resetjp_6849_:
{
lean_object* v___x_6852_; lean_object* v___x_6853_; lean_object* v___x_6854_; lean_object* v___x_6855_; 
lean_inc_ref_n(v_fileMap_6845_, 2);
v___x_6852_ = l_Lean_FileMap_toPosition(v_fileMap_6845_, v___y_6841_);
lean_dec(v___y_6841_);
v___x_6853_ = l_Lean_FileMap_toPosition(v_fileMap_6845_, v___y_6843_);
lean_dec(v___y_6843_);
v___x_6854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6854_, 0, v___x_6853_);
v___x_6855_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0));
if (v___y_6838_ == 0)
{
lean_del_object(v___x_6850_);
lean_dec_ref(v___y_6837_);
v___y_6799_ = v_a_6848_;
v___y_6800_ = v_fileName_6844_;
v___y_6801_ = v___x_6852_;
v___y_6802_ = v___x_6854_;
v___y_6803_ = v___y_6839_;
v___y_6804_ = v___x_6855_;
v___y_6805_ = v___y_6842_;
v_toCold_6806_ = v___y_6836_;
v___y_6807_ = v___y_6796_;
goto v___jp_6798_;
}
else
{
uint8_t v___x_6856_; 
lean_inc(v_a_6848_);
v___x_6856_ = l_Lean_MessageData_hasTag(v___y_6837_, v_a_6848_);
if (v___x_6856_ == 0)
{
lean_object* v___x_6857_; lean_object* v___x_6859_; 
lean_dec_ref_known(v___x_6854_, 1);
lean_dec_ref(v___x_6852_);
lean_dec(v_a_6848_);
v___x_6857_ = lean_box(0);
if (v_isShared_6851_ == 0)
{
lean_ctor_set(v___x_6850_, 0, v___x_6857_);
v___x_6859_ = v___x_6850_;
goto v_reusejp_6858_;
}
else
{
lean_object* v_reuseFailAlloc_6860_; 
v_reuseFailAlloc_6860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6860_, 0, v___x_6857_);
v___x_6859_ = v_reuseFailAlloc_6860_;
goto v_reusejp_6858_;
}
v_reusejp_6858_:
{
return v___x_6859_;
}
}
else
{
lean_del_object(v___x_6850_);
v___y_6799_ = v_a_6848_;
v___y_6800_ = v_fileName_6844_;
v___y_6801_ = v___x_6852_;
v___y_6802_ = v___x_6854_;
v___y_6803_ = v___y_6839_;
v___y_6804_ = v___x_6855_;
v___y_6805_ = v___y_6842_;
v_toCold_6806_ = v___y_6836_;
v___y_6807_ = v___y_6796_;
goto v___jp_6798_;
}
}
}
}
v___jp_6862_:
{
lean_object* v___x_6870_; 
v___x_6870_ = l_Lean_Syntax_getTailPos_x3f(v___y_6866_, v___y_6868_);
lean_dec(v___y_6866_);
if (lean_obj_tag(v___x_6870_) == 0)
{
lean_inc(v___y_6869_);
v___y_6836_ = v___y_6864_;
v___y_6837_ = v___y_6865_;
v___y_6838_ = v___y_6863_;
v___y_6839_ = v___y_6867_;
v___y_6840_ = v___y_6864_;
v___y_6841_ = v___y_6869_;
v___y_6842_ = v___y_6868_;
v___y_6843_ = v___y_6869_;
goto v___jp_6835_;
}
else
{
lean_object* v_val_6871_; 
v_val_6871_ = lean_ctor_get(v___x_6870_, 0);
lean_inc(v_val_6871_);
lean_dec_ref_known(v___x_6870_, 1);
v___y_6836_ = v___y_6864_;
v___y_6837_ = v___y_6865_;
v___y_6838_ = v___y_6863_;
v___y_6839_ = v___y_6867_;
v___y_6840_ = v___y_6864_;
v___y_6841_ = v___y_6869_;
v___y_6842_ = v___y_6868_;
v___y_6843_ = v_val_6871_;
goto v___jp_6835_;
}
}
v___jp_6872_:
{
lean_object* v_toCold_6875_; lean_object* v_ref_6876_; uint8_t v_suppressElabErrors_6877_; lean_object* v___x_6878_; lean_object* v___f_6879_; lean_object* v_ref_6880_; lean_object* v___x_6881_; 
v_toCold_6875_ = lean_ctor_get(v___y_6795_, 0);
v_ref_6876_ = lean_ctor_get(v___y_6795_, 2);
v_suppressElabErrors_6877_ = lean_ctor_get_uint8(v___y_6795_, sizeof(void*)*3 + 2);
v___x_6878_ = lean_box(v_suppressElabErrors_6877_);
v___f_6879_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed), 2, 1);
lean_closure_set(v___f_6879_, 0, v___x_6878_);
v_ref_6880_ = l_Lean_replaceRef(v_ref_6791_, v_ref_6876_);
v___x_6881_ = l_Lean_Syntax_getPos_x3f(v_ref_6880_, v___y_6873_);
if (lean_obj_tag(v___x_6881_) == 0)
{
lean_object* v___x_6882_; 
v___x_6882_ = lean_unsigned_to_nat(0u);
v___y_6863_ = v_suppressElabErrors_6877_;
v___y_6864_ = v_toCold_6875_;
v___y_6865_ = v___f_6879_;
v___y_6866_ = v_ref_6880_;
v___y_6867_ = v___y_6874_;
v___y_6868_ = v___y_6873_;
v___y_6869_ = v___x_6882_;
goto v___jp_6862_;
}
else
{
lean_object* v_val_6883_; 
v_val_6883_ = lean_ctor_get(v___x_6881_, 0);
lean_inc(v_val_6883_);
lean_dec_ref_known(v___x_6881_, 1);
v___y_6863_ = v_suppressElabErrors_6877_;
v___y_6864_ = v_toCold_6875_;
v___y_6865_ = v___f_6879_;
v___y_6866_ = v_ref_6880_;
v___y_6867_ = v___y_6874_;
v___y_6868_ = v___y_6873_;
v___y_6869_ = v_val_6883_;
goto v___jp_6862_;
}
}
v___jp_6885_:
{
uint8_t v___x_6887_; uint8_t v___x_6888_; 
v___x_6887_ = 1;
v___x_6888_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6793_, v___x_6887_);
if (v___x_6888_ == 0)
{
v___y_6873_ = v___y_6886_;
v___y_6874_ = v_severity_6793_;
goto v___jp_6872_;
}
else
{
lean_object* v___x_6889_; lean_object* v___x_6890_; uint8_t v___x_6891_; 
v___x_6889_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_6795_);
v___x_6890_ = l_Lean_warningAsError;
v___x_6891_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7_spec__9(v___x_6889_, v___x_6890_);
lean_dec_ref(v___x_6889_);
if (v___x_6891_ == 0)
{
v___y_6873_ = v___y_6886_;
v___y_6874_ = v_severity_6793_;
goto v___jp_6872_;
}
else
{
v___y_6873_ = v___y_6886_;
v___y_6874_ = v___x_6884_;
goto v___jp_6872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_ref_6896_, lean_object* v_msgData_6897_, lean_object* v_severity_6898_, lean_object* v_isSilent_6899_, lean_object* v___y_6900_, lean_object* v___y_6901_, lean_object* v___y_6902_){
_start:
{
uint8_t v_severity_boxed_6903_; uint8_t v_isSilent_boxed_6904_; lean_object* v_res_6905_; 
v_severity_boxed_6903_ = lean_unbox(v_severity_6898_);
v_isSilent_boxed_6904_ = lean_unbox(v_isSilent_6899_);
v_res_6905_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(v_ref_6896_, v_msgData_6897_, v_severity_boxed_6903_, v_isSilent_boxed_6904_, v___y_6900_, v___y_6901_);
lean_dec(v___y_6901_);
lean_dec_ref(v___y_6900_);
lean_dec(v_ref_6896_);
return v_res_6905_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(lean_object* v_msgData_6906_, uint8_t v_severity_6907_, uint8_t v_isSilent_6908_, lean_object* v___y_6909_, lean_object* v___y_6910_){
_start:
{
lean_object* v_ref_6912_; lean_object* v___x_6913_; 
v_ref_6912_ = lean_ctor_get(v___y_6909_, 2);
v___x_6913_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(v_ref_6912_, v_msgData_6906_, v_severity_6907_, v_isSilent_6908_, v___y_6909_, v___y_6910_);
return v___x_6913_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_6914_, lean_object* v_severity_6915_, lean_object* v_isSilent_6916_, lean_object* v___y_6917_, lean_object* v___y_6918_, lean_object* v___y_6919_){
_start:
{
uint8_t v_severity_boxed_6920_; uint8_t v_isSilent_boxed_6921_; lean_object* v_res_6922_; 
v_severity_boxed_6920_ = lean_unbox(v_severity_6915_);
v_isSilent_boxed_6921_ = lean_unbox(v_isSilent_6916_);
v_res_6922_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(v_msgData_6914_, v_severity_boxed_6920_, v_isSilent_boxed_6921_, v___y_6917_, v___y_6918_);
lean_dec(v___y_6918_);
lean_dec_ref(v___y_6917_);
return v_res_6922_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(lean_object* v_msgData_6923_, lean_object* v___y_6924_, lean_object* v___y_6925_){
_start:
{
uint8_t v___x_6927_; uint8_t v___x_6928_; lean_object* v___x_6929_; 
v___x_6927_ = 2;
v___x_6928_ = 0;
v___x_6929_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(v_msgData_6923_, v___x_6927_, v___x_6928_, v___y_6924_, v___y_6925_);
return v___x_6929_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0___boxed(lean_object* v_msgData_6930_, lean_object* v___y_6931_, lean_object* v___y_6932_, lean_object* v___y_6933_){
_start:
{
lean_object* v_res_6934_; 
v_res_6934_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(v_msgData_6930_, v___y_6931_, v___y_6932_);
lean_dec(v___y_6932_);
lean_dec_ref(v___y_6931_);
return v_res_6934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(lean_object* v_f_6935_, lean_object* v___y_6936_, lean_object* v___y_6937_){
_start:
{
lean_object* v_module_6939_; lean_object* v_const_6940_; lean_object* v_exception_6941_; lean_object* v___x_6942_; lean_object* v___x_6943_; lean_object* v___x_6944_; lean_object* v___x_6945_; lean_object* v___x_6946_; lean_object* v___x_6947_; lean_object* v___x_6948_; lean_object* v___x_6949_; lean_object* v___x_6950_; lean_object* v___x_6951_; lean_object* v___x_6952_; lean_object* v___x_6953_; 
v_module_6939_ = lean_ctor_get(v_f_6935_, 0);
lean_inc(v_module_6939_);
v_const_6940_ = lean_ctor_get(v_f_6935_, 1);
lean_inc(v_const_6940_);
v_exception_6941_ = lean_ctor_get(v_f_6935_, 2);
lean_inc_ref(v_exception_6941_);
lean_dec_ref(v_f_6935_);
v___x_6942_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_6943_ = l_Lean_MessageData_ofName(v_const_6940_);
v___x_6944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6944_, 0, v___x_6942_);
lean_ctor_set(v___x_6944_, 1, v___x_6943_);
v___x_6945_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_6946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6946_, 0, v___x_6944_);
lean_ctor_set(v___x_6946_, 1, v___x_6945_);
v___x_6947_ = l_Lean_MessageData_ofName(v_module_6939_);
v___x_6948_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6948_, 0, v___x_6946_);
lean_ctor_set(v___x_6948_, 1, v___x_6947_);
v___x_6949_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_6950_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6950_, 0, v___x_6948_);
lean_ctor_set(v___x_6950_, 1, v___x_6949_);
v___x_6951_ = l_Lean_Exception_toMessageData(v_exception_6941_);
v___x_6952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6952_, 0, v___x_6950_);
lean_ctor_set(v___x_6952_, 1, v___x_6951_);
v___x_6953_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(v___x_6952_, v___y_6936_, v___y_6937_);
return v___x_6953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0___boxed(lean_object* v_f_6954_, lean_object* v___y_6955_, lean_object* v___y_6956_, lean_object* v___y_6957_){
_start:
{
lean_object* v_res_6958_; 
v_res_6958_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(v_f_6954_, v___y_6955_, v___y_6956_);
lean_dec(v___y_6956_);
lean_dec_ref(v___y_6955_);
return v_res_6958_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(lean_object* v_as_6959_, size_t v_i_6960_, size_t v_stop_6961_, lean_object* v_b_6962_, lean_object* v___y_6963_, lean_object* v___y_6964_){
_start:
{
uint8_t v___x_6966_; 
v___x_6966_ = lean_usize_dec_eq(v_i_6960_, v_stop_6961_);
if (v___x_6966_ == 0)
{
lean_object* v___x_6967_; lean_object* v___x_6968_; 
v___x_6967_ = lean_array_uget_borrowed(v_as_6959_, v_i_6960_);
lean_inc(v___x_6967_);
v___x_6968_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(v___x_6967_, v___y_6963_, v___y_6964_);
if (lean_obj_tag(v___x_6968_) == 0)
{
lean_object* v_a_6969_; size_t v___x_6970_; size_t v___x_6971_; 
v_a_6969_ = lean_ctor_get(v___x_6968_, 0);
lean_inc(v_a_6969_);
lean_dec_ref_known(v___x_6968_, 1);
v___x_6970_ = ((size_t)1ULL);
v___x_6971_ = lean_usize_add(v_i_6960_, v___x_6970_);
v_i_6960_ = v___x_6971_;
v_b_6962_ = v_a_6969_;
goto _start;
}
else
{
return v___x_6968_;
}
}
else
{
lean_object* v___x_6973_; 
v___x_6973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6973_, 0, v_b_6962_);
return v___x_6973_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2___boxed(lean_object* v_as_6974_, lean_object* v_i_6975_, lean_object* v_stop_6976_, lean_object* v_b_6977_, lean_object* v___y_6978_, lean_object* v___y_6979_, lean_object* v___y_6980_){
_start:
{
size_t v_i_boxed_6981_; size_t v_stop_boxed_6982_; lean_object* v_res_6983_; 
v_i_boxed_6981_ = lean_unbox_usize(v_i_6975_);
lean_dec(v_i_6975_);
v_stop_boxed_6982_ = lean_unbox_usize(v_stop_6976_);
lean_dec(v_stop_6976_);
v_res_6983_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(v_as_6974_, v_i_boxed_6981_, v_stop_boxed_6982_, v_b_6977_, v___y_6978_, v___y_6979_);
lean_dec(v___y_6979_);
lean_dec_ref(v___y_6978_);
lean_dec_ref(v_as_6974_);
return v_res_6983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(lean_object* v_entriesForConst_6984_, lean_object* v_a_6985_, lean_object* v_a_6986_){
_start:
{
lean_object* v___x_6988_; lean_object* v_env_6989_; lean_object* v___x_6990_; lean_object* v_a_6991_; lean_object* v___x_6993_; uint8_t v_isShared_6994_; uint8_t v_isSharedCheck_7018_; 
v___x_6988_ = lean_st_ref_get(v_a_6986_);
v_env_6989_ = lean_ctor_get(v___x_6988_, 0);
lean_inc_ref(v_env_6989_);
lean_dec(v___x_6988_);
v___x_6990_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v_a_6986_);
v_a_6991_ = lean_ctor_get(v___x_6990_, 0);
v_isSharedCheck_7018_ = !lean_is_exclusive(v___x_6990_);
if (v_isSharedCheck_7018_ == 0)
{
v___x_6993_ = v___x_6990_;
v_isShared_6994_ = v_isSharedCheck_7018_;
goto v_resetjp_6992_;
}
else
{
lean_inc(v_a_6991_);
lean_dec(v___x_6990_);
v___x_6993_ = lean_box(0);
v_isShared_6994_ = v_isSharedCheck_7018_;
goto v_resetjp_6992_;
}
v_resetjp_6992_:
{
lean_object* v___x_6995_; lean_object* v___x_6996_; lean_object* v___x_7002_; lean_object* v___x_7003_; lean_object* v___x_7004_; uint8_t v___x_7005_; 
v___x_6995_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
lean_inc_ref(v_a_6985_);
v___x_6996_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_a_6985_, v_a_6991_, v_env_6989_, v___x_6995_, v_entriesForConst_6984_);
v___x_7002_ = lean_st_ref_get(v___x_6995_);
lean_dec(v___x_6995_);
v___x_7003_ = lean_unsigned_to_nat(0u);
v___x_7004_ = lean_array_get_size(v___x_7002_);
v___x_7005_ = lean_nat_dec_lt(v___x_7003_, v___x_7004_);
if (v___x_7005_ == 0)
{
lean_dec(v___x_7002_);
goto v___jp_6997_;
}
else
{
lean_object* v___x_7006_; size_t v___x_7007_; size_t v___x_7008_; lean_object* v___x_7009_; 
v___x_7006_ = lean_box(0);
v___x_7007_ = ((size_t)0ULL);
v___x_7008_ = lean_usize_of_nat(v___x_7004_);
v___x_7009_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(v___x_7002_, v___x_7007_, v___x_7008_, v___x_7006_, v_a_6985_, v_a_6986_);
lean_dec(v___x_7002_);
if (lean_obj_tag(v___x_7009_) == 0)
{
lean_dec_ref_known(v___x_7009_, 1);
goto v___jp_6997_;
}
else
{
lean_object* v_a_7010_; lean_object* v___x_7012_; uint8_t v_isShared_7013_; uint8_t v_isSharedCheck_7017_; 
lean_dec_ref(v___x_6996_);
lean_del_object(v___x_6993_);
v_a_7010_ = lean_ctor_get(v___x_7009_, 0);
v_isSharedCheck_7017_ = !lean_is_exclusive(v___x_7009_);
if (v_isSharedCheck_7017_ == 0)
{
v___x_7012_ = v___x_7009_;
v_isShared_7013_ = v_isSharedCheck_7017_;
goto v_resetjp_7011_;
}
else
{
lean_inc(v_a_7010_);
lean_dec(v___x_7009_);
v___x_7012_ = lean_box(0);
v_isShared_7013_ = v_isSharedCheck_7017_;
goto v_resetjp_7011_;
}
v_resetjp_7011_:
{
lean_object* v___x_7015_; 
if (v_isShared_7013_ == 0)
{
v___x_7015_ = v___x_7012_;
goto v_reusejp_7014_;
}
else
{
lean_object* v_reuseFailAlloc_7016_; 
v_reuseFailAlloc_7016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7016_, 0, v_a_7010_);
v___x_7015_ = v_reuseFailAlloc_7016_;
goto v_reusejp_7014_;
}
v_reusejp_7014_:
{
return v___x_7015_;
}
}
}
}
v___jp_6997_:
{
lean_object* v___x_6998_; lean_object* v___x_7000_; 
v___x_6998_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v___x_6996_);
if (v_isShared_6994_ == 0)
{
lean_ctor_set(v___x_6993_, 0, v___x_6998_);
v___x_7000_ = v___x_6993_;
goto v_reusejp_6999_;
}
else
{
lean_object* v_reuseFailAlloc_7001_; 
v_reuseFailAlloc_7001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7001_, 0, v___x_6998_);
v___x_7000_ = v_reuseFailAlloc_7001_;
goto v_reusejp_6999_;
}
v_reusejp_6999_:
{
return v___x_7000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg___boxed(lean_object* v_entriesForConst_7019_, lean_object* v_a_7020_, lean_object* v_a_7021_, lean_object* v_a_7022_){
_start:
{
lean_object* v_res_7023_; 
v_res_7023_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7019_, v_a_7020_, v_a_7021_);
lean_dec(v_a_7021_);
lean_dec_ref(v_a_7020_);
return v_res_7023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(lean_object* v_00_u03b1_7024_, lean_object* v_entriesForConst_7025_, lean_object* v_a_7026_, lean_object* v_a_7027_){
_start:
{
lean_object* v___x_7029_; 
v___x_7029_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7025_, v_a_7026_, v_a_7027_);
return v___x_7029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___boxed(lean_object* v_00_u03b1_7030_, lean_object* v_entriesForConst_7031_, lean_object* v_a_7032_, lean_object* v_a_7033_, lean_object* v_a_7034_){
_start:
{
lean_object* v_res_7035_; 
v_res_7035_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(v_00_u03b1_7030_, v_entriesForConst_7031_, v_a_7032_, v_a_7033_);
lean_dec(v_a_7033_);
lean_dec_ref(v_a_7032_);
return v_res_7035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(lean_object* v_entriesForConst_7036_, lean_object* v_droppedEntriesRef_7037_, lean_object* v_droppedKeys_7038_, lean_object* v___y_7039_, lean_object* v___y_7040_, lean_object* v___y_7041_, lean_object* v___y_7042_){
_start:
{
lean_object* v_t_7045_; lean_object* v___x_7048_; 
v___x_7048_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7036_, v___y_7041_, v___y_7042_);
if (lean_obj_tag(v___x_7048_) == 0)
{
if (lean_obj_tag(v_droppedEntriesRef_7037_) == 1)
{
lean_object* v_a_7049_; lean_object* v_val_7050_; lean_object* v___x_7052_; uint8_t v_isShared_7053_; uint8_t v_isSharedCheck_7076_; 
v_a_7049_ = lean_ctor_get(v___x_7048_, 0);
lean_inc(v_a_7049_);
lean_dec_ref_known(v___x_7048_, 1);
v_val_7050_ = lean_ctor_get(v_droppedEntriesRef_7037_, 0);
v_isSharedCheck_7076_ = !lean_is_exclusive(v_droppedEntriesRef_7037_);
if (v_isSharedCheck_7076_ == 0)
{
v___x_7052_ = v_droppedEntriesRef_7037_;
v_isShared_7053_ = v_isSharedCheck_7076_;
goto v_resetjp_7051_;
}
else
{
lean_inc(v_val_7050_);
lean_dec(v_droppedEntriesRef_7037_);
v___x_7052_ = lean_box(0);
v_isShared_7053_ = v_isSharedCheck_7076_;
goto v_resetjp_7051_;
}
v_resetjp_7051_:
{
lean_object* v___x_7054_; 
v___x_7054_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_a_7049_, v_droppedKeys_7038_, v___y_7039_, v___y_7040_, v___y_7041_, v___y_7042_);
lean_dec(v_droppedKeys_7038_);
if (lean_obj_tag(v___x_7054_) == 0)
{
lean_object* v_a_7055_; lean_object* v_fst_7056_; lean_object* v_snd_7057_; lean_object* v___x_7058_; lean_object* v___y_7060_; 
v_a_7055_ = lean_ctor_get(v___x_7054_, 0);
lean_inc(v_a_7055_);
lean_dec_ref_known(v___x_7054_, 1);
v_fst_7056_ = lean_ctor_get(v_a_7055_, 0);
lean_inc(v_fst_7056_);
v_snd_7057_ = lean_ctor_get(v_a_7055_, 1);
lean_inc(v_snd_7057_);
lean_dec(v_a_7055_);
v___x_7058_ = lean_st_ref_get(v_val_7050_);
if (lean_obj_tag(v___x_7058_) == 0)
{
lean_object* v___x_7066_; 
v___x_7066_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___redArg___closed__0));
v___y_7060_ = v___x_7066_;
goto v___jp_7059_;
}
else
{
lean_object* v_val_7067_; 
v_val_7067_ = lean_ctor_get(v___x_7058_, 0);
lean_inc(v_val_7067_);
lean_dec_ref_known(v___x_7058_, 1);
v___y_7060_ = v_val_7067_;
goto v___jp_7059_;
}
v___jp_7059_:
{
lean_object* v___x_7061_; lean_object* v___x_7063_; 
v___x_7061_ = l_Array_append___redArg(v___y_7060_, v_fst_7056_);
lean_dec(v_fst_7056_);
if (v_isShared_7053_ == 0)
{
lean_ctor_set(v___x_7052_, 0, v___x_7061_);
v___x_7063_ = v___x_7052_;
goto v_reusejp_7062_;
}
else
{
lean_object* v_reuseFailAlloc_7065_; 
v_reuseFailAlloc_7065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7065_, 0, v___x_7061_);
v___x_7063_ = v_reuseFailAlloc_7065_;
goto v_reusejp_7062_;
}
v_reusejp_7062_:
{
lean_object* v___x_7064_; 
v___x_7064_ = lean_st_ref_swap(v_val_7050_, v___x_7063_);
lean_dec(v_val_7050_);
lean_dec(v___x_7064_);
v_t_7045_ = v_snd_7057_;
goto v___jp_7044_;
}
}
}
else
{
lean_object* v_a_7068_; lean_object* v___x_7070_; uint8_t v_isShared_7071_; uint8_t v_isSharedCheck_7075_; 
lean_del_object(v___x_7052_);
lean_dec(v_val_7050_);
v_a_7068_ = lean_ctor_get(v___x_7054_, 0);
v_isSharedCheck_7075_ = !lean_is_exclusive(v___x_7054_);
if (v_isSharedCheck_7075_ == 0)
{
v___x_7070_ = v___x_7054_;
v_isShared_7071_ = v_isSharedCheck_7075_;
goto v_resetjp_7069_;
}
else
{
lean_inc(v_a_7068_);
lean_dec(v___x_7054_);
v___x_7070_ = lean_box(0);
v_isShared_7071_ = v_isSharedCheck_7075_;
goto v_resetjp_7069_;
}
v_resetjp_7069_:
{
lean_object* v___x_7073_; 
if (v_isShared_7071_ == 0)
{
v___x_7073_ = v___x_7070_;
goto v_reusejp_7072_;
}
else
{
lean_object* v_reuseFailAlloc_7074_; 
v_reuseFailAlloc_7074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7074_, 0, v_a_7068_);
v___x_7073_ = v_reuseFailAlloc_7074_;
goto v_reusejp_7072_;
}
v_reusejp_7072_:
{
return v___x_7073_;
}
}
}
}
}
else
{
lean_object* v_a_7077_; lean_object* v___x_7078_; 
lean_dec(v_droppedEntriesRef_7037_);
v_a_7077_ = lean_ctor_get(v___x_7048_, 0);
lean_inc(v_a_7077_);
lean_dec_ref_known(v___x_7048_, 1);
v___x_7078_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_a_7077_, v_droppedKeys_7038_, v___y_7039_, v___y_7040_, v___y_7041_, v___y_7042_);
if (lean_obj_tag(v___x_7078_) == 0)
{
lean_object* v_a_7079_; 
v_a_7079_ = lean_ctor_get(v___x_7078_, 0);
lean_inc(v_a_7079_);
lean_dec_ref_known(v___x_7078_, 1);
v_t_7045_ = v_a_7079_;
goto v___jp_7044_;
}
else
{
lean_object* v_a_7080_; lean_object* v___x_7082_; uint8_t v_isShared_7083_; uint8_t v_isSharedCheck_7087_; 
v_a_7080_ = lean_ctor_get(v___x_7078_, 0);
v_isSharedCheck_7087_ = !lean_is_exclusive(v___x_7078_);
if (v_isSharedCheck_7087_ == 0)
{
v___x_7082_ = v___x_7078_;
v_isShared_7083_ = v_isSharedCheck_7087_;
goto v_resetjp_7081_;
}
else
{
lean_inc(v_a_7080_);
lean_dec(v___x_7078_);
v___x_7082_ = lean_box(0);
v_isShared_7083_ = v_isSharedCheck_7087_;
goto v_resetjp_7081_;
}
v_resetjp_7081_:
{
lean_object* v___x_7085_; 
if (v_isShared_7083_ == 0)
{
v___x_7085_ = v___x_7082_;
goto v_reusejp_7084_;
}
else
{
lean_object* v_reuseFailAlloc_7086_; 
v_reuseFailAlloc_7086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7086_, 0, v_a_7080_);
v___x_7085_ = v_reuseFailAlloc_7086_;
goto v_reusejp_7084_;
}
v_reusejp_7084_:
{
return v___x_7085_;
}
}
}
}
}
else
{
lean_object* v_a_7088_; lean_object* v___x_7090_; uint8_t v_isShared_7091_; uint8_t v_isSharedCheck_7095_; 
lean_dec(v_droppedKeys_7038_);
lean_dec(v_droppedEntriesRef_7037_);
v_a_7088_ = lean_ctor_get(v___x_7048_, 0);
v_isSharedCheck_7095_ = !lean_is_exclusive(v___x_7048_);
if (v_isSharedCheck_7095_ == 0)
{
v___x_7090_ = v___x_7048_;
v_isShared_7091_ = v_isSharedCheck_7095_;
goto v_resetjp_7089_;
}
else
{
lean_inc(v_a_7088_);
lean_dec(v___x_7048_);
v___x_7090_ = lean_box(0);
v_isShared_7091_ = v_isSharedCheck_7095_;
goto v_resetjp_7089_;
}
v_resetjp_7089_:
{
lean_object* v___x_7093_; 
if (v_isShared_7091_ == 0)
{
v___x_7093_ = v___x_7090_;
goto v_reusejp_7092_;
}
else
{
lean_object* v_reuseFailAlloc_7094_; 
v_reuseFailAlloc_7094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7094_, 0, v_a_7088_);
v___x_7093_ = v_reuseFailAlloc_7094_;
goto v_reusejp_7092_;
}
v_reusejp_7092_:
{
return v___x_7093_;
}
}
}
v___jp_7044_:
{
lean_object* v___x_7046_; lean_object* v___x_7047_; 
v___x_7046_ = lean_st_mk_ref(v_t_7045_);
v___x_7047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7047_, 0, v___x_7046_);
return v___x_7047_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed(lean_object* v_entriesForConst_7096_, lean_object* v_droppedEntriesRef_7097_, lean_object* v_droppedKeys_7098_, lean_object* v___y_7099_, lean_object* v___y_7100_, lean_object* v___y_7101_, lean_object* v___y_7102_, lean_object* v___y_7103_){
_start:
{
lean_object* v_res_7104_; 
v_res_7104_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(v_entriesForConst_7096_, v_droppedEntriesRef_7097_, v_droppedKeys_7098_, v___y_7099_, v___y_7100_, v___y_7101_, v___y_7102_);
lean_dec(v___y_7102_);
lean_dec_ref(v___y_7101_);
lean_dec(v___y_7100_);
lean_dec_ref(v___y_7099_);
return v_res_7104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(lean_object* v_entriesForConst_7106_, lean_object* v_droppedKeys_7107_, lean_object* v_droppedEntriesRef_7108_, lean_object* v_a_7109_, lean_object* v_a_7110_, lean_object* v_a_7111_, lean_object* v_a_7112_){
_start:
{
lean_object* v___f_7114_; lean_object* v___x_7115_; lean_object* v___x_7116_; lean_object* v___x_7117_; lean_object* v___x_7118_; 
v___f_7114_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_7114_, 0, v_entriesForConst_7106_);
lean_closure_set(v___f_7114_, 1, v_droppedEntriesRef_7108_);
lean_closure_set(v___f_7114_, 2, v_droppedKeys_7107_);
v___x_7115_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_7111_);
v___x_7116_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0));
v___x_7117_ = lean_box(0);
v___x_7118_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_7116_, v___x_7115_, v___f_7114_, v___x_7117_, v_a_7109_, v_a_7110_, v_a_7111_, v_a_7112_);
lean_dec_ref(v___x_7115_);
return v___x_7118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___boxed(lean_object* v_entriesForConst_7119_, lean_object* v_droppedKeys_7120_, lean_object* v_droppedEntriesRef_7121_, lean_object* v_a_7122_, lean_object* v_a_7123_, lean_object* v_a_7124_, lean_object* v_a_7125_, lean_object* v_a_7126_){
_start:
{
lean_object* v_res_7127_; 
v_res_7127_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_entriesForConst_7119_, v_droppedKeys_7120_, v_droppedEntriesRef_7121_, v_a_7122_, v_a_7123_, v_a_7124_, v_a_7125_);
lean_dec(v_a_7125_);
lean_dec_ref(v_a_7124_);
lean_dec(v_a_7123_);
lean_dec_ref(v_a_7122_);
return v_res_7127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(lean_object* v_00_u03b1_7128_, lean_object* v_entriesForConst_7129_, lean_object* v_droppedKeys_7130_, lean_object* v_droppedEntriesRef_7131_, lean_object* v_a_7132_, lean_object* v_a_7133_, lean_object* v_a_7134_, lean_object* v_a_7135_){
_start:
{
lean_object* v___x_7137_; 
v___x_7137_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_entriesForConst_7129_, v_droppedKeys_7130_, v_droppedEntriesRef_7131_, v_a_7132_, v_a_7133_, v_a_7134_, v_a_7135_);
return v___x_7137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___boxed(lean_object* v_00_u03b1_7138_, lean_object* v_entriesForConst_7139_, lean_object* v_droppedKeys_7140_, lean_object* v_droppedEntriesRef_7141_, lean_object* v_a_7142_, lean_object* v_a_7143_, lean_object* v_a_7144_, lean_object* v_a_7145_, lean_object* v_a_7146_){
_start:
{
lean_object* v_res_7147_; 
v_res_7147_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(v_00_u03b1_7138_, v_entriesForConst_7139_, v_droppedKeys_7140_, v_droppedEntriesRef_7141_, v_a_7142_, v_a_7143_, v_a_7144_, v_a_7145_);
lean_dec(v_a_7145_);
lean_dec_ref(v_a_7144_);
lean_dec(v_a_7143_);
lean_dec_ref(v_a_7142_);
return v_res_7147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(lean_object* v_moduleRef_7148_, lean_object* v_ty_7149_, lean_object* v___y_7150_, lean_object* v___y_7151_, lean_object* v___y_7152_, lean_object* v___y_7153_){
_start:
{
lean_object* v___x_7155_; lean_object* v___x_7156_; 
v___x_7155_ = lean_st_ref_get(v_moduleRef_7148_);
v___x_7156_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v___x_7155_, v_ty_7149_, v___y_7150_, v___y_7151_, v___y_7152_, v___y_7153_);
if (lean_obj_tag(v___x_7156_) == 0)
{
lean_object* v_a_7157_; lean_object* v___x_7159_; uint8_t v_isShared_7160_; uint8_t v_isSharedCheck_7167_; 
v_a_7157_ = lean_ctor_get(v___x_7156_, 0);
v_isSharedCheck_7167_ = !lean_is_exclusive(v___x_7156_);
if (v_isSharedCheck_7167_ == 0)
{
v___x_7159_ = v___x_7156_;
v_isShared_7160_ = v_isSharedCheck_7167_;
goto v_resetjp_7158_;
}
else
{
lean_inc(v_a_7157_);
lean_dec(v___x_7156_);
v___x_7159_ = lean_box(0);
v_isShared_7160_ = v_isSharedCheck_7167_;
goto v_resetjp_7158_;
}
v_resetjp_7158_:
{
lean_object* v_fst_7161_; lean_object* v_snd_7162_; lean_object* v___x_7163_; lean_object* v___x_7165_; 
v_fst_7161_ = lean_ctor_get(v_a_7157_, 0);
lean_inc(v_fst_7161_);
v_snd_7162_ = lean_ctor_get(v_a_7157_, 1);
lean_inc(v_snd_7162_);
lean_dec(v_a_7157_);
v___x_7163_ = lean_st_ref_swap(v_moduleRef_7148_, v_snd_7162_);
lean_dec(v___x_7163_);
if (v_isShared_7160_ == 0)
{
lean_ctor_set(v___x_7159_, 0, v_fst_7161_);
v___x_7165_ = v___x_7159_;
goto v_reusejp_7164_;
}
else
{
lean_object* v_reuseFailAlloc_7166_; 
v_reuseFailAlloc_7166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7166_, 0, v_fst_7161_);
v___x_7165_ = v_reuseFailAlloc_7166_;
goto v_reusejp_7164_;
}
v_reusejp_7164_:
{
return v___x_7165_;
}
}
}
else
{
lean_object* v_a_7168_; lean_object* v___x_7170_; uint8_t v_isShared_7171_; uint8_t v_isSharedCheck_7175_; 
v_a_7168_ = lean_ctor_get(v___x_7156_, 0);
v_isSharedCheck_7175_ = !lean_is_exclusive(v___x_7156_);
if (v_isSharedCheck_7175_ == 0)
{
v___x_7170_ = v___x_7156_;
v_isShared_7171_ = v_isSharedCheck_7175_;
goto v_resetjp_7169_;
}
else
{
lean_inc(v_a_7168_);
lean_dec(v___x_7156_);
v___x_7170_ = lean_box(0);
v_isShared_7171_ = v_isSharedCheck_7175_;
goto v_resetjp_7169_;
}
v_resetjp_7169_:
{
lean_object* v___x_7173_; 
if (v_isShared_7171_ == 0)
{
v___x_7173_ = v___x_7170_;
goto v_reusejp_7172_;
}
else
{
lean_object* v_reuseFailAlloc_7174_; 
v_reuseFailAlloc_7174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7174_, 0, v_a_7168_);
v___x_7173_ = v_reuseFailAlloc_7174_;
goto v_reusejp_7172_;
}
v_reusejp_7172_:
{
return v___x_7173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed(lean_object* v_moduleRef_7176_, lean_object* v_ty_7177_, lean_object* v___y_7178_, lean_object* v___y_7179_, lean_object* v___y_7180_, lean_object* v___y_7181_, lean_object* v___y_7182_){
_start:
{
lean_object* v_res_7183_; 
v_res_7183_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(v_moduleRef_7176_, v_ty_7177_, v___y_7178_, v___y_7179_, v___y_7180_, v___y_7181_);
lean_dec(v___y_7181_);
lean_dec_ref(v___y_7180_);
lean_dec(v___y_7179_);
lean_dec_ref(v___y_7178_);
lean_dec(v_moduleRef_7176_);
return v_res_7183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(lean_object* v_moduleRef_7185_, lean_object* v_ty_7186_, lean_object* v_a_7187_, lean_object* v_a_7188_, lean_object* v_a_7189_, lean_object* v_a_7190_){
_start:
{
lean_object* v___f_7192_; lean_object* v___x_7193_; lean_object* v___x_7194_; lean_object* v___x_7195_; lean_object* v___x_7196_; 
v___f_7192_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_7192_, 0, v_moduleRef_7185_);
lean_closure_set(v___f_7192_, 1, v_ty_7186_);
v___x_7193_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_7189_);
v___x_7194_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0));
v___x_7195_ = lean_box(0);
v___x_7196_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_7194_, v___x_7193_, v___f_7192_, v___x_7195_, v_a_7187_, v_a_7188_, v_a_7189_, v_a_7190_);
lean_dec_ref(v___x_7193_);
return v___x_7196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___boxed(lean_object* v_moduleRef_7197_, lean_object* v_ty_7198_, lean_object* v_a_7199_, lean_object* v_a_7200_, lean_object* v_a_7201_, lean_object* v_a_7202_, lean_object* v_a_7203_){
_start:
{
lean_object* v_res_7204_; 
v_res_7204_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleRef_7197_, v_ty_7198_, v_a_7199_, v_a_7200_, v_a_7201_, v_a_7202_);
lean_dec(v_a_7202_);
lean_dec_ref(v_a_7201_);
lean_dec(v_a_7200_);
lean_dec_ref(v_a_7199_);
return v_res_7204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches(lean_object* v_00_u03b1_7205_, lean_object* v_moduleRef_7206_, lean_object* v_ty_7207_, lean_object* v_a_7208_, lean_object* v_a_7209_, lean_object* v_a_7210_, lean_object* v_a_7211_){
_start:
{
lean_object* v___x_7213_; 
v___x_7213_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleRef_7206_, v_ty_7207_, v_a_7208_, v_a_7209_, v_a_7210_, v_a_7211_);
return v___x_7213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___boxed(lean_object* v_00_u03b1_7214_, lean_object* v_moduleRef_7215_, lean_object* v_ty_7216_, lean_object* v_a_7217_, lean_object* v_a_7218_, lean_object* v_a_7219_, lean_object* v_a_7220_, lean_object* v_a_7221_){
_start:
{
lean_object* v_res_7222_; 
v_res_7222_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches(v_00_u03b1_7214_, v_moduleRef_7215_, v_ty_7216_, v_a_7217_, v_a_7218_, v_a_7219_, v_a_7220_);
lean_dec(v_a_7220_);
lean_dec_ref(v_a_7219_);
lean_dec(v_a_7218_);
lean_dec_ref(v_a_7217_);
return v_res_7222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(lean_object* v_adjustResult_7223_, lean_object* v_j_7224_, size_t v_sz_7225_, size_t v_i_7226_, lean_object* v_bs_7227_){
_start:
{
uint8_t v___x_7228_; 
v___x_7228_ = lean_usize_dec_lt(v_i_7226_, v_sz_7225_);
if (v___x_7228_ == 0)
{
lean_dec(v_j_7224_);
lean_dec(v_adjustResult_7223_);
return v_bs_7227_;
}
else
{
lean_object* v_v_7229_; lean_object* v___x_7230_; lean_object* v_bs_x27_7231_; lean_object* v___x_7232_; size_t v___x_7233_; size_t v___x_7234_; lean_object* v___x_7235_; 
v_v_7229_ = lean_array_uget(v_bs_7227_, v_i_7226_);
v___x_7230_ = lean_unsigned_to_nat(0u);
v_bs_x27_7231_ = lean_array_uset(v_bs_7227_, v_i_7226_, v___x_7230_);
lean_inc(v_adjustResult_7223_);
lean_inc(v_j_7224_);
v___x_7232_ = lean_apply_2(v_adjustResult_7223_, v_j_7224_, v_v_7229_);
v___x_7233_ = ((size_t)1ULL);
v___x_7234_ = lean_usize_add(v_i_7226_, v___x_7233_);
v___x_7235_ = lean_array_uset(v_bs_x27_7231_, v_i_7226_, v___x_7232_);
v_i_7226_ = v___x_7234_;
v_bs_7227_ = v___x_7235_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg___boxed(lean_object* v_adjustResult_7237_, lean_object* v_j_7238_, lean_object* v_sz_7239_, lean_object* v_i_7240_, lean_object* v_bs_7241_){
_start:
{
size_t v_sz_boxed_7242_; size_t v_i_boxed_7243_; lean_object* v_res_7244_; 
v_sz_boxed_7242_ = lean_unbox_usize(v_sz_7239_);
lean_dec(v_sz_7239_);
v_i_boxed_7243_ = lean_unbox_usize(v_i_7240_);
lean_dec(v_i_7240_);
v_res_7244_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7237_, v_j_7238_, v_sz_boxed_7242_, v_i_boxed_7243_, v_bs_7241_);
return v_res_7244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(lean_object* v_adjustResult_7245_, lean_object* v_j_7246_, lean_object* v_as_7247_, size_t v_i_7248_, size_t v_stop_7249_, lean_object* v_b_7250_){
_start:
{
uint8_t v___x_7251_; 
v___x_7251_ = lean_usize_dec_eq(v_i_7248_, v_stop_7249_);
if (v___x_7251_ == 0)
{
lean_object* v___x_7252_; size_t v_sz_7253_; size_t v___x_7254_; lean_object* v___x_7255_; lean_object* v___x_7256_; size_t v___x_7257_; size_t v___x_7258_; 
v___x_7252_ = lean_array_uget_borrowed(v_as_7247_, v_i_7248_);
v_sz_7253_ = lean_array_size(v___x_7252_);
v___x_7254_ = ((size_t)0ULL);
lean_inc(v___x_7252_);
lean_inc(v_j_7246_);
lean_inc(v_adjustResult_7245_);
v___x_7255_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7245_, v_j_7246_, v_sz_7253_, v___x_7254_, v___x_7252_);
v___x_7256_ = l_Array_append___redArg(v_b_7250_, v___x_7255_);
lean_dec_ref(v___x_7255_);
v___x_7257_ = ((size_t)1ULL);
v___x_7258_ = lean_usize_add(v_i_7248_, v___x_7257_);
v_i_7248_ = v___x_7258_;
v_b_7250_ = v___x_7256_;
goto _start;
}
else
{
lean_dec(v_j_7246_);
lean_dec(v_adjustResult_7245_);
return v_b_7250_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg___boxed(lean_object* v_adjustResult_7260_, lean_object* v_j_7261_, lean_object* v_as_7262_, lean_object* v_i_7263_, lean_object* v_stop_7264_, lean_object* v_b_7265_){
_start:
{
size_t v_i_boxed_7266_; size_t v_stop_boxed_7267_; lean_object* v_res_7268_; 
v_i_boxed_7266_ = lean_unbox_usize(v_i_7263_);
lean_dec(v_i_7263_);
v_stop_boxed_7267_ = lean_unbox_usize(v_stop_7264_);
lean_dec(v_stop_7264_);
v_res_7268_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7260_, v_j_7261_, v_as_7262_, v_i_boxed_7266_, v_stop_boxed_7267_, v_b_7265_);
lean_dec_ref(v_as_7262_);
return v_res_7268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(lean_object* v_n_7269_, lean_object* v_aa_7270_, lean_object* v_adjustResult_7271_, lean_object* v_n_7272_, lean_object* v_j_7273_, lean_object* v_a_7274_){
_start:
{
lean_object* v_zero_7275_; uint8_t v_isZero_7276_; 
v_zero_7275_ = lean_unsigned_to_nat(0u);
v_isZero_7276_ = lean_nat_dec_eq(v_j_7273_, v_zero_7275_);
if (v_isZero_7276_ == 1)
{
lean_dec(v_j_7273_);
lean_dec(v_adjustResult_7271_);
return v_a_7274_;
}
else
{
lean_object* v_one_7277_; lean_object* v_n_7278_; lean_object* v___x_7279_; lean_object* v___x_7280_; lean_object* v_j_7281_; lean_object* v_b_7282_; lean_object* v___x_7283_; uint8_t v___x_7284_; 
v_one_7277_ = lean_unsigned_to_nat(1u);
v_n_7278_ = lean_nat_sub(v_j_7273_, v_one_7277_);
v___x_7279_ = lean_nat_sub(v_n_7272_, v_j_7273_);
lean_dec(v_j_7273_);
v___x_7280_ = lean_nat_sub(v_n_7269_, v_one_7277_);
v_j_7281_ = lean_nat_sub(v___x_7280_, v___x_7279_);
lean_dec(v___x_7279_);
lean_dec(v___x_7280_);
v_b_7282_ = lean_array_fget_borrowed(v_aa_7270_, v_j_7281_);
v___x_7283_ = lean_array_get_size(v_b_7282_);
v___x_7284_ = lean_nat_dec_lt(v_zero_7275_, v___x_7283_);
if (v___x_7284_ == 0)
{
lean_dec(v_j_7281_);
v_j_7273_ = v_n_7278_;
goto _start;
}
else
{
size_t v___x_7286_; size_t v___x_7287_; lean_object* v___x_7288_; 
v___x_7286_ = ((size_t)0ULL);
v___x_7287_ = lean_usize_of_nat(v___x_7283_);
lean_inc(v_adjustResult_7271_);
v___x_7288_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7271_, v_j_7281_, v_b_7282_, v___x_7286_, v___x_7287_, v_a_7274_);
v_j_7273_ = v_n_7278_;
v_a_7274_ = v___x_7288_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_n_7290_, lean_object* v_aa_7291_, lean_object* v_adjustResult_7292_, lean_object* v_n_7293_, lean_object* v_j_7294_, lean_object* v_a_7295_){
_start:
{
lean_object* v_res_7296_; 
v_res_7296_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7290_, v_aa_7291_, v_adjustResult_7292_, v_n_7293_, v_j_7294_, v_a_7295_);
lean_dec(v_n_7293_);
lean_dec_ref(v_aa_7291_);
lean_dec(v_n_7290_);
return v_res_7296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(lean_object* v_n_7297_, lean_object* v_adjustResult_7298_, lean_object* v_aa_7299_, lean_object* v_n_7300_, lean_object* v_j_7301_, lean_object* v_a_7302_){
_start:
{
lean_object* v_zero_7303_; uint8_t v_isZero_7304_; 
v_zero_7303_ = lean_unsigned_to_nat(0u);
v_isZero_7304_ = lean_nat_dec_eq(v_j_7301_, v_zero_7303_);
if (v_isZero_7304_ == 1)
{
lean_dec(v_adjustResult_7298_);
return v_a_7302_;
}
else
{
lean_object* v_one_7305_; lean_object* v_n_7306_; lean_object* v___x_7307_; lean_object* v___x_7308_; lean_object* v_j_7309_; lean_object* v_b_7310_; lean_object* v___x_7311_; uint8_t v___x_7312_; 
v_one_7305_ = lean_unsigned_to_nat(1u);
v_n_7306_ = lean_nat_sub(v_j_7301_, v_one_7305_);
v___x_7307_ = lean_nat_sub(v_n_7300_, v_j_7301_);
v___x_7308_ = lean_nat_sub(v_n_7297_, v_one_7305_);
v_j_7309_ = lean_nat_sub(v___x_7308_, v___x_7307_);
lean_dec(v___x_7307_);
lean_dec(v___x_7308_);
v_b_7310_ = lean_array_fget_borrowed(v_aa_7299_, v_j_7309_);
v___x_7311_ = lean_array_get_size(v_b_7310_);
v___x_7312_ = lean_nat_dec_lt(v_zero_7303_, v___x_7311_);
if (v___x_7312_ == 0)
{
lean_object* v___x_7313_; 
lean_dec(v_j_7309_);
v___x_7313_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7297_, v_aa_7299_, v_adjustResult_7298_, v_n_7300_, v_n_7306_, v_a_7302_);
return v___x_7313_;
}
else
{
size_t v___x_7314_; size_t v___x_7315_; lean_object* v___x_7316_; lean_object* v___x_7317_; 
v___x_7314_ = ((size_t)0ULL);
v___x_7315_ = lean_usize_of_nat(v___x_7311_);
lean_inc(v_adjustResult_7298_);
v___x_7316_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7298_, v_j_7309_, v_b_7310_, v___x_7314_, v___x_7315_, v_a_7302_);
v___x_7317_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7297_, v_aa_7299_, v_adjustResult_7298_, v_n_7300_, v_n_7306_, v___x_7316_);
return v___x_7317_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg___boxed(lean_object* v_n_7318_, lean_object* v_adjustResult_7319_, lean_object* v_aa_7320_, lean_object* v_n_7321_, lean_object* v_j_7322_, lean_object* v_a_7323_){
_start:
{
lean_object* v_res_7324_; 
v_res_7324_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7318_, v_adjustResult_7319_, v_aa_7320_, v_n_7321_, v_j_7322_, v_a_7323_);
lean_dec(v_j_7322_);
lean_dec(v_n_7321_);
lean_dec_ref(v_aa_7320_);
lean_dec(v_n_7318_);
return v_res_7324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(lean_object* v_adjustResult_7325_, lean_object* v_mr_7326_, lean_object* v_a_7327_){
_start:
{
lean_object* v_n_7328_; lean_object* v___x_7329_; 
v_n_7328_ = lean_array_get_size(v_mr_7326_);
v___x_7329_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7328_, v_adjustResult_7325_, v_mr_7326_, v_n_7328_, v_n_7328_, v_a_7327_);
return v___x_7329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg___boxed(lean_object* v_adjustResult_7330_, lean_object* v_mr_7331_, lean_object* v_a_7332_){
_start:
{
lean_object* v_res_7333_; 
v_res_7333_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7330_, v_mr_7331_, v_a_7332_);
lean_dec_ref(v_mr_7331_);
return v_res_7333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(lean_object* v_moduleTreeRef_7334_, lean_object* v_ref_7335_, lean_object* v_addEntry_7336_, lean_object* v_droppedKeys_7337_, lean_object* v_constantsPerTask_7338_, lean_object* v_droppedEntriesRef_7339_, lean_object* v_adjustResult_7340_, lean_object* v_ty_7341_, lean_object* v_a_7342_, lean_object* v_a_7343_, lean_object* v_a_7344_, lean_object* v_a_7345_){
_start:
{
lean_object* v___x_7347_; 
lean_inc_ref(v_ty_7341_);
v___x_7347_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleTreeRef_7334_, v_ty_7341_, v_a_7342_, v_a_7343_, v_a_7344_, v_a_7345_);
if (lean_obj_tag(v___x_7347_) == 0)
{
lean_object* v_a_7348_; lean_object* v___x_7349_; 
v_a_7348_ = lean_ctor_get(v___x_7347_, 0);
lean_inc(v_a_7348_);
lean_dec_ref_known(v___x_7347_, 1);
v___x_7349_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ref_7335_, v_addEntry_7336_, v_droppedKeys_7337_, v_constantsPerTask_7338_, v_droppedEntriesRef_7339_, v_ty_7341_, v_a_7342_, v_a_7343_, v_a_7344_, v_a_7345_);
if (lean_obj_tag(v___x_7349_) == 0)
{
lean_object* v_a_7350_; lean_object* v___x_7352_; uint8_t v_isShared_7353_; uint8_t v_isSharedCheck_7363_; 
v_a_7350_ = lean_ctor_get(v___x_7349_, 0);
v_isSharedCheck_7363_ = !lean_is_exclusive(v___x_7349_);
if (v_isSharedCheck_7363_ == 0)
{
v___x_7352_ = v___x_7349_;
v_isShared_7353_ = v_isSharedCheck_7363_;
goto v_resetjp_7351_;
}
else
{
lean_inc(v_a_7350_);
lean_dec(v___x_7349_);
v___x_7352_ = lean_box(0);
v_isShared_7353_ = v_isSharedCheck_7363_;
goto v_resetjp_7351_;
}
v_resetjp_7351_:
{
lean_object* v___x_7354_; lean_object* v___x_7355_; lean_object* v___x_7356_; lean_object* v___x_7357_; lean_object* v___x_7358_; lean_object* v___x_7359_; lean_object* v___x_7361_; 
v___x_7354_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_a_7348_);
v___x_7355_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_a_7350_);
v___x_7356_ = lean_nat_add(v___x_7354_, v___x_7355_);
lean_dec(v___x_7355_);
lean_dec(v___x_7354_);
v___x_7357_ = lean_mk_empty_array_with_capacity(v___x_7356_);
lean_dec(v___x_7356_);
lean_inc(v_adjustResult_7340_);
v___x_7358_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7340_, v_a_7348_, v___x_7357_);
lean_dec(v_a_7348_);
v___x_7359_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7340_, v_a_7350_, v___x_7358_);
lean_dec(v_a_7350_);
if (v_isShared_7353_ == 0)
{
lean_ctor_set(v___x_7352_, 0, v___x_7359_);
v___x_7361_ = v___x_7352_;
goto v_reusejp_7360_;
}
else
{
lean_object* v_reuseFailAlloc_7362_; 
v_reuseFailAlloc_7362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7362_, 0, v___x_7359_);
v___x_7361_ = v_reuseFailAlloc_7362_;
goto v_reusejp_7360_;
}
v_reusejp_7360_:
{
return v___x_7361_;
}
}
}
else
{
lean_object* v_a_7364_; lean_object* v___x_7366_; uint8_t v_isShared_7367_; uint8_t v_isSharedCheck_7371_; 
lean_dec(v_a_7348_);
lean_dec(v_adjustResult_7340_);
v_a_7364_ = lean_ctor_get(v___x_7349_, 0);
v_isSharedCheck_7371_ = !lean_is_exclusive(v___x_7349_);
if (v_isSharedCheck_7371_ == 0)
{
v___x_7366_ = v___x_7349_;
v_isShared_7367_ = v_isSharedCheck_7371_;
goto v_resetjp_7365_;
}
else
{
lean_inc(v_a_7364_);
lean_dec(v___x_7349_);
v___x_7366_ = lean_box(0);
v_isShared_7367_ = v_isSharedCheck_7371_;
goto v_resetjp_7365_;
}
v_resetjp_7365_:
{
lean_object* v___x_7369_; 
if (v_isShared_7367_ == 0)
{
v___x_7369_ = v___x_7366_;
goto v_reusejp_7368_;
}
else
{
lean_object* v_reuseFailAlloc_7370_; 
v_reuseFailAlloc_7370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7370_, 0, v_a_7364_);
v___x_7369_ = v_reuseFailAlloc_7370_;
goto v_reusejp_7368_;
}
v_reusejp_7368_:
{
return v___x_7369_;
}
}
}
}
else
{
lean_object* v_a_7372_; lean_object* v___x_7374_; uint8_t v_isShared_7375_; uint8_t v_isSharedCheck_7379_; 
lean_dec_ref(v_ty_7341_);
lean_dec(v_adjustResult_7340_);
lean_dec(v_droppedEntriesRef_7339_);
lean_dec(v_constantsPerTask_7338_);
lean_dec(v_droppedKeys_7337_);
lean_dec_ref(v_addEntry_7336_);
v_a_7372_ = lean_ctor_get(v___x_7347_, 0);
v_isSharedCheck_7379_ = !lean_is_exclusive(v___x_7347_);
if (v_isSharedCheck_7379_ == 0)
{
v___x_7374_ = v___x_7347_;
v_isShared_7375_ = v_isSharedCheck_7379_;
goto v_resetjp_7373_;
}
else
{
lean_inc(v_a_7372_);
lean_dec(v___x_7347_);
v___x_7374_ = lean_box(0);
v_isShared_7375_ = v_isSharedCheck_7379_;
goto v_resetjp_7373_;
}
v_resetjp_7373_:
{
lean_object* v___x_7377_; 
if (v_isShared_7375_ == 0)
{
v___x_7377_ = v___x_7374_;
goto v_reusejp_7376_;
}
else
{
lean_object* v_reuseFailAlloc_7378_; 
v_reuseFailAlloc_7378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7378_, 0, v_a_7372_);
v___x_7377_ = v_reuseFailAlloc_7378_;
goto v_reusejp_7376_;
}
v_reusejp_7376_:
{
return v___x_7377_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg___boxed(lean_object* v_moduleTreeRef_7380_, lean_object* v_ref_7381_, lean_object* v_addEntry_7382_, lean_object* v_droppedKeys_7383_, lean_object* v_constantsPerTask_7384_, lean_object* v_droppedEntriesRef_7385_, lean_object* v_adjustResult_7386_, lean_object* v_ty_7387_, lean_object* v_a_7388_, lean_object* v_a_7389_, lean_object* v_a_7390_, lean_object* v_a_7391_, lean_object* v_a_7392_){
_start:
{
lean_object* v_res_7393_; 
v_res_7393_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_moduleTreeRef_7380_, v_ref_7381_, v_addEntry_7382_, v_droppedKeys_7383_, v_constantsPerTask_7384_, v_droppedEntriesRef_7385_, v_adjustResult_7386_, v_ty_7387_, v_a_7388_, v_a_7389_, v_a_7390_, v_a_7391_);
lean_dec(v_a_7391_);
lean_dec_ref(v_a_7390_);
lean_dec(v_a_7389_);
lean_dec_ref(v_a_7388_);
lean_dec(v_ref_7381_);
return v_res_7393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt(lean_object* v_00_u03b1_7394_, lean_object* v_00_u03b2_7395_, lean_object* v_moduleTreeRef_7396_, lean_object* v_ref_7397_, lean_object* v_addEntry_7398_, lean_object* v_droppedKeys_7399_, lean_object* v_constantsPerTask_7400_, lean_object* v_droppedEntriesRef_7401_, lean_object* v_adjustResult_7402_, lean_object* v_ty_7403_, lean_object* v_a_7404_, lean_object* v_a_7405_, lean_object* v_a_7406_, lean_object* v_a_7407_){
_start:
{
lean_object* v___x_7409_; 
v___x_7409_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_moduleTreeRef_7396_, v_ref_7397_, v_addEntry_7398_, v_droppedKeys_7399_, v_constantsPerTask_7400_, v_droppedEntriesRef_7401_, v_adjustResult_7402_, v_ty_7403_, v_a_7404_, v_a_7405_, v_a_7406_, v_a_7407_);
return v___x_7409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___boxed(lean_object* v_00_u03b1_7410_, lean_object* v_00_u03b2_7411_, lean_object* v_moduleTreeRef_7412_, lean_object* v_ref_7413_, lean_object* v_addEntry_7414_, lean_object* v_droppedKeys_7415_, lean_object* v_constantsPerTask_7416_, lean_object* v_droppedEntriesRef_7417_, lean_object* v_adjustResult_7418_, lean_object* v_ty_7419_, lean_object* v_a_7420_, lean_object* v_a_7421_, lean_object* v_a_7422_, lean_object* v_a_7423_, lean_object* v_a_7424_){
_start:
{
lean_object* v_res_7425_; 
v_res_7425_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt(v_00_u03b1_7410_, v_00_u03b2_7411_, v_moduleTreeRef_7412_, v_ref_7413_, v_addEntry_7414_, v_droppedKeys_7415_, v_constantsPerTask_7416_, v_droppedEntriesRef_7417_, v_adjustResult_7418_, v_ty_7419_, v_a_7420_, v_a_7421_, v_a_7422_, v_a_7423_);
lean_dec(v_a_7423_);
lean_dec_ref(v_a_7422_);
lean_dec(v_a_7421_);
lean_dec_ref(v_a_7420_);
lean_dec(v_ref_7413_);
return v_res_7425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(lean_object* v_00_u03b1_7426_, lean_object* v_00_u03b2_7427_, lean_object* v_adjustResult_7428_, lean_object* v_mr_7429_, lean_object* v_a_7430_){
_start:
{
lean_object* v___x_7431_; 
v___x_7431_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7428_, v_mr_7429_, v_a_7430_);
return v___x_7431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___boxed(lean_object* v_00_u03b1_7432_, lean_object* v_00_u03b2_7433_, lean_object* v_adjustResult_7434_, lean_object* v_mr_7435_, lean_object* v_a_7436_){
_start:
{
lean_object* v_res_7437_; 
v_res_7437_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(v_00_u03b1_7432_, v_00_u03b2_7433_, v_adjustResult_7434_, v_mr_7435_, v_a_7436_);
lean_dec_ref(v_mr_7435_);
return v_res_7437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(lean_object* v_00_u03b1_7438_, lean_object* v_00_u03b2_7439_, lean_object* v_adjustResult_7440_, lean_object* v_j_7441_, size_t v_sz_7442_, size_t v_i_7443_, lean_object* v_bs_7444_){
_start:
{
lean_object* v___x_7445_; 
v___x_7445_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7440_, v_j_7441_, v_sz_7442_, v_i_7443_, v_bs_7444_);
return v___x_7445_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___boxed(lean_object* v_00_u03b1_7446_, lean_object* v_00_u03b2_7447_, lean_object* v_adjustResult_7448_, lean_object* v_j_7449_, lean_object* v_sz_7450_, lean_object* v_i_7451_, lean_object* v_bs_7452_){
_start:
{
size_t v_sz_boxed_7453_; size_t v_i_boxed_7454_; lean_object* v_res_7455_; 
v_sz_boxed_7453_ = lean_unbox_usize(v_sz_7450_);
lean_dec(v_sz_7450_);
v_i_boxed_7454_ = lean_unbox_usize(v_i_7451_);
lean_dec(v_i_7451_);
v_res_7455_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(v_00_u03b1_7446_, v_00_u03b2_7447_, v_adjustResult_7448_, v_j_7449_, v_sz_boxed_7453_, v_i_boxed_7454_, v_bs_7452_);
return v_res_7455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(lean_object* v_00_u03b1_7456_, lean_object* v_00_u03b2_7457_, lean_object* v_adjustResult_7458_, lean_object* v_j_7459_, lean_object* v_as_7460_, size_t v_i_7461_, size_t v_stop_7462_, lean_object* v_b_7463_){
_start:
{
lean_object* v___x_7464_; 
v___x_7464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7458_, v_j_7459_, v_as_7460_, v_i_7461_, v_stop_7462_, v_b_7463_);
return v___x_7464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___boxed(lean_object* v_00_u03b1_7465_, lean_object* v_00_u03b2_7466_, lean_object* v_adjustResult_7467_, lean_object* v_j_7468_, lean_object* v_as_7469_, lean_object* v_i_7470_, lean_object* v_stop_7471_, lean_object* v_b_7472_){
_start:
{
size_t v_i_boxed_7473_; size_t v_stop_boxed_7474_; lean_object* v_res_7475_; 
v_i_boxed_7473_ = lean_unbox_usize(v_i_7470_);
lean_dec(v_i_7470_);
v_stop_boxed_7474_ = lean_unbox_usize(v_stop_7471_);
lean_dec(v_stop_7471_);
v_res_7475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(v_00_u03b1_7465_, v_00_u03b2_7466_, v_adjustResult_7467_, v_j_7468_, v_as_7469_, v_i_boxed_7473_, v_stop_boxed_7474_, v_b_7472_);
lean_dec_ref(v_as_7469_);
return v_res_7475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(lean_object* v_00_u03b2_7476_, lean_object* v_n_7477_, lean_object* v_00_u03b1_7478_, lean_object* v_adjustResult_7479_, lean_object* v_aa_7480_, lean_object* v_n_7481_, lean_object* v_j_7482_, lean_object* v_a_7483_, lean_object* v_a_7484_){
_start:
{
lean_object* v___x_7485_; 
v___x_7485_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7477_, v_adjustResult_7479_, v_aa_7480_, v_n_7481_, v_j_7482_, v_a_7484_);
return v___x_7485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___boxed(lean_object* v_00_u03b2_7486_, lean_object* v_n_7487_, lean_object* v_00_u03b1_7488_, lean_object* v_adjustResult_7489_, lean_object* v_aa_7490_, lean_object* v_n_7491_, lean_object* v_j_7492_, lean_object* v_a_7493_, lean_object* v_a_7494_){
_start:
{
lean_object* v_res_7495_; 
v_res_7495_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(v_00_u03b2_7486_, v_n_7487_, v_00_u03b1_7488_, v_adjustResult_7489_, v_aa_7490_, v_n_7491_, v_j_7492_, v_a_7493_, v_a_7494_);
lean_dec(v_j_7492_);
lean_dec(v_n_7491_);
lean_dec_ref(v_aa_7490_);
lean_dec(v_n_7487_);
return v_res_7495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_7496_, lean_object* v_n_7497_, lean_object* v_00_u03b1_7498_, lean_object* v_aa_7499_, lean_object* v_adjustResult_7500_, lean_object* v_n_7501_, lean_object* v_j_7502_, lean_object* v_a_7503_, lean_object* v_a_7504_){
_start:
{
lean_object* v___x_7505_; 
v___x_7505_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7497_, v_aa_7499_, v_adjustResult_7500_, v_n_7501_, v_j_7502_, v_a_7504_);
return v___x_7505_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___boxed(lean_object* v_00_u03b2_7506_, lean_object* v_n_7507_, lean_object* v_00_u03b1_7508_, lean_object* v_aa_7509_, lean_object* v_adjustResult_7510_, lean_object* v_n_7511_, lean_object* v_j_7512_, lean_object* v_a_7513_, lean_object* v_a_7514_){
_start:
{
lean_object* v_res_7515_; 
v_res_7515_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(v_00_u03b2_7506_, v_n_7507_, v_00_u03b1_7508_, v_aa_7509_, v_adjustResult_7510_, v_n_7511_, v_j_7512_, v_a_7513_, v_a_7514_);
lean_dec(v_n_7511_);
lean_dec_ref(v_aa_7509_);
lean_dec(v_n_7507_);
return v_res_7515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(lean_object* v_x_7516_, lean_object* v_v_7517_){
_start:
{
lean_inc(v_v_7517_);
return v_v_7517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed(lean_object* v_x_7518_, lean_object* v_v_7519_){
_start:
{
lean_object* v_res_7520_; 
v_res_7520_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(v_x_7518_, v_v_7519_);
lean_dec(v_v_7519_);
lean_dec(v_x_7518_);
return v_res_7520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg(lean_object* v_ref_7522_, lean_object* v_addEntry_7523_, lean_object* v_droppedKeys_7524_, lean_object* v_constantsPerTask_7525_, lean_object* v_droppedEntriesRef_7526_, lean_object* v_ty_7527_, lean_object* v_a_7528_, lean_object* v_a_7529_, lean_object* v_a_7530_, lean_object* v_a_7531_){
_start:
{
lean_object* v___f_7533_; lean_object* v___x_7534_; 
v___f_7533_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0));
lean_inc(v_droppedEntriesRef_7526_);
lean_inc(v_droppedKeys_7524_);
lean_inc_ref(v_addEntry_7523_);
v___x_7534_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_addEntry_7523_, v_droppedKeys_7524_, v_droppedEntriesRef_7526_, v_a_7528_, v_a_7529_, v_a_7530_, v_a_7531_);
if (lean_obj_tag(v___x_7534_) == 0)
{
lean_object* v_a_7535_; lean_object* v___x_7536_; 
v_a_7535_ = lean_ctor_get(v___x_7534_, 0);
lean_inc(v_a_7535_);
lean_dec_ref_known(v___x_7534_, 1);
v___x_7536_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_a_7535_, v_ref_7522_, v_addEntry_7523_, v_droppedKeys_7524_, v_constantsPerTask_7525_, v_droppedEntriesRef_7526_, v___f_7533_, v_ty_7527_, v_a_7528_, v_a_7529_, v_a_7530_, v_a_7531_);
return v___x_7536_;
}
else
{
lean_object* v_a_7537_; lean_object* v___x_7539_; uint8_t v_isShared_7540_; uint8_t v_isSharedCheck_7544_; 
lean_dec_ref(v_ty_7527_);
lean_dec(v_droppedEntriesRef_7526_);
lean_dec(v_constantsPerTask_7525_);
lean_dec(v_droppedKeys_7524_);
lean_dec_ref(v_addEntry_7523_);
v_a_7537_ = lean_ctor_get(v___x_7534_, 0);
v_isSharedCheck_7544_ = !lean_is_exclusive(v___x_7534_);
if (v_isSharedCheck_7544_ == 0)
{
v___x_7539_ = v___x_7534_;
v_isShared_7540_ = v_isSharedCheck_7544_;
goto v_resetjp_7538_;
}
else
{
lean_inc(v_a_7537_);
lean_dec(v___x_7534_);
v___x_7539_ = lean_box(0);
v_isShared_7540_ = v_isSharedCheck_7544_;
goto v_resetjp_7538_;
}
v_resetjp_7538_:
{
lean_object* v___x_7542_; 
if (v_isShared_7540_ == 0)
{
v___x_7542_ = v___x_7539_;
goto v_reusejp_7541_;
}
else
{
lean_object* v_reuseFailAlloc_7543_; 
v_reuseFailAlloc_7543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7543_, 0, v_a_7537_);
v___x_7542_ = v_reuseFailAlloc_7543_;
goto v_reusejp_7541_;
}
v_reusejp_7541_:
{
return v___x_7542_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___boxed(lean_object* v_ref_7545_, lean_object* v_addEntry_7546_, lean_object* v_droppedKeys_7547_, lean_object* v_constantsPerTask_7548_, lean_object* v_droppedEntriesRef_7549_, lean_object* v_ty_7550_, lean_object* v_a_7551_, lean_object* v_a_7552_, lean_object* v_a_7553_, lean_object* v_a_7554_, lean_object* v_a_7555_){
_start:
{
lean_object* v_res_7556_; 
v_res_7556_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg(v_ref_7545_, v_addEntry_7546_, v_droppedKeys_7547_, v_constantsPerTask_7548_, v_droppedEntriesRef_7549_, v_ty_7550_, v_a_7551_, v_a_7552_, v_a_7553_, v_a_7554_);
lean_dec(v_a_7554_);
lean_dec_ref(v_a_7553_);
lean_dec(v_a_7552_);
lean_dec_ref(v_a_7551_);
lean_dec(v_ref_7545_);
return v_res_7556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches(lean_object* v_00_u03b1_7557_, lean_object* v_ref_7558_, lean_object* v_addEntry_7559_, lean_object* v_droppedKeys_7560_, lean_object* v_constantsPerTask_7561_, lean_object* v_droppedEntriesRef_7562_, lean_object* v_ty_7563_, lean_object* v_a_7564_, lean_object* v_a_7565_, lean_object* v_a_7566_, lean_object* v_a_7567_){
_start:
{
lean_object* v___x_7569_; 
v___x_7569_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg(v_ref_7558_, v_addEntry_7559_, v_droppedKeys_7560_, v_constantsPerTask_7561_, v_droppedEntriesRef_7562_, v_ty_7563_, v_a_7564_, v_a_7565_, v_a_7566_, v_a_7567_);
return v___x_7569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___boxed(lean_object* v_00_u03b1_7570_, lean_object* v_ref_7571_, lean_object* v_addEntry_7572_, lean_object* v_droppedKeys_7573_, lean_object* v_constantsPerTask_7574_, lean_object* v_droppedEntriesRef_7575_, lean_object* v_ty_7576_, lean_object* v_a_7577_, lean_object* v_a_7578_, lean_object* v_a_7579_, lean_object* v_a_7580_, lean_object* v_a_7581_){
_start:
{
lean_object* v_res_7582_; 
v_res_7582_ = l_Lean_Meta_LazyDiscrTree_findMatches(v_00_u03b1_7570_, v_ref_7571_, v_addEntry_7572_, v_droppedKeys_7573_, v_constantsPerTask_7574_, v_droppedEntriesRef_7575_, v_ty_7576_, v_a_7577_, v_a_7578_, v_a_7579_, v_a_7580_);
lean_dec(v_a_7580_);
lean_dec_ref(v_a_7579_);
lean_dec(v_a_7578_);
lean_dec_ref(v_a_7577_);
lean_dec(v_ref_7571_);
return v_res_7582_;
}
}
lean_object* runtime_initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar = _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar();
lean_mark_persistent(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar);
l_Lean_Meta_LazyDiscrTree_initCapacity = _init_l_Lean_Meta_LazyDiscrTree_initCapacity();
lean_mark_persistent(l_Lean_Meta_LazyDiscrTree_initCapacity);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_LazyDiscrTree(builtin);
}
#ifdef __cplusplus
}
#endif
