// Lean compiler output
// Module: Lean.Elab.PreDefinition.FixedParams
// Imports: public import Lean.Elab.PreDefinition.Basic import Init.Omega
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Array_range(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_indentD(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0;
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "❌"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object*);
static const lean_closure_object l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_FixedParams_Info_format, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_FixedParams_instToFormatInfo___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_FixedParams_instToFormatInfo = (const lean_object*)&l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_getParamRevDeps___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_getParamRevDeps___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_getParamRevDeps___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_getParamRevDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_getParamRevDeps___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_getParamRevDeps___closed__0 = (const lean_object*)&l_Lean_Elab_getParamRevDeps___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0 = (const lean_object*)&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "fixedParams"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(80, 131, 105, 217, 25, 82, 145, 102)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "getFixedParams: notFixed "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ":\nIn "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "\ntoo few arguments for "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " =/= "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " not matched"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.PreDefinition.FixedParams"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.getFixedParamsInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 185, .m_capacity = 185, .m_length = 184, .m_data = "assertion violation: params.size = arities[callerIdx]!\n\n      -- TODO: transform is overkill, a simple visit-all-subexpression that takes applications\n      -- as whole suffices\n      "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_getFixedParamsInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "getFixedParams:"};
static const lean_object* l_Lean_Elab_getFixedParamsInfo___closed__0 = (const lean_object*)&l_Lean_Elab_getFixedParamsInfo___closed__0_value;
static lean_once_cell_t l_Lean_Elab_getFixedParamsInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamsInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value),((lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value)}};
static const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1 = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3_value;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object*);
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "numFixed"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "perms"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "revDeps"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instReprFixedParamPerms___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instReprFixedParamPerms_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instReprFixedParamPerms___closed__0 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instReprFixedParamPerms = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.getFixedParamPerms"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "assertion violation: firstPerm[firstParamIdx]!.isSome\n            "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Incomplete paramInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: paramInfo[0]! = some paramIdx\n        "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "assertion violation: xs.size = paramInfos.size\n\n    "};
static const lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.forallTelescopeImpl.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "assertion violation: type.isForall\n      "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "assertion violation: xs'.size = 1\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamIdx < xs.size\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "assertion violation: !( __do_lift._@.Lean.Elab.PreDefinition.FixedParams.75993854._hygCtx._hyg.102.0 ).hasLooseBVars\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateForall.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: ys.size = 1\n          "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Elab.FixedParamPerm.instantiateForall"};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "assertion violation: xs.size = perm.numFixed\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateLambda.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "assertion violation: ys.size = 1\n            "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Elab.FixedParamPerm.instantiateLambda"};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.pickFixed.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamIdx < ys.size\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.FixedParamPerm.pickFixed"};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: xs.size = perm.size\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2;
static const lean_array_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.buildArgs.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "FixedParams.buildArgs: too few fixed args"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "FixedParams.buildArgs: too few varying args"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.FixedParamPerm.buildArgs"};
static const lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: fixedArgs.size = perm.numFixed\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Elab.FixedParamPerms.erase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: paramIdx < mapping.size\n      "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: fixedParamPerms.numFixed  = xs.size\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__0_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__1;
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 134, .m_capacity = 134, .m_length = 133, .m_data = "assertion violation: toErase.size = fixedParamPerms.perms.size\n  -- Calculate a mask on the fixed parameters of variables to erase\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__2 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__2_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__3;
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 41, .m_data = "assertion violation: xs.all (·.isFVar)\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__4 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__4_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 172, 242, 185, 134, 214, 81, 182)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "FixedParams"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(201, 87, 32, 251, 113, 133, 158, 252)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(140, 135, 17, 208, 62, 57, 192, 16)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(249, 225, 135, 56, 213, 49, 154, 134)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(180, 208, 124, 62, 167, 39, 159, 30)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 118, 73, 0, 78, 121, 48, 169)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 144, 90, 0, 164, 70, 155, 205)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(80, 80, 200, 145, 119, 202, 92, 1)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(26, 27, 9, 206, 200, 16, 168, 251)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(791000795) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(47, 149, 235, 94, 82, 130, 210, 117)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 33, 115, 184, 239, 184, 190, 148)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 81, 13, 137, 134, 8, 99, 98)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(225, 58, 56, 207, 96, 242, 57, 49)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object* v_revDeps_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_bs_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_5_ == 0)
{
return v_bs_4_;
}
else
{
lean_object* v_v_6_; lean_object* v___x_7_; lean_object* v_bs_x27_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; size_t v___x_15_; size_t v___x_16_; lean_object* v___x_17_; 
v_v_6_ = lean_array_uget(v_bs_4_, v_i_3_);
v___x_7_ = lean_unsigned_to_nat(0u);
v_bs_x27_8_ = lean_array_uset(v_bs_4_, v_i_3_, v___x_7_);
v___x_9_ = lean_array_get_size(v_v_6_);
lean_dec(v_v_6_);
v___x_10_ = lean_array_get_size(v_revDeps_1_);
v___x_11_ = lean_box(0);
v___x_12_ = lean_mk_array(v___x_10_, v___x_11_);
v___x_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
v___x_14_ = lean_mk_array(v___x_9_, v___x_13_);
v___x_15_ = ((size_t)1ULL);
v___x_16_ = lean_usize_add(v_i_3_, v___x_15_);
v___x_17_ = lean_array_uset(v_bs_x27_8_, v_i_3_, v___x_14_);
v_i_3_ = v___x_16_;
v_bs_4_ = v___x_17_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object* v_revDeps_19_, lean_object* v_sz_20_, lean_object* v_i_21_, lean_object* v_bs_22_){
_start:
{
size_t v_sz_boxed_23_; size_t v_i_boxed_24_; lean_object* v_res_25_; 
v_sz_boxed_23_ = lean_unbox_usize(v_sz_20_);
lean_dec(v_sz_20_);
v_i_boxed_24_ = lean_unbox_usize(v_i_21_);
lean_dec(v_i_21_);
v_res_25_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_19_, v_sz_boxed_23_, v_i_boxed_24_, v_bs_22_);
lean_dec_ref(v_revDeps_19_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object* v_revDeps_26_){
_start:
{
size_t v_sz_27_; size_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_sz_27_ = lean_array_size(v_revDeps_26_);
v___x_28_ = ((size_t)0ULL);
lean_inc_ref(v_revDeps_26_);
v___x_29_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_26_, v_sz_27_, v___x_28_, v_revDeps_26_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v_revDeps_26_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object* v_i_31_, size_t v_sz_32_, size_t v_i_33_, lean_object* v_bs_34_){
_start:
{
uint8_t v___x_35_; 
v___x_35_ = lean_usize_dec_lt(v_i_33_, v_sz_32_);
if (v___x_35_ == 0)
{
return v_bs_34_;
}
else
{
lean_object* v_v_36_; lean_object* v___x_37_; lean_object* v_bs_x27_38_; lean_object* v___y_40_; 
v_v_36_ = lean_array_uget(v_bs_34_, v_i_33_);
v___x_37_ = lean_unsigned_to_nat(0u);
v_bs_x27_38_ = lean_array_uset(v_bs_34_, v_i_33_, v___x_37_);
if (lean_obj_tag(v_v_36_) == 0)
{
v___y_40_ = v_v_36_;
goto v___jp_39_;
}
else
{
lean_object* v_val_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_55_; 
v_val_45_ = lean_ctor_get(v_v_36_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v_v_36_);
if (v_isSharedCheck_55_ == 0)
{
v___x_47_ = v_v_36_;
v_isShared_48_ = v_isSharedCheck_55_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_val_45_);
lean_dec(v_v_36_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_55_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_49_; lean_object* v___x_51_; 
v___x_49_ = lean_usize_to_nat(v_i_33_);
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 0, v___x_49_);
v___x_51_ = v___x_47_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v___x_49_);
v___x_51_ = v_reuseFailAlloc_54_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_array_set(v_val_45_, v_i_31_, v___x_51_);
v___x_53_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
v___y_40_ = v___x_53_;
goto v___jp_39_;
}
}
}
v___jp_39_:
{
size_t v___x_41_; size_t v___x_42_; lean_object* v___x_43_; 
v___x_41_ = ((size_t)1ULL);
v___x_42_ = lean_usize_add(v_i_33_, v___x_41_);
v___x_43_ = lean_array_uset(v_bs_x27_38_, v_i_33_, v___y_40_);
v_i_33_ = v___x_42_;
v_bs_34_ = v___x_43_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object* v_i_56_, lean_object* v_sz_57_, lean_object* v_i_58_, lean_object* v_bs_59_){
_start:
{
size_t v_sz_boxed_60_; size_t v_i_boxed_61_; lean_object* v_res_62_; 
v_sz_boxed_60_ = lean_unbox_usize(v_sz_57_);
lean_dec(v_sz_57_);
v_i_boxed_61_ = lean_unbox_usize(v_i_58_);
lean_dec(v_i_58_);
v_res_62_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_56_, v_sz_boxed_60_, v_i_boxed_61_, v_bs_59_);
lean_dec(v_i_56_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(size_t v_sz_63_, size_t v_i_64_, lean_object* v_bs_65_){
_start:
{
uint8_t v___x_66_; 
v___x_66_ = lean_usize_dec_lt(v_i_64_, v_sz_63_);
if (v___x_66_ == 0)
{
return v_bs_65_;
}
else
{
lean_object* v_v_67_; lean_object* v___x_68_; lean_object* v_bs_x27_69_; lean_object* v___x_70_; size_t v_sz_71_; size_t v___x_72_; lean_object* v___x_73_; size_t v___x_74_; size_t v___x_75_; lean_object* v___x_76_; 
v_v_67_ = lean_array_uget(v_bs_65_, v_i_64_);
v___x_68_ = lean_unsigned_to_nat(0u);
v_bs_x27_69_ = lean_array_uset(v_bs_65_, v_i_64_, v___x_68_);
v___x_70_ = lean_usize_to_nat(v_i_64_);
v_sz_71_ = lean_array_size(v_v_67_);
v___x_72_ = ((size_t)0ULL);
v___x_73_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v___x_70_, v_sz_71_, v___x_72_, v_v_67_);
lean_dec(v___x_70_);
v___x_74_ = ((size_t)1ULL);
v___x_75_ = lean_usize_add(v_i_64_, v___x_74_);
v___x_76_ = lean_array_uset(v_bs_x27_69_, v_i_64_, v___x_73_);
v_i_64_ = v___x_75_;
v_bs_65_ = v___x_76_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object* v_sz_78_, lean_object* v_i_79_, lean_object* v_bs_80_){
_start:
{
size_t v_sz_boxed_81_; size_t v_i_boxed_82_; lean_object* v_res_83_; 
v_sz_boxed_81_ = lean_unbox_usize(v_sz_78_);
lean_dec(v_sz_78_);
v_i_boxed_82_ = lean_unbox_usize(v_i_79_);
lean_dec(v_i_79_);
v_res_83_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_boxed_81_, v_i_boxed_82_, v_bs_80_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object* v_info_84_){
_start:
{
lean_object* v_graph_85_; lean_object* v_revDeps_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_96_; 
v_graph_85_ = lean_ctor_get(v_info_84_, 0);
v_revDeps_86_ = lean_ctor_get(v_info_84_, 1);
v_isSharedCheck_96_ = !lean_is_exclusive(v_info_84_);
if (v_isSharedCheck_96_ == 0)
{
v___x_88_ = v_info_84_;
v_isShared_89_ = v_isSharedCheck_96_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_revDeps_86_);
lean_inc(v_graph_85_);
lean_dec(v_info_84_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_96_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
size_t v_sz_90_; size_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_94_; 
v_sz_90_ = lean_array_size(v_graph_85_);
v___x_91_ = ((size_t)0ULL);
v___x_92_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_90_, v___x_91_, v_graph_85_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 0, v___x_92_);
v___x_94_ = v___x_88_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_95_, 1, v_revDeps_86_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object* v_i_97_, lean_object* v_as_98_, size_t v_sz_99_, size_t v_i_100_, lean_object* v_bs_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_97_, v_sz_99_, v_i_100_, v_bs_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object* v_i_103_, lean_object* v_as_104_, lean_object* v_sz_105_, lean_object* v_i_106_, lean_object* v_bs_107_){
_start:
{
size_t v_sz_boxed_108_; size_t v_i_boxed_109_; lean_object* v_res_110_; 
v_sz_boxed_108_ = lean_unbox_usize(v_sz_105_);
lean_dec(v_sz_105_);
v_i_boxed_109_ = lean_unbox_usize(v_i_106_);
lean_dec(v_i_106_);
v_res_110_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(v_i_103_, v_as_104_, v_sz_boxed_108_, v_i_boxed_109_, v_bs_107_);
lean_dec_ref(v_as_104_);
lean_dec(v_i_103_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object* v_as_111_, size_t v_sz_112_, size_t v_i_113_, lean_object* v_bs_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_112_, v_i_113_, v_bs_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object* v_as_116_, lean_object* v_sz_117_, lean_object* v_i_118_, lean_object* v_bs_119_){
_start:
{
size_t v_sz_boxed_120_; size_t v_i_boxed_121_; lean_object* v_res_122_; 
v_sz_boxed_120_ = lean_unbox_usize(v_sz_117_);
lean_dec(v_sz_117_);
v_i_boxed_121_ = lean_unbox_usize(v_i_118_);
lean_dec(v_i_118_);
v_res_122_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(v_as_116_, v_sz_boxed_120_, v_i_boxed_121_, v_bs_119_);
lean_dec_ref(v_as_116_);
return v_res_122_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Array_instInhabited___redArg();
return v___x_123_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object* v_callerIdx_124_, lean_object* v_paramIdx_125_, lean_object* v_info_126_){
_start:
{
lean_object* v_graph_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_graph_127_ = lean_ctor_get(v_info_126_, 0);
v___x_128_ = lean_box(0);
v___x_129_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_130_ = lean_array_get_borrowed(v___x_129_, v_graph_127_, v_callerIdx_124_);
v___x_131_ = lean_array_get_borrowed(v___x_128_, v___x_130_, v_paramIdx_125_);
if (lean_obj_tag(v___x_131_) == 0)
{
uint8_t v___x_132_; 
v___x_132_ = 0;
return v___x_132_;
}
else
{
uint8_t v___x_133_; 
v___x_133_ = 1;
return v___x_133_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object* v_callerIdx_134_, lean_object* v_paramIdx_135_, lean_object* v_info_136_){
_start:
{
uint8_t v_res_137_; lean_object* v_r_138_; 
v_res_137_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_134_, v_paramIdx_135_, v_info_136_);
lean_dec_ref(v_info_136_);
lean_dec(v_paramIdx_135_);
lean_dec(v_callerIdx_134_);
v_r_138_ = lean_box(v_res_137_);
return v_r_138_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object* v_upperBound_139_, lean_object* v_next_140_, lean_object* v_funIdx_141_, lean_object* v_paramIdx_142_, lean_object* v_a_143_, lean_object* v_b_144_){
_start:
{
lean_object* v_a_146_; uint8_t v___x_150_; 
v___x_150_ = lean_nat_dec_lt(v_a_143_, v_upperBound_139_);
if (v___x_150_ == 0)
{
lean_dec(v_a_143_);
lean_dec(v_paramIdx_142_);
return v_b_144_;
}
else
{
lean_object* v_graph_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_graph_151_ = lean_ctor_get(v_b_144_, 0);
v___x_152_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_153_ = lean_box(0);
v___x_154_ = lean_array_get_borrowed(v___x_152_, v_graph_151_, v_next_140_);
v___x_155_ = lean_array_get(v___x_153_, v___x_154_, v_a_143_);
if (lean_obj_tag(v___x_155_) == 1)
{
lean_object* v_val_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_167_; 
v_val_156_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_167_ == 0)
{
v___x_158_ = v___x_155_;
v_isShared_159_ = v_isSharedCheck_167_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_val_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_167_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_160_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_161_ = lean_array_get(v___x_153_, v_val_156_, v_funIdx_141_);
lean_dec(v_val_156_);
lean_inc(v_paramIdx_142_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v_paramIdx_142_);
v___x_163_ = v___x_158_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_paramIdx_142_);
v___x_163_ = v_reuseFailAlloc_166_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
uint8_t v___x_164_; 
v___x_164_ = l_Option_instDecidableEq___redArg(v___x_160_, v___x_161_, v___x_163_);
if (v___x_164_ == 0)
{
v_a_146_ = v_b_144_;
goto v___jp_145_;
}
else
{
lean_object* v___x_165_; 
lean_inc(v_a_143_);
v___x_165_ = l_Lean_Elab_FixedParams_Info_setVarying(v_next_140_, v_a_143_, v_b_144_);
v_a_146_ = v___x_165_;
goto v___jp_145_;
}
}
}
}
else
{
lean_dec(v___x_155_);
v_a_146_ = v_b_144_;
goto v___jp_145_;
}
}
v___jp_145_:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_unsigned_to_nat(1u);
v___x_148_ = lean_nat_add(v_a_143_, v___x_147_);
lean_dec(v_a_143_);
v_a_143_ = v___x_148_;
v_b_144_ = v_a_146_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object* v_upperBound_168_, lean_object* v_funIdx_169_, lean_object* v_paramIdx_170_, lean_object* v_a_171_, lean_object* v_b_172_){
_start:
{
uint8_t v___x_173_; 
v___x_173_ = lean_nat_dec_lt(v_a_171_, v_upperBound_168_);
if (v___x_173_ == 0)
{
lean_dec(v_a_171_);
lean_dec(v_paramIdx_170_);
return v_b_172_;
}
else
{
lean_object* v_graph_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_graph_174_ = lean_ctor_get(v_b_172_, 0);
v___x_175_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_176_ = lean_array_get_borrowed(v___x_175_, v_graph_174_, v_a_171_);
v___x_177_ = lean_array_get_size(v___x_176_);
v___x_178_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_170_);
v___x_179_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v___x_177_, v_a_171_, v_funIdx_169_, v_paramIdx_170_, v___x_178_, v_b_172_);
v___x_180_ = lean_unsigned_to_nat(1u);
v___x_181_ = lean_nat_add(v_a_171_, v___x_180_);
lean_dec(v_a_171_);
v_a_171_ = v___x_181_;
v_b_172_ = v___x_179_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object* v_funIdx_183_, lean_object* v_paramIdx_184_, lean_object* v_info_185_){
_start:
{
uint8_t v___x_186_; 
v___x_186_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_funIdx_183_, v_paramIdx_184_, v_info_185_);
if (v___x_186_ == 0)
{
lean_dec(v_paramIdx_184_);
return v_info_185_;
}
else
{
lean_object* v_graph_187_; lean_object* v_revDeps_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_215_; 
v_graph_187_ = lean_ctor_get(v_info_185_, 0);
v_revDeps_188_ = lean_ctor_get(v_info_185_, 1);
v_isSharedCheck_215_ = !lean_is_exclusive(v_info_185_);
if (v_isSharedCheck_215_ == 0)
{
v___x_190_ = v_info_185_;
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_revDeps_188_);
lean_inc(v_graph_187_);
lean_dec(v_info_185_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; lean_object* v___y_194_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_192_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_207_ = lean_array_get_size(v_graph_187_);
v___x_208_ = lean_nat_dec_lt(v_funIdx_183_, v___x_207_);
if (v___x_208_ == 0)
{
v___y_194_ = v_graph_187_;
goto v___jp_193_;
}
else
{
lean_object* v_v_209_; lean_object* v___x_210_; lean_object* v_xs_x27_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v_v_209_ = lean_array_fget(v_graph_187_, v_funIdx_183_);
v___x_210_ = lean_box(0);
v_xs_x27_211_ = lean_array_fset(v_graph_187_, v_funIdx_183_, v___x_210_);
v___x_212_ = lean_box(0);
v___x_213_ = lean_array_set(v_v_209_, v_paramIdx_184_, v___x_212_);
v___x_214_ = lean_array_fset(v_xs_x27_211_, v_funIdx_183_, v___x_213_);
v___y_194_ = v___x_214_;
goto v___jp_193_;
}
v___jp_193_:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v_info_198_; 
v___x_195_ = lean_array_get_size(v___y_194_);
v___x_196_ = lean_unsigned_to_nat(0u);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v___y_194_);
v_info_198_ = v___x_190_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___y_194_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_revDeps_188_);
v_info_198_ = v_reuseFailAlloc_206_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
lean_object* v___x_199_; lean_object* v_revDeps_200_; lean_object* v___x_201_; lean_object* v___x_202_; size_t v_sz_203_; size_t v___x_204_; lean_object* v___x_205_; 
lean_inc(v_paramIdx_184_);
v___x_199_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v___x_195_, v_funIdx_183_, v_paramIdx_184_, v___x_196_, v_info_198_);
v_revDeps_200_ = lean_ctor_get(v___x_199_, 1);
v___x_201_ = lean_array_get_borrowed(v___x_192_, v_revDeps_200_, v_funIdx_183_);
v___x_202_ = lean_array_get(v___x_192_, v___x_201_, v_paramIdx_184_);
lean_dec(v_paramIdx_184_);
v_sz_203_ = lean_array_size(v___x_202_);
v___x_204_ = ((size_t)0ULL);
v___x_205_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_183_, v___x_202_, v_sz_203_, v___x_204_, v___x_199_);
lean_dec(v___x_202_);
return v___x_205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object* v_funIdx_216_, lean_object* v_as_217_, size_t v_sz_218_, size_t v_i_219_, lean_object* v_b_220_){
_start:
{
uint8_t v___x_221_; 
v___x_221_ = lean_usize_dec_lt(v_i_219_, v_sz_218_);
if (v___x_221_ == 0)
{
return v_b_220_;
}
else
{
lean_object* v_a_222_; lean_object* v___x_223_; size_t v___x_224_; size_t v___x_225_; 
v_a_222_ = lean_array_uget_borrowed(v_as_217_, v_i_219_);
lean_inc(v_a_222_);
v___x_223_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_216_, v_a_222_, v_b_220_);
v___x_224_ = ((size_t)1ULL);
v___x_225_ = lean_usize_add(v_i_219_, v___x_224_);
v_i_219_ = v___x_225_;
v_b_220_ = v___x_223_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object* v_funIdx_227_, lean_object* v_as_228_, lean_object* v_sz_229_, lean_object* v_i_230_, lean_object* v_b_231_){
_start:
{
size_t v_sz_boxed_232_; size_t v_i_boxed_233_; lean_object* v_res_234_; 
v_sz_boxed_232_ = lean_unbox_usize(v_sz_229_);
lean_dec(v_sz_229_);
v_i_boxed_233_ = lean_unbox_usize(v_i_230_);
lean_dec(v_i_230_);
v_res_234_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_227_, v_as_228_, v_sz_boxed_232_, v_i_boxed_233_, v_b_231_);
lean_dec_ref(v_as_228_);
lean_dec(v_funIdx_227_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object* v_upperBound_235_, lean_object* v_funIdx_236_, lean_object* v_paramIdx_237_, lean_object* v_a_238_, lean_object* v_b_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_235_, v_funIdx_236_, v_paramIdx_237_, v_a_238_, v_b_239_);
lean_dec(v_funIdx_236_);
lean_dec(v_upperBound_235_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object* v_upperBound_241_, lean_object* v_next_242_, lean_object* v_funIdx_243_, lean_object* v_paramIdx_244_, lean_object* v_a_245_, lean_object* v_b_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_241_, v_next_242_, v_funIdx_243_, v_paramIdx_244_, v_a_245_, v_b_246_);
lean_dec(v_funIdx_243_);
lean_dec(v_next_242_);
lean_dec(v_upperBound_241_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object* v_funIdx_248_, lean_object* v_paramIdx_249_, lean_object* v_info_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_248_, v_paramIdx_249_, v_info_250_);
lean_dec(v_funIdx_248_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object* v_upperBound_252_, lean_object* v_next_253_, lean_object* v_funIdx_254_, lean_object* v_paramIdx_255_, lean_object* v_inst_256_, lean_object* v_R_257_, lean_object* v_a_258_, lean_object* v_b_259_, lean_object* v_c_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_252_, v_next_253_, v_funIdx_254_, v_paramIdx_255_, v_a_258_, v_b_259_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object* v_upperBound_262_, lean_object* v_next_263_, lean_object* v_funIdx_264_, lean_object* v_paramIdx_265_, lean_object* v_inst_266_, lean_object* v_R_267_, lean_object* v_a_268_, lean_object* v_b_269_, lean_object* v_c_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(v_upperBound_262_, v_next_263_, v_funIdx_264_, v_paramIdx_265_, v_inst_266_, v_R_267_, v_a_268_, v_b_269_, v_c_270_);
lean_dec(v_funIdx_264_);
lean_dec(v_next_263_);
lean_dec(v_upperBound_262_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object* v_upperBound_272_, lean_object* v_funIdx_273_, lean_object* v_paramIdx_274_, lean_object* v_inst_275_, lean_object* v_R_276_, lean_object* v_a_277_, lean_object* v_b_278_, lean_object* v_c_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_272_, v_funIdx_273_, v_paramIdx_274_, v_a_277_, v_b_278_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object* v_upperBound_281_, lean_object* v_funIdx_282_, lean_object* v_paramIdx_283_, lean_object* v_inst_284_, lean_object* v_R_285_, lean_object* v_a_286_, lean_object* v_b_287_, lean_object* v_c_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(v_upperBound_281_, v_funIdx_282_, v_paramIdx_283_, v_inst_284_, v_R_285_, v_a_286_, v_b_287_, v_c_288_);
lean_dec(v_funIdx_282_);
lean_dec(v_upperBound_281_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object* v_calleeIdx_290_, lean_object* v_argIdx_291_, lean_object* v_callerIdx_292_, lean_object* v_info_293_){
_start:
{
lean_object* v_graph_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_graph_294_ = lean_ctor_get(v_info_293_, 0);
v___x_295_ = lean_box(0);
v___x_296_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_297_ = lean_array_get_borrowed(v___x_296_, v_graph_294_, v_calleeIdx_290_);
v___x_298_ = lean_array_get_borrowed(v___x_295_, v___x_297_, v_argIdx_291_);
if (lean_obj_tag(v___x_298_) == 0)
{
return v___x_295_;
}
else
{
lean_object* v_val_299_; lean_object* v___x_300_; 
v_val_299_ = lean_ctor_get(v___x_298_, 0);
v___x_300_ = lean_array_get_borrowed(v___x_295_, v_val_299_, v_callerIdx_292_);
lean_inc(v___x_300_);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object* v_calleeIdx_301_, lean_object* v_argIdx_302_, lean_object* v_callerIdx_303_, lean_object* v_info_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_301_, v_argIdx_302_, v_callerIdx_303_, v_info_304_);
lean_dec_ref(v_info_304_);
lean_dec(v_callerIdx_303_);
lean_dec(v_argIdx_302_);
lean_dec(v_calleeIdx_301_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object* v_upperBound_306_, lean_object* v_val_307_, lean_object* v_calleeIdx_308_, lean_object* v_argIdx_309_, lean_object* v_a_310_, lean_object* v_b_311_){
_start:
{
lean_object* v_a_313_; uint8_t v___x_317_; 
v___x_317_ = lean_nat_dec_lt(v_a_310_, v_upperBound_306_);
if (v___x_317_ == 0)
{
lean_dec(v_a_310_);
lean_dec(v_argIdx_309_);
return v_b_311_;
}
else
{
lean_object* v___x_318_; 
v___x_318_ = lean_array_fget_borrowed(v_val_307_, v_a_310_);
if (lean_obj_tag(v___x_318_) == 1)
{
lean_object* v_val_319_; lean_object* v___x_320_; 
v_val_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_val_319_);
lean_inc(v_argIdx_309_);
v___x_320_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_308_, v_argIdx_309_, v_a_310_, v_val_319_, v_b_311_);
v_a_313_ = v___x_320_;
goto v___jp_312_;
}
else
{
v_a_313_ = v_b_311_;
goto v___jp_312_;
}
}
v___jp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_unsigned_to_nat(1u);
v___x_315_ = lean_nat_add(v_a_310_, v___x_314_);
lean_dec(v_a_310_);
v_a_310_ = v___x_315_;
v_b_311_ = v_a_313_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object* v_calleeIdx_321_, lean_object* v_argIdx_322_, lean_object* v_callerIdx_323_, lean_object* v_paramIdx_324_, lean_object* v_info_325_){
_start:
{
lean_object* v_info_327_; lean_object* v_graph_328_; uint8_t v___x_332_; 
v___x_332_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
if (v___x_332_ == 0)
{
lean_dec(v_paramIdx_324_);
lean_dec(v_argIdx_322_);
return v_info_325_;
}
else
{
uint8_t v___x_333_; 
v___x_333_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_323_, v_paramIdx_324_, v_info_325_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; 
lean_dec(v_paramIdx_324_);
v___x_334_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
return v___x_334_;
}
else
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_321_, v_argIdx_322_, v_callerIdx_323_, v_info_325_);
if (lean_obj_tag(v___x_335_) == 1)
{
lean_object* v_val_336_; uint8_t v___x_337_; 
v_val_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_val_336_);
lean_dec_ref_known(v___x_335_, 1);
v___x_337_ = lean_nat_dec_eq(v_paramIdx_324_, v_val_336_);
lean_dec(v_val_336_);
lean_dec(v_paramIdx_324_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; 
v___x_338_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
return v___x_338_;
}
else
{
lean_dec(v_argIdx_322_);
return v_info_325_;
}
}
else
{
lean_object* v_graph_339_; lean_object* v_revDeps_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_383_; 
lean_dec(v___x_335_);
v_graph_339_ = lean_ctor_get(v_info_325_, 0);
v_revDeps_340_ = lean_ctor_get(v_info_325_, 1);
v_isSharedCheck_383_ = !lean_is_exclusive(v_info_325_);
if (v_isSharedCheck_383_ == 0)
{
v___x_342_ = v_info_325_;
v_isShared_343_ = v_isSharedCheck_383_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_revDeps_340_);
lean_inc(v_graph_339_);
lean_dec(v_info_325_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_383_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___y_347_; lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_344_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_345_ = lean_box(0);
v___x_358_ = lean_array_get_size(v_graph_339_);
v___x_359_ = lean_nat_dec_lt(v_calleeIdx_321_, v___x_358_);
if (v___x_359_ == 0)
{
v___y_347_ = v_graph_339_;
goto v___jp_346_;
}
else
{
lean_object* v_v_360_; lean_object* v___x_361_; lean_object* v_xs_x27_362_; lean_object* v___y_364_; lean_object* v___x_366_; uint8_t v___x_367_; 
v_v_360_ = lean_array_fget(v_graph_339_, v_calleeIdx_321_);
v___x_361_ = lean_box(0);
v_xs_x27_362_ = lean_array_fset(v_graph_339_, v_calleeIdx_321_, v___x_361_);
v___x_366_ = lean_array_get_size(v_v_360_);
v___x_367_ = lean_nat_dec_lt(v_argIdx_322_, v___x_366_);
if (v___x_367_ == 0)
{
v___y_364_ = v_v_360_;
goto v___jp_363_;
}
else
{
lean_object* v_v_368_; lean_object* v_xs_x27_369_; lean_object* v___y_371_; 
v_v_368_ = lean_array_fget(v_v_360_, v_argIdx_322_);
v_xs_x27_369_ = lean_array_fset(v_v_360_, v_argIdx_322_, v___x_361_);
if (lean_obj_tag(v_v_368_) == 0)
{
v___y_371_ = v_v_368_;
goto v___jp_370_;
}
else
{
lean_object* v_val_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_382_; 
v_val_373_ = lean_ctor_get(v_v_368_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v_v_368_);
if (v_isSharedCheck_382_ == 0)
{
v___x_375_ = v_v_368_;
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_val_373_);
lean_dec(v_v_368_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
lean_inc(v_paramIdx_324_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v_paramIdx_324_);
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_paramIdx_324_);
v___x_378_ = v_reuseFailAlloc_381_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_array_set(v_val_373_, v_callerIdx_323_, v___x_378_);
v___x_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
v___y_371_ = v___x_380_;
goto v___jp_370_;
}
}
}
v___jp_370_:
{
lean_object* v___x_372_; 
v___x_372_ = lean_array_fset(v_xs_x27_369_, v_argIdx_322_, v___y_371_);
v___y_364_ = v___x_372_;
goto v___jp_363_;
}
}
v___jp_363_:
{
lean_object* v___x_365_; 
v___x_365_ = lean_array_fset(v_xs_x27_362_, v_calleeIdx_321_, v___y_364_);
v___y_347_ = v___x_365_;
goto v___jp_346_;
}
}
v___jp_346_:
{
lean_object* v_info_349_; 
lean_inc_ref(v___y_347_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 0, v___y_347_);
v_info_349_ = v___x_342_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___y_347_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_revDeps_340_);
v_info_349_ = v_reuseFailAlloc_357_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_array_get_borrowed(v___x_344_, v___y_347_, v_callerIdx_323_);
v___x_351_ = lean_array_get_borrowed(v___x_345_, v___x_350_, v_paramIdx_324_);
if (lean_obj_tag(v___x_351_) == 1)
{
lean_object* v_val_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v_graph_356_; 
lean_inc_ref(v___x_351_);
lean_dec_ref(v___y_347_);
v_val_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_val_352_);
lean_dec_ref_known(v___x_351_, 1);
v___x_353_ = lean_array_get_size(v_val_352_);
v___x_354_ = lean_unsigned_to_nat(0u);
lean_inc(v_argIdx_322_);
v___x_355_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v___x_353_, v_val_352_, v_calleeIdx_321_, v_argIdx_322_, v___x_354_, v_info_349_);
lean_dec(v_val_352_);
v_graph_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc_ref(v_graph_356_);
v_info_327_ = v___x_355_;
v_graph_328_ = v_graph_356_;
goto v___jp_326_;
}
else
{
v_info_327_ = v_info_349_;
v_graph_328_ = v___y_347_;
goto v___jp_326_;
}
}
}
}
}
}
}
v___jp_326_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = lean_array_get_size(v_graph_328_);
lean_dec_ref(v_graph_328_);
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v___x_329_, v_calleeIdx_321_, v_argIdx_322_, v_callerIdx_323_, v_paramIdx_324_, v___x_330_, v_info_327_);
lean_dec(v_argIdx_322_);
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object* v_upperBound_384_, lean_object* v_next_385_, lean_object* v_calleeIdx_386_, lean_object* v_argIdx_387_, lean_object* v_callerIdx_388_, lean_object* v_paramIdx_389_, lean_object* v_a_390_, lean_object* v_b_391_){
_start:
{
lean_object* v_a_393_; uint8_t v___x_397_; 
v___x_397_ = lean_nat_dec_lt(v_a_390_, v_upperBound_384_);
if (v___x_397_ == 0)
{
lean_dec(v_a_390_);
lean_dec(v_paramIdx_389_);
return v_b_391_;
}
else
{
lean_object* v_graph_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v_graph_398_ = lean_ctor_get(v_b_391_, 0);
v___x_399_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_400_ = lean_box(0);
v___x_401_ = lean_array_get_borrowed(v___x_399_, v_graph_398_, v_next_385_);
v___x_402_ = lean_array_get_borrowed(v___x_400_, v___x_401_, v_a_390_);
if (lean_obj_tag(v___x_402_) == 1)
{
lean_object* v_val_403_; lean_object* v___x_404_; 
v_val_403_ = lean_ctor_get(v___x_402_, 0);
v___x_404_ = lean_array_get_borrowed(v___x_400_, v_val_403_, v_calleeIdx_386_);
if (lean_obj_tag(v___x_404_) == 1)
{
lean_object* v_val_405_; uint8_t v___x_406_; 
v_val_405_ = lean_ctor_get(v___x_404_, 0);
v___x_406_ = lean_nat_dec_eq(v_val_405_, v_argIdx_387_);
if (v___x_406_ == 0)
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
else
{
lean_object* v___x_407_; 
lean_inc(v_paramIdx_389_);
lean_inc(v_a_390_);
v___x_407_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_next_385_, v_a_390_, v_callerIdx_388_, v_paramIdx_389_, v_b_391_);
v_a_393_ = v___x_407_;
goto v___jp_392_;
}
}
else
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
}
else
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
}
v___jp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(1u);
v___x_395_ = lean_nat_add(v_a_390_, v___x_394_);
lean_dec(v_a_390_);
v_a_390_ = v___x_395_;
v_b_391_ = v_a_393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object* v_upperBound_408_, lean_object* v_calleeIdx_409_, lean_object* v_argIdx_410_, lean_object* v_callerIdx_411_, lean_object* v_paramIdx_412_, lean_object* v_a_413_, lean_object* v_b_414_){
_start:
{
uint8_t v___x_415_; 
v___x_415_ = lean_nat_dec_lt(v_a_413_, v_upperBound_408_);
if (v___x_415_ == 0)
{
lean_dec(v_a_413_);
lean_dec(v_paramIdx_412_);
return v_b_414_;
}
else
{
lean_object* v_graph_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v_graph_416_ = lean_ctor_get(v_b_414_, 0);
v___x_417_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_418_ = lean_array_get_borrowed(v___x_417_, v_graph_416_, v_a_413_);
v___x_419_ = lean_array_get_size(v___x_418_);
v___x_420_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_412_);
v___x_421_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v___x_419_, v_a_413_, v_calleeIdx_409_, v_argIdx_410_, v_callerIdx_411_, v_paramIdx_412_, v___x_420_, v_b_414_);
v___x_422_ = lean_unsigned_to_nat(1u);
v___x_423_ = lean_nat_add(v_a_413_, v___x_422_);
lean_dec(v_a_413_);
v_a_413_ = v___x_423_;
v_b_414_ = v___x_421_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object* v_upperBound_425_, lean_object* v_calleeIdx_426_, lean_object* v_argIdx_427_, lean_object* v_callerIdx_428_, lean_object* v_paramIdx_429_, lean_object* v_a_430_, lean_object* v_b_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_425_, v_calleeIdx_426_, v_argIdx_427_, v_callerIdx_428_, v_paramIdx_429_, v_a_430_, v_b_431_);
lean_dec(v_callerIdx_428_);
lean_dec(v_argIdx_427_);
lean_dec(v_calleeIdx_426_);
lean_dec(v_upperBound_425_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object* v_upperBound_433_, lean_object* v_val_434_, lean_object* v_calleeIdx_435_, lean_object* v_argIdx_436_, lean_object* v_a_437_, lean_object* v_b_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_433_, v_val_434_, v_calleeIdx_435_, v_argIdx_436_, v_a_437_, v_b_438_);
lean_dec(v_calleeIdx_435_);
lean_dec_ref(v_val_434_);
lean_dec(v_upperBound_433_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object* v_upperBound_440_, lean_object* v_next_441_, lean_object* v_calleeIdx_442_, lean_object* v_argIdx_443_, lean_object* v_callerIdx_444_, lean_object* v_paramIdx_445_, lean_object* v_a_446_, lean_object* v_b_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_440_, v_next_441_, v_calleeIdx_442_, v_argIdx_443_, v_callerIdx_444_, v_paramIdx_445_, v_a_446_, v_b_447_);
lean_dec(v_callerIdx_444_);
lean_dec(v_argIdx_443_);
lean_dec(v_calleeIdx_442_);
lean_dec(v_next_441_);
lean_dec(v_upperBound_440_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object* v_calleeIdx_449_, lean_object* v_argIdx_450_, lean_object* v_callerIdx_451_, lean_object* v_paramIdx_452_, lean_object* v_info_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_449_, v_argIdx_450_, v_callerIdx_451_, v_paramIdx_452_, v_info_453_);
lean_dec(v_callerIdx_451_);
lean_dec(v_calleeIdx_449_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object* v_upperBound_455_, lean_object* v_next_456_, lean_object* v_calleeIdx_457_, lean_object* v_argIdx_458_, lean_object* v_callerIdx_459_, lean_object* v_paramIdx_460_, lean_object* v_inst_461_, lean_object* v_R_462_, lean_object* v_a_463_, lean_object* v_b_464_, lean_object* v_c_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_455_, v_next_456_, v_calleeIdx_457_, v_argIdx_458_, v_callerIdx_459_, v_paramIdx_460_, v_a_463_, v_b_464_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object* v_upperBound_467_, lean_object* v_next_468_, lean_object* v_calleeIdx_469_, lean_object* v_argIdx_470_, lean_object* v_callerIdx_471_, lean_object* v_paramIdx_472_, lean_object* v_inst_473_, lean_object* v_R_474_, lean_object* v_a_475_, lean_object* v_b_476_, lean_object* v_c_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(v_upperBound_467_, v_next_468_, v_calleeIdx_469_, v_argIdx_470_, v_callerIdx_471_, v_paramIdx_472_, v_inst_473_, v_R_474_, v_a_475_, v_b_476_, v_c_477_);
lean_dec(v_callerIdx_471_);
lean_dec(v_argIdx_470_);
lean_dec(v_calleeIdx_469_);
lean_dec(v_next_468_);
lean_dec(v_upperBound_467_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object* v_upperBound_479_, lean_object* v_calleeIdx_480_, lean_object* v_argIdx_481_, lean_object* v_callerIdx_482_, lean_object* v_paramIdx_483_, lean_object* v_inst_484_, lean_object* v_R_485_, lean_object* v_a_486_, lean_object* v_b_487_, lean_object* v_c_488_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_479_, v_calleeIdx_480_, v_argIdx_481_, v_callerIdx_482_, v_paramIdx_483_, v_a_486_, v_b_487_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object* v_upperBound_490_, lean_object* v_calleeIdx_491_, lean_object* v_argIdx_492_, lean_object* v_callerIdx_493_, lean_object* v_paramIdx_494_, lean_object* v_inst_495_, lean_object* v_R_496_, lean_object* v_a_497_, lean_object* v_b_498_, lean_object* v_c_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(v_upperBound_490_, v_calleeIdx_491_, v_argIdx_492_, v_callerIdx_493_, v_paramIdx_494_, v_inst_495_, v_R_496_, v_a_497_, v_b_498_, v_c_499_);
lean_dec(v_callerIdx_493_);
lean_dec(v_argIdx_492_);
lean_dec(v_calleeIdx_491_);
lean_dec(v_upperBound_490_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object* v_upperBound_501_, lean_object* v_val_502_, lean_object* v_calleeIdx_503_, lean_object* v_argIdx_504_, lean_object* v_inst_505_, lean_object* v_R_506_, lean_object* v_a_507_, lean_object* v_b_508_, lean_object* v_c_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_501_, v_val_502_, v_calleeIdx_503_, v_argIdx_504_, v_a_507_, v_b_508_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object* v_upperBound_511_, lean_object* v_val_512_, lean_object* v_calleeIdx_513_, lean_object* v_argIdx_514_, lean_object* v_inst_515_, lean_object* v_R_516_, lean_object* v_a_517_, lean_object* v_b_518_, lean_object* v_c_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(v_upperBound_511_, v_val_512_, v_calleeIdx_513_, v_argIdx_514_, v_inst_515_, v_R_516_, v_a_517_, v_b_518_, v_c_519_);
lean_dec(v_calleeIdx_513_);
lean_dec_ref(v_val_512_);
lean_dec(v_upperBound_511_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object* v_a_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = lean_nat_to_int(v_a_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object* v_x_523_, lean_object* v_x_524_, lean_object* v_x_525_){
_start:
{
if (lean_obj_tag(v_x_525_) == 0)
{
lean_dec(v_x_523_);
return v_x_524_;
}
else
{
lean_object* v_head_526_; lean_object* v_tail_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_536_; 
v_head_526_ = lean_ctor_get(v_x_525_, 0);
v_tail_527_ = lean_ctor_get(v_x_525_, 1);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_525_);
if (v_isSharedCheck_536_ == 0)
{
v___x_529_ = v_x_525_;
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_tail_527_);
lean_inc(v_head_526_);
lean_dec(v_x_525_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
lean_inc(v_x_523_);
if (v_isShared_530_ == 0)
{
lean_ctor_set_tag(v___x_529_, 5);
lean_ctor_set(v___x_529_, 1, v_x_523_);
lean_ctor_set(v___x_529_, 0, v_x_524_);
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_x_524_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_x_523_);
v___x_532_ = v_reuseFailAlloc_535_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
lean_object* v___x_533_; 
v___x_533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
lean_ctor_set(v___x_533_, 1, v_head_526_);
v_x_524_ = v___x_533_;
v_x_525_ = v_tail_527_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object* v_x_537_, lean_object* v_x_538_){
_start:
{
if (lean_obj_tag(v_x_537_) == 0)
{
lean_object* v___x_539_; 
lean_dec(v_x_538_);
v___x_539_ = lean_box(0);
return v___x_539_;
}
else
{
lean_object* v_tail_540_; 
v_tail_540_ = lean_ctor_get(v_x_537_, 1);
if (lean_obj_tag(v_tail_540_) == 0)
{
lean_object* v_head_541_; 
lean_dec(v_x_538_);
v_head_541_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_head_541_);
lean_dec_ref_known(v_x_537_, 2);
return v_head_541_;
}
else
{
lean_object* v_head_542_; lean_object* v___x_543_; 
lean_inc(v_tail_540_);
v_head_542_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_head_542_);
lean_dec_ref_known(v_x_537_, 2);
v___x_543_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(v_x_538_, v_head_542_, v_tail_540_);
return v___x_543_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
if (lean_obj_tag(v_a_550_) == 0)
{
lean_object* v___x_552_; 
v___x_552_ = l_List_reverse___redArg(v_a_551_);
return v___x_552_;
}
else
{
lean_object* v_head_553_; lean_object* v_tail_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_578_; 
v_head_553_ = lean_ctor_get(v_a_550_, 0);
v_tail_554_ = lean_ctor_get(v_a_550_, 1);
v_isSharedCheck_578_ = !lean_is_exclusive(v_a_550_);
if (v_isSharedCheck_578_ == 0)
{
v___x_556_ = v_a_550_;
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_tail_554_);
lean_inc(v_head_553_);
lean_dec(v_a_550_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___y_559_; 
if (lean_obj_tag(v_head_553_) == 0)
{
lean_object* v___x_564_; 
v___x_564_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1));
v___y_559_ = v___x_564_;
goto v___jp_558_;
}
else
{
lean_object* v_val_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_577_; 
v_val_565_ = lean_ctor_get(v_head_553_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v_head_553_);
if (v_isSharedCheck_577_ == 0)
{
v___x_567_ = v_head_553_;
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_val_565_);
lean_dec(v_head_553_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_569_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3));
v___x_570_ = lean_unsigned_to_nat(1u);
v___x_571_ = lean_nat_add(v_val_565_, v___x_570_);
lean_dec(v_val_565_);
v___x_572_ = l_Nat_reprFast(v___x_571_);
if (v_isShared_568_ == 0)
{
lean_ctor_set_tag(v___x_567_, 3);
lean_ctor_set(v___x_567_, 0, v___x_572_);
v___x_574_ = v___x_567_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_576_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_569_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___y_559_ = v___x_575_;
goto v___jp_558_;
}
}
}
v___jp_558_:
{
lean_object* v___x_561_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 1, v_a_551_);
lean_ctor_set(v___x_556_, 0, v___y_559_);
v___x_561_ = v___x_556_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___y_559_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_a_551_);
v___x_561_ = v_reuseFailAlloc_563_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
v_a_550_ = v_tail_554_;
v_a_551_ = v___x_561_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4));
v___x_588_ = lean_string_length(v___x_587_);
return v___x_588_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6);
v___x_590_ = lean_nat_to_int(v___x_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object* v_a_595_, lean_object* v_a_596_){
_start:
{
if (lean_obj_tag(v_a_595_) == 0)
{
lean_object* v___x_597_; 
v___x_597_ = l_List_reverse___redArg(v_a_596_);
return v___x_597_;
}
else
{
lean_object* v_head_598_; lean_object* v_tail_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_624_; 
v_head_598_ = lean_ctor_get(v_a_595_, 0);
v_tail_599_ = lean_ctor_get(v_a_595_, 1);
v_isSharedCheck_624_ = !lean_is_exclusive(v_a_595_);
if (v_isSharedCheck_624_ == 0)
{
v___x_601_ = v_a_595_;
v_isShared_602_ = v_isSharedCheck_624_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_tail_599_);
lean_inc(v_head_598_);
lean_dec(v_a_595_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_624_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___y_604_; 
if (lean_obj_tag(v_head_598_) == 0)
{
lean_object* v___x_609_; 
v___x_609_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1));
v___y_604_ = v___x_609_;
goto v___jp_603_;
}
else
{
lean_object* v_val_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; lean_object* v___x_623_; 
v_val_610_ = lean_ctor_get(v_head_598_, 0);
lean_inc(v_val_610_);
lean_dec_ref_known(v_head_598_, 1);
v___x_611_ = lean_array_to_list(v_val_610_);
v___x_612_ = lean_box(0);
v___x_613_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(v___x_611_, v___x_612_);
v___x_614_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3));
v___x_615_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_613_, v___x_614_);
v___x_616_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7);
v___x_617_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8));
v___x_618_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_ctor_set(v___x_618_, 1, v___x_615_);
v___x_619_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_620_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_618_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_616_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = 0;
v___x_623_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_623_, 0, v___x_621_);
lean_ctor_set_uint8(v___x_623_, sizeof(void*)*1, v___x_622_);
v___y_604_ = v___x_623_;
goto v___jp_603_;
}
v___jp_603_:
{
lean_object* v___x_606_; 
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v_a_596_);
lean_ctor_set(v___x_601_, 0, v___y_604_);
v___x_606_ = v___x_601_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___y_604_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_a_596_);
v___x_606_ = v_reuseFailAlloc_608_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
v_a_595_ = v_tail_599_;
v_a_596_ = v___x_606_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
if (lean_obj_tag(v_a_628_) == 0)
{
lean_object* v___x_630_; 
v___x_630_ = l_List_reverse___redArg(v_a_629_);
return v___x_630_;
}
else
{
lean_object* v_head_631_; lean_object* v_tail_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_647_; 
v_head_631_ = lean_ctor_get(v_a_628_, 0);
v_tail_632_ = lean_ctor_get(v_a_628_, 1);
v_isSharedCheck_647_ = !lean_is_exclusive(v_a_628_);
if (v_isSharedCheck_647_ == 0)
{
v___x_634_ = v_a_628_;
v_isShared_635_ = v_isSharedCheck_647_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_tail_632_);
lean_inc(v_head_631_);
lean_dec(v_a_628_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_647_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_636_ = lean_array_to_list(v_head_631_);
v___x_637_ = lean_box(0);
v___x_638_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(v___x_636_, v___x_637_);
v___x_639_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3));
v___x_640_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_638_, v___x_639_);
v___x_641_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1));
v___x_642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
lean_ctor_set(v___x_642_, 1, v___x_640_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v_a_629_);
lean_ctor_set(v___x_634_, 0, v___x_642_);
v___x_644_ = v___x_634_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_a_629_);
v___x_644_ = v_reuseFailAlloc_646_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
v_a_628_ = v_tail_632_;
v_a_629_ = v___x_644_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object* v_info_648_){
_start:
{
lean_object* v_graph_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v_graph_649_ = lean_ctor_get(v_info_648_, 0);
lean_inc_ref(v_graph_649_);
lean_dec_ref(v_info_648_);
v___x_650_ = lean_array_to_list(v_graph_649_);
v___x_651_ = lean_box(0);
v___x_652_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(v___x_650_, v___x_651_);
v___x_653_ = lean_box(1);
v___x_654_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_652_, v___x_653_);
return v___x_654_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object* v_x_657_){
_start:
{
uint8_t v___x_658_; 
v___x_658_ = 0;
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object* v_x_659_){
_start:
{
uint8_t v_res_660_; lean_object* v_r_661_; 
v_res_660_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(v_x_659_);
lean_dec(v_x_659_);
v_r_661_ = lean_box(v_res_660_);
return v_r_661_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object* v_fvarId_662_, lean_object* v_x_663_){
_start:
{
uint8_t v___x_664_; 
v___x_664_ = l_Lean_instBEqFVarId_beq(v_fvarId_662_, v_x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object* v_fvarId_665_, lean_object* v_x_666_){
_start:
{
uint8_t v_res_667_; lean_object* v_r_668_; 
v_res_667_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(v_fvarId_665_, v_x_666_);
lean_dec(v_x_666_);
lean_dec(v_fvarId_665_);
v_r_668_ = lean_box(v_res_667_);
return v_r_668_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = lean_box(0);
v___x_671_ = lean_unsigned_to_nat(16u);
v___x_672_ = lean_mk_array(v___x_671_, v___x_670_);
return v___x_672_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_673_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1);
v___x_674_ = lean_unsigned_to_nat(0u);
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
lean_ctor_set(v___x_675_, 1, v___x_673_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object* v_e_676_, lean_object* v_fvarId_677_, lean_object* v___y_678_){
_start:
{
lean_object* v___f_680_; lean_object* v___f_681_; lean_object* v___x_682_; uint8_t v_fst_684_; lean_object* v_mctx_685_; lean_object* v___y_704_; lean_object* v_mctx_709_; lean_object* v___x_710_; lean_object* v___x_711_; uint8_t v___x_712_; 
v___f_680_ = ((lean_object*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0));
v___f_681_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_681_, 0, v_fvarId_677_);
v___x_682_ = lean_st_ref_get(v___y_678_);
v_mctx_709_ = lean_ctor_get(v___x_682_, 0);
lean_inc_ref_n(v_mctx_709_, 2);
lean_dec(v___x_682_);
v___x_710_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_710_);
lean_ctor_set(v___x_711_, 1, v_mctx_709_);
v___x_712_ = l_Lean_Expr_hasFVar(v_e_676_);
if (v___x_712_ == 0)
{
uint8_t v___x_713_; 
v___x_713_ = l_Lean_Expr_hasMVar(v_e_676_);
if (v___x_713_ == 0)
{
lean_dec_ref_known(v___x_711_, 2);
lean_dec_ref(v___f_681_);
lean_dec_ref(v_e_676_);
v_fst_684_ = v___x_713_;
v_mctx_685_ = v_mctx_709_;
goto v___jp_683_;
}
else
{
lean_object* v___x_714_; 
lean_dec_ref(v_mctx_709_);
v___x_714_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_681_, v___f_680_, v_e_676_, v___x_711_);
v___y_704_ = v___x_714_;
goto v___jp_703_;
}
}
else
{
lean_object* v___x_715_; 
lean_dec_ref(v_mctx_709_);
v___x_715_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_681_, v___f_680_, v_e_676_, v___x_711_);
v___y_704_ = v___x_715_;
goto v___jp_703_;
}
v___jp_683_:
{
lean_object* v___x_686_; lean_object* v_cache_687_; lean_object* v_zetaDeltaFVarIds_688_; lean_object* v_postponed_689_; lean_object* v_diag_690_; lean_object* v_rewriteFires_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_701_; 
v___x_686_ = lean_st_ref_take(v___y_678_);
v_cache_687_ = lean_ctor_get(v___x_686_, 1);
v_zetaDeltaFVarIds_688_ = lean_ctor_get(v___x_686_, 2);
v_postponed_689_ = lean_ctor_get(v___x_686_, 3);
v_diag_690_ = lean_ctor_get(v___x_686_, 4);
v_rewriteFires_691_ = lean_ctor_get(v___x_686_, 5);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_701_ == 0)
{
lean_object* v_unused_702_; 
v_unused_702_ = lean_ctor_get(v___x_686_, 0);
lean_dec(v_unused_702_);
v___x_693_ = v___x_686_;
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_rewriteFires_691_);
lean_inc(v_diag_690_);
lean_inc(v_postponed_689_);
lean_inc(v_zetaDeltaFVarIds_688_);
lean_inc(v_cache_687_);
lean_dec(v___x_686_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_696_; 
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 0, v_mctx_685_);
v___x_696_ = v___x_693_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_mctx_685_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_cache_687_);
lean_ctor_set(v_reuseFailAlloc_700_, 2, v_zetaDeltaFVarIds_688_);
lean_ctor_set(v_reuseFailAlloc_700_, 3, v_postponed_689_);
lean_ctor_set(v_reuseFailAlloc_700_, 4, v_diag_690_);
lean_ctor_set(v_reuseFailAlloc_700_, 5, v_rewriteFires_691_);
v___x_696_ = v_reuseFailAlloc_700_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_697_ = lean_st_ref_put(v___y_678_, v___x_696_);
v___x_698_ = lean_box(v_fst_684_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
}
v___jp_703_:
{
lean_object* v_snd_705_; lean_object* v_fst_706_; lean_object* v_mctx_707_; uint8_t v___x_708_; 
v_snd_705_ = lean_ctor_get(v___y_704_, 1);
lean_inc(v_snd_705_);
v_fst_706_ = lean_ctor_get(v___y_704_, 0);
lean_inc(v_fst_706_);
lean_dec_ref(v___y_704_);
v_mctx_707_ = lean_ctor_get(v_snd_705_, 1);
lean_inc_ref(v_mctx_707_);
lean_dec(v_snd_705_);
v___x_708_ = lean_unbox(v_fst_706_);
lean_dec(v_fst_706_);
v_fst_684_ = v___x_708_;
v_mctx_685_ = v_mctx_707_;
goto v___jp_683_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object* v_e_716_, lean_object* v_fvarId_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_716_, v_fvarId_717_, v___y_718_);
lean_dec(v___y_718_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object* v_e_721_, lean_object* v_fvarId_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_721_, v_fvarId_722_, v___y_724_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object* v_e_729_, lean_object* v_fvarId_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(v_e_729_, v_fvarId_730_, v___y_731_, v___y_732_, v___y_733_, v___y_734_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object* v_k_737_, lean_object* v_b_738_, lean_object* v_c_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v___x_745_; 
lean_inc(v___y_743_);
lean_inc_ref(v___y_742_);
lean_inc(v___y_741_);
lean_inc_ref(v___y_740_);
v___x_745_ = lean_apply_7(v_k_737_, v_b_738_, v_c_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, lean_box(0));
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object* v_k_746_, lean_object* v_b_747_, lean_object* v_c_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(v_k_746_, v_b_747_, v_c_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object* v_e_755_, lean_object* v_k_756_, uint8_t v_cleanupAnnotations_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
lean_object* v___f_763_; uint8_t v___x_764_; uint8_t v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___f_763_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_763_, 0, v_k_756_);
v___x_764_ = 1;
v___x_765_ = 0;
v___x_766_ = lean_box(0);
v___x_767_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_755_, v___x_764_, v___x_765_, v___x_764_, v___x_765_, v___x_766_, v___f_763_, v_cleanupAnnotations_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_767_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_767_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
else
{
lean_object* v_a_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_783_; 
v_a_776_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_783_ == 0)
{
v___x_778_ = v___x_767_;
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_a_776_);
lean_dec(v___x_767_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_781_; 
if (v_isShared_779_ == 0)
{
v___x_781_ = v___x_778_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_776_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object* v_e_784_, lean_object* v_k_785_, lean_object* v_cleanupAnnotations_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_792_; lean_object* v_res_793_; 
v_cleanupAnnotations_boxed_792_ = lean_unbox(v_cleanupAnnotations_786_);
v_res_793_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_784_, v_k_785_, v_cleanupAnnotations_boxed_792_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object* v_00_u03b1_794_, lean_object* v_e_795_, lean_object* v_k_796_, uint8_t v_cleanupAnnotations_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_){
_start:
{
lean_object* v___x_803_; 
v___x_803_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_795_, v_k_796_, v_cleanupAnnotations_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object* v_00_u03b1_804_, lean_object* v_e_805_, lean_object* v_k_806_, lean_object* v_cleanupAnnotations_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_813_; lean_object* v_res_814_; 
v_cleanupAnnotations_boxed_813_ = lean_unbox(v_cleanupAnnotations_807_);
v_res_814_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(v_00_u03b1_804_, v_e_805_, v_k_806_, v_cleanupAnnotations_boxed_813_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object* v_upperBound_815_, lean_object* v_xs_816_, lean_object* v_next_817_, lean_object* v_a_818_, lean_object* v_b_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
lean_object* v_a_826_; uint8_t v___x_830_; 
v___x_830_ = lean_nat_dec_lt(v_a_818_, v_upperBound_815_);
if (v___x_830_ == 0)
{
lean_object* v___x_831_; 
lean_dec(v_a_818_);
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v_b_819_);
return v___x_831_;
}
else
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = lean_array_fget_borrowed(v_xs_816_, v_a_818_);
lean_inc(v___y_823_);
lean_inc_ref(v___y_822_);
lean_inc(v___y_821_);
lean_inc_ref(v___y_820_);
lean_inc(v___x_832_);
v___x_833_ = lean_infer_type(v___x_832_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v_a_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v_a_834_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_a_834_);
lean_dec_ref_known(v___x_833_, 1);
v___x_835_ = lean_array_fget_borrowed(v_xs_816_, v_next_817_);
v___x_836_ = l_Lean_Expr_fvarId_x21(v___x_835_);
v___x_837_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_a_834_, v___x_836_, v___y_821_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; uint8_t v___x_839_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_838_);
lean_dec_ref_known(v___x_837_, 1);
v___x_839_ = lean_unbox(v_a_838_);
lean_dec(v_a_838_);
if (v___x_839_ == 0)
{
v_a_826_ = v_b_819_;
goto v___jp_825_;
}
else
{
lean_object* v___x_840_; 
lean_inc(v_a_818_);
v___x_840_ = lean_array_push(v_b_819_, v_a_818_);
v_a_826_ = v___x_840_;
goto v___jp_825_;
}
}
else
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
lean_dec_ref(v_b_819_);
lean_dec(v_a_818_);
v_a_841_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_837_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_837_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
else
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_856_; 
lean_dec_ref(v_b_819_);
lean_dec(v_a_818_);
v_a_849_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_856_ == 0)
{
v___x_851_ = v___x_833_;
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_833_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_854_; 
if (v_isShared_852_ == 0)
{
v___x_854_ = v___x_851_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_849_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
}
v___jp_825_:
{
lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_827_ = lean_unsigned_to_nat(1u);
v___x_828_ = lean_nat_add(v_a_818_, v___x_827_);
lean_dec(v_a_818_);
v_a_818_ = v___x_828_;
v_b_819_ = v_a_826_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object* v_upperBound_857_, lean_object* v_xs_858_, lean_object* v_next_859_, lean_object* v_a_860_, lean_object* v_b_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_857_, v_xs_858_, v_next_859_, v_a_860_, v_b_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_);
lean_dec(v___y_865_);
lean_dec_ref(v___y_864_);
lean_dec(v___y_863_);
lean_dec_ref(v___y_862_);
lean_dec(v_next_859_);
lean_dec_ref(v_xs_858_);
lean_dec(v_upperBound_857_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object* v_upperBound_870_, lean_object* v___x_871_, lean_object* v_xs_872_, lean_object* v_a_873_, lean_object* v_b_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
uint8_t v___x_880_; 
v___x_880_ = lean_nat_dec_lt(v_a_873_, v_upperBound_870_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; 
lean_dec(v_a_873_);
v___x_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_881_, 0, v_b_874_);
return v___x_881_;
}
else
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_882_ = lean_unsigned_to_nat(1u);
v___x_883_ = lean_nat_add(v_a_873_, v___x_882_);
v___x_884_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0));
lean_inc(v___x_883_);
v___x_885_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v___x_871_, v_xs_872_, v_a_873_, v___x_883_, v___x_884_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
lean_dec(v_a_873_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; lean_object* v___x_887_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = lean_array_push(v_b_874_, v_a_886_);
v_a_873_ = v___x_883_;
v_b_874_ = v___x_887_;
goto _start;
}
else
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_dec(v___x_883_);
lean_dec_ref(v_b_874_);
v_a_889_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_885_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_885_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_889_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object* v_upperBound_897_, lean_object* v___x_898_, lean_object* v_xs_899_, lean_object* v_a_900_, lean_object* v_b_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_897_, v___x_898_, v_xs_899_, v_a_900_, v_b_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
lean_dec_ref(v_xs_899_);
lean_dec(v___x_898_);
lean_dec(v_upperBound_897_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object* v_xs_910_, lean_object* v_x_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v_revDeps_919_; lean_object* v___x_920_; 
v___x_917_ = lean_array_get_size(v_xs_910_);
v___x_918_ = lean_unsigned_to_nat(0u);
v_revDeps_919_ = ((lean_object*)(l_Lean_Elab_getParamRevDeps___lam__0___closed__0));
v___x_920_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v___x_917_, v___x_917_, v_xs_910_, v___x_918_, v_revDeps_919_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object* v_xs_921_, lean_object* v_x_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l_Lean_Elab_getParamRevDeps___lam__0(v_xs_921_, v_x_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
lean_dec_ref(v_x_922_);
lean_dec_ref(v_xs_921_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object* v_value_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_){
_start:
{
lean_object* v___f_936_; uint8_t v___x_937_; lean_object* v___x_938_; 
v___f_936_ = ((lean_object*)(l_Lean_Elab_getParamRevDeps___closed__0));
v___x_937_ = 1;
v___x_938_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_930_, v___f_936_, v___x_937_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object* v_value_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_Lean_Elab_getParamRevDeps(v_value_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_);
lean_dec(v_a_943_);
lean_dec_ref(v_a_942_);
lean_dec(v_a_941_);
lean_dec_ref(v_a_940_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object* v_upperBound_946_, lean_object* v_xs_947_, lean_object* v_next_948_, lean_object* v_inst_949_, lean_object* v_R_950_, lean_object* v_a_951_, lean_object* v_b_952_, lean_object* v_c_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_946_, v_xs_947_, v_next_948_, v_a_951_, v_b_952_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object* v_upperBound_960_, lean_object* v_xs_961_, lean_object* v_next_962_, lean_object* v_inst_963_, lean_object* v_R_964_, lean_object* v_a_965_, lean_object* v_b_966_, lean_object* v_c_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(v_upperBound_960_, v_xs_961_, v_next_962_, v_inst_963_, v_R_964_, v_a_965_, v_b_966_, v_c_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
lean_dec(v_next_962_);
lean_dec_ref(v_xs_961_);
lean_dec(v_upperBound_960_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object* v_upperBound_974_, lean_object* v___x_975_, lean_object* v_xs_976_, lean_object* v_inst_977_, lean_object* v_R_978_, lean_object* v_a_979_, lean_object* v_b_980_, lean_object* v_c_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_974_, v___x_975_, v_xs_976_, v_a_979_, v_b_980_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object* v_upperBound_988_, lean_object* v___x_989_, lean_object* v_xs_990_, lean_object* v_inst_991_, lean_object* v_R_992_, lean_object* v_a_993_, lean_object* v_b_994_, lean_object* v_c_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(v_upperBound_988_, v___x_989_, v_xs_990_, v_inst_991_, v_R_992_, v_a_993_, v_b_994_, v_c_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec_ref(v_xs_990_);
lean_dec(v___x_989_);
lean_dec(v_upperBound_988_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object* v_msg_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v___f_1009_; lean_object* v___x_27459__overap_1010_; lean_object* v___x_1011_; 
v___f_1009_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_27459__overap_1010_ = lean_panic_fn_borrowed(v___f_1009_, v_msg_1003_);
lean_inc(v___y_1007_);
lean_inc_ref(v___y_1006_);
lean_inc(v___y_1005_);
lean_inc_ref(v___y_1004_);
v___x_1011_ = lean_apply_5(v___x_27459__overap_1010_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, lean_box(0));
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object* v_msg_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v_msg_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t v_sz_1019_, size_t v_i_1020_, lean_object* v_bs_1021_){
_start:
{
uint8_t v___x_1022_; 
v___x_1022_ = lean_usize_dec_lt(v_i_1020_, v_sz_1019_);
if (v___x_1022_ == 0)
{
return v_bs_1021_;
}
else
{
lean_object* v_v_1023_; lean_object* v___x_1024_; lean_object* v_bs_x27_1025_; lean_object* v___x_1026_; size_t v___x_1027_; size_t v___x_1028_; lean_object* v___x_1029_; 
v_v_1023_ = lean_array_uget(v_bs_1021_, v_i_1020_);
v___x_1024_ = lean_unsigned_to_nat(0u);
v_bs_x27_1025_ = lean_array_uset(v_bs_1021_, v_i_1020_, v___x_1024_);
v___x_1026_ = lean_array_get_size(v_v_1023_);
lean_dec(v_v_1023_);
v___x_1027_ = ((size_t)1ULL);
v___x_1028_ = lean_usize_add(v_i_1020_, v___x_1027_);
v___x_1029_ = lean_array_uset(v_bs_x27_1025_, v_i_1020_, v___x_1026_);
v_i_1020_ = v___x_1028_;
v_bs_1021_ = v___x_1029_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object* v_sz_1031_, lean_object* v_i_1032_, lean_object* v_bs_1033_){
_start:
{
size_t v_sz_boxed_1034_; size_t v_i_boxed_1035_; lean_object* v_res_1036_; 
v_sz_boxed_1034_ = lean_unbox_usize(v_sz_1031_);
lean_dec(v_sz_1031_);
v_i_boxed_1035_ = lean_unbox_usize(v_i_1032_);
lean_dec(v_i_1032_);
v_res_1036_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_boxed_1034_, v_i_boxed_1035_, v_bs_1033_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t v_sz_1037_, size_t v_i_1038_, lean_object* v_bs_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
uint8_t v___x_1045_; 
v___x_1045_ = lean_usize_dec_lt(v_i_1038_, v_sz_1037_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; 
v___x_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1046_, 0, v_bs_1039_);
return v___x_1046_;
}
else
{
lean_object* v_v_1047_; lean_object* v_value_1048_; lean_object* v___x_1049_; lean_object* v_bs_x27_1050_; lean_object* v___x_1051_; 
v_v_1047_ = lean_array_uget_borrowed(v_bs_1039_, v_i_1038_);
v_value_1048_ = lean_ctor_get(v_v_1047_, 7);
lean_inc_ref(v_value_1048_);
v___x_1049_ = lean_unsigned_to_nat(0u);
v_bs_x27_1050_ = lean_array_uset(v_bs_1039_, v_i_1038_, v___x_1049_);
v___x_1051_ = l_Lean_Elab_getParamRevDeps(v_value_1048_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; size_t v___x_1053_; size_t v___x_1054_; lean_object* v___x_1055_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
lean_inc(v_a_1052_);
lean_dec_ref_known(v___x_1051_, 1);
v___x_1053_ = ((size_t)1ULL);
v___x_1054_ = lean_usize_add(v_i_1038_, v___x_1053_);
v___x_1055_ = lean_array_uset(v_bs_x27_1050_, v_i_1038_, v_a_1052_);
v_i_1038_ = v___x_1054_;
v_bs_1039_ = v___x_1055_;
goto _start;
}
else
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1064_; 
lean_dec_ref(v_bs_x27_1050_);
v_a_1057_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1059_ = v___x_1051_;
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1051_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
if (v_isShared_1060_ == 0)
{
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_a_1057_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object* v_sz_1065_, lean_object* v_i_1066_, lean_object* v_bs_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
size_t v_sz_boxed_1073_; size_t v_i_boxed_1074_; lean_object* v_res_1075_; 
v_sz_boxed_1073_ = lean_unbox_usize(v_sz_1065_);
lean_dec(v_sz_1065_);
v_i_boxed_1074_ = lean_unbox_usize(v_i_1066_);
lean_dec(v_i_1066_);
v_res_1075_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_boxed_1073_, v_i_boxed_1074_, v_bs_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
lean_dec(v___y_1069_);
lean_dec_ref(v___y_1068_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object* v_msgData_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___x_1082_; lean_object* v_env_1083_; uint8_t v___x_1084_; lean_object* v_env_1085_; lean_object* v___x_1086_; lean_object* v_toCold_1087_; lean_object* v_mctx_1088_; lean_object* v_lctx_1089_; lean_object* v_options_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1082_ = lean_st_ref_get(v___y_1080_);
v_env_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc_ref(v_env_1083_);
lean_dec(v___x_1082_);
v___x_1084_ = 0;
v_env_1085_ = l_Lean_Environment_setRecordingDeps(v_env_1083_, v___x_1084_);
v___x_1086_ = lean_st_ref_get(v___y_1078_);
v_toCold_1087_ = lean_ctor_get(v___y_1079_, 0);
v_mctx_1088_ = lean_ctor_get(v___x_1086_, 0);
lean_inc_ref(v_mctx_1088_);
lean_dec(v___x_1086_);
v_lctx_1089_ = lean_ctor_get(v___y_1077_, 2);
v_options_1090_ = lean_ctor_get(v_toCold_1087_, 2);
lean_inc_ref(v_options_1090_);
lean_inc_ref(v_lctx_1089_);
v___x_1091_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1091_, 0, v_env_1085_);
lean_ctor_set(v___x_1091_, 1, v_mctx_1088_);
lean_ctor_set(v___x_1091_, 2, v_lctx_1089_);
lean_ctor_set(v___x_1091_, 3, v_options_1090_);
v___x_1092_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
lean_ctor_set(v___x_1092_, 1, v_msgData_1076_);
v___x_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object* v_msgData_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msgData_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
return v_res_1100_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1101_; double v___x_1102_; 
v___x_1101_ = lean_unsigned_to_nat(0u);
v___x_1102_ = lean_float_of_nat(v___x_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object* v_cls_1106_, lean_object* v_msg_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v_ref_1113_; lean_object* v___x_1114_; lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1160_; 
v_ref_1113_ = lean_ctor_get(v___y_1110_, 2);
v___x_1114_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msg_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1117_ = v___x_1114_;
v_isShared_1118_ = v_isSharedCheck_1160_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1114_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1160_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1119_; lean_object* v_traceState_1120_; lean_object* v_env_1121_; lean_object* v_nextMacroScope_1122_; lean_object* v_ngen_1123_; lean_object* v_auxDeclNGen_1124_; lean_object* v_cache_1125_; lean_object* v_recordedDeps_1126_; lean_object* v_messages_1127_; lean_object* v_infoState_1128_; lean_object* v_snapshotTasks_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1159_; 
v___x_1119_ = lean_st_ref_take(v___y_1111_);
v_traceState_1120_ = lean_ctor_get(v___x_1119_, 4);
v_env_1121_ = lean_ctor_get(v___x_1119_, 0);
v_nextMacroScope_1122_ = lean_ctor_get(v___x_1119_, 1);
v_ngen_1123_ = lean_ctor_get(v___x_1119_, 2);
v_auxDeclNGen_1124_ = lean_ctor_get(v___x_1119_, 3);
v_cache_1125_ = lean_ctor_get(v___x_1119_, 5);
v_recordedDeps_1126_ = lean_ctor_get(v___x_1119_, 6);
v_messages_1127_ = lean_ctor_get(v___x_1119_, 7);
v_infoState_1128_ = lean_ctor_get(v___x_1119_, 8);
v_snapshotTasks_1129_ = lean_ctor_get(v___x_1119_, 9);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1131_ = v___x_1119_;
v_isShared_1132_ = v_isSharedCheck_1159_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_snapshotTasks_1129_);
lean_inc(v_infoState_1128_);
lean_inc(v_messages_1127_);
lean_inc(v_recordedDeps_1126_);
lean_inc(v_cache_1125_);
lean_inc(v_traceState_1120_);
lean_inc(v_auxDeclNGen_1124_);
lean_inc(v_ngen_1123_);
lean_inc(v_nextMacroScope_1122_);
lean_inc(v_env_1121_);
lean_dec(v___x_1119_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1159_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
uint64_t v_tid_1133_; lean_object* v_traces_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1158_; 
v_tid_1133_ = lean_ctor_get_uint64(v_traceState_1120_, sizeof(void*)*1);
v_traces_1134_ = lean_ctor_get(v_traceState_1120_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v_traceState_1120_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1136_ = v_traceState_1120_;
v_isShared_1137_ = v_isSharedCheck_1158_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_traces_1134_);
lean_dec(v_traceState_1120_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1158_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; double v___x_1140_; uint8_t v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1149_; 
v___x_1138_ = lean_box(0);
v___x_1139_ = lean_box(0);
v___x_1140_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0);
v___x_1141_ = 0;
v___x_1142_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1));
v___x_1143_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1143_, 0, v_cls_1106_);
lean_ctor_set(v___x_1143_, 1, v___x_1139_);
lean_ctor_set(v___x_1143_, 2, v___x_1142_);
lean_ctor_set_float(v___x_1143_, sizeof(void*)*3, v___x_1140_);
lean_ctor_set_float(v___x_1143_, sizeof(void*)*3 + 8, v___x_1140_);
lean_ctor_set_uint8(v___x_1143_, sizeof(void*)*3 + 16, v___x_1141_);
v___x_1144_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2));
v___x_1145_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1143_);
lean_ctor_set(v___x_1145_, 1, v_a_1115_);
lean_ctor_set(v___x_1145_, 2, v___x_1144_);
lean_inc(v_ref_1113_);
v___x_1146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1146_, 0, v_ref_1113_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___x_1147_ = l_Lean_PersistentArray_push___redArg(v_traces_1134_, v___x_1146_);
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 0, v___x_1147_);
v___x_1149_ = v___x_1136_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v___x_1147_);
lean_ctor_set_uint64(v_reuseFailAlloc_1157_, sizeof(void*)*1, v_tid_1133_);
v___x_1149_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
lean_object* v___x_1151_; 
if (v_isShared_1132_ == 0)
{
lean_ctor_set(v___x_1131_, 4, v___x_1149_);
v___x_1151_ = v___x_1131_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_env_1121_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v_nextMacroScope_1122_);
lean_ctor_set(v_reuseFailAlloc_1156_, 2, v_ngen_1123_);
lean_ctor_set(v_reuseFailAlloc_1156_, 3, v_auxDeclNGen_1124_);
lean_ctor_set(v_reuseFailAlloc_1156_, 4, v___x_1149_);
lean_ctor_set(v_reuseFailAlloc_1156_, 5, v_cache_1125_);
lean_ctor_set(v_reuseFailAlloc_1156_, 6, v_recordedDeps_1126_);
lean_ctor_set(v_reuseFailAlloc_1156_, 7, v_messages_1127_);
lean_ctor_set(v_reuseFailAlloc_1156_, 8, v_infoState_1128_);
lean_ctor_set(v_reuseFailAlloc_1156_, 9, v_snapshotTasks_1129_);
v___x_1151_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
lean_object* v___x_1152_; lean_object* v___x_1154_; 
v___x_1152_ = lean_st_ref_put(v___y_1111_, v___x_1151_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 0, v___x_1138_);
v___x_1154_ = v___x_1117_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1138_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object* v_cls_1161_, lean_object* v_msg_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v_cls_1161_, v_msg_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_object* v_00_u03b1_1169_, lean_object* v_x_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1176_ = lean_apply_1(v_x_1170_, lean_box(0));
v___x_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0___boxed(lean_object* v_00_u03b1_1178_, lean_object* v_x_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(v_00_u03b1_1178_, v_x_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(lean_object* v_x_1186_, lean_object* v_x_1187_){
_start:
{
if (lean_obj_tag(v_x_1187_) == 0)
{
return v_x_1186_;
}
else
{
lean_object* v_key_1188_; lean_object* v_value_1189_; lean_object* v_tail_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1213_; 
v_key_1188_ = lean_ctor_get(v_x_1187_, 0);
v_value_1189_ = lean_ctor_get(v_x_1187_, 1);
v_tail_1190_ = lean_ctor_get(v_x_1187_, 2);
v_isSharedCheck_1213_ = !lean_is_exclusive(v_x_1187_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1192_ = v_x_1187_;
v_isShared_1193_ = v_isSharedCheck_1213_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_tail_1190_);
lean_inc(v_value_1189_);
lean_inc(v_key_1188_);
lean_dec(v_x_1187_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1213_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1194_; uint64_t v___x_1195_; uint64_t v___x_1196_; uint64_t v___x_1197_; uint64_t v_fold_1198_; uint64_t v___x_1199_; uint64_t v___x_1200_; uint64_t v___x_1201_; size_t v___x_1202_; size_t v___x_1203_; size_t v___x_1204_; size_t v___x_1205_; size_t v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1194_ = lean_array_get_size(v_x_1186_);
v___x_1195_ = l_Lean_ExprStructEq_hash(v_key_1188_);
v___x_1196_ = 32ULL;
v___x_1197_ = lean_uint64_shift_right(v___x_1195_, v___x_1196_);
v_fold_1198_ = lean_uint64_xor(v___x_1195_, v___x_1197_);
v___x_1199_ = 16ULL;
v___x_1200_ = lean_uint64_shift_right(v_fold_1198_, v___x_1199_);
v___x_1201_ = lean_uint64_xor(v_fold_1198_, v___x_1200_);
v___x_1202_ = lean_uint64_to_usize(v___x_1201_);
v___x_1203_ = lean_usize_of_nat(v___x_1194_);
v___x_1204_ = ((size_t)1ULL);
v___x_1205_ = lean_usize_sub(v___x_1203_, v___x_1204_);
v___x_1206_ = lean_usize_land(v___x_1202_, v___x_1205_);
v___x_1207_ = lean_array_uget_borrowed(v_x_1186_, v___x_1206_);
lean_inc(v___x_1207_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 2, v___x_1207_);
v___x_1209_ = v___x_1192_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_key_1188_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v_value_1189_);
lean_ctor_set(v_reuseFailAlloc_1212_, 2, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_array_uset(v_x_1186_, v___x_1206_, v___x_1209_);
v_x_1186_ = v___x_1210_;
v_x_1187_ = v_tail_1190_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(lean_object* v_i_1214_, lean_object* v_source_1215_, lean_object* v_target_1216_){
_start:
{
lean_object* v___x_1217_; uint8_t v___x_1218_; 
v___x_1217_ = lean_array_get_size(v_source_1215_);
v___x_1218_ = lean_nat_dec_lt(v_i_1214_, v___x_1217_);
if (v___x_1218_ == 0)
{
lean_dec_ref(v_source_1215_);
lean_dec(v_i_1214_);
return v_target_1216_;
}
else
{
lean_object* v_es_1219_; lean_object* v___x_1220_; lean_object* v_source_1221_; lean_object* v_target_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v_es_1219_ = lean_array_fget(v_source_1215_, v_i_1214_);
v___x_1220_ = lean_box(0);
v_source_1221_ = lean_array_fset(v_source_1215_, v_i_1214_, v___x_1220_);
v_target_1222_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_target_1216_, v_es_1219_);
v___x_1223_ = lean_unsigned_to_nat(1u);
v___x_1224_ = lean_nat_add(v_i_1214_, v___x_1223_);
lean_dec(v_i_1214_);
v_i_1214_ = v___x_1224_;
v_source_1215_ = v_source_1221_;
v_target_1216_ = v_target_1222_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(lean_object* v_data_1226_){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v_nbuckets_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1227_ = lean_array_get_size(v_data_1226_);
v___x_1228_ = lean_unsigned_to_nat(2u);
v_nbuckets_1229_ = lean_nat_mul(v___x_1227_, v___x_1228_);
v___x_1230_ = lean_unsigned_to_nat(0u);
v___x_1231_ = lean_box(0);
v___x_1232_ = lean_mk_array(v_nbuckets_1229_, v___x_1231_);
v___x_1233_ = lean_array_propagate_mark(v_data_1226_, v___x_1232_);
v___x_1234_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v___x_1230_, v_data_1226_, v___x_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(lean_object* v_a_1235_, lean_object* v_b_1236_, lean_object* v_x_1237_){
_start:
{
if (lean_obj_tag(v_x_1237_) == 0)
{
lean_dec(v_b_1236_);
lean_dec_ref(v_a_1235_);
return v_x_1237_;
}
else
{
lean_object* v_key_1238_; lean_object* v_value_1239_; lean_object* v_tail_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1252_; 
v_key_1238_ = lean_ctor_get(v_x_1237_, 0);
v_value_1239_ = lean_ctor_get(v_x_1237_, 1);
v_tail_1240_ = lean_ctor_get(v_x_1237_, 2);
v_isSharedCheck_1252_ = !lean_is_exclusive(v_x_1237_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1242_ = v_x_1237_;
v_isShared_1243_ = v_isSharedCheck_1252_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_tail_1240_);
lean_inc(v_value_1239_);
lean_inc(v_key_1238_);
lean_dec(v_x_1237_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1252_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
uint8_t v___x_1244_; 
v___x_1244_ = l_Lean_ExprStructEq_beq(v_key_1238_, v_a_1235_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; lean_object* v___x_1247_; 
v___x_1245_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1235_, v_b_1236_, v_tail_1240_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 2, v___x_1245_);
v___x_1247_ = v___x_1242_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_key_1238_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v_value_1239_);
lean_ctor_set(v_reuseFailAlloc_1248_, 2, v___x_1245_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
else
{
lean_object* v___x_1250_; 
lean_dec(v_value_1239_);
lean_dec(v_key_1238_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 1, v_b_1236_);
lean_ctor_set(v___x_1242_, 0, v_a_1235_);
v___x_1250_ = v___x_1242_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1235_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v_b_1236_);
lean_ctor_set(v_reuseFailAlloc_1251_, 2, v_tail_1240_);
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
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(lean_object* v_a_1253_, lean_object* v_x_1254_){
_start:
{
if (lean_obj_tag(v_x_1254_) == 0)
{
uint8_t v___x_1255_; 
v___x_1255_ = 0;
return v___x_1255_;
}
else
{
lean_object* v_key_1256_; lean_object* v_tail_1257_; uint8_t v___x_1258_; 
v_key_1256_ = lean_ctor_get(v_x_1254_, 0);
v_tail_1257_ = lean_ctor_get(v_x_1254_, 2);
v___x_1258_ = l_Lean_ExprStructEq_beq(v_key_1256_, v_a_1253_);
if (v___x_1258_ == 0)
{
v_x_1254_ = v_tail_1257_;
goto _start;
}
else
{
return v___x_1258_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg___boxed(lean_object* v_a_1260_, lean_object* v_x_1261_){
_start:
{
uint8_t v_res_1262_; lean_object* v_r_1263_; 
v_res_1262_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1260_, v_x_1261_);
lean_dec(v_x_1261_);
lean_dec_ref(v_a_1260_);
v_r_1263_ = lean_box(v_res_1262_);
return v_r_1263_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(lean_object* v_m_1264_, lean_object* v_a_1265_, lean_object* v_b_1266_){
_start:
{
lean_object* v_size_1267_; lean_object* v_buckets_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1311_; 
v_size_1267_ = lean_ctor_get(v_m_1264_, 0);
v_buckets_1268_ = lean_ctor_get(v_m_1264_, 1);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_m_1264_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1270_ = v_m_1264_;
v_isShared_1271_ = v_isSharedCheck_1311_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_buckets_1268_);
lean_inc(v_size_1267_);
lean_dec(v_m_1264_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1311_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1272_; uint64_t v___x_1273_; uint64_t v___x_1274_; uint64_t v___x_1275_; uint64_t v_fold_1276_; uint64_t v___x_1277_; uint64_t v___x_1278_; uint64_t v___x_1279_; size_t v___x_1280_; size_t v___x_1281_; size_t v___x_1282_; size_t v___x_1283_; size_t v___x_1284_; lean_object* v_bkt_1285_; uint8_t v___x_1286_; 
v___x_1272_ = lean_array_get_size(v_buckets_1268_);
v___x_1273_ = l_Lean_ExprStructEq_hash(v_a_1265_);
v___x_1274_ = 32ULL;
v___x_1275_ = lean_uint64_shift_right(v___x_1273_, v___x_1274_);
v_fold_1276_ = lean_uint64_xor(v___x_1273_, v___x_1275_);
v___x_1277_ = 16ULL;
v___x_1278_ = lean_uint64_shift_right(v_fold_1276_, v___x_1277_);
v___x_1279_ = lean_uint64_xor(v_fold_1276_, v___x_1278_);
v___x_1280_ = lean_uint64_to_usize(v___x_1279_);
v___x_1281_ = lean_usize_of_nat(v___x_1272_);
v___x_1282_ = ((size_t)1ULL);
v___x_1283_ = lean_usize_sub(v___x_1281_, v___x_1282_);
v___x_1284_ = lean_usize_land(v___x_1280_, v___x_1283_);
v_bkt_1285_ = lean_array_uget_borrowed(v_buckets_1268_, v___x_1284_);
v___x_1286_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1265_, v_bkt_1285_);
if (v___x_1286_ == 0)
{
lean_object* v___x_1287_; lean_object* v_size_x27_1288_; lean_object* v___x_1289_; lean_object* v_buckets_x27_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; uint8_t v___x_1296_; 
v___x_1287_ = lean_unsigned_to_nat(1u);
v_size_x27_1288_ = lean_nat_add(v_size_1267_, v___x_1287_);
lean_dec(v_size_1267_);
lean_inc(v_bkt_1285_);
v___x_1289_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1289_, 0, v_a_1265_);
lean_ctor_set(v___x_1289_, 1, v_b_1266_);
lean_ctor_set(v___x_1289_, 2, v_bkt_1285_);
v_buckets_x27_1290_ = lean_array_uset(v_buckets_1268_, v___x_1284_, v___x_1289_);
v___x_1291_ = lean_unsigned_to_nat(4u);
v___x_1292_ = lean_nat_mul(v_size_x27_1288_, v___x_1291_);
v___x_1293_ = lean_unsigned_to_nat(3u);
v___x_1294_ = lean_nat_div(v___x_1292_, v___x_1293_);
lean_dec(v___x_1292_);
v___x_1295_ = lean_array_get_size(v_buckets_x27_1290_);
v___x_1296_ = lean_nat_dec_le(v___x_1294_, v___x_1295_);
lean_dec(v___x_1294_);
if (v___x_1296_ == 0)
{
lean_object* v_val_1297_; lean_object* v___x_1299_; 
v_val_1297_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_buckets_x27_1290_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 1, v_val_1297_);
lean_ctor_set(v___x_1270_, 0, v_size_x27_1288_);
v___x_1299_ = v___x_1270_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_size_x27_1288_);
lean_ctor_set(v_reuseFailAlloc_1300_, 1, v_val_1297_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
else
{
lean_object* v___x_1302_; 
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 1, v_buckets_x27_1290_);
lean_ctor_set(v___x_1270_, 0, v_size_x27_1288_);
v___x_1302_ = v___x_1270_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_size_x27_1288_);
lean_ctor_set(v_reuseFailAlloc_1303_, 1, v_buckets_x27_1290_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
else
{
lean_object* v___x_1304_; lean_object* v_buckets_x27_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1309_; 
lean_inc(v_bkt_1285_);
v___x_1304_ = lean_box(0);
v_buckets_x27_1305_ = lean_array_uset(v_buckets_1268_, v___x_1284_, v___x_1304_);
v___x_1306_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1265_, v_b_1266_, v_bkt_1285_);
v___x_1307_ = lean_array_uset(v_buckets_x27_1305_, v___x_1284_, v___x_1306_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 1, v___x_1307_);
v___x_1309_ = v___x_1270_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_size_1267_);
lean_ctor_set(v_reuseFailAlloc_1310_, 1, v___x_1307_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(lean_object* v_a_1312_, lean_object* v_e_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1316_ = lean_st_ref_take(v_a_1312_);
v___x_1317_ = lean_box(0);
v___x_1318_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v___x_1316_, v_e_1313_, v_a_1314_);
v___x_1319_ = lean_st_ref_put(v_a_1312_, v___x_1318_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed(lean_object* v_a_1320_, lean_object* v_e_1321_, lean_object* v_a_1322_, lean_object* v___y_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(v_a_1320_, v_e_1321_, v_a_1322_);
lean_dec(v_a_1320_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(lean_object* v_k_1325_, lean_object* v___y_1326_, lean_object* v_b_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v___x_1333_; 
lean_inc(v___y_1331_);
lean_inc_ref(v___y_1330_);
lean_inc(v___y_1329_);
lean_inc_ref(v___y_1328_);
lean_inc(v___y_1326_);
v___x_1333_ = lean_apply_7(v_k_1325_, v_b_1327_, v___y_1326_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_, lean_box(0));
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed(lean_object* v_k_1334_, lean_object* v___y_1335_, lean_object* v_b_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(v_k_1334_, v___y_1335_, v_b_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
lean_dec(v___y_1340_);
lean_dec_ref(v___y_1339_);
lean_dec(v___y_1338_);
lean_dec_ref(v___y_1337_);
lean_dec(v___y_1335_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(lean_object* v_name_1343_, uint8_t v_bi_1344_, lean_object* v_type_1345_, lean_object* v_k_1346_, uint8_t v_kind_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v___f_1354_; lean_object* v___x_1355_; 
lean_inc(v___y_1348_);
v___f_1354_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1354_, 0, v_k_1346_);
lean_closure_set(v___f_1354_, 1, v___y_1348_);
v___x_1355_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1343_, v_bi_1344_, v_type_1345_, v___f_1354_, v_kind_1347_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_);
if (lean_obj_tag(v___x_1355_) == 0)
{
return v___x_1355_;
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1355_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1355_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___boxed(lean_object* v_name_1364_, lean_object* v_bi_1365_, lean_object* v_type_1366_, lean_object* v_k_1367_, lean_object* v_kind_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
uint8_t v_bi_boxed_1375_; uint8_t v_kind_boxed_1376_; lean_object* v_res_1377_; 
v_bi_boxed_1375_ = lean_unbox(v_bi_1365_);
v_kind_boxed_1376_ = lean_unbox(v_kind_1368_);
v_res_1377_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_1364_, v_bi_boxed_1375_, v_type_1366_, v_k_1367_, v_kind_boxed_1376_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(lean_object* v___x_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v___x_1384_; 
v___x_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1378_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed(lean_object* v___x_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(v___x_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object* v_name_1392_, lean_object* v_type_1393_, lean_object* v_val_1394_, lean_object* v_k_1395_, uint8_t v_nondep_1396_, uint8_t v_kind_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v___f_1404_; lean_object* v___x_1405_; 
lean_inc(v___y_1398_);
v___f_1404_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1404_, 0, v_k_1395_);
lean_closure_set(v___f_1404_, 1, v___y_1398_);
v___x_1405_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1392_, v_type_1393_, v_val_1394_, v___f_1404_, v_nondep_1396_, v_kind_1397_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
if (lean_obj_tag(v___x_1405_) == 0)
{
return v___x_1405_;
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
v_a_1406_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1405_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1405_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object* v_name_1414_, lean_object* v_type_1415_, lean_object* v_val_1416_, lean_object* v_k_1417_, lean_object* v_nondep_1418_, lean_object* v_kind_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
uint8_t v_nondep_boxed_1426_; uint8_t v_kind_boxed_1427_; lean_object* v_res_1428_; 
v_nondep_boxed_1426_ = lean_unbox(v_nondep_1418_);
v_kind_boxed_1427_ = lean_unbox(v_kind_1419_);
v_res_1428_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_1414_, v_type_1415_, v_val_1416_, v_k_1417_, v_nondep_boxed_1426_, v_kind_boxed_1427_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
lean_dec(v___y_1420_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_object* v_00_u03b1_1429_, lean_object* v_x_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_){
_start:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = lean_apply_1(v_x_1430_, lean_box(0));
v___x_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0___boxed(lean_object* v_00_u03b1_1438_, lean_object* v_x_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v_res_1445_; 
v_res_1445_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(v_00_u03b1_1438_, v_x_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
return v_res_1445_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3(void){
_start:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = l_Lean_maxRecDepthErrorMessage;
v___x_1452_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
return v___x_1452_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4(void){
_start:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1453_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3);
v___x_1454_ = l_Lean_MessageData_ofFormat(v___x_1453_);
return v___x_1454_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5(void){
_start:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1455_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4);
v___x_1456_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2));
v___x_1457_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1457_, 0, v___x_1456_);
lean_ctor_set(v___x_1457_, 1, v___x_1455_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(lean_object* v_ref_1458_){
_start:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1460_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5);
v___x_1461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1461_, 0, v_ref_1458_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
v___x_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___boxed(lean_object* v_ref_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1463_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(lean_object* v_x_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___y_1474_; lean_object* v_toCold_1483_; lean_object* v_currRecDepth_1484_; lean_object* v_ref_1485_; uint16_t v_optionFlags_1486_; uint8_t v_suppressElabErrors_1487_; uint8_t v_isRecordingDeps_1488_; lean_object* v_maxRecDepth_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; 
v_toCold_1483_ = lean_ctor_get(v___y_1470_, 0);
v_currRecDepth_1484_ = lean_ctor_get(v___y_1470_, 1);
v_ref_1485_ = lean_ctor_get(v___y_1470_, 2);
v_optionFlags_1486_ = lean_ctor_get_uint16(v___y_1470_, sizeof(void*)*3);
v_suppressElabErrors_1487_ = lean_ctor_get_uint8(v___y_1470_, sizeof(void*)*3 + 2);
v_isRecordingDeps_1488_ = lean_ctor_get_uint8(v___y_1470_, sizeof(void*)*3 + 3);
v_maxRecDepth_1494_ = lean_ctor_get(v_toCold_1483_, 3);
v___x_1495_ = lean_unsigned_to_nat(0u);
v___x_1496_ = lean_nat_dec_eq(v_maxRecDepth_1494_, v___x_1495_);
if (v___x_1496_ == 0)
{
uint8_t v___x_1497_; 
v___x_1497_ = lean_nat_dec_eq(v_currRecDepth_1484_, v_maxRecDepth_1494_);
if (v___x_1497_ == 0)
{
goto v___jp_1489_;
}
else
{
lean_object* v___x_1498_; 
lean_dec_ref(v_x_1466_);
lean_inc(v_ref_1485_);
v___x_1498_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1485_);
v___y_1474_ = v___x_1498_;
goto v___jp_1473_;
}
}
else
{
goto v___jp_1489_;
}
v___jp_1473_:
{
if (lean_obj_tag(v___y_1474_) == 0)
{
return v___y_1474_;
}
else
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1482_; 
v_a_1475_ = lean_ctor_get(v___y_1474_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___y_1474_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1477_ = v___y_1474_;
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___y_1474_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1478_ == 0)
{
v___x_1480_ = v___x_1477_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v_a_1475_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
}
v___jp_1489_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1490_ = lean_unsigned_to_nat(1u);
v___x_1491_ = lean_nat_add(v_currRecDepth_1484_, v___x_1490_);
lean_inc(v_ref_1485_);
lean_inc_ref(v_toCold_1483_);
v___x_1492_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_1492_, 0, v_toCold_1483_);
lean_ctor_set(v___x_1492_, 1, v___x_1491_);
lean_ctor_set(v___x_1492_, 2, v_ref_1485_);
lean_ctor_set_uint16(v___x_1492_, sizeof(void*)*3, v_optionFlags_1486_);
lean_ctor_set_uint8(v___x_1492_, sizeof(void*)*3 + 2, v_suppressElabErrors_1487_);
lean_ctor_set_uint8(v___x_1492_, sizeof(void*)*3 + 3, v_isRecordingDeps_1488_);
lean_inc(v___y_1471_);
lean_inc(v___y_1469_);
lean_inc_ref(v___y_1468_);
lean_inc(v___y_1467_);
v___x_1493_ = lean_apply_6(v_x_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___x_1492_, v___y_1471_, lean_box(0));
v___y_1474_ = v___x_1493_;
goto v___jp_1473_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg___boxed(lean_object* v_x_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec(v___y_1500_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(lean_object* v_a_1507_, lean_object* v_x_1508_){
_start:
{
if (lean_obj_tag(v_x_1508_) == 0)
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_box(0);
return v___x_1509_;
}
else
{
lean_object* v_key_1510_; lean_object* v_value_1511_; lean_object* v_tail_1512_; uint8_t v___x_1513_; 
v_key_1510_ = lean_ctor_get(v_x_1508_, 0);
v_value_1511_ = lean_ctor_get(v_x_1508_, 1);
v_tail_1512_ = lean_ctor_get(v_x_1508_, 2);
v___x_1513_ = l_Lean_ExprStructEq_beq(v_key_1510_, v_a_1507_);
if (v___x_1513_ == 0)
{
v_x_1508_ = v_tail_1512_;
goto _start;
}
else
{
lean_object* v___x_1515_; 
lean_inc(v_value_1511_);
v___x_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1515_, 0, v_value_1511_);
return v___x_1515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg___boxed(lean_object* v_a_1516_, lean_object* v_x_1517_){
_start:
{
lean_object* v_res_1518_; 
v_res_1518_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_1516_, v_x_1517_);
lean_dec(v_x_1517_);
lean_dec_ref(v_a_1516_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object* v_m_1519_, lean_object* v_a_1520_){
_start:
{
lean_object* v_buckets_1521_; lean_object* v___x_1522_; uint64_t v___x_1523_; uint64_t v___x_1524_; uint64_t v___x_1525_; uint64_t v_fold_1526_; uint64_t v___x_1527_; uint64_t v___x_1528_; uint64_t v___x_1529_; size_t v___x_1530_; size_t v___x_1531_; size_t v___x_1532_; size_t v___x_1533_; size_t v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v_buckets_1521_ = lean_ctor_get(v_m_1519_, 1);
v___x_1522_ = lean_array_get_size(v_buckets_1521_);
v___x_1523_ = l_Lean_ExprStructEq_hash(v_a_1520_);
v___x_1524_ = 32ULL;
v___x_1525_ = lean_uint64_shift_right(v___x_1523_, v___x_1524_);
v_fold_1526_ = lean_uint64_xor(v___x_1523_, v___x_1525_);
v___x_1527_ = 16ULL;
v___x_1528_ = lean_uint64_shift_right(v_fold_1526_, v___x_1527_);
v___x_1529_ = lean_uint64_xor(v_fold_1526_, v___x_1528_);
v___x_1530_ = lean_uint64_to_usize(v___x_1529_);
v___x_1531_ = lean_usize_of_nat(v___x_1522_);
v___x_1532_ = ((size_t)1ULL);
v___x_1533_ = lean_usize_sub(v___x_1531_, v___x_1532_);
v___x_1534_ = lean_usize_land(v___x_1530_, v___x_1533_);
v___x_1535_ = lean_array_uget_borrowed(v_buckets_1521_, v___x_1534_);
v___x_1536_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_1520_, v___x_1535_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object* v_m_1537_, lean_object* v_a_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_m_1537_, v_a_1538_);
lean_dec_ref(v_a_1538_);
lean_dec_ref(v_m_1537_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object* v_fvars_1540_, lean_object* v_pre_1541_, lean_object* v_post_1542_, lean_object* v_usedLetOnly_1543_, lean_object* v_skipConstInApp_1544_, lean_object* v_skipInstances_1545_, lean_object* v_body_1546_, lean_object* v_x_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
uint8_t v_usedLetOnly_boxed_1554_; uint8_t v_skipConstInApp_boxed_1555_; uint8_t v_skipInstances_boxed_1556_; lean_object* v_res_1557_; 
v_usedLetOnly_boxed_1554_ = lean_unbox(v_usedLetOnly_1543_);
v_skipConstInApp_boxed_1555_ = lean_unbox(v_skipConstInApp_1544_);
v_skipInstances_boxed_1556_ = lean_unbox(v_skipInstances_1545_);
v_res_1557_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(v_fvars_1540_, v_pre_1541_, v_post_1542_, v_usedLetOnly_boxed_1554_, v_skipConstInApp_boxed_1555_, v_skipInstances_boxed_1556_, v_body_1546_, v_x_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec(v___y_1548_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object* v_fvars_1561_, lean_object* v_pre_1562_, lean_object* v_post_1563_, uint8_t v_usedLetOnly_1564_, uint8_t v_skipConstInApp_1565_, uint8_t v_skipInstances_1566_, lean_object* v_body_1567_, lean_object* v_x_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1575_ = lean_array_push(v_fvars_1561_, v_x_1568_);
v___x_1576_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_1562_, v_post_1563_, v_usedLetOnly_1564_, v_skipConstInApp_1565_, v_skipInstances_1566_, v___x_1575_, v_body_1567_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object* v_fvars_1577_, lean_object* v_pre_1578_, lean_object* v_post_1579_, lean_object* v_usedLetOnly_1580_, lean_object* v_skipConstInApp_1581_, lean_object* v_skipInstances_1582_, lean_object* v_body_1583_, lean_object* v_x_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
uint8_t v_usedLetOnly_boxed_1591_; uint8_t v_skipConstInApp_boxed_1592_; uint8_t v_skipInstances_boxed_1593_; lean_object* v_res_1594_; 
v_usedLetOnly_boxed_1591_ = lean_unbox(v_usedLetOnly_1580_);
v_skipConstInApp_boxed_1592_ = lean_unbox(v_skipConstInApp_1581_);
v_skipInstances_boxed_1593_ = lean_unbox(v_skipInstances_1582_);
v_res_1594_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(v_fvars_1577_, v_pre_1578_, v_post_1579_, v_usedLetOnly_boxed_1591_, v_skipConstInApp_boxed_1592_, v_skipInstances_boxed_1593_, v_body_1583_, v_x_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
lean_dec(v___y_1585_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object* v_pre_1595_, lean_object* v_post_1596_, uint8_t v_usedLetOnly_1597_, uint8_t v_skipConstInApp_1598_, uint8_t v_skipInstances_1599_, lean_object* v_e_1600_, lean_object* v_a_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
lean_object* v___x_1607_; 
lean_inc_ref(v_post_1596_);
lean_inc(v___y_1605_);
lean_inc_ref(v___y_1604_);
lean_inc(v___y_1603_);
lean_inc_ref(v___y_1602_);
lean_inc_ref(v_e_1600_);
v___x_1607_ = lean_apply_6(v_post_1596_, v_e_1600_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, lean_box(0));
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1626_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1610_ = v___x_1607_;
v_isShared_1611_ = v_isSharedCheck_1626_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1607_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1626_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
switch(lean_obj_tag(v_a_1608_))
{
case 0:
{
lean_object* v_e_1612_; lean_object* v___x_1614_; 
lean_dec_ref(v_e_1600_);
lean_dec_ref(v_post_1596_);
lean_dec_ref(v_pre_1595_);
v_e_1612_ = lean_ctor_get(v_a_1608_, 0);
lean_inc_ref(v_e_1612_);
lean_dec_ref_known(v_a_1608_, 1);
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 0, v_e_1612_);
v___x_1614_ = v___x_1610_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_e_1612_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
case 1:
{
lean_object* v_e_1616_; lean_object* v___x_1617_; 
lean_del_object(v___x_1610_);
lean_dec_ref(v_e_1600_);
v_e_1616_ = lean_ctor_get(v_a_1608_, 0);
lean_inc_ref(v_e_1616_);
lean_dec_ref_known(v_a_1608_, 1);
v___x_1617_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1595_, v_post_1596_, v_usedLetOnly_1597_, v_skipConstInApp_1598_, v_skipInstances_1599_, v_e_1616_, v_a_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
return v___x_1617_;
}
default: 
{
lean_object* v_e_x3f_1618_; 
lean_dec_ref(v_post_1596_);
lean_dec_ref(v_pre_1595_);
v_e_x3f_1618_ = lean_ctor_get(v_a_1608_, 0);
lean_inc(v_e_x3f_1618_);
lean_dec_ref_known(v_a_1608_, 1);
if (lean_obj_tag(v_e_x3f_1618_) == 0)
{
lean_object* v___x_1620_; 
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 0, v_e_1600_);
v___x_1620_ = v___x_1610_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_e_1600_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
else
{
lean_object* v_val_1622_; lean_object* v___x_1624_; 
lean_dec_ref(v_e_1600_);
v_val_1622_ = lean_ctor_get(v_e_x3f_1618_, 0);
lean_inc(v_val_1622_);
lean_dec_ref_known(v_e_x3f_1618_, 1);
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 0, v_val_1622_);
v___x_1624_ = v___x_1610_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_val_1622_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_dec_ref(v_e_1600_);
lean_dec_ref(v_post_1596_);
lean_dec_ref(v_pre_1595_);
v_a_1627_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1607_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1607_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object* v_pre_1635_, lean_object* v_post_1636_, uint8_t v_usedLetOnly_1637_, uint8_t v_skipConstInApp_1638_, uint8_t v_skipInstances_1639_, lean_object* v_fvars_1640_, lean_object* v_e_1641_, lean_object* v_a_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
if (lean_obj_tag(v_e_1641_) == 6)
{
lean_object* v_binderName_1648_; lean_object* v_binderType_1649_; lean_object* v_body_1650_; uint8_t v_binderInfo_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___f_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v_binderName_1648_ = lean_ctor_get(v_e_1641_, 0);
lean_inc(v_binderName_1648_);
v_binderType_1649_ = lean_ctor_get(v_e_1641_, 1);
lean_inc_ref(v_binderType_1649_);
v_body_1650_ = lean_ctor_get(v_e_1641_, 2);
lean_inc_ref(v_body_1650_);
v_binderInfo_1651_ = lean_ctor_get_uint8(v_e_1641_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1641_, 3);
v___x_1652_ = lean_box(v_usedLetOnly_1637_);
v___x_1653_ = lean_box(v_skipConstInApp_1638_);
v___x_1654_ = lean_box(v_skipInstances_1639_);
lean_inc_ref(v_post_1636_);
lean_inc_ref(v_pre_1635_);
lean_inc_ref(v_fvars_1640_);
v___f_1655_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1655_, 0, v_fvars_1640_);
lean_closure_set(v___f_1655_, 1, v_pre_1635_);
lean_closure_set(v___f_1655_, 2, v_post_1636_);
lean_closure_set(v___f_1655_, 3, v___x_1652_);
lean_closure_set(v___f_1655_, 4, v___x_1653_);
lean_closure_set(v___f_1655_, 5, v___x_1654_);
lean_closure_set(v___f_1655_, 6, v_body_1650_);
v___x_1656_ = lean_expr_instantiate_rev(v_binderType_1649_, v_fvars_1640_);
lean_dec_ref(v_fvars_1640_);
lean_dec_ref(v_binderType_1649_);
v___x_1657_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1635_, v_post_1636_, v_usedLetOnly_1637_, v_skipConstInApp_1638_, v_skipInstances_1639_, v___x_1656_, v_a_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v_a_1658_; uint8_t v___x_1659_; lean_object* v___x_1660_; 
v_a_1658_ = lean_ctor_get(v___x_1657_, 0);
lean_inc(v_a_1658_);
lean_dec_ref_known(v___x_1657_, 1);
v___x_1659_ = 0;
v___x_1660_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_1648_, v_binderInfo_1651_, v_a_1658_, v___f_1655_, v___x_1659_, v_a_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
return v___x_1660_;
}
else
{
lean_dec_ref(v___f_1655_);
lean_dec(v_binderName_1648_);
return v___x_1657_;
}
}
else
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = lean_expr_instantiate_rev(v_e_1641_, v_fvars_1640_);
lean_dec_ref(v_e_1641_);
lean_inc_ref(v_post_1636_);
lean_inc_ref(v_pre_1635_);
v___x_1662_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1635_, v_post_1636_, v_usedLetOnly_1637_, v_skipConstInApp_1638_, v_skipInstances_1639_, v___x_1661_, v_a_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; uint8_t v___x_1664_; uint8_t v___x_1665_; uint8_t v___x_1666_; lean_object* v___x_1667_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1662_, 1);
v___x_1664_ = 0;
v___x_1665_ = 1;
v___x_1666_ = 1;
v___x_1667_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1640_, v_a_1663_, v___x_1664_, v_usedLetOnly_1637_, v___x_1664_, v___x_1665_, v___x_1666_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
lean_dec_ref(v_fvars_1640_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v_a_1668_; lean_object* v___x_1669_; 
v_a_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_a_1668_);
lean_dec_ref_known(v___x_1667_, 1);
v___x_1669_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1635_, v_post_1636_, v_usedLetOnly_1637_, v_skipConstInApp_1638_, v_skipInstances_1639_, v_a_1668_, v_a_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
return v___x_1669_;
}
else
{
lean_dec_ref(v_post_1636_);
lean_dec_ref(v_pre_1635_);
return v___x_1667_;
}
}
else
{
lean_dec_ref(v_fvars_1640_);
lean_dec_ref(v_post_1636_);
lean_dec_ref(v_pre_1635_);
return v___x_1662_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object* v_fvars_1670_, lean_object* v_pre_1671_, lean_object* v_post_1672_, uint8_t v_usedLetOnly_1673_, uint8_t v_skipConstInApp_1674_, uint8_t v_skipInstances_1675_, lean_object* v_body_1676_, lean_object* v_x_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; 
v___x_1684_ = lean_array_push(v_fvars_1670_, v_x_1677_);
v___x_1685_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_1671_, v_post_1672_, v_usedLetOnly_1673_, v_skipConstInApp_1674_, v_skipInstances_1675_, v___x_1684_, v_body_1676_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object* v_fvars_1686_, lean_object* v_pre_1687_, lean_object* v_post_1688_, lean_object* v_usedLetOnly_1689_, lean_object* v_skipConstInApp_1690_, lean_object* v_skipInstances_1691_, lean_object* v_body_1692_, lean_object* v_x_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
uint8_t v_usedLetOnly_boxed_1700_; uint8_t v_skipConstInApp_boxed_1701_; uint8_t v_skipInstances_boxed_1702_; lean_object* v_res_1703_; 
v_usedLetOnly_boxed_1700_ = lean_unbox(v_usedLetOnly_1689_);
v_skipConstInApp_boxed_1701_ = lean_unbox(v_skipConstInApp_1690_);
v_skipInstances_boxed_1702_ = lean_unbox(v_skipInstances_1691_);
v_res_1703_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(v_fvars_1686_, v_pre_1687_, v_post_1688_, v_usedLetOnly_boxed_1700_, v_skipConstInApp_boxed_1701_, v_skipInstances_boxed_1702_, v_body_1692_, v_x_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object* v_pre_1704_, lean_object* v_post_1705_, uint8_t v_usedLetOnly_1706_, uint8_t v_skipConstInApp_1707_, uint8_t v_skipInstances_1708_, lean_object* v_fvars_1709_, lean_object* v_e_1710_, lean_object* v_a_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
if (lean_obj_tag(v_e_1710_) == 8)
{
lean_object* v_declName_1717_; lean_object* v_type_1718_; lean_object* v_value_1719_; lean_object* v_body_1720_; uint8_t v_nondep_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___f_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v_declName_1717_ = lean_ctor_get(v_e_1710_, 0);
lean_inc(v_declName_1717_);
v_type_1718_ = lean_ctor_get(v_e_1710_, 1);
lean_inc_ref(v_type_1718_);
v_value_1719_ = lean_ctor_get(v_e_1710_, 2);
lean_inc_ref(v_value_1719_);
v_body_1720_ = lean_ctor_get(v_e_1710_, 3);
lean_inc_ref(v_body_1720_);
v_nondep_1721_ = lean_ctor_get_uint8(v_e_1710_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1710_, 4);
v___x_1722_ = lean_box(v_usedLetOnly_1706_);
v___x_1723_ = lean_box(v_skipConstInApp_1707_);
v___x_1724_ = lean_box(v_skipInstances_1708_);
lean_inc_ref_n(v_post_1705_, 2);
lean_inc_ref_n(v_pre_1704_, 2);
lean_inc_ref(v_fvars_1709_);
v___f_1725_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1725_, 0, v_fvars_1709_);
lean_closure_set(v___f_1725_, 1, v_pre_1704_);
lean_closure_set(v___f_1725_, 2, v_post_1705_);
lean_closure_set(v___f_1725_, 3, v___x_1722_);
lean_closure_set(v___f_1725_, 4, v___x_1723_);
lean_closure_set(v___f_1725_, 5, v___x_1724_);
lean_closure_set(v___f_1725_, 6, v_body_1720_);
v___x_1726_ = lean_expr_instantiate_rev(v_type_1718_, v_fvars_1709_);
lean_dec_ref(v_type_1718_);
v___x_1727_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1704_, v_post_1705_, v_usedLetOnly_1706_, v_skipConstInApp_1707_, v_skipInstances_1708_, v___x_1726_, v_a_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___x_1727_, 1);
v___x_1729_ = lean_expr_instantiate_rev(v_value_1719_, v_fvars_1709_);
lean_dec_ref(v_fvars_1709_);
lean_dec_ref(v_value_1719_);
v___x_1730_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1704_, v_post_1705_, v_usedLetOnly_1706_, v_skipConstInApp_1707_, v_skipInstances_1708_, v___x_1729_, v_a_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1731_; uint8_t v___x_1732_; lean_object* v___x_1733_; 
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
lean_inc(v_a_1731_);
lean_dec_ref_known(v___x_1730_, 1);
v___x_1732_ = 0;
v___x_1733_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_declName_1717_, v_a_1728_, v_a_1731_, v___f_1725_, v_nondep_1721_, v___x_1732_, v_a_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
return v___x_1733_;
}
else
{
lean_dec(v_a_1728_);
lean_dec_ref(v___f_1725_);
lean_dec(v_declName_1717_);
return v___x_1730_;
}
}
else
{
lean_dec_ref(v___f_1725_);
lean_dec_ref(v_value_1719_);
lean_dec(v_declName_1717_);
lean_dec_ref(v_fvars_1709_);
lean_dec_ref(v_post_1705_);
lean_dec_ref(v_pre_1704_);
return v___x_1727_;
}
}
else
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = lean_expr_instantiate_rev(v_e_1710_, v_fvars_1709_);
lean_dec_ref(v_e_1710_);
lean_inc_ref(v_post_1705_);
lean_inc_ref(v_pre_1704_);
v___x_1735_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1704_, v_post_1705_, v_usedLetOnly_1706_, v_skipConstInApp_1707_, v_skipInstances_1708_, v___x_1734_, v_a_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; uint8_t v___x_1737_; uint8_t v___x_1738_; lean_object* v___x_1739_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref_known(v___x_1735_, 1);
v___x_1737_ = 0;
v___x_1738_ = 1;
v___x_1739_ = l_Lean_Meta_mkLetFVars(v_fvars_1709_, v_a_1736_, v_usedLetOnly_1706_, v___x_1737_, v___x_1738_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
lean_dec_ref(v_fvars_1709_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_a_1740_; lean_object* v___x_1741_; 
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
lean_inc(v_a_1740_);
lean_dec_ref_known(v___x_1739_, 1);
v___x_1741_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1704_, v_post_1705_, v_usedLetOnly_1706_, v_skipConstInApp_1707_, v_skipInstances_1708_, v_a_1740_, v_a_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
return v___x_1741_;
}
else
{
lean_dec_ref(v_post_1705_);
lean_dec_ref(v_pre_1704_);
return v___x_1739_;
}
}
else
{
lean_dec_ref(v_fvars_1709_);
lean_dec_ref(v_post_1705_);
lean_dec_ref(v_pre_1704_);
return v___x_1735_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1742_; lean_object* v_dummy_1743_; 
v___x_1742_ = lean_box(0);
v_dummy_1743_ = l_Lean_Expr_sort___override(v___x_1742_);
return v_dummy_1743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object* v_pre_1744_, lean_object* v_post_1745_, uint8_t v_usedLetOnly_1746_, uint8_t v_skipConstInApp_1747_, uint8_t v_skipInstances_1748_, size_t v_sz_1749_, size_t v_i_1750_, lean_object* v_bs_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
uint8_t v___x_1758_; 
v___x_1758_ = lean_usize_dec_lt(v_i_1750_, v_sz_1749_);
if (v___x_1758_ == 0)
{
lean_object* v___x_1759_; 
lean_dec_ref(v_post_1745_);
lean_dec_ref(v_pre_1744_);
v___x_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1759_, 0, v_bs_1751_);
return v___x_1759_;
}
else
{
lean_object* v_v_1760_; lean_object* v___x_1761_; lean_object* v_bs_x27_1762_; lean_object* v___x_1763_; 
v_v_1760_ = lean_array_uget(v_bs_1751_, v_i_1750_);
v___x_1761_ = lean_unsigned_to_nat(0u);
v_bs_x27_1762_ = lean_array_uset(v_bs_1751_, v_i_1750_, v___x_1761_);
lean_inc_ref(v_post_1745_);
lean_inc_ref(v_pre_1744_);
v___x_1763_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1744_, v_post_1745_, v_usedLetOnly_1746_, v_skipConstInApp_1747_, v_skipInstances_1748_, v_v_1760_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; size_t v___x_1765_; size_t v___x_1766_; lean_object* v___x_1767_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1764_);
lean_dec_ref_known(v___x_1763_, 1);
v___x_1765_ = ((size_t)1ULL);
v___x_1766_ = lean_usize_add(v_i_1750_, v___x_1765_);
v___x_1767_ = lean_array_uset(v_bs_x27_1762_, v_i_1750_, v_a_1764_);
v_i_1750_ = v___x_1766_;
v_bs_1751_ = v___x_1767_;
goto _start;
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
lean_dec_ref(v_bs_x27_1762_);
lean_dec_ref(v_post_1745_);
lean_dec_ref(v_pre_1744_);
v_a_1769_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1763_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1763_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(lean_object* v_pre_1777_, lean_object* v_post_1778_, uint8_t v_usedLetOnly_1779_, uint8_t v_skipConstInApp_1780_, uint8_t v_skipInstances_1781_, lean_object* v___x_1782_, lean_object* v___y_1783_, lean_object* v_b_1784_, lean_object* v_a_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1777_, v_post_1778_, v_usedLetOnly_1779_, v_skipConstInApp_1780_, v_skipInstances_1781_, v___x_1782_, v___y_1783_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1801_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1794_ = v___x_1791_;
v_isShared_1795_ = v_isSharedCheck_1801_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v___x_1791_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1801_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1799_; 
v___x_1796_ = lean_array_fset(v_b_1784_, v_a_1785_, v_a_1792_);
v___x_1797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1796_);
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 0, v___x_1797_);
v___x_1799_ = v___x_1794_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v___x_1797_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
else
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
lean_dec_ref(v_b_1784_);
v_a_1802_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1804_ = v___x_1791_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1791_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed(lean_object* v_pre_1810_, lean_object* v_post_1811_, lean_object* v_usedLetOnly_1812_, lean_object* v_skipConstInApp_1813_, lean_object* v_skipInstances_1814_, lean_object* v___x_1815_, lean_object* v___y_1816_, lean_object* v_b_1817_, lean_object* v_a_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_){
_start:
{
uint8_t v_usedLetOnly_boxed_1824_; uint8_t v_skipConstInApp_boxed_1825_; uint8_t v_skipInstances_boxed_1826_; lean_object* v_res_1827_; 
v_usedLetOnly_boxed_1824_ = lean_unbox(v_usedLetOnly_1812_);
v_skipConstInApp_boxed_1825_ = lean_unbox(v_skipConstInApp_1813_);
v_skipInstances_boxed_1826_ = lean_unbox(v_skipInstances_1814_);
v_res_1827_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(v_pre_1810_, v_post_1811_, v_usedLetOnly_boxed_1824_, v_skipConstInApp_boxed_1825_, v_skipInstances_boxed_1826_, v___x_1815_, v___y_1816_, v_b_1817_, v_a_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec(v___y_1820_);
lean_dec_ref(v___y_1819_);
lean_dec(v_a_1818_);
lean_dec(v___y_1816_);
return v_res_1827_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(lean_object* v_upperBound_1828_, lean_object* v___x_1829_, lean_object* v_pre_1830_, lean_object* v_post_1831_, uint8_t v_usedLetOnly_1832_, uint8_t v_skipConstInApp_1833_, uint8_t v_skipInstances_1834_, lean_object* v_a_1835_, lean_object* v_b_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v___y_1844_; uint8_t v___x_1867_; 
v___x_1867_ = lean_nat_dec_lt(v_a_1835_, v_upperBound_1828_);
if (v___x_1867_ == 0)
{
lean_object* v___x_1868_; 
lean_dec(v_a_1835_);
lean_dec_ref(v_post_1831_);
lean_dec_ref(v_pre_1830_);
v___x_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1868_, 0, v_b_1836_);
return v___x_1868_;
}
else
{
lean_object* v___x_1869_; lean_object* v___x_1870_; uint8_t v___x_1871_; 
v___x_1869_ = lean_array_fget_borrowed(v_b_1836_, v_a_1835_);
v___x_1870_ = lean_array_get_size(v___x_1829_);
v___x_1871_ = lean_nat_dec_lt(v_a_1835_, v___x_1870_);
if (v___x_1871_ == 0)
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___f_1875_; 
lean_inc(v___x_1869_);
v___x_1872_ = lean_box(v_usedLetOnly_1832_);
v___x_1873_ = lean_box(v_skipConstInApp_1833_);
v___x_1874_ = lean_box(v_skipInstances_1834_);
lean_inc(v_a_1835_);
lean_inc(v___y_1837_);
lean_inc_ref(v_post_1831_);
lean_inc_ref(v_pre_1830_);
v___f_1875_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1875_, 0, v_pre_1830_);
lean_closure_set(v___f_1875_, 1, v_post_1831_);
lean_closure_set(v___f_1875_, 2, v___x_1872_);
lean_closure_set(v___f_1875_, 3, v___x_1873_);
lean_closure_set(v___f_1875_, 4, v___x_1874_);
lean_closure_set(v___f_1875_, 5, v___x_1869_);
lean_closure_set(v___f_1875_, 6, v___y_1837_);
lean_closure_set(v___f_1875_, 7, v_b_1836_);
lean_closure_set(v___f_1875_, 8, v_a_1835_);
v___y_1844_ = v___f_1875_;
goto v___jp_1843_;
}
else
{
lean_object* v___x_1876_; uint8_t v_isInstance_1877_; 
v___x_1876_ = lean_array_fget_borrowed(v___x_1829_, v_a_1835_);
v_isInstance_1877_ = lean_ctor_get_uint8(v___x_1876_, sizeof(void*)*1 + 4);
if (v_isInstance_1877_ == 0)
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___f_1881_; 
lean_inc(v___x_1869_);
v___x_1878_ = lean_box(v_usedLetOnly_1832_);
v___x_1879_ = lean_box(v_skipConstInApp_1833_);
v___x_1880_ = lean_box(v_skipInstances_1834_);
lean_inc(v_a_1835_);
lean_inc(v___y_1837_);
lean_inc_ref(v_post_1831_);
lean_inc_ref(v_pre_1830_);
v___f_1881_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1881_, 0, v_pre_1830_);
lean_closure_set(v___f_1881_, 1, v_post_1831_);
lean_closure_set(v___f_1881_, 2, v___x_1878_);
lean_closure_set(v___f_1881_, 3, v___x_1879_);
lean_closure_set(v___f_1881_, 4, v___x_1880_);
lean_closure_set(v___f_1881_, 5, v___x_1869_);
lean_closure_set(v___f_1881_, 6, v___y_1837_);
lean_closure_set(v___f_1881_, 7, v_b_1836_);
lean_closure_set(v___f_1881_, 8, v_a_1835_);
v___y_1844_ = v___f_1881_;
goto v___jp_1843_;
}
else
{
lean_object* v___x_1882_; lean_object* v___f_1883_; 
v___x_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1882_, 0, v_b_1836_);
v___f_1883_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_1883_, 0, v___x_1882_);
v___y_1844_ = v___f_1883_;
goto v___jp_1843_;
}
}
}
v___jp_1843_:
{
lean_object* v___x_1845_; 
lean_inc(v___y_1841_);
lean_inc_ref(v___y_1840_);
lean_inc(v___y_1839_);
lean_inc_ref(v___y_1838_);
v___x_1845_ = lean_apply_5(v___y_1844_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, lean_box(0));
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1858_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1848_ = v___x_1845_;
v_isShared_1849_ = v_isSharedCheck_1858_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1845_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1858_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
if (lean_obj_tag(v_a_1846_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1852_; 
lean_dec(v_a_1835_);
lean_dec_ref(v_post_1831_);
lean_dec_ref(v_pre_1830_);
v_a_1850_ = lean_ctor_get(v_a_1846_, 0);
lean_inc(v_a_1850_);
lean_dec_ref_known(v_a_1846_, 1);
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 0, v_a_1850_);
v___x_1852_ = v___x_1848_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_a_1850_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
return v___x_1852_;
}
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
lean_del_object(v___x_1848_);
v_a_1854_ = lean_ctor_get(v_a_1846_, 0);
lean_inc(v_a_1854_);
lean_dec_ref_known(v_a_1846_, 1);
v___x_1855_ = lean_unsigned_to_nat(1u);
v___x_1856_ = lean_nat_add(v_a_1835_, v___x_1855_);
lean_dec(v_a_1835_);
v_a_1835_ = v___x_1856_;
v_b_1836_ = v_a_1854_;
goto _start;
}
}
}
else
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1866_; 
lean_dec(v_a_1835_);
lean_dec_ref(v_post_1831_);
lean_dec_ref(v_pre_1830_);
v_a_1859_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1861_ = v___x_1845_;
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1845_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_a_1859_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t v_skipInstances_1884_, lean_object* v_pre_1885_, lean_object* v_post_1886_, uint8_t v_usedLetOnly_1887_, uint8_t v_skipConstInApp_1888_, lean_object* v_x_1889_, lean_object* v_x_1890_, lean_object* v_x_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v_f_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; 
if (lean_obj_tag(v_x_1889_) == 5)
{
lean_object* v_fn_1947_; lean_object* v_arg_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v_fn_1947_ = lean_ctor_get(v_x_1889_, 0);
lean_inc_ref(v_fn_1947_);
v_arg_1948_ = lean_ctor_get(v_x_1889_, 1);
lean_inc_ref(v_arg_1948_);
lean_dec_ref_known(v_x_1889_, 2);
v___x_1949_ = lean_array_set(v_x_1890_, v_x_1891_, v_arg_1948_);
v___x_1950_ = lean_unsigned_to_nat(1u);
v___x_1951_ = lean_nat_sub(v_x_1891_, v___x_1950_);
lean_dec(v_x_1891_);
v_x_1889_ = v_fn_1947_;
v_x_1890_ = v___x_1949_;
v_x_1891_ = v___x_1951_;
goto _start;
}
else
{
lean_dec(v_x_1891_);
if (v_skipConstInApp_1888_ == 0)
{
goto v___jp_1944_;
}
else
{
uint8_t v___x_1953_; 
v___x_1953_ = l_Lean_Expr_isConst(v_x_1889_);
if (v___x_1953_ == 0)
{
goto v___jp_1944_;
}
else
{
v_f_1899_ = v_x_1889_;
v___y_1900_ = v___y_1892_;
v___y_1901_ = v___y_1893_;
v___y_1902_ = v___y_1894_;
v___y_1903_ = v___y_1895_;
v___y_1904_ = v___y_1896_;
goto v___jp_1898_;
}
}
}
v___jp_1898_:
{
if (v_skipInstances_1884_ == 0)
{
size_t v_sz_1905_; size_t v___x_1906_; lean_object* v___x_1907_; 
v_sz_1905_ = lean_array_size(v_x_1890_);
v___x_1906_ = ((size_t)0ULL);
lean_inc_ref(v_post_1886_);
lean_inc_ref(v_pre_1885_);
v___x_1907_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(v_pre_1885_, v_post_1886_, v_usedLetOnly_1887_, v_skipConstInApp_1888_, v_skipInstances_1884_, v_sz_1905_, v___x_1906_, v_x_1890_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
lean_inc(v_a_1908_);
lean_dec_ref_known(v___x_1907_, 1);
v___x_1909_ = l_Lean_mkAppN(v_f_1899_, v_a_1908_);
lean_dec(v_a_1908_);
v___x_1910_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1885_, v_post_1886_, v_usedLetOnly_1887_, v_skipConstInApp_1888_, v_skipInstances_1884_, v___x_1909_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
return v___x_1910_;
}
else
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
lean_dec_ref(v_f_1899_);
lean_dec_ref(v_post_1886_);
lean_dec_ref(v_pre_1885_);
v_a_1911_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1907_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1907_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
else
{
lean_object* v___x_1919_; lean_object* v___x_1920_; 
v___x_1919_ = lean_array_get_size(v_x_1890_);
lean_inc_ref(v_f_1899_);
v___x_1920_ = l_Lean_Meta_getFunInfoNArgs(v_f_1899_, v___x_1919_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; lean_object* v_paramInfo_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1921_);
lean_dec_ref_known(v___x_1920_, 1);
v_paramInfo_1922_ = lean_ctor_get(v_a_1921_, 0);
lean_inc_ref(v_paramInfo_1922_);
lean_dec(v_a_1921_);
v___x_1923_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1886_);
lean_inc_ref(v_pre_1885_);
v___x_1924_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v___x_1919_, v_paramInfo_1922_, v_pre_1885_, v_post_1886_, v_usedLetOnly_1887_, v_skipConstInApp_1888_, v_skipInstances_1884_, v___x_1923_, v_x_1890_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
lean_dec_ref(v_paramInfo_1922_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_a_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v_a_1925_ = lean_ctor_get(v___x_1924_, 0);
lean_inc(v_a_1925_);
lean_dec_ref_known(v___x_1924_, 1);
v___x_1926_ = l_Lean_mkAppN(v_f_1899_, v_a_1925_);
lean_dec(v_a_1925_);
v___x_1927_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1885_, v_post_1886_, v_usedLetOnly_1887_, v_skipConstInApp_1888_, v_skipInstances_1884_, v___x_1926_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
return v___x_1927_;
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
lean_dec_ref(v_f_1899_);
lean_dec_ref(v_post_1886_);
lean_dec_ref(v_pre_1885_);
v_a_1928_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1924_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1924_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
lean_dec_ref(v_f_1899_);
lean_dec_ref(v_x_1890_);
lean_dec_ref(v_post_1886_);
lean_dec_ref(v_pre_1885_);
v_a_1936_ = lean_ctor_get(v___x_1920_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1920_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1920_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
}
v___jp_1944_:
{
lean_object* v___x_1945_; 
lean_inc_ref(v_post_1886_);
lean_inc_ref(v_pre_1885_);
v___x_1945_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1885_, v_post_1886_, v_usedLetOnly_1887_, v_skipConstInApp_1888_, v_skipInstances_1884_, v_x_1889_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1945_, 1);
v_f_1899_ = v_a_1946_;
v___y_1900_ = v___y_1892_;
v___y_1901_ = v___y_1893_;
v___y_1902_ = v___y_1894_;
v___y_1903_ = v___y_1895_;
v___y_1904_ = v___y_1896_;
goto v___jp_1898_;
}
else
{
lean_dec_ref(v_x_1890_);
lean_dec_ref(v_post_1886_);
lean_dec_ref(v_pre_1885_);
return v___x_1945_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object* v___x_1954_, lean_object* v_pre_1955_, lean_object* v_e_1956_, lean_object* v_post_1957_, uint8_t v_usedLetOnly_1958_, uint8_t v_skipConstInApp_1959_, uint8_t v_skipInstances_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v___x_1967_; 
v___x_1967_ = l_Lean_Core_checkSystem(v___x_1954_, v___y_1964_, v___y_1965_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v___x_1968_; 
lean_dec_ref_known(v___x_1967_, 1);
lean_inc_ref(v_pre_1955_);
lean_inc(v___y_1965_);
lean_inc_ref(v___y_1964_);
lean_inc(v___y_1963_);
lean_inc_ref(v___y_1962_);
lean_inc_ref(v_e_1956_);
v___x_1968_ = lean_apply_6(v_pre_1955_, v_e_1956_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, lean_box(0));
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_2017_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_1971_ = v___x_1968_;
v_isShared_1972_ = v_isSharedCheck_2017_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1968_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_2017_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___y_1974_; 
switch(lean_obj_tag(v_a_1969_))
{
case 0:
{
lean_object* v_e_2009_; lean_object* v___x_2011_; 
lean_dec_ref(v_post_1957_);
lean_dec_ref(v_e_1956_);
lean_dec_ref(v_pre_1955_);
v_e_2009_ = lean_ctor_get(v_a_1969_, 0);
lean_inc_ref(v_e_2009_);
lean_dec_ref_known(v_a_1969_, 1);
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 0, v_e_2009_);
v___x_2011_ = v___x_1971_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_e_2009_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
case 1:
{
lean_object* v_e_2013_; lean_object* v___x_2014_; 
lean_del_object(v___x_1971_);
lean_dec_ref(v_e_1956_);
v_e_2013_ = lean_ctor_get(v_a_1969_, 0);
lean_inc_ref(v_e_2013_);
lean_dec_ref_known(v_a_1969_, 1);
v___x_2014_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v_e_2013_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_2014_;
}
default: 
{
lean_object* v_e_x3f_2015_; 
lean_del_object(v___x_1971_);
v_e_x3f_2015_ = lean_ctor_get(v_a_1969_, 0);
lean_inc(v_e_x3f_2015_);
lean_dec_ref_known(v_a_1969_, 1);
if (lean_obj_tag(v_e_x3f_2015_) == 0)
{
v___y_1974_ = v_e_1956_;
goto v___jp_1973_;
}
else
{
lean_object* v_val_2016_; 
lean_dec_ref(v_e_1956_);
v_val_2016_ = lean_ctor_get(v_e_x3f_2015_, 0);
lean_inc(v_val_2016_);
lean_dec_ref_known(v_e_x3f_2015_, 1);
v___y_1974_ = v_val_2016_;
goto v___jp_1973_;
}
}
}
v___jp_1973_:
{
switch(lean_obj_tag(v___y_1974_))
{
case 7:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_1976_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___x_1975_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1976_;
}
case 6:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_1978_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___x_1977_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1978_;
}
case 8:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1979_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_1980_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___x_1979_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1980_;
}
case 5:
{
lean_object* v_dummy_1981_; lean_object* v_nargs_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v_dummy_1981_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1);
v_nargs_1982_ = l_Lean_Expr_getAppNumArgs(v___y_1974_);
lean_inc(v_nargs_1982_);
v___x_1983_ = lean_mk_array(v_nargs_1982_, v_dummy_1981_);
v___x_1984_ = lean_unsigned_to_nat(1u);
v___x_1985_ = lean_nat_sub(v_nargs_1982_, v___x_1984_);
lean_dec(v_nargs_1982_);
v___x_1986_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_1960_, v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v___y_1974_, v___x_1983_, v___x_1985_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1986_;
}
case 10:
{
lean_object* v_data_1987_; lean_object* v_expr_1988_; lean_object* v___x_1989_; 
v_data_1987_ = lean_ctor_get(v___y_1974_, 0);
v_expr_1988_ = lean_ctor_get(v___y_1974_, 1);
lean_inc_ref(v_expr_1988_);
lean_inc_ref(v_post_1957_);
lean_inc_ref(v_pre_1955_);
v___x_1989_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v_expr_1988_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; size_t v___x_1991_; size_t v___x_1992_; uint8_t v___x_1993_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 1);
v___x_1991_ = lean_ptr_addr(v_expr_1988_);
v___x_1992_ = lean_ptr_addr(v_a_1990_);
v___x_1993_ = lean_usize_dec_eq(v___x_1991_, v___x_1992_);
if (v___x_1993_ == 0)
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
lean_inc(v_data_1987_);
lean_dec_ref_known(v___y_1974_, 2);
v___x_1994_ = l_Lean_Expr_mdata___override(v_data_1987_, v_a_1990_);
v___x_1995_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___x_1994_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1995_;
}
else
{
lean_object* v___x_1996_; 
lean_dec(v_a_1990_);
v___x_1996_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1996_;
}
}
else
{
lean_dec_ref_known(v___y_1974_, 2);
lean_dec_ref(v_post_1957_);
lean_dec_ref(v_pre_1955_);
return v___x_1989_;
}
}
case 11:
{
lean_object* v_typeName_1997_; lean_object* v_idx_1998_; lean_object* v_struct_1999_; lean_object* v___x_2000_; 
v_typeName_1997_ = lean_ctor_get(v___y_1974_, 0);
v_idx_1998_ = lean_ctor_get(v___y_1974_, 1);
v_struct_1999_ = lean_ctor_get(v___y_1974_, 2);
lean_inc_ref(v_struct_1999_);
lean_inc_ref(v_post_1957_);
lean_inc_ref(v_pre_1955_);
v___x_2000_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v_struct_1999_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; size_t v___x_2002_; size_t v___x_2003_; uint8_t v___x_2004_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
lean_inc(v_a_2001_);
lean_dec_ref_known(v___x_2000_, 1);
v___x_2002_ = lean_ptr_addr(v_struct_1999_);
v___x_2003_ = lean_ptr_addr(v_a_2001_);
v___x_2004_ = lean_usize_dec_eq(v___x_2002_, v___x_2003_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2005_; lean_object* v___x_2006_; 
lean_inc(v_idx_1998_);
lean_inc(v_typeName_1997_);
lean_dec_ref_known(v___y_1974_, 3);
v___x_2005_ = l_Lean_Expr_proj___override(v_typeName_1997_, v_idx_1998_, v_a_2001_);
v___x_2006_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___x_2005_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_2006_;
}
else
{
lean_object* v___x_2007_; 
lean_dec(v_a_2001_);
v___x_2007_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_2007_;
}
}
else
{
lean_dec_ref_known(v___y_1974_, 3);
lean_dec_ref(v_post_1957_);
lean_dec_ref(v_pre_1955_);
return v___x_2000_;
}
}
default: 
{
lean_object* v___x_2008_; 
v___x_2008_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1955_, v_post_1957_, v_usedLetOnly_1958_, v_skipConstInApp_1959_, v_skipInstances_1960_, v___y_1974_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_2008_;
}
}
}
}
}
else
{
lean_object* v_a_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2025_; 
lean_dec_ref(v_post_1957_);
lean_dec_ref(v_e_1956_);
lean_dec_ref(v_pre_1955_);
v_a_2018_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2020_ = v___x_1968_;
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_a_2018_);
lean_dec(v___x_1968_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2023_; 
if (v_isShared_2021_ == 0)
{
v___x_2023_ = v___x_2020_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_a_2018_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
}
}
else
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2033_; 
lean_dec_ref(v_post_1957_);
lean_dec_ref(v_e_1956_);
lean_dec_ref(v_pre_1955_);
v_a_2026_ = lean_ctor_get(v___x_1967_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_1967_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2028_ = v___x_1967_;
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_1967_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2031_; 
if (v_isShared_2029_ == 0)
{
v___x_2031_ = v___x_2028_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_a_2026_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object* v___x_2034_, lean_object* v_pre_2035_, lean_object* v_e_2036_, lean_object* v_post_2037_, lean_object* v_usedLetOnly_2038_, lean_object* v_skipConstInApp_2039_, lean_object* v_skipInstances_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
uint8_t v_usedLetOnly_boxed_2047_; uint8_t v_skipConstInApp_boxed_2048_; uint8_t v_skipInstances_boxed_2049_; lean_object* v_res_2050_; 
v_usedLetOnly_boxed_2047_ = lean_unbox(v_usedLetOnly_2038_);
v_skipConstInApp_boxed_2048_ = lean_unbox(v_skipConstInApp_2039_);
v_skipInstances_boxed_2049_ = lean_unbox(v_skipInstances_2040_);
v_res_2050_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(v___x_2034_, v_pre_2035_, v_e_2036_, v_post_2037_, v_usedLetOnly_boxed_2047_, v_skipConstInApp_boxed_2048_, v_skipInstances_boxed_2049_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec(v___y_2043_);
lean_dec_ref(v___y_2042_);
lean_dec(v___y_2041_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object* v_pre_2051_, lean_object* v_post_2052_, uint8_t v_usedLetOnly_2053_, uint8_t v_skipConstInApp_2054_, uint8_t v_skipInstances_2055_, lean_object* v_e_2056_, lean_object* v_a_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; 
lean_inc(v_a_2057_);
v___x_2063_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2063_, 0, lean_box(0));
lean_closure_set(v___x_2063_, 1, lean_box(0));
lean_closure_set(v___x_2063_, 2, v_a_2057_);
v___x_2064_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___x_2063_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v_a_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2099_; 
v_a_2065_ = lean_ctor_get(v___x_2064_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2067_ = v___x_2064_;
v_isShared_2068_ = v_isSharedCheck_2099_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_a_2065_);
lean_dec(v___x_2064_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2099_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2069_; 
v___x_2069_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_a_2065_, v_e_2056_);
lean_dec(v_a_2065_);
if (lean_obj_tag(v___x_2069_) == 0)
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___f_2074_; lean_object* v___x_2075_; 
lean_del_object(v___x_2067_);
v___x_2070_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0));
v___x_2071_ = lean_box(v_usedLetOnly_2053_);
v___x_2072_ = lean_box(v_skipConstInApp_2054_);
v___x_2073_ = lean_box(v_skipInstances_2055_);
lean_inc_ref(v_e_2056_);
v___f_2074_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed), 13, 7);
lean_closure_set(v___f_2074_, 0, v___x_2070_);
lean_closure_set(v___f_2074_, 1, v_pre_2051_);
lean_closure_set(v___f_2074_, 2, v_e_2056_);
lean_closure_set(v___f_2074_, 3, v_post_2052_);
lean_closure_set(v___f_2074_, 4, v___x_2071_);
lean_closure_set(v___f_2074_, 5, v___x_2072_);
lean_closure_set(v___f_2074_, 6, v___x_2073_);
v___x_2075_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v___f_2074_, v_a_2057_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; lean_object* v___f_2077_; lean_object* v___x_2078_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc_n(v_a_2076_, 2);
lean_dec_ref_known(v___x_2075_, 1);
lean_inc(v_a_2057_);
v___f_2077_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2077_, 0, v_a_2057_);
lean_closure_set(v___f_2077_, 1, v_e_2056_);
lean_closure_set(v___f_2077_, 2, v_a_2076_);
v___x_2078_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___f_2077_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2085_ == 0)
{
lean_object* v_unused_2086_; 
v_unused_2086_ = lean_ctor_get(v___x_2078_, 0);
lean_dec(v_unused_2086_);
v___x_2080_ = v___x_2078_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_dec(v___x_2078_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 0, v_a_2076_);
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_a_2076_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
else
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2094_; 
lean_dec(v_a_2076_);
v_a_2087_ = lean_ctor_get(v___x_2078_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2089_ = v___x_2078_;
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2078_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2092_; 
if (v_isShared_2090_ == 0)
{
v___x_2092_ = v___x_2089_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_a_2087_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
}
else
{
lean_dec_ref(v_e_2056_);
return v___x_2075_;
}
}
else
{
lean_object* v_val_2095_; lean_object* v___x_2097_; 
lean_dec_ref(v_e_2056_);
lean_dec_ref(v_post_2052_);
lean_dec_ref(v_pre_2051_);
v_val_2095_ = lean_ctor_get(v___x_2069_, 0);
lean_inc(v_val_2095_);
lean_dec_ref_known(v___x_2069_, 1);
if (v_isShared_2068_ == 0)
{
lean_ctor_set(v___x_2067_, 0, v_val_2095_);
v___x_2097_ = v___x_2067_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_val_2095_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
}
else
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2107_; 
lean_dec_ref(v_e_2056_);
lean_dec_ref(v_post_2052_);
lean_dec_ref(v_pre_2051_);
v_a_2100_ = lean_ctor_get(v___x_2064_, 0);
v_isSharedCheck_2107_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2102_ = v___x_2064_;
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2064_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2105_; 
if (v_isShared_2103_ == 0)
{
v___x_2105_ = v___x_2102_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v_a_2100_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object* v_pre_2108_, lean_object* v_post_2109_, uint8_t v_usedLetOnly_2110_, uint8_t v_skipConstInApp_2111_, uint8_t v_skipInstances_2112_, lean_object* v_fvars_2113_, lean_object* v_e_2114_, lean_object* v_a_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_){
_start:
{
if (lean_obj_tag(v_e_2114_) == 7)
{
lean_object* v_binderName_2121_; lean_object* v_binderType_2122_; lean_object* v_body_2123_; uint8_t v_binderInfo_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___f_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v_binderName_2121_ = lean_ctor_get(v_e_2114_, 0);
lean_inc(v_binderName_2121_);
v_binderType_2122_ = lean_ctor_get(v_e_2114_, 1);
lean_inc_ref(v_binderType_2122_);
v_body_2123_ = lean_ctor_get(v_e_2114_, 2);
lean_inc_ref(v_body_2123_);
v_binderInfo_2124_ = lean_ctor_get_uint8(v_e_2114_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2114_, 3);
v___x_2125_ = lean_box(v_usedLetOnly_2110_);
v___x_2126_ = lean_box(v_skipConstInApp_2111_);
v___x_2127_ = lean_box(v_skipInstances_2112_);
lean_inc_ref(v_post_2109_);
lean_inc_ref(v_pre_2108_);
lean_inc_ref(v_fvars_2113_);
v___f_2128_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2128_, 0, v_fvars_2113_);
lean_closure_set(v___f_2128_, 1, v_pre_2108_);
lean_closure_set(v___f_2128_, 2, v_post_2109_);
lean_closure_set(v___f_2128_, 3, v___x_2125_);
lean_closure_set(v___f_2128_, 4, v___x_2126_);
lean_closure_set(v___f_2128_, 5, v___x_2127_);
lean_closure_set(v___f_2128_, 6, v_body_2123_);
v___x_2129_ = lean_expr_instantiate_rev(v_binderType_2122_, v_fvars_2113_);
lean_dec_ref(v_fvars_2113_);
lean_dec_ref(v_binderType_2122_);
v___x_2130_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2108_, v_post_2109_, v_usedLetOnly_2110_, v_skipConstInApp_2111_, v_skipInstances_2112_, v___x_2129_, v_a_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; uint8_t v___x_2132_; lean_object* v___x_2133_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2130_, 1);
v___x_2132_ = 0;
v___x_2133_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_2121_, v_binderInfo_2124_, v_a_2131_, v___f_2128_, v___x_2132_, v_a_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
return v___x_2133_;
}
else
{
lean_dec_ref(v___f_2128_);
lean_dec(v_binderName_2121_);
return v___x_2130_;
}
}
else
{
lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2134_ = lean_expr_instantiate_rev(v_e_2114_, v_fvars_2113_);
lean_dec_ref(v_e_2114_);
lean_inc_ref(v_post_2109_);
lean_inc_ref(v_pre_2108_);
v___x_2135_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2108_, v_post_2109_, v_usedLetOnly_2110_, v_skipConstInApp_2111_, v_skipInstances_2112_, v___x_2134_, v_a_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
if (lean_obj_tag(v___x_2135_) == 0)
{
lean_object* v_a_2136_; uint8_t v___x_2137_; uint8_t v___x_2138_; uint8_t v___x_2139_; lean_object* v___x_2140_; 
v_a_2136_ = lean_ctor_get(v___x_2135_, 0);
lean_inc(v_a_2136_);
lean_dec_ref_known(v___x_2135_, 1);
v___x_2137_ = 0;
v___x_2138_ = 1;
v___x_2139_ = 1;
v___x_2140_ = l_Lean_Meta_mkForallFVars(v_fvars_2113_, v_a_2136_, v___x_2137_, v_usedLetOnly_2110_, v___x_2138_, v___x_2139_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
lean_dec_ref(v_fvars_2113_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; lean_object* v___x_2142_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2141_);
lean_dec_ref_known(v___x_2140_, 1);
v___x_2142_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2108_, v_post_2109_, v_usedLetOnly_2110_, v_skipConstInApp_2111_, v_skipInstances_2112_, v_a_2141_, v_a_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
return v___x_2142_;
}
else
{
lean_dec_ref(v_post_2109_);
lean_dec_ref(v_pre_2108_);
return v___x_2140_;
}
}
else
{
lean_dec_ref(v_fvars_2113_);
lean_dec_ref(v_post_2109_);
lean_dec_ref(v_pre_2108_);
return v___x_2135_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object* v_fvars_2143_, lean_object* v_pre_2144_, lean_object* v_post_2145_, uint8_t v_usedLetOnly_2146_, uint8_t v_skipConstInApp_2147_, uint8_t v_skipInstances_2148_, lean_object* v_body_2149_, lean_object* v_x_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2157_ = lean_array_push(v_fvars_2143_, v_x_2150_);
v___x_2158_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2144_, v_post_2145_, v_usedLetOnly_2146_, v_skipConstInApp_2147_, v_skipInstances_2148_, v___x_2157_, v_body_2149_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
return v___x_2158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object* v_pre_2159_, lean_object* v_post_2160_, lean_object* v_usedLetOnly_2161_, lean_object* v_skipConstInApp_2162_, lean_object* v_skipInstances_2163_, lean_object* v_e_2164_, lean_object* v_a_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
uint8_t v_usedLetOnly_boxed_2171_; uint8_t v_skipConstInApp_boxed_2172_; uint8_t v_skipInstances_boxed_2173_; lean_object* v_res_2174_; 
v_usedLetOnly_boxed_2171_ = lean_unbox(v_usedLetOnly_2161_);
v_skipConstInApp_boxed_2172_ = lean_unbox(v_skipConstInApp_2162_);
v_skipInstances_boxed_2173_ = lean_unbox(v_skipInstances_2163_);
v_res_2174_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2159_, v_post_2160_, v_usedLetOnly_boxed_2171_, v_skipConstInApp_boxed_2172_, v_skipInstances_boxed_2173_, v_e_2164_, v_a_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2166_);
lean_dec(v_a_2165_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object* v_pre_2175_, lean_object* v_post_2176_, lean_object* v_usedLetOnly_2177_, lean_object* v_skipConstInApp_2178_, lean_object* v_skipInstances_2179_, lean_object* v_sz_2180_, lean_object* v_i_2181_, lean_object* v_bs_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
uint8_t v_usedLetOnly_boxed_2189_; uint8_t v_skipConstInApp_boxed_2190_; uint8_t v_skipInstances_boxed_2191_; size_t v_sz_boxed_2192_; size_t v_i_boxed_2193_; lean_object* v_res_2194_; 
v_usedLetOnly_boxed_2189_ = lean_unbox(v_usedLetOnly_2177_);
v_skipConstInApp_boxed_2190_ = lean_unbox(v_skipConstInApp_2178_);
v_skipInstances_boxed_2191_ = lean_unbox(v_skipInstances_2179_);
v_sz_boxed_2192_ = lean_unbox_usize(v_sz_2180_);
lean_dec(v_sz_2180_);
v_i_boxed_2193_ = lean_unbox_usize(v_i_2181_);
lean_dec(v_i_2181_);
v_res_2194_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(v_pre_2175_, v_post_2176_, v_usedLetOnly_boxed_2189_, v_skipConstInApp_boxed_2190_, v_skipInstances_boxed_2191_, v_sz_boxed_2192_, v_i_boxed_2193_, v_bs_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
lean_dec(v___y_2183_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object* v_pre_2195_, lean_object* v_post_2196_, lean_object* v_usedLetOnly_2197_, lean_object* v_skipConstInApp_2198_, lean_object* v_skipInstances_2199_, lean_object* v_e_2200_, lean_object* v_a_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_){
_start:
{
uint8_t v_usedLetOnly_boxed_2207_; uint8_t v_skipConstInApp_boxed_2208_; uint8_t v_skipInstances_boxed_2209_; lean_object* v_res_2210_; 
v_usedLetOnly_boxed_2207_ = lean_unbox(v_usedLetOnly_2197_);
v_skipConstInApp_boxed_2208_ = lean_unbox(v_skipConstInApp_2198_);
v_skipInstances_boxed_2209_ = lean_unbox(v_skipInstances_2199_);
v_res_2210_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2195_, v_post_2196_, v_usedLetOnly_boxed_2207_, v_skipConstInApp_boxed_2208_, v_skipInstances_boxed_2209_, v_e_2200_, v_a_2201_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_);
lean_dec(v___y_2205_);
lean_dec_ref(v___y_2204_);
lean_dec(v___y_2203_);
lean_dec_ref(v___y_2202_);
lean_dec(v_a_2201_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object* v_pre_2211_, lean_object* v_post_2212_, lean_object* v_usedLetOnly_2213_, lean_object* v_skipConstInApp_2214_, lean_object* v_skipInstances_2215_, lean_object* v_fvars_2216_, lean_object* v_e_2217_, lean_object* v_a_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
uint8_t v_usedLetOnly_boxed_2224_; uint8_t v_skipConstInApp_boxed_2225_; uint8_t v_skipInstances_boxed_2226_; lean_object* v_res_2227_; 
v_usedLetOnly_boxed_2224_ = lean_unbox(v_usedLetOnly_2213_);
v_skipConstInApp_boxed_2225_ = lean_unbox(v_skipConstInApp_2214_);
v_skipInstances_boxed_2226_ = lean_unbox(v_skipInstances_2215_);
v_res_2227_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2211_, v_post_2212_, v_usedLetOnly_boxed_2224_, v_skipConstInApp_boxed_2225_, v_skipInstances_boxed_2226_, v_fvars_2216_, v_e_2217_, v_a_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
lean_dec(v_a_2218_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object* v_pre_2228_, lean_object* v_post_2229_, lean_object* v_usedLetOnly_2230_, lean_object* v_skipConstInApp_2231_, lean_object* v_skipInstances_2232_, lean_object* v_fvars_2233_, lean_object* v_e_2234_, lean_object* v_a_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
uint8_t v_usedLetOnly_boxed_2241_; uint8_t v_skipConstInApp_boxed_2242_; uint8_t v_skipInstances_boxed_2243_; lean_object* v_res_2244_; 
v_usedLetOnly_boxed_2241_ = lean_unbox(v_usedLetOnly_2230_);
v_skipConstInApp_boxed_2242_ = lean_unbox(v_skipConstInApp_2231_);
v_skipInstances_boxed_2243_ = lean_unbox(v_skipInstances_2232_);
v_res_2244_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_2228_, v_post_2229_, v_usedLetOnly_boxed_2241_, v_skipConstInApp_boxed_2242_, v_skipInstances_boxed_2243_, v_fvars_2233_, v_e_2234_, v_a_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_);
lean_dec(v___y_2239_);
lean_dec_ref(v___y_2238_);
lean_dec(v___y_2237_);
lean_dec_ref(v___y_2236_);
lean_dec(v_a_2235_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object* v_pre_2245_, lean_object* v_post_2246_, lean_object* v_usedLetOnly_2247_, lean_object* v_skipConstInApp_2248_, lean_object* v_skipInstances_2249_, lean_object* v_fvars_2250_, lean_object* v_e_2251_, lean_object* v_a_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_){
_start:
{
uint8_t v_usedLetOnly_boxed_2258_; uint8_t v_skipConstInApp_boxed_2259_; uint8_t v_skipInstances_boxed_2260_; lean_object* v_res_2261_; 
v_usedLetOnly_boxed_2258_ = lean_unbox(v_usedLetOnly_2247_);
v_skipConstInApp_boxed_2259_ = lean_unbox(v_skipConstInApp_2248_);
v_skipInstances_boxed_2260_ = lean_unbox(v_skipInstances_2249_);
v_res_2261_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_2245_, v_post_2246_, v_usedLetOnly_boxed_2258_, v_skipConstInApp_boxed_2259_, v_skipInstances_boxed_2260_, v_fvars_2250_, v_e_2251_, v_a_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v_a_2252_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___boxed(lean_object* v_upperBound_2262_, lean_object* v___x_2263_, lean_object* v_pre_2264_, lean_object* v_post_2265_, lean_object* v_usedLetOnly_2266_, lean_object* v_skipConstInApp_2267_, lean_object* v_skipInstances_2268_, lean_object* v_a_2269_, lean_object* v_b_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
uint8_t v_usedLetOnly_boxed_2277_; uint8_t v_skipConstInApp_boxed_2278_; uint8_t v_skipInstances_boxed_2279_; lean_object* v_res_2280_; 
v_usedLetOnly_boxed_2277_ = lean_unbox(v_usedLetOnly_2266_);
v_skipConstInApp_boxed_2278_ = lean_unbox(v_skipConstInApp_2267_);
v_skipInstances_boxed_2279_ = lean_unbox(v_skipInstances_2268_);
v_res_2280_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v_upperBound_2262_, v___x_2263_, v_pre_2264_, v_post_2265_, v_usedLetOnly_boxed_2277_, v_skipConstInApp_boxed_2278_, v_skipInstances_boxed_2279_, v_a_2269_, v_b_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec(v___y_2273_);
lean_dec_ref(v___y_2272_);
lean_dec(v___y_2271_);
lean_dec_ref(v___x_2263_);
lean_dec(v_upperBound_2262_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object* v_skipInstances_2281_, lean_object* v_pre_2282_, lean_object* v_post_2283_, lean_object* v_usedLetOnly_2284_, lean_object* v_skipConstInApp_2285_, lean_object* v_x_2286_, lean_object* v_x_2287_, lean_object* v_x_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
uint8_t v_skipInstances_boxed_2295_; uint8_t v_usedLetOnly_boxed_2296_; uint8_t v_skipConstInApp_boxed_2297_; lean_object* v_res_2298_; 
v_skipInstances_boxed_2295_ = lean_unbox(v_skipInstances_2281_);
v_usedLetOnly_boxed_2296_ = lean_unbox(v_usedLetOnly_2284_);
v_skipConstInApp_boxed_2297_ = lean_unbox(v_skipConstInApp_2285_);
v_res_2298_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_boxed_2295_, v_pre_2282_, v_post_2283_, v_usedLetOnly_boxed_2296_, v_skipConstInApp_boxed_2297_, v_x_2286_, v_x_2287_, v_x_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
lean_dec(v___y_2289_);
return v_res_2298_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0(void){
_start:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2299_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_2300_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2300_, 0, lean_box(0));
lean_closure_set(v___x_2300_, 1, lean_box(0));
lean_closure_set(v___x_2300_, 2, v___x_2299_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object* v_input_2301_, lean_object* v_pre_2302_, lean_object* v_post_2303_, uint8_t v_usedLetOnly_2304_, uint8_t v_skipConstInApp_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_){
_start:
{
uint8_t v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v_a_2314_; lean_object* v___x_2315_; 
v___x_2311_ = 0;
v___x_2312_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0, &l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0);
v___x_2313_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2312_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_);
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_a_2314_);
lean_dec_ref(v___x_2313_);
v___x_2315_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2302_, v_post_2303_, v_usedLetOnly_2304_, v_skipConstInApp_2305_, v___x_2311_, v_input_2301_, v_a_2314_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v_a_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2325_; 
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_a_2316_);
lean_dec_ref_known(v___x_2315_, 1);
v___x_2317_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2317_, 0, lean_box(0));
lean_closure_set(v___x_2317_, 1, lean_box(0));
lean_closure_set(v___x_2317_, 2, v_a_2314_);
v___x_2318_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2317_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2325_ == 0)
{
lean_object* v_unused_2326_; 
v_unused_2326_ = lean_ctor_get(v___x_2318_, 0);
lean_dec(v_unused_2326_);
v___x_2320_ = v___x_2318_;
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
else
{
lean_dec(v___x_2318_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2323_; 
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 0, v_a_2316_);
v___x_2323_ = v___x_2320_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_a_2316_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
}
else
{
lean_dec(v_a_2314_);
return v___x_2315_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object* v_input_2327_, lean_object* v_pre_2328_, lean_object* v_post_2329_, lean_object* v_usedLetOnly_2330_, lean_object* v_skipConstInApp_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
uint8_t v_usedLetOnly_boxed_2337_; uint8_t v_skipConstInApp_boxed_2338_; lean_object* v_res_2339_; 
v_usedLetOnly_boxed_2337_ = lean_unbox(v_usedLetOnly_2330_);
v_skipConstInApp_boxed_2338_ = lean_unbox(v_skipConstInApp_2331_);
v_res_2339_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_input_2327_, v_pre_2328_, v_post_2329_, v_usedLetOnly_boxed_2337_, v_skipConstInApp_boxed_2338_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_);
lean_dec(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object* v___x_2340_, lean_object* v_as_2341_, lean_object* v_j_2342_){
_start:
{
lean_object* v___x_2343_; uint8_t v___x_2344_; 
v___x_2343_ = lean_array_get_size(v_as_2341_);
v___x_2344_ = lean_nat_dec_lt(v_j_2342_, v___x_2343_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2345_; 
lean_dec(v_j_2342_);
v___x_2345_ = lean_box(0);
return v___x_2345_;
}
else
{
lean_object* v___x_2346_; lean_object* v_declName_2347_; uint8_t v___x_2348_; 
v___x_2346_ = lean_array_fget_borrowed(v_as_2341_, v_j_2342_);
v_declName_2347_ = lean_ctor_get(v___x_2346_, 3);
v___x_2348_ = lean_name_eq(v_declName_2347_, v___x_2340_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2349_ = lean_unsigned_to_nat(1u);
v___x_2350_ = lean_nat_add(v_j_2342_, v___x_2349_);
lean_dec(v_j_2342_);
v_j_2342_ = v___x_2350_;
goto _start;
}
else
{
lean_object* v___x_2352_; 
v___x_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2352_, 0, v_j_2342_);
return v___x_2352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object* v___x_2353_, lean_object* v_as_2354_, lean_object* v_j_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_2353_, v_as_2354_, v_j_2355_);
lean_dec_ref(v_as_2354_);
lean_dec(v___x_2353_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(lean_object* v_val_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = lean_st_ref_get(v_val_2357_);
v___x_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2363_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0___boxed(lean_object* v_val_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v_res_2371_; 
v_res_2371_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
lean_dec(v_val_2365_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(lean_object* v_val_2372_, lean_object* v_val_2373_, lean_object* v_a_2374_, lean_object* v___x_2375_, lean_object* v_____r_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_){
_start:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2382_ = lean_st_ref_take(v_val_2372_);
v___x_2383_ = l_Lean_Elab_FixedParams_Info_setVarying(v_val_2373_, v_a_2374_, v___x_2382_);
v___x_2384_ = lean_st_ref_put(v_val_2372_, v___x_2383_);
v___x_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2375_);
v___x_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1___boxed(lean_object* v_val_2387_, lean_object* v_val_2388_, lean_object* v_a_2389_, lean_object* v___x_2390_, lean_object* v_____r_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
lean_object* v_res_2397_; 
v_res_2397_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2387_, v_val_2388_, v_a_2389_, v___x_2390_, v_____r_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v_val_2388_);
lean_dec(v_val_2387_);
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object* v_val_2398_, lean_object* v_val_2399_, lean_object* v_next_2400_, lean_object* v_next_2401_, lean_object* v___x_2402_, lean_object* v___x_2403_, lean_object* v_upperBound_2404_, lean_object* v_params_2405_, lean_object* v___x_2406_, lean_object* v_a_2407_, uint8_t v_b_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_){
_start:
{
uint8_t v_a_2415_; uint8_t v___x_2419_; 
v___x_2419_ = lean_nat_dec_lt(v_a_2407_, v_upperBound_2404_);
if (v___x_2419_ == 0)
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
lean_dec(v_a_2407_);
lean_dec_ref(v___x_2406_);
lean_dec(v_next_2400_);
v___x_2420_ = lean_box(v_b_2408_);
v___x_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
return v___x_2421_;
}
else
{
uint8_t v___x_2422_; lean_object* v___y_2424_; lean_object* v___x_2438_; uint8_t v___x_2439_; 
v___x_2422_ = lean_nat_dec_eq(v___x_2402_, v___x_2403_);
v___x_2438_ = lean_st_ref_get(v_val_2398_);
v___x_2439_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_next_2401_, v_a_2407_, v___x_2438_);
lean_dec(v___x_2438_);
if (v___x_2439_ == 0)
{
v_a_2415_ = v_b_2408_;
goto v___jp_2414_;
}
else
{
lean_object* v___x_2440_; uint8_t v_foApprox_2441_; uint8_t v_ctxApprox_2442_; uint8_t v_quasiPatternApprox_2443_; uint8_t v_constApprox_2444_; uint8_t v_isDefEqStuckEx_2445_; uint8_t v_unificationHints_2446_; uint8_t v_assignSyntheticOpaque_2447_; uint8_t v_offsetCnstrs_2448_; uint8_t v_transparency_2449_; uint8_t v_etaStruct_2450_; uint8_t v_univApprox_2451_; uint8_t v_iota_2452_; uint8_t v_beta_2453_; uint8_t v_proj_2454_; uint8_t v_zeta_2455_; uint8_t v_zetaDelta_2456_; uint8_t v_zetaUnused_2457_; uint8_t v_zetaHave_2458_; uint8_t v_canUnfoldPredicateConfig_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2491_; 
v___x_2440_ = l_Lean_Meta_Context_config(v___y_2409_);
v_foApprox_2441_ = lean_ctor_get_uint8(v___x_2440_, 0);
v_ctxApprox_2442_ = lean_ctor_get_uint8(v___x_2440_, 1);
v_quasiPatternApprox_2443_ = lean_ctor_get_uint8(v___x_2440_, 2);
v_constApprox_2444_ = lean_ctor_get_uint8(v___x_2440_, 3);
v_isDefEqStuckEx_2445_ = lean_ctor_get_uint8(v___x_2440_, 4);
v_unificationHints_2446_ = lean_ctor_get_uint8(v___x_2440_, 5);
v_assignSyntheticOpaque_2447_ = lean_ctor_get_uint8(v___x_2440_, 7);
v_offsetCnstrs_2448_ = lean_ctor_get_uint8(v___x_2440_, 8);
v_transparency_2449_ = lean_ctor_get_uint8(v___x_2440_, 9);
v_etaStruct_2450_ = lean_ctor_get_uint8(v___x_2440_, 10);
v_univApprox_2451_ = lean_ctor_get_uint8(v___x_2440_, 11);
v_iota_2452_ = lean_ctor_get_uint8(v___x_2440_, 12);
v_beta_2453_ = lean_ctor_get_uint8(v___x_2440_, 13);
v_proj_2454_ = lean_ctor_get_uint8(v___x_2440_, 14);
v_zeta_2455_ = lean_ctor_get_uint8(v___x_2440_, 15);
v_zetaDelta_2456_ = lean_ctor_get_uint8(v___x_2440_, 16);
v_zetaUnused_2457_ = lean_ctor_get_uint8(v___x_2440_, 17);
v_zetaHave_2458_ = lean_ctor_get_uint8(v___x_2440_, 18);
v_canUnfoldPredicateConfig_2459_ = lean_ctor_get_uint8(v___x_2440_, 19);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2461_ = v___x_2440_;
v_isShared_2462_ = v_isSharedCheck_2491_;
goto v_resetjp_2460_;
}
else
{
lean_dec(v___x_2440_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2491_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
uint8_t v_trackZetaDelta_2463_; lean_object* v_zetaDeltaSet_2464_; lean_object* v_lctx_2465_; lean_object* v_localInstances_2466_; lean_object* v_defEqCtx_x3f_2467_; lean_object* v_synthPendingDepth_2468_; lean_object* v_customCanUnfoldPredicate_x3f_2469_; uint8_t v_univApprox_2470_; uint8_t v_inTypeClassResolution_2471_; uint8_t v_cacheInferType_2472_; lean_object* v_rewriteSet_x3f_2473_; uint8_t v_rewriteFuelScope_2474_; uint8_t v___x_2475_; lean_object* v___x_2477_; 
v_trackZetaDelta_2463_ = lean_ctor_get_uint8(v___y_2409_, sizeof(void*)*8);
v_zetaDeltaSet_2464_ = lean_ctor_get(v___y_2409_, 1);
v_lctx_2465_ = lean_ctor_get(v___y_2409_, 2);
v_localInstances_2466_ = lean_ctor_get(v___y_2409_, 3);
v_defEqCtx_x3f_2467_ = lean_ctor_get(v___y_2409_, 4);
v_synthPendingDepth_2468_ = lean_ctor_get(v___y_2409_, 5);
v_customCanUnfoldPredicate_x3f_2469_ = lean_ctor_get(v___y_2409_, 6);
v_univApprox_2470_ = lean_ctor_get_uint8(v___y_2409_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_2471_ = lean_ctor_get_uint8(v___y_2409_, sizeof(void*)*8 + 2);
v_cacheInferType_2472_ = lean_ctor_get_uint8(v___y_2409_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_2473_ = lean_ctor_get(v___y_2409_, 7);
v_rewriteFuelScope_2474_ = lean_ctor_get_uint8(v___y_2409_, sizeof(void*)*8 + 4);
v___x_2475_ = 0;
if (v_isShared_2462_ == 0)
{
v___x_2477_ = v___x_2461_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 0, v_foApprox_2441_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 1, v_ctxApprox_2442_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 2, v_quasiPatternApprox_2443_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 3, v_constApprox_2444_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 4, v_isDefEqStuckEx_2445_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 5, v_unificationHints_2446_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 7, v_assignSyntheticOpaque_2447_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 8, v_offsetCnstrs_2448_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 9, v_transparency_2449_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 10, v_etaStruct_2450_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 11, v_univApprox_2451_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 12, v_iota_2452_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 13, v_beta_2453_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 14, v_proj_2454_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 15, v_zeta_2455_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 16, v_zetaDelta_2456_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 17, v_zetaUnused_2457_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 18, v_zetaHave_2458_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, 19, v_canUnfoldPredicateConfig_2459_);
v___x_2477_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
uint64_t v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; uint8_t v_transparency_2482_; lean_object* v___x_2483_; uint8_t v___x_2484_; uint8_t v___x_2485_; 
lean_ctor_set_uint8(v___x_2477_, 6, v___x_2475_);
v___x_2478_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2477_);
v___x_2479_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2479_, 0, v___x_2477_);
lean_ctor_set_uint64(v___x_2479_, sizeof(void*)*1, v___x_2478_);
lean_inc(v_rewriteSet_x3f_2473_);
lean_inc(v_customCanUnfoldPredicate_x3f_2469_);
lean_inc(v_synthPendingDepth_2468_);
lean_inc(v_defEqCtx_x3f_2467_);
lean_inc_ref(v_localInstances_2466_);
lean_inc_ref(v_lctx_2465_);
lean_inc(v_zetaDeltaSet_2464_);
lean_inc_ref(v___x_2479_);
v___x_2480_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_2480_, 0, v___x_2479_);
lean_ctor_set(v___x_2480_, 1, v_zetaDeltaSet_2464_);
lean_ctor_set(v___x_2480_, 2, v_lctx_2465_);
lean_ctor_set(v___x_2480_, 3, v_localInstances_2466_);
lean_ctor_set(v___x_2480_, 4, v_defEqCtx_x3f_2467_);
lean_ctor_set(v___x_2480_, 5, v_synthPendingDepth_2468_);
lean_ctor_set(v___x_2480_, 6, v_customCanUnfoldPredicate_x3f_2469_);
lean_ctor_set(v___x_2480_, 7, v_rewriteSet_x3f_2473_);
lean_ctor_set_uint8(v___x_2480_, sizeof(void*)*8, v_trackZetaDelta_2463_);
lean_ctor_set_uint8(v___x_2480_, sizeof(void*)*8 + 1, v_univApprox_2470_);
lean_ctor_set_uint8(v___x_2480_, sizeof(void*)*8 + 2, v_inTypeClassResolution_2471_);
lean_ctor_set_uint8(v___x_2480_, sizeof(void*)*8 + 3, v_cacheInferType_2472_);
lean_ctor_set_uint8(v___x_2480_, sizeof(void*)*8 + 4, v_rewriteFuelScope_2474_);
v___x_2481_ = l_Lean_Meta_Context_config(v___x_2480_);
v_transparency_2482_ = lean_ctor_get_uint8(v___x_2481_, 9);
lean_dec_ref(v___x_2481_);
v___x_2483_ = lean_array_fget_borrowed(v_params_2405_, v_a_2407_);
v___x_2484_ = 2;
v___x_2485_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2482_, v___x_2484_);
if (v___x_2485_ == 0)
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
lean_dec_ref_known(v___x_2480_, 8);
v___x_2486_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2484_, v___x_2479_);
lean_inc(v_rewriteSet_x3f_2473_);
lean_inc(v_customCanUnfoldPredicate_x3f_2469_);
lean_inc(v_synthPendingDepth_2468_);
lean_inc(v_defEqCtx_x3f_2467_);
lean_inc_ref(v_localInstances_2466_);
lean_inc_ref(v_lctx_2465_);
lean_inc(v_zetaDeltaSet_2464_);
v___x_2487_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_2487_, 0, v___x_2486_);
lean_ctor_set(v___x_2487_, 1, v_zetaDeltaSet_2464_);
lean_ctor_set(v___x_2487_, 2, v_lctx_2465_);
lean_ctor_set(v___x_2487_, 3, v_localInstances_2466_);
lean_ctor_set(v___x_2487_, 4, v_defEqCtx_x3f_2467_);
lean_ctor_set(v___x_2487_, 5, v_synthPendingDepth_2468_);
lean_ctor_set(v___x_2487_, 6, v_customCanUnfoldPredicate_x3f_2469_);
lean_ctor_set(v___x_2487_, 7, v_rewriteSet_x3f_2473_);
lean_ctor_set_uint8(v___x_2487_, sizeof(void*)*8, v_trackZetaDelta_2463_);
lean_ctor_set_uint8(v___x_2487_, sizeof(void*)*8 + 1, v_univApprox_2470_);
lean_ctor_set_uint8(v___x_2487_, sizeof(void*)*8 + 2, v_inTypeClassResolution_2471_);
lean_ctor_set_uint8(v___x_2487_, sizeof(void*)*8 + 3, v_cacheInferType_2472_);
lean_ctor_set_uint8(v___x_2487_, sizeof(void*)*8 + 4, v_rewriteFuelScope_2474_);
lean_inc_ref(v___x_2406_);
lean_inc(v___x_2483_);
v___x_2488_ = l_Lean_Meta_isExprDefEq(v___x_2483_, v___x_2406_, v___x_2487_, v___y_2410_, v___y_2411_, v___y_2412_);
lean_dec_ref_known(v___x_2487_, 8);
v___y_2424_ = v___x_2488_;
goto v___jp_2423_;
}
else
{
lean_object* v___x_2489_; 
lean_dec_ref_known(v___x_2479_, 1);
lean_inc_ref(v___x_2406_);
lean_inc(v___x_2483_);
v___x_2489_ = l_Lean_Meta_isExprDefEq(v___x_2483_, v___x_2406_, v___x_2480_, v___y_2410_, v___y_2411_, v___y_2412_);
lean_dec_ref_known(v___x_2480_, 8);
v___y_2424_ = v___x_2489_;
goto v___jp_2423_;
}
}
}
}
v___jp_2423_:
{
if (lean_obj_tag(v___y_2424_) == 0)
{
lean_object* v_a_2425_; uint8_t v___x_2426_; 
v_a_2425_ = lean_ctor_get(v___y_2424_, 0);
lean_inc(v_a_2425_);
lean_dec_ref_known(v___y_2424_, 1);
v___x_2426_ = lean_unbox(v_a_2425_);
lean_dec(v_a_2425_);
if (v___x_2426_ == 0)
{
v_a_2415_ = v_b_2408_;
goto v___jp_2414_;
}
else
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2427_ = lean_st_ref_take(v_val_2398_);
lean_inc(v_a_2407_);
lean_inc(v_next_2400_);
v___x_2428_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_val_2399_, v_next_2400_, v_next_2401_, v_a_2407_, v___x_2427_);
v___x_2429_ = lean_st_ref_put(v_val_2398_, v___x_2428_);
v_a_2415_ = v___x_2422_;
goto v___jp_2414_;
}
}
else
{
lean_object* v_a_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2437_; 
lean_dec(v_a_2407_);
lean_dec_ref(v___x_2406_);
lean_dec(v_next_2400_);
v_a_2430_ = lean_ctor_get(v___y_2424_, 0);
v_isSharedCheck_2437_ = !lean_is_exclusive(v___y_2424_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2432_ = v___y_2424_;
v_isShared_2433_ = v_isSharedCheck_2437_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_a_2430_);
lean_dec(v___y_2424_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2437_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2435_; 
if (v_isShared_2433_ == 0)
{
v___x_2435_ = v___x_2432_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_a_2430_);
v___x_2435_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
return v___x_2435_;
}
}
}
}
}
v___jp_2414_:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; 
v___x_2416_ = lean_unsigned_to_nat(1u);
v___x_2417_ = lean_nat_add(v_a_2407_, v___x_2416_);
lean_dec(v_a_2407_);
v_a_2407_ = v___x_2417_;
v_b_2408_ = v_a_2415_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object* v_val_2492_, lean_object* v_val_2493_, lean_object* v_next_2494_, lean_object* v_next_2495_, lean_object* v___x_2496_, lean_object* v___x_2497_, lean_object* v_upperBound_2498_, lean_object* v_params_2499_, lean_object* v___x_2500_, lean_object* v_a_2501_, lean_object* v_b_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_){
_start:
{
uint8_t v_b_boxed_2508_; lean_object* v_res_2509_; 
v_b_boxed_2508_ = lean_unbox(v_b_2502_);
v_res_2509_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2492_, v_val_2493_, v_next_2494_, v_next_2495_, v___x_2496_, v___x_2497_, v_upperBound_2498_, v_params_2499_, v___x_2500_, v_a_2501_, v_b_boxed_2508_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
lean_dec_ref(v_params_2499_);
lean_dec(v_upperBound_2498_);
lean_dec(v___x_2497_);
lean_dec(v___x_2496_);
lean_dec(v_next_2495_);
lean_dec(v_val_2493_);
lean_dec(v_val_2492_);
return v_res_2509_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6(void){
_start:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2520_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2521_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5));
v___x_2522_ = l_Lean_Name_append(v___x_2521_, v___x_2520_);
return v___x_2522_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8(void){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2524_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7));
v___x_2525_ = l_Lean_stringToMessageData(v___x_2524_);
return v___x_2525_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2526_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2));
v___x_2527_ = l_Lean_stringToMessageData(v___x_2526_);
return v___x_2527_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2529_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10));
v___x_2530_ = l_Lean_stringToMessageData(v___x_2529_);
return v___x_2530_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2532_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12));
v___x_2533_ = l_Lean_stringToMessageData(v___x_2532_);
return v___x_2533_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2535_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14));
v___x_2536_ = l_Lean_stringToMessageData(v___x_2535_);
return v___x_2536_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17(void){
_start:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2538_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16));
v___x_2539_ = l_Lean_stringToMessageData(v___x_2538_);
return v___x_2539_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19(void){
_start:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18));
v___x_2542_ = l_Lean_stringToMessageData(v___x_2541_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(lean_object* v_val_2543_, lean_object* v_val_2544_, lean_object* v_upperBound_2545_, lean_object* v_args_2546_, lean_object* v_e_2547_, lean_object* v_next_2548_, lean_object* v_params_2549_, lean_object* v___x_2550_, lean_object* v___x_2551_, lean_object* v_a_2552_, lean_object* v_b_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_){
_start:
{
lean_object* v_a_2560_; lean_object* v___y_2565_; uint8_t v___x_2584_; 
v___x_2584_ = lean_nat_dec_lt(v_a_2552_, v_upperBound_2545_);
if (v___x_2584_ == 0)
{
lean_object* v___x_2585_; 
lean_dec(v_a_2552_);
lean_dec_ref(v_e_2547_);
lean_dec(v_val_2544_);
v___x_2585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2585_, 0, v_b_2553_);
return v___x_2585_;
}
else
{
lean_object* v___x_2586_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2586_ = lean_box(0);
v___x_2593_ = l_Lean_instInhabitedExpr;
v___x_2594_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2543_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
if (lean_obj_tag(v___x_2594_) == 0)
{
lean_object* v_a_2595_; uint8_t v___x_2596_; 
v_a_2595_ = lean_ctor_get(v___x_2594_, 0);
lean_inc(v_a_2595_);
lean_dec_ref_known(v___x_2594_, 1);
v___x_2596_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_val_2544_, v_a_2552_, v_a_2595_);
lean_dec(v_a_2595_);
if (v___x_2596_ == 0)
{
v_a_2560_ = v___x_2586_;
goto v___jp_2559_;
}
else
{
lean_object* v___x_2597_; uint8_t v___x_2598_; 
v___x_2597_ = lean_array_get_size(v_args_2546_);
v___x_2598_ = lean_nat_dec_lt(v_a_2552_, v___x_2597_);
if (v___x_2598_ == 0)
{
lean_object* v_toCold_2599_; lean_object* v_options_2600_; uint8_t v_hasTrace_2601_; 
v_toCold_2599_ = lean_ctor_get(v___y_2556_, 0);
v_options_2600_ = lean_ctor_get(v_toCold_2599_, 2);
v_hasTrace_2601_ = lean_ctor_get_uint8(v_options_2600_, sizeof(void*)*1);
if (v_hasTrace_2601_ == 0)
{
goto v___jp_2589_;
}
else
{
lean_object* v_inheritedTraceOptions_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; uint8_t v___x_2605_; 
v_inheritedTraceOptions_2602_ = lean_ctor_get(v_toCold_2599_, 11);
v___x_2603_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2604_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2605_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2602_, v_options_2600_, v___x_2604_);
if (v___x_2605_ == 0)
{
goto v___jp_2589_;
}
else
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2606_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2544_);
v___x_2607_ = l_Nat_reprFast(v_val_2544_);
v___x_2608_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2607_);
v___x_2609_ = l_Lean_MessageData_ofFormat(v___x_2608_);
v___x_2610_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2606_);
lean_ctor_set(v___x_2610_, 1, v___x_2609_);
v___x_2611_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2612_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2610_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
lean_inc(v_a_2552_);
v___x_2613_ = l_Nat_reprFast(v_a_2552_);
v___x_2614_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2613_);
v___x_2615_ = l_Lean_MessageData_ofFormat(v___x_2614_);
lean_inc_ref(v___x_2615_);
v___x_2616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2612_);
lean_ctor_set(v___x_2616_, 1, v___x_2615_);
v___x_2617_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2616_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
lean_inc_ref(v_e_2547_);
v___x_2619_ = l_Lean_MessageData_ofExpr(v_e_2547_);
v___x_2620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2618_);
lean_ctor_set(v___x_2620_, 1, v___x_2619_);
v___x_2621_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13);
v___x_2622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2622_, 0, v___x_2620_);
lean_ctor_set(v___x_2622_, 1, v___x_2621_);
v___x_2623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
lean_ctor_set(v___x_2623_, 1, v___x_2615_);
v___x_2624_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2603_, v___x_2623_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v_a_2625_; lean_object* v___x_2626_; 
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
lean_inc(v_a_2625_);
lean_dec_ref_known(v___x_2624_, 1);
lean_inc(v_a_2552_);
v___x_2626_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2543_, v_val_2544_, v_a_2552_, v___x_2586_, v_a_2625_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
v___y_2565_ = v___x_2626_;
goto v___jp_2564_;
}
else
{
lean_dec(v_a_2552_);
lean_dec_ref(v_e_2547_);
lean_dec(v_val_2544_);
return v___x_2624_;
}
}
}
}
else
{
lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2627_ = lean_array_fget_borrowed(v_args_2546_, v_a_2552_);
v___x_2628_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2543_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v_a_2629_; lean_object* v___x_2630_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_a_2629_);
lean_dec_ref_known(v___x_2628_, 1);
v___x_2630_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_val_2544_, v_a_2552_, v_next_2548_, v_a_2629_);
lean_dec(v_a_2629_);
if (lean_obj_tag(v___x_2630_) == 1)
{
lean_object* v_val_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2734_; 
v_val_2631_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2633_ = v___x_2630_;
v_isShared_2634_ = v_isSharedCheck_2734_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_val_2631_);
lean_dec(v___x_2630_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2734_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2635_; uint8_t v_foApprox_2636_; uint8_t v_ctxApprox_2637_; uint8_t v_quasiPatternApprox_2638_; uint8_t v_constApprox_2639_; uint8_t v_isDefEqStuckEx_2640_; uint8_t v_unificationHints_2641_; uint8_t v_assignSyntheticOpaque_2642_; uint8_t v_offsetCnstrs_2643_; uint8_t v_transparency_2644_; uint8_t v_etaStruct_2645_; uint8_t v_univApprox_2646_; uint8_t v_iota_2647_; uint8_t v_beta_2648_; uint8_t v_proj_2649_; uint8_t v_zeta_2650_; uint8_t v_zetaDelta_2651_; uint8_t v_zetaUnused_2652_; uint8_t v_zetaHave_2653_; uint8_t v_canUnfoldPredicateConfig_2654_; lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2733_; 
v___x_2635_ = l_Lean_Meta_Context_config(v___y_2554_);
v_foApprox_2636_ = lean_ctor_get_uint8(v___x_2635_, 0);
v_ctxApprox_2637_ = lean_ctor_get_uint8(v___x_2635_, 1);
v_quasiPatternApprox_2638_ = lean_ctor_get_uint8(v___x_2635_, 2);
v_constApprox_2639_ = lean_ctor_get_uint8(v___x_2635_, 3);
v_isDefEqStuckEx_2640_ = lean_ctor_get_uint8(v___x_2635_, 4);
v_unificationHints_2641_ = lean_ctor_get_uint8(v___x_2635_, 5);
v_assignSyntheticOpaque_2642_ = lean_ctor_get_uint8(v___x_2635_, 7);
v_offsetCnstrs_2643_ = lean_ctor_get_uint8(v___x_2635_, 8);
v_transparency_2644_ = lean_ctor_get_uint8(v___x_2635_, 9);
v_etaStruct_2645_ = lean_ctor_get_uint8(v___x_2635_, 10);
v_univApprox_2646_ = lean_ctor_get_uint8(v___x_2635_, 11);
v_iota_2647_ = lean_ctor_get_uint8(v___x_2635_, 12);
v_beta_2648_ = lean_ctor_get_uint8(v___x_2635_, 13);
v_proj_2649_ = lean_ctor_get_uint8(v___x_2635_, 14);
v_zeta_2650_ = lean_ctor_get_uint8(v___x_2635_, 15);
v_zetaDelta_2651_ = lean_ctor_get_uint8(v___x_2635_, 16);
v_zetaUnused_2652_ = lean_ctor_get_uint8(v___x_2635_, 17);
v_zetaHave_2653_ = lean_ctor_get_uint8(v___x_2635_, 18);
v_canUnfoldPredicateConfig_2654_ = lean_ctor_get_uint8(v___x_2635_, 19);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2656_ = v___x_2635_;
v_isShared_2657_ = v_isSharedCheck_2733_;
goto v_resetjp_2655_;
}
else
{
lean_dec(v___x_2635_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2733_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
uint8_t v_trackZetaDelta_2658_; lean_object* v_zetaDeltaSet_2659_; lean_object* v_lctx_2660_; lean_object* v_localInstances_2661_; lean_object* v_defEqCtx_x3f_2662_; lean_object* v_synthPendingDepth_2663_; lean_object* v_customCanUnfoldPredicate_x3f_2664_; uint8_t v_univApprox_2665_; uint8_t v_inTypeClassResolution_2666_; uint8_t v_cacheInferType_2667_; lean_object* v_rewriteSet_x3f_2668_; uint8_t v_rewriteFuelScope_2669_; uint8_t v___x_2670_; lean_object* v___x_2672_; 
v_trackZetaDelta_2658_ = lean_ctor_get_uint8(v___y_2554_, sizeof(void*)*8);
v_zetaDeltaSet_2659_ = lean_ctor_get(v___y_2554_, 1);
v_lctx_2660_ = lean_ctor_get(v___y_2554_, 2);
v_localInstances_2661_ = lean_ctor_get(v___y_2554_, 3);
v_defEqCtx_x3f_2662_ = lean_ctor_get(v___y_2554_, 4);
v_synthPendingDepth_2663_ = lean_ctor_get(v___y_2554_, 5);
v_customCanUnfoldPredicate_x3f_2664_ = lean_ctor_get(v___y_2554_, 6);
v_univApprox_2665_ = lean_ctor_get_uint8(v___y_2554_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_2666_ = lean_ctor_get_uint8(v___y_2554_, sizeof(void*)*8 + 2);
v_cacheInferType_2667_ = lean_ctor_get_uint8(v___y_2554_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_2668_ = lean_ctor_get(v___y_2554_, 7);
v_rewriteFuelScope_2669_ = lean_ctor_get_uint8(v___y_2554_, sizeof(void*)*8 + 4);
v___x_2670_ = 0;
if (v_isShared_2657_ == 0)
{
v___x_2672_ = v___x_2656_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 0, v_foApprox_2636_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 1, v_ctxApprox_2637_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 2, v_quasiPatternApprox_2638_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 3, v_constApprox_2639_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 4, v_isDefEqStuckEx_2640_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 5, v_unificationHints_2641_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 7, v_assignSyntheticOpaque_2642_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 8, v_offsetCnstrs_2643_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 9, v_transparency_2644_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 10, v_etaStruct_2645_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 11, v_univApprox_2646_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 12, v_iota_2647_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 13, v_beta_2648_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 14, v_proj_2649_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 15, v_zeta_2650_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 16, v_zetaDelta_2651_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 17, v_zetaUnused_2652_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 18, v_zetaHave_2653_);
lean_ctor_set_uint8(v_reuseFailAlloc_2732_, 19, v_canUnfoldPredicateConfig_2654_);
v___x_2672_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
uint64_t v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; uint8_t v_transparency_2677_; lean_object* v___x_2678_; lean_object* v___y_2680_; uint8_t v___x_2726_; uint8_t v___x_2727_; 
lean_ctor_set_uint8(v___x_2672_, 6, v___x_2670_);
v___x_2673_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2672_);
v___x_2674_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2674_, 0, v___x_2672_);
lean_ctor_set_uint64(v___x_2674_, sizeof(void*)*1, v___x_2673_);
lean_inc(v_rewriteSet_x3f_2668_);
lean_inc(v_customCanUnfoldPredicate_x3f_2664_);
lean_inc(v_synthPendingDepth_2663_);
lean_inc(v_defEqCtx_x3f_2662_);
lean_inc_ref(v_localInstances_2661_);
lean_inc_ref(v_lctx_2660_);
lean_inc(v_zetaDeltaSet_2659_);
lean_inc_ref(v___x_2674_);
v___x_2675_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_2675_, 0, v___x_2674_);
lean_ctor_set(v___x_2675_, 1, v_zetaDeltaSet_2659_);
lean_ctor_set(v___x_2675_, 2, v_lctx_2660_);
lean_ctor_set(v___x_2675_, 3, v_localInstances_2661_);
lean_ctor_set(v___x_2675_, 4, v_defEqCtx_x3f_2662_);
lean_ctor_set(v___x_2675_, 5, v_synthPendingDepth_2663_);
lean_ctor_set(v___x_2675_, 6, v_customCanUnfoldPredicate_x3f_2664_);
lean_ctor_set(v___x_2675_, 7, v_rewriteSet_x3f_2668_);
lean_ctor_set_uint8(v___x_2675_, sizeof(void*)*8, v_trackZetaDelta_2658_);
lean_ctor_set_uint8(v___x_2675_, sizeof(void*)*8 + 1, v_univApprox_2665_);
lean_ctor_set_uint8(v___x_2675_, sizeof(void*)*8 + 2, v_inTypeClassResolution_2666_);
lean_ctor_set_uint8(v___x_2675_, sizeof(void*)*8 + 3, v_cacheInferType_2667_);
lean_ctor_set_uint8(v___x_2675_, sizeof(void*)*8 + 4, v_rewriteFuelScope_2669_);
v___x_2676_ = l_Lean_Meta_Context_config(v___x_2675_);
v_transparency_2677_ = lean_ctor_get_uint8(v___x_2676_, 9);
lean_dec_ref(v___x_2676_);
v___x_2678_ = lean_array_get_borrowed(v___x_2593_, v_params_2549_, v_val_2631_);
lean_dec(v_val_2631_);
v___x_2726_ = 2;
v___x_2727_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2677_, v___x_2726_);
if (v___x_2727_ == 0)
{
lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; 
lean_dec_ref_known(v___x_2675_, 8);
v___x_2728_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2726_, v___x_2674_);
lean_inc(v_rewriteSet_x3f_2668_);
lean_inc(v_customCanUnfoldPredicate_x3f_2664_);
lean_inc(v_synthPendingDepth_2663_);
lean_inc(v_defEqCtx_x3f_2662_);
lean_inc_ref(v_localInstances_2661_);
lean_inc_ref(v_lctx_2660_);
lean_inc(v_zetaDeltaSet_2659_);
v___x_2729_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_2729_, 0, v___x_2728_);
lean_ctor_set(v___x_2729_, 1, v_zetaDeltaSet_2659_);
lean_ctor_set(v___x_2729_, 2, v_lctx_2660_);
lean_ctor_set(v___x_2729_, 3, v_localInstances_2661_);
lean_ctor_set(v___x_2729_, 4, v_defEqCtx_x3f_2662_);
lean_ctor_set(v___x_2729_, 5, v_synthPendingDepth_2663_);
lean_ctor_set(v___x_2729_, 6, v_customCanUnfoldPredicate_x3f_2664_);
lean_ctor_set(v___x_2729_, 7, v_rewriteSet_x3f_2668_);
lean_ctor_set_uint8(v___x_2729_, sizeof(void*)*8, v_trackZetaDelta_2658_);
lean_ctor_set_uint8(v___x_2729_, sizeof(void*)*8 + 1, v_univApprox_2665_);
lean_ctor_set_uint8(v___x_2729_, sizeof(void*)*8 + 2, v_inTypeClassResolution_2666_);
lean_ctor_set_uint8(v___x_2729_, sizeof(void*)*8 + 3, v_cacheInferType_2667_);
lean_ctor_set_uint8(v___x_2729_, sizeof(void*)*8 + 4, v_rewriteFuelScope_2669_);
lean_inc(v___x_2627_);
lean_inc(v___x_2678_);
v___x_2730_ = l_Lean_Meta_isExprDefEq(v___x_2678_, v___x_2627_, v___x_2729_, v___y_2555_, v___y_2556_, v___y_2557_);
lean_dec_ref_known(v___x_2729_, 8);
v___y_2680_ = v___x_2730_;
goto v___jp_2679_;
}
else
{
lean_object* v___x_2731_; 
lean_dec_ref_known(v___x_2674_, 1);
lean_inc(v___x_2627_);
lean_inc(v___x_2678_);
v___x_2731_ = l_Lean_Meta_isExprDefEq(v___x_2678_, v___x_2627_, v___x_2675_, v___y_2555_, v___y_2556_, v___y_2557_);
lean_dec_ref_known(v___x_2675_, 8);
v___y_2680_ = v___x_2731_;
goto v___jp_2679_;
}
v___jp_2679_:
{
if (lean_obj_tag(v___y_2680_) == 0)
{
lean_object* v_a_2681_; uint8_t v___x_2682_; 
v_a_2681_ = lean_ctor_get(v___y_2680_, 0);
lean_inc(v_a_2681_);
lean_dec_ref_known(v___y_2680_, 1);
v___x_2682_ = lean_unbox(v_a_2681_);
lean_dec(v_a_2681_);
if (v___x_2682_ == 0)
{
lean_object* v_toCold_2683_; lean_object* v_options_2684_; uint8_t v_hasTrace_2685_; 
v_toCold_2683_ = lean_ctor_get(v___y_2556_, 0);
v_options_2684_ = lean_ctor_get(v_toCold_2683_, 2);
v_hasTrace_2685_ = lean_ctor_get_uint8(v_options_2684_, sizeof(void*)*1);
if (v_hasTrace_2685_ == 0)
{
lean_del_object(v___x_2633_);
goto v___jp_2591_;
}
else
{
lean_object* v_inheritedTraceOptions_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; uint8_t v___x_2689_; 
v_inheritedTraceOptions_2686_ = lean_ctor_get(v_toCold_2683_, 11);
v___x_2687_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2688_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2689_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2686_, v_options_2684_, v___x_2688_);
if (v___x_2689_ == 0)
{
lean_del_object(v___x_2633_);
goto v___jp_2591_;
}
else
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2693_; 
v___x_2690_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2544_);
v___x_2691_ = l_Nat_reprFast(v_val_2544_);
if (v_isShared_2634_ == 0)
{
lean_ctor_set_tag(v___x_2633_, 3);
lean_ctor_set(v___x_2633_, 0, v___x_2691_);
v___x_2693_ = v___x_2633_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v___x_2691_);
v___x_2693_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; 
v___x_2694_ = l_Lean_MessageData_ofFormat(v___x_2693_);
v___x_2695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2690_);
lean_ctor_set(v___x_2695_, 1, v___x_2694_);
v___x_2696_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2695_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
lean_inc(v_a_2552_);
v___x_2698_ = l_Nat_reprFast(v_a_2552_);
v___x_2699_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2698_);
v___x_2700_ = l_Lean_MessageData_ofFormat(v___x_2699_);
v___x_2701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2697_);
lean_ctor_set(v___x_2701_, 1, v___x_2700_);
v___x_2702_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2703_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2701_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
lean_inc_ref(v_e_2547_);
v___x_2704_ = l_Lean_MessageData_ofExpr(v_e_2547_);
v___x_2705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2703_);
lean_ctor_set(v___x_2705_, 1, v___x_2704_);
v___x_2706_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_2707_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2705_);
lean_ctor_set(v___x_2707_, 1, v___x_2706_);
lean_inc(v___x_2678_);
v___x_2708_ = l_Lean_MessageData_ofExpr(v___x_2678_);
v___x_2709_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2707_);
lean_ctor_set(v___x_2709_, 1, v___x_2708_);
v___x_2710_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17);
v___x_2711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2709_);
lean_ctor_set(v___x_2711_, 1, v___x_2710_);
lean_inc(v___x_2627_);
v___x_2712_ = l_Lean_MessageData_ofExpr(v___x_2627_);
v___x_2713_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2711_);
lean_ctor_set(v___x_2713_, 1, v___x_2712_);
v___x_2714_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2687_, v___x_2713_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
if (lean_obj_tag(v___x_2714_) == 0)
{
lean_object* v_a_2715_; lean_object* v___x_2716_; 
v_a_2715_ = lean_ctor_get(v___x_2714_, 0);
lean_inc(v_a_2715_);
lean_dec_ref_known(v___x_2714_, 1);
lean_inc(v_a_2552_);
v___x_2716_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2543_, v_val_2544_, v_a_2552_, v___x_2586_, v_a_2715_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
v___y_2565_ = v___x_2716_;
goto v___jp_2564_;
}
else
{
lean_dec(v_a_2552_);
lean_dec_ref(v_e_2547_);
lean_dec(v_val_2544_);
return v___x_2714_;
}
}
}
}
}
else
{
lean_del_object(v___x_2633_);
v_a_2560_ = v___x_2586_;
goto v___jp_2559_;
}
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
lean_del_object(v___x_2633_);
lean_dec(v_a_2552_);
lean_dec_ref(v_e_2547_);
lean_dec(v_val_2544_);
v_a_2718_ = lean_ctor_get(v___y_2680_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___y_2680_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v___y_2680_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___y_2680_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
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
lean_object* v___x_2735_; uint8_t v___x_2736_; lean_object* v___x_2737_; 
lean_dec(v___x_2630_);
v___x_2735_ = lean_unsigned_to_nat(0u);
v___x_2736_ = 0;
lean_inc(v___x_2627_);
lean_inc(v_a_2552_);
v___x_2737_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2543_, v_val_2544_, v_a_2552_, v_next_2548_, v___x_2550_, v___x_2551_, v___x_2550_, v_params_2549_, v___x_2627_, v___x_2735_, v___x_2736_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v_a_2738_; uint8_t v___x_2739_; 
v_a_2738_ = lean_ctor_get(v___x_2737_, 0);
lean_inc(v_a_2738_);
lean_dec_ref_known(v___x_2737_, 1);
v___x_2739_ = lean_unbox(v_a_2738_);
lean_dec(v_a_2738_);
if (v___x_2739_ == 0)
{
lean_object* v_toCold_2740_; lean_object* v_options_2741_; uint8_t v_hasTrace_2742_; 
v_toCold_2740_ = lean_ctor_get(v___y_2556_, 0);
v_options_2741_ = lean_ctor_get(v_toCold_2740_, 2);
v_hasTrace_2742_ = lean_ctor_get_uint8(v_options_2741_, sizeof(void*)*1);
if (v_hasTrace_2742_ == 0)
{
goto v___jp_2587_;
}
else
{
lean_object* v_inheritedTraceOptions_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; uint8_t v___x_2746_; 
v_inheritedTraceOptions_2743_ = lean_ctor_get(v_toCold_2740_, 11);
v___x_2744_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2745_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2746_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2743_, v_options_2741_, v___x_2745_);
if (v___x_2746_ == 0)
{
goto v___jp_2587_;
}
else
{
lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2747_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2544_);
v___x_2748_ = l_Nat_reprFast(v_val_2544_);
v___x_2749_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2748_);
v___x_2750_ = l_Lean_MessageData_ofFormat(v___x_2749_);
v___x_2751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2747_);
lean_ctor_set(v___x_2751_, 1, v___x_2750_);
v___x_2752_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2751_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
lean_inc(v_a_2552_);
v___x_2754_ = l_Nat_reprFast(v_a_2552_);
v___x_2755_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2754_);
v___x_2756_ = l_Lean_MessageData_ofFormat(v___x_2755_);
v___x_2757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2753_);
lean_ctor_set(v___x_2757_, 1, v___x_2756_);
v___x_2758_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2757_);
lean_ctor_set(v___x_2759_, 1, v___x_2758_);
lean_inc_ref(v_e_2547_);
v___x_2760_ = l_Lean_MessageData_ofExpr(v_e_2547_);
v___x_2761_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2759_);
lean_ctor_set(v___x_2761_, 1, v___x_2760_);
v___x_2762_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_2763_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2763_, 0, v___x_2761_);
lean_ctor_set(v___x_2763_, 1, v___x_2762_);
lean_inc(v___x_2627_);
v___x_2764_ = l_Lean_MessageData_ofExpr(v___x_2627_);
v___x_2765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2763_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19);
v___x_2767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2765_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
v___x_2768_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2744_, v___x_2767_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
if (lean_obj_tag(v___x_2768_) == 0)
{
lean_object* v_a_2769_; lean_object* v___x_2770_; 
v_a_2769_ = lean_ctor_get(v___x_2768_, 0);
lean_inc(v_a_2769_);
lean_dec_ref_known(v___x_2768_, 1);
lean_inc(v_a_2552_);
v___x_2770_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2543_, v_val_2544_, v_a_2552_, v___x_2586_, v_a_2769_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
v___y_2565_ = v___x_2770_;
goto v___jp_2564_;
}
else
{
lean_dec(v_a_2552_);
lean_dec_ref(v_e_2547_);
lean_dec(v_val_2544_);
return v___x_2768_;
}
}
}
}
else
{
v_a_2560_ = v___x_2586_;
goto v___jp_2559_;
}
}
else
{
lean_object* v_a_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2778_; 
lean_dec(v_a_2552_);
lean_dec_ref(v_e_2547_);
lean_dec(v_val_2544_);
v_a_2771_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2778_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2773_ = v___x_2737_;
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v___x_2737_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2776_; 
if (v_isShared_2774_ == 0)
{
v___x_2776_ = v___x_2773_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v_a_2771_);
v___x_2776_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
return v___x_2776_;
}
}
}
}
}
else
{
lean_object* v_a_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2786_; 
lean_dec(v_a_2552_);
lean_dec_ref(v_e_2547_);
lean_dec(v_val_2544_);
v_a_2779_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2781_ = v___x_2628_;
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_a_2779_);
lean_dec(v___x_2628_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2784_; 
if (v_isShared_2782_ == 0)
{
v___x_2784_ = v___x_2781_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_a_2779_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
}
}
}
}
else
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2794_; 
lean_dec(v_a_2552_);
lean_dec_ref(v_e_2547_);
lean_dec(v_val_2544_);
v_a_2787_ = lean_ctor_get(v___x_2594_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2594_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2789_ = v___x_2594_;
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2594_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2792_; 
if (v_isShared_2790_ == 0)
{
v___x_2792_ = v___x_2789_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_a_2787_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
v___jp_2587_:
{
lean_object* v___x_2588_; 
lean_inc(v_a_2552_);
v___x_2588_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2543_, v_val_2544_, v_a_2552_, v___x_2586_, v___x_2586_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
v___y_2565_ = v___x_2588_;
goto v___jp_2564_;
}
v___jp_2589_:
{
lean_object* v___x_2590_; 
lean_inc(v_a_2552_);
v___x_2590_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2543_, v_val_2544_, v_a_2552_, v___x_2586_, v___x_2586_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
v___y_2565_ = v___x_2590_;
goto v___jp_2564_;
}
v___jp_2591_:
{
lean_object* v___x_2592_; 
lean_inc(v_a_2552_);
v___x_2592_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2543_, v_val_2544_, v_a_2552_, v___x_2586_, v___x_2586_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
v___y_2565_ = v___x_2592_;
goto v___jp_2564_;
}
}
v___jp_2559_:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2561_ = lean_unsigned_to_nat(1u);
v___x_2562_ = lean_nat_add(v_a_2552_, v___x_2561_);
lean_dec(v_a_2552_);
v_a_2552_ = v___x_2562_;
v_b_2553_ = v_a_2560_;
goto _start;
}
v___jp_2564_:
{
if (lean_obj_tag(v___y_2565_) == 0)
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2575_; 
v_a_2566_ = lean_ctor_get(v___y_2565_, 0);
v_isSharedCheck_2575_ = !lean_is_exclusive(v___y_2565_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2568_ = v___y_2565_;
v_isShared_2569_ = v_isSharedCheck_2575_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___y_2565_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2575_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
if (lean_obj_tag(v_a_2566_) == 0)
{
lean_object* v_a_2570_; lean_object* v___x_2572_; 
lean_dec(v_a_2552_);
lean_dec_ref(v_e_2547_);
lean_dec(v_val_2544_);
v_a_2570_ = lean_ctor_get(v_a_2566_, 0);
lean_inc(v_a_2570_);
lean_dec_ref_known(v_a_2566_, 1);
if (v_isShared_2569_ == 0)
{
lean_ctor_set(v___x_2568_, 0, v_a_2570_);
v___x_2572_ = v___x_2568_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2570_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
else
{
lean_object* v_a_2574_; 
lean_del_object(v___x_2568_);
v_a_2574_ = lean_ctor_get(v_a_2566_, 0);
lean_inc(v_a_2574_);
lean_dec_ref_known(v_a_2566_, 1);
v_a_2560_ = v_a_2574_;
goto v___jp_2559_;
}
}
}
else
{
lean_object* v_a_2576_; lean_object* v___x_2578_; uint8_t v_isShared_2579_; uint8_t v_isSharedCheck_2583_; 
lean_dec(v_a_2552_);
lean_dec_ref(v_e_2547_);
lean_dec(v_val_2544_);
v_a_2576_ = lean_ctor_get(v___y_2565_, 0);
v_isSharedCheck_2583_ = !lean_is_exclusive(v___y_2565_);
if (v_isSharedCheck_2583_ == 0)
{
v___x_2578_ = v___y_2565_;
v_isShared_2579_ = v_isSharedCheck_2583_;
goto v_resetjp_2577_;
}
else
{
lean_inc(v_a_2576_);
lean_dec(v___y_2565_);
v___x_2578_ = lean_box(0);
v_isShared_2579_ = v_isSharedCheck_2583_;
goto v_resetjp_2577_;
}
v_resetjp_2577_:
{
lean_object* v___x_2581_; 
if (v_isShared_2579_ == 0)
{
v___x_2581_ = v___x_2578_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v_a_2576_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
return v___x_2581_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___boxed(lean_object* v_val_2795_, lean_object* v_val_2796_, lean_object* v_upperBound_2797_, lean_object* v_args_2798_, lean_object* v_e_2799_, lean_object* v_next_2800_, lean_object* v_params_2801_, lean_object* v___x_2802_, lean_object* v___x_2803_, lean_object* v_a_2804_, lean_object* v_b_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_2795_, v_val_2796_, v_upperBound_2797_, v_args_2798_, v_e_2799_, v_next_2800_, v_params_2801_, v___x_2802_, v___x_2803_, v_a_2804_, v_b_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
lean_dec(v___x_2803_);
lean_dec(v___x_2802_);
lean_dec_ref(v_params_2801_);
lean_dec(v_next_2800_);
lean_dec_ref(v_args_2798_);
lean_dec(v_upperBound_2797_);
lean_dec(v_val_2795_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object* v_preDefs_2814_, lean_object* v___x_2815_, lean_object* v_val_2816_, lean_object* v_e_2817_, lean_object* v_next_2818_, lean_object* v_params_2819_, lean_object* v___x_2820_, lean_object* v___x_2821_, lean_object* v_x_2822_, lean_object* v_x_2823_, lean_object* v_x_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
if (lean_obj_tag(v_x_2822_) == 5)
{
lean_object* v_fn_2830_; lean_object* v_arg_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
v_fn_2830_ = lean_ctor_get(v_x_2822_, 0);
lean_inc_ref(v_fn_2830_);
v_arg_2831_ = lean_ctor_get(v_x_2822_, 1);
lean_inc_ref(v_arg_2831_);
lean_dec_ref_known(v_x_2822_, 2);
v___x_2832_ = lean_array_set(v_x_2823_, v_x_2824_, v_arg_2831_);
v___x_2833_ = lean_unsigned_to_nat(1u);
v___x_2834_ = lean_nat_sub(v_x_2824_, v___x_2833_);
lean_dec(v_x_2824_);
v_x_2822_ = v_fn_2830_;
v_x_2823_ = v___x_2832_;
v_x_2824_ = v___x_2834_;
goto _start;
}
else
{
uint8_t v___x_2836_; 
lean_dec(v_x_2824_);
v___x_2836_ = l_Lean_Expr_isConst(v_x_2822_);
if (v___x_2836_ == 0)
{
lean_object* v___x_2837_; lean_object* v___x_2838_; 
lean_dec_ref(v_x_2823_);
lean_dec_ref(v_x_2822_);
lean_dec_ref(v_e_2817_);
v___x_2837_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2837_);
return v___x_2838_;
}
else
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___x_2839_ = l_Lean_Expr_constName_x21(v_x_2822_);
lean_dec_ref(v_x_2822_);
v___x_2840_ = lean_unsigned_to_nat(0u);
v___x_2841_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_2839_, v_preDefs_2814_, v___x_2840_);
lean_dec(v___x_2839_);
if (lean_obj_tag(v___x_2841_) == 1)
{
lean_object* v_val_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v_val_2842_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_val_2842_);
lean_dec_ref_known(v___x_2841_, 1);
v___x_2843_ = lean_box(0);
v___x_2844_ = lean_array_get_borrowed(v___x_2840_, v___x_2815_, v_val_2842_);
v___x_2845_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_2816_, v_val_2842_, v___x_2844_, v_x_2823_, v_e_2817_, v_next_2818_, v_params_2819_, v___x_2820_, v___x_2821_, v___x_2840_, v___x_2843_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
lean_dec_ref(v_x_2823_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2853_; 
v_isSharedCheck_2853_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2853_ == 0)
{
lean_object* v_unused_2854_; 
v_unused_2854_ = lean_ctor_get(v___x_2845_, 0);
lean_dec(v_unused_2854_);
v___x_2847_ = v___x_2845_;
v_isShared_2848_ = v_isSharedCheck_2853_;
goto v_resetjp_2846_;
}
else
{
lean_dec(v___x_2845_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2853_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2849_; lean_object* v___x_2851_; 
v___x_2849_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 0, v___x_2849_);
v___x_2851_ = v___x_2847_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v___x_2849_);
v___x_2851_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
return v___x_2851_;
}
}
}
else
{
lean_object* v_a_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2862_; 
v_a_2855_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2862_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2862_ == 0)
{
v___x_2857_ = v___x_2845_;
v_isShared_2858_ = v_isSharedCheck_2862_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_a_2855_);
lean_dec(v___x_2845_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2862_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2860_; 
if (v_isShared_2858_ == 0)
{
v___x_2860_ = v___x_2857_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v_a_2855_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
}
else
{
lean_object* v___x_2863_; lean_object* v___x_2864_; 
lean_dec(v___x_2841_);
lean_dec_ref(v_x_2823_);
lean_dec_ref(v_e_2817_);
v___x_2863_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_2864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2863_);
return v___x_2864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object* v_preDefs_2865_, lean_object* v___x_2866_, lean_object* v_val_2867_, lean_object* v_e_2868_, lean_object* v_next_2869_, lean_object* v_params_2870_, lean_object* v___x_2871_, lean_object* v___x_2872_, lean_object* v_x_2873_, lean_object* v_x_2874_, lean_object* v_x_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_){
_start:
{
lean_object* v_res_2881_; 
v_res_2881_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_2865_, v___x_2866_, v_val_2867_, v_e_2868_, v_next_2869_, v_params_2870_, v___x_2871_, v___x_2872_, v_x_2873_, v_x_2874_, v_x_2875_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_);
lean_dec(v___y_2879_);
lean_dec_ref(v___y_2878_);
lean_dec(v___y_2877_);
lean_dec_ref(v___y_2876_);
lean_dec(v___x_2872_);
lean_dec(v___x_2871_);
lean_dec_ref(v_params_2870_);
lean_dec(v_next_2869_);
lean_dec(v_val_2867_);
lean_dec_ref(v___x_2866_);
lean_dec_ref(v_preDefs_2865_);
return v_res_2881_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(lean_object* v_preDefs_2882_, lean_object* v___x_2883_, lean_object* v_val_2884_, lean_object* v_a_2885_, lean_object* v_params_2886_, lean_object* v___x_2887_, lean_object* v___x_2888_, lean_object* v_e_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
lean_object* v_dummy_2895_; lean_object* v_nargs_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v_dummy_2895_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1);
v_nargs_2896_ = l_Lean_Expr_getAppNumArgs(v_e_2889_);
lean_inc(v_nargs_2896_);
v___x_2897_ = lean_mk_array(v_nargs_2896_, v_dummy_2895_);
v___x_2898_ = lean_unsigned_to_nat(1u);
v___x_2899_ = lean_nat_sub(v_nargs_2896_, v___x_2898_);
lean_dec(v_nargs_2896_);
lean_inc_ref(v_e_2889_);
v___x_2900_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_2882_, v___x_2883_, v_val_2884_, v_e_2889_, v_a_2885_, v_params_2886_, v___x_2887_, v___x_2888_, v_e_2889_, v___x_2897_, v___x_2899_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_);
return v___x_2900_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed(lean_object* v_preDefs_2901_, lean_object* v___x_2902_, lean_object* v_val_2903_, lean_object* v_a_2904_, lean_object* v_params_2905_, lean_object* v___x_2906_, lean_object* v___x_2907_, lean_object* v_e_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_){
_start:
{
lean_object* v_res_2914_; 
v_res_2914_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(v_preDefs_2901_, v___x_2902_, v_val_2903_, v_a_2904_, v_params_2905_, v___x_2906_, v___x_2907_, v_e_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_);
lean_dec(v___y_2912_);
lean_dec_ref(v___y_2911_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
lean_dec(v___x_2907_);
lean_dec(v___x_2906_);
lean_dec_ref(v_params_2905_);
lean_dec(v_a_2904_);
lean_dec(v_val_2903_);
lean_dec_ref(v___x_2902_);
lean_dec_ref(v_preDefs_2901_);
return v_res_2914_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2918_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2));
v___x_2919_ = lean_unsigned_to_nat(6u);
v___x_2920_ = lean_unsigned_to_nat(201u);
v___x_2921_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1));
v___x_2922_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_2923_ = l_mkPanicMessageWithDecl(v___x_2922_, v___x_2921_, v___x_2920_, v___x_2919_, v___x_2918_);
return v___x_2923_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(lean_object* v___x_2924_, lean_object* v___x_2925_, lean_object* v_a_2926_, lean_object* v_preDefs_2927_, lean_object* v_val_2928_, lean_object* v___f_2929_, lean_object* v___x_2930_, lean_object* v_params_2931_, lean_object* v_body_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_){
_start:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; uint8_t v___x_2940_; 
v___x_2938_ = lean_array_get_size(v_params_2931_);
v___x_2939_ = lean_array_get(v___x_2924_, v___x_2925_, v_a_2926_);
v___x_2940_ = lean_nat_dec_eq(v___x_2938_, v___x_2939_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
lean_dec(v___x_2939_);
lean_dec_ref(v_body_2932_);
lean_dec_ref(v_params_2931_);
lean_dec_ref(v___f_2929_);
lean_dec(v_val_2928_);
lean_dec_ref(v_preDefs_2927_);
lean_dec(v_a_2926_);
lean_dec_ref(v___x_2925_);
v___x_2941_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3);
v___x_2942_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_2941_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_);
return v___x_2942_;
}
else
{
lean_object* v___f_2943_; uint8_t v___x_2944_; lean_object* v___x_2945_; 
v___f_2943_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed), 13, 7);
lean_closure_set(v___f_2943_, 0, v_preDefs_2927_);
lean_closure_set(v___f_2943_, 1, v___x_2925_);
lean_closure_set(v___f_2943_, 2, v_val_2928_);
lean_closure_set(v___f_2943_, 3, v_a_2926_);
lean_closure_set(v___f_2943_, 4, v_params_2931_);
lean_closure_set(v___f_2943_, 5, v___x_2938_);
lean_closure_set(v___f_2943_, 6, v___x_2939_);
v___x_2944_ = 0;
v___x_2945_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_body_2932_, v___f_2943_, v___f_2929_, v___x_2944_, v___x_2940_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2952_; 
v_isSharedCheck_2952_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2952_ == 0)
{
lean_object* v_unused_2953_; 
v_unused_2953_ = lean_ctor_get(v___x_2945_, 0);
lean_dec(v_unused_2953_);
v___x_2947_ = v___x_2945_;
v_isShared_2948_ = v_isSharedCheck_2952_;
goto v_resetjp_2946_;
}
else
{
lean_dec(v___x_2945_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2952_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2950_; 
if (v_isShared_2948_ == 0)
{
lean_ctor_set(v___x_2947_, 0, v___x_2930_);
v___x_2950_ = v___x_2947_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v___x_2930_);
v___x_2950_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
return v___x_2950_;
}
}
}
else
{
lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2961_; 
v_a_2954_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2956_ = v___x_2945_;
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v___x_2945_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2959_; 
if (v_isShared_2957_ == 0)
{
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2954_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
return v___x_2959_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed(lean_object* v___x_2962_, lean_object* v___x_2963_, lean_object* v_a_2964_, lean_object* v_preDefs_2965_, lean_object* v_val_2966_, lean_object* v___f_2967_, lean_object* v___x_2968_, lean_object* v_params_2969_, lean_object* v_body_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_){
_start:
{
lean_object* v_res_2976_; 
v_res_2976_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(v___x_2962_, v___x_2963_, v_a_2964_, v_preDefs_2965_, v_val_2966_, v___f_2967_, v___x_2968_, v_params_2969_, v_body_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_);
lean_dec(v___y_2974_);
lean_dec_ref(v___y_2973_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___x_2962_);
return v_res_2976_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(lean_object* v_e_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_){
_start:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2983_, 0, v_e_2977_);
v___x_2984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2983_);
return v___x_2984_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed(lean_object* v_e_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_){
_start:
{
lean_object* v_res_2991_; 
v_res_2991_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(v_e_2985_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(lean_object* v___x_2993_, lean_object* v_preDefs_2994_, lean_object* v_val_2995_, lean_object* v_upperBound_2996_, lean_object* v_a_2997_, lean_object* v_b_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_){
_start:
{
uint8_t v___x_3004_; 
v___x_3004_ = lean_nat_dec_lt(v_a_2997_, v_upperBound_2996_);
if (v___x_3004_ == 0)
{
lean_object* v___x_3005_; 
lean_dec(v_a_2997_);
lean_dec(v_val_2995_);
lean_dec_ref(v_preDefs_2994_);
lean_dec_ref(v___x_2993_);
v___x_3005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3005_, 0, v_b_2998_);
return v___x_3005_;
}
else
{
lean_object* v___x_3006_; lean_object* v_value_3007_; lean_object* v___f_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___f_3011_; uint8_t v___x_3012_; lean_object* v___x_3013_; 
v___x_3006_ = lean_array_fget_borrowed(v_preDefs_2994_, v_a_2997_);
v_value_3007_ = lean_ctor_get(v___x_3006_, 7);
v___f_3008_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0));
v___x_3009_ = lean_unsigned_to_nat(0u);
v___x_3010_ = lean_box(0);
lean_inc(v_val_2995_);
lean_inc_ref(v_preDefs_2994_);
lean_inc(v_a_2997_);
lean_inc_ref(v___x_2993_);
v___f_3011_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed), 14, 7);
lean_closure_set(v___f_3011_, 0, v___x_3009_);
lean_closure_set(v___f_3011_, 1, v___x_2993_);
lean_closure_set(v___f_3011_, 2, v_a_2997_);
lean_closure_set(v___f_3011_, 3, v_preDefs_2994_);
lean_closure_set(v___f_3011_, 4, v_val_2995_);
lean_closure_set(v___f_3011_, 5, v___f_3008_);
lean_closure_set(v___f_3011_, 6, v___x_3010_);
v___x_3012_ = 0;
lean_inc_ref(v_value_3007_);
v___x_3013_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_3007_, v___f_3011_, v___x_3012_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v___x_3014_; lean_object* v___x_3015_; 
lean_dec_ref_known(v___x_3013_, 1);
v___x_3014_ = lean_unsigned_to_nat(1u);
v___x_3015_ = lean_nat_add(v_a_2997_, v___x_3014_);
lean_dec(v_a_2997_);
v_a_2997_ = v___x_3015_;
v_b_2998_ = v___x_3010_;
goto _start;
}
else
{
lean_dec(v_a_2997_);
lean_dec(v_val_2995_);
lean_dec_ref(v_preDefs_2994_);
lean_dec_ref(v___x_2993_);
return v___x_3013_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___boxed(lean_object* v___x_3017_, lean_object* v_preDefs_3018_, lean_object* v_val_3019_, lean_object* v_upperBound_3020_, lean_object* v_a_3021_, lean_object* v_b_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_){
_start:
{
lean_object* v_res_3028_; 
v_res_3028_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_3017_, v_preDefs_3018_, v_val_3019_, v_upperBound_3020_, v_a_3021_, v_b_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3025_);
lean_dec(v___y_3024_);
lean_dec_ref(v___y_3023_);
lean_dec(v_upperBound_3020_);
return v_res_3028_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamsInfo___closed__1(void){
_start:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3030_ = ((lean_object*)(l_Lean_Elab_getFixedParamsInfo___closed__0));
v___x_3031_ = l_Lean_stringToMessageData(v___x_3030_);
return v___x_3031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object* v_preDefs_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_){
_start:
{
size_t v_sz_3038_; size_t v___x_3039_; lean_object* v___x_3040_; 
v_sz_3038_ = lean_array_size(v_preDefs_3032_);
v___x_3039_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_3032_);
v___x_3040_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_3038_, v___x_3039_, v_preDefs_3032_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_);
if (lean_obj_tag(v___x_3040_) == 0)
{
lean_object* v_a_3041_; size_t v_sz_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
v_a_3041_ = lean_ctor_get(v___x_3040_, 0);
lean_inc_n(v_a_3041_, 2);
lean_dec_ref_known(v___x_3040_, 1);
v_sz_3042_ = lean_array_size(v_a_3041_);
v___x_3043_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_3042_, v___x_3039_, v_a_3041_);
v___x_3044_ = l_Lean_Elab_FixedParams_Info_init(v_a_3041_);
v___x_3045_ = lean_st_mk_ref(v___x_3044_);
v___x_3046_ = lean_st_ref_take(v___x_3045_);
v___x_3047_ = l_Lean_Elab_FixedParams_Info_addSelfCalls(v___x_3046_);
v___x_3048_ = lean_st_ref_put(v___x_3045_, v___x_3047_);
v___x_3049_ = lean_array_get_size(v_preDefs_3032_);
v___x_3050_ = lean_unsigned_to_nat(0u);
v___x_3051_ = lean_box(0);
lean_inc(v___x_3045_);
v___x_3052_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_3043_, v_preDefs_3032_, v___x_3045_, v___x_3049_, v___x_3050_, v___x_3051_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_);
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3092_; 
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_3052_);
if (v_isSharedCheck_3092_ == 0)
{
lean_object* v_unused_3093_; 
v_unused_3093_ = lean_ctor_get(v___x_3052_, 0);
lean_dec(v_unused_3093_);
v___x_3054_ = v___x_3052_;
v_isShared_3055_ = v_isSharedCheck_3092_;
goto v_resetjp_3053_;
}
else
{
lean_dec(v___x_3052_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3092_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v___x_3056_; lean_object* v_toCold_3057_; lean_object* v_options_3058_; uint8_t v_hasTrace_3059_; 
v___x_3056_ = lean_st_ref_get(v___x_3045_);
lean_dec(v___x_3045_);
v_toCold_3057_ = lean_ctor_get(v_a_3035_, 0);
v_options_3058_ = lean_ctor_get(v_toCold_3057_, 2);
v_hasTrace_3059_ = lean_ctor_get_uint8(v_options_3058_, sizeof(void*)*1);
if (v_hasTrace_3059_ == 0)
{
lean_object* v___x_3061_; 
if (v_isShared_3055_ == 0)
{
lean_ctor_set(v___x_3054_, 0, v___x_3056_);
v___x_3061_ = v___x_3054_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v___x_3056_);
v___x_3061_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
return v___x_3061_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; uint8_t v___x_3066_; 
v_inheritedTraceOptions_3063_ = lean_ctor_get(v_toCold_3057_, 11);
v___x_3064_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_3065_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_3066_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3063_, v_options_3058_, v___x_3065_);
if (v___x_3066_ == 0)
{
lean_object* v___x_3068_; 
if (v_isShared_3055_ == 0)
{
lean_ctor_set(v___x_3054_, 0, v___x_3056_);
v___x_3068_ = v___x_3054_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v___x_3056_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
else
{
lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
lean_del_object(v___x_3054_);
v___x_3070_ = lean_obj_once(&l_Lean_Elab_getFixedParamsInfo___closed__1, &l_Lean_Elab_getFixedParamsInfo___closed__1_once, _init_l_Lean_Elab_getFixedParamsInfo___closed__1);
lean_inc(v___x_3056_);
v___x_3071_ = l_Lean_Elab_FixedParams_Info_format(v___x_3056_);
v___x_3072_ = l_Std_Format_indentD(v___x_3071_);
v___x_3073_ = l_Lean_MessageData_ofFormat(v___x_3072_);
v___x_3074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3070_);
lean_ctor_set(v___x_3074_, 1, v___x_3073_);
v___x_3075_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_3064_, v___x_3074_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3082_; 
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3082_ == 0)
{
lean_object* v_unused_3083_; 
v_unused_3083_ = lean_ctor_get(v___x_3075_, 0);
lean_dec(v_unused_3083_);
v___x_3077_ = v___x_3075_;
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
else
{
lean_dec(v___x_3075_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v___x_3080_; 
if (v_isShared_3078_ == 0)
{
lean_ctor_set(v___x_3077_, 0, v___x_3056_);
v___x_3080_ = v___x_3077_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_3056_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
lean_dec(v___x_3056_);
v_a_3084_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_3075_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3075_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3101_; 
lean_dec(v___x_3045_);
v_a_3094_ = lean_ctor_get(v___x_3052_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3052_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3096_ = v___x_3052_;
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v___x_3052_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3094_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
}
else
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
lean_dec_ref(v_preDefs_3032_);
v_a_3102_ = lean_ctor_get(v___x_3040_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3040_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v___x_3040_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3040_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_a_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object* v_preDefs_3110_, lean_object* v_a_3111_, lean_object* v_a_3112_, lean_object* v_a_3113_, lean_object* v_a_3114_, lean_object* v_a_3115_){
_start:
{
lean_object* v_res_3116_; 
v_res_3116_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_3110_, v_a_3111_, v_a_3112_, v_a_3113_, v_a_3114_);
lean_dec(v_a_3114_);
lean_dec_ref(v_a_3113_);
lean_dec(v_a_3112_);
lean_dec_ref(v_a_3111_);
return v_res_3116_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object* v_val_3117_, lean_object* v_val_3118_, lean_object* v_next_3119_, lean_object* v_next_3120_, lean_object* v___x_3121_, lean_object* v___x_3122_, lean_object* v_upperBound_3123_, lean_object* v_params_3124_, lean_object* v___x_3125_, lean_object* v_inst_3126_, lean_object* v_R_3127_, lean_object* v_a_3128_, uint8_t v_b_3129_, lean_object* v_c_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_){
_start:
{
lean_object* v___x_3136_; 
v___x_3136_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_3117_, v_val_3118_, v_next_3119_, v_next_3120_, v___x_3121_, v___x_3122_, v_upperBound_3123_, v_params_3124_, v___x_3125_, v_a_3128_, v_b_3129_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_);
return v___x_3136_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object** _args){
lean_object* v_val_3137_ = _args[0];
lean_object* v_val_3138_ = _args[1];
lean_object* v_next_3139_ = _args[2];
lean_object* v_next_3140_ = _args[3];
lean_object* v___x_3141_ = _args[4];
lean_object* v___x_3142_ = _args[5];
lean_object* v_upperBound_3143_ = _args[6];
lean_object* v_params_3144_ = _args[7];
lean_object* v___x_3145_ = _args[8];
lean_object* v_inst_3146_ = _args[9];
lean_object* v_R_3147_ = _args[10];
lean_object* v_a_3148_ = _args[11];
lean_object* v_b_3149_ = _args[12];
lean_object* v_c_3150_ = _args[13];
lean_object* v___y_3151_ = _args[14];
lean_object* v___y_3152_ = _args[15];
lean_object* v___y_3153_ = _args[16];
lean_object* v___y_3154_ = _args[17];
lean_object* v___y_3155_ = _args[18];
_start:
{
uint8_t v_b_boxed_3156_; lean_object* v_res_3157_; 
v_b_boxed_3156_ = lean_unbox(v_b_3149_);
v_res_3157_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(v_val_3137_, v_val_3138_, v_next_3139_, v_next_3140_, v___x_3141_, v___x_3142_, v_upperBound_3143_, v_params_3144_, v___x_3145_, v_inst_3146_, v_R_3147_, v_a_3148_, v_b_boxed_3156_, v_c_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_);
lean_dec(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec_ref(v_params_3144_);
lean_dec(v_upperBound_3143_);
lean_dec(v___x_3142_);
lean_dec(v___x_3141_);
lean_dec(v_next_3140_);
lean_dec(v_val_3138_);
lean_dec(v_val_3137_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object* v_val_3158_, lean_object* v_val_3159_, lean_object* v_upperBound_3160_, lean_object* v_args_3161_, lean_object* v_e_3162_, lean_object* v_next_3163_, lean_object* v_params_3164_, lean_object* v___x_3165_, lean_object* v___x_3166_, lean_object* v_inst_3167_, lean_object* v_R_3168_, lean_object* v_a_3169_, lean_object* v_b_3170_, lean_object* v_c_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_){
_start:
{
lean_object* v___x_3177_; 
v___x_3177_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_3158_, v_val_3159_, v_upperBound_3160_, v_args_3161_, v_e_3162_, v_next_3163_, v_params_3164_, v___x_3165_, v___x_3166_, v_a_3169_, v_b_3170_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_);
return v___x_3177_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object** _args){
lean_object* v_val_3178_ = _args[0];
lean_object* v_val_3179_ = _args[1];
lean_object* v_upperBound_3180_ = _args[2];
lean_object* v_args_3181_ = _args[3];
lean_object* v_e_3182_ = _args[4];
lean_object* v_next_3183_ = _args[5];
lean_object* v_params_3184_ = _args[6];
lean_object* v___x_3185_ = _args[7];
lean_object* v___x_3186_ = _args[8];
lean_object* v_inst_3187_ = _args[9];
lean_object* v_R_3188_ = _args[10];
lean_object* v_a_3189_ = _args[11];
lean_object* v_b_3190_ = _args[12];
lean_object* v_c_3191_ = _args[13];
lean_object* v___y_3192_ = _args[14];
lean_object* v___y_3193_ = _args[15];
lean_object* v___y_3194_ = _args[16];
lean_object* v___y_3195_ = _args[17];
lean_object* v___y_3196_ = _args[18];
_start:
{
lean_object* v_res_3197_; 
v_res_3197_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(v_val_3178_, v_val_3179_, v_upperBound_3180_, v_args_3181_, v_e_3182_, v_next_3183_, v_params_3184_, v___x_3185_, v___x_3186_, v_inst_3187_, v_R_3188_, v_a_3189_, v_b_3190_, v_c_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec_ref(v___y_3192_);
lean_dec(v___x_3186_);
lean_dec(v___x_3185_);
lean_dec_ref(v_params_3184_);
lean_dec(v_next_3183_);
lean_dec_ref(v_args_3181_);
lean_dec(v_upperBound_3180_);
lean_dec(v_val_3178_);
return v_res_3197_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(lean_object* v___x_3198_, lean_object* v_preDefs_3199_, lean_object* v_val_3200_, lean_object* v_upperBound_3201_, lean_object* v_inst_3202_, lean_object* v_R_3203_, lean_object* v_a_3204_, lean_object* v_b_3205_, lean_object* v_c_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_){
_start:
{
lean_object* v___x_3212_; 
v___x_3212_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_3198_, v_preDefs_3199_, v_val_3200_, v_upperBound_3201_, v_a_3204_, v_b_3205_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_);
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___boxed(lean_object* v___x_3213_, lean_object* v_preDefs_3214_, lean_object* v_val_3215_, lean_object* v_upperBound_3216_, lean_object* v_inst_3217_, lean_object* v_R_3218_, lean_object* v_a_3219_, lean_object* v_b_3220_, lean_object* v_c_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_){
_start:
{
lean_object* v_res_3227_; 
v_res_3227_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(v___x_3213_, v_preDefs_3214_, v_val_3215_, v_upperBound_3216_, v_inst_3217_, v_R_3218_, v_a_3219_, v_b_3220_, v_c_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
lean_dec(v___y_3225_);
lean_dec_ref(v___y_3224_);
lean_dec(v___y_3223_);
lean_dec_ref(v___y_3222_);
lean_dec(v_upperBound_3216_);
return v_res_3227_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object* v_upperBound_3228_, lean_object* v___x_3229_, lean_object* v_pre_3230_, lean_object* v_post_3231_, uint8_t v_usedLetOnly_3232_, uint8_t v_skipConstInApp_3233_, uint8_t v_skipInstances_3234_, lean_object* v___x_3235_, lean_object* v_inst_3236_, lean_object* v_R_3237_, lean_object* v_a_3238_, lean_object* v_b_3239_, lean_object* v_c_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_){
_start:
{
lean_object* v___x_3247_; 
v___x_3247_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v_upperBound_3228_, v___x_3229_, v_pre_3230_, v_post_3231_, v_usedLetOnly_3232_, v_skipConstInApp_3233_, v_skipInstances_3234_, v_a_3238_, v_b_3239_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_);
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object** _args){
lean_object* v_upperBound_3248_ = _args[0];
lean_object* v___x_3249_ = _args[1];
lean_object* v_pre_3250_ = _args[2];
lean_object* v_post_3251_ = _args[3];
lean_object* v_usedLetOnly_3252_ = _args[4];
lean_object* v_skipConstInApp_3253_ = _args[5];
lean_object* v_skipInstances_3254_ = _args[6];
lean_object* v___x_3255_ = _args[7];
lean_object* v_inst_3256_ = _args[8];
lean_object* v_R_3257_ = _args[9];
lean_object* v_a_3258_ = _args[10];
lean_object* v_b_3259_ = _args[11];
lean_object* v_c_3260_ = _args[12];
lean_object* v___y_3261_ = _args[13];
lean_object* v___y_3262_ = _args[14];
lean_object* v___y_3263_ = _args[15];
lean_object* v___y_3264_ = _args[16];
lean_object* v___y_3265_ = _args[17];
lean_object* v___y_3266_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_3267_; uint8_t v_skipConstInApp_boxed_3268_; uint8_t v_skipInstances_boxed_3269_; lean_object* v_res_3270_; 
v_usedLetOnly_boxed_3267_ = lean_unbox(v_usedLetOnly_3252_);
v_skipConstInApp_boxed_3268_ = lean_unbox(v_skipConstInApp_3253_);
v_skipInstances_boxed_3269_ = lean_unbox(v_skipInstances_3254_);
v_res_3270_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_upperBound_3248_, v___x_3249_, v_pre_3250_, v_post_3251_, v_usedLetOnly_boxed_3267_, v_skipConstInApp_boxed_3268_, v_skipInstances_boxed_3269_, v___x_3255_, v_inst_3256_, v_R_3257_, v_a_3258_, v_b_3259_, v_c_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_);
lean_dec(v___y_3265_);
lean_dec_ref(v___y_3264_);
lean_dec(v___y_3263_);
lean_dec_ref(v___y_3262_);
lean_dec(v___y_3261_);
lean_dec(v___x_3255_);
lean_dec_ref(v___x_3249_);
lean_dec(v_upperBound_3248_);
return v_res_3270_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object* v_00_u03b2_3271_, lean_object* v_m_3272_, lean_object* v_a_3273_){
_start:
{
lean_object* v___x_3274_; 
v___x_3274_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_m_3272_, v_a_3273_);
return v___x_3274_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object* v_00_u03b2_3275_, lean_object* v_m_3276_, lean_object* v_a_3277_){
_start:
{
lean_object* v_res_3278_; 
v_res_3278_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(v_00_u03b2_3275_, v_m_3276_, v_a_3277_);
lean_dec_ref(v_a_3277_);
lean_dec_ref(v_m_3276_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object* v_00_u03b1_3279_, lean_object* v_name_3280_, uint8_t v_bi_3281_, lean_object* v_type_3282_, lean_object* v_k_3283_, uint8_t v_kind_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_){
_start:
{
lean_object* v___x_3291_; 
v___x_3291_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_3280_, v_bi_3281_, v_type_3282_, v_k_3283_, v_kind_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
return v___x_3291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object* v_00_u03b1_3292_, lean_object* v_name_3293_, lean_object* v_bi_3294_, lean_object* v_type_3295_, lean_object* v_k_3296_, lean_object* v_kind_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_){
_start:
{
uint8_t v_bi_boxed_3304_; uint8_t v_kind_boxed_3305_; lean_object* v_res_3306_; 
v_bi_boxed_3304_ = lean_unbox(v_bi_3294_);
v_kind_boxed_3305_ = lean_unbox(v_kind_3297_);
v_res_3306_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(v_00_u03b1_3292_, v_name_3293_, v_bi_boxed_3304_, v_type_3295_, v_k_3296_, v_kind_boxed_3305_, v___y_3298_, v___y_3299_, v___y_3300_, v___y_3301_, v___y_3302_);
lean_dec(v___y_3302_);
lean_dec_ref(v___y_3301_);
lean_dec(v___y_3300_);
lean_dec_ref(v___y_3299_);
lean_dec(v___y_3298_);
return v_res_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object* v_00_u03b1_3307_, lean_object* v_name_3308_, lean_object* v_type_3309_, lean_object* v_val_3310_, lean_object* v_k_3311_, uint8_t v_nondep_3312_, uint8_t v_kind_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_){
_start:
{
lean_object* v___x_3320_; 
v___x_3320_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_3308_, v_type_3309_, v_val_3310_, v_k_3311_, v_nondep_3312_, v_kind_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
return v___x_3320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object* v_00_u03b1_3321_, lean_object* v_name_3322_, lean_object* v_type_3323_, lean_object* v_val_3324_, lean_object* v_k_3325_, lean_object* v_nondep_3326_, lean_object* v_kind_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_){
_start:
{
uint8_t v_nondep_boxed_3334_; uint8_t v_kind_boxed_3335_; lean_object* v_res_3336_; 
v_nondep_boxed_3334_ = lean_unbox(v_nondep_3326_);
v_kind_boxed_3335_ = lean_unbox(v_kind_3327_);
v_res_3336_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(v_00_u03b1_3321_, v_name_3322_, v_type_3323_, v_val_3324_, v_k_3325_, v_nondep_boxed_3334_, v_kind_boxed_3335_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_);
lean_dec(v___y_3332_);
lean_dec_ref(v___y_3331_);
lean_dec(v___y_3330_);
lean_dec_ref(v___y_3329_);
lean_dec(v___y_3328_);
return v_res_3336_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object* v_00_u03b1_3337_, lean_object* v_ref_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_){
_start:
{
lean_object* v___x_3344_; 
v___x_3344_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_3338_);
return v___x_3344_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object* v_00_u03b1_3345_, lean_object* v_ref_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_){
_start:
{
lean_object* v_res_3352_; 
v_res_3352_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(v_00_u03b1_3345_, v_ref_3346_, v___y_3347_, v___y_3348_, v___y_3349_, v___y_3350_);
lean_dec(v___y_3350_);
lean_dec_ref(v___y_3349_);
lean_dec(v___y_3348_);
lean_dec_ref(v___y_3347_);
return v_res_3352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object* v_00_u03b1_3353_, lean_object* v_x_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_){
_start:
{
lean_object* v___x_3361_; 
v___x_3361_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_, v___y_3359_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object* v_00_u03b1_3362_, lean_object* v_x_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_){
_start:
{
lean_object* v_res_3370_; 
v_res_3370_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(v_00_u03b1_3362_, v_x_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_);
lean_dec(v___y_3368_);
lean_dec_ref(v___y_3367_);
lean_dec(v___y_3366_);
lean_dec_ref(v___y_3365_);
lean_dec(v___y_3364_);
return v_res_3370_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object* v_00_u03b2_3371_, lean_object* v_m_3372_, lean_object* v_a_3373_, lean_object* v_b_3374_){
_start:
{
lean_object* v___x_3375_; 
v___x_3375_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v_m_3372_, v_a_3373_, v_b_3374_);
return v___x_3375_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(lean_object* v_00_u03b2_3376_, lean_object* v_a_3377_, lean_object* v_x_3378_){
_start:
{
lean_object* v___x_3379_; 
v___x_3379_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_3377_, v_x_3378_);
return v___x_3379_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___boxed(lean_object* v_00_u03b2_3380_, lean_object* v_a_3381_, lean_object* v_x_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(v_00_u03b2_3380_, v_a_3381_, v_x_3382_);
lean_dec(v_x_3382_);
lean_dec_ref(v_a_3381_);
return v_res_3383_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(lean_object* v_00_u03b2_3384_, lean_object* v_a_3385_, lean_object* v_x_3386_){
_start:
{
uint8_t v___x_3387_; 
v___x_3387_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_3385_, v_x_3386_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___boxed(lean_object* v_00_u03b2_3388_, lean_object* v_a_3389_, lean_object* v_x_3390_){
_start:
{
uint8_t v_res_3391_; lean_object* v_r_3392_; 
v_res_3391_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(v_00_u03b2_3388_, v_a_3389_, v_x_3390_);
lean_dec(v_x_3390_);
lean_dec_ref(v_a_3389_);
v_r_3392_ = lean_box(v_res_3391_);
return v_r_3392_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26(lean_object* v_00_u03b2_3393_, lean_object* v_data_3394_){
_start:
{
lean_object* v___x_3395_; 
v___x_3395_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_data_3394_);
return v___x_3395_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27(lean_object* v_00_u03b2_3396_, lean_object* v_a_3397_, lean_object* v_b_3398_, lean_object* v_x_3399_){
_start:
{
lean_object* v___x_3400_; 
v___x_3400_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_3397_, v_b_3398_, v_x_3399_);
return v___x_3400_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27(lean_object* v_00_u03b2_3401_, lean_object* v_i_3402_, lean_object* v_source_3403_, lean_object* v_target_3404_){
_start:
{
lean_object* v___x_3405_; 
v___x_3405_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v_i_3402_, v_source_3403_, v_target_3404_);
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28(lean_object* v_00_u03b2_3406_, lean_object* v_x_3407_, lean_object* v_x_3408_){
_start:
{
lean_object* v___x_3409_; 
v___x_3409_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_x_3407_, v_x_3408_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object* v_x_3423_, lean_object* v_x_3424_){
_start:
{
if (lean_obj_tag(v_x_3423_) == 0)
{
lean_object* v___x_3425_; 
v___x_3425_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1));
return v___x_3425_;
}
else
{
lean_object* v_val_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3437_; 
v_val_3426_ = lean_ctor_get(v_x_3423_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v_x_3423_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3428_ = v_x_3423_;
v_isShared_3429_ = v_isSharedCheck_3437_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_val_3426_);
lean_dec(v_x_3423_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3437_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3433_; 
v___x_3430_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3));
v___x_3431_ = l_Nat_reprFast(v_val_3426_);
if (v_isShared_3429_ == 0)
{
lean_ctor_set_tag(v___x_3428_, 3);
lean_ctor_set(v___x_3428_, 0, v___x_3431_);
v___x_3433_ = v___x_3428_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v___x_3431_);
v___x_3433_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
lean_object* v___x_3434_; lean_object* v___x_3435_; 
v___x_3434_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3430_);
lean_ctor_set(v___x_3434_, 1, v___x_3433_);
v___x_3435_ = l_Repr_addAppParen(v___x_3434_, v_x_3424_);
return v___x_3435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object* v_x_3438_, lean_object* v_x_3439_){
_start:
{
lean_object* v_res_3440_; 
v_res_3440_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_x_3438_, v_x_3439_);
lean_dec(v_x_3439_);
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_x_3441_, lean_object* v_x_3442_, lean_object* v_x_3443_){
_start:
{
if (lean_obj_tag(v_x_3443_) == 0)
{
lean_dec(v_x_3441_);
return v_x_3442_;
}
else
{
lean_object* v_head_3444_; lean_object* v_tail_3445_; lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3456_; 
v_head_3444_ = lean_ctor_get(v_x_3443_, 0);
v_tail_3445_ = lean_ctor_get(v_x_3443_, 1);
v_isSharedCheck_3456_ = !lean_is_exclusive(v_x_3443_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3447_ = v_x_3443_;
v_isShared_3448_ = v_isSharedCheck_3456_;
goto v_resetjp_3446_;
}
else
{
lean_inc(v_tail_3445_);
lean_inc(v_head_3444_);
lean_dec(v_x_3443_);
v___x_3447_ = lean_box(0);
v_isShared_3448_ = v_isSharedCheck_3456_;
goto v_resetjp_3446_;
}
v_resetjp_3446_:
{
lean_object* v___x_3450_; 
lean_inc(v_x_3441_);
if (v_isShared_3448_ == 0)
{
lean_ctor_set_tag(v___x_3447_, 5);
lean_ctor_set(v___x_3447_, 1, v_x_3441_);
lean_ctor_set(v___x_3447_, 0, v_x_3442_);
v___x_3450_ = v___x_3447_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_x_3442_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v_x_3441_);
v___x_3450_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3451_ = lean_unsigned_to_nat(0u);
v___x_3452_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3444_, v___x_3451_);
v___x_3453_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3450_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
v_x_3442_ = v___x_3453_;
v_x_3443_ = v_tail_3445_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_3457_, lean_object* v_x_3458_, lean_object* v_x_3459_){
_start:
{
if (lean_obj_tag(v_x_3459_) == 0)
{
lean_dec(v_x_3457_);
return v_x_3458_;
}
else
{
lean_object* v_head_3460_; lean_object* v_tail_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3472_; 
v_head_3460_ = lean_ctor_get(v_x_3459_, 0);
v_tail_3461_ = lean_ctor_get(v_x_3459_, 1);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_x_3459_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3463_ = v_x_3459_;
v_isShared_3464_ = v_isSharedCheck_3472_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_tail_3461_);
lean_inc(v_head_3460_);
lean_dec(v_x_3459_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3472_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3466_; 
lean_inc(v_x_3457_);
if (v_isShared_3464_ == 0)
{
lean_ctor_set_tag(v___x_3463_, 5);
lean_ctor_set(v___x_3463_, 1, v_x_3457_);
lean_ctor_set(v___x_3463_, 0, v_x_3458_);
v___x_3466_ = v___x_3463_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v_x_3458_);
lean_ctor_set(v_reuseFailAlloc_3471_, 1, v_x_3457_);
v___x_3466_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3467_ = lean_unsigned_to_nat(0u);
v___x_3468_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3460_, v___x_3467_);
v___x_3469_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3469_, 0, v___x_3466_);
lean_ctor_set(v___x_3469_, 1, v___x_3468_);
v___x_3470_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_x_3457_, v___x_3469_, v_tail_3461_);
return v___x_3470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object* v___y_3473_){
_start:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; 
v___x_3474_ = lean_unsigned_to_nat(0u);
v___x_3475_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v___y_3473_, v___x_3474_);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object* v_x_3476_, lean_object* v_x_3477_){
_start:
{
if (lean_obj_tag(v_x_3476_) == 0)
{
lean_object* v___x_3478_; 
lean_dec(v_x_3477_);
v___x_3478_ = lean_box(0);
return v___x_3478_;
}
else
{
lean_object* v_tail_3479_; 
v_tail_3479_ = lean_ctor_get(v_x_3476_, 1);
if (lean_obj_tag(v_tail_3479_) == 0)
{
lean_object* v_head_3480_; lean_object* v___x_3481_; 
lean_dec(v_x_3477_);
v_head_3480_ = lean_ctor_get(v_x_3476_, 0);
lean_inc(v_head_3480_);
lean_dec_ref_known(v_x_3476_, 2);
v___x_3481_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3480_);
return v___x_3481_;
}
else
{
lean_object* v_head_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; 
lean_inc(v_tail_3479_);
v_head_3482_ = lean_ctor_get(v_x_3476_, 0);
lean_inc(v_head_3482_);
lean_dec_ref_known(v_x_3476_, 2);
v___x_3483_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3482_);
v___x_3484_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(v_x_3477_, v___x_3483_, v_tail_3479_);
return v___x_3484_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3492_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0));
v___x_3493_ = lean_string_length(v___x_3492_);
return v___x_3493_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3494_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4);
v___x_3495_ = lean_nat_to_int(v___x_3494_);
return v___x_3495_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object* v_xs_3501_){
_start:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; uint8_t v___x_3504_; 
v___x_3502_ = lean_array_get_size(v_xs_3501_);
v___x_3503_ = lean_unsigned_to_nat(0u);
v___x_3504_ = lean_nat_dec_eq(v___x_3502_, v___x_3503_);
if (v___x_3504_ == 0)
{
lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; 
v___x_3505_ = lean_array_to_list(v_xs_3501_);
v___x_3506_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3507_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(v___x_3505_, v___x_3506_);
v___x_3508_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3509_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3510_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3509_);
lean_ctor_set(v___x_3510_, 1, v___x_3507_);
v___x_3511_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3512_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3510_);
lean_ctor_set(v___x_3512_, 1, v___x_3511_);
v___x_3513_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3508_);
lean_ctor_set(v___x_3513_, 1, v___x_3512_);
v___x_3514_ = l_Std_Format_fill(v___x_3513_);
return v___x_3514_;
}
else
{
lean_object* v___x_3515_; 
lean_dec_ref(v_xs_3501_);
v___x_3515_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3515_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object* v_x_3516_, lean_object* v_x_3517_, lean_object* v_x_3518_){
_start:
{
if (lean_obj_tag(v_x_3518_) == 0)
{
lean_dec(v_x_3516_);
return v_x_3517_;
}
else
{
lean_object* v_head_3519_; lean_object* v_tail_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3530_; 
v_head_3519_ = lean_ctor_get(v_x_3518_, 0);
v_tail_3520_ = lean_ctor_get(v_x_3518_, 1);
v_isSharedCheck_3530_ = !lean_is_exclusive(v_x_3518_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_3522_ = v_x_3518_;
v_isShared_3523_ = v_isSharedCheck_3530_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_tail_3520_);
lean_inc(v_head_3519_);
lean_dec(v_x_3518_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3530_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3525_; 
lean_inc(v_x_3516_);
if (v_isShared_3523_ == 0)
{
lean_ctor_set_tag(v___x_3522_, 5);
lean_ctor_set(v___x_3522_, 1, v_x_3516_);
lean_ctor_set(v___x_3522_, 0, v_x_3517_);
v___x_3525_ = v___x_3522_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_x_3517_);
lean_ctor_set(v_reuseFailAlloc_3529_, 1, v_x_3516_);
v___x_3525_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3526_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3519_);
v___x_3527_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3527_, 0, v___x_3525_);
lean_ctor_set(v___x_3527_, 1, v___x_3526_);
v_x_3517_ = v___x_3527_;
v_x_3518_ = v_tail_3520_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object* v_x_3531_, lean_object* v_x_3532_){
_start:
{
if (lean_obj_tag(v_x_3531_) == 0)
{
lean_object* v___x_3533_; 
lean_dec(v_x_3532_);
v___x_3533_ = lean_box(0);
return v___x_3533_;
}
else
{
lean_object* v_tail_3534_; 
v_tail_3534_ = lean_ctor_get(v_x_3531_, 1);
if (lean_obj_tag(v_tail_3534_) == 0)
{
lean_object* v_head_3535_; lean_object* v___x_3536_; 
lean_dec(v_x_3532_);
v_head_3535_ = lean_ctor_get(v_x_3531_, 0);
lean_inc(v_head_3535_);
lean_dec_ref_known(v_x_3531_, 2);
v___x_3536_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3535_);
return v___x_3536_;
}
else
{
lean_object* v_head_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; 
lean_inc(v_tail_3534_);
v_head_3537_ = lean_ctor_get(v_x_3531_, 0);
lean_inc(v_head_3537_);
lean_dec_ref_known(v_x_3531_, 2);
v___x_3538_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3537_);
v___x_3539_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(v_x_3532_, v___x_3538_, v_tail_3534_);
return v___x_3539_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object* v_xs_3540_){
_start:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; uint8_t v___x_3543_; 
v___x_3541_ = lean_array_get_size(v_xs_3540_);
v___x_3542_ = lean_unsigned_to_nat(0u);
v___x_3543_ = lean_nat_dec_eq(v___x_3541_, v___x_3542_);
if (v___x_3543_ == 0)
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; 
v___x_3544_ = lean_array_to_list(v_xs_3540_);
v___x_3545_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3546_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(v___x_3544_, v___x_3545_);
v___x_3547_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3548_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3549_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3548_);
lean_ctor_set(v___x_3549_, 1, v___x_3546_);
v___x_3550_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3551_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3549_);
lean_ctor_set(v___x_3551_, 1, v___x_3550_);
v___x_3552_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3547_);
lean_ctor_set(v___x_3552_, 1, v___x_3551_);
v___x_3553_ = l_Std_Format_fill(v___x_3552_);
return v___x_3553_;
}
else
{
lean_object* v___x_3554_; 
lean_dec_ref(v_xs_3540_);
v___x_3554_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3554_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object* v_x_3555_, lean_object* v_x_3556_, lean_object* v_x_3557_){
_start:
{
if (lean_obj_tag(v_x_3557_) == 0)
{
lean_dec(v_x_3555_);
return v_x_3556_;
}
else
{
lean_object* v_head_3558_; lean_object* v_tail_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3570_; 
v_head_3558_ = lean_ctor_get(v_x_3557_, 0);
v_tail_3559_ = lean_ctor_get(v_x_3557_, 1);
v_isSharedCheck_3570_ = !lean_is_exclusive(v_x_3557_);
if (v_isSharedCheck_3570_ == 0)
{
v___x_3561_ = v_x_3557_;
v_isShared_3562_ = v_isSharedCheck_3570_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_tail_3559_);
lean_inc(v_head_3558_);
lean_dec(v_x_3557_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3570_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
lean_object* v___x_3564_; 
lean_inc(v_x_3555_);
if (v_isShared_3562_ == 0)
{
lean_ctor_set_tag(v___x_3561_, 5);
lean_ctor_set(v___x_3561_, 1, v_x_3555_);
lean_ctor_set(v___x_3561_, 0, v_x_3556_);
v___x_3564_ = v___x_3561_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3569_; 
v_reuseFailAlloc_3569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3569_, 0, v_x_3556_);
lean_ctor_set(v_reuseFailAlloc_3569_, 1, v_x_3555_);
v___x_3564_ = v_reuseFailAlloc_3569_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; 
v___x_3565_ = l_Nat_reprFast(v_head_3558_);
v___x_3566_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3566_, 0, v___x_3565_);
v___x_3567_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3564_);
lean_ctor_set(v___x_3567_, 1, v___x_3566_);
v_x_3556_ = v___x_3567_;
v_x_3557_ = v_tail_3559_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object* v_x_3571_, lean_object* v_x_3572_, lean_object* v_x_3573_){
_start:
{
if (lean_obj_tag(v_x_3573_) == 0)
{
lean_dec(v_x_3571_);
return v_x_3572_;
}
else
{
lean_object* v_head_3574_; lean_object* v_tail_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3586_; 
v_head_3574_ = lean_ctor_get(v_x_3573_, 0);
v_tail_3575_ = lean_ctor_get(v_x_3573_, 1);
v_isSharedCheck_3586_ = !lean_is_exclusive(v_x_3573_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3577_ = v_x_3573_;
v_isShared_3578_ = v_isSharedCheck_3586_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_tail_3575_);
lean_inc(v_head_3574_);
lean_dec(v_x_3573_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3586_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3580_; 
lean_inc(v_x_3571_);
if (v_isShared_3578_ == 0)
{
lean_ctor_set_tag(v___x_3577_, 5);
lean_ctor_set(v___x_3577_, 1, v_x_3571_);
lean_ctor_set(v___x_3577_, 0, v_x_3572_);
v___x_3580_ = v___x_3577_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v_x_3572_);
lean_ctor_set(v_reuseFailAlloc_3585_, 1, v_x_3571_);
v___x_3580_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; 
v___x_3581_ = l_Nat_reprFast(v_head_3574_);
v___x_3582_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3582_, 0, v___x_3581_);
v___x_3583_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3580_);
lean_ctor_set(v___x_3583_, 1, v___x_3582_);
v___x_3584_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(v_x_3571_, v___x_3583_, v_tail_3575_);
return v___x_3584_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object* v___y_3587_){
_start:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3588_ = l_Nat_reprFast(v___y_3587_);
v___x_3589_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3588_);
return v___x_3589_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object* v_x_3590_, lean_object* v_x_3591_){
_start:
{
if (lean_obj_tag(v_x_3590_) == 0)
{
lean_object* v___x_3592_; 
lean_dec(v_x_3591_);
v___x_3592_ = lean_box(0);
return v___x_3592_;
}
else
{
lean_object* v_tail_3593_; 
v_tail_3593_ = lean_ctor_get(v_x_3590_, 1);
if (lean_obj_tag(v_tail_3593_) == 0)
{
lean_object* v_head_3594_; lean_object* v___x_3595_; 
lean_dec(v_x_3591_);
v_head_3594_ = lean_ctor_get(v_x_3590_, 0);
lean_inc(v_head_3594_);
lean_dec_ref_known(v_x_3590_, 2);
v___x_3595_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3594_);
return v___x_3595_;
}
else
{
lean_object* v_head_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
lean_inc(v_tail_3593_);
v_head_3596_ = lean_ctor_get(v_x_3590_, 0);
lean_inc(v_head_3596_);
lean_dec_ref_known(v_x_3590_, 2);
v___x_3597_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3596_);
v___x_3598_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(v_x_3591_, v___x_3597_, v_tail_3593_);
return v___x_3598_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object* v_xs_3599_){
_start:
{
lean_object* v___x_3600_; lean_object* v___x_3601_; uint8_t v___x_3602_; 
v___x_3600_ = lean_array_get_size(v_xs_3599_);
v___x_3601_ = lean_unsigned_to_nat(0u);
v___x_3602_ = lean_nat_dec_eq(v___x_3600_, v___x_3601_);
if (v___x_3602_ == 0)
{
lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; 
v___x_3603_ = lean_array_to_list(v_xs_3599_);
v___x_3604_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3605_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(v___x_3603_, v___x_3604_);
v___x_3606_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3607_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3608_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3608_, 0, v___x_3607_);
lean_ctor_set(v___x_3608_, 1, v___x_3605_);
v___x_3609_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3610_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3608_);
lean_ctor_set(v___x_3610_, 1, v___x_3609_);
v___x_3611_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3606_);
lean_ctor_set(v___x_3611_, 1, v___x_3610_);
v___x_3612_ = l_Std_Format_fill(v___x_3611_);
return v___x_3612_;
}
else
{
lean_object* v___x_3613_; 
lean_dec_ref(v_xs_3599_);
v___x_3613_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3613_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object* v_x_3614_, lean_object* v_x_3615_, lean_object* v_x_3616_){
_start:
{
if (lean_obj_tag(v_x_3616_) == 0)
{
lean_dec(v_x_3614_);
return v_x_3615_;
}
else
{
lean_object* v_head_3617_; lean_object* v_tail_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3628_; 
v_head_3617_ = lean_ctor_get(v_x_3616_, 0);
v_tail_3618_ = lean_ctor_get(v_x_3616_, 1);
v_isSharedCheck_3628_ = !lean_is_exclusive(v_x_3616_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3620_ = v_x_3616_;
v_isShared_3621_ = v_isSharedCheck_3628_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_tail_3618_);
lean_inc(v_head_3617_);
lean_dec(v_x_3616_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3628_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3623_; 
lean_inc(v_x_3614_);
if (v_isShared_3621_ == 0)
{
lean_ctor_set_tag(v___x_3620_, 5);
lean_ctor_set(v___x_3620_, 1, v_x_3614_);
lean_ctor_set(v___x_3620_, 0, v_x_3615_);
v___x_3623_ = v___x_3620_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_x_3615_);
lean_ctor_set(v_reuseFailAlloc_3627_, 1, v_x_3614_);
v___x_3623_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3624_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3617_);
v___x_3625_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3623_);
lean_ctor_set(v___x_3625_, 1, v___x_3624_);
v_x_3615_ = v___x_3625_;
v_x_3616_ = v_tail_3618_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object* v_x_3629_, lean_object* v_x_3630_){
_start:
{
if (lean_obj_tag(v_x_3629_) == 0)
{
lean_object* v___x_3631_; 
lean_dec(v_x_3630_);
v___x_3631_ = lean_box(0);
return v___x_3631_;
}
else
{
lean_object* v_tail_3632_; 
v_tail_3632_ = lean_ctor_get(v_x_3629_, 1);
if (lean_obj_tag(v_tail_3632_) == 0)
{
lean_object* v_head_3633_; lean_object* v___x_3634_; 
lean_dec(v_x_3630_);
v_head_3633_ = lean_ctor_get(v_x_3629_, 0);
lean_inc(v_head_3633_);
lean_dec_ref_known(v_x_3629_, 2);
v___x_3634_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3633_);
return v___x_3634_;
}
else
{
lean_object* v_head_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; 
lean_inc(v_tail_3632_);
v_head_3635_ = lean_ctor_get(v_x_3629_, 0);
lean_inc(v_head_3635_);
lean_dec_ref_known(v_x_3629_, 2);
v___x_3636_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3635_);
v___x_3637_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(v_x_3630_, v___x_3636_, v_tail_3632_);
return v___x_3637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object* v_xs_3638_){
_start:
{
lean_object* v___x_3639_; lean_object* v___x_3640_; uint8_t v___x_3641_; 
v___x_3639_ = lean_array_get_size(v_xs_3638_);
v___x_3640_ = lean_unsigned_to_nat(0u);
v___x_3641_ = lean_nat_dec_eq(v___x_3639_, v___x_3640_);
if (v___x_3641_ == 0)
{
lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; 
v___x_3642_ = lean_array_to_list(v_xs_3638_);
v___x_3643_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3644_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(v___x_3642_, v___x_3643_);
v___x_3645_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3646_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3647_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3647_, 0, v___x_3646_);
lean_ctor_set(v___x_3647_, 1, v___x_3644_);
v___x_3648_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3649_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3649_, 0, v___x_3647_);
lean_ctor_set(v___x_3649_, 1, v___x_3648_);
v___x_3650_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3650_, 0, v___x_3645_);
lean_ctor_set(v___x_3650_, 1, v___x_3649_);
v___x_3651_ = l_Std_Format_fill(v___x_3650_);
return v___x_3651_;
}
else
{
lean_object* v___x_3652_; 
lean_dec_ref(v_xs_3638_);
v___x_3652_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3652_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object* v_x_3653_, lean_object* v_x_3654_, lean_object* v_x_3655_){
_start:
{
if (lean_obj_tag(v_x_3655_) == 0)
{
lean_dec(v_x_3653_);
return v_x_3654_;
}
else
{
lean_object* v_head_3656_; lean_object* v_tail_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3667_; 
v_head_3656_ = lean_ctor_get(v_x_3655_, 0);
v_tail_3657_ = lean_ctor_get(v_x_3655_, 1);
v_isSharedCheck_3667_ = !lean_is_exclusive(v_x_3655_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3659_ = v_x_3655_;
v_isShared_3660_ = v_isSharedCheck_3667_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_tail_3657_);
lean_inc(v_head_3656_);
lean_dec(v_x_3655_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3667_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v___x_3662_; 
lean_inc(v_x_3653_);
if (v_isShared_3660_ == 0)
{
lean_ctor_set_tag(v___x_3659_, 5);
lean_ctor_set(v___x_3659_, 1, v_x_3653_);
lean_ctor_set(v___x_3659_, 0, v_x_3654_);
v___x_3662_ = v___x_3659_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v_x_3654_);
lean_ctor_set(v_reuseFailAlloc_3666_, 1, v_x_3653_);
v___x_3662_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
lean_object* v___x_3663_; lean_object* v___x_3664_; 
v___x_3663_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3656_);
v___x_3664_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3664_, 0, v___x_3662_);
lean_ctor_set(v___x_3664_, 1, v___x_3663_);
v_x_3654_ = v___x_3664_;
v_x_3655_ = v_tail_3657_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object* v_x_3668_, lean_object* v_x_3669_){
_start:
{
if (lean_obj_tag(v_x_3668_) == 0)
{
lean_object* v___x_3670_; 
lean_dec(v_x_3669_);
v___x_3670_ = lean_box(0);
return v___x_3670_;
}
else
{
lean_object* v_tail_3671_; 
v_tail_3671_ = lean_ctor_get(v_x_3668_, 1);
if (lean_obj_tag(v_tail_3671_) == 0)
{
lean_object* v_head_3672_; lean_object* v___x_3673_; 
lean_dec(v_x_3669_);
v_head_3672_ = lean_ctor_get(v_x_3668_, 0);
lean_inc(v_head_3672_);
lean_dec_ref_known(v_x_3668_, 2);
v___x_3673_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3672_);
return v___x_3673_;
}
else
{
lean_object* v_head_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; 
lean_inc(v_tail_3671_);
v_head_3674_ = lean_ctor_get(v_x_3668_, 0);
lean_inc(v_head_3674_);
lean_dec_ref_known(v_x_3668_, 2);
v___x_3675_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3674_);
v___x_3676_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(v_x_3669_, v___x_3675_, v_tail_3671_);
return v___x_3676_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object* v_xs_3677_){
_start:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; uint8_t v___x_3680_; 
v___x_3678_ = lean_array_get_size(v_xs_3677_);
v___x_3679_ = lean_unsigned_to_nat(0u);
v___x_3680_ = lean_nat_dec_eq(v___x_3678_, v___x_3679_);
if (v___x_3680_ == 0)
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3681_ = lean_array_to_list(v_xs_3677_);
v___x_3682_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3683_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(v___x_3681_, v___x_3682_);
v___x_3684_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3685_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3686_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3685_);
lean_ctor_set(v___x_3686_, 1, v___x_3683_);
v___x_3687_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3688_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3688_, 0, v___x_3686_);
lean_ctor_set(v___x_3688_, 1, v___x_3687_);
v___x_3689_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3684_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
v___x_3690_ = l_Std_Format_fill(v___x_3689_);
return v___x_3690_;
}
else
{
lean_object* v___x_3691_; 
lean_dec_ref(v_xs_3677_);
v___x_3691_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3691_;
}
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3705_ = lean_unsigned_to_nat(12u);
v___x_3706_ = lean_nat_to_int(v___x_3705_);
return v___x_3706_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_3710_; lean_object* v___x_3711_; 
v___x_3710_ = lean_unsigned_to_nat(9u);
v___x_3711_ = lean_nat_to_int(v___x_3710_);
return v___x_3711_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_3715_; lean_object* v___x_3716_; 
v___x_3715_ = lean_unsigned_to_nat(11u);
v___x_3716_ = lean_nat_to_int(v___x_3715_);
return v___x_3716_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3718_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0));
v___x_3719_ = lean_string_length(v___x_3718_);
return v___x_3719_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_3720_; lean_object* v___x_3721_; 
v___x_3720_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15);
v___x_3721_ = lean_nat_to_int(v___x_3720_);
return v___x_3721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object* v_x_3726_){
_start:
{
lean_object* v_numFixed_3727_; lean_object* v_perms_3728_; lean_object* v_revDeps_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; uint8_t v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; 
v_numFixed_3727_ = lean_ctor_get(v_x_3726_, 0);
lean_inc(v_numFixed_3727_);
v_perms_3728_ = lean_ctor_get(v_x_3726_, 1);
lean_inc_ref(v_perms_3728_);
v_revDeps_3729_ = lean_ctor_get(v_x_3726_, 2);
lean_inc_ref(v_revDeps_3729_);
lean_dec_ref(v_x_3726_);
v___x_3730_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5));
v___x_3731_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6));
v___x_3732_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7);
v___x_3733_ = l_Nat_reprFast(v_numFixed_3727_);
v___x_3734_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3734_, 0, v___x_3733_);
v___x_3735_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3732_);
lean_ctor_set(v___x_3735_, 1, v___x_3734_);
v___x_3736_ = 0;
v___x_3737_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3737_, 0, v___x_3735_);
lean_ctor_set_uint8(v___x_3737_, sizeof(void*)*1, v___x_3736_);
v___x_3738_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3738_, 0, v___x_3731_);
lean_ctor_set(v___x_3738_, 1, v___x_3737_);
v___x_3739_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2));
v___x_3740_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3738_);
lean_ctor_set(v___x_3740_, 1, v___x_3739_);
v___x_3741_ = lean_box(1);
v___x_3742_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3740_);
lean_ctor_set(v___x_3742_, 1, v___x_3741_);
v___x_3743_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9));
v___x_3744_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3742_);
lean_ctor_set(v___x_3744_, 1, v___x_3743_);
v___x_3745_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3744_);
lean_ctor_set(v___x_3745_, 1, v___x_3730_);
v___x_3746_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10);
v___x_3747_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(v_perms_3728_);
v___x_3748_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3746_);
lean_ctor_set(v___x_3748_, 1, v___x_3747_);
v___x_3749_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3749_, 0, v___x_3748_);
lean_ctor_set_uint8(v___x_3749_, sizeof(void*)*1, v___x_3736_);
v___x_3750_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3750_, 0, v___x_3745_);
lean_ctor_set(v___x_3750_, 1, v___x_3749_);
v___x_3751_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3750_);
lean_ctor_set(v___x_3751_, 1, v___x_3739_);
v___x_3752_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3752_, 0, v___x_3751_);
lean_ctor_set(v___x_3752_, 1, v___x_3741_);
v___x_3753_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12));
v___x_3754_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3754_, 0, v___x_3752_);
lean_ctor_set(v___x_3754_, 1, v___x_3753_);
v___x_3755_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3754_);
lean_ctor_set(v___x_3755_, 1, v___x_3730_);
v___x_3756_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13);
v___x_3757_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(v_revDeps_3729_);
v___x_3758_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3756_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3759_, 0, v___x_3758_);
lean_ctor_set_uint8(v___x_3759_, sizeof(void*)*1, v___x_3736_);
v___x_3760_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3755_);
lean_ctor_set(v___x_3760_, 1, v___x_3759_);
v___x_3761_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16);
v___x_3762_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17));
v___x_3763_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3763_, 0, v___x_3762_);
lean_ctor_set(v___x_3763_, 1, v___x_3760_);
v___x_3764_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18));
v___x_3765_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3765_, 0, v___x_3763_);
lean_ctor_set(v___x_3765_, 1, v___x_3764_);
v___x_3766_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3766_, 0, v___x_3761_);
lean_ctor_set(v___x_3766_, 1, v___x_3765_);
v___x_3767_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3767_, 0, v___x_3766_);
lean_ctor_set_uint8(v___x_3767_, sizeof(void*)*1, v___x_3736_);
return v___x_3767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object* v_x_3768_, lean_object* v_prec_3769_){
_start:
{
lean_object* v___x_3770_; 
v___x_3770_ = l_Lean_Elab_instReprFixedParamPerms_repr___redArg(v_x_3768_);
return v___x_3770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object* v_x_3771_, lean_object* v_prec_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l_Lean_Elab_instReprFixedParamPerms_repr(v_x_3771_, v_prec_3772_);
lean_dec(v_prec_3772_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object* v_msg_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_){
_start:
{
lean_object* v___f_3782_; lean_object* v___x_5728__overap_3783_; lean_object* v___x_3784_; 
v___f_3782_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_5728__overap_3783_ = lean_panic_fn_borrowed(v___f_3782_, v_msg_3776_);
lean_inc(v___y_3780_);
lean_inc_ref(v___y_3779_);
lean_inc(v___y_3778_);
lean_inc_ref(v___y_3777_);
v___x_3784_ = lean_apply_5(v___x_5728__overap_3783_, v___y_3777_, v___y_3778_, v___y_3779_, v___y_3780_, lean_box(0));
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object* v_msg_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_){
_start:
{
lean_object* v_res_3791_; 
v_res_3791_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v_msg_3785_, v___y_3786_, v___y_3787_, v___y_3788_, v___y_3789_);
lean_dec(v___y_3789_);
lean_dec_ref(v___y_3788_);
lean_dec(v___y_3787_);
lean_dec_ref(v___y_3786_);
return v_res_3791_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object* v_msg_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_){
_start:
{
lean_object* v___f_3798_; lean_object* v___x_5738__overap_3799_; lean_object* v___x_3800_; 
v___f_3798_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_5738__overap_3799_ = lean_panic_fn_borrowed(v___f_3798_, v_msg_3792_);
lean_inc(v___y_3796_);
lean_inc_ref(v___y_3795_);
lean_inc(v___y_3794_);
lean_inc_ref(v___y_3793_);
v___x_3800_ = lean_apply_5(v___x_5738__overap_3799_, v___y_3793_, v___y_3794_, v___y_3795_, v___y_3796_, lean_box(0));
return v___x_3800_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object* v_msg_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_){
_start:
{
lean_object* v_res_3807_; 
v_res_3807_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v_msg_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_);
lean_dec(v___y_3805_);
lean_dec_ref(v___y_3804_);
lean_dec(v___y_3803_);
lean_dec_ref(v___y_3802_);
return v_res_3807_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object* v_msg_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v___f_3814_; lean_object* v___x_5748__overap_3815_; lean_object* v___x_3816_; 
v___f_3814_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_5748__overap_3815_ = lean_panic_fn_borrowed(v___f_3814_, v_msg_3808_);
lean_inc(v___y_3812_);
lean_inc_ref(v___y_3811_);
lean_inc(v___y_3810_);
lean_inc_ref(v___y_3809_);
v___x_3816_ = lean_apply_5(v___x_5748__overap_3815_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_, lean_box(0));
return v___x_3816_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object* v_msg_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_){
_start:
{
lean_object* v_res_3823_; 
v_res_3823_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v_msg_3817_, v___y_3818_, v___y_3819_, v___y_3820_, v___y_3821_);
lean_dec(v___y_3821_);
lean_dec_ref(v___y_3820_);
lean_dec(v___y_3819_);
lean_dec_ref(v___y_3818_);
return v_res_3823_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2(void){
_start:
{
lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; 
v___x_3826_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1));
v___x_3827_ = lean_unsigned_to_nat(12u);
v___x_3828_ = lean_unsigned_to_nat(294u);
v___x_3829_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3830_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3831_ = l_mkPanicMessageWithDecl(v___x_3830_, v___x_3829_, v___x_3828_, v___x_3827_, v___x_3826_);
return v___x_3831_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4(void){
_start:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; 
v___x_3833_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3));
v___x_3834_ = lean_unsigned_to_nat(12u);
v___x_3835_ = lean_unsigned_to_nat(297u);
v___x_3836_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3837_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3838_ = l_mkPanicMessageWithDecl(v___x_3837_, v___x_3836_, v___x_3835_, v___x_3834_, v___x_3833_);
return v___x_3838_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object* v___x_3839_, lean_object* v_as_3840_, size_t v_sz_3841_, size_t v_i_3842_, lean_object* v_b_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_){
_start:
{
lean_object* v_a_3850_; uint8_t v___x_3854_; 
v___x_3854_ = lean_usize_dec_lt(v_i_3842_, v_sz_3841_);
if (v___x_3854_ == 0)
{
lean_object* v___x_3855_; 
v___x_3855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3855_, 0, v_b_3843_);
return v___x_3855_;
}
else
{
lean_object* v_a_3856_; 
v_a_3856_ = lean_array_uget_borrowed(v_as_3840_, v_i_3842_);
if (lean_obj_tag(v_a_3856_) == 1)
{
lean_object* v_val_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; 
v_val_3857_ = lean_ctor_get(v_a_3856_, 0);
v___x_3858_ = lean_box(0);
v___x_3859_ = lean_unsigned_to_nat(0u);
v___x_3860_ = lean_array_get_borrowed(v___x_3858_, v_val_3857_, v___x_3859_);
if (lean_obj_tag(v___x_3860_) == 1)
{
lean_object* v_val_3861_; lean_object* v___x_3862_; 
v_val_3861_ = lean_ctor_get(v___x_3860_, 0);
v___x_3862_ = lean_array_get_borrowed(v___x_3858_, v___x_3839_, v_val_3861_);
if (lean_obj_tag(v___x_3862_) == 0)
{
lean_object* v___x_3863_; lean_object* v___x_3864_; 
lean_dec_ref(v_b_3843_);
v___x_3863_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2);
v___x_3864_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v___x_3863_, v___y_3844_, v___y_3845_, v___y_3846_, v___y_3847_);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v_a_3865_; lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3874_; 
v_a_3865_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3874_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3874_ == 0)
{
v___x_3867_ = v___x_3864_;
v_isShared_3868_ = v_isSharedCheck_3874_;
goto v_resetjp_3866_;
}
else
{
lean_inc(v_a_3865_);
lean_dec(v___x_3864_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3874_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
if (lean_obj_tag(v_a_3865_) == 0)
{
lean_object* v_a_3869_; lean_object* v___x_3871_; 
v_a_3869_ = lean_ctor_get(v_a_3865_, 0);
lean_inc(v_a_3869_);
lean_dec_ref_known(v_a_3865_, 1);
if (v_isShared_3868_ == 0)
{
lean_ctor_set(v___x_3867_, 0, v_a_3869_);
v___x_3871_ = v___x_3867_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v_a_3869_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
else
{
lean_object* v_a_3873_; 
lean_del_object(v___x_3867_);
v_a_3873_ = lean_ctor_get(v_a_3865_, 0);
lean_inc(v_a_3873_);
lean_dec_ref_known(v_a_3865_, 1);
v_a_3850_ = v_a_3873_;
goto v___jp_3849_;
}
}
}
else
{
lean_object* v_a_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3882_; 
v_a_3875_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3877_ = v___x_3864_;
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_a_3875_);
lean_dec(v___x_3864_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v___x_3880_; 
if (v_isShared_3878_ == 0)
{
v___x_3880_ = v___x_3877_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v_a_3875_);
v___x_3880_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
return v___x_3880_;
}
}
}
}
else
{
lean_object* v___x_3883_; 
lean_inc_ref(v___x_3862_);
v___x_3883_ = lean_array_push(v_b_3843_, v___x_3862_);
v_a_3850_ = v___x_3883_;
goto v___jp_3849_;
}
}
else
{
lean_object* v___x_3884_; lean_object* v___x_3885_; 
v___x_3884_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4);
v___x_3885_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_3884_, v___y_3844_, v___y_3845_, v___y_3846_, v___y_3847_);
if (lean_obj_tag(v___x_3885_) == 0)
{
lean_dec_ref_known(v___x_3885_, 1);
v_a_3850_ = v_b_3843_;
goto v___jp_3849_;
}
else
{
lean_object* v_a_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3893_; 
lean_dec_ref(v_b_3843_);
v_a_3886_ = lean_ctor_get(v___x_3885_, 0);
v_isSharedCheck_3893_ = !lean_is_exclusive(v___x_3885_);
if (v_isSharedCheck_3893_ == 0)
{
v___x_3888_ = v___x_3885_;
v_isShared_3889_ = v_isSharedCheck_3893_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_a_3886_);
lean_dec(v___x_3885_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3893_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
lean_object* v___x_3891_; 
if (v_isShared_3889_ == 0)
{
v___x_3891_ = v___x_3888_;
goto v_reusejp_3890_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v_a_3886_);
v___x_3891_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3890_;
}
v_reusejp_3890_:
{
return v___x_3891_;
}
}
}
}
}
else
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3894_ = lean_box(0);
v___x_3895_ = lean_array_push(v_b_3843_, v___x_3894_);
v_a_3850_ = v___x_3895_;
goto v___jp_3849_;
}
}
v___jp_3849_:
{
size_t v___x_3851_; size_t v___x_3852_; 
v___x_3851_ = ((size_t)1ULL);
v___x_3852_ = lean_usize_add(v_i_3842_, v___x_3851_);
v_i_3842_ = v___x_3852_;
v_b_3843_ = v_a_3850_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object* v___x_3896_, lean_object* v_as_3897_, lean_object* v_sz_3898_, lean_object* v_i_3899_, lean_object* v_b_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_){
_start:
{
size_t v_sz_boxed_3906_; size_t v_i_boxed_3907_; lean_object* v_res_3908_; 
v_sz_boxed_3906_ = lean_unbox_usize(v_sz_3898_);
lean_dec(v_sz_3898_);
v_i_boxed_3907_ = lean_unbox_usize(v_i_3899_);
lean_dec(v_i_3899_);
v_res_3908_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3896_, v_as_3897_, v_sz_boxed_3906_, v_i_boxed_3907_, v_b_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_);
lean_dec(v___y_3904_);
lean_dec_ref(v___y_3903_);
lean_dec(v___y_3902_);
lean_dec_ref(v___y_3901_);
lean_dec_ref(v_as_3897_);
lean_dec_ref(v___x_3896_);
return v_res_3908_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object* v_upperBound_3911_, lean_object* v___x_3912_, lean_object* v___x_3913_, lean_object* v_a_3914_, lean_object* v_b_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_){
_start:
{
uint8_t v___x_3921_; 
v___x_3921_ = lean_nat_dec_lt(v_a_3914_, v_upperBound_3911_);
if (v___x_3921_ == 0)
{
lean_object* v___x_3922_; 
lean_dec(v_a_3914_);
v___x_3922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3922_, 0, v_b_3915_);
return v___x_3922_;
}
else
{
lean_object* v___x_3923_; lean_object* v___x_3924_; size_t v_sz_3925_; size_t v___x_3926_; lean_object* v___x_3927_; 
v___x_3923_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_3924_ = lean_array_fget_borrowed(v___x_3912_, v_a_3914_);
v_sz_3925_ = lean_array_size(v___x_3924_);
v___x_3926_ = ((size_t)0ULL);
v___x_3927_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3913_, v___x_3924_, v_sz_3925_, v___x_3926_, v___x_3923_, v___y_3916_, v___y_3917_, v___y_3918_, v___y_3919_);
if (lean_obj_tag(v___x_3927_) == 0)
{
lean_object* v_a_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; 
v_a_3928_ = lean_ctor_get(v___x_3927_, 0);
lean_inc(v_a_3928_);
lean_dec_ref_known(v___x_3927_, 1);
v___x_3929_ = lean_array_push(v_b_3915_, v_a_3928_);
v___x_3930_ = lean_unsigned_to_nat(1u);
v___x_3931_ = lean_nat_add(v_a_3914_, v___x_3930_);
lean_dec(v_a_3914_);
v_a_3914_ = v___x_3931_;
v_b_3915_ = v___x_3929_;
goto _start;
}
else
{
lean_object* v_a_3933_; lean_object* v___x_3935_; uint8_t v_isShared_3936_; uint8_t v_isSharedCheck_3940_; 
lean_dec_ref(v_b_3915_);
lean_dec(v_a_3914_);
v_a_3933_ = lean_ctor_get(v___x_3927_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v___x_3927_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3935_ = v___x_3927_;
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
else
{
lean_inc(v_a_3933_);
lean_dec(v___x_3927_);
v___x_3935_ = lean_box(0);
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
v_resetjp_3934_:
{
lean_object* v___x_3938_; 
if (v_isShared_3936_ == 0)
{
v___x_3938_ = v___x_3935_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_a_3933_);
v___x_3938_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
return v___x_3938_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object* v_upperBound_3941_, lean_object* v___x_3942_, lean_object* v___x_3943_, lean_object* v_a_3944_, lean_object* v_b_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_){
_start:
{
lean_object* v_res_3951_; 
v_res_3951_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_3941_, v___x_3942_, v___x_3943_, v_a_3944_, v_b_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
lean_dec(v___y_3949_);
lean_dec_ref(v___y_3948_);
lean_dec(v___y_3947_);
lean_dec_ref(v___y_3946_);
lean_dec_ref(v___x_3943_);
lean_dec_ref(v___x_3942_);
lean_dec(v_upperBound_3941_);
return v_res_3951_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; 
v___x_3953_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0));
v___x_3954_ = lean_unsigned_to_nat(8u);
v___x_3955_ = lean_unsigned_to_nat(281u);
v___x_3956_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3957_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3958_ = l_mkPanicMessageWithDecl(v___x_3957_, v___x_3956_, v___x_3955_, v___x_3954_, v___x_3953_);
return v___x_3958_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object* v_upperBound_3959_, lean_object* v_a_3960_, lean_object* v_b_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_){
_start:
{
lean_object* v_a_3968_; uint8_t v___x_3972_; 
v___x_3972_ = lean_nat_dec_lt(v_a_3960_, v_upperBound_3959_);
if (v___x_3972_ == 0)
{
lean_object* v___x_3973_; 
lean_dec(v_a_3960_);
v___x_3973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3973_, 0, v_b_3961_);
return v___x_3973_;
}
else
{
lean_object* v_snd_3974_; lean_object* v_snd_3975_; lean_object* v_snd_3976_; lean_object* v_fst_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_4101_; 
v_snd_3974_ = lean_ctor_get(v_b_3961_, 1);
lean_inc(v_snd_3974_);
v_snd_3975_ = lean_ctor_get(v_snd_3974_, 1);
lean_inc(v_snd_3975_);
v_snd_3976_ = lean_ctor_get(v_snd_3975_, 1);
lean_inc(v_snd_3976_);
v_fst_3977_ = lean_ctor_get(v_b_3961_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v_b_3961_);
if (v_isSharedCheck_4101_ == 0)
{
lean_object* v_unused_4102_; 
v_unused_4102_ = lean_ctor_get(v_b_3961_, 1);
lean_dec(v_unused_4102_);
v___x_3979_ = v_b_3961_;
v_isShared_3980_ = v_isSharedCheck_4101_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_fst_3977_);
lean_dec(v_b_3961_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_4101_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v_fst_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_4099_; 
v_fst_3981_ = lean_ctor_get(v_snd_3974_, 0);
v_isSharedCheck_4099_ = !lean_is_exclusive(v_snd_3974_);
if (v_isSharedCheck_4099_ == 0)
{
lean_object* v_unused_4100_; 
v_unused_4100_ = lean_ctor_get(v_snd_3974_, 1);
lean_dec(v_unused_4100_);
v___x_3983_ = v_snd_3974_;
v_isShared_3984_ = v_isSharedCheck_4099_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_fst_3981_);
lean_dec(v_snd_3974_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_4099_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v_fst_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_4097_; 
v_fst_3985_ = lean_ctor_get(v_snd_3975_, 0);
v_isSharedCheck_4097_ = !lean_is_exclusive(v_snd_3975_);
if (v_isSharedCheck_4097_ == 0)
{
lean_object* v_unused_4098_; 
v_unused_4098_ = lean_ctor_get(v_snd_3975_, 1);
lean_dec(v_unused_4098_);
v___x_3987_ = v_snd_3975_;
v_isShared_3988_ = v_isSharedCheck_4097_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_fst_3985_);
lean_dec(v_snd_3975_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_4097_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v_array_3989_; lean_object* v_start_3990_; lean_object* v_stop_3991_; uint8_t v___x_3992_; 
v_array_3989_ = lean_ctor_get(v_snd_3976_, 0);
v_start_3990_ = lean_ctor_get(v_snd_3976_, 1);
v_stop_3991_ = lean_ctor_get(v_snd_3976_, 2);
v___x_3992_ = lean_nat_dec_lt(v_start_3990_, v_stop_3991_);
if (v___x_3992_ == 0)
{
lean_object* v___x_3994_; 
lean_dec(v_a_3960_);
if (v_isShared_3988_ == 0)
{
v___x_3994_ = v___x_3987_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_4002_; 
v_reuseFailAlloc_4002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4002_, 0, v_fst_3985_);
lean_ctor_set(v_reuseFailAlloc_4002_, 1, v_snd_3976_);
v___x_3994_ = v_reuseFailAlloc_4002_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
lean_object* v___x_3996_; 
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 1, v___x_3994_);
v___x_3996_ = v___x_3983_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_fst_3981_);
lean_ctor_set(v_reuseFailAlloc_4001_, 1, v___x_3994_);
v___x_3996_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
lean_object* v___x_3998_; 
if (v_isShared_3980_ == 0)
{
lean_ctor_set(v___x_3979_, 1, v___x_3996_);
v___x_3998_ = v___x_3979_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_fst_3977_);
lean_ctor_set(v_reuseFailAlloc_4000_, 1, v___x_3996_);
v___x_3998_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
lean_object* v___x_3999_; 
v___x_3999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3999_, 0, v___x_3998_);
return v___x_3999_;
}
}
}
}
else
{
lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4093_; 
lean_inc(v_stop_3991_);
lean_inc(v_start_3990_);
lean_inc_ref(v_array_3989_);
v_isSharedCheck_4093_ = !lean_is_exclusive(v_snd_3976_);
if (v_isSharedCheck_4093_ == 0)
{
lean_object* v_unused_4094_; lean_object* v_unused_4095_; lean_object* v_unused_4096_; 
v_unused_4094_ = lean_ctor_get(v_snd_3976_, 2);
lean_dec(v_unused_4094_);
v_unused_4095_ = lean_ctor_get(v_snd_3976_, 1);
lean_dec(v_unused_4095_);
v_unused_4096_ = lean_ctor_get(v_snd_3976_, 0);
lean_dec(v_unused_4096_);
v___x_4004_ = v_snd_3976_;
v_isShared_4005_ = v_isSharedCheck_4093_;
goto v_resetjp_4003_;
}
else
{
lean_dec(v_snd_3976_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4093_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v_array_4006_; lean_object* v_start_4007_; lean_object* v_stop_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4013_; 
v_array_4006_ = lean_ctor_get(v_fst_3985_, 0);
v_start_4007_ = lean_ctor_get(v_fst_3985_, 1);
v_stop_4008_ = lean_ctor_get(v_fst_3985_, 2);
v___x_4009_ = lean_array_fget(v_array_3989_, v_start_3990_);
v___x_4010_ = lean_unsigned_to_nat(1u);
v___x_4011_ = lean_nat_add(v_start_3990_, v___x_4010_);
lean_dec(v_start_3990_);
if (v_isShared_4005_ == 0)
{
lean_ctor_set(v___x_4004_, 1, v___x_4011_);
v___x_4013_ = v___x_4004_;
goto v_reusejp_4012_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_array_3989_);
lean_ctor_set(v_reuseFailAlloc_4092_, 1, v___x_4011_);
lean_ctor_set(v_reuseFailAlloc_4092_, 2, v_stop_3991_);
v___x_4013_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4012_;
}
v_reusejp_4012_:
{
uint8_t v___x_4014_; 
v___x_4014_ = lean_nat_dec_lt(v_start_4007_, v_stop_4008_);
if (v___x_4014_ == 0)
{
lean_object* v___x_4016_; 
lean_dec(v___x_4009_);
lean_dec(v_a_3960_);
if (v_isShared_3988_ == 0)
{
lean_ctor_set(v___x_3987_, 1, v___x_4013_);
v___x_4016_ = v___x_3987_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_fst_3985_);
lean_ctor_set(v_reuseFailAlloc_4024_, 1, v___x_4013_);
v___x_4016_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
lean_object* v___x_4018_; 
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 1, v___x_4016_);
v___x_4018_ = v___x_3983_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_fst_3981_);
lean_ctor_set(v_reuseFailAlloc_4023_, 1, v___x_4016_);
v___x_4018_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4017_;
}
v_reusejp_4017_:
{
lean_object* v___x_4020_; 
if (v_isShared_3980_ == 0)
{
lean_ctor_set(v___x_3979_, 1, v___x_4018_);
v___x_4020_ = v___x_3979_;
goto v_reusejp_4019_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v_fst_3977_);
lean_ctor_set(v_reuseFailAlloc_4022_, 1, v___x_4018_);
v___x_4020_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4019_;
}
v_reusejp_4019_:
{
lean_object* v___x_4021_; 
v___x_4021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4021_, 0, v___x_4020_);
return v___x_4021_;
}
}
}
}
else
{
lean_object* v___x_4026_; uint8_t v_isShared_4027_; uint8_t v_isSharedCheck_4088_; 
lean_inc(v_stop_4008_);
lean_inc(v_start_4007_);
lean_inc_ref(v_array_4006_);
v_isSharedCheck_4088_ = !lean_is_exclusive(v_fst_3985_);
if (v_isSharedCheck_4088_ == 0)
{
lean_object* v_unused_4089_; lean_object* v_unused_4090_; lean_object* v_unused_4091_; 
v_unused_4089_ = lean_ctor_get(v_fst_3985_, 2);
lean_dec(v_unused_4089_);
v_unused_4090_ = lean_ctor_get(v_fst_3985_, 1);
lean_dec(v_unused_4090_);
v_unused_4091_ = lean_ctor_get(v_fst_3985_, 0);
lean_dec(v_unused_4091_);
v___x_4026_ = v_fst_3985_;
v_isShared_4027_ = v_isSharedCheck_4088_;
goto v_resetjp_4025_;
}
else
{
lean_dec(v_fst_3985_);
v___x_4026_ = lean_box(0);
v_isShared_4027_ = v_isSharedCheck_4088_;
goto v_resetjp_4025_;
}
v_resetjp_4025_:
{
lean_object* v___x_4028_; lean_object* v___x_4030_; 
v___x_4028_ = lean_nat_add(v_start_4007_, v___x_4010_);
lean_dec(v_start_4007_);
if (v_isShared_4027_ == 0)
{
lean_ctor_set(v___x_4026_, 1, v___x_4028_);
v___x_4030_ = v___x_4026_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v_array_4006_);
lean_ctor_set(v_reuseFailAlloc_4087_, 1, v___x_4028_);
lean_ctor_set(v_reuseFailAlloc_4087_, 2, v_stop_4008_);
v___x_4030_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
if (lean_obj_tag(v___x_4009_) == 1)
{
lean_object* v_val_4031_; lean_object* v___x_4033_; uint8_t v_isShared_4034_; uint8_t v_isSharedCheck_4075_; 
v_val_4031_ = lean_ctor_get(v___x_4009_, 0);
v_isSharedCheck_4075_ = !lean_is_exclusive(v___x_4009_);
if (v_isSharedCheck_4075_ == 0)
{
v___x_4033_ = v___x_4009_;
v_isShared_4034_ = v_isSharedCheck_4075_;
goto v_resetjp_4032_;
}
else
{
lean_inc(v_val_4031_);
lean_dec(v___x_4009_);
v___x_4033_ = lean_box(0);
v_isShared_4034_ = v_isSharedCheck_4075_;
goto v_resetjp_4032_;
}
v_resetjp_4032_:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4040_; 
v___x_4035_ = lean_box(0);
v___x_4036_ = lean_unsigned_to_nat(0u);
v___x_4037_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_4038_ = lean_array_get(v___x_4035_, v_val_4031_, v___x_4036_);
lean_dec(v_val_4031_);
lean_inc(v_a_3960_);
if (v_isShared_4034_ == 0)
{
lean_ctor_set(v___x_4033_, 0, v_a_3960_);
v___x_4040_ = v___x_4033_;
goto v_reusejp_4039_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v_a_3960_);
v___x_4040_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4039_;
}
v_reusejp_4039_:
{
uint8_t v___x_4041_; 
v___x_4041_ = l_Option_instDecidableEq___redArg(v___x_4037_, v___x_4038_, v___x_4040_);
if (v___x_4041_ == 0)
{
lean_object* v___x_4042_; lean_object* v___x_4043_; 
lean_dec_ref(v___x_4030_);
lean_dec_ref(v___x_4013_);
lean_del_object(v___x_3987_);
lean_del_object(v___x_3983_);
lean_dec(v_fst_3981_);
lean_del_object(v___x_3979_);
lean_dec(v_fst_3977_);
v___x_4042_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1);
v___x_4043_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v___x_4042_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_);
if (lean_obj_tag(v___x_4043_) == 0)
{
lean_object* v_a_4044_; lean_object* v___x_4046_; uint8_t v_isShared_4047_; uint8_t v_isSharedCheck_4053_; 
v_a_4044_ = lean_ctor_get(v___x_4043_, 0);
v_isSharedCheck_4053_ = !lean_is_exclusive(v___x_4043_);
if (v_isSharedCheck_4053_ == 0)
{
v___x_4046_ = v___x_4043_;
v_isShared_4047_ = v_isSharedCheck_4053_;
goto v_resetjp_4045_;
}
else
{
lean_inc(v_a_4044_);
lean_dec(v___x_4043_);
v___x_4046_ = lean_box(0);
v_isShared_4047_ = v_isSharedCheck_4053_;
goto v_resetjp_4045_;
}
v_resetjp_4045_:
{
if (lean_obj_tag(v_a_4044_) == 0)
{
lean_object* v_a_4048_; lean_object* v___x_4050_; 
lean_dec(v_a_3960_);
v_a_4048_ = lean_ctor_get(v_a_4044_, 0);
lean_inc(v_a_4048_);
lean_dec_ref_known(v_a_4044_, 1);
if (v_isShared_4047_ == 0)
{
lean_ctor_set(v___x_4046_, 0, v_a_4048_);
v___x_4050_ = v___x_4046_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v_a_4048_);
v___x_4050_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
return v___x_4050_;
}
}
else
{
lean_object* v_a_4052_; 
lean_del_object(v___x_4046_);
v_a_4052_ = lean_ctor_get(v_a_4044_, 0);
lean_inc(v_a_4052_);
lean_dec_ref_known(v_a_4044_, 1);
v_a_3968_ = v_a_4052_;
goto v___jp_3967_;
}
}
}
else
{
lean_object* v_a_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4061_; 
lean_dec(v_a_3960_);
v_a_4054_ = lean_ctor_get(v___x_4043_, 0);
v_isSharedCheck_4061_ = !lean_is_exclusive(v___x_4043_);
if (v_isSharedCheck_4061_ == 0)
{
v___x_4056_ = v___x_4043_;
v_isShared_4057_ = v_isSharedCheck_4061_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_a_4054_);
lean_dec(v___x_4043_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4061_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___x_4059_; 
if (v_isShared_4057_ == 0)
{
v___x_4059_ = v___x_4056_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v_a_4054_);
v___x_4059_ = v_reuseFailAlloc_4060_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
return v___x_4059_;
}
}
}
}
else
{
lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4066_; 
lean_inc(v_fst_3981_);
v___x_4062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4062_, 0, v_fst_3981_);
v___x_4063_ = lean_array_push(v_fst_3977_, v___x_4062_);
v___x_4064_ = lean_nat_add(v_fst_3981_, v___x_4010_);
lean_dec(v_fst_3981_);
if (v_isShared_3988_ == 0)
{
lean_ctor_set(v___x_3987_, 1, v___x_4013_);
lean_ctor_set(v___x_3987_, 0, v___x_4030_);
v___x_4066_ = v___x_3987_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v___x_4030_);
lean_ctor_set(v_reuseFailAlloc_4073_, 1, v___x_4013_);
v___x_4066_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
lean_object* v___x_4068_; 
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 1, v___x_4066_);
lean_ctor_set(v___x_3983_, 0, v___x_4064_);
v___x_4068_ = v___x_3983_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v___x_4064_);
lean_ctor_set(v_reuseFailAlloc_4072_, 1, v___x_4066_);
v___x_4068_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
lean_object* v___x_4070_; 
if (v_isShared_3980_ == 0)
{
lean_ctor_set(v___x_3979_, 1, v___x_4068_);
lean_ctor_set(v___x_3979_, 0, v___x_4063_);
v___x_4070_ = v___x_3979_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v___x_4063_);
lean_ctor_set(v_reuseFailAlloc_4071_, 1, v___x_4068_);
v___x_4070_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
v_a_3968_ = v___x_4070_;
goto v___jp_3967_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4079_; 
lean_dec(v___x_4009_);
v___x_4076_ = lean_box(0);
v___x_4077_ = lean_array_push(v_fst_3977_, v___x_4076_);
if (v_isShared_3988_ == 0)
{
lean_ctor_set(v___x_3987_, 1, v___x_4013_);
lean_ctor_set(v___x_3987_, 0, v___x_4030_);
v___x_4079_ = v___x_3987_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v___x_4030_);
lean_ctor_set(v_reuseFailAlloc_4086_, 1, v___x_4013_);
v___x_4079_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
lean_object* v___x_4081_; 
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 1, v___x_4079_);
v___x_4081_ = v___x_3983_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4085_; 
v_reuseFailAlloc_4085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4085_, 0, v_fst_3981_);
lean_ctor_set(v_reuseFailAlloc_4085_, 1, v___x_4079_);
v___x_4081_ = v_reuseFailAlloc_4085_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
lean_object* v___x_4083_; 
if (v_isShared_3980_ == 0)
{
lean_ctor_set(v___x_3979_, 1, v___x_4081_);
lean_ctor_set(v___x_3979_, 0, v___x_4077_);
v___x_4083_ = v___x_3979_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v___x_4077_);
lean_ctor_set(v_reuseFailAlloc_4084_, 1, v___x_4081_);
v___x_4083_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
v_a_3968_ = v___x_4083_;
goto v___jp_3967_;
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
}
}
}
}
v___jp_3967_:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; 
v___x_3969_ = lean_unsigned_to_nat(1u);
v___x_3970_ = lean_nat_add(v_a_3960_, v___x_3969_);
lean_dec(v_a_3960_);
v_a_3960_ = v___x_3970_;
v_b_3961_ = v_a_3968_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object* v_upperBound_4103_, lean_object* v_a_4104_, lean_object* v_b_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_){
_start:
{
lean_object* v_res_4111_; 
v_res_4111_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4103_, v_a_4104_, v_b_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
lean_dec(v___y_4109_);
lean_dec_ref(v___y_4108_);
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4106_);
lean_dec(v_upperBound_4103_);
return v_res_4111_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
v___x_4113_ = ((lean_object*)(l_Lean_Elab_getFixedParamPerms___lam__0___closed__0));
v___x_4114_ = lean_unsigned_to_nat(4u);
v___x_4115_ = lean_unsigned_to_nat(275u);
v___x_4116_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_4117_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4118_ = l_mkPanicMessageWithDecl(v___x_4117_, v___x_4116_, v___x_4115_, v___x_4114_, v___x_4113_);
return v___x_4118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object* v_a_4119_, lean_object* v___x_4120_, lean_object* v___x_4121_, lean_object* v_xs_4122_, lean_object* v_x_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_){
_start:
{
lean_object* v_graph_4129_; lean_object* v_revDeps_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4183_; 
v_graph_4129_ = lean_ctor_get(v_a_4119_, 0);
v_revDeps_4130_ = lean_ctor_get(v_a_4119_, 1);
v_isSharedCheck_4183_ = !lean_is_exclusive(v_a_4119_);
if (v_isSharedCheck_4183_ == 0)
{
v___x_4132_ = v_a_4119_;
v_isShared_4133_ = v_isSharedCheck_4183_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_revDeps_4130_);
lean_inc(v_graph_4129_);
lean_dec(v_a_4119_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4183_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; uint8_t v___x_4137_; 
v___x_4134_ = lean_array_get_borrowed(v___x_4120_, v_graph_4129_, v___x_4121_);
v___x_4135_ = lean_array_get_size(v_xs_4122_);
v___x_4136_ = lean_array_get_size(v___x_4134_);
v___x_4137_ = lean_nat_dec_eq(v___x_4135_, v___x_4136_);
if (v___x_4137_ == 0)
{
lean_object* v___x_4138_; lean_object* v___x_4139_; 
lean_del_object(v___x_4132_);
lean_dec_ref(v_revDeps_4130_);
lean_dec_ref(v_graph_4129_);
lean_dec_ref(v_xs_4122_);
lean_dec(v___x_4121_);
v___x_4138_ = lean_obj_once(&l_Lean_Elab_getFixedParamPerms___lam__0___closed__1, &l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once, _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1);
v___x_4139_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v___x_4138_, v___y_4124_, v___y_4125_, v___y_4126_, v___y_4127_);
return v___x_4139_;
}
else
{
lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4144_; 
v___x_4140_ = lean_mk_empty_array_with_capacity(v___x_4121_);
lean_inc_n(v___x_4121_, 2);
v___x_4141_ = l_Array_toSubarray___redArg(v_xs_4122_, v___x_4121_, v___x_4135_);
lean_inc(v___x_4134_);
v___x_4142_ = l_Array_toSubarray___redArg(v___x_4134_, v___x_4121_, v___x_4136_);
if (v_isShared_4133_ == 0)
{
lean_ctor_set(v___x_4132_, 1, v___x_4142_);
lean_ctor_set(v___x_4132_, 0, v___x_4141_);
v___x_4144_ = v___x_4132_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v___x_4141_);
lean_ctor_set(v_reuseFailAlloc_4182_, 1, v___x_4142_);
v___x_4144_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; 
lean_inc(v___x_4121_);
v___x_4145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4145_, 0, v___x_4121_);
lean_ctor_set(v___x_4145_, 1, v___x_4144_);
v___x_4146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4146_, 0, v___x_4140_);
lean_ctor_set(v___x_4146_, 1, v___x_4145_);
v___x_4147_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v___x_4135_, v___x_4121_, v___x_4146_, v___y_4124_, v___y_4125_, v___y_4126_, v___y_4127_);
if (lean_obj_tag(v___x_4147_) == 0)
{
lean_object* v_a_4148_; lean_object* v_snd_4149_; lean_object* v_fst_4150_; lean_object* v_fst_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; 
v_a_4148_ = lean_ctor_get(v___x_4147_, 0);
lean_inc(v_a_4148_);
lean_dec_ref_known(v___x_4147_, 1);
v_snd_4149_ = lean_ctor_get(v_a_4148_, 1);
lean_inc(v_snd_4149_);
v_fst_4150_ = lean_ctor_get(v_a_4148_, 0);
lean_inc_n(v_fst_4150_, 2);
lean_dec(v_a_4148_);
v_fst_4151_ = lean_ctor_get(v_snd_4149_, 0);
lean_inc(v_fst_4151_);
lean_dec(v_snd_4149_);
v___x_4152_ = lean_unsigned_to_nat(1u);
v___x_4153_ = lean_array_get_size(v_graph_4129_);
v___x_4154_ = lean_mk_empty_array_with_capacity(v___x_4152_);
v___x_4155_ = lean_array_push(v___x_4154_, v_fst_4150_);
v___x_4156_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v___x_4153_, v_graph_4129_, v_fst_4150_, v___x_4152_, v___x_4155_, v___y_4124_, v___y_4125_, v___y_4126_, v___y_4127_);
lean_dec(v_fst_4150_);
lean_dec_ref(v_graph_4129_);
if (lean_obj_tag(v___x_4156_) == 0)
{
lean_object* v_a_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4165_; 
v_a_4157_ = lean_ctor_get(v___x_4156_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v___x_4156_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4159_ = v___x_4156_;
v_isShared_4160_ = v_isSharedCheck_4165_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_a_4157_);
lean_dec(v___x_4156_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4165_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___x_4161_; lean_object* v___x_4163_; 
v___x_4161_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4161_, 0, v_fst_4151_);
lean_ctor_set(v___x_4161_, 1, v_a_4157_);
lean_ctor_set(v___x_4161_, 2, v_revDeps_4130_);
if (v_isShared_4160_ == 0)
{
lean_ctor_set(v___x_4159_, 0, v___x_4161_);
v___x_4163_ = v___x_4159_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v___x_4161_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
}
else
{
lean_object* v_a_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4173_; 
lean_dec(v_fst_4151_);
lean_dec_ref(v_revDeps_4130_);
v_a_4166_ = lean_ctor_get(v___x_4156_, 0);
v_isSharedCheck_4173_ = !lean_is_exclusive(v___x_4156_);
if (v_isSharedCheck_4173_ == 0)
{
v___x_4168_ = v___x_4156_;
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
else
{
lean_inc(v_a_4166_);
lean_dec(v___x_4156_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
lean_object* v___x_4171_; 
if (v_isShared_4169_ == 0)
{
v___x_4171_ = v___x_4168_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v_a_4166_);
v___x_4171_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
return v___x_4171_;
}
}
}
}
else
{
lean_object* v_a_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4181_; 
lean_dec_ref(v_revDeps_4130_);
lean_dec_ref(v_graph_4129_);
v_a_4174_ = lean_ctor_get(v___x_4147_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4147_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4176_ = v___x_4147_;
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_a_4174_);
lean_dec(v___x_4147_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
lean_object* v___x_4179_; 
if (v_isShared_4177_ == 0)
{
v___x_4179_ = v___x_4176_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v_a_4174_);
v___x_4179_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
return v___x_4179_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object* v_a_4184_, lean_object* v___x_4185_, lean_object* v___x_4186_, lean_object* v_xs_4187_, lean_object* v_x_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_){
_start:
{
lean_object* v_res_4194_; 
v_res_4194_ = l_Lean_Elab_getFixedParamPerms___lam__0(v_a_4184_, v___x_4185_, v___x_4186_, v_xs_4187_, v_x_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_);
lean_dec(v___y_4192_);
lean_dec_ref(v___y_4191_);
lean_dec(v___y_4190_);
lean_dec_ref(v___y_4189_);
lean_dec_ref(v_x_4188_);
lean_dec_ref(v___x_4185_);
return v_res_4194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object* v_preDefs_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_){
_start:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; 
v___x_4201_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_4202_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
lean_inc_ref(v_preDefs_4195_);
v___x_4203_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_4195_, v_a_4196_, v_a_4197_, v_a_4198_, v_a_4199_);
if (lean_obj_tag(v___x_4203_) == 0)
{
lean_object* v_a_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v_value_4207_; lean_object* v___f_4208_; uint8_t v___x_4209_; lean_object* v___x_4210_; 
v_a_4204_ = lean_ctor_get(v___x_4203_, 0);
lean_inc(v_a_4204_);
lean_dec_ref_known(v___x_4203_, 1);
v___x_4205_ = lean_unsigned_to_nat(0u);
v___x_4206_ = lean_array_get(v___x_4201_, v_preDefs_4195_, v___x_4205_);
lean_dec_ref(v_preDefs_4195_);
v_value_4207_ = lean_ctor_get(v___x_4206_, 7);
lean_inc_ref(v_value_4207_);
lean_dec(v___x_4206_);
v___f_4208_ = lean_alloc_closure((void*)(l_Lean_Elab_getFixedParamPerms___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4208_, 0, v_a_4204_);
lean_closure_set(v___f_4208_, 1, v___x_4202_);
lean_closure_set(v___f_4208_, 2, v___x_4205_);
v___x_4209_ = 0;
v___x_4210_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_4207_, v___f_4208_, v___x_4209_, v_a_4196_, v_a_4197_, v_a_4198_, v_a_4199_);
return v___x_4210_;
}
else
{
lean_object* v_a_4211_; lean_object* v___x_4213_; uint8_t v_isShared_4214_; uint8_t v_isSharedCheck_4218_; 
lean_dec_ref(v_preDefs_4195_);
v_a_4211_ = lean_ctor_get(v___x_4203_, 0);
v_isSharedCheck_4218_ = !lean_is_exclusive(v___x_4203_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4213_ = v___x_4203_;
v_isShared_4214_ = v_isSharedCheck_4218_;
goto v_resetjp_4212_;
}
else
{
lean_inc(v_a_4211_);
lean_dec(v___x_4203_);
v___x_4213_ = lean_box(0);
v_isShared_4214_ = v_isSharedCheck_4218_;
goto v_resetjp_4212_;
}
v_resetjp_4212_:
{
lean_object* v___x_4216_; 
if (v_isShared_4214_ == 0)
{
v___x_4216_ = v___x_4213_;
goto v_reusejp_4215_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v_a_4211_);
v___x_4216_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4215_;
}
v_reusejp_4215_:
{
return v___x_4216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object* v_preDefs_4219_, lean_object* v_a_4220_, lean_object* v_a_4221_, lean_object* v_a_4222_, lean_object* v_a_4223_, lean_object* v_a_4224_){
_start:
{
lean_object* v_res_4225_; 
v_res_4225_ = l_Lean_Elab_getFixedParamPerms(v_preDefs_4219_, v_a_4220_, v_a_4221_, v_a_4222_, v_a_4223_);
lean_dec(v_a_4223_);
lean_dec_ref(v_a_4222_);
lean_dec(v_a_4221_);
lean_dec_ref(v_a_4220_);
return v_res_4225_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object* v_upperBound_4226_, lean_object* v___x_4227_, lean_object* v___x_4228_, lean_object* v_inst_4229_, lean_object* v_R_4230_, lean_object* v_a_4231_, lean_object* v_b_4232_, lean_object* v_c_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_){
_start:
{
lean_object* v___x_4239_; 
v___x_4239_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_4226_, v___x_4227_, v___x_4228_, v_a_4231_, v_b_4232_, v___y_4234_, v___y_4235_, v___y_4236_, v___y_4237_);
return v___x_4239_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object* v_upperBound_4240_, lean_object* v___x_4241_, lean_object* v___x_4242_, lean_object* v_inst_4243_, lean_object* v_R_4244_, lean_object* v_a_4245_, lean_object* v_b_4246_, lean_object* v_c_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_){
_start:
{
lean_object* v_res_4253_; 
v_res_4253_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(v_upperBound_4240_, v___x_4241_, v___x_4242_, v_inst_4243_, v_R_4244_, v_a_4245_, v_b_4246_, v_c_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_);
lean_dec(v___y_4251_);
lean_dec_ref(v___y_4250_);
lean_dec(v___y_4249_);
lean_dec_ref(v___y_4248_);
lean_dec_ref(v___x_4242_);
lean_dec_ref(v___x_4241_);
lean_dec(v_upperBound_4240_);
return v_res_4253_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object* v_upperBound_4254_, lean_object* v_inst_4255_, lean_object* v_R_4256_, lean_object* v_a_4257_, lean_object* v_b_4258_, lean_object* v_c_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_){
_start:
{
lean_object* v___x_4265_; 
v___x_4265_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4254_, v_a_4257_, v_b_4258_, v___y_4260_, v___y_4261_, v___y_4262_, v___y_4263_);
return v___x_4265_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object* v_upperBound_4266_, lean_object* v_inst_4267_, lean_object* v_R_4268_, lean_object* v_a_4269_, lean_object* v_b_4270_, lean_object* v_c_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_){
_start:
{
lean_object* v_res_4277_; 
v_res_4277_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(v_upperBound_4266_, v_inst_4267_, v_R_4268_, v_a_4269_, v_b_4270_, v_c_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec(v_upperBound_4266_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object* v_as_4278_, size_t v_i_4279_, size_t v_stop_4280_, lean_object* v_b_4281_){
_start:
{
uint8_t v___x_4282_; 
v___x_4282_ = lean_usize_dec_eq(v_i_4279_, v_stop_4280_);
if (v___x_4282_ == 0)
{
size_t v___x_4283_; size_t v___x_4284_; lean_object* v___x_4285_; 
v___x_4283_ = ((size_t)1ULL);
v___x_4284_ = lean_usize_sub(v_i_4279_, v___x_4283_);
v___x_4285_ = lean_array_uget_borrowed(v_as_4278_, v___x_4284_);
if (lean_obj_tag(v___x_4285_) == 0)
{
v_i_4279_ = v___x_4284_;
goto _start;
}
else
{
lean_object* v___x_4287_; lean_object* v___x_4288_; 
v___x_4287_ = lean_unsigned_to_nat(1u);
v___x_4288_ = lean_nat_add(v_b_4281_, v___x_4287_);
lean_dec(v_b_4281_);
v_i_4279_ = v___x_4284_;
v_b_4281_ = v___x_4288_;
goto _start;
}
}
else
{
return v_b_4281_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object* v_as_4290_, lean_object* v_i_4291_, lean_object* v_stop_4292_, lean_object* v_b_4293_){
_start:
{
size_t v_i_boxed_4294_; size_t v_stop_boxed_4295_; lean_object* v_res_4296_; 
v_i_boxed_4294_ = lean_unbox_usize(v_i_4291_);
lean_dec(v_i_4291_);
v_stop_boxed_4295_ = lean_unbox_usize(v_stop_4292_);
lean_dec(v_stop_4292_);
v_res_4296_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_as_4290_, v_i_boxed_4294_, v_stop_boxed_4295_, v_b_4293_);
lean_dec_ref(v_as_4290_);
return v_res_4296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object* v_perm_4297_){
_start:
{
lean_object* v___x_4298_; lean_object* v___x_4299_; uint8_t v___x_4300_; 
v___x_4298_ = lean_unsigned_to_nat(0u);
v___x_4299_ = lean_array_get_size(v_perm_4297_);
v___x_4300_ = lean_nat_dec_lt(v___x_4298_, v___x_4299_);
if (v___x_4300_ == 0)
{
return v___x_4298_;
}
else
{
size_t v___x_4301_; size_t v___x_4302_; lean_object* v___x_4303_; 
v___x_4301_ = lean_usize_of_nat(v___x_4299_);
v___x_4302_ = ((size_t)0ULL);
v___x_4303_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_perm_4297_, v___x_4301_, v___x_4302_, v___x_4298_);
return v___x_4303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object* v_perm_4304_){
_start:
{
lean_object* v_res_4305_; 
v_res_4305_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4304_);
lean_dec_ref(v_perm_4304_);
return v_res_4305_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object* v_perm_4306_, lean_object* v_i_4307_){
_start:
{
lean_object* v___x_4308_; uint8_t v___x_4309_; 
v___x_4308_ = lean_array_get_size(v_perm_4306_);
v___x_4309_ = lean_nat_dec_lt(v_i_4307_, v___x_4308_);
if (v___x_4309_ == 0)
{
return v___x_4309_;
}
else
{
lean_object* v___x_4310_; 
v___x_4310_ = lean_array_fget_borrowed(v_perm_4306_, v_i_4307_);
if (lean_obj_tag(v___x_4310_) == 0)
{
uint8_t v___x_4311_; 
v___x_4311_ = 0;
return v___x_4311_;
}
else
{
return v___x_4309_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object* v_perm_4312_, lean_object* v_i_4313_){
_start:
{
uint8_t v_res_4314_; lean_object* v_r_4315_; 
v_res_4314_ = l_Lean_Elab_FixedParamPerm_isFixed(v_perm_4312_, v_i_4313_);
lean_dec(v_i_4313_);
lean_dec_ref(v_perm_4312_);
v_r_4315_ = lean_box(v_res_4314_);
return v_r_4315_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object* v_msg_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_){
_start:
{
lean_object* v___f_4322_; lean_object* v___x_757__overap_4323_; lean_object* v___x_4324_; 
v___f_4322_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_757__overap_4323_ = lean_panic_fn_borrowed(v___f_4322_, v_msg_4316_);
lean_inc(v___y_4320_);
lean_inc_ref(v___y_4319_);
lean_inc(v___y_4318_);
lean_inc_ref(v___y_4317_);
v___x_4324_ = lean_apply_5(v___x_757__overap_4323_, v___y_4317_, v___y_4318_, v___y_4319_, v___y_4320_, lean_box(0));
return v___x_4324_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object* v_msg_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_){
_start:
{
lean_object* v_res_4331_; 
v_res_4331_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4325_, v___y_4326_, v___y_4327_, v___y_4328_, v___y_4329_);
lean_dec(v___y_4329_);
lean_dec_ref(v___y_4328_);
lean_dec(v___y_4327_);
lean_dec_ref(v___y_4326_);
return v_res_4331_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object* v_00_u03b1_4332_, lean_object* v_msg_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_){
_start:
{
lean_object* v___x_4339_; 
v___x_4339_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4333_, v___y_4334_, v___y_4335_, v___y_4336_, v___y_4337_);
return v___x_4339_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object* v_00_u03b1_4340_, lean_object* v_msg_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_){
_start:
{
lean_object* v_res_4347_; 
v_res_4347_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(v_00_u03b1_4340_, v_msg_4341_, v___y_4342_, v___y_4343_, v___y_4344_, v___y_4345_);
lean_dec(v___y_4345_);
lean_dec_ref(v___y_4344_);
lean_dec(v___y_4343_);
lean_dec_ref(v___y_4342_);
return v_res_4347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object* v_type_4348_, lean_object* v_maxFVars_x3f_4349_, lean_object* v_k_4350_, uint8_t v_cleanupAnnotations_4351_, uint8_t v_whnfType_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_, lean_object* v___y_4355_, lean_object* v___y_4356_){
_start:
{
lean_object* v___f_4358_; lean_object* v___x_4359_; 
v___f_4358_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4358_, 0, v_k_4350_);
v___x_4359_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4348_, v_maxFVars_x3f_4349_, v___f_4358_, v_cleanupAnnotations_4351_, v_whnfType_4352_, v___y_4353_, v___y_4354_, v___y_4355_, v___y_4356_);
if (lean_obj_tag(v___x_4359_) == 0)
{
lean_object* v_a_4360_; lean_object* v___x_4362_; uint8_t v_isShared_4363_; uint8_t v_isSharedCheck_4367_; 
v_a_4360_ = lean_ctor_get(v___x_4359_, 0);
v_isSharedCheck_4367_ = !lean_is_exclusive(v___x_4359_);
if (v_isSharedCheck_4367_ == 0)
{
v___x_4362_ = v___x_4359_;
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
else
{
lean_inc(v_a_4360_);
lean_dec(v___x_4359_);
v___x_4362_ = lean_box(0);
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
v_resetjp_4361_:
{
lean_object* v___x_4365_; 
if (v_isShared_4363_ == 0)
{
v___x_4365_ = v___x_4362_;
goto v_reusejp_4364_;
}
else
{
lean_object* v_reuseFailAlloc_4366_; 
v_reuseFailAlloc_4366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4366_, 0, v_a_4360_);
v___x_4365_ = v_reuseFailAlloc_4366_;
goto v_reusejp_4364_;
}
v_reusejp_4364_:
{
return v___x_4365_;
}
}
}
else
{
lean_object* v_a_4368_; lean_object* v___x_4370_; uint8_t v_isShared_4371_; uint8_t v_isSharedCheck_4375_; 
v_a_4368_ = lean_ctor_get(v___x_4359_, 0);
v_isSharedCheck_4375_ = !lean_is_exclusive(v___x_4359_);
if (v_isSharedCheck_4375_ == 0)
{
v___x_4370_ = v___x_4359_;
v_isShared_4371_ = v_isSharedCheck_4375_;
goto v_resetjp_4369_;
}
else
{
lean_inc(v_a_4368_);
lean_dec(v___x_4359_);
v___x_4370_ = lean_box(0);
v_isShared_4371_ = v_isSharedCheck_4375_;
goto v_resetjp_4369_;
}
v_resetjp_4369_:
{
lean_object* v___x_4373_; 
if (v_isShared_4371_ == 0)
{
v___x_4373_ = v___x_4370_;
goto v_reusejp_4372_;
}
else
{
lean_object* v_reuseFailAlloc_4374_; 
v_reuseFailAlloc_4374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4374_, 0, v_a_4368_);
v___x_4373_ = v_reuseFailAlloc_4374_;
goto v_reusejp_4372_;
}
v_reusejp_4372_:
{
return v___x_4373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object* v_type_4376_, lean_object* v_maxFVars_x3f_4377_, lean_object* v_k_4378_, lean_object* v_cleanupAnnotations_4379_, lean_object* v_whnfType_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4386_; uint8_t v_whnfType_boxed_4387_; lean_object* v_res_4388_; 
v_cleanupAnnotations_boxed_4386_ = lean_unbox(v_cleanupAnnotations_4379_);
v_whnfType_boxed_4387_ = lean_unbox(v_whnfType_4380_);
v_res_4388_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4376_, v_maxFVars_x3f_4377_, v_k_4378_, v_cleanupAnnotations_boxed_4386_, v_whnfType_boxed_4387_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
lean_dec(v___y_4384_);
lean_dec_ref(v___y_4383_);
lean_dec(v___y_4382_);
lean_dec_ref(v___y_4381_);
return v_res_4388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object* v_00_u03b1_4389_, lean_object* v_type_4390_, lean_object* v_maxFVars_x3f_4391_, lean_object* v_k_4392_, uint8_t v_cleanupAnnotations_4393_, uint8_t v_whnfType_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_){
_start:
{
lean_object* v___x_4400_; 
v___x_4400_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4390_, v_maxFVars_x3f_4391_, v_k_4392_, v_cleanupAnnotations_4393_, v_whnfType_4394_, v___y_4395_, v___y_4396_, v___y_4397_, v___y_4398_);
return v___x_4400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object* v_00_u03b1_4401_, lean_object* v_type_4402_, lean_object* v_maxFVars_x3f_4403_, lean_object* v_k_4404_, lean_object* v_cleanupAnnotations_4405_, lean_object* v_whnfType_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4412_; uint8_t v_whnfType_boxed_4413_; lean_object* v_res_4414_; 
v_cleanupAnnotations_boxed_4412_ = lean_unbox(v_cleanupAnnotations_4405_);
v_whnfType_boxed_4413_ = lean_unbox(v_whnfType_4406_);
v_res_4414_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(v_00_u03b1_4401_, v_type_4402_, v_maxFVars_x3f_4403_, v_k_4404_, v_cleanupAnnotations_boxed_4412_, v_whnfType_boxed_4413_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_);
lean_dec(v___y_4410_);
lean_dec_ref(v___y_4409_);
lean_dec(v___y_4408_);
lean_dec_ref(v___y_4407_);
return v_res_4414_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; 
v___x_4417_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1));
v___x_4418_ = lean_unsigned_to_nat(6u);
v___x_4419_ = lean_unsigned_to_nat(329u);
v___x_4420_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4421_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4422_ = l_mkPanicMessageWithDecl(v___x_4421_, v___x_4420_, v___x_4419_, v___x_4418_, v___x_4417_);
return v___x_4422_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; 
v___x_4426_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0));
v___x_4427_ = lean_unsigned_to_nat(8u);
v___x_4428_ = lean_unsigned_to_nat(322u);
v___x_4429_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4430_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4431_ = l_mkPanicMessageWithDecl(v___x_4430_, v___x_4429_, v___x_4428_, v___x_4427_, v___x_4426_);
return v___x_4431_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; 
v___x_4433_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4434_ = lean_unsigned_to_nat(8u);
v___x_4435_ = lean_unsigned_to_nat(325u);
v___x_4436_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4437_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4438_ = l_mkPanicMessageWithDecl(v___x_4437_, v___x_4436_, v___x_4435_, v___x_4434_, v___x_4433_);
return v___x_4438_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; 
v___x_4440_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4));
v___x_4441_ = lean_unsigned_to_nat(8u);
v___x_4442_ = lean_unsigned_to_nat(324u);
v___x_4443_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4444_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4445_ = l_mkPanicMessageWithDecl(v___x_4444_, v___x_4443_, v___x_4442_, v___x_4441_, v___x_4440_);
return v___x_4445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object* v___x_4446_, lean_object* v___x_4447_, lean_object* v_xs_4448_, lean_object* v_val_4449_, lean_object* v_i_4450_, lean_object* v_perm_4451_, lean_object* v_k_4452_, lean_object* v_xs_x27_4453_, lean_object* v_type_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_){
_start:
{
lean_object* v___x_4460_; uint8_t v___x_4461_; 
v___x_4460_ = lean_array_get_size(v_xs_x27_4453_);
v___x_4461_ = lean_nat_dec_eq(v___x_4460_, v___x_4446_);
if (v___x_4461_ == 0)
{
lean_object* v___x_4462_; lean_object* v___x_4463_; 
lean_dec_ref(v_type_4454_);
lean_dec_ref(v_k_4452_);
lean_dec_ref(v_perm_4451_);
lean_dec_ref(v_xs_4448_);
v___x_4462_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1);
v___x_4463_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4462_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_);
return v___x_4463_;
}
else
{
lean_object* v___x_4464_; lean_object* v_x_4465_; lean_object* v___x_4466_; 
v___x_4464_ = lean_unsigned_to_nat(0u);
v_x_4465_ = lean_array_get_borrowed(v___x_4447_, v_xs_x27_4453_, v___x_4464_);
lean_inc(v___y_4458_);
lean_inc_ref(v___y_4457_);
lean_inc(v___y_4456_);
lean_inc_ref(v___y_4455_);
lean_inc(v_x_4465_);
v___x_4466_ = lean_infer_type(v_x_4465_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_);
if (lean_obj_tag(v___x_4466_) == 0)
{
lean_object* v_a_4467_; uint8_t v___x_4468_; 
v_a_4467_ = lean_ctor_get(v___x_4466_, 0);
lean_inc(v_a_4467_);
lean_dec_ref_known(v___x_4466_, 1);
v___x_4468_ = l_Lean_Expr_hasLooseBVars(v_a_4467_);
lean_dec(v_a_4467_);
if (v___x_4468_ == 0)
{
lean_object* v___x_4469_; uint8_t v___x_4470_; 
v___x_4469_ = lean_array_get_size(v_xs_4448_);
v___x_4470_ = lean_nat_dec_lt(v_val_4449_, v___x_4469_);
if (v___x_4470_ == 0)
{
lean_object* v___x_4471_; lean_object* v___x_4472_; 
lean_dec_ref(v_type_4454_);
lean_dec_ref(v_k_4452_);
lean_dec_ref(v_perm_4451_);
lean_dec_ref(v_xs_4448_);
v___x_4471_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3);
v___x_4472_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4471_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_);
return v___x_4472_;
}
else
{
lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; 
v___x_4473_ = lean_nat_add(v_i_4450_, v___x_4446_);
lean_inc(v_x_4465_);
v___x_4474_ = lean_array_set(v_xs_4448_, v_val_4449_, v_x_4465_);
v___x_4475_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4451_, v_k_4452_, v___x_4473_, v_type_4454_, v___x_4474_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_);
return v___x_4475_;
}
}
else
{
lean_object* v___x_4476_; lean_object* v___x_4477_; 
lean_dec_ref(v_type_4454_);
lean_dec_ref(v_k_4452_);
lean_dec_ref(v_perm_4451_);
lean_dec_ref(v_xs_4448_);
v___x_4476_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5);
v___x_4477_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4476_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_);
return v___x_4477_;
}
}
else
{
lean_object* v_a_4478_; lean_object* v___x_4480_; uint8_t v_isShared_4481_; uint8_t v_isSharedCheck_4485_; 
lean_dec_ref(v_type_4454_);
lean_dec_ref(v_k_4452_);
lean_dec_ref(v_perm_4451_);
lean_dec_ref(v_xs_4448_);
v_a_4478_ = lean_ctor_get(v___x_4466_, 0);
v_isSharedCheck_4485_ = !lean_is_exclusive(v___x_4466_);
if (v_isSharedCheck_4485_ == 0)
{
v___x_4480_ = v___x_4466_;
v_isShared_4481_ = v_isSharedCheck_4485_;
goto v_resetjp_4479_;
}
else
{
lean_inc(v_a_4478_);
lean_dec(v___x_4466_);
v___x_4480_ = lean_box(0);
v_isShared_4481_ = v_isSharedCheck_4485_;
goto v_resetjp_4479_;
}
v_resetjp_4479_:
{
lean_object* v___x_4483_; 
if (v_isShared_4481_ == 0)
{
v___x_4483_ = v___x_4480_;
goto v_reusejp_4482_;
}
else
{
lean_object* v_reuseFailAlloc_4484_; 
v_reuseFailAlloc_4484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4484_, 0, v_a_4478_);
v___x_4483_ = v_reuseFailAlloc_4484_;
goto v_reusejp_4482_;
}
v_reusejp_4482_:
{
return v___x_4483_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object* v___x_4486_, lean_object* v___x_4487_, lean_object* v_xs_4488_, lean_object* v_val_4489_, lean_object* v_i_4490_, lean_object* v_perm_4491_, lean_object* v_k_4492_, lean_object* v_xs_x27_4493_, lean_object* v_type_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_){
_start:
{
lean_object* v_res_4500_; 
v_res_4500_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(v___x_4486_, v___x_4487_, v_xs_4488_, v_val_4489_, v_i_4490_, v_perm_4491_, v_k_4492_, v_xs_x27_4493_, v_type_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_);
lean_dec(v___y_4498_);
lean_dec_ref(v___y_4497_);
lean_dec(v___y_4496_);
lean_dec_ref(v___y_4495_);
lean_dec_ref(v_xs_x27_4493_);
lean_dec(v_i_4490_);
lean_dec(v_val_4489_);
lean_dec_ref(v___x_4487_);
lean_dec(v___x_4486_);
return v_res_4500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object* v_perm_4501_, lean_object* v_k_4502_, lean_object* v_i_4503_, lean_object* v_type_4504_, lean_object* v_xs_4505_, lean_object* v_a_4506_, lean_object* v_a_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_){
_start:
{
lean_object* v___x_4511_; uint8_t v___x_4512_; 
v___x_4511_ = lean_array_get_size(v_perm_4501_);
v___x_4512_ = lean_nat_dec_lt(v_i_4503_, v___x_4511_);
if (v___x_4512_ == 0)
{
lean_object* v___x_4513_; 
lean_dec_ref(v_type_4504_);
lean_dec(v_i_4503_);
lean_dec_ref(v_perm_4501_);
lean_inc(v_a_4509_);
lean_inc_ref(v_a_4508_);
lean_inc(v_a_4507_);
lean_inc_ref(v_a_4506_);
v___x_4513_ = lean_apply_6(v_k_4502_, v_xs_4505_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_, lean_box(0));
return v___x_4513_;
}
else
{
lean_object* v___x_4514_; 
v___x_4514_ = lean_array_fget_borrowed(v_perm_4501_, v_i_4503_);
if (lean_obj_tag(v___x_4514_) == 0)
{
lean_object* v___x_4515_; 
lean_inc(v_a_4509_);
lean_inc_ref(v_a_4508_);
lean_inc(v_a_4507_);
lean_inc_ref(v_a_4506_);
v___x_4515_ = lean_whnf(v_type_4504_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_);
if (lean_obj_tag(v___x_4515_) == 0)
{
lean_object* v_a_4516_; uint8_t v___x_4517_; 
v_a_4516_ = lean_ctor_get(v___x_4515_, 0);
lean_inc(v_a_4516_);
lean_dec_ref_known(v___x_4515_, 1);
v___x_4517_ = l_Lean_Expr_isForall(v_a_4516_);
if (v___x_4517_ == 0)
{
lean_object* v___x_4518_; lean_object* v___x_4519_; 
lean_dec(v_a_4516_);
lean_dec_ref(v_xs_4505_);
lean_dec(v_i_4503_);
lean_dec_ref(v_k_4502_);
lean_dec_ref(v_perm_4501_);
v___x_4518_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2);
v___x_4519_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4518_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_);
return v___x_4519_;
}
else
{
lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
v___x_4520_ = lean_unsigned_to_nat(1u);
v___x_4521_ = lean_nat_add(v_i_4503_, v___x_4520_);
lean_dec(v_i_4503_);
v___x_4522_ = l_Lean_Expr_bindingBody_x21(v_a_4516_);
lean_dec(v_a_4516_);
v_i_4503_ = v___x_4521_;
v_type_4504_ = v___x_4522_;
goto _start;
}
}
else
{
lean_object* v_a_4524_; lean_object* v___x_4526_; uint8_t v_isShared_4527_; uint8_t v_isSharedCheck_4531_; 
lean_dec_ref(v_xs_4505_);
lean_dec(v_i_4503_);
lean_dec_ref(v_k_4502_);
lean_dec_ref(v_perm_4501_);
v_a_4524_ = lean_ctor_get(v___x_4515_, 0);
v_isSharedCheck_4531_ = !lean_is_exclusive(v___x_4515_);
if (v_isSharedCheck_4531_ == 0)
{
v___x_4526_ = v___x_4515_;
v_isShared_4527_ = v_isSharedCheck_4531_;
goto v_resetjp_4525_;
}
else
{
lean_inc(v_a_4524_);
lean_dec(v___x_4515_);
v___x_4526_ = lean_box(0);
v_isShared_4527_ = v_isSharedCheck_4531_;
goto v_resetjp_4525_;
}
v_resetjp_4525_:
{
lean_object* v___x_4529_; 
if (v_isShared_4527_ == 0)
{
v___x_4529_ = v___x_4526_;
goto v_reusejp_4528_;
}
else
{
lean_object* v_reuseFailAlloc_4530_; 
v_reuseFailAlloc_4530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4530_, 0, v_a_4524_);
v___x_4529_ = v_reuseFailAlloc_4530_;
goto v_reusejp_4528_;
}
v_reusejp_4528_:
{
return v___x_4529_;
}
}
}
}
else
{
lean_object* v_val_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___f_4535_; lean_object* v___x_4536_; uint8_t v___x_4537_; lean_object* v___x_4538_; 
v_val_4532_ = lean_ctor_get(v___x_4514_, 0);
lean_inc(v_val_4532_);
v___x_4533_ = l_Lean_instInhabitedExpr;
v___x_4534_ = lean_unsigned_to_nat(1u);
v___f_4535_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed), 14, 7);
lean_closure_set(v___f_4535_, 0, v___x_4534_);
lean_closure_set(v___f_4535_, 1, v___x_4533_);
lean_closure_set(v___f_4535_, 2, v_xs_4505_);
lean_closure_set(v___f_4535_, 3, v_val_4532_);
lean_closure_set(v___f_4535_, 4, v_i_4503_);
lean_closure_set(v___f_4535_, 5, v_perm_4501_);
lean_closure_set(v___f_4535_, 6, v_k_4502_);
v___x_4536_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4537_ = 0;
v___x_4538_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4504_, v___x_4536_, v___f_4535_, v___x_4512_, v___x_4537_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_);
return v___x_4538_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object* v_perm_4539_, lean_object* v_k_4540_, lean_object* v_i_4541_, lean_object* v_type_4542_, lean_object* v_xs_4543_, lean_object* v_a_4544_, lean_object* v_a_4545_, lean_object* v_a_4546_, lean_object* v_a_4547_, lean_object* v_a_4548_){
_start:
{
lean_object* v_res_4549_; 
v_res_4549_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4539_, v_k_4540_, v_i_4541_, v_type_4542_, v_xs_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_);
lean_dec(v_a_4547_);
lean_dec_ref(v_a_4546_);
lean_dec(v_a_4545_);
lean_dec_ref(v_a_4544_);
return v_res_4549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object* v_00_u03b1_4550_, lean_object* v_perm_4551_, lean_object* v_k_4552_, lean_object* v_i_4553_, lean_object* v_type_4554_, lean_object* v_xs_4555_, lean_object* v_a_4556_, lean_object* v_a_4557_, lean_object* v_a_4558_, lean_object* v_a_4559_){
_start:
{
lean_object* v___x_4561_; 
v___x_4561_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4551_, v_k_4552_, v_i_4553_, v_type_4554_, v_xs_4555_, v_a_4556_, v_a_4557_, v_a_4558_, v_a_4559_);
return v___x_4561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object* v_00_u03b1_4562_, lean_object* v_perm_4563_, lean_object* v_k_4564_, lean_object* v_i_4565_, lean_object* v_type_4566_, lean_object* v_xs_4567_, lean_object* v_a_4568_, lean_object* v_a_4569_, lean_object* v_a_4570_, lean_object* v_a_4571_, lean_object* v_a_4572_){
_start:
{
lean_object* v_res_4573_; 
v_res_4573_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(v_00_u03b1_4562_, v_perm_4563_, v_k_4564_, v_i_4565_, v_type_4566_, v_xs_4567_, v_a_4568_, v_a_4569_, v_a_4570_, v_a_4571_);
lean_dec(v_a_4571_);
lean_dec_ref(v_a_4570_);
lean_dec(v_a_4569_);
lean_dec_ref(v_a_4568_);
return v_res_4573_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0(void){
_start:
{
lean_object* v___x_4574_; lean_object* v___x_4575_; 
v___x_4574_ = lean_unsigned_to_nat(0u);
v___x_4575_ = l_Lean_Level_ofNat(v___x_4574_);
return v___x_4575_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1(void){
_start:
{
lean_object* v___x_4576_; lean_object* v___x_4577_; 
v___x_4576_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0);
v___x_4577_ = l_Lean_mkSort(v___x_4576_);
return v___x_4577_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object* v_perm_4578_, lean_object* v_type_4579_, lean_object* v_k_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_){
_start:
{
lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; 
v___x_4586_ = lean_unsigned_to_nat(0u);
v___x_4587_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4578_);
v___x_4588_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1);
v___x_4589_ = lean_mk_array(v___x_4587_, v___x_4588_);
v___x_4590_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4578_, v_k_4580_, v___x_4586_, v_type_4579_, v___x_4589_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
return v___x_4590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object* v_perm_4591_, lean_object* v_type_4592_, lean_object* v_k_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_, lean_object* v_a_4596_, lean_object* v_a_4597_, lean_object* v_a_4598_){
_start:
{
lean_object* v_res_4599_; 
v_res_4599_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4591_, v_type_4592_, v_k_4593_, v_a_4594_, v_a_4595_, v_a_4596_, v_a_4597_);
lean_dec(v_a_4597_);
lean_dec_ref(v_a_4596_);
lean_dec(v_a_4595_);
lean_dec_ref(v_a_4594_);
return v_res_4599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object* v_00_u03b1_4600_, lean_object* v_perm_4601_, lean_object* v_type_4602_, lean_object* v_k_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_, lean_object* v_a_4607_){
_start:
{
lean_object* v___x_4609_; 
v___x_4609_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4601_, v_type_4602_, v_k_4603_, v_a_4604_, v_a_4605_, v_a_4606_, v_a_4607_);
return v___x_4609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object* v_00_u03b1_4610_, lean_object* v_perm_4611_, lean_object* v_type_4612_, lean_object* v_k_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_){
_start:
{
lean_object* v_res_4619_; 
v_res_4619_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(v_00_u03b1_4610_, v_perm_4611_, v_type_4612_, v_k_4613_, v_a_4614_, v_a_4615_, v_a_4616_, v_a_4617_);
lean_dec(v_a_4617_);
lean_dec_ref(v_a_4616_);
lean_dec(v_a_4615_);
lean_dec_ref(v_a_4614_);
return v_res_4619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object* v_k_4620_, lean_object* v_runInBase_4621_, lean_object* v_b_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_){
_start:
{
lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4628_ = lean_apply_1(v_k_4620_, v_b_4622_);
lean_inc(v___y_4626_);
lean_inc_ref(v___y_4625_);
lean_inc(v___y_4624_);
lean_inc_ref(v___y_4623_);
v___x_4629_ = lean_apply_7(v_runInBase_4621_, lean_box(0), v___x_4628_, v___y_4623_, v___y_4624_, v___y_4625_, v___y_4626_, lean_box(0));
return v___x_4629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object* v_k_4630_, lean_object* v_runInBase_4631_, lean_object* v_b_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_){
_start:
{
lean_object* v_res_4638_; 
v_res_4638_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(v_k_4630_, v_runInBase_4631_, v_b_4632_, v___y_4633_, v___y_4634_, v___y_4635_, v___y_4636_);
lean_dec(v___y_4636_);
lean_dec_ref(v___y_4635_);
lean_dec(v___y_4634_);
lean_dec_ref(v___y_4633_);
return v_res_4638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object* v_k_4639_, lean_object* v_perm_4640_, lean_object* v_type_4641_, lean_object* v_runInBase_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_){
_start:
{
lean_object* v___f_4648_; lean_object* v___x_4649_; 
v___f_4648_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4648_, 0, v_k_4639_);
lean_closure_set(v___f_4648_, 1, v_runInBase_4642_);
v___x_4649_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4640_, v_type_4641_, v___f_4648_, v___y_4643_, v___y_4644_, v___y_4645_, v___y_4646_);
return v___x_4649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object* v_k_4650_, lean_object* v_perm_4651_, lean_object* v_type_4652_, lean_object* v_runInBase_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_){
_start:
{
lean_object* v_res_4659_; 
v_res_4659_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(v_k_4650_, v_perm_4651_, v_type_4652_, v_runInBase_4653_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_);
lean_dec(v___y_4657_);
lean_dec_ref(v___y_4656_);
lean_dec(v___y_4655_);
lean_dec_ref(v___y_4654_);
return v_res_4659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object* v_inst_4660_, lean_object* v_inst_4661_, lean_object* v_perm_4662_, lean_object* v_type_4663_, lean_object* v_k_4664_){
_start:
{
lean_object* v_toBind_4665_; lean_object* v_liftWith_4666_; lean_object* v_restoreM_4667_; lean_object* v___f_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
v_toBind_4665_ = lean_ctor_get(v_inst_4661_, 1);
lean_inc(v_toBind_4665_);
lean_dec_ref(v_inst_4661_);
v_liftWith_4666_ = lean_ctor_get(v_inst_4660_, 0);
lean_inc(v_liftWith_4666_);
v_restoreM_4667_ = lean_ctor_get(v_inst_4660_, 1);
lean_inc(v_restoreM_4667_);
lean_dec_ref(v_inst_4660_);
v___f_4668_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_4668_, 0, v_k_4664_);
lean_closure_set(v___f_4668_, 1, v_perm_4662_);
lean_closure_set(v___f_4668_, 2, v_type_4663_);
v___x_4669_ = lean_apply_2(v_liftWith_4666_, lean_box(0), v___f_4668_);
v___x_4670_ = lean_apply_1(v_restoreM_4667_, lean_box(0));
v___x_4671_ = lean_apply_4(v_toBind_4665_, lean_box(0), lean_box(0), v___x_4669_, v___x_4670_);
return v___x_4671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object* v_n_4672_, lean_object* v_00_u03b1_4673_, lean_object* v_inst_4674_, lean_object* v_inst_4675_, lean_object* v_perm_4676_, lean_object* v_type_4677_, lean_object* v_k_4678_){
_start:
{
lean_object* v___x_4679_; 
v___x_4679_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(v_inst_4674_, v_inst_4675_, v_perm_4676_, v_type_4677_, v_k_4678_);
return v___x_4679_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object* v_msg_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_){
_start:
{
lean_object* v___f_4686_; lean_object* v___x_512__overap_4687_; lean_object* v___x_4688_; 
v___f_4686_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_512__overap_4687_ = lean_panic_fn_borrowed(v___f_4686_, v_msg_4680_);
lean_inc(v___y_4684_);
lean_inc_ref(v___y_4683_);
lean_inc(v___y_4682_);
lean_inc_ref(v___y_4681_);
v___x_4688_ = lean_apply_5(v___x_512__overap_4687_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, lean_box(0));
return v___x_4688_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object* v_msg_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_){
_start:
{
lean_object* v_res_4695_; 
v_res_4695_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v_msg_4689_, v___y_4690_, v___y_4691_, v___y_4692_, v___y_4693_);
lean_dec(v___y_4693_);
lean_dec_ref(v___y_4692_);
lean_dec(v___y_4691_);
lean_dec_ref(v___y_4690_);
return v_res_4695_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; 
v___x_4698_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1));
v___x_4699_ = lean_unsigned_to_nat(10u);
v___x_4700_ = lean_unsigned_to_nat(353u);
v___x_4701_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4702_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4703_ = l_mkPanicMessageWithDecl(v___x_4702_, v___x_4701_, v___x_4700_, v___x_4699_, v___x_4698_);
return v___x_4703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object* v___x_4704_, lean_object* v_xs_4705_, lean_object* v_tail_4706_, lean_object* v_ys_4707_, lean_object* v_type_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_){
_start:
{
lean_object* v_res_4714_; 
v_res_4714_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(v___x_4704_, v_xs_4705_, v_tail_4706_, v_ys_4707_, v_type_4708_, v___y_4709_, v___y_4710_, v___y_4711_, v___y_4712_);
lean_dec(v___y_4712_);
lean_dec_ref(v___y_4711_);
lean_dec(v___y_4710_);
lean_dec_ref(v___y_4709_);
lean_dec_ref(v_ys_4707_);
lean_dec(v___x_4704_);
return v_res_4714_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0(void){
_start:
{
lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; 
v___x_4715_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4716_ = lean_unsigned_to_nat(8u);
v___x_4717_ = lean_unsigned_to_nat(349u);
v___x_4718_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4719_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4720_ = l_mkPanicMessageWithDecl(v___x_4719_, v___x_4718_, v___x_4717_, v___x_4716_, v___x_4715_);
return v___x_4720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object* v_xs_4721_, lean_object* v_x_4722_, lean_object* v_x_4723_, lean_object* v_a_4724_, lean_object* v_a_4725_, lean_object* v_a_4726_, lean_object* v_a_4727_){
_start:
{
if (lean_obj_tag(v_x_4722_) == 0)
{
lean_object* v___x_4729_; 
lean_dec_ref(v_xs_4721_);
v___x_4729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4729_, 0, v_x_4723_);
return v___x_4729_;
}
else
{
lean_object* v_head_4730_; 
v_head_4730_ = lean_ctor_get(v_x_4722_, 0);
if (lean_obj_tag(v_head_4730_) == 0)
{
lean_object* v_tail_4731_; lean_object* v___x_4732_; lean_object* v___f_4733_; lean_object* v___x_4734_; uint8_t v___x_4735_; lean_object* v___x_4736_; 
v_tail_4731_ = lean_ctor_get(v_x_4722_, 1);
lean_inc(v_tail_4731_);
lean_dec_ref_known(v_x_4722_, 2);
v___x_4732_ = lean_unsigned_to_nat(1u);
v___f_4733_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4733_, 0, v___x_4732_);
lean_closure_set(v___f_4733_, 1, v_xs_4721_);
lean_closure_set(v___f_4733_, 2, v_tail_4731_);
v___x_4734_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4735_ = 0;
v___x_4736_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_x_4723_, v___x_4734_, v___f_4733_, v___x_4735_, v___x_4735_, v_a_4724_, v_a_4725_, v_a_4726_, v_a_4727_);
return v___x_4736_;
}
else
{
lean_object* v_tail_4737_; lean_object* v_val_4738_; lean_object* v___x_4739_; uint8_t v___x_4740_; 
lean_inc_ref(v_head_4730_);
v_tail_4737_ = lean_ctor_get(v_x_4722_, 1);
lean_inc(v_tail_4737_);
lean_dec_ref_known(v_x_4722_, 2);
v_val_4738_ = lean_ctor_get(v_head_4730_, 0);
lean_inc(v_val_4738_);
lean_dec_ref_known(v_head_4730_, 1);
v___x_4739_ = lean_array_get_size(v_xs_4721_);
v___x_4740_ = lean_nat_dec_lt(v_val_4738_, v___x_4739_);
if (v___x_4740_ == 0)
{
lean_object* v___x_4741_; lean_object* v___x_4742_; 
lean_dec(v_val_4738_);
lean_dec(v_tail_4737_);
lean_dec_ref(v_x_4723_);
lean_dec_ref(v_xs_4721_);
v___x_4741_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0);
v___x_4742_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4741_, v_a_4724_, v_a_4725_, v_a_4726_, v_a_4727_);
return v___x_4742_;
}
else
{
lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; 
v___x_4743_ = l_Lean_instInhabitedExpr;
v___x_4744_ = lean_array_get_borrowed(v___x_4743_, v_xs_4721_, v_val_4738_);
lean_dec(v_val_4738_);
v___x_4745_ = lean_unsigned_to_nat(1u);
v___x_4746_ = lean_mk_empty_array_with_capacity(v___x_4745_);
lean_inc(v___x_4744_);
v___x_4747_ = lean_array_push(v___x_4746_, v___x_4744_);
v___x_4748_ = l_Lean_Meta_instantiateForall(v_x_4723_, v___x_4747_, v_a_4724_, v_a_4725_, v_a_4726_, v_a_4727_);
lean_dec_ref(v___x_4747_);
if (lean_obj_tag(v___x_4748_) == 0)
{
lean_object* v_a_4749_; 
v_a_4749_ = lean_ctor_get(v___x_4748_, 0);
lean_inc(v_a_4749_);
lean_dec_ref_known(v___x_4748_, 1);
v_x_4722_ = v_tail_4737_;
v_x_4723_ = v_a_4749_;
goto _start;
}
else
{
lean_dec(v_tail_4737_);
lean_dec_ref(v_xs_4721_);
return v___x_4748_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object* v___x_4751_, lean_object* v_xs_4752_, lean_object* v_tail_4753_, lean_object* v_ys_4754_, lean_object* v_type_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_){
_start:
{
lean_object* v___x_4761_; uint8_t v___x_4762_; 
v___x_4761_ = lean_array_get_size(v_ys_4754_);
v___x_4762_ = lean_nat_dec_eq(v___x_4761_, v___x_4751_);
if (v___x_4762_ == 0)
{
lean_object* v___x_4763_; lean_object* v___x_4764_; 
lean_dec_ref(v_type_4755_);
lean_dec(v_tail_4753_);
lean_dec_ref(v_xs_4752_);
v___x_4763_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2);
v___x_4764_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4763_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_);
return v___x_4764_;
}
else
{
lean_object* v___x_4765_; 
v___x_4765_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4752_, v_tail_4753_, v_type_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_);
if (lean_obj_tag(v___x_4765_) == 0)
{
lean_object* v_a_4766_; uint8_t v___x_4767_; uint8_t v___x_4768_; lean_object* v___x_4769_; 
v_a_4766_ = lean_ctor_get(v___x_4765_, 0);
lean_inc(v_a_4766_);
lean_dec_ref_known(v___x_4765_, 1);
v___x_4767_ = 0;
v___x_4768_ = 1;
v___x_4769_ = l_Lean_Meta_mkForallFVars(v_ys_4754_, v_a_4766_, v___x_4767_, v___x_4762_, v___x_4762_, v___x_4768_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_);
return v___x_4769_;
}
else
{
return v___x_4765_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object* v_xs_4770_, lean_object* v_x_4771_, lean_object* v_x_4772_, lean_object* v_a_4773_, lean_object* v_a_4774_, lean_object* v_a_4775_, lean_object* v_a_4776_, lean_object* v_a_4777_){
_start:
{
lean_object* v_res_4778_; 
v_res_4778_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4770_, v_x_4771_, v_x_4772_, v_a_4773_, v_a_4774_, v_a_4775_, v_a_4776_);
lean_dec(v_a_4776_);
lean_dec_ref(v_a_4775_);
lean_dec(v_a_4774_);
lean_dec_ref(v_a_4773_);
return v_res_4778_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2(void){
_start:
{
lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; 
v___x_4781_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_4782_ = lean_unsigned_to_nat(2u);
v___x_4783_ = lean_unsigned_to_nat(343u);
v___x_4784_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0));
v___x_4785_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4786_ = l_mkPanicMessageWithDecl(v___x_4785_, v___x_4784_, v___x_4783_, v___x_4782_, v___x_4781_);
return v___x_4786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object* v_perm_4787_, lean_object* v_type_u2080_4788_, lean_object* v_xs_4789_, lean_object* v_a_4790_, lean_object* v_a_4791_, lean_object* v_a_4792_, lean_object* v_a_4793_){
_start:
{
lean_object* v___x_4795_; lean_object* v___x_4796_; uint8_t v___x_4797_; 
v___x_4795_ = lean_array_get_size(v_xs_4789_);
v___x_4796_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4787_);
v___x_4797_ = lean_nat_dec_eq(v___x_4795_, v___x_4796_);
lean_dec(v___x_4796_);
if (v___x_4797_ == 0)
{
lean_object* v___x_4798_; lean_object* v___x_4799_; 
lean_dec_ref(v_xs_4789_);
lean_dec_ref(v_type_u2080_4788_);
lean_dec_ref(v_perm_4787_);
v___x_4798_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2, &l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2);
v___x_4799_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4798_, v_a_4790_, v_a_4791_, v_a_4792_, v_a_4793_);
return v___x_4799_;
}
else
{
lean_object* v_mask_4800_; lean_object* v___x_4801_; 
v_mask_4800_ = lean_array_to_list(v_perm_4787_);
v___x_4801_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4789_, v_mask_4800_, v_type_u2080_4788_, v_a_4790_, v_a_4791_, v_a_4792_, v_a_4793_);
return v___x_4801_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object* v_perm_4802_, lean_object* v_type_u2080_4803_, lean_object* v_xs_4804_, lean_object* v_a_4805_, lean_object* v_a_4806_, lean_object* v_a_4807_, lean_object* v_a_4808_, lean_object* v_a_4809_){
_start:
{
lean_object* v_res_4810_; 
v_res_4810_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v_perm_4802_, v_type_u2080_4803_, v_xs_4804_, v_a_4805_, v_a_4806_, v_a_4807_, v_a_4808_);
lean_dec(v_a_4808_);
lean_dec_ref(v_a_4807_);
lean_dec(v_a_4806_);
lean_dec_ref(v_a_4805_);
return v_res_4810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(lean_object* v_e_4811_, lean_object* v_maxFVars_4812_, lean_object* v_k_4813_, uint8_t v_cleanupAnnotations_4814_, lean_object* v___y_4815_, lean_object* v___y_4816_, lean_object* v___y_4817_, lean_object* v___y_4818_){
_start:
{
lean_object* v___f_4820_; uint8_t v___x_4821_; uint8_t v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; 
v___f_4820_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4820_, 0, v_k_4813_);
v___x_4821_ = 1;
v___x_4822_ = 0;
v___x_4823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4823_, 0, v_maxFVars_4812_);
v___x_4824_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_4811_, v___x_4821_, v___x_4822_, v___x_4821_, v___x_4822_, v___x_4823_, v___f_4820_, v_cleanupAnnotations_4814_, v___y_4815_, v___y_4816_, v___y_4817_, v___y_4818_);
lean_dec_ref_known(v___x_4823_, 1);
if (lean_obj_tag(v___x_4824_) == 0)
{
lean_object* v_a_4825_; lean_object* v___x_4827_; uint8_t v_isShared_4828_; uint8_t v_isSharedCheck_4832_; 
v_a_4825_ = lean_ctor_get(v___x_4824_, 0);
v_isSharedCheck_4832_ = !lean_is_exclusive(v___x_4824_);
if (v_isSharedCheck_4832_ == 0)
{
v___x_4827_ = v___x_4824_;
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
else
{
lean_inc(v_a_4825_);
lean_dec(v___x_4824_);
v___x_4827_ = lean_box(0);
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
v_resetjp_4826_:
{
lean_object* v___x_4830_; 
if (v_isShared_4828_ == 0)
{
v___x_4830_ = v___x_4827_;
goto v_reusejp_4829_;
}
else
{
lean_object* v_reuseFailAlloc_4831_; 
v_reuseFailAlloc_4831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4831_, 0, v_a_4825_);
v___x_4830_ = v_reuseFailAlloc_4831_;
goto v_reusejp_4829_;
}
v_reusejp_4829_:
{
return v___x_4830_;
}
}
}
else
{
lean_object* v_a_4833_; lean_object* v___x_4835_; uint8_t v_isShared_4836_; uint8_t v_isSharedCheck_4840_; 
v_a_4833_ = lean_ctor_get(v___x_4824_, 0);
v_isSharedCheck_4840_ = !lean_is_exclusive(v___x_4824_);
if (v_isSharedCheck_4840_ == 0)
{
v___x_4835_ = v___x_4824_;
v_isShared_4836_ = v_isSharedCheck_4840_;
goto v_resetjp_4834_;
}
else
{
lean_inc(v_a_4833_);
lean_dec(v___x_4824_);
v___x_4835_ = lean_box(0);
v_isShared_4836_ = v_isSharedCheck_4840_;
goto v_resetjp_4834_;
}
v_resetjp_4834_:
{
lean_object* v___x_4838_; 
if (v_isShared_4836_ == 0)
{
v___x_4838_ = v___x_4835_;
goto v_reusejp_4837_;
}
else
{
lean_object* v_reuseFailAlloc_4839_; 
v_reuseFailAlloc_4839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4839_, 0, v_a_4833_);
v___x_4838_ = v_reuseFailAlloc_4839_;
goto v_reusejp_4837_;
}
v_reusejp_4837_:
{
return v___x_4838_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg___boxed(lean_object* v_e_4841_, lean_object* v_maxFVars_4842_, lean_object* v_k_4843_, lean_object* v_cleanupAnnotations_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4850_; lean_object* v_res_4851_; 
v_cleanupAnnotations_boxed_4850_ = lean_unbox(v_cleanupAnnotations_4844_);
v_res_4851_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4841_, v_maxFVars_4842_, v_k_4843_, v_cleanupAnnotations_boxed_4850_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_);
lean_dec(v___y_4848_);
lean_dec_ref(v___y_4847_);
lean_dec(v___y_4846_);
lean_dec_ref(v___y_4845_);
return v_res_4851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(lean_object* v_00_u03b1_4852_, lean_object* v_e_4853_, lean_object* v_maxFVars_4854_, lean_object* v_k_4855_, uint8_t v_cleanupAnnotations_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_, lean_object* v___y_4859_, lean_object* v___y_4860_){
_start:
{
lean_object* v___x_4862_; 
v___x_4862_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4853_, v_maxFVars_4854_, v_k_4855_, v_cleanupAnnotations_4856_, v___y_4857_, v___y_4858_, v___y_4859_, v___y_4860_);
return v___x_4862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___boxed(lean_object* v_00_u03b1_4863_, lean_object* v_e_4864_, lean_object* v_maxFVars_4865_, lean_object* v_k_4866_, lean_object* v_cleanupAnnotations_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_, lean_object* v___y_4870_, lean_object* v___y_4871_, lean_object* v___y_4872_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4873_; lean_object* v_res_4874_; 
v_cleanupAnnotations_boxed_4873_ = lean_unbox(v_cleanupAnnotations_4867_);
v_res_4874_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(v_00_u03b1_4863_, v_e_4864_, v_maxFVars_4865_, v_k_4866_, v_cleanupAnnotations_boxed_4873_, v___y_4868_, v___y_4869_, v___y_4870_, v___y_4871_);
lean_dec(v___y_4871_);
lean_dec_ref(v___y_4870_);
lean_dec(v___y_4869_);
lean_dec_ref(v___y_4868_);
return v_res_4874_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object* v_x_4875_){
_start:
{
if (lean_obj_tag(v_x_4875_) == 0)
{
uint8_t v___x_4876_; 
v___x_4876_ = 1;
return v___x_4876_;
}
else
{
lean_object* v_head_4877_; 
v_head_4877_ = lean_ctor_get(v_x_4875_, 0);
if (lean_obj_tag(v_head_4877_) == 0)
{
lean_object* v_tail_4878_; 
v_tail_4878_ = lean_ctor_get(v_x_4875_, 1);
v_x_4875_ = v_tail_4878_;
goto _start;
}
else
{
uint8_t v___x_4880_; 
v___x_4880_ = 0;
return v___x_4880_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object* v_x_4881_){
_start:
{
uint8_t v_res_4882_; lean_object* v_r_4883_; 
v_res_4882_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_x_4881_);
lean_dec(v_x_4881_);
v_r_4883_ = lean_box(v_res_4882_);
return v_r_4883_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; 
v___x_4886_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1));
v___x_4887_ = lean_unsigned_to_nat(12u);
v___x_4888_ = lean_unsigned_to_nat(376u);
v___x_4889_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0));
v___x_4890_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4891_ = l_mkPanicMessageWithDecl(v___x_4890_, v___x_4889_, v___x_4888_, v___x_4887_, v___x_4886_);
return v___x_4891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object* v___x_4892_, lean_object* v_xs_4893_, lean_object* v_tail_4894_, lean_object* v___x_4895_, lean_object* v___x_4896_, lean_object* v_ys_4897_, lean_object* v_value_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_, lean_object* v___y_4901_, lean_object* v___y_4902_, lean_object* v___y_4903_){
_start:
{
uint8_t v___x_1127__boxed_4904_; uint8_t v___x_1128__boxed_4905_; lean_object* v_res_4906_; 
v___x_1127__boxed_4904_ = lean_unbox(v___x_4895_);
v___x_1128__boxed_4905_ = lean_unbox(v___x_4896_);
v_res_4906_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(v___x_4892_, v_xs_4893_, v_tail_4894_, v___x_1127__boxed_4904_, v___x_1128__boxed_4905_, v_ys_4897_, v_value_4898_, v___y_4899_, v___y_4900_, v___y_4901_, v___y_4902_);
lean_dec(v___y_4902_);
lean_dec_ref(v___y_4901_);
lean_dec(v___y_4900_);
lean_dec_ref(v___y_4899_);
lean_dec_ref(v_ys_4897_);
lean_dec(v___x_4892_);
return v_res_4906_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0(void){
_start:
{
lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; 
v___x_4907_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4908_ = lean_unsigned_to_nat(8u);
v___x_4909_ = lean_unsigned_to_nat(368u);
v___x_4910_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0));
v___x_4911_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4912_ = l_mkPanicMessageWithDecl(v___x_4911_, v___x_4910_, v___x_4909_, v___x_4908_, v___x_4907_);
return v___x_4912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object* v_xs_4913_, lean_object* v_x_4914_, lean_object* v_x_4915_, lean_object* v_a_4916_, lean_object* v_a_4917_, lean_object* v_a_4918_, lean_object* v_a_4919_){
_start:
{
if (lean_obj_tag(v_x_4914_) == 0)
{
lean_object* v___x_4921_; 
lean_dec_ref(v_xs_4913_);
v___x_4921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4921_, 0, v_x_4915_);
return v___x_4921_;
}
else
{
lean_object* v_head_4922_; 
v_head_4922_ = lean_ctor_get(v_x_4914_, 0);
if (lean_obj_tag(v_head_4922_) == 0)
{
lean_object* v_tail_4923_; uint8_t v___x_4924_; 
v_tail_4923_ = lean_ctor_get(v_x_4914_, 1);
lean_inc(v_tail_4923_);
lean_dec_ref_known(v_x_4914_, 2);
v___x_4924_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_tail_4923_);
if (v___x_4924_ == 0)
{
uint8_t v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___f_4929_; lean_object* v___x_4930_; 
v___x_4925_ = 1;
v___x_4926_ = lean_unsigned_to_nat(1u);
v___x_4927_ = lean_box(v___x_4924_);
v___x_4928_ = lean_box(v___x_4925_);
v___f_4929_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4929_, 0, v___x_4926_);
lean_closure_set(v___f_4929_, 1, v_xs_4913_);
lean_closure_set(v___f_4929_, 2, v_tail_4923_);
lean_closure_set(v___f_4929_, 3, v___x_4927_);
lean_closure_set(v___f_4929_, 4, v___x_4928_);
v___x_4930_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_x_4915_, v___x_4926_, v___f_4929_, v___x_4924_, v_a_4916_, v_a_4917_, v_a_4918_, v_a_4919_);
return v___x_4930_;
}
else
{
lean_object* v___x_4931_; 
lean_dec(v_tail_4923_);
lean_dec_ref(v_xs_4913_);
v___x_4931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4931_, 0, v_x_4915_);
return v___x_4931_;
}
}
else
{
lean_object* v_tail_4932_; lean_object* v_val_4933_; lean_object* v___x_4934_; uint8_t v___x_4935_; 
lean_inc_ref(v_head_4922_);
v_tail_4932_ = lean_ctor_get(v_x_4914_, 1);
lean_inc(v_tail_4932_);
lean_dec_ref_known(v_x_4914_, 2);
v_val_4933_ = lean_ctor_get(v_head_4922_, 0);
lean_inc(v_val_4933_);
lean_dec_ref_known(v_head_4922_, 1);
v___x_4934_ = lean_array_get_size(v_xs_4913_);
v___x_4935_ = lean_nat_dec_lt(v_val_4933_, v___x_4934_);
if (v___x_4935_ == 0)
{
lean_object* v___x_4936_; lean_object* v___x_4937_; 
lean_dec(v_val_4933_);
lean_dec(v_tail_4932_);
lean_dec_ref(v_x_4915_);
lean_dec_ref(v_xs_4913_);
v___x_4936_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0);
v___x_4937_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4936_, v_a_4916_, v_a_4917_, v_a_4918_, v_a_4919_);
return v___x_4937_;
}
else
{
lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; 
v___x_4938_ = l_Lean_instInhabitedExpr;
v___x_4939_ = lean_array_get_borrowed(v___x_4938_, v_xs_4913_, v_val_4933_);
lean_dec(v_val_4933_);
v___x_4940_ = lean_unsigned_to_nat(1u);
v___x_4941_ = lean_mk_empty_array_with_capacity(v___x_4940_);
lean_inc(v___x_4939_);
v___x_4942_ = lean_array_push(v___x_4941_, v___x_4939_);
v___x_4943_ = l_Lean_Meta_instantiateLambda(v_x_4915_, v___x_4942_, v_a_4916_, v_a_4917_, v_a_4918_, v_a_4919_);
lean_dec_ref(v___x_4942_);
if (lean_obj_tag(v___x_4943_) == 0)
{
lean_object* v_a_4944_; 
v_a_4944_ = lean_ctor_get(v___x_4943_, 0);
lean_inc(v_a_4944_);
lean_dec_ref_known(v___x_4943_, 1);
v_x_4914_ = v_tail_4932_;
v_x_4915_ = v_a_4944_;
goto _start;
}
else
{
lean_dec(v_tail_4932_);
lean_dec_ref(v_xs_4913_);
return v___x_4943_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object* v___x_4946_, lean_object* v_xs_4947_, lean_object* v_tail_4948_, uint8_t v___x_4949_, uint8_t v___x_4950_, lean_object* v_ys_4951_, lean_object* v_value_4952_, lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_){
_start:
{
lean_object* v___x_4958_; uint8_t v___x_4959_; 
v___x_4958_ = lean_array_get_size(v_ys_4951_);
v___x_4959_ = lean_nat_dec_eq(v___x_4958_, v___x_4946_);
if (v___x_4959_ == 0)
{
lean_object* v___x_4960_; lean_object* v___x_4961_; 
lean_dec_ref(v_value_4952_);
lean_dec(v_tail_4948_);
lean_dec_ref(v_xs_4947_);
v___x_4960_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2);
v___x_4961_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4960_, v___y_4953_, v___y_4954_, v___y_4955_, v___y_4956_);
return v___x_4961_;
}
else
{
lean_object* v___x_4962_; 
v___x_4962_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4947_, v_tail_4948_, v_value_4952_, v___y_4953_, v___y_4954_, v___y_4955_, v___y_4956_);
if (lean_obj_tag(v___x_4962_) == 0)
{
lean_object* v_a_4963_; uint8_t v___x_4964_; lean_object* v___x_4965_; 
v_a_4963_ = lean_ctor_get(v___x_4962_, 0);
lean_inc(v_a_4963_);
lean_dec_ref_known(v___x_4962_, 1);
v___x_4964_ = 1;
v___x_4965_ = l_Lean_Meta_mkLambdaFVars(v_ys_4951_, v_a_4963_, v___x_4949_, v___x_4950_, v___x_4949_, v___x_4950_, v___x_4964_, v___y_4953_, v___y_4954_, v___y_4955_, v___y_4956_);
return v___x_4965_;
}
else
{
return v___x_4962_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object* v_xs_4966_, lean_object* v_x_4967_, lean_object* v_x_4968_, lean_object* v_a_4969_, lean_object* v_a_4970_, lean_object* v_a_4971_, lean_object* v_a_4972_, lean_object* v_a_4973_){
_start:
{
lean_object* v_res_4974_; 
v_res_4974_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4966_, v_x_4967_, v_x_4968_, v_a_4969_, v_a_4970_, v_a_4971_, v_a_4972_);
lean_dec(v_a_4972_);
lean_dec_ref(v_a_4971_);
lean_dec(v_a_4970_);
lean_dec_ref(v_a_4969_);
return v_res_4974_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1(void){
_start:
{
lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; 
v___x_4976_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_4977_ = lean_unsigned_to_nat(2u);
v___x_4978_ = lean_unsigned_to_nat(362u);
v___x_4979_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0));
v___x_4980_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4981_ = l_mkPanicMessageWithDecl(v___x_4980_, v___x_4979_, v___x_4978_, v___x_4977_, v___x_4976_);
return v___x_4981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object* v_perm_4982_, lean_object* v_value_u2080_4983_, lean_object* v_xs_4984_, lean_object* v_a_4985_, lean_object* v_a_4986_, lean_object* v_a_4987_, lean_object* v_a_4988_){
_start:
{
lean_object* v___x_4990_; lean_object* v___x_4991_; uint8_t v___x_4992_; 
v___x_4990_ = lean_array_get_size(v_xs_4984_);
v___x_4991_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4982_);
v___x_4992_ = lean_nat_dec_eq(v___x_4990_, v___x_4991_);
lean_dec(v___x_4991_);
if (v___x_4992_ == 0)
{
lean_object* v___x_4993_; lean_object* v___x_4994_; 
lean_dec_ref(v_xs_4984_);
lean_dec_ref(v_value_u2080_4983_);
lean_dec_ref(v_perm_4982_);
v___x_4993_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1, &l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once, _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1);
v___x_4994_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4993_, v_a_4985_, v_a_4986_, v_a_4987_, v_a_4988_);
return v___x_4994_;
}
else
{
lean_object* v_mask_4995_; lean_object* v___x_4996_; 
v_mask_4995_ = lean_array_to_list(v_perm_4982_);
v___x_4996_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4984_, v_mask_4995_, v_value_u2080_4983_, v_a_4985_, v_a_4986_, v_a_4987_, v_a_4988_);
return v___x_4996_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object* v_perm_4997_, lean_object* v_value_u2080_4998_, lean_object* v_xs_4999_, lean_object* v_a_5000_, lean_object* v_a_5001_, lean_object* v_a_5002_, lean_object* v_a_5003_, lean_object* v_a_5004_){
_start:
{
lean_object* v_res_5005_; 
v_res_5005_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v_perm_4997_, v_value_u2080_4998_, v_xs_4999_, v_a_5000_, v_a_5001_, v_a_5002_, v_a_5003_);
lean_dec(v_a_5003_);
lean_dec_ref(v_a_5002_);
lean_dec(v_a_5001_);
lean_dec_ref(v_a_5000_);
return v_res_5005_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object* v_msg_5013_){
_start:
{
lean_object* v___f_5014_; lean_object* v___f_5015_; lean_object* v___f_5016_; lean_object* v___f_5017_; lean_object* v___f_5018_; lean_object* v___f_5019_; lean_object* v___f_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; 
v___f_5014_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5015_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5016_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5017_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5018_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5019_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5020_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5021_, 0, v___f_5014_);
lean_ctor_set(v___x_5021_, 1, v___f_5015_);
v___x_5022_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5022_, 0, v___x_5021_);
lean_ctor_set(v___x_5022_, 1, v___f_5016_);
lean_ctor_set(v___x_5022_, 2, v___f_5017_);
lean_ctor_set(v___x_5022_, 3, v___f_5018_);
lean_ctor_set(v___x_5022_, 4, v___f_5019_);
v___x_5023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5023_, 0, v___x_5022_);
lean_ctor_set(v___x_5023_, 1, v___f_5020_);
v___x_5024_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5025_ = l_instInhabitedOfMonad___redArg(v___x_5023_, v___x_5024_);
v___x_5026_ = lean_panic_fn_borrowed(v___x_5025_, v_msg_5013_);
lean_dec(v___x_5025_);
return v___x_5026_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object* v_00_u03b1_5027_, lean_object* v_msg_5028_){
_start:
{
lean_object* v___x_5029_; 
v___x_5029_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v_msg_5028_);
return v___x_5029_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; 
v___x_5032_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1));
v___x_5033_ = lean_unsigned_to_nat(8u);
v___x_5034_ = lean_unsigned_to_nat(394u);
v___x_5035_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0));
v___x_5036_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5037_ = l_mkPanicMessageWithDecl(v___x_5036_, v___x_5035_, v___x_5034_, v___x_5033_, v___x_5032_);
return v___x_5037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object* v_x_5038_, lean_object* v_x_5039_){
_start:
{
if (lean_obj_tag(v_x_5038_) == 0)
{
return v_x_5039_;
}
else
{
lean_object* v_head_5040_; lean_object* v_fst_5041_; 
v_head_5040_ = lean_ctor_get(v_x_5038_, 0);
v_fst_5041_ = lean_ctor_get(v_head_5040_, 0);
if (lean_obj_tag(v_fst_5041_) == 0)
{
lean_object* v_tail_5042_; 
v_tail_5042_ = lean_ctor_get(v_x_5038_, 1);
lean_inc(v_tail_5042_);
lean_dec_ref_known(v_x_5038_, 2);
v_x_5038_ = v_tail_5042_;
goto _start;
}
else
{
lean_object* v_tail_5044_; lean_object* v_snd_5045_; lean_object* v_val_5046_; lean_object* v___x_5047_; uint8_t v___x_5048_; 
lean_inc_ref(v_fst_5041_);
lean_inc(v_head_5040_);
v_tail_5044_ = lean_ctor_get(v_x_5038_, 1);
lean_inc(v_tail_5044_);
lean_dec_ref_known(v_x_5038_, 2);
v_snd_5045_ = lean_ctor_get(v_head_5040_, 1);
lean_inc(v_snd_5045_);
lean_dec(v_head_5040_);
v_val_5046_ = lean_ctor_get(v_fst_5041_, 0);
lean_inc(v_val_5046_);
lean_dec_ref_known(v_fst_5041_, 1);
v___x_5047_ = lean_array_get_size(v_x_5039_);
v___x_5048_ = lean_nat_dec_lt(v_val_5046_, v___x_5047_);
if (v___x_5048_ == 0)
{
lean_object* v___x_5049_; lean_object* v___x_5050_; 
lean_dec(v_val_5046_);
lean_dec(v_snd_5045_);
lean_dec(v_tail_5044_);
lean_dec_ref(v_x_5039_);
v___x_5049_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2);
v___x_5050_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5049_);
return v___x_5050_;
}
else
{
lean_object* v___x_5051_; 
v___x_5051_ = lean_array_set(v_x_5039_, v_val_5046_, v_snd_5045_);
lean_dec(v_val_5046_);
v_x_5038_ = v_tail_5044_;
v_x_5039_ = v___x_5051_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object* v_00_u03b1_5053_, lean_object* v_x_5054_, lean_object* v_x_5055_){
_start:
{
lean_object* v___x_5056_; 
v___x_5056_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v_x_5054_, v_x_5055_);
return v___x_5056_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2(void){
_start:
{
lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; 
v___x_5059_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1));
v___x_5060_ = lean_unsigned_to_nat(2u);
v___x_5061_ = lean_unsigned_to_nat(384u);
v___x_5062_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0));
v___x_5063_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5064_ = l_mkPanicMessageWithDecl(v___x_5063_, v___x_5062_, v___x_5061_, v___x_5060_, v___x_5059_);
return v___x_5064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object* v_perm_5067_, lean_object* v_xs_5068_){
_start:
{
lean_object* v___x_5069_; lean_object* v___x_5070_; uint8_t v___x_5071_; 
v___x_5069_ = lean_array_get_size(v_xs_5068_);
v___x_5070_ = lean_array_get_size(v_perm_5067_);
v___x_5071_ = lean_nat_dec_eq(v___x_5069_, v___x_5070_);
if (v___x_5071_ == 0)
{
lean_object* v___x_5072_; lean_object* v___x_5073_; 
v___x_5072_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2);
v___x_5073_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5072_);
return v___x_5073_;
}
else
{
lean_object* v___x_5074_; uint8_t v___x_5075_; 
v___x_5074_ = lean_unsigned_to_nat(0u);
v___x_5075_ = lean_nat_dec_eq(v___x_5069_, v___x_5074_);
if (v___x_5075_ == 0)
{
lean_object* v_dummy_5076_; lean_object* v___x_5077_; lean_object* v_ys_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; 
v_dummy_5076_ = lean_array_fget_borrowed(v_xs_5068_, v___x_5074_);
v___x_5077_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5067_);
lean_inc(v_dummy_5076_);
v_ys_5078_ = lean_mk_array(v___x_5077_, v_dummy_5076_);
v___x_5079_ = l_Array_zip___redArg(v_perm_5067_, v_xs_5068_);
v___x_5080_ = lean_array_to_list(v___x_5079_);
v___x_5081_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v___x_5080_, v_ys_5078_);
return v___x_5081_;
}
else
{
lean_object* v___x_5082_; 
v___x_5082_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
return v___x_5082_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object* v_perm_5083_, lean_object* v_xs_5084_){
_start:
{
lean_object* v_res_5085_; 
v_res_5085_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5083_, v_xs_5084_);
lean_dec_ref(v_xs_5084_);
lean_dec_ref(v_perm_5083_);
return v_res_5085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object* v_00_u03b1_5086_, lean_object* v_perm_5087_, lean_object* v_xs_5088_){
_start:
{
lean_object* v___x_5089_; 
v___x_5089_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5087_, v_xs_5088_);
return v___x_5089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object* v_00_u03b1_5090_, lean_object* v_perm_5091_, lean_object* v_xs_5092_){
_start:
{
lean_object* v_res_5093_; 
v_res_5093_ = l_Lean_Elab_FixedParamPerm_pickFixed(v_00_u03b1_5090_, v_perm_5091_, v_xs_5092_);
lean_dec_ref(v_xs_5092_);
lean_dec_ref(v_perm_5091_);
return v_res_5093_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object* v_xs_5094_, lean_object* v_upperBound_5095_, lean_object* v_perm_5096_, lean_object* v_a_5097_, lean_object* v_b_5098_){
_start:
{
lean_object* v_a_5100_; uint8_t v___x_5107_; 
v___x_5107_ = lean_nat_dec_lt(v_a_5097_, v_upperBound_5095_);
if (v___x_5107_ == 0)
{
lean_dec(v_a_5097_);
return v_b_5098_;
}
else
{
lean_object* v___x_5108_; uint8_t v___x_5109_; 
v___x_5108_ = lean_array_get_size(v_perm_5096_);
v___x_5109_ = lean_nat_dec_lt(v_a_5097_, v___x_5108_);
if (v___x_5109_ == 0)
{
goto v___jp_5104_;
}
else
{
lean_object* v___x_5110_; 
v___x_5110_ = lean_array_fget_borrowed(v_perm_5096_, v_a_5097_);
if (lean_obj_tag(v___x_5110_) == 0)
{
goto v___jp_5104_;
}
else
{
v_a_5100_ = v_b_5098_;
goto v___jp_5099_;
}
}
}
v___jp_5099_:
{
lean_object* v___x_5101_; lean_object* v___x_5102_; 
v___x_5101_ = lean_unsigned_to_nat(1u);
v___x_5102_ = lean_nat_add(v_a_5097_, v___x_5101_);
lean_dec(v_a_5097_);
v_a_5097_ = v___x_5102_;
v_b_5098_ = v_a_5100_;
goto _start;
}
v___jp_5104_:
{
lean_object* v___x_5105_; lean_object* v___x_5106_; 
v___x_5105_ = lean_array_fget_borrowed(v_xs_5094_, v_a_5097_);
lean_inc(v___x_5105_);
v___x_5106_ = lean_array_push(v_b_5098_, v___x_5105_);
v_a_5100_ = v___x_5106_;
goto v___jp_5099_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object* v_xs_5111_, lean_object* v_upperBound_5112_, lean_object* v_perm_5113_, lean_object* v_a_5114_, lean_object* v_b_5115_){
_start:
{
lean_object* v_res_5116_; 
v_res_5116_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5111_, v_upperBound_5112_, v_perm_5113_, v_a_5114_, v_b_5115_);
lean_dec_ref(v_perm_5113_);
lean_dec(v_upperBound_5112_);
lean_dec_ref(v_xs_5111_);
return v_res_5116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object* v_perm_5117_, lean_object* v_xs_5118_){
_start:
{
lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v_ys_5121_; lean_object* v___x_5122_; 
v___x_5119_ = lean_array_get_size(v_xs_5118_);
v___x_5120_ = lean_unsigned_to_nat(0u);
v_ys_5121_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5122_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5118_, v___x_5119_, v_perm_5117_, v___x_5120_, v_ys_5121_);
return v___x_5122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object* v_perm_5123_, lean_object* v_xs_5124_){
_start:
{
lean_object* v_res_5125_; 
v_res_5125_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5123_, v_xs_5124_);
lean_dec_ref(v_xs_5124_);
lean_dec_ref(v_perm_5123_);
return v_res_5125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object* v_00_u03b1_5126_, lean_object* v_perm_5127_, lean_object* v_xs_5128_){
_start:
{
lean_object* v___x_5129_; 
v___x_5129_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5127_, v_xs_5128_);
return v___x_5129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object* v_00_u03b1_5130_, lean_object* v_perm_5131_, lean_object* v_xs_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l_Lean_Elab_FixedParamPerm_pickVarying(v_00_u03b1_5130_, v_perm_5131_, v_xs_5132_);
lean_dec_ref(v_xs_5132_);
lean_dec_ref(v_perm_5131_);
return v_res_5133_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object* v_00_u03b1_5134_, lean_object* v_xs_5135_, lean_object* v_upperBound_5136_, lean_object* v_perm_5137_, lean_object* v_inst_5138_, lean_object* v_R_5139_, lean_object* v_a_5140_, lean_object* v_b_5141_, lean_object* v_c_5142_){
_start:
{
lean_object* v___x_5143_; 
v___x_5143_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5135_, v_upperBound_5136_, v_perm_5137_, v_a_5140_, v_b_5141_);
return v___x_5143_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object* v_00_u03b1_5144_, lean_object* v_xs_5145_, lean_object* v_upperBound_5146_, lean_object* v_perm_5147_, lean_object* v_inst_5148_, lean_object* v_R_5149_, lean_object* v_a_5150_, lean_object* v_b_5151_, lean_object* v_c_5152_){
_start:
{
lean_object* v_res_5153_; 
v_res_5153_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(v_00_u03b1_5144_, v_xs_5145_, v_upperBound_5146_, v_perm_5147_, v_inst_5148_, v_R_5149_, v_a_5150_, v_b_5151_, v_c_5152_);
lean_dec_ref(v_perm_5147_);
lean_dec(v_upperBound_5146_);
lean_dec_ref(v_xs_5145_);
return v_res_5153_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(lean_object* v_msg_5154_){
_start:
{
lean_object* v___x_5155_; lean_object* v___x_5156_; 
v___x_5155_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5156_ = lean_panic_fn_borrowed(v___x_5155_, v_msg_5154_);
return v___x_5156_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object* v_00_u03b1_5157_, lean_object* v_msg_5158_){
_start:
{
lean_object* v___x_5159_; 
v___x_5159_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v_msg_5158_);
return v___x_5159_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object* v_j_5160_, lean_object* v___x_5161_, lean_object* v_i_5162_, lean_object* v___x_5163_, lean_object* v_as_5164_, size_t v_i_5165_, size_t v_stop_5166_){
_start:
{
uint8_t v___x_5167_; 
v___x_5167_ = lean_usize_dec_eq(v_i_5165_, v_stop_5166_);
if (v___x_5167_ == 0)
{
uint8_t v___x_5168_; uint8_t v___y_5170_; lean_object* v___x_5174_; 
v___x_5168_ = 1;
v___x_5174_ = lean_array_uget_borrowed(v_as_5164_, v_i_5165_);
if (lean_obj_tag(v___x_5174_) == 0)
{
uint8_t v___x_5175_; 
v___x_5175_ = lean_nat_dec_lt(v_j_5160_, v___x_5161_);
v___y_5170_ = v___x_5175_;
goto v___jp_5169_;
}
else
{
uint8_t v___x_5176_; 
v___x_5176_ = lean_nat_dec_lt(v_i_5162_, v___x_5163_);
v___y_5170_ = v___x_5176_;
goto v___jp_5169_;
}
v___jp_5169_:
{
if (v___y_5170_ == 0)
{
size_t v___x_5171_; size_t v___x_5172_; 
v___x_5171_ = ((size_t)1ULL);
v___x_5172_ = lean_usize_add(v_i_5165_, v___x_5171_);
v_i_5165_ = v___x_5172_;
goto _start;
}
else
{
return v___x_5168_;
}
}
}
else
{
uint8_t v___x_5177_; 
v___x_5177_ = 0;
return v___x_5177_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___boxed(lean_object* v_j_5178_, lean_object* v___x_5179_, lean_object* v_i_5180_, lean_object* v___x_5181_, lean_object* v_as_5182_, lean_object* v_i_5183_, lean_object* v_stop_5184_){
_start:
{
size_t v_i_boxed_5185_; size_t v_stop_boxed_5186_; uint8_t v_res_5187_; lean_object* v_r_5188_; 
v_i_boxed_5185_ = lean_unbox_usize(v_i_5183_);
lean_dec(v_i_5183_);
v_stop_boxed_5186_ = lean_unbox_usize(v_stop_5184_);
lean_dec(v_stop_5184_);
v_res_5187_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(v_j_5178_, v___x_5179_, v_i_5180_, v___x_5181_, v_as_5182_, v_i_boxed_5185_, v_stop_boxed_5186_);
lean_dec_ref(v_as_5182_);
lean_dec(v___x_5181_);
lean_dec(v_i_5180_);
lean_dec(v___x_5179_);
lean_dec(v_j_5178_);
v_r_5188_ = lean_box(v_res_5187_);
return v_r_5188_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; 
v___x_5191_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1));
v___x_5192_ = lean_unsigned_to_nat(10u);
v___x_5193_ = lean_unsigned_to_nat(425u);
v___x_5194_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5195_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5196_ = l_mkPanicMessageWithDecl(v___x_5195_, v___x_5194_, v___x_5193_, v___x_5192_, v___x_5191_);
return v___x_5196_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4(void){
_start:
{
lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; 
v___x_5198_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3));
v___x_5199_ = lean_unsigned_to_nat(12u);
v___x_5200_ = lean_unsigned_to_nat(433u);
v___x_5201_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5202_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5203_ = l_mkPanicMessageWithDecl(v___x_5202_, v___x_5201_, v___x_5200_, v___x_5199_, v___x_5198_);
return v___x_5203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object* v_perm_5204_, lean_object* v_fixedArgs_5205_, lean_object* v_varyingArgs_5206_, lean_object* v_i_5207_, lean_object* v_j_5208_, lean_object* v_xs_5209_){
_start:
{
lean_object* v_lower_5211_; lean_object* v_upper_5212_; lean_object* v___x_5216_; uint8_t v___x_5217_; 
v___x_5216_ = lean_array_get_size(v_perm_5204_);
v___x_5217_ = lean_nat_dec_lt(v_i_5207_, v___x_5216_);
if (v___x_5217_ == 0)
{
lean_object* v___x_5218_; lean_object* v___x_5219_; uint8_t v___x_5220_; 
lean_dec(v_i_5207_);
lean_dec_ref(v_perm_5204_);
v___x_5218_ = lean_unsigned_to_nat(0u);
v___x_5219_ = lean_array_get_size(v_varyingArgs_5206_);
v___x_5220_ = lean_nat_dec_le(v_j_5208_, v___x_5218_);
if (v___x_5220_ == 0)
{
v_lower_5211_ = v_j_5208_;
v_upper_5212_ = v___x_5219_;
goto v___jp_5210_;
}
else
{
lean_dec(v_j_5208_);
v_lower_5211_ = v___x_5218_;
v_upper_5212_ = v___x_5219_;
goto v___jp_5210_;
}
}
else
{
lean_object* v___x_5221_; 
v___x_5221_ = lean_array_fget_borrowed(v_perm_5204_, v_i_5207_);
if (lean_obj_tag(v___x_5221_) == 1)
{
lean_object* v_val_5222_; lean_object* v___x_5223_; uint8_t v___x_5224_; 
v_val_5222_ = lean_ctor_get(v___x_5221_, 0);
v___x_5223_ = lean_array_get_size(v_fixedArgs_5205_);
v___x_5224_ = lean_nat_dec_lt(v_val_5222_, v___x_5223_);
if (v___x_5224_ == 0)
{
lean_object* v___x_5225_; lean_object* v___x_5226_; 
lean_dec_ref(v_xs_5209_);
lean_dec(v_j_5208_);
lean_dec(v_i_5207_);
lean_dec_ref(v_varyingArgs_5206_);
lean_dec_ref(v_perm_5204_);
v___x_5225_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2);
v___x_5226_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5225_);
return v___x_5226_;
}
else
{
lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; 
v___x_5227_ = lean_unsigned_to_nat(1u);
v___x_5228_ = lean_nat_add(v_i_5207_, v___x_5227_);
lean_dec(v_i_5207_);
v___x_5229_ = lean_array_fget_borrowed(v_fixedArgs_5205_, v_val_5222_);
lean_inc(v___x_5229_);
v___x_5230_ = lean_array_push(v_xs_5209_, v___x_5229_);
v_i_5207_ = v___x_5228_;
v_xs_5209_ = v___x_5230_;
goto _start;
}
}
else
{
lean_object* v___x_5232_; lean_object* v___y_5234_; lean_object* v___y_5235_; lean_object* v___y_5236_; lean_object* v_lower_5244_; lean_object* v_upper_5245_; uint8_t v___x_5253_; 
v___x_5232_ = lean_array_get_size(v_varyingArgs_5206_);
v___x_5253_ = lean_nat_dec_lt(v_j_5208_, v___x_5232_);
if (v___x_5253_ == 0)
{
lean_object* v___x_5254_; uint8_t v___x_5255_; 
lean_dec_ref(v_varyingArgs_5206_);
v___x_5254_ = lean_unsigned_to_nat(0u);
v___x_5255_ = lean_nat_dec_le(v_i_5207_, v___x_5254_);
if (v___x_5255_ == 0)
{
lean_inc(v_i_5207_);
v_lower_5244_ = v_i_5207_;
v_upper_5245_ = v___x_5216_;
goto v___jp_5243_;
}
else
{
v_lower_5244_ = v___x_5254_;
v_upper_5245_ = v___x_5216_;
goto v___jp_5243_;
}
}
else
{
lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; 
v___x_5256_ = lean_unsigned_to_nat(1u);
v___x_5257_ = lean_nat_add(v_i_5207_, v___x_5256_);
lean_dec(v_i_5207_);
v___x_5258_ = lean_nat_add(v_j_5208_, v___x_5256_);
v___x_5259_ = lean_array_fget_borrowed(v_varyingArgs_5206_, v_j_5208_);
lean_dec(v_j_5208_);
lean_inc(v___x_5259_);
v___x_5260_ = lean_array_push(v_xs_5209_, v___x_5259_);
v_i_5207_ = v___x_5257_;
v_j_5208_ = v___x_5258_;
v_xs_5209_ = v___x_5260_;
goto _start;
}
v___jp_5233_:
{
uint8_t v___x_5237_; 
v___x_5237_ = lean_nat_dec_lt(v___y_5234_, v___y_5236_);
if (v___x_5237_ == 0)
{
lean_dec(v___y_5236_);
lean_dec_ref(v___y_5235_);
lean_dec(v___y_5234_);
lean_dec(v_j_5208_);
lean_dec(v_i_5207_);
return v_xs_5209_;
}
else
{
size_t v___x_5238_; size_t v___x_5239_; uint8_t v___x_5240_; 
v___x_5238_ = lean_usize_of_nat(v___y_5234_);
lean_dec(v___y_5234_);
v___x_5239_ = lean_usize_of_nat(v___y_5236_);
lean_dec(v___y_5236_);
v___x_5240_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(v_j_5208_, v___x_5232_, v_i_5207_, v___x_5216_, v___y_5235_, v___x_5238_, v___x_5239_);
lean_dec_ref(v___y_5235_);
lean_dec(v_i_5207_);
lean_dec(v_j_5208_);
if (v___x_5240_ == 0)
{
return v_xs_5209_;
}
else
{
lean_object* v___x_5241_; lean_object* v___x_5242_; 
lean_dec_ref(v_xs_5209_);
v___x_5241_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4);
v___x_5242_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5241_);
return v___x_5242_;
}
}
}
v___jp_5243_:
{
lean_object* v___x_5246_; lean_object* v_array_5247_; lean_object* v_start_5248_; lean_object* v_stop_5249_; uint8_t v___x_5250_; 
v___x_5246_ = l_Array_toSubarray___redArg(v_perm_5204_, v_lower_5244_, v_upper_5245_);
v_array_5247_ = lean_ctor_get(v___x_5246_, 0);
lean_inc_ref(v_array_5247_);
v_start_5248_ = lean_ctor_get(v___x_5246_, 1);
lean_inc(v_start_5248_);
v_stop_5249_ = lean_ctor_get(v___x_5246_, 2);
lean_inc(v_stop_5249_);
lean_dec_ref(v___x_5246_);
v___x_5250_ = lean_nat_dec_lt(v_start_5248_, v_stop_5249_);
if (v___x_5250_ == 0)
{
lean_dec(v_stop_5249_);
lean_dec(v_start_5248_);
lean_dec_ref(v_array_5247_);
lean_dec(v_j_5208_);
lean_dec(v_i_5207_);
return v_xs_5209_;
}
else
{
lean_object* v___x_5251_; uint8_t v___x_5252_; 
v___x_5251_ = lean_array_get_size(v_array_5247_);
v___x_5252_ = lean_nat_dec_le(v_stop_5249_, v___x_5251_);
if (v___x_5252_ == 0)
{
lean_dec(v_stop_5249_);
v___y_5234_ = v_start_5248_;
v___y_5235_ = v_array_5247_;
v___y_5236_ = v___x_5251_;
goto v___jp_5233_;
}
else
{
v___y_5234_ = v_start_5248_;
v___y_5235_ = v_array_5247_;
v___y_5236_ = v_stop_5249_;
goto v___jp_5233_;
}
}
}
}
}
v___jp_5210_:
{
lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; 
v___x_5213_ = l_Array_toSubarray___redArg(v_varyingArgs_5206_, v_lower_5211_, v_upper_5212_);
v___x_5214_ = l_Subarray_copy___redArg(v___x_5213_);
v___x_5215_ = l_Array_append___redArg(v_xs_5209_, v___x_5214_);
lean_dec_ref(v___x_5214_);
return v___x_5215_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object* v_perm_5262_, lean_object* v_fixedArgs_5263_, lean_object* v_varyingArgs_5264_, lean_object* v_i_5265_, lean_object* v_j_5266_, lean_object* v_xs_5267_){
_start:
{
lean_object* v_res_5268_; 
v_res_5268_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5262_, v_fixedArgs_5263_, v_varyingArgs_5264_, v_i_5265_, v_j_5266_, v_xs_5267_);
lean_dec_ref(v_fixedArgs_5263_);
return v_res_5268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object* v_00_u03b1_5269_, lean_object* v_perm_5270_, lean_object* v_fixedArgs_5271_, lean_object* v_varyingArgs_5272_, lean_object* v_i_5273_, lean_object* v_j_5274_, lean_object* v_xs_5275_){
_start:
{
lean_object* v___x_5276_; 
v___x_5276_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5270_, v_fixedArgs_5271_, v_varyingArgs_5272_, v_i_5273_, v_j_5274_, v_xs_5275_);
return v___x_5276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object* v_00_u03b1_5277_, lean_object* v_perm_5278_, lean_object* v_fixedArgs_5279_, lean_object* v_varyingArgs_5280_, lean_object* v_i_5281_, lean_object* v_j_5282_, lean_object* v_xs_5283_){
_start:
{
lean_object* v_res_5284_; 
v_res_5284_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(v_00_u03b1_5277_, v_perm_5278_, v_fixedArgs_5279_, v_varyingArgs_5280_, v_i_5281_, v_j_5282_, v_xs_5283_);
lean_dec_ref(v_fixedArgs_5279_);
return v_res_5284_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2(void){
_start:
{
lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; 
v___x_5287_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1));
v___x_5288_ = lean_unsigned_to_nat(2u);
v___x_5289_ = lean_unsigned_to_nat(416u);
v___x_5290_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0));
v___x_5291_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5292_ = l_mkPanicMessageWithDecl(v___x_5291_, v___x_5290_, v___x_5289_, v___x_5288_, v___x_5287_);
return v___x_5292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object* v_perm_5293_, lean_object* v_fixedArgs_5294_, lean_object* v_varyingArgs_5295_){
_start:
{
lean_object* v___x_5296_; lean_object* v___x_5297_; uint8_t v___x_5298_; 
v___x_5296_ = lean_array_get_size(v_fixedArgs_5294_);
v___x_5297_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5293_);
v___x_5298_ = lean_nat_dec_eq(v___x_5296_, v___x_5297_);
lean_dec(v___x_5297_);
if (v___x_5298_ == 0)
{
lean_object* v___x_5299_; lean_object* v___x_5300_; 
lean_dec_ref(v_varyingArgs_5295_);
lean_dec_ref(v_perm_5293_);
v___x_5299_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2);
v___x_5300_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5299_);
return v___x_5300_;
}
else
{
lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; 
v___x_5301_ = lean_unsigned_to_nat(0u);
v___x_5302_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5303_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5293_, v_fixedArgs_5294_, v_varyingArgs_5295_, v___x_5301_, v___x_5301_, v___x_5302_);
return v___x_5303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object* v_perm_5304_, lean_object* v_fixedArgs_5305_, lean_object* v_varyingArgs_5306_){
_start:
{
lean_object* v_res_5307_; 
v_res_5307_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5304_, v_fixedArgs_5305_, v_varyingArgs_5306_);
lean_dec_ref(v_fixedArgs_5305_);
return v_res_5307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object* v_00_u03b1_5308_, lean_object* v_perm_5309_, lean_object* v_fixedArgs_5310_, lean_object* v_varyingArgs_5311_){
_start:
{
lean_object* v___x_5312_; 
v___x_5312_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5309_, v_fixedArgs_5310_, v_varyingArgs_5311_);
return v___x_5312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object* v_00_u03b1_5313_, lean_object* v_perm_5314_, lean_object* v_fixedArgs_5315_, lean_object* v_varyingArgs_5316_){
_start:
{
lean_object* v_res_5317_; 
v_res_5317_ = l_Lean_Elab_FixedParamPerm_buildArgs(v_00_u03b1_5313_, v_perm_5314_, v_fixedArgs_5315_, v_varyingArgs_5316_);
lean_dec_ref(v_fixedArgs_5315_);
return v_res_5317_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object* v_x_5318_, lean_object* v_x_5319_){
_start:
{
if (lean_obj_tag(v_x_5318_) == 0)
{
if (lean_obj_tag(v_x_5319_) == 0)
{
uint8_t v___x_5320_; 
v___x_5320_ = 1;
return v___x_5320_;
}
else
{
uint8_t v___x_5321_; 
v___x_5321_ = 0;
return v___x_5321_;
}
}
else
{
if (lean_obj_tag(v_x_5319_) == 0)
{
uint8_t v___x_5322_; 
v___x_5322_ = 0;
return v___x_5322_;
}
else
{
lean_object* v_val_5323_; lean_object* v_val_5324_; uint8_t v___x_5325_; 
v_val_5323_ = lean_ctor_get(v_x_5318_, 0);
v_val_5324_ = lean_ctor_get(v_x_5319_, 0);
v___x_5325_ = lean_nat_dec_eq(v_val_5323_, v_val_5324_);
return v___x_5325_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object* v_x_5326_, lean_object* v_x_5327_){
_start:
{
uint8_t v_res_5328_; lean_object* v_r_5329_; 
v_res_5328_ = l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v_x_5326_, v_x_5327_);
lean_dec(v_x_5327_);
lean_dec(v_x_5326_);
v_r_5329_ = lean_box(v_res_5328_);
return v_r_5329_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object* v_xs_5330_, lean_object* v_ys_5331_, lean_object* v_x_5332_){
_start:
{
lean_object* v_zero_5333_; uint8_t v_isZero_5334_; 
v_zero_5333_ = lean_unsigned_to_nat(0u);
v_isZero_5334_ = lean_nat_dec_eq(v_x_5332_, v_zero_5333_);
if (v_isZero_5334_ == 1)
{
lean_dec(v_x_5332_);
return v_isZero_5334_;
}
else
{
lean_object* v_one_5335_; lean_object* v_n_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; uint8_t v___x_5339_; 
v_one_5335_ = lean_unsigned_to_nat(1u);
v_n_5336_ = lean_nat_sub(v_x_5332_, v_one_5335_);
lean_dec(v_x_5332_);
v___x_5337_ = lean_array_fget_borrowed(v_xs_5330_, v_n_5336_);
v___x_5338_ = lean_array_fget_borrowed(v_ys_5331_, v_n_5336_);
v___x_5339_ = l_instBEqOption_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v___x_5337_, v___x_5338_);
if (v___x_5339_ == 0)
{
lean_dec(v_n_5336_);
return v___x_5339_;
}
else
{
v_x_5332_ = v_n_5336_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object* v_xs_5341_, lean_object* v_ys_5342_, lean_object* v_x_5343_){
_start:
{
uint8_t v_res_5344_; lean_object* v_r_5345_; 
v_res_5344_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5341_, v_ys_5342_, v_x_5343_);
lean_dec_ref(v_ys_5342_);
lean_dec_ref(v_xs_5341_);
v_r_5345_ = lean_box(v_res_5344_);
return v_r_5345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t v_sz_5346_, size_t v_i_5347_, lean_object* v_bs_5348_){
_start:
{
uint8_t v___x_5349_; 
v___x_5349_ = lean_usize_dec_lt(v_i_5347_, v_sz_5346_);
if (v___x_5349_ == 0)
{
return v_bs_5348_;
}
else
{
lean_object* v_v_5350_; lean_object* v___x_5351_; lean_object* v_bs_x27_5352_; lean_object* v___x_5353_; size_t v___x_5354_; size_t v___x_5355_; lean_object* v___x_5356_; 
v_v_5350_ = lean_array_uget(v_bs_5348_, v_i_5347_);
v___x_5351_ = lean_unsigned_to_nat(0u);
v_bs_x27_5352_ = lean_array_uset(v_bs_5348_, v_i_5347_, v___x_5351_);
v___x_5353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5353_, 0, v_v_5350_);
v___x_5354_ = ((size_t)1ULL);
v___x_5355_ = lean_usize_add(v_i_5347_, v___x_5354_);
v___x_5356_ = lean_array_uset(v_bs_x27_5352_, v_i_5347_, v___x_5353_);
v_i_5347_ = v___x_5355_;
v_bs_5348_ = v___x_5356_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object* v_sz_5358_, lean_object* v_i_5359_, lean_object* v_bs_5360_){
_start:
{
size_t v_sz_boxed_5361_; size_t v_i_boxed_5362_; lean_object* v_res_5363_; 
v_sz_boxed_5361_ = lean_unbox_usize(v_sz_5358_);
lean_dec(v_sz_5358_);
v_i_boxed_5362_ = lean_unbox_usize(v_i_5359_);
lean_dec(v_i_5359_);
v_res_5363_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_boxed_5361_, v_i_boxed_5362_, v_bs_5360_);
return v_res_5363_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object* v_fixedParamPerms_5364_, lean_object* v_as_5365_, size_t v_i_5366_, size_t v_stop_5367_){
_start:
{
uint8_t v___x_5368_; 
v___x_5368_ = lean_usize_dec_eq(v_i_5366_, v_stop_5367_);
if (v___x_5368_ == 0)
{
lean_object* v_numFixed_5369_; uint8_t v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; size_t v_sz_5373_; size_t v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; uint8_t v___x_5382_; 
v_numFixed_5369_ = lean_ctor_get(v_fixedParamPerms_5364_, 0);
v___x_5370_ = 1;
v___x_5371_ = lean_array_uget_borrowed(v_as_5365_, v_i_5366_);
lean_inc(v_numFixed_5369_);
v___x_5372_ = l_Array_range(v_numFixed_5369_);
v_sz_5373_ = lean_array_size(v___x_5372_);
v___x_5374_ = ((size_t)0ULL);
v___x_5375_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_5373_, v___x_5374_, v___x_5372_);
v___x_5376_ = lean_array_get_size(v___x_5371_);
v___x_5377_ = lean_nat_sub(v___x_5376_, v_numFixed_5369_);
v___x_5378_ = lean_box(0);
v___x_5379_ = lean_mk_array(v___x_5377_, v___x_5378_);
v___x_5380_ = l_Array_append___redArg(v___x_5375_, v___x_5379_);
lean_dec_ref(v___x_5379_);
v___x_5381_ = lean_array_get_size(v___x_5380_);
v___x_5382_ = lean_nat_dec_eq(v___x_5376_, v___x_5381_);
if (v___x_5382_ == 0)
{
lean_dec_ref(v___x_5380_);
lean_dec_ref(v_fixedParamPerms_5364_);
return v___x_5370_;
}
else
{
uint8_t v___x_5383_; 
v___x_5383_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v___x_5371_, v___x_5380_, v___x_5376_);
lean_dec_ref(v___x_5380_);
if (v___x_5383_ == 0)
{
lean_dec_ref(v_fixedParamPerms_5364_);
return v___x_5370_;
}
else
{
size_t v___x_5384_; size_t v___x_5385_; 
v___x_5384_ = ((size_t)1ULL);
v___x_5385_ = lean_usize_add(v_i_5366_, v___x_5384_);
v_i_5366_ = v___x_5385_;
goto _start;
}
}
}
else
{
uint8_t v___x_5387_; 
lean_dec_ref(v_fixedParamPerms_5364_);
v___x_5387_ = 0;
return v___x_5387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object* v_fixedParamPerms_5388_, lean_object* v_as_5389_, lean_object* v_i_5390_, lean_object* v_stop_5391_){
_start:
{
size_t v_i_boxed_5392_; size_t v_stop_boxed_5393_; uint8_t v_res_5394_; lean_object* v_r_5395_; 
v_i_boxed_5392_ = lean_unbox_usize(v_i_5390_);
lean_dec(v_i_5390_);
v_stop_boxed_5393_ = lean_unbox_usize(v_stop_5391_);
lean_dec(v_stop_5391_);
v_res_5394_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5388_, v_as_5389_, v_i_boxed_5392_, v_stop_boxed_5393_);
lean_dec_ref(v_as_5389_);
v_r_5395_ = lean_box(v_res_5394_);
return v_r_5395_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object* v_fixedParamPerms_5396_){
_start:
{
lean_object* v_perms_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; uint8_t v___x_5400_; 
v_perms_5397_ = lean_ctor_get(v_fixedParamPerms_5396_, 1);
lean_inc_ref(v_perms_5397_);
v___x_5398_ = lean_unsigned_to_nat(0u);
v___x_5399_ = lean_array_get_size(v_perms_5397_);
v___x_5400_ = lean_nat_dec_lt(v___x_5398_, v___x_5399_);
if (v___x_5400_ == 0)
{
uint8_t v___x_5401_; 
lean_dec_ref(v_perms_5397_);
lean_dec_ref(v_fixedParamPerms_5396_);
v___x_5401_ = 1;
return v___x_5401_;
}
else
{
if (v___x_5400_ == 0)
{
lean_dec_ref(v_perms_5397_);
lean_dec_ref(v_fixedParamPerms_5396_);
return v___x_5400_;
}
else
{
size_t v___x_5402_; size_t v___x_5403_; uint8_t v___x_5404_; 
v___x_5402_ = ((size_t)0ULL);
v___x_5403_ = lean_usize_of_nat(v___x_5399_);
v___x_5404_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5396_, v_perms_5397_, v___x_5402_, v___x_5403_);
lean_dec_ref(v_perms_5397_);
if (v___x_5404_ == 0)
{
return v___x_5400_;
}
else
{
uint8_t v___x_5405_; 
v___x_5405_ = 0;
return v___x_5405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object* v_fixedParamPerms_5406_){
_start:
{
uint8_t v_res_5407_; lean_object* v_r_5408_; 
v_res_5407_ = l_Lean_Elab_FixedParamPerms_fixedArePrefix(v_fixedParamPerms_5406_);
v_r_5408_ = lean_box(v_res_5407_);
return v_r_5408_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object* v_xs_5409_, lean_object* v_ys_5410_, lean_object* v_hsz_5411_, lean_object* v_x_5412_, lean_object* v_x_5413_){
_start:
{
uint8_t v___x_5414_; 
v___x_5414_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5409_, v_ys_5410_, v_x_5412_);
return v___x_5414_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object* v_xs_5415_, lean_object* v_ys_5416_, lean_object* v_hsz_5417_, lean_object* v_x_5418_, lean_object* v_x_5419_){
_start:
{
uint8_t v_res_5420_; lean_object* v_r_5421_; 
v_res_5420_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(v_xs_5415_, v_ys_5416_, v_hsz_5417_, v_x_5418_, v_x_5419_);
lean_dec_ref(v_ys_5416_);
lean_dec_ref(v_xs_5415_);
v_r_5421_ = lean_box(v_res_5420_);
return v_r_5421_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5422_; lean_object* v___x_5423_; 
v___x_5422_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5423_, 0, v___x_5422_);
lean_ctor_set(v___x_5423_, 1, v___x_5422_);
return v___x_5423_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object* v_msg_5424_){
_start:
{
lean_object* v___f_5425_; lean_object* v___f_5426_; lean_object* v___f_5427_; lean_object* v___f_5428_; lean_object* v___f_5429_; lean_object* v___f_5430_; lean_object* v___f_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; 
v___f_5425_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5426_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5427_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5428_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5429_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5430_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5431_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5432_, 0, v___f_5425_);
lean_ctor_set(v___x_5432_, 1, v___f_5426_);
v___x_5433_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5433_, 0, v___x_5432_);
lean_ctor_set(v___x_5433_, 1, v___f_5427_);
lean_ctor_set(v___x_5433_, 2, v___f_5428_);
lean_ctor_set(v___x_5433_, 3, v___f_5429_);
lean_ctor_set(v___x_5433_, 4, v___f_5430_);
v___x_5434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5434_, 0, v___x_5433_);
lean_ctor_set(v___x_5434_, 1, v___f_5431_);
v___x_5435_ = ((lean_object*)(l_Lean_Elab_instInhabitedFixedParamPerms_default));
v___x_5436_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0);
v___x_5437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5437_, 0, v___x_5435_);
lean_ctor_set(v___x_5437_, 1, v___x_5436_);
v___x_5438_ = l_instInhabitedOfMonad___redArg(v___x_5434_, v___x_5437_);
v___x_5439_ = lean_panic_fn_borrowed(v___x_5438_, v_msg_5424_);
lean_dec(v___x_5438_);
return v___x_5439_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5440_; lean_object* v___x_5441_; 
v___x_5440_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5441_, 0, v___x_5440_);
return v___x_5441_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object* v_msg_5442_){
_start:
{
lean_object* v___f_5443_; lean_object* v___f_5444_; lean_object* v___f_5445_; lean_object* v___f_5446_; lean_object* v___f_5447_; lean_object* v___f_5448_; lean_object* v___f_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; 
v___f_5443_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5444_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5445_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5446_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5447_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5448_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5449_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5450_, 0, v___f_5443_);
lean_ctor_set(v___x_5450_, 1, v___f_5444_);
v___x_5451_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5451_, 0, v___x_5450_);
lean_ctor_set(v___x_5451_, 1, v___f_5445_);
lean_ctor_set(v___x_5451_, 2, v___f_5446_);
lean_ctor_set(v___x_5451_, 3, v___f_5447_);
lean_ctor_set(v___x_5451_, 4, v___f_5448_);
v___x_5452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5452_, 0, v___x_5451_);
lean_ctor_set(v___x_5452_, 1, v___f_5449_);
v___x_5453_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0);
v___x_5454_ = l_instInhabitedOfMonad___redArg(v___x_5452_, v___x_5453_);
v___x_5455_ = lean_panic_fn_borrowed(v___x_5454_, v_msg_5442_);
lean_dec(v___x_5454_);
return v___x_5455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object* v___x_5456_, lean_object* v___x_5457_, lean_object* v___x_5458_, lean_object* v_as_5459_, size_t v_sz_5460_, size_t v_i_5461_, lean_object* v_b_5462_){
_start:
{
lean_object* v_a_5464_; uint8_t v___x_5468_; 
v___x_5468_ = lean_usize_dec_lt(v_i_5461_, v_sz_5460_);
if (v___x_5468_ == 0)
{
return v_b_5462_;
}
else
{
lean_object* v_fst_5469_; lean_object* v_snd_5470_; lean_object* v___x_5472_; uint8_t v_isShared_5473_; uint8_t v_isSharedCheck_5495_; 
v_fst_5469_ = lean_ctor_get(v_b_5462_, 0);
v_snd_5470_ = lean_ctor_get(v_b_5462_, 1);
v_isSharedCheck_5495_ = !lean_is_exclusive(v_b_5462_);
if (v_isSharedCheck_5495_ == 0)
{
v___x_5472_ = v_b_5462_;
v_isShared_5473_ = v_isSharedCheck_5495_;
goto v_resetjp_5471_;
}
else
{
lean_inc(v_snd_5470_);
lean_inc(v_fst_5469_);
lean_dec(v_b_5462_);
v___x_5472_ = lean_box(0);
v_isShared_5473_ = v_isSharedCheck_5495_;
goto v_resetjp_5471_;
}
v_resetjp_5471_:
{
lean_object* v___x_5474_; lean_object* v_a_5475_; lean_object* v___x_5476_; 
v___x_5474_ = lean_box(0);
v_a_5475_ = lean_array_uget_borrowed(v_as_5459_, v_i_5461_);
v___x_5476_ = lean_array_get_borrowed(v___x_5474_, v___x_5456_, v_a_5475_);
if (lean_obj_tag(v___x_5476_) == 1)
{
lean_object* v_val_5477_; uint8_t v___x_5478_; lean_object* v___x_5479_; lean_object* v___x_5480_; uint8_t v___x_5481_; 
v_val_5477_ = lean_ctor_get(v___x_5476_, 0);
v___x_5478_ = 0;
v___x_5479_ = lean_box(v___x_5478_);
v___x_5480_ = lean_array_get(v___x_5479_, v_fst_5469_, v_val_5477_);
lean_dec(v___x_5479_);
v___x_5481_ = lean_unbox(v___x_5480_);
lean_dec(v___x_5480_);
if (v___x_5481_ == 0)
{
uint8_t v_changed_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5487_; 
lean_dec(v_snd_5470_);
v_changed_5482_ = lean_nat_dec_eq(v___x_5457_, v___x_5458_);
v___x_5483_ = lean_box(v_changed_5482_);
v___x_5484_ = lean_array_set(v_fst_5469_, v_val_5477_, v___x_5483_);
v___x_5485_ = lean_box(v_changed_5482_);
if (v_isShared_5473_ == 0)
{
lean_ctor_set(v___x_5472_, 1, v___x_5485_);
lean_ctor_set(v___x_5472_, 0, v___x_5484_);
v___x_5487_ = v___x_5472_;
goto v_reusejp_5486_;
}
else
{
lean_object* v_reuseFailAlloc_5488_; 
v_reuseFailAlloc_5488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5488_, 0, v___x_5484_);
lean_ctor_set(v_reuseFailAlloc_5488_, 1, v___x_5485_);
v___x_5487_ = v_reuseFailAlloc_5488_;
goto v_reusejp_5486_;
}
v_reusejp_5486_:
{
v_a_5464_ = v___x_5487_;
goto v___jp_5463_;
}
}
else
{
lean_object* v___x_5490_; 
if (v_isShared_5473_ == 0)
{
v___x_5490_ = v___x_5472_;
goto v_reusejp_5489_;
}
else
{
lean_object* v_reuseFailAlloc_5491_; 
v_reuseFailAlloc_5491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5491_, 0, v_fst_5469_);
lean_ctor_set(v_reuseFailAlloc_5491_, 1, v_snd_5470_);
v___x_5490_ = v_reuseFailAlloc_5491_;
goto v_reusejp_5489_;
}
v_reusejp_5489_:
{
v_a_5464_ = v___x_5490_;
goto v___jp_5463_;
}
}
}
else
{
lean_object* v___x_5493_; 
if (v_isShared_5473_ == 0)
{
v___x_5493_ = v___x_5472_;
goto v_reusejp_5492_;
}
else
{
lean_object* v_reuseFailAlloc_5494_; 
v_reuseFailAlloc_5494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5494_, 0, v_fst_5469_);
lean_ctor_set(v_reuseFailAlloc_5494_, 1, v_snd_5470_);
v___x_5493_ = v_reuseFailAlloc_5494_;
goto v_reusejp_5492_;
}
v_reusejp_5492_:
{
v_a_5464_ = v___x_5493_;
goto v___jp_5463_;
}
}
}
}
v___jp_5463_:
{
size_t v___x_5465_; size_t v___x_5466_; 
v___x_5465_ = ((size_t)1ULL);
v___x_5466_ = lean_usize_add(v_i_5461_, v___x_5465_);
v_i_5461_ = v___x_5466_;
v_b_5462_ = v_a_5464_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object* v___x_5496_, lean_object* v___x_5497_, lean_object* v___x_5498_, lean_object* v_as_5499_, lean_object* v_sz_5500_, lean_object* v_i_5501_, lean_object* v_b_5502_){
_start:
{
size_t v_sz_boxed_5503_; size_t v_i_boxed_5504_; lean_object* v_res_5505_; 
v_sz_boxed_5503_ = lean_unbox_usize(v_sz_5500_);
lean_dec(v_sz_5500_);
v_i_boxed_5504_ = lean_unbox_usize(v_i_5501_);
lean_dec(v_i_5501_);
v_res_5505_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5496_, v___x_5497_, v___x_5498_, v_as_5499_, v_sz_boxed_5503_, v_i_boxed_5504_, v_b_5502_);
lean_dec_ref(v_as_5499_);
lean_dec(v___x_5498_);
lean_dec(v___x_5497_);
lean_dec_ref(v___x_5496_);
return v_res_5505_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object* v_upperBound_5506_, lean_object* v___x_5507_, lean_object* v_fixedParamPerms_5508_, lean_object* v_next_5509_, lean_object* v___x_5510_, lean_object* v___x_5511_, lean_object* v_a_5512_, lean_object* v_b_5513_){
_start:
{
lean_object* v_a_5515_; uint8_t v___x_5519_; 
v___x_5519_ = lean_nat_dec_lt(v_a_5512_, v_upperBound_5506_);
if (v___x_5519_ == 0)
{
lean_dec(v_a_5512_);
return v_b_5513_;
}
else
{
lean_object* v_fst_5520_; lean_object* v_snd_5521_; lean_object* v___x_5523_; uint8_t v_isShared_5524_; uint8_t v_isSharedCheck_5556_; 
v_fst_5520_ = lean_ctor_get(v_b_5513_, 0);
v_snd_5521_ = lean_ctor_get(v_b_5513_, 1);
v_isSharedCheck_5556_ = !lean_is_exclusive(v_b_5513_);
if (v_isSharedCheck_5556_ == 0)
{
v___x_5523_ = v_b_5513_;
v_isShared_5524_ = v_isSharedCheck_5556_;
goto v_resetjp_5522_;
}
else
{
lean_inc(v_snd_5521_);
lean_inc(v_fst_5520_);
lean_dec(v_b_5513_);
v___x_5523_ = lean_box(0);
v_isShared_5524_ = v_isSharedCheck_5556_;
goto v_resetjp_5522_;
}
v_resetjp_5522_:
{
lean_object* v___x_5525_; 
v___x_5525_ = lean_array_fget_borrowed(v___x_5507_, v_a_5512_);
if (lean_obj_tag(v___x_5525_) == 1)
{
lean_object* v_val_5526_; uint8_t v___x_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; uint8_t v___x_5530_; 
v_val_5526_ = lean_ctor_get(v___x_5525_, 0);
v___x_5527_ = 0;
v___x_5528_ = lean_box(v___x_5527_);
v___x_5529_ = lean_array_get(v___x_5528_, v_fst_5520_, v_val_5526_);
lean_dec(v___x_5528_);
v___x_5530_ = lean_unbox(v___x_5529_);
lean_dec(v___x_5529_);
if (v___x_5530_ == 0)
{
lean_object* v___x_5532_; 
if (v_isShared_5524_ == 0)
{
v___x_5532_ = v___x_5523_;
goto v_reusejp_5531_;
}
else
{
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v_fst_5520_);
lean_ctor_set(v_reuseFailAlloc_5533_, 1, v_snd_5521_);
v___x_5532_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5531_;
}
v_reusejp_5531_:
{
v_a_5515_ = v___x_5532_;
goto v___jp_5514_;
}
}
else
{
lean_object* v_revDeps_5534_; lean_object* v___x_5535_; lean_object* v___x_5536_; lean_object* v___x_5537_; lean_object* v___x_5539_; 
v_revDeps_5534_ = lean_ctor_get(v_fixedParamPerms_5508_, 2);
v___x_5535_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5536_ = lean_array_get_borrowed(v___x_5535_, v_revDeps_5534_, v_next_5509_);
v___x_5537_ = lean_array_get_borrowed(v___x_5535_, v___x_5536_, v_a_5512_);
if (v_isShared_5524_ == 0)
{
v___x_5539_ = v___x_5523_;
goto v_reusejp_5538_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v_fst_5520_);
lean_ctor_set(v_reuseFailAlloc_5552_, 1, v_snd_5521_);
v___x_5539_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5538_;
}
v_reusejp_5538_:
{
size_t v_sz_5540_; size_t v___x_5541_; lean_object* v___x_5542_; lean_object* v_fst_5543_; lean_object* v_snd_5544_; lean_object* v___x_5546_; uint8_t v_isShared_5547_; uint8_t v_isSharedCheck_5551_; 
v_sz_5540_ = lean_array_size(v___x_5537_);
v___x_5541_ = ((size_t)0ULL);
v___x_5542_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5507_, v___x_5510_, v___x_5511_, v___x_5537_, v_sz_5540_, v___x_5541_, v___x_5539_);
v_fst_5543_ = lean_ctor_get(v___x_5542_, 0);
v_snd_5544_ = lean_ctor_get(v___x_5542_, 1);
v_isSharedCheck_5551_ = !lean_is_exclusive(v___x_5542_);
if (v_isSharedCheck_5551_ == 0)
{
v___x_5546_ = v___x_5542_;
v_isShared_5547_ = v_isSharedCheck_5551_;
goto v_resetjp_5545_;
}
else
{
lean_inc(v_snd_5544_);
lean_inc(v_fst_5543_);
lean_dec(v___x_5542_);
v___x_5546_ = lean_box(0);
v_isShared_5547_ = v_isSharedCheck_5551_;
goto v_resetjp_5545_;
}
v_resetjp_5545_:
{
lean_object* v___x_5549_; 
if (v_isShared_5547_ == 0)
{
v___x_5549_ = v___x_5546_;
goto v_reusejp_5548_;
}
else
{
lean_object* v_reuseFailAlloc_5550_; 
v_reuseFailAlloc_5550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5550_, 0, v_fst_5543_);
lean_ctor_set(v_reuseFailAlloc_5550_, 1, v_snd_5544_);
v___x_5549_ = v_reuseFailAlloc_5550_;
goto v_reusejp_5548_;
}
v_reusejp_5548_:
{
v_a_5515_ = v___x_5549_;
goto v___jp_5514_;
}
}
}
}
}
else
{
lean_object* v___x_5554_; 
if (v_isShared_5524_ == 0)
{
v___x_5554_ = v___x_5523_;
goto v_reusejp_5553_;
}
else
{
lean_object* v_reuseFailAlloc_5555_; 
v_reuseFailAlloc_5555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5555_, 0, v_fst_5520_);
lean_ctor_set(v_reuseFailAlloc_5555_, 1, v_snd_5521_);
v___x_5554_ = v_reuseFailAlloc_5555_;
goto v_reusejp_5553_;
}
v_reusejp_5553_:
{
v_a_5515_ = v___x_5554_;
goto v___jp_5514_;
}
}
}
}
v___jp_5514_:
{
lean_object* v___x_5516_; lean_object* v___x_5517_; 
v___x_5516_ = lean_unsigned_to_nat(1u);
v___x_5517_ = lean_nat_add(v_a_5512_, v___x_5516_);
lean_dec(v_a_5512_);
v_a_5512_ = v___x_5517_;
v_b_5513_ = v_a_5515_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object* v_upperBound_5557_, lean_object* v___x_5558_, lean_object* v_fixedParamPerms_5559_, lean_object* v_next_5560_, lean_object* v___x_5561_, lean_object* v___x_5562_, lean_object* v_a_5563_, lean_object* v_b_5564_){
_start:
{
lean_object* v_res_5565_; 
v_res_5565_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_5557_, v___x_5558_, v_fixedParamPerms_5559_, v_next_5560_, v___x_5561_, v___x_5562_, v_a_5563_, v_b_5564_);
lean_dec(v___x_5562_);
lean_dec(v___x_5561_);
lean_dec(v_next_5560_);
lean_dec_ref(v_fixedParamPerms_5559_);
lean_dec_ref(v___x_5558_);
lean_dec(v_upperBound_5557_);
return v_res_5565_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(lean_object* v_upperBound_5566_, lean_object* v___x_5567_, lean_object* v_fixedParamPerms_5568_, lean_object* v___x_5569_, lean_object* v___x_5570_, lean_object* v_a_5571_, lean_object* v_b_5572_){
_start:
{
uint8_t v___x_5573_; 
v___x_5573_ = lean_nat_dec_lt(v_a_5571_, v_upperBound_5566_);
if (v___x_5573_ == 0)
{
lean_dec(v_a_5571_);
return v_b_5572_;
}
else
{
lean_object* v_fst_5574_; lean_object* v_snd_5575_; lean_object* v___x_5577_; uint8_t v_isShared_5578_; uint8_t v_isSharedCheck_5598_; 
v_fst_5574_ = lean_ctor_get(v_b_5572_, 0);
v_snd_5575_ = lean_ctor_get(v_b_5572_, 1);
v_isSharedCheck_5598_ = !lean_is_exclusive(v_b_5572_);
if (v_isSharedCheck_5598_ == 0)
{
v___x_5577_ = v_b_5572_;
v_isShared_5578_ = v_isSharedCheck_5598_;
goto v_resetjp_5576_;
}
else
{
lean_inc(v_snd_5575_);
lean_inc(v_fst_5574_);
lean_dec(v_b_5572_);
v___x_5577_ = lean_box(0);
v_isShared_5578_ = v_isSharedCheck_5598_;
goto v_resetjp_5576_;
}
v_resetjp_5576_:
{
lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; lean_object* v___x_5583_; 
v___x_5579_ = lean_array_fget_borrowed(v___x_5567_, v_a_5571_);
v___x_5580_ = lean_array_get_size(v___x_5579_);
v___x_5581_ = lean_unsigned_to_nat(0u);
if (v_isShared_5578_ == 0)
{
v___x_5583_ = v___x_5577_;
goto v_reusejp_5582_;
}
else
{
lean_object* v_reuseFailAlloc_5597_; 
v_reuseFailAlloc_5597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5597_, 0, v_fst_5574_);
lean_ctor_set(v_reuseFailAlloc_5597_, 1, v_snd_5575_);
v___x_5583_ = v_reuseFailAlloc_5597_;
goto v_reusejp_5582_;
}
v_reusejp_5582_:
{
lean_object* v___x_5584_; lean_object* v_fst_5585_; lean_object* v_snd_5586_; lean_object* v___x_5588_; uint8_t v_isShared_5589_; uint8_t v_isSharedCheck_5596_; 
v___x_5584_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v___x_5580_, v___x_5579_, v_fixedParamPerms_5568_, v_a_5571_, v___x_5569_, v___x_5570_, v___x_5581_, v___x_5583_);
v_fst_5585_ = lean_ctor_get(v___x_5584_, 0);
v_snd_5586_ = lean_ctor_get(v___x_5584_, 1);
v_isSharedCheck_5596_ = !lean_is_exclusive(v___x_5584_);
if (v_isSharedCheck_5596_ == 0)
{
v___x_5588_ = v___x_5584_;
v_isShared_5589_ = v_isSharedCheck_5596_;
goto v_resetjp_5587_;
}
else
{
lean_inc(v_snd_5586_);
lean_inc(v_fst_5585_);
lean_dec(v___x_5584_);
v___x_5588_ = lean_box(0);
v_isShared_5589_ = v_isSharedCheck_5596_;
goto v_resetjp_5587_;
}
v_resetjp_5587_:
{
lean_object* v___x_5591_; 
if (v_isShared_5589_ == 0)
{
v___x_5591_ = v___x_5588_;
goto v_reusejp_5590_;
}
else
{
lean_object* v_reuseFailAlloc_5595_; 
v_reuseFailAlloc_5595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5595_, 0, v_fst_5585_);
lean_ctor_set(v_reuseFailAlloc_5595_, 1, v_snd_5586_);
v___x_5591_ = v_reuseFailAlloc_5595_;
goto v_reusejp_5590_;
}
v_reusejp_5590_:
{
lean_object* v___x_5592_; lean_object* v___x_5593_; 
v___x_5592_ = lean_unsigned_to_nat(1u);
v___x_5593_ = lean_nat_add(v_a_5571_, v___x_5592_);
lean_dec(v_a_5571_);
v_a_5571_ = v___x_5593_;
v_b_5572_ = v___x_5591_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg___boxed(lean_object* v_upperBound_5599_, lean_object* v___x_5600_, lean_object* v_fixedParamPerms_5601_, lean_object* v___x_5602_, lean_object* v___x_5603_, lean_object* v_a_5604_, lean_object* v_b_5605_){
_start:
{
lean_object* v_res_5606_; 
v_res_5606_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(v_upperBound_5599_, v___x_5600_, v_fixedParamPerms_5601_, v___x_5602_, v___x_5603_, v_a_5604_, v_b_5605_);
lean_dec(v___x_5603_);
lean_dec(v___x_5602_);
lean_dec_ref(v_fixedParamPerms_5601_);
lean_dec_ref(v___x_5600_);
lean_dec(v_upperBound_5599_);
return v_res_5606_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object* v_upperBound_5607_, lean_object* v___x_5608_, lean_object* v___x_5609_, lean_object* v___x_5610_, lean_object* v_fixedParamPerms_5611_, lean_object* v_a_5612_, lean_object* v_b_5613_){
_start:
{
uint8_t v___x_5614_; 
v___x_5614_ = lean_nat_dec_lt(v_a_5612_, v_upperBound_5607_);
if (v___x_5614_ == 0)
{
return v_b_5613_;
}
else
{
lean_object* v_fst_5615_; lean_object* v_snd_5616_; lean_object* v___x_5618_; uint8_t v_isShared_5619_; uint8_t v_isSharedCheck_5639_; 
v_fst_5615_ = lean_ctor_get(v_b_5613_, 0);
v_snd_5616_ = lean_ctor_get(v_b_5613_, 1);
v_isSharedCheck_5639_ = !lean_is_exclusive(v_b_5613_);
if (v_isSharedCheck_5639_ == 0)
{
v___x_5618_ = v_b_5613_;
v_isShared_5619_ = v_isSharedCheck_5639_;
goto v_resetjp_5617_;
}
else
{
lean_inc(v_snd_5616_);
lean_inc(v_fst_5615_);
lean_dec(v_b_5613_);
v___x_5618_ = lean_box(0);
v_isShared_5619_ = v_isSharedCheck_5639_;
goto v_resetjp_5617_;
}
v_resetjp_5617_:
{
lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; lean_object* v___x_5624_; 
v___x_5620_ = lean_array_fget_borrowed(v___x_5608_, v_a_5612_);
v___x_5621_ = lean_array_get_size(v___x_5620_);
v___x_5622_ = lean_unsigned_to_nat(0u);
if (v_isShared_5619_ == 0)
{
v___x_5624_ = v___x_5618_;
goto v_reusejp_5623_;
}
else
{
lean_object* v_reuseFailAlloc_5638_; 
v_reuseFailAlloc_5638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5638_, 0, v_fst_5615_);
lean_ctor_set(v_reuseFailAlloc_5638_, 1, v_snd_5616_);
v___x_5624_ = v_reuseFailAlloc_5638_;
goto v_reusejp_5623_;
}
v_reusejp_5623_:
{
lean_object* v___x_5625_; lean_object* v_fst_5626_; lean_object* v_snd_5627_; lean_object* v___x_5629_; uint8_t v_isShared_5630_; uint8_t v_isSharedCheck_5637_; 
v___x_5625_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v___x_5621_, v___x_5620_, v_fixedParamPerms_5611_, v_a_5612_, v___x_5609_, v___x_5610_, v___x_5622_, v___x_5624_);
v_fst_5626_ = lean_ctor_get(v___x_5625_, 0);
v_snd_5627_ = lean_ctor_get(v___x_5625_, 1);
v_isSharedCheck_5637_ = !lean_is_exclusive(v___x_5625_);
if (v_isSharedCheck_5637_ == 0)
{
v___x_5629_ = v___x_5625_;
v_isShared_5630_ = v_isSharedCheck_5637_;
goto v_resetjp_5628_;
}
else
{
lean_inc(v_snd_5627_);
lean_inc(v_fst_5626_);
lean_dec(v___x_5625_);
v___x_5629_ = lean_box(0);
v_isShared_5630_ = v_isSharedCheck_5637_;
goto v_resetjp_5628_;
}
v_resetjp_5628_:
{
lean_object* v___x_5632_; 
if (v_isShared_5630_ == 0)
{
v___x_5632_ = v___x_5629_;
goto v_reusejp_5631_;
}
else
{
lean_object* v_reuseFailAlloc_5636_; 
v_reuseFailAlloc_5636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5636_, 0, v_fst_5626_);
lean_ctor_set(v_reuseFailAlloc_5636_, 1, v_snd_5627_);
v___x_5632_ = v_reuseFailAlloc_5636_;
goto v_reusejp_5631_;
}
v_reusejp_5631_:
{
lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; 
v___x_5633_ = lean_unsigned_to_nat(1u);
v___x_5634_ = lean_nat_add(v_a_5612_, v___x_5633_);
v___x_5635_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(v_upperBound_5607_, v___x_5608_, v_fixedParamPerms_5611_, v___x_5609_, v___x_5610_, v___x_5634_, v___x_5632_);
return v___x_5635_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object* v_upperBound_5640_, lean_object* v___x_5641_, lean_object* v___x_5642_, lean_object* v___x_5643_, lean_object* v_fixedParamPerms_5644_, lean_object* v_a_5645_, lean_object* v_b_5646_){
_start:
{
lean_object* v_res_5647_; 
v_res_5647_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_5640_, v___x_5641_, v___x_5642_, v___x_5643_, v_fixedParamPerms_5644_, v_a_5645_, v_b_5646_);
lean_dec(v_a_5645_);
lean_dec_ref(v_fixedParamPerms_5644_);
lean_dec(v___x_5643_);
lean_dec(v___x_5642_);
lean_dec_ref(v___x_5641_);
lean_dec(v_upperBound_5640_);
return v_res_5647_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(lean_object* v___x_5648_, lean_object* v___x_5649_, lean_object* v___x_5650_, lean_object* v_fixedParamPerms_5651_, lean_object* v_a_5652_){
_start:
{
lean_object* v_snd_5653_; uint8_t v___x_5654_; 
v_snd_5653_ = lean_ctor_get(v_a_5652_, 1);
v___x_5654_ = lean_unbox(v_snd_5653_);
if (v___x_5654_ == 0)
{
lean_object* v_fst_5655_; lean_object* v___x_5657_; uint8_t v_isShared_5658_; uint8_t v_isSharedCheck_5662_; 
lean_inc(v_snd_5653_);
v_fst_5655_ = lean_ctor_get(v_a_5652_, 0);
v_isSharedCheck_5662_ = !lean_is_exclusive(v_a_5652_);
if (v_isSharedCheck_5662_ == 0)
{
lean_object* v_unused_5663_; 
v_unused_5663_ = lean_ctor_get(v_a_5652_, 1);
lean_dec(v_unused_5663_);
v___x_5657_ = v_a_5652_;
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
else
{
lean_inc(v_fst_5655_);
lean_dec(v_a_5652_);
v___x_5657_ = lean_box(0);
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
v_resetjp_5656_:
{
lean_object* v___x_5660_; 
if (v_isShared_5658_ == 0)
{
v___x_5660_ = v___x_5657_;
goto v_reusejp_5659_;
}
else
{
lean_object* v_reuseFailAlloc_5661_; 
v_reuseFailAlloc_5661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5661_, 0, v_fst_5655_);
lean_ctor_set(v_reuseFailAlloc_5661_, 1, v_snd_5653_);
v___x_5660_ = v_reuseFailAlloc_5661_;
goto v_reusejp_5659_;
}
v_reusejp_5659_:
{
return v___x_5660_;
}
}
}
else
{
lean_object* v_fst_5664_; lean_object* v___x_5666_; uint8_t v_isShared_5667_; uint8_t v_isSharedCheck_5685_; 
v_fst_5664_ = lean_ctor_get(v_a_5652_, 0);
v_isSharedCheck_5685_ = !lean_is_exclusive(v_a_5652_);
if (v_isSharedCheck_5685_ == 0)
{
lean_object* v_unused_5686_; 
v_unused_5686_ = lean_ctor_get(v_a_5652_, 1);
lean_dec(v_unused_5686_);
v___x_5666_ = v_a_5652_;
v_isShared_5667_ = v_isSharedCheck_5685_;
goto v_resetjp_5665_;
}
else
{
lean_inc(v_fst_5664_);
lean_dec(v_a_5652_);
v___x_5666_ = lean_box(0);
v_isShared_5667_ = v_isSharedCheck_5685_;
goto v_resetjp_5665_;
}
v_resetjp_5665_:
{
uint8_t v_changed_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5672_; 
v_changed_5668_ = 0;
v___x_5669_ = lean_unsigned_to_nat(0u);
v___x_5670_ = lean_box(v_changed_5668_);
if (v_isShared_5667_ == 0)
{
lean_ctor_set(v___x_5666_, 1, v___x_5670_);
v___x_5672_ = v___x_5666_;
goto v_reusejp_5671_;
}
else
{
lean_object* v_reuseFailAlloc_5684_; 
v_reuseFailAlloc_5684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5684_, 0, v_fst_5664_);
lean_ctor_set(v_reuseFailAlloc_5684_, 1, v___x_5670_);
v___x_5672_ = v_reuseFailAlloc_5684_;
goto v_reusejp_5671_;
}
v_reusejp_5671_:
{
lean_object* v___x_5673_; lean_object* v_fst_5674_; lean_object* v_snd_5675_; lean_object* v___x_5677_; uint8_t v_isShared_5678_; uint8_t v_isSharedCheck_5683_; 
v___x_5673_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v___x_5648_, v___x_5649_, v___x_5650_, v___x_5648_, v_fixedParamPerms_5651_, v___x_5669_, v___x_5672_);
v_fst_5674_ = lean_ctor_get(v___x_5673_, 0);
v_snd_5675_ = lean_ctor_get(v___x_5673_, 1);
v_isSharedCheck_5683_ = !lean_is_exclusive(v___x_5673_);
if (v_isSharedCheck_5683_ == 0)
{
v___x_5677_ = v___x_5673_;
v_isShared_5678_ = v_isSharedCheck_5683_;
goto v_resetjp_5676_;
}
else
{
lean_inc(v_snd_5675_);
lean_inc(v_fst_5674_);
lean_dec(v___x_5673_);
v___x_5677_ = lean_box(0);
v_isShared_5678_ = v_isSharedCheck_5683_;
goto v_resetjp_5676_;
}
v_resetjp_5676_:
{
lean_object* v___x_5680_; 
if (v_isShared_5678_ == 0)
{
v___x_5680_ = v___x_5677_;
goto v_reusejp_5679_;
}
else
{
lean_object* v_reuseFailAlloc_5682_; 
v_reuseFailAlloc_5682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5682_, 0, v_fst_5674_);
lean_ctor_set(v_reuseFailAlloc_5682_, 1, v_snd_5675_);
v___x_5680_ = v_reuseFailAlloc_5682_;
goto v_reusejp_5679_;
}
v_reusejp_5679_:
{
v_a_5652_ = v___x_5680_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg___boxed(lean_object* v___x_5687_, lean_object* v___x_5688_, lean_object* v___x_5689_, lean_object* v_fixedParamPerms_5690_, lean_object* v_a_5691_){
_start:
{
lean_object* v_res_5692_; 
v_res_5692_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_5687_, v___x_5688_, v___x_5689_, v_fixedParamPerms_5690_, v_a_5691_);
lean_dec_ref(v_fixedParamPerms_5690_);
lean_dec(v___x_5689_);
lean_dec_ref(v___x_5688_);
lean_dec(v___x_5687_);
return v_res_5692_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object* v_upperBound_5693_, lean_object* v_a_5694_, lean_object* v_b_5695_){
_start:
{
lean_object* v_a_5697_; uint8_t v___x_5701_; 
v___x_5701_ = lean_nat_dec_lt(v_a_5694_, v_upperBound_5693_);
if (v___x_5701_ == 0)
{
lean_dec(v_a_5694_);
return v_b_5695_;
}
else
{
lean_object* v_snd_5702_; lean_object* v_snd_5703_; lean_object* v_snd_5704_; lean_object* v_snd_5705_; lean_object* v_fst_5706_; lean_object* v___x_5708_; uint8_t v_isShared_5709_; uint8_t v_isSharedCheck_5818_; 
v_snd_5702_ = lean_ctor_get(v_b_5695_, 1);
lean_inc(v_snd_5702_);
v_snd_5703_ = lean_ctor_get(v_snd_5702_, 1);
lean_inc(v_snd_5703_);
v_snd_5704_ = lean_ctor_get(v_snd_5703_, 1);
lean_inc(v_snd_5704_);
v_snd_5705_ = lean_ctor_get(v_snd_5704_, 1);
lean_inc(v_snd_5705_);
v_fst_5706_ = lean_ctor_get(v_b_5695_, 0);
v_isSharedCheck_5818_ = !lean_is_exclusive(v_b_5695_);
if (v_isSharedCheck_5818_ == 0)
{
lean_object* v_unused_5819_; 
v_unused_5819_ = lean_ctor_get(v_b_5695_, 1);
lean_dec(v_unused_5819_);
v___x_5708_ = v_b_5695_;
v_isShared_5709_ = v_isSharedCheck_5818_;
goto v_resetjp_5707_;
}
else
{
lean_inc(v_fst_5706_);
lean_dec(v_b_5695_);
v___x_5708_ = lean_box(0);
v_isShared_5709_ = v_isSharedCheck_5818_;
goto v_resetjp_5707_;
}
v_resetjp_5707_:
{
lean_object* v_fst_5710_; lean_object* v___x_5712_; uint8_t v_isShared_5713_; uint8_t v_isSharedCheck_5816_; 
v_fst_5710_ = lean_ctor_get(v_snd_5702_, 0);
v_isSharedCheck_5816_ = !lean_is_exclusive(v_snd_5702_);
if (v_isSharedCheck_5816_ == 0)
{
lean_object* v_unused_5817_; 
v_unused_5817_ = lean_ctor_get(v_snd_5702_, 1);
lean_dec(v_unused_5817_);
v___x_5712_ = v_snd_5702_;
v_isShared_5713_ = v_isSharedCheck_5816_;
goto v_resetjp_5711_;
}
else
{
lean_inc(v_fst_5710_);
lean_dec(v_snd_5702_);
v___x_5712_ = lean_box(0);
v_isShared_5713_ = v_isSharedCheck_5816_;
goto v_resetjp_5711_;
}
v_resetjp_5711_:
{
lean_object* v_fst_5714_; lean_object* v___x_5716_; uint8_t v_isShared_5717_; uint8_t v_isSharedCheck_5814_; 
v_fst_5714_ = lean_ctor_get(v_snd_5703_, 0);
v_isSharedCheck_5814_ = !lean_is_exclusive(v_snd_5703_);
if (v_isSharedCheck_5814_ == 0)
{
lean_object* v_unused_5815_; 
v_unused_5815_ = lean_ctor_get(v_snd_5703_, 1);
lean_dec(v_unused_5815_);
v___x_5716_ = v_snd_5703_;
v_isShared_5717_ = v_isSharedCheck_5814_;
goto v_resetjp_5715_;
}
else
{
lean_inc(v_fst_5714_);
lean_dec(v_snd_5703_);
v___x_5716_ = lean_box(0);
v_isShared_5717_ = v_isSharedCheck_5814_;
goto v_resetjp_5715_;
}
v_resetjp_5715_:
{
lean_object* v_fst_5718_; lean_object* v___x_5720_; uint8_t v_isShared_5721_; uint8_t v_isSharedCheck_5812_; 
v_fst_5718_ = lean_ctor_get(v_snd_5704_, 0);
v_isSharedCheck_5812_ = !lean_is_exclusive(v_snd_5704_);
if (v_isSharedCheck_5812_ == 0)
{
lean_object* v_unused_5813_; 
v_unused_5813_ = lean_ctor_get(v_snd_5704_, 1);
lean_dec(v_unused_5813_);
v___x_5720_ = v_snd_5704_;
v_isShared_5721_ = v_isSharedCheck_5812_;
goto v_resetjp_5719_;
}
else
{
lean_inc(v_fst_5718_);
lean_dec(v_snd_5704_);
v___x_5720_ = lean_box(0);
v_isShared_5721_ = v_isSharedCheck_5812_;
goto v_resetjp_5719_;
}
v_resetjp_5719_:
{
lean_object* v_array_5722_; lean_object* v_start_5723_; lean_object* v_stop_5724_; uint8_t v___x_5725_; 
v_array_5722_ = lean_ctor_get(v_snd_5705_, 0);
v_start_5723_ = lean_ctor_get(v_snd_5705_, 1);
v_stop_5724_ = lean_ctor_get(v_snd_5705_, 2);
v___x_5725_ = lean_nat_dec_lt(v_start_5723_, v_stop_5724_);
if (v___x_5725_ == 0)
{
lean_object* v___x_5727_; 
lean_dec(v_a_5694_);
if (v_isShared_5721_ == 0)
{
v___x_5727_ = v___x_5720_;
goto v_reusejp_5726_;
}
else
{
lean_object* v_reuseFailAlloc_5737_; 
v_reuseFailAlloc_5737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5737_, 0, v_fst_5718_);
lean_ctor_set(v_reuseFailAlloc_5737_, 1, v_snd_5705_);
v___x_5727_ = v_reuseFailAlloc_5737_;
goto v_reusejp_5726_;
}
v_reusejp_5726_:
{
lean_object* v___x_5729_; 
if (v_isShared_5717_ == 0)
{
lean_ctor_set(v___x_5716_, 1, v___x_5727_);
v___x_5729_ = v___x_5716_;
goto v_reusejp_5728_;
}
else
{
lean_object* v_reuseFailAlloc_5736_; 
v_reuseFailAlloc_5736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5736_, 0, v_fst_5714_);
lean_ctor_set(v_reuseFailAlloc_5736_, 1, v___x_5727_);
v___x_5729_ = v_reuseFailAlloc_5736_;
goto v_reusejp_5728_;
}
v_reusejp_5728_:
{
lean_object* v___x_5731_; 
if (v_isShared_5713_ == 0)
{
lean_ctor_set(v___x_5712_, 1, v___x_5729_);
v___x_5731_ = v___x_5712_;
goto v_reusejp_5730_;
}
else
{
lean_object* v_reuseFailAlloc_5735_; 
v_reuseFailAlloc_5735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5735_, 0, v_fst_5710_);
lean_ctor_set(v_reuseFailAlloc_5735_, 1, v___x_5729_);
v___x_5731_ = v_reuseFailAlloc_5735_;
goto v_reusejp_5730_;
}
v_reusejp_5730_:
{
lean_object* v___x_5733_; 
if (v_isShared_5709_ == 0)
{
lean_ctor_set(v___x_5708_, 1, v___x_5731_);
v___x_5733_ = v___x_5708_;
goto v_reusejp_5732_;
}
else
{
lean_object* v_reuseFailAlloc_5734_; 
v_reuseFailAlloc_5734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5734_, 0, v_fst_5706_);
lean_ctor_set(v_reuseFailAlloc_5734_, 1, v___x_5731_);
v___x_5733_ = v_reuseFailAlloc_5734_;
goto v_reusejp_5732_;
}
v_reusejp_5732_:
{
return v___x_5733_;
}
}
}
}
}
else
{
lean_object* v___x_5739_; uint8_t v_isShared_5740_; uint8_t v_isSharedCheck_5808_; 
lean_inc(v_stop_5724_);
lean_inc(v_start_5723_);
lean_inc_ref(v_array_5722_);
v_isSharedCheck_5808_ = !lean_is_exclusive(v_snd_5705_);
if (v_isSharedCheck_5808_ == 0)
{
lean_object* v_unused_5809_; lean_object* v_unused_5810_; lean_object* v_unused_5811_; 
v_unused_5809_ = lean_ctor_get(v_snd_5705_, 2);
lean_dec(v_unused_5809_);
v_unused_5810_ = lean_ctor_get(v_snd_5705_, 1);
lean_dec(v_unused_5810_);
v_unused_5811_ = lean_ctor_get(v_snd_5705_, 0);
lean_dec(v_unused_5811_);
v___x_5739_ = v_snd_5705_;
v_isShared_5740_ = v_isSharedCheck_5808_;
goto v_resetjp_5738_;
}
else
{
lean_dec(v_snd_5705_);
v___x_5739_ = lean_box(0);
v_isShared_5740_ = v_isSharedCheck_5808_;
goto v_resetjp_5738_;
}
v_resetjp_5738_:
{
lean_object* v_array_5741_; lean_object* v_start_5742_; lean_object* v_stop_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5748_; 
v_array_5741_ = lean_ctor_get(v_fst_5718_, 0);
v_start_5742_ = lean_ctor_get(v_fst_5718_, 1);
v_stop_5743_ = lean_ctor_get(v_fst_5718_, 2);
v___x_5744_ = lean_array_fget(v_array_5722_, v_start_5723_);
v___x_5745_ = lean_unsigned_to_nat(1u);
v___x_5746_ = lean_nat_add(v_start_5723_, v___x_5745_);
lean_dec(v_start_5723_);
if (v_isShared_5740_ == 0)
{
lean_ctor_set(v___x_5739_, 1, v___x_5746_);
v___x_5748_ = v___x_5739_;
goto v_reusejp_5747_;
}
else
{
lean_object* v_reuseFailAlloc_5807_; 
v_reuseFailAlloc_5807_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5807_, 0, v_array_5722_);
lean_ctor_set(v_reuseFailAlloc_5807_, 1, v___x_5746_);
lean_ctor_set(v_reuseFailAlloc_5807_, 2, v_stop_5724_);
v___x_5748_ = v_reuseFailAlloc_5807_;
goto v_reusejp_5747_;
}
v_reusejp_5747_:
{
uint8_t v___x_5749_; 
v___x_5749_ = lean_nat_dec_lt(v_start_5742_, v_stop_5743_);
if (v___x_5749_ == 0)
{
lean_object* v___x_5751_; 
lean_dec(v___x_5744_);
lean_dec(v_a_5694_);
if (v_isShared_5721_ == 0)
{
lean_ctor_set(v___x_5720_, 1, v___x_5748_);
v___x_5751_ = v___x_5720_;
goto v_reusejp_5750_;
}
else
{
lean_object* v_reuseFailAlloc_5761_; 
v_reuseFailAlloc_5761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5761_, 0, v_fst_5718_);
lean_ctor_set(v_reuseFailAlloc_5761_, 1, v___x_5748_);
v___x_5751_ = v_reuseFailAlloc_5761_;
goto v_reusejp_5750_;
}
v_reusejp_5750_:
{
lean_object* v___x_5753_; 
if (v_isShared_5717_ == 0)
{
lean_ctor_set(v___x_5716_, 1, v___x_5751_);
v___x_5753_ = v___x_5716_;
goto v_reusejp_5752_;
}
else
{
lean_object* v_reuseFailAlloc_5760_; 
v_reuseFailAlloc_5760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5760_, 0, v_fst_5714_);
lean_ctor_set(v_reuseFailAlloc_5760_, 1, v___x_5751_);
v___x_5753_ = v_reuseFailAlloc_5760_;
goto v_reusejp_5752_;
}
v_reusejp_5752_:
{
lean_object* v___x_5755_; 
if (v_isShared_5713_ == 0)
{
lean_ctor_set(v___x_5712_, 1, v___x_5753_);
v___x_5755_ = v___x_5712_;
goto v_reusejp_5754_;
}
else
{
lean_object* v_reuseFailAlloc_5759_; 
v_reuseFailAlloc_5759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5759_, 0, v_fst_5710_);
lean_ctor_set(v_reuseFailAlloc_5759_, 1, v___x_5753_);
v___x_5755_ = v_reuseFailAlloc_5759_;
goto v_reusejp_5754_;
}
v_reusejp_5754_:
{
lean_object* v___x_5757_; 
if (v_isShared_5709_ == 0)
{
lean_ctor_set(v___x_5708_, 1, v___x_5755_);
v___x_5757_ = v___x_5708_;
goto v_reusejp_5756_;
}
else
{
lean_object* v_reuseFailAlloc_5758_; 
v_reuseFailAlloc_5758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5758_, 0, v_fst_5706_);
lean_ctor_set(v_reuseFailAlloc_5758_, 1, v___x_5755_);
v___x_5757_ = v_reuseFailAlloc_5758_;
goto v_reusejp_5756_;
}
v_reusejp_5756_:
{
return v___x_5757_;
}
}
}
}
}
else
{
lean_object* v___x_5763_; uint8_t v_isShared_5764_; uint8_t v_isSharedCheck_5803_; 
lean_inc(v_stop_5743_);
lean_inc(v_start_5742_);
lean_inc_ref(v_array_5741_);
v_isSharedCheck_5803_ = !lean_is_exclusive(v_fst_5718_);
if (v_isSharedCheck_5803_ == 0)
{
lean_object* v_unused_5804_; lean_object* v_unused_5805_; lean_object* v_unused_5806_; 
v_unused_5804_ = lean_ctor_get(v_fst_5718_, 2);
lean_dec(v_unused_5804_);
v_unused_5805_ = lean_ctor_get(v_fst_5718_, 1);
lean_dec(v_unused_5805_);
v_unused_5806_ = lean_ctor_get(v_fst_5718_, 0);
lean_dec(v_unused_5806_);
v___x_5763_ = v_fst_5718_;
v_isShared_5764_ = v_isSharedCheck_5803_;
goto v_resetjp_5762_;
}
else
{
lean_dec(v_fst_5718_);
v___x_5763_ = lean_box(0);
v_isShared_5764_ = v_isSharedCheck_5803_;
goto v_resetjp_5762_;
}
v_resetjp_5762_:
{
lean_object* v___x_5765_; lean_object* v___x_5766_; lean_object* v___x_5768_; 
v___x_5765_ = lean_array_fget(v_array_5741_, v_start_5742_);
v___x_5766_ = lean_nat_add(v_start_5742_, v___x_5745_);
lean_dec(v_start_5742_);
if (v_isShared_5764_ == 0)
{
lean_ctor_set(v___x_5763_, 1, v___x_5766_);
v___x_5768_ = v___x_5763_;
goto v_reusejp_5767_;
}
else
{
lean_object* v_reuseFailAlloc_5802_; 
v_reuseFailAlloc_5802_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5802_, 0, v_array_5741_);
lean_ctor_set(v_reuseFailAlloc_5802_, 1, v___x_5766_);
lean_ctor_set(v_reuseFailAlloc_5802_, 2, v_stop_5743_);
v___x_5768_ = v_reuseFailAlloc_5802_;
goto v_reusejp_5767_;
}
v_reusejp_5767_:
{
uint8_t v___x_5769_; 
v___x_5769_ = lean_unbox(v___x_5765_);
lean_dec(v___x_5765_);
if (v___x_5769_ == 0)
{
lean_object* v___x_5770_; lean_object* v___x_5771_; lean_object* v___x_5772_; lean_object* v___x_5773_; lean_object* v___x_5775_; 
v___x_5770_ = lean_array_get_size(v_fst_5714_);
v___x_5771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5771_, 0, v___x_5770_);
v___x_5772_ = lean_array_push(v_fst_5706_, v___x_5771_);
v___x_5773_ = lean_array_push(v_fst_5714_, v___x_5744_);
if (v_isShared_5721_ == 0)
{
lean_ctor_set(v___x_5720_, 1, v___x_5748_);
lean_ctor_set(v___x_5720_, 0, v___x_5768_);
v___x_5775_ = v___x_5720_;
goto v_reusejp_5774_;
}
else
{
lean_object* v_reuseFailAlloc_5785_; 
v_reuseFailAlloc_5785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5785_, 0, v___x_5768_);
lean_ctor_set(v_reuseFailAlloc_5785_, 1, v___x_5748_);
v___x_5775_ = v_reuseFailAlloc_5785_;
goto v_reusejp_5774_;
}
v_reusejp_5774_:
{
lean_object* v___x_5777_; 
if (v_isShared_5717_ == 0)
{
lean_ctor_set(v___x_5716_, 1, v___x_5775_);
lean_ctor_set(v___x_5716_, 0, v___x_5773_);
v___x_5777_ = v___x_5716_;
goto v_reusejp_5776_;
}
else
{
lean_object* v_reuseFailAlloc_5784_; 
v_reuseFailAlloc_5784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5784_, 0, v___x_5773_);
lean_ctor_set(v_reuseFailAlloc_5784_, 1, v___x_5775_);
v___x_5777_ = v_reuseFailAlloc_5784_;
goto v_reusejp_5776_;
}
v_reusejp_5776_:
{
lean_object* v___x_5779_; 
if (v_isShared_5713_ == 0)
{
lean_ctor_set(v___x_5712_, 1, v___x_5777_);
v___x_5779_ = v___x_5712_;
goto v_reusejp_5778_;
}
else
{
lean_object* v_reuseFailAlloc_5783_; 
v_reuseFailAlloc_5783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5783_, 0, v_fst_5710_);
lean_ctor_set(v_reuseFailAlloc_5783_, 1, v___x_5777_);
v___x_5779_ = v_reuseFailAlloc_5783_;
goto v_reusejp_5778_;
}
v_reusejp_5778_:
{
lean_object* v___x_5781_; 
if (v_isShared_5709_ == 0)
{
lean_ctor_set(v___x_5708_, 1, v___x_5779_);
lean_ctor_set(v___x_5708_, 0, v___x_5772_);
v___x_5781_ = v___x_5708_;
goto v_reusejp_5780_;
}
else
{
lean_object* v_reuseFailAlloc_5782_; 
v_reuseFailAlloc_5782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5782_, 0, v___x_5772_);
lean_ctor_set(v_reuseFailAlloc_5782_, 1, v___x_5779_);
v___x_5781_ = v_reuseFailAlloc_5782_;
goto v_reusejp_5780_;
}
v_reusejp_5780_:
{
v_a_5697_ = v___x_5781_;
goto v___jp_5696_;
}
}
}
}
}
else
{
lean_object* v___x_5786_; lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5791_; 
v___x_5786_ = lean_box(0);
v___x_5787_ = lean_array_push(v_fst_5706_, v___x_5786_);
v___x_5788_ = l_Lean_Expr_fvarId_x21(v___x_5744_);
lean_dec(v___x_5744_);
v___x_5789_ = lean_array_push(v_fst_5710_, v___x_5788_);
if (v_isShared_5721_ == 0)
{
lean_ctor_set(v___x_5720_, 1, v___x_5748_);
lean_ctor_set(v___x_5720_, 0, v___x_5768_);
v___x_5791_ = v___x_5720_;
goto v_reusejp_5790_;
}
else
{
lean_object* v_reuseFailAlloc_5801_; 
v_reuseFailAlloc_5801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5801_, 0, v___x_5768_);
lean_ctor_set(v_reuseFailAlloc_5801_, 1, v___x_5748_);
v___x_5791_ = v_reuseFailAlloc_5801_;
goto v_reusejp_5790_;
}
v_reusejp_5790_:
{
lean_object* v___x_5793_; 
if (v_isShared_5717_ == 0)
{
lean_ctor_set(v___x_5716_, 1, v___x_5791_);
v___x_5793_ = v___x_5716_;
goto v_reusejp_5792_;
}
else
{
lean_object* v_reuseFailAlloc_5800_; 
v_reuseFailAlloc_5800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5800_, 0, v_fst_5714_);
lean_ctor_set(v_reuseFailAlloc_5800_, 1, v___x_5791_);
v___x_5793_ = v_reuseFailAlloc_5800_;
goto v_reusejp_5792_;
}
v_reusejp_5792_:
{
lean_object* v___x_5795_; 
if (v_isShared_5713_ == 0)
{
lean_ctor_set(v___x_5712_, 1, v___x_5793_);
lean_ctor_set(v___x_5712_, 0, v___x_5789_);
v___x_5795_ = v___x_5712_;
goto v_reusejp_5794_;
}
else
{
lean_object* v_reuseFailAlloc_5799_; 
v_reuseFailAlloc_5799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5799_, 0, v___x_5789_);
lean_ctor_set(v_reuseFailAlloc_5799_, 1, v___x_5793_);
v___x_5795_ = v_reuseFailAlloc_5799_;
goto v_reusejp_5794_;
}
v_reusejp_5794_:
{
lean_object* v___x_5797_; 
if (v_isShared_5709_ == 0)
{
lean_ctor_set(v___x_5708_, 1, v___x_5795_);
lean_ctor_set(v___x_5708_, 0, v___x_5787_);
v___x_5797_ = v___x_5708_;
goto v_reusejp_5796_;
}
else
{
lean_object* v_reuseFailAlloc_5798_; 
v_reuseFailAlloc_5798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5798_, 0, v___x_5787_);
lean_ctor_set(v_reuseFailAlloc_5798_, 1, v___x_5795_);
v___x_5797_ = v_reuseFailAlloc_5798_;
goto v_reusejp_5796_;
}
v_reusejp_5796_:
{
v_a_5697_ = v___x_5797_;
goto v___jp_5696_;
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
}
}
}
}
}
}
v___jp_5696_:
{
lean_object* v___x_5698_; lean_object* v___x_5699_; 
v___x_5698_ = lean_unsigned_to_nat(1u);
v___x_5699_ = lean_nat_add(v_a_5694_, v___x_5698_);
lean_dec(v_a_5694_);
v_a_5694_ = v___x_5699_;
v_b_5695_ = v_a_5697_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object* v_upperBound_5820_, lean_object* v_a_5821_, lean_object* v_b_5822_){
_start:
{
lean_object* v_res_5823_; 
v_res_5823_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_5820_, v_a_5821_, v_b_5822_);
lean_dec(v_upperBound_5820_);
return v_res_5823_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object* v_as_5824_, size_t v_i_5825_, size_t v_stop_5826_){
_start:
{
uint8_t v___x_5827_; 
v___x_5827_ = lean_usize_dec_eq(v_i_5825_, v_stop_5826_);
if (v___x_5827_ == 0)
{
lean_object* v___x_5828_; uint8_t v___x_5829_; 
v___x_5828_ = lean_array_uget_borrowed(v_as_5824_, v_i_5825_);
v___x_5829_ = l_Lean_Expr_isFVar(v___x_5828_);
if (v___x_5829_ == 0)
{
uint8_t v___x_5830_; 
v___x_5830_ = 1;
return v___x_5830_;
}
else
{
size_t v___x_5831_; size_t v___x_5832_; 
v___x_5831_ = ((size_t)1ULL);
v___x_5832_ = lean_usize_add(v_i_5825_, v___x_5831_);
v_i_5825_ = v___x_5832_;
goto _start;
}
}
else
{
uint8_t v___x_5834_; 
v___x_5834_ = 0;
return v___x_5834_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object* v_as_5835_, lean_object* v_i_5836_, lean_object* v_stop_5837_){
_start:
{
size_t v_i_boxed_5838_; size_t v_stop_boxed_5839_; uint8_t v_res_5840_; lean_object* v_r_5841_; 
v_i_boxed_5838_ = lean_unbox_usize(v_i_5836_);
lean_dec(v_i_5836_);
v_stop_boxed_5839_ = lean_unbox_usize(v_stop_5837_);
lean_dec(v_stop_5837_);
v_res_5840_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_as_5835_, v_i_boxed_5838_, v_stop_boxed_5839_);
lean_dec_ref(v_as_5835_);
v_r_5841_ = lean_box(v_res_5840_);
return v_r_5841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object* v___x_5842_, size_t v_sz_5843_, size_t v_i_5844_, lean_object* v_bs_5845_){
_start:
{
uint8_t v___x_5846_; 
v___x_5846_ = lean_usize_dec_lt(v_i_5844_, v_sz_5843_);
if (v___x_5846_ == 0)
{
return v_bs_5845_;
}
else
{
lean_object* v_v_5847_; lean_object* v___x_5848_; lean_object* v_bs_x27_5849_; lean_object* v___y_5851_; 
v_v_5847_ = lean_array_uget(v_bs_5845_, v_i_5844_);
v___x_5848_ = lean_unsigned_to_nat(0u);
v_bs_x27_5849_ = lean_array_uset(v_bs_5845_, v_i_5844_, v___x_5848_);
if (lean_obj_tag(v_v_5847_) == 0)
{
v___y_5851_ = v_v_5847_;
goto v___jp_5850_;
}
else
{
lean_object* v_val_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; 
v_val_5856_ = lean_ctor_get(v_v_5847_, 0);
lean_inc(v_val_5856_);
lean_dec_ref_known(v_v_5847_, 1);
v___x_5857_ = lean_box(0);
v___x_5858_ = lean_array_get_borrowed(v___x_5857_, v___x_5842_, v_val_5856_);
lean_dec(v_val_5856_);
lean_inc(v___x_5858_);
v___y_5851_ = v___x_5858_;
goto v___jp_5850_;
}
v___jp_5850_:
{
size_t v___x_5852_; size_t v___x_5853_; lean_object* v___x_5854_; 
v___x_5852_ = ((size_t)1ULL);
v___x_5853_ = lean_usize_add(v_i_5844_, v___x_5852_);
v___x_5854_ = lean_array_uset(v_bs_x27_5849_, v_i_5844_, v___y_5851_);
v_i_5844_ = v___x_5853_;
v_bs_5845_ = v___x_5854_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object* v___x_5859_, lean_object* v_sz_5860_, lean_object* v_i_5861_, lean_object* v_bs_5862_){
_start:
{
size_t v_sz_boxed_5863_; size_t v_i_boxed_5864_; lean_object* v_res_5865_; 
v_sz_boxed_5863_ = lean_unbox_usize(v_sz_5860_);
lean_dec(v_sz_5860_);
v_i_boxed_5864_ = lean_unbox_usize(v_i_5861_);
lean_dec(v_i_5861_);
v_res_5865_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5859_, v_sz_boxed_5863_, v_i_boxed_5864_, v_bs_5862_);
lean_dec_ref(v___x_5859_);
return v_res_5865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object* v___x_5866_, size_t v_sz_5867_, size_t v_i_5868_, lean_object* v_bs_5869_){
_start:
{
uint8_t v___x_5870_; 
v___x_5870_ = lean_usize_dec_lt(v_i_5868_, v_sz_5867_);
if (v___x_5870_ == 0)
{
return v_bs_5869_;
}
else
{
lean_object* v_v_5871_; lean_object* v___x_5872_; lean_object* v_bs_x27_5873_; size_t v_sz_5874_; size_t v___x_5875_; lean_object* v___x_5876_; size_t v___x_5877_; size_t v___x_5878_; lean_object* v___x_5879_; 
v_v_5871_ = lean_array_uget(v_bs_5869_, v_i_5868_);
v___x_5872_ = lean_unsigned_to_nat(0u);
v_bs_x27_5873_ = lean_array_uset(v_bs_5869_, v_i_5868_, v___x_5872_);
v_sz_5874_ = lean_array_size(v_v_5871_);
v___x_5875_ = ((size_t)0ULL);
v___x_5876_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5866_, v_sz_5874_, v___x_5875_, v_v_5871_);
v___x_5877_ = ((size_t)1ULL);
v___x_5878_ = lean_usize_add(v_i_5868_, v___x_5877_);
v___x_5879_ = lean_array_uset(v_bs_x27_5873_, v_i_5868_, v___x_5876_);
v_i_5868_ = v___x_5878_;
v_bs_5869_ = v___x_5879_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object* v___x_5881_, lean_object* v_sz_5882_, lean_object* v_i_5883_, lean_object* v_bs_5884_){
_start:
{
size_t v_sz_boxed_5885_; size_t v_i_boxed_5886_; lean_object* v_res_5887_; 
v_sz_boxed_5885_ = lean_unbox_usize(v_sz_5882_);
lean_dec(v_sz_5882_);
v_i_boxed_5886_ = lean_unbox_usize(v_i_5883_);
lean_dec(v_i_5883_);
v_res_5887_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v___x_5881_, v_sz_boxed_5885_, v_i_boxed_5886_, v_bs_5884_);
lean_dec_ref(v___x_5881_);
return v_res_5887_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2(void){
_start:
{
lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; 
v___x_5890_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1));
v___x_5891_ = lean_unsigned_to_nat(6u);
v___x_5892_ = lean_unsigned_to_nat(463u);
v___x_5893_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5894_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5895_ = l_mkPanicMessageWithDecl(v___x_5894_, v___x_5893_, v___x_5892_, v___x_5891_, v___x_5890_);
return v___x_5895_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object* v___x_5896_, lean_object* v___x_5897_, lean_object* v___x_5898_, lean_object* v_as_5899_, size_t v_sz_5900_, size_t v_i_5901_, lean_object* v_b_5902_){
_start:
{
lean_object* v_a_5904_; uint8_t v___x_5908_; 
v___x_5908_ = lean_usize_dec_lt(v_i_5901_, v_sz_5900_);
if (v___x_5908_ == 0)
{
return v_b_5902_;
}
else
{
lean_object* v_a_5909_; lean_object* v___x_5910_; uint8_t v___x_5911_; 
v_a_5909_ = lean_array_uget_borrowed(v_as_5899_, v_i_5901_);
v___x_5910_ = lean_array_get_size(v___x_5896_);
v___x_5911_ = lean_nat_dec_lt(v_a_5909_, v___x_5910_);
if (v___x_5911_ == 0)
{
lean_object* v___x_5912_; lean_object* v___x_5913_; 
lean_dec_ref(v_b_5902_);
v___x_5912_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2);
v___x_5913_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(v___x_5912_);
if (lean_obj_tag(v___x_5913_) == 0)
{
lean_object* v_a_5914_; 
v_a_5914_ = lean_ctor_get(v___x_5913_, 0);
lean_inc(v_a_5914_);
lean_dec_ref_known(v___x_5913_, 1);
return v_a_5914_;
}
else
{
lean_object* v_a_5915_; 
v_a_5915_ = lean_ctor_get(v___x_5913_, 0);
lean_inc(v_a_5915_);
lean_dec_ref_known(v___x_5913_, 1);
v_a_5904_ = v_a_5915_;
goto v___jp_5903_;
}
}
else
{
lean_object* v___x_5916_; lean_object* v___x_5917_; 
v___x_5916_ = lean_box(0);
v___x_5917_ = lean_array_get_borrowed(v___x_5916_, v___x_5896_, v_a_5909_);
if (lean_obj_tag(v___x_5917_) == 1)
{
lean_object* v_val_5918_; uint8_t v_changed_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; 
v_val_5918_ = lean_ctor_get(v___x_5917_, 0);
v_changed_5919_ = lean_nat_dec_eq(v___x_5897_, v___x_5898_);
v___x_5920_ = lean_box(v_changed_5919_);
v___x_5921_ = lean_array_set(v_b_5902_, v_val_5918_, v___x_5920_);
v_a_5904_ = v___x_5921_;
goto v___jp_5903_;
}
else
{
v_a_5904_ = v_b_5902_;
goto v___jp_5903_;
}
}
}
v___jp_5903_:
{
size_t v___x_5905_; size_t v___x_5906_; 
v___x_5905_ = ((size_t)1ULL);
v___x_5906_ = lean_usize_add(v_i_5901_, v___x_5905_);
v_i_5901_ = v___x_5906_;
v_b_5902_ = v_a_5904_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object* v___x_5922_, lean_object* v___x_5923_, lean_object* v___x_5924_, lean_object* v_as_5925_, lean_object* v_sz_5926_, lean_object* v_i_5927_, lean_object* v_b_5928_){
_start:
{
size_t v_sz_boxed_5929_; size_t v_i_boxed_5930_; lean_object* v_res_5931_; 
v_sz_boxed_5929_ = lean_unbox_usize(v_sz_5926_);
lean_dec(v_sz_5926_);
v_i_boxed_5930_ = lean_unbox_usize(v_i_5927_);
lean_dec(v_i_5927_);
v_res_5931_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5922_, v___x_5923_, v___x_5924_, v_as_5925_, v_sz_boxed_5929_, v_i_boxed_5930_, v_b_5928_);
lean_dec_ref(v_as_5925_);
lean_dec(v___x_5924_);
lean_dec(v___x_5923_);
lean_dec_ref(v___x_5922_);
return v_res_5931_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object* v_upperBound_5932_, lean_object* v___x_5933_, lean_object* v___x_5934_, lean_object* v_a_5935_, lean_object* v_b_5936_){
_start:
{
uint8_t v___x_5937_; 
v___x_5937_ = lean_nat_dec_lt(v_a_5935_, v_upperBound_5932_);
if (v___x_5937_ == 0)
{
lean_dec(v_a_5935_);
return v_b_5936_;
}
else
{
lean_object* v_snd_5938_; lean_object* v_snd_5939_; lean_object* v_fst_5940_; lean_object* v___x_5942_; uint8_t v_isShared_5943_; uint8_t v_isSharedCheck_6006_; 
v_snd_5938_ = lean_ctor_get(v_b_5936_, 1);
lean_inc(v_snd_5938_);
v_snd_5939_ = lean_ctor_get(v_snd_5938_, 1);
lean_inc(v_snd_5939_);
v_fst_5940_ = lean_ctor_get(v_b_5936_, 0);
v_isSharedCheck_6006_ = !lean_is_exclusive(v_b_5936_);
if (v_isSharedCheck_6006_ == 0)
{
lean_object* v_unused_6007_; 
v_unused_6007_ = lean_ctor_get(v_b_5936_, 1);
lean_dec(v_unused_6007_);
v___x_5942_ = v_b_5936_;
v_isShared_5943_ = v_isSharedCheck_6006_;
goto v_resetjp_5941_;
}
else
{
lean_inc(v_fst_5940_);
lean_dec(v_b_5936_);
v___x_5942_ = lean_box(0);
v_isShared_5943_ = v_isSharedCheck_6006_;
goto v_resetjp_5941_;
}
v_resetjp_5941_:
{
lean_object* v_fst_5944_; lean_object* v___x_5946_; uint8_t v_isShared_5947_; uint8_t v_isSharedCheck_6004_; 
v_fst_5944_ = lean_ctor_get(v_snd_5938_, 0);
v_isSharedCheck_6004_ = !lean_is_exclusive(v_snd_5938_);
if (v_isSharedCheck_6004_ == 0)
{
lean_object* v_unused_6005_; 
v_unused_6005_ = lean_ctor_get(v_snd_5938_, 1);
lean_dec(v_unused_6005_);
v___x_5946_ = v_snd_5938_;
v_isShared_5947_ = v_isSharedCheck_6004_;
goto v_resetjp_5945_;
}
else
{
lean_inc(v_fst_5944_);
lean_dec(v_snd_5938_);
v___x_5946_ = lean_box(0);
v_isShared_5947_ = v_isSharedCheck_6004_;
goto v_resetjp_5945_;
}
v_resetjp_5945_:
{
lean_object* v_array_5948_; lean_object* v_start_5949_; lean_object* v_stop_5950_; uint8_t v___x_5951_; 
v_array_5948_ = lean_ctor_get(v_snd_5939_, 0);
v_start_5949_ = lean_ctor_get(v_snd_5939_, 1);
v_stop_5950_ = lean_ctor_get(v_snd_5939_, 2);
v___x_5951_ = lean_nat_dec_lt(v_start_5949_, v_stop_5950_);
if (v___x_5951_ == 0)
{
lean_object* v___x_5953_; 
lean_dec(v_a_5935_);
if (v_isShared_5947_ == 0)
{
v___x_5953_ = v___x_5946_;
goto v_reusejp_5952_;
}
else
{
lean_object* v_reuseFailAlloc_5957_; 
v_reuseFailAlloc_5957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5957_, 0, v_fst_5944_);
lean_ctor_set(v_reuseFailAlloc_5957_, 1, v_snd_5939_);
v___x_5953_ = v_reuseFailAlloc_5957_;
goto v_reusejp_5952_;
}
v_reusejp_5952_:
{
lean_object* v___x_5955_; 
if (v_isShared_5943_ == 0)
{
lean_ctor_set(v___x_5942_, 1, v___x_5953_);
v___x_5955_ = v___x_5942_;
goto v_reusejp_5954_;
}
else
{
lean_object* v_reuseFailAlloc_5956_; 
v_reuseFailAlloc_5956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5956_, 0, v_fst_5940_);
lean_ctor_set(v_reuseFailAlloc_5956_, 1, v___x_5953_);
v___x_5955_ = v_reuseFailAlloc_5956_;
goto v_reusejp_5954_;
}
v_reusejp_5954_:
{
return v___x_5955_;
}
}
}
else
{
lean_object* v___x_5959_; uint8_t v_isShared_5960_; uint8_t v_isSharedCheck_6000_; 
lean_inc(v_stop_5950_);
lean_inc(v_start_5949_);
lean_inc_ref(v_array_5948_);
v_isSharedCheck_6000_ = !lean_is_exclusive(v_snd_5939_);
if (v_isSharedCheck_6000_ == 0)
{
lean_object* v_unused_6001_; lean_object* v_unused_6002_; lean_object* v_unused_6003_; 
v_unused_6001_ = lean_ctor_get(v_snd_5939_, 2);
lean_dec(v_unused_6001_);
v_unused_6002_ = lean_ctor_get(v_snd_5939_, 1);
lean_dec(v_unused_6002_);
v_unused_6003_ = lean_ctor_get(v_snd_5939_, 0);
lean_dec(v_unused_6003_);
v___x_5959_ = v_snd_5939_;
v_isShared_5960_ = v_isSharedCheck_6000_;
goto v_resetjp_5958_;
}
else
{
lean_dec(v_snd_5939_);
v___x_5959_ = lean_box(0);
v_isShared_5960_ = v_isSharedCheck_6000_;
goto v_resetjp_5958_;
}
v_resetjp_5958_:
{
lean_object* v_array_5961_; lean_object* v_start_5962_; lean_object* v_stop_5963_; lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5968_; 
v_array_5961_ = lean_ctor_get(v_fst_5944_, 0);
v_start_5962_ = lean_ctor_get(v_fst_5944_, 1);
v_stop_5963_ = lean_ctor_get(v_fst_5944_, 2);
v___x_5964_ = lean_array_fget(v_array_5948_, v_start_5949_);
v___x_5965_ = lean_unsigned_to_nat(1u);
v___x_5966_ = lean_nat_add(v_start_5949_, v___x_5965_);
lean_dec(v_start_5949_);
if (v_isShared_5960_ == 0)
{
lean_ctor_set(v___x_5959_, 1, v___x_5966_);
v___x_5968_ = v___x_5959_;
goto v_reusejp_5967_;
}
else
{
lean_object* v_reuseFailAlloc_5999_; 
v_reuseFailAlloc_5999_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5999_, 0, v_array_5948_);
lean_ctor_set(v_reuseFailAlloc_5999_, 1, v___x_5966_);
lean_ctor_set(v_reuseFailAlloc_5999_, 2, v_stop_5950_);
v___x_5968_ = v_reuseFailAlloc_5999_;
goto v_reusejp_5967_;
}
v_reusejp_5967_:
{
uint8_t v___x_5969_; 
v___x_5969_ = lean_nat_dec_lt(v_start_5962_, v_stop_5963_);
if (v___x_5969_ == 0)
{
lean_object* v___x_5971_; 
lean_dec(v___x_5964_);
lean_dec(v_a_5935_);
if (v_isShared_5947_ == 0)
{
lean_ctor_set(v___x_5946_, 1, v___x_5968_);
v___x_5971_ = v___x_5946_;
goto v_reusejp_5970_;
}
else
{
lean_object* v_reuseFailAlloc_5975_; 
v_reuseFailAlloc_5975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5975_, 0, v_fst_5944_);
lean_ctor_set(v_reuseFailAlloc_5975_, 1, v___x_5968_);
v___x_5971_ = v_reuseFailAlloc_5975_;
goto v_reusejp_5970_;
}
v_reusejp_5970_:
{
lean_object* v___x_5973_; 
if (v_isShared_5943_ == 0)
{
lean_ctor_set(v___x_5942_, 1, v___x_5971_);
v___x_5973_ = v___x_5942_;
goto v_reusejp_5972_;
}
else
{
lean_object* v_reuseFailAlloc_5974_; 
v_reuseFailAlloc_5974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5974_, 0, v_fst_5940_);
lean_ctor_set(v_reuseFailAlloc_5974_, 1, v___x_5971_);
v___x_5973_ = v_reuseFailAlloc_5974_;
goto v_reusejp_5972_;
}
v_reusejp_5972_:
{
return v___x_5973_;
}
}
}
else
{
lean_object* v___x_5977_; uint8_t v_isShared_5978_; uint8_t v_isSharedCheck_5995_; 
lean_inc(v_stop_5963_);
lean_inc(v_start_5962_);
lean_inc_ref(v_array_5961_);
v_isSharedCheck_5995_ = !lean_is_exclusive(v_fst_5944_);
if (v_isSharedCheck_5995_ == 0)
{
lean_object* v_unused_5996_; lean_object* v_unused_5997_; lean_object* v_unused_5998_; 
v_unused_5996_ = lean_ctor_get(v_fst_5944_, 2);
lean_dec(v_unused_5996_);
v_unused_5997_ = lean_ctor_get(v_fst_5944_, 1);
lean_dec(v_unused_5997_);
v_unused_5998_ = lean_ctor_get(v_fst_5944_, 0);
lean_dec(v_unused_5998_);
v___x_5977_ = v_fst_5944_;
v_isShared_5978_ = v_isSharedCheck_5995_;
goto v_resetjp_5976_;
}
else
{
lean_dec(v_fst_5944_);
v___x_5977_ = lean_box(0);
v_isShared_5978_ = v_isSharedCheck_5995_;
goto v_resetjp_5976_;
}
v_resetjp_5976_:
{
lean_object* v___x_5979_; lean_object* v___x_5980_; lean_object* v___x_5982_; 
v___x_5979_ = lean_array_fget(v_array_5961_, v_start_5962_);
v___x_5980_ = lean_nat_add(v_start_5962_, v___x_5965_);
lean_dec(v_start_5962_);
if (v_isShared_5978_ == 0)
{
lean_ctor_set(v___x_5977_, 1, v___x_5980_);
v___x_5982_ = v___x_5977_;
goto v_reusejp_5981_;
}
else
{
lean_object* v_reuseFailAlloc_5994_; 
v_reuseFailAlloc_5994_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5994_, 0, v_array_5961_);
lean_ctor_set(v_reuseFailAlloc_5994_, 1, v___x_5980_);
lean_ctor_set(v_reuseFailAlloc_5994_, 2, v_stop_5963_);
v___x_5982_ = v_reuseFailAlloc_5994_;
goto v_reusejp_5981_;
}
v_reusejp_5981_:
{
size_t v_sz_5983_; size_t v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5987_; 
v_sz_5983_ = lean_array_size(v___x_5979_);
v___x_5984_ = ((size_t)0ULL);
v___x_5985_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5964_, v___x_5933_, v___x_5934_, v___x_5979_, v_sz_5983_, v___x_5984_, v_fst_5940_);
lean_dec(v___x_5979_);
lean_dec(v___x_5964_);
if (v_isShared_5947_ == 0)
{
lean_ctor_set(v___x_5946_, 1, v___x_5968_);
lean_ctor_set(v___x_5946_, 0, v___x_5982_);
v___x_5987_ = v___x_5946_;
goto v_reusejp_5986_;
}
else
{
lean_object* v_reuseFailAlloc_5993_; 
v_reuseFailAlloc_5993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5993_, 0, v___x_5982_);
lean_ctor_set(v_reuseFailAlloc_5993_, 1, v___x_5968_);
v___x_5987_ = v_reuseFailAlloc_5993_;
goto v_reusejp_5986_;
}
v_reusejp_5986_:
{
lean_object* v___x_5989_; 
if (v_isShared_5943_ == 0)
{
lean_ctor_set(v___x_5942_, 1, v___x_5987_);
lean_ctor_set(v___x_5942_, 0, v___x_5985_);
v___x_5989_ = v___x_5942_;
goto v_reusejp_5988_;
}
else
{
lean_object* v_reuseFailAlloc_5992_; 
v_reuseFailAlloc_5992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5992_, 0, v___x_5985_);
lean_ctor_set(v_reuseFailAlloc_5992_, 1, v___x_5987_);
v___x_5989_ = v_reuseFailAlloc_5992_;
goto v_reusejp_5988_;
}
v_reusejp_5988_:
{
lean_object* v___x_5990_; 
v___x_5990_ = lean_nat_add(v_a_5935_, v___x_5965_);
lean_dec(v_a_5935_);
v_a_5935_ = v___x_5990_;
v_b_5936_ = v___x_5989_;
goto _start;
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
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object* v_upperBound_6008_, lean_object* v___x_6009_, lean_object* v___x_6010_, lean_object* v_a_6011_, lean_object* v_b_6012_){
_start:
{
lean_object* v_res_6013_; 
v_res_6013_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_6008_, v___x_6009_, v___x_6010_, v_a_6011_, v_b_6012_);
lean_dec(v___x_6010_);
lean_dec(v___x_6009_);
lean_dec(v_upperBound_6008_);
return v_res_6013_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__1(void){
_start:
{
lean_object* v___x_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; 
v___x_6015_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__0));
v___x_6016_ = lean_unsigned_to_nat(2u);
v___x_6017_ = lean_unsigned_to_nat(457u);
v___x_6018_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_6019_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_6020_ = l_mkPanicMessageWithDecl(v___x_6019_, v___x_6018_, v___x_6017_, v___x_6016_, v___x_6015_);
return v___x_6020_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__3(void){
_start:
{
lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; 
v___x_6022_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__2));
v___x_6023_ = lean_unsigned_to_nat(2u);
v___x_6024_ = lean_unsigned_to_nat(458u);
v___x_6025_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_6026_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_6027_ = l_mkPanicMessageWithDecl(v___x_6026_, v___x_6025_, v___x_6024_, v___x_6023_, v___x_6022_);
return v___x_6027_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__5(void){
_start:
{
lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; 
v___x_6029_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__4));
v___x_6030_ = lean_unsigned_to_nat(2u);
v___x_6031_ = lean_unsigned_to_nat(456u);
v___x_6032_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_6033_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_6034_ = l_mkPanicMessageWithDecl(v___x_6033_, v___x_6032_, v___x_6031_, v___x_6030_, v___x_6029_);
return v___x_6034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object* v_fixedParamPerms_6035_, lean_object* v_xs_6036_, lean_object* v_toErase_6037_){
_start:
{
lean_object* v___x_6038_; lean_object* v___x_6039_; uint8_t v___x_6123_; 
v___x_6038_ = lean_unsigned_to_nat(0u);
v___x_6039_ = lean_array_get_size(v_xs_6036_);
v___x_6123_ = lean_nat_dec_lt(v___x_6038_, v___x_6039_);
if (v___x_6123_ == 0)
{
goto v___jp_6040_;
}
else
{
if (v___x_6123_ == 0)
{
goto v___jp_6040_;
}
else
{
size_t v___x_6124_; size_t v___x_6125_; uint8_t v___x_6126_; 
v___x_6124_ = ((size_t)0ULL);
v___x_6125_ = lean_usize_of_nat(v___x_6039_);
v___x_6126_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_xs_6036_, v___x_6124_, v___x_6125_);
if (v___x_6126_ == 0)
{
goto v___jp_6040_;
}
else
{
lean_object* v___x_6127_; lean_object* v___x_6128_; 
lean_dec_ref(v_toErase_6037_);
lean_dec_ref(v_xs_6036_);
lean_dec_ref(v_fixedParamPerms_6035_);
v___x_6127_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__5, &l_Lean_Elab_FixedParamPerms_erase___closed__5_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__5);
v___x_6128_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6127_);
return v___x_6128_;
}
}
}
v___jp_6040_:
{
lean_object* v_numFixed_6041_; lean_object* v_perms_6042_; lean_object* v_revDeps_6043_; uint8_t v___x_6044_; 
v_numFixed_6041_ = lean_ctor_get(v_fixedParamPerms_6035_, 0);
v_perms_6042_ = lean_ctor_get(v_fixedParamPerms_6035_, 1);
lean_inc_ref(v_perms_6042_);
v_revDeps_6043_ = lean_ctor_get(v_fixedParamPerms_6035_, 2);
lean_inc_ref(v_revDeps_6043_);
v___x_6044_ = lean_nat_dec_eq(v_numFixed_6041_, v___x_6039_);
if (v___x_6044_ == 0)
{
lean_object* v___x_6045_; lean_object* v___x_6046_; 
lean_dec_ref(v_revDeps_6043_);
lean_dec_ref(v_perms_6042_);
lean_dec_ref(v_toErase_6037_);
lean_dec_ref(v_xs_6036_);
lean_dec_ref(v_fixedParamPerms_6035_);
v___x_6045_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__1, &l_Lean_Elab_FixedParamPerms_erase___closed__1_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__1);
v___x_6046_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6045_);
return v___x_6046_;
}
else
{
lean_object* v___x_6047_; lean_object* v___x_6048_; uint8_t v_changed_6049_; 
v___x_6047_ = lean_array_get_size(v_toErase_6037_);
v___x_6048_ = lean_array_get_size(v_perms_6042_);
v_changed_6049_ = lean_nat_dec_eq(v___x_6047_, v___x_6048_);
if (v_changed_6049_ == 0)
{
lean_object* v___x_6050_; lean_object* v___x_6051_; 
lean_dec_ref(v_revDeps_6043_);
lean_dec_ref(v_perms_6042_);
lean_dec_ref(v_toErase_6037_);
lean_dec_ref(v_xs_6036_);
lean_dec_ref(v_fixedParamPerms_6035_);
v___x_6050_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__3, &l_Lean_Elab_FixedParamPerms_erase___closed__3_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__3);
v___x_6051_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6050_);
return v___x_6051_;
}
else
{
uint8_t v_changed_6052_; lean_object* v___x_6053_; lean_object* v_mask_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v_fst_6060_; lean_object* v___x_6062_; uint8_t v_isShared_6063_; uint8_t v_isSharedCheck_6121_; 
v_changed_6052_ = 0;
v___x_6053_ = lean_box(v_changed_6052_);
lean_inc(v_numFixed_6041_);
v_mask_6054_ = lean_mk_array(v_numFixed_6041_, v___x_6053_);
v___x_6055_ = l_Array_toSubarray___redArg(v_toErase_6037_, v___x_6038_, v___x_6047_);
lean_inc_ref(v_perms_6042_);
v___x_6056_ = l_Array_toSubarray___redArg(v_perms_6042_, v___x_6038_, v___x_6048_);
v___x_6057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6057_, 0, v___x_6055_);
lean_ctor_set(v___x_6057_, 1, v___x_6056_);
v___x_6058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6058_, 0, v_mask_6054_);
lean_ctor_set(v___x_6058_, 1, v___x_6057_);
v___x_6059_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v___x_6047_, v___x_6047_, v___x_6048_, v___x_6038_, v___x_6058_);
v_fst_6060_ = lean_ctor_get(v___x_6059_, 0);
v_isSharedCheck_6121_ = !lean_is_exclusive(v___x_6059_);
if (v_isSharedCheck_6121_ == 0)
{
lean_object* v_unused_6122_; 
v_unused_6122_ = lean_ctor_get(v___x_6059_, 1);
lean_dec(v_unused_6122_);
v___x_6062_ = v___x_6059_;
v_isShared_6063_ = v_isSharedCheck_6121_;
goto v_resetjp_6061_;
}
else
{
lean_inc(v_fst_6060_);
lean_dec(v___x_6059_);
v___x_6062_ = lean_box(0);
v_isShared_6063_ = v_isSharedCheck_6121_;
goto v_resetjp_6061_;
}
v_resetjp_6061_:
{
lean_object* v___x_6064_; lean_object* v___x_6066_; 
v___x_6064_ = lean_box(v_changed_6049_);
if (v_isShared_6063_ == 0)
{
lean_ctor_set(v___x_6062_, 1, v___x_6064_);
v___x_6066_ = v___x_6062_;
goto v_reusejp_6065_;
}
else
{
lean_object* v_reuseFailAlloc_6120_; 
v_reuseFailAlloc_6120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6120_, 0, v_fst_6060_);
lean_ctor_set(v_reuseFailAlloc_6120_, 1, v___x_6064_);
v___x_6066_ = v_reuseFailAlloc_6120_;
goto v_reusejp_6065_;
}
v_reusejp_6065_:
{
lean_object* v___x_6067_; lean_object* v___x_6069_; uint8_t v_isShared_6070_; uint8_t v_isSharedCheck_6116_; 
v___x_6067_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_6048_, v_perms_6042_, v___x_6047_, v_fixedParamPerms_6035_, v___x_6066_);
v_isSharedCheck_6116_ = !lean_is_exclusive(v_fixedParamPerms_6035_);
if (v_isSharedCheck_6116_ == 0)
{
lean_object* v_unused_6117_; lean_object* v_unused_6118_; lean_object* v_unused_6119_; 
v_unused_6117_ = lean_ctor_get(v_fixedParamPerms_6035_, 2);
lean_dec(v_unused_6117_);
v_unused_6118_ = lean_ctor_get(v_fixedParamPerms_6035_, 1);
lean_dec(v_unused_6118_);
v_unused_6119_ = lean_ctor_get(v_fixedParamPerms_6035_, 0);
lean_dec(v_unused_6119_);
v___x_6069_ = v_fixedParamPerms_6035_;
v_isShared_6070_ = v_isSharedCheck_6116_;
goto v_resetjp_6068_;
}
else
{
lean_dec(v_fixedParamPerms_6035_);
v___x_6069_ = lean_box(0);
v_isShared_6070_ = v_isSharedCheck_6116_;
goto v_resetjp_6068_;
}
v_resetjp_6068_:
{
lean_object* v_fst_6071_; lean_object* v___x_6073_; uint8_t v_isShared_6074_; uint8_t v_isSharedCheck_6114_; 
v_fst_6071_ = lean_ctor_get(v___x_6067_, 0);
v_isSharedCheck_6114_ = !lean_is_exclusive(v___x_6067_);
if (v_isSharedCheck_6114_ == 0)
{
lean_object* v_unused_6115_; 
v_unused_6115_ = lean_ctor_get(v___x_6067_, 1);
lean_dec(v_unused_6115_);
v___x_6073_ = v___x_6067_;
v_isShared_6074_ = v_isSharedCheck_6114_;
goto v_resetjp_6072_;
}
else
{
lean_inc(v_fst_6071_);
lean_dec(v___x_6067_);
v___x_6073_ = lean_box(0);
v_isShared_6074_ = v_isSharedCheck_6114_;
goto v_resetjp_6072_;
}
v_resetjp_6072_:
{
lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; lean_object* v___x_6078_; lean_object* v___x_6080_; 
v___x_6075_ = lean_array_get_size(v_fst_6071_);
v___x_6076_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_6077_ = l_Array_toSubarray___redArg(v_fst_6071_, v___x_6038_, v___x_6075_);
v___x_6078_ = l_Array_toSubarray___redArg(v_xs_6036_, v___x_6038_, v___x_6039_);
if (v_isShared_6074_ == 0)
{
lean_ctor_set(v___x_6073_, 1, v___x_6078_);
lean_ctor_set(v___x_6073_, 0, v___x_6077_);
v___x_6080_ = v___x_6073_;
goto v_reusejp_6079_;
}
else
{
lean_object* v_reuseFailAlloc_6113_; 
v_reuseFailAlloc_6113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6113_, 0, v___x_6077_);
lean_ctor_set(v_reuseFailAlloc_6113_, 1, v___x_6078_);
v___x_6080_ = v_reuseFailAlloc_6113_;
goto v_reusejp_6079_;
}
v_reusejp_6079_:
{
lean_object* v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; lean_object* v_snd_6085_; lean_object* v_snd_6086_; lean_object* v_fst_6087_; lean_object* v_fst_6088_; lean_object* v___x_6090_; uint8_t v_isShared_6091_; uint8_t v_isSharedCheck_6111_; 
v___x_6081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6081_, 0, v___x_6076_);
lean_ctor_set(v___x_6081_, 1, v___x_6080_);
v___x_6082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6082_, 0, v___x_6076_);
lean_ctor_set(v___x_6082_, 1, v___x_6081_);
v___x_6083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6083_, 0, v___x_6076_);
lean_ctor_set(v___x_6083_, 1, v___x_6082_);
v___x_6084_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v___x_6075_, v___x_6038_, v___x_6083_);
v_snd_6085_ = lean_ctor_get(v___x_6084_, 1);
lean_inc(v_snd_6085_);
v_snd_6086_ = lean_ctor_get(v_snd_6085_, 1);
lean_inc(v_snd_6086_);
v_fst_6087_ = lean_ctor_get(v___x_6084_, 0);
lean_inc(v_fst_6087_);
lean_dec_ref(v___x_6084_);
v_fst_6088_ = lean_ctor_get(v_snd_6085_, 0);
v_isSharedCheck_6111_ = !lean_is_exclusive(v_snd_6085_);
if (v_isSharedCheck_6111_ == 0)
{
lean_object* v_unused_6112_; 
v_unused_6112_ = lean_ctor_get(v_snd_6085_, 1);
lean_dec(v_unused_6112_);
v___x_6090_ = v_snd_6085_;
v_isShared_6091_ = v_isSharedCheck_6111_;
goto v_resetjp_6089_;
}
else
{
lean_inc(v_fst_6088_);
lean_dec(v_snd_6085_);
v___x_6090_ = lean_box(0);
v_isShared_6091_ = v_isSharedCheck_6111_;
goto v_resetjp_6089_;
}
v_resetjp_6089_:
{
lean_object* v_fst_6092_; lean_object* v___x_6094_; uint8_t v_isShared_6095_; uint8_t v_isSharedCheck_6109_; 
v_fst_6092_ = lean_ctor_get(v_snd_6086_, 0);
v_isSharedCheck_6109_ = !lean_is_exclusive(v_snd_6086_);
if (v_isSharedCheck_6109_ == 0)
{
lean_object* v_unused_6110_; 
v_unused_6110_ = lean_ctor_get(v_snd_6086_, 1);
lean_dec(v_unused_6110_);
v___x_6094_ = v_snd_6086_;
v_isShared_6095_ = v_isSharedCheck_6109_;
goto v_resetjp_6093_;
}
else
{
lean_inc(v_fst_6092_);
lean_dec(v_snd_6086_);
v___x_6094_ = lean_box(0);
v_isShared_6095_ = v_isSharedCheck_6109_;
goto v_resetjp_6093_;
}
v_resetjp_6093_:
{
lean_object* v___x_6096_; size_t v_sz_6097_; size_t v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6101_; 
v___x_6096_ = lean_array_get_size(v_fst_6092_);
v_sz_6097_ = lean_array_size(v_perms_6042_);
v___x_6098_ = ((size_t)0ULL);
v___x_6099_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v_fst_6087_, v_sz_6097_, v___x_6098_, v_perms_6042_);
lean_dec(v_fst_6087_);
if (v_isShared_6070_ == 0)
{
lean_ctor_set(v___x_6069_, 1, v___x_6099_);
lean_ctor_set(v___x_6069_, 0, v___x_6096_);
v___x_6101_ = v___x_6069_;
goto v_reusejp_6100_;
}
else
{
lean_object* v_reuseFailAlloc_6108_; 
v_reuseFailAlloc_6108_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6108_, 0, v___x_6096_);
lean_ctor_set(v_reuseFailAlloc_6108_, 1, v___x_6099_);
lean_ctor_set(v_reuseFailAlloc_6108_, 2, v_revDeps_6043_);
v___x_6101_ = v_reuseFailAlloc_6108_;
goto v_reusejp_6100_;
}
v_reusejp_6100_:
{
lean_object* v___x_6103_; 
if (v_isShared_6095_ == 0)
{
lean_ctor_set(v___x_6094_, 1, v_fst_6088_);
v___x_6103_ = v___x_6094_;
goto v_reusejp_6102_;
}
else
{
lean_object* v_reuseFailAlloc_6107_; 
v_reuseFailAlloc_6107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6107_, 0, v_fst_6092_);
lean_ctor_set(v_reuseFailAlloc_6107_, 1, v_fst_6088_);
v___x_6103_ = v_reuseFailAlloc_6107_;
goto v_reusejp_6102_;
}
v_reusejp_6102_:
{
lean_object* v___x_6105_; 
if (v_isShared_6091_ == 0)
{
lean_ctor_set(v___x_6090_, 1, v___x_6103_);
lean_ctor_set(v___x_6090_, 0, v___x_6101_);
v___x_6105_ = v___x_6090_;
goto v_reusejp_6104_;
}
else
{
lean_object* v_reuseFailAlloc_6106_; 
v_reuseFailAlloc_6106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6106_, 0, v___x_6101_);
lean_ctor_set(v_reuseFailAlloc_6106_, 1, v___x_6103_);
v___x_6105_ = v_reuseFailAlloc_6106_;
goto v_reusejp_6104_;
}
v_reusejp_6104_:
{
return v___x_6105_;
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object* v_upperBound_6129_, lean_object* v___x_6130_, lean_object* v_fixedParamPerms_6131_, lean_object* v_next_6132_, lean_object* v___x_6133_, lean_object* v___x_6134_, lean_object* v_inst_6135_, lean_object* v_R_6136_, lean_object* v_a_6137_, lean_object* v_b_6138_, lean_object* v_c_6139_){
_start:
{
lean_object* v___x_6140_; 
v___x_6140_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_6129_, v___x_6130_, v_fixedParamPerms_6131_, v_next_6132_, v___x_6133_, v___x_6134_, v_a_6137_, v_b_6138_);
return v___x_6140_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object* v_upperBound_6141_, lean_object* v___x_6142_, lean_object* v_fixedParamPerms_6143_, lean_object* v_next_6144_, lean_object* v___x_6145_, lean_object* v___x_6146_, lean_object* v_inst_6147_, lean_object* v_R_6148_, lean_object* v_a_6149_, lean_object* v_b_6150_, lean_object* v_c_6151_){
_start:
{
lean_object* v_res_6152_; 
v_res_6152_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(v_upperBound_6141_, v___x_6142_, v_fixedParamPerms_6143_, v_next_6144_, v___x_6145_, v___x_6146_, v_inst_6147_, v_R_6148_, v_a_6149_, v_b_6150_, v_c_6151_);
lean_dec(v___x_6146_);
lean_dec(v___x_6145_);
lean_dec(v_next_6144_);
lean_dec_ref(v_fixedParamPerms_6143_);
lean_dec_ref(v___x_6142_);
lean_dec(v_upperBound_6141_);
return v_res_6152_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object* v_upperBound_6153_, lean_object* v___x_6154_, lean_object* v___x_6155_, lean_object* v___x_6156_, lean_object* v_fixedParamPerms_6157_, lean_object* v_inst_6158_, lean_object* v_R_6159_, lean_object* v_a_6160_, lean_object* v_b_6161_, lean_object* v_c_6162_){
_start:
{
lean_object* v___x_6163_; 
v___x_6163_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_6153_, v___x_6154_, v___x_6155_, v___x_6156_, v_fixedParamPerms_6157_, v_a_6160_, v_b_6161_);
return v___x_6163_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object* v_upperBound_6164_, lean_object* v___x_6165_, lean_object* v___x_6166_, lean_object* v___x_6167_, lean_object* v_fixedParamPerms_6168_, lean_object* v_inst_6169_, lean_object* v_R_6170_, lean_object* v_a_6171_, lean_object* v_b_6172_, lean_object* v_c_6173_){
_start:
{
lean_object* v_res_6174_; 
v_res_6174_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(v_upperBound_6164_, v___x_6165_, v___x_6166_, v___x_6167_, v_fixedParamPerms_6168_, v_inst_6169_, v_R_6170_, v_a_6171_, v_b_6172_, v_c_6173_);
lean_dec(v_a_6171_);
lean_dec_ref(v_fixedParamPerms_6168_);
lean_dec(v___x_6167_);
lean_dec(v___x_6166_);
lean_dec_ref(v___x_6165_);
lean_dec(v_upperBound_6164_);
return v_res_6174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object* v___x_6175_, lean_object* v___x_6176_, lean_object* v___x_6177_, lean_object* v_fixedParamPerms_6178_, lean_object* v_inst_6179_, lean_object* v_a_6180_){
_start:
{
lean_object* v___x_6181_; 
v___x_6181_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_6175_, v___x_6176_, v___x_6177_, v_fixedParamPerms_6178_, v_a_6180_);
return v___x_6181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object* v___x_6182_, lean_object* v___x_6183_, lean_object* v___x_6184_, lean_object* v_fixedParamPerms_6185_, lean_object* v_inst_6186_, lean_object* v_a_6187_){
_start:
{
lean_object* v_res_6188_; 
v_res_6188_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(v___x_6182_, v___x_6183_, v___x_6184_, v_fixedParamPerms_6185_, v_inst_6186_, v_a_6187_);
lean_dec_ref(v_fixedParamPerms_6185_);
lean_dec(v___x_6184_);
lean_dec_ref(v___x_6183_);
lean_dec(v___x_6182_);
return v_res_6188_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object* v_upperBound_6189_, lean_object* v_inst_6190_, lean_object* v_R_6191_, lean_object* v_a_6192_, lean_object* v_b_6193_, lean_object* v_c_6194_){
_start:
{
lean_object* v___x_6195_; 
v___x_6195_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_6189_, v_a_6192_, v_b_6193_);
return v___x_6195_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object* v_upperBound_6196_, lean_object* v_inst_6197_, lean_object* v_R_6198_, lean_object* v_a_6199_, lean_object* v_b_6200_, lean_object* v_c_6201_){
_start:
{
lean_object* v_res_6202_; 
v_res_6202_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(v_upperBound_6196_, v_inst_6197_, v_R_6198_, v_a_6199_, v_b_6200_, v_c_6201_);
lean_dec(v_upperBound_6196_);
return v_res_6202_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object* v_upperBound_6203_, lean_object* v___x_6204_, lean_object* v___x_6205_, lean_object* v_inst_6206_, lean_object* v_R_6207_, lean_object* v_a_6208_, lean_object* v_b_6209_, lean_object* v_c_6210_){
_start:
{
lean_object* v___x_6211_; 
v___x_6211_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_6203_, v___x_6204_, v___x_6205_, v_a_6208_, v_b_6209_);
return v___x_6211_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object* v_upperBound_6212_, lean_object* v___x_6213_, lean_object* v___x_6214_, lean_object* v_inst_6215_, lean_object* v_R_6216_, lean_object* v_a_6217_, lean_object* v_b_6218_, lean_object* v_c_6219_){
_start:
{
lean_object* v_res_6220_; 
v_res_6220_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(v_upperBound_6212_, v___x_6213_, v___x_6214_, v_inst_6215_, v_R_6216_, v_a_6217_, v_b_6218_, v_c_6219_);
lean_dec(v___x_6214_);
lean_dec(v___x_6213_);
lean_dec(v_upperBound_6212_);
return v_res_6220_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7(lean_object* v_upperBound_6221_, lean_object* v___x_6222_, lean_object* v_fixedParamPerms_6223_, lean_object* v___x_6224_, lean_object* v___x_6225_, lean_object* v_inst_6226_, lean_object* v_R_6227_, lean_object* v_a_6228_, lean_object* v_b_6229_, lean_object* v_c_6230_){
_start:
{
lean_object* v___x_6231_; 
v___x_6231_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___redArg(v_upperBound_6221_, v___x_6222_, v_fixedParamPerms_6223_, v___x_6224_, v___x_6225_, v_a_6228_, v_b_6229_);
return v___x_6231_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7___boxed(lean_object* v_upperBound_6232_, lean_object* v___x_6233_, lean_object* v_fixedParamPerms_6234_, lean_object* v___x_6235_, lean_object* v___x_6236_, lean_object* v_inst_6237_, lean_object* v_R_6238_, lean_object* v_a_6239_, lean_object* v_b_6240_, lean_object* v_c_6241_){
_start:
{
lean_object* v_res_6242_; 
v_res_6242_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7_spec__7(v_upperBound_6232_, v___x_6233_, v_fixedParamPerms_6234_, v___x_6235_, v___x_6236_, v_inst_6237_, v_R_6238_, v_a_6239_, v_b_6240_, v_c_6241_);
lean_dec(v___x_6236_);
lean_dec(v___x_6235_);
lean_dec_ref(v_fixedParamPerms_6234_);
lean_dec_ref(v___x_6233_);
lean_dec(v_upperBound_6232_);
return v_res_6242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6300_; uint8_t v___x_6301_; lean_object* v___x_6302_; lean_object* v___x_6303_; 
v___x_6300_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_6301_ = 0;
v___x_6302_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6303_ = l_Lean_registerTraceClass(v___x_6300_, v___x_6301_, v___x_6302_);
return v___x_6303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2____boxed(lean_object* v_a_6304_){
_start:
{
lean_object* v_res_6305_; 
v_res_6305_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
return v_res_6305_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
}
#ifdef __cplusplus
}
#endif
