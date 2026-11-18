// Lean compiler output
// Module: Lean.Meta.Closure
// Imports: public import Lean.Meta.Check public import Lean.Meta.Tactic.AuxLemma import Lean.Util.ForEachExpr
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_get_x21(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint8_t l_Lean_Expr_hasLevelParam(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
uint8_t l_Lean_Level_hasParam(lean_object*);
lean_object* l_Lean_mkLevelMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelMax_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelIMax_x27(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
uint8_t l_ptrEqList___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getValue_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getZetaDeltaFVarIds___redArg(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_replaceFVarId(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxLemma(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Nat_foldRev___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Level_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Level_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
uint32_t l_Lean_getMaxHeight(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
static const lean_ctor_object l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement_default = (const lean_object*)&l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement = (const lean_object*)&l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_value;
static const lean_closure_object l_Lean_Meta_Closure_visitLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitLevel___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_visitLevel___closed__0_value;
static const lean_closure_object l_Lean_Meta_Closure_visitLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitLevel___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_visitLevel___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Closure_visitExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitExpr___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_visitExpr___closed__0_value;
static const lean_closure_object l_Lean_Meta_Closure_visitExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitExpr___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_visitExpr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 178, 247, 241, 102, 42, 87, 174)}};
static const lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_collectLevelAux_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcessAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LocalDecl_toExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__0_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__1_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__2 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__2_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__3 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__3_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__4 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__4_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__5 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__5_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__6 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__6_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__7 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkBinding___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__1_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__2_value)}};
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__8 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkBinding___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__8_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__3_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__4_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__5_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__6_value)}};
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__9 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkBinding___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__9_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__7_value)}};
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__10 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "assertion violation: !decl.isLet (allowNondep := true) -- should all be cdecls\n    "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "_private.Lean.Meta.Closure.0.Lean.Meta.Closure.sortDecls.visit"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Meta.Closure"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "cycle detected in sorting abstracted variables"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Closure"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value),LEAN_SCALAR_PTR_LITERAL(248, 96, 54, 247, 94, 45, 114, 27)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Sorting decl "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "_private.Lean.Meta.Closure.0.Lean.Meta.Closure.sortDecls"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "assertion violation: sortedDecls.size = sortedArgs.size\n  "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "assertion violation: toSortDecls.size = toSortArgs.size\n  "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Sorted fvars: "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "MVars to abstract, topologically sorting the abstracted variables"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__1;
static const lean_array_object l_Lean_Meta_Closure_mkValueTypeClosure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__2 = (const lean_object*)&l_Lean_Meta_Closure_mkValueTypeClosure___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__3;
static const lean_string_object l_Lean_Meta_Closure_mkValueTypeClosure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.Closure.mkValueTypeClosure"};
static const lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__4 = (const lean_object*)&l_Lean_Meta_Closure_mkValueTypeClosure___closed__4_value;
static const lean_string_object l_Lean_Meta_Closure_mkValueTypeClosure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 124, .m_capacity = 124, .m_length = 123, .m_data = "assertion violation: !value.hasFVar  -- In case https://github.com/leanprover/lean4/issues/10705 resurfaces in a new way\n  "};
static const lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__5 = (const lean_object*)&l_Lean_Meta_Closure_mkValueTypeClosure___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value),LEAN_SCALAR_PTR_LITERAL(249, 97, 222, 101, 51, 127, 178, 83)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(220, 178, 96, 6, 241, 231, 113, 20)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 127, 178, 186, 28, 24, 102, 169)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(21, 173, 206, 0, 127, 57, 105, 236)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(60, 19, 238, 0, 111, 115, 19, 38)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(53, 126, 95, 11, 82, 59, 71, 144)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 8, 231, 231, 52, 89, 133, 183)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(12, 6, 147, 100, 167, 240, 247, 134)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value),LEAN_SCALAR_PTR_LITERAL(211, 133, 26, 59, 130, 208, 63, 13)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)(((size_t)(210311863) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 50, 125, 89, 33, 200, 89, 48)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 43, 172, 82, 181, 165, 145, 47)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 121, 24, 171, 140, 146, 97, 79)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(122, 57, 62, 99, 250, 159, 110, 171)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel(lean_object* v_f_7_, lean_object* v_u_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; uint8_t v___x_61_; 
v___x_16_ = ((lean_object*)(l_Lean_Meta_Closure_visitLevel___closed__0));
v___x_17_ = ((lean_object*)(l_Lean_Meta_Closure_visitLevel___closed__1));
v___x_61_ = l_Lean_Level_hasMVar(v_u_8_);
if (v___x_61_ == 0)
{
uint8_t v___x_62_; 
v___x_62_ = l_Lean_Level_hasParam(v_u_8_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; 
lean_dec_ref(v_f_7_);
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v_u_8_);
return v___x_63_;
}
else
{
goto v___jp_18_;
}
}
else
{
goto v___jp_18_;
}
v___jp_18_:
{
lean_object* v___x_19_; lean_object* v_visitedLevel_20_; lean_object* v___x_21_; 
v___x_19_ = lean_st_ref_get(v_a_10_);
v_visitedLevel_20_ = lean_ctor_get(v___x_19_, 0);
lean_inc_ref(v_visitedLevel_20_);
lean_dec(v___x_19_);
lean_inc(v_u_8_);
v___x_21_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_16_, v___x_17_, v_visitedLevel_20_, v_u_8_);
lean_dec_ref(v_visitedLevel_20_);
if (lean_obj_tag(v___x_21_) == 0)
{
lean_object* v___x_22_; 
lean_inc(v_a_14_);
lean_inc_ref(v_a_13_);
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc_ref(v_a_9_);
lean_inc(v_u_8_);
v___x_22_ = lean_apply_8(v_f_7_, v_u_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_, lean_box(0));
if (lean_obj_tag(v___x_22_) == 0)
{
lean_object* v_a_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_52_; 
v_a_23_ = lean_ctor_get(v___x_22_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_22_);
if (v_isSharedCheck_52_ == 0)
{
v___x_25_ = v___x_22_;
v_isShared_26_ = v_isSharedCheck_52_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_a_23_);
lean_dec(v___x_22_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_52_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v___x_27_; lean_object* v_visitedLevel_28_; lean_object* v_visitedExpr_29_; lean_object* v_levelParams_30_; lean_object* v_nextLevelIdx_31_; lean_object* v_levelArgs_32_; lean_object* v_newLocalDecls_33_; lean_object* v_newLocalDeclsForMVars_34_; lean_object* v_newLetDecls_35_; lean_object* v_nextExprIdx_36_; lean_object* v_exprMVarArgs_37_; lean_object* v_exprFVarArgs_38_; lean_object* v_toProcess_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_51_; 
v___x_27_ = lean_st_ref_take(v_a_10_);
v_visitedLevel_28_ = lean_ctor_get(v___x_27_, 0);
v_visitedExpr_29_ = lean_ctor_get(v___x_27_, 1);
v_levelParams_30_ = lean_ctor_get(v___x_27_, 2);
v_nextLevelIdx_31_ = lean_ctor_get(v___x_27_, 3);
v_levelArgs_32_ = lean_ctor_get(v___x_27_, 4);
v_newLocalDecls_33_ = lean_ctor_get(v___x_27_, 5);
v_newLocalDeclsForMVars_34_ = lean_ctor_get(v___x_27_, 6);
v_newLetDecls_35_ = lean_ctor_get(v___x_27_, 7);
v_nextExprIdx_36_ = lean_ctor_get(v___x_27_, 8);
v_exprMVarArgs_37_ = lean_ctor_get(v___x_27_, 9);
v_exprFVarArgs_38_ = lean_ctor_get(v___x_27_, 10);
v_toProcess_39_ = lean_ctor_get(v___x_27_, 11);
v_isSharedCheck_51_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_51_ == 0)
{
v___x_41_ = v___x_27_;
v_isShared_42_ = v_isSharedCheck_51_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_toProcess_39_);
lean_inc(v_exprFVarArgs_38_);
lean_inc(v_exprMVarArgs_37_);
lean_inc(v_nextExprIdx_36_);
lean_inc(v_newLetDecls_35_);
lean_inc(v_newLocalDeclsForMVars_34_);
lean_inc(v_newLocalDecls_33_);
lean_inc(v_levelArgs_32_);
lean_inc(v_nextLevelIdx_31_);
lean_inc(v_levelParams_30_);
lean_inc(v_visitedExpr_29_);
lean_inc(v_visitedLevel_28_);
lean_dec(v___x_27_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_51_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_43_; lean_object* v___x_45_; 
lean_inc(v_a_23_);
v___x_43_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_16_, v___x_17_, v_visitedLevel_28_, v_u_8_, v_a_23_);
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 0, v___x_43_);
v___x_45_ = v___x_41_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v___x_43_);
lean_ctor_set(v_reuseFailAlloc_50_, 1, v_visitedExpr_29_);
lean_ctor_set(v_reuseFailAlloc_50_, 2, v_levelParams_30_);
lean_ctor_set(v_reuseFailAlloc_50_, 3, v_nextLevelIdx_31_);
lean_ctor_set(v_reuseFailAlloc_50_, 4, v_levelArgs_32_);
lean_ctor_set(v_reuseFailAlloc_50_, 5, v_newLocalDecls_33_);
lean_ctor_set(v_reuseFailAlloc_50_, 6, v_newLocalDeclsForMVars_34_);
lean_ctor_set(v_reuseFailAlloc_50_, 7, v_newLetDecls_35_);
lean_ctor_set(v_reuseFailAlloc_50_, 8, v_nextExprIdx_36_);
lean_ctor_set(v_reuseFailAlloc_50_, 9, v_exprMVarArgs_37_);
lean_ctor_set(v_reuseFailAlloc_50_, 10, v_exprFVarArgs_38_);
lean_ctor_set(v_reuseFailAlloc_50_, 11, v_toProcess_39_);
v___x_45_ = v_reuseFailAlloc_50_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_46_ = lean_st_ref_put(v_a_10_, v___x_45_);
if (v_isShared_26_ == 0)
{
v___x_48_ = v___x_25_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_a_23_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
}
}
else
{
lean_dec(v_u_8_);
return v___x_22_;
}
}
else
{
lean_object* v_val_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_60_; 
lean_dec(v_u_8_);
lean_dec_ref(v_f_7_);
v_val_53_ = lean_ctor_get(v___x_21_, 0);
v_isSharedCheck_60_ = !lean_is_exclusive(v___x_21_);
if (v_isSharedCheck_60_ == 0)
{
v___x_55_ = v___x_21_;
v_isShared_56_ = v_isSharedCheck_60_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_val_53_);
lean_dec(v___x_21_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_60_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_58_; 
if (v_isShared_56_ == 0)
{
lean_ctor_set_tag(v___x_55_, 0);
v___x_58_ = v___x_55_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_59_; 
v_reuseFailAlloc_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_59_, 0, v_val_53_);
v___x_58_ = v_reuseFailAlloc_59_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
return v___x_58_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel___boxed(lean_object* v_f_64_, lean_object* v_u_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_Meta_Closure_visitLevel(v_f_64_, v_u_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_);
lean_dec(v_a_71_);
lean_dec_ref(v_a_70_);
lean_dec(v_a_69_);
lean_dec_ref(v_a_68_);
lean_dec(v_a_67_);
lean_dec_ref(v_a_66_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr(lean_object* v_f_76_, lean_object* v_e_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_130_; 
v___x_85_ = ((lean_object*)(l_Lean_Meta_Closure_visitExpr___closed__0));
v___x_86_ = ((lean_object*)(l_Lean_Meta_Closure_visitExpr___closed__1));
v___x_130_ = l_Lean_Expr_hasLevelParam(v_e_77_);
if (v___x_130_ == 0)
{
uint8_t v___x_131_; 
v___x_131_ = l_Lean_Expr_hasFVar(v_e_77_);
if (v___x_131_ == 0)
{
uint8_t v___x_132_; 
v___x_132_ = l_Lean_Expr_hasMVar(v_e_77_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; 
lean_dec_ref(v_f_76_);
v___x_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_133_, 0, v_e_77_);
return v___x_133_;
}
else
{
goto v___jp_87_;
}
}
else
{
goto v___jp_87_;
}
}
else
{
goto v___jp_87_;
}
v___jp_87_:
{
lean_object* v___x_88_; lean_object* v_visitedExpr_89_; lean_object* v___x_90_; 
v___x_88_ = lean_st_ref_get(v_a_79_);
v_visitedExpr_89_ = lean_ctor_get(v___x_88_, 1);
lean_inc_ref(v_visitedExpr_89_);
lean_dec(v___x_88_);
lean_inc_ref(v_e_77_);
v___x_90_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_85_, v___x_86_, v_visitedExpr_89_, v_e_77_);
lean_dec_ref(v_visitedExpr_89_);
if (lean_obj_tag(v___x_90_) == 0)
{
lean_object* v___x_91_; 
lean_inc(v_a_83_);
lean_inc_ref(v_a_82_);
lean_inc(v_a_81_);
lean_inc_ref(v_a_80_);
lean_inc(v_a_79_);
lean_inc_ref(v_a_78_);
lean_inc_ref(v_e_77_);
v___x_91_ = lean_apply_8(v_f_76_, v_e_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, lean_box(0));
if (lean_obj_tag(v___x_91_) == 0)
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_121_; 
v_a_92_ = lean_ctor_get(v___x_91_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_121_ == 0)
{
v___x_94_ = v___x_91_;
v_isShared_95_ = v_isSharedCheck_121_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_91_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_121_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_96_; lean_object* v_visitedLevel_97_; lean_object* v_visitedExpr_98_; lean_object* v_levelParams_99_; lean_object* v_nextLevelIdx_100_; lean_object* v_levelArgs_101_; lean_object* v_newLocalDecls_102_; lean_object* v_newLocalDeclsForMVars_103_; lean_object* v_newLetDecls_104_; lean_object* v_nextExprIdx_105_; lean_object* v_exprMVarArgs_106_; lean_object* v_exprFVarArgs_107_; lean_object* v_toProcess_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_120_; 
v___x_96_ = lean_st_ref_take(v_a_79_);
v_visitedLevel_97_ = lean_ctor_get(v___x_96_, 0);
v_visitedExpr_98_ = lean_ctor_get(v___x_96_, 1);
v_levelParams_99_ = lean_ctor_get(v___x_96_, 2);
v_nextLevelIdx_100_ = lean_ctor_get(v___x_96_, 3);
v_levelArgs_101_ = lean_ctor_get(v___x_96_, 4);
v_newLocalDecls_102_ = lean_ctor_get(v___x_96_, 5);
v_newLocalDeclsForMVars_103_ = lean_ctor_get(v___x_96_, 6);
v_newLetDecls_104_ = lean_ctor_get(v___x_96_, 7);
v_nextExprIdx_105_ = lean_ctor_get(v___x_96_, 8);
v_exprMVarArgs_106_ = lean_ctor_get(v___x_96_, 9);
v_exprFVarArgs_107_ = lean_ctor_get(v___x_96_, 10);
v_toProcess_108_ = lean_ctor_get(v___x_96_, 11);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_120_ == 0)
{
v___x_110_ = v___x_96_;
v_isShared_111_ = v_isSharedCheck_120_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_toProcess_108_);
lean_inc(v_exprFVarArgs_107_);
lean_inc(v_exprMVarArgs_106_);
lean_inc(v_nextExprIdx_105_);
lean_inc(v_newLetDecls_104_);
lean_inc(v_newLocalDeclsForMVars_103_);
lean_inc(v_newLocalDecls_102_);
lean_inc(v_levelArgs_101_);
lean_inc(v_nextLevelIdx_100_);
lean_inc(v_levelParams_99_);
lean_inc(v_visitedExpr_98_);
lean_inc(v_visitedLevel_97_);
lean_dec(v___x_96_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_120_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_112_; lean_object* v___x_114_; 
lean_inc(v_a_92_);
v___x_112_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_85_, v___x_86_, v_visitedExpr_98_, v_e_77_, v_a_92_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 1, v___x_112_);
v___x_114_ = v___x_110_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_visitedLevel_97_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v___x_112_);
lean_ctor_set(v_reuseFailAlloc_119_, 2, v_levelParams_99_);
lean_ctor_set(v_reuseFailAlloc_119_, 3, v_nextLevelIdx_100_);
lean_ctor_set(v_reuseFailAlloc_119_, 4, v_levelArgs_101_);
lean_ctor_set(v_reuseFailAlloc_119_, 5, v_newLocalDecls_102_);
lean_ctor_set(v_reuseFailAlloc_119_, 6, v_newLocalDeclsForMVars_103_);
lean_ctor_set(v_reuseFailAlloc_119_, 7, v_newLetDecls_104_);
lean_ctor_set(v_reuseFailAlloc_119_, 8, v_nextExprIdx_105_);
lean_ctor_set(v_reuseFailAlloc_119_, 9, v_exprMVarArgs_106_);
lean_ctor_set(v_reuseFailAlloc_119_, 10, v_exprFVarArgs_107_);
lean_ctor_set(v_reuseFailAlloc_119_, 11, v_toProcess_108_);
v___x_114_ = v_reuseFailAlloc_119_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v___x_115_; lean_object* v___x_117_; 
v___x_115_ = lean_st_ref_put(v_a_79_, v___x_114_);
if (v_isShared_95_ == 0)
{
v___x_117_ = v___x_94_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_92_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_77_);
return v___x_91_;
}
}
else
{
lean_object* v_val_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
lean_dec_ref(v_e_77_);
lean_dec_ref(v_f_76_);
v_val_122_ = lean_ctor_get(v___x_90_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_90_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_90_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_val_122_);
lean_dec(v___x_90_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
lean_ctor_set_tag(v___x_124_, 0);
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_val_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr___boxed(lean_object* v_f_134_, lean_object* v_e_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Lean_Meta_Closure_visitExpr(v_f_134_, v_e_135_, v_a_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_);
lean_dec(v_a_141_);
lean_dec_ref(v_a_140_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg(lean_object* v_u_147_, lean_object* v_a_148_){
_start:
{
lean_object* v___x_150_; lean_object* v_nextLevelIdx_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v_visitedLevel_155_; lean_object* v_visitedExpr_156_; lean_object* v_levelParams_157_; lean_object* v_nextLevelIdx_158_; lean_object* v_levelArgs_159_; lean_object* v_newLocalDecls_160_; lean_object* v_newLocalDeclsForMVars_161_; lean_object* v_newLetDecls_162_; lean_object* v_nextExprIdx_163_; lean_object* v_exprMVarArgs_164_; lean_object* v_exprFVarArgs_165_; lean_object* v_toProcess_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_180_; 
v___x_150_ = lean_st_ref_get(v_a_148_);
v_nextLevelIdx_151_ = lean_ctor_get(v___x_150_, 3);
lean_inc(v_nextLevelIdx_151_);
lean_dec(v___x_150_);
v___x_152_ = ((lean_object*)(l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1));
v___x_153_ = lean_name_append_index_after(v___x_152_, v_nextLevelIdx_151_);
v___x_154_ = lean_st_ref_take(v_a_148_);
v_visitedLevel_155_ = lean_ctor_get(v___x_154_, 0);
v_visitedExpr_156_ = lean_ctor_get(v___x_154_, 1);
v_levelParams_157_ = lean_ctor_get(v___x_154_, 2);
v_nextLevelIdx_158_ = lean_ctor_get(v___x_154_, 3);
v_levelArgs_159_ = lean_ctor_get(v___x_154_, 4);
v_newLocalDecls_160_ = lean_ctor_get(v___x_154_, 5);
v_newLocalDeclsForMVars_161_ = lean_ctor_get(v___x_154_, 6);
v_newLetDecls_162_ = lean_ctor_get(v___x_154_, 7);
v_nextExprIdx_163_ = lean_ctor_get(v___x_154_, 8);
v_exprMVarArgs_164_ = lean_ctor_get(v___x_154_, 9);
v_exprFVarArgs_165_ = lean_ctor_get(v___x_154_, 10);
v_toProcess_166_ = lean_ctor_get(v___x_154_, 11);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_180_ == 0)
{
v___x_168_ = v___x_154_;
v_isShared_169_ = v_isSharedCheck_180_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_toProcess_166_);
lean_inc(v_exprFVarArgs_165_);
lean_inc(v_exprMVarArgs_164_);
lean_inc(v_nextExprIdx_163_);
lean_inc(v_newLetDecls_162_);
lean_inc(v_newLocalDeclsForMVars_161_);
lean_inc(v_newLocalDecls_160_);
lean_inc(v_levelArgs_159_);
lean_inc(v_nextLevelIdx_158_);
lean_inc(v_levelParams_157_);
lean_inc(v_visitedExpr_156_);
lean_inc(v_visitedLevel_155_);
lean_dec(v___x_154_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_180_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_175_; 
lean_inc(v___x_153_);
v___x_170_ = lean_array_push(v_levelParams_157_, v___x_153_);
v___x_171_ = lean_unsigned_to_nat(1u);
v___x_172_ = lean_nat_add(v_nextLevelIdx_158_, v___x_171_);
lean_dec(v_nextLevelIdx_158_);
v___x_173_ = lean_array_push(v_levelArgs_159_, v_u_147_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 4, v___x_173_);
lean_ctor_set(v___x_168_, 3, v___x_172_);
lean_ctor_set(v___x_168_, 2, v___x_170_);
v___x_175_ = v___x_168_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_visitedLevel_155_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v_visitedExpr_156_);
lean_ctor_set(v_reuseFailAlloc_179_, 2, v___x_170_);
lean_ctor_set(v_reuseFailAlloc_179_, 3, v___x_172_);
lean_ctor_set(v_reuseFailAlloc_179_, 4, v___x_173_);
lean_ctor_set(v_reuseFailAlloc_179_, 5, v_newLocalDecls_160_);
lean_ctor_set(v_reuseFailAlloc_179_, 6, v_newLocalDeclsForMVars_161_);
lean_ctor_set(v_reuseFailAlloc_179_, 7, v_newLetDecls_162_);
lean_ctor_set(v_reuseFailAlloc_179_, 8, v_nextExprIdx_163_);
lean_ctor_set(v_reuseFailAlloc_179_, 9, v_exprMVarArgs_164_);
lean_ctor_set(v_reuseFailAlloc_179_, 10, v_exprFVarArgs_165_);
lean_ctor_set(v_reuseFailAlloc_179_, 11, v_toProcess_166_);
v___x_175_ = v_reuseFailAlloc_179_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_176_ = lean_st_ref_put(v_a_148_, v___x_175_);
v___x_177_ = l_Lean_mkLevelParam(v___x_153_);
v___x_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___boxed(lean_object* v_u_181_, lean_object* v_a_182_, lean_object* v_a_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_u_181_, v_a_182_);
lean_dec(v_a_182_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam(lean_object* v_u_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_u_185_, v_a_187_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___boxed(lean_object* v_u_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lean_Meta_Closure_mkNewLevelParam(v_u_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_, v_a_200_);
lean_dec(v_a_200_);
lean_dec_ref(v_a_199_);
lean_dec(v_a_198_);
lean_dec_ref(v_a_197_);
lean_dec(v_a_196_);
lean_dec_ref(v_a_195_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_collectLevelAux_spec__0(lean_object* v_msg_203_){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = lean_box(0);
v___x_205_ = lean_panic_fn_borrowed(v___x_204_, v_msg_203_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(lean_object* v_a_206_, lean_object* v_x_207_){
_start:
{
if (lean_obj_tag(v_x_207_) == 0)
{
lean_object* v___x_208_; 
v___x_208_ = lean_box(0);
return v___x_208_;
}
else
{
lean_object* v_key_209_; lean_object* v_value_210_; lean_object* v_tail_211_; uint8_t v___x_212_; 
v_key_209_ = lean_ctor_get(v_x_207_, 0);
v_value_210_ = lean_ctor_get(v_x_207_, 1);
v_tail_211_ = lean_ctor_get(v_x_207_, 2);
v___x_212_ = lean_level_eq(v_key_209_, v_a_206_);
if (v___x_212_ == 0)
{
v_x_207_ = v_tail_211_;
goto _start;
}
else
{
lean_object* v___x_214_; 
lean_inc(v_value_210_);
v___x_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_214_, 0, v_value_210_);
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg___boxed(lean_object* v_a_215_, lean_object* v_x_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_215_, v_x_216_);
lean_dec(v_x_216_);
lean_dec(v_a_215_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(lean_object* v_m_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_buckets_220_; lean_object* v___x_221_; uint64_t v___x_222_; uint64_t v___x_223_; uint64_t v___x_224_; uint64_t v_fold_225_; uint64_t v___x_226_; uint64_t v___x_227_; uint64_t v___x_228_; size_t v___x_229_; size_t v___x_230_; size_t v___x_231_; size_t v___x_232_; size_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v_buckets_220_ = lean_ctor_get(v_m_218_, 1);
v___x_221_ = lean_array_get_size(v_buckets_220_);
v___x_222_ = l_Lean_Level_hash(v_a_219_);
v___x_223_ = 32ULL;
v___x_224_ = lean_uint64_shift_right(v___x_222_, v___x_223_);
v_fold_225_ = lean_uint64_xor(v___x_222_, v___x_224_);
v___x_226_ = 16ULL;
v___x_227_ = lean_uint64_shift_right(v_fold_225_, v___x_226_);
v___x_228_ = lean_uint64_xor(v_fold_225_, v___x_227_);
v___x_229_ = lean_uint64_to_usize(v___x_228_);
v___x_230_ = lean_usize_of_nat(v___x_221_);
v___x_231_ = ((size_t)1ULL);
v___x_232_ = lean_usize_sub(v___x_230_, v___x_231_);
v___x_233_ = lean_usize_land(v___x_229_, v___x_232_);
v___x_234_ = lean_array_uget_borrowed(v_buckets_220_, v___x_233_);
v___x_235_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_219_, v___x_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg___boxed(lean_object* v_m_236_, lean_object* v_a_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_m_236_, v_a_237_);
lean_dec(v_a_237_);
lean_dec_ref(v_m_236_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_x_239_, lean_object* v_x_240_){
_start:
{
if (lean_obj_tag(v_x_240_) == 0)
{
return v_x_239_;
}
else
{
lean_object* v_key_241_; lean_object* v_value_242_; lean_object* v_tail_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_266_; 
v_key_241_ = lean_ctor_get(v_x_240_, 0);
v_value_242_ = lean_ctor_get(v_x_240_, 1);
v_tail_243_ = lean_ctor_get(v_x_240_, 2);
v_isSharedCheck_266_ = !lean_is_exclusive(v_x_240_);
if (v_isSharedCheck_266_ == 0)
{
v___x_245_ = v_x_240_;
v_isShared_246_ = v_isSharedCheck_266_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_tail_243_);
lean_inc(v_value_242_);
lean_inc(v_key_241_);
lean_dec(v_x_240_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_266_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; uint64_t v___x_248_; uint64_t v___x_249_; uint64_t v___x_250_; uint64_t v_fold_251_; uint64_t v___x_252_; uint64_t v___x_253_; uint64_t v___x_254_; size_t v___x_255_; size_t v___x_256_; size_t v___x_257_; size_t v___x_258_; size_t v___x_259_; lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_247_ = lean_array_get_size(v_x_239_);
v___x_248_ = l_Lean_Level_hash(v_key_241_);
v___x_249_ = 32ULL;
v___x_250_ = lean_uint64_shift_right(v___x_248_, v___x_249_);
v_fold_251_ = lean_uint64_xor(v___x_248_, v___x_250_);
v___x_252_ = 16ULL;
v___x_253_ = lean_uint64_shift_right(v_fold_251_, v___x_252_);
v___x_254_ = lean_uint64_xor(v_fold_251_, v___x_253_);
v___x_255_ = lean_uint64_to_usize(v___x_254_);
v___x_256_ = lean_usize_of_nat(v___x_247_);
v___x_257_ = ((size_t)1ULL);
v___x_258_ = lean_usize_sub(v___x_256_, v___x_257_);
v___x_259_ = lean_usize_land(v___x_255_, v___x_258_);
v___x_260_ = lean_array_uget_borrowed(v_x_239_, v___x_259_);
lean_inc(v___x_260_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 2, v___x_260_);
v___x_262_ = v___x_245_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_key_241_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_value_242_);
lean_ctor_set(v_reuseFailAlloc_265_, 2, v___x_260_);
v___x_262_ = v_reuseFailAlloc_265_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
lean_object* v___x_263_; 
v___x_263_ = lean_array_uset(v_x_239_, v___x_259_, v___x_262_);
v_x_239_ = v___x_263_;
v_x_240_ = v_tail_243_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(lean_object* v_i_267_, lean_object* v_source_268_, lean_object* v_target_269_){
_start:
{
lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_270_ = lean_array_get_size(v_source_268_);
v___x_271_ = lean_nat_dec_lt(v_i_267_, v___x_270_);
if (v___x_271_ == 0)
{
lean_dec_ref(v_source_268_);
lean_dec(v_i_267_);
return v_target_269_;
}
else
{
lean_object* v_es_272_; lean_object* v___x_273_; lean_object* v_source_274_; lean_object* v_target_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_es_272_ = lean_array_fget(v_source_268_, v_i_267_);
v___x_273_ = lean_box(0);
v_source_274_ = lean_array_fset(v_source_268_, v_i_267_, v___x_273_);
v_target_275_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(v_target_269_, v_es_272_);
v___x_276_ = lean_unsigned_to_nat(1u);
v___x_277_ = lean_nat_add(v_i_267_, v___x_276_);
lean_dec(v_i_267_);
v_i_267_ = v___x_277_;
v_source_268_ = v_source_274_;
v_target_269_ = v_target_275_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(lean_object* v_data_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v_nbuckets_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_280_ = lean_array_get_size(v_data_279_);
v___x_281_ = lean_unsigned_to_nat(2u);
v_nbuckets_282_ = lean_nat_mul(v___x_280_, v___x_281_);
v___x_283_ = lean_unsigned_to_nat(0u);
v___x_284_ = lean_box(0);
v___x_285_ = lean_mk_array(v_nbuckets_282_, v___x_284_);
v___x_286_ = lean_array_propagate_mark(v_data_279_, v___x_285_);
v___x_287_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(v___x_283_, v_data_279_, v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(lean_object* v_a_288_, lean_object* v_x_289_){
_start:
{
if (lean_obj_tag(v_x_289_) == 0)
{
uint8_t v___x_290_; 
v___x_290_ = 0;
return v___x_290_;
}
else
{
lean_object* v_key_291_; lean_object* v_tail_292_; uint8_t v___x_293_; 
v_key_291_ = lean_ctor_get(v_x_289_, 0);
v_tail_292_ = lean_ctor_get(v_x_289_, 2);
v___x_293_ = lean_level_eq(v_key_291_, v_a_288_);
if (v___x_293_ == 0)
{
v_x_289_ = v_tail_292_;
goto _start;
}
else
{
return v___x_293_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg___boxed(lean_object* v_a_295_, lean_object* v_x_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_295_, v_x_296_);
lean_dec(v_x_296_);
lean_dec(v_a_295_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(lean_object* v_a_299_, lean_object* v_b_300_, lean_object* v_x_301_){
_start:
{
if (lean_obj_tag(v_x_301_) == 0)
{
lean_dec(v_b_300_);
lean_dec(v_a_299_);
return v_x_301_;
}
else
{
lean_object* v_key_302_; lean_object* v_value_303_; lean_object* v_tail_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_316_; 
v_key_302_ = lean_ctor_get(v_x_301_, 0);
v_value_303_ = lean_ctor_get(v_x_301_, 1);
v_tail_304_ = lean_ctor_get(v_x_301_, 2);
v_isSharedCheck_316_ = !lean_is_exclusive(v_x_301_);
if (v_isSharedCheck_316_ == 0)
{
v___x_306_ = v_x_301_;
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_tail_304_);
lean_inc(v_value_303_);
lean_inc(v_key_302_);
lean_dec(v_x_301_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
uint8_t v___x_308_; 
v___x_308_ = lean_level_eq(v_key_302_, v_a_299_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; lean_object* v___x_311_; 
v___x_309_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_299_, v_b_300_, v_tail_304_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 2, v___x_309_);
v___x_311_ = v___x_306_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_key_302_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v_value_303_);
lean_ctor_set(v_reuseFailAlloc_312_, 2, v___x_309_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
else
{
lean_object* v___x_314_; 
lean_dec(v_value_303_);
lean_dec(v_key_302_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 1, v_b_300_);
lean_ctor_set(v___x_306_, 0, v_a_299_);
v___x_314_ = v___x_306_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_299_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v_b_300_);
lean_ctor_set(v_reuseFailAlloc_315_, 2, v_tail_304_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(lean_object* v_m_317_, lean_object* v_a_318_, lean_object* v_b_319_){
_start:
{
lean_object* v_size_320_; lean_object* v_buckets_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_364_; 
v_size_320_ = lean_ctor_get(v_m_317_, 0);
v_buckets_321_ = lean_ctor_get(v_m_317_, 1);
v_isSharedCheck_364_ = !lean_is_exclusive(v_m_317_);
if (v_isSharedCheck_364_ == 0)
{
v___x_323_ = v_m_317_;
v_isShared_324_ = v_isSharedCheck_364_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_buckets_321_);
lean_inc(v_size_320_);
lean_dec(v_m_317_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_364_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; uint64_t v___x_326_; uint64_t v___x_327_; uint64_t v___x_328_; uint64_t v_fold_329_; uint64_t v___x_330_; uint64_t v___x_331_; uint64_t v___x_332_; size_t v___x_333_; size_t v___x_334_; size_t v___x_335_; size_t v___x_336_; size_t v___x_337_; lean_object* v_bkt_338_; uint8_t v___x_339_; 
v___x_325_ = lean_array_get_size(v_buckets_321_);
v___x_326_ = l_Lean_Level_hash(v_a_318_);
v___x_327_ = 32ULL;
v___x_328_ = lean_uint64_shift_right(v___x_326_, v___x_327_);
v_fold_329_ = lean_uint64_xor(v___x_326_, v___x_328_);
v___x_330_ = 16ULL;
v___x_331_ = lean_uint64_shift_right(v_fold_329_, v___x_330_);
v___x_332_ = lean_uint64_xor(v_fold_329_, v___x_331_);
v___x_333_ = lean_uint64_to_usize(v___x_332_);
v___x_334_ = lean_usize_of_nat(v___x_325_);
v___x_335_ = ((size_t)1ULL);
v___x_336_ = lean_usize_sub(v___x_334_, v___x_335_);
v___x_337_ = lean_usize_land(v___x_333_, v___x_336_);
v_bkt_338_ = lean_array_uget_borrowed(v_buckets_321_, v___x_337_);
v___x_339_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_318_, v_bkt_338_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; lean_object* v_size_x27_341_; lean_object* v___x_342_; lean_object* v_buckets_x27_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_340_ = lean_unsigned_to_nat(1u);
v_size_x27_341_ = lean_nat_add(v_size_320_, v___x_340_);
lean_dec(v_size_320_);
lean_inc(v_bkt_338_);
v___x_342_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_342_, 0, v_a_318_);
lean_ctor_set(v___x_342_, 1, v_b_319_);
lean_ctor_set(v___x_342_, 2, v_bkt_338_);
v_buckets_x27_343_ = lean_array_uset(v_buckets_321_, v___x_337_, v___x_342_);
v___x_344_ = lean_unsigned_to_nat(4u);
v___x_345_ = lean_nat_mul(v_size_x27_341_, v___x_344_);
v___x_346_ = lean_unsigned_to_nat(3u);
v___x_347_ = lean_nat_div(v___x_345_, v___x_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_array_get_size(v_buckets_x27_343_);
v___x_349_ = lean_nat_dec_le(v___x_347_, v___x_348_);
lean_dec(v___x_347_);
if (v___x_349_ == 0)
{
lean_object* v_val_350_; lean_object* v___x_352_; 
v_val_350_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(v_buckets_x27_343_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v_val_350_);
lean_ctor_set(v___x_323_, 0, v_size_x27_341_);
v___x_352_ = v___x_323_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_size_x27_341_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_val_350_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
else
{
lean_object* v___x_355_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v_buckets_x27_343_);
lean_ctor_set(v___x_323_, 0, v_size_x27_341_);
v___x_355_ = v___x_323_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_size_x27_341_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v_buckets_x27_343_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
else
{
lean_object* v___x_357_; lean_object* v_buckets_x27_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
lean_inc(v_bkt_338_);
v___x_357_ = lean_box(0);
v_buckets_x27_358_ = lean_array_uset(v_buckets_321_, v___x_337_, v___x_357_);
v___x_359_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_318_, v_b_319_, v_bkt_338_);
v___x_360_ = lean_array_uset(v_buckets_x27_358_, v___x_337_, v___x_359_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v___x_360_);
v___x_362_ = v___x_323_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_size_320_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v___x_360_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg(lean_object* v_x_365_, lean_object* v_a_366_){
_start:
{
switch(lean_obj_tag(v_x_365_))
{
case 0:
{
lean_object* v___x_368_; 
v___x_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_368_, 0, v_x_365_);
return v___x_368_;
}
case 1:
{
lean_object* v_a_369_; lean_object* v_a_371_; uint8_t v___x_407_; 
v_a_369_ = lean_ctor_get(v_x_365_, 0);
v___x_407_ = l_Lean_Level_hasMVar(v_a_369_);
if (v___x_407_ == 0)
{
uint8_t v___x_408_; 
v___x_408_ = l_Lean_Level_hasParam(v_a_369_);
if (v___x_408_ == 0)
{
lean_inc(v_a_369_);
v_a_371_ = v_a_369_;
goto v___jp_370_;
}
else
{
goto v___jp_378_;
}
}
else
{
goto v___jp_378_;
}
v___jp_370_:
{
size_t v___x_372_; size_t v___x_373_; uint8_t v___x_374_; 
v___x_372_ = lean_ptr_addr(v_a_369_);
v___x_373_ = lean_ptr_addr(v_a_371_);
v___x_374_ = lean_usize_dec_eq(v___x_372_, v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; lean_object* v___x_376_; 
lean_dec_ref_known(v_x_365_, 1);
v___x_375_ = l_Lean_Level_succ___override(v_a_371_);
v___x_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
return v___x_376_;
}
else
{
lean_object* v___x_377_; 
lean_dec(v_a_371_);
v___x_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_377_, 0, v_x_365_);
return v___x_377_;
}
}
v___jp_378_:
{
lean_object* v___x_379_; lean_object* v_visitedLevel_380_; lean_object* v___x_381_; 
v___x_379_ = lean_st_ref_get(v_a_366_);
v_visitedLevel_380_ = lean_ctor_get(v___x_379_, 0);
lean_inc_ref(v_visitedLevel_380_);
lean_dec(v___x_379_);
v___x_381_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_380_, v_a_369_);
lean_dec_ref(v_visitedLevel_380_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v___x_382_; 
lean_inc(v_a_369_);
v___x_382_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_369_, v_a_366_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v_a_383_; lean_object* v___x_384_; lean_object* v_visitedLevel_385_; lean_object* v_visitedExpr_386_; lean_object* v_levelParams_387_; lean_object* v_nextLevelIdx_388_; lean_object* v_levelArgs_389_; lean_object* v_newLocalDecls_390_; lean_object* v_newLocalDeclsForMVars_391_; lean_object* v_newLetDecls_392_; lean_object* v_nextExprIdx_393_; lean_object* v_exprMVarArgs_394_; lean_object* v_exprFVarArgs_395_; lean_object* v_toProcess_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_405_; 
v_a_383_ = lean_ctor_get(v___x_382_, 0);
lean_inc(v_a_383_);
lean_dec_ref_known(v___x_382_, 1);
v___x_384_ = lean_st_ref_take(v_a_366_);
v_visitedLevel_385_ = lean_ctor_get(v___x_384_, 0);
v_visitedExpr_386_ = lean_ctor_get(v___x_384_, 1);
v_levelParams_387_ = lean_ctor_get(v___x_384_, 2);
v_nextLevelIdx_388_ = lean_ctor_get(v___x_384_, 3);
v_levelArgs_389_ = lean_ctor_get(v___x_384_, 4);
v_newLocalDecls_390_ = lean_ctor_get(v___x_384_, 5);
v_newLocalDeclsForMVars_391_ = lean_ctor_get(v___x_384_, 6);
v_newLetDecls_392_ = lean_ctor_get(v___x_384_, 7);
v_nextExprIdx_393_ = lean_ctor_get(v___x_384_, 8);
v_exprMVarArgs_394_ = lean_ctor_get(v___x_384_, 9);
v_exprFVarArgs_395_ = lean_ctor_get(v___x_384_, 10);
v_toProcess_396_ = lean_ctor_get(v___x_384_, 11);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_405_ == 0)
{
v___x_398_ = v___x_384_;
v_isShared_399_ = v_isSharedCheck_405_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_toProcess_396_);
lean_inc(v_exprFVarArgs_395_);
lean_inc(v_exprMVarArgs_394_);
lean_inc(v_nextExprIdx_393_);
lean_inc(v_newLetDecls_392_);
lean_inc(v_newLocalDeclsForMVars_391_);
lean_inc(v_newLocalDecls_390_);
lean_inc(v_levelArgs_389_);
lean_inc(v_nextLevelIdx_388_);
lean_inc(v_levelParams_387_);
lean_inc(v_visitedExpr_386_);
lean_inc(v_visitedLevel_385_);
lean_dec(v___x_384_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_405_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_400_; lean_object* v___x_402_; 
lean_inc(v_a_383_);
lean_inc(v_a_369_);
v___x_400_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_385_, v_a_369_, v_a_383_);
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 0, v___x_400_);
v___x_402_ = v___x_398_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_400_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v_visitedExpr_386_);
lean_ctor_set(v_reuseFailAlloc_404_, 2, v_levelParams_387_);
lean_ctor_set(v_reuseFailAlloc_404_, 3, v_nextLevelIdx_388_);
lean_ctor_set(v_reuseFailAlloc_404_, 4, v_levelArgs_389_);
lean_ctor_set(v_reuseFailAlloc_404_, 5, v_newLocalDecls_390_);
lean_ctor_set(v_reuseFailAlloc_404_, 6, v_newLocalDeclsForMVars_391_);
lean_ctor_set(v_reuseFailAlloc_404_, 7, v_newLetDecls_392_);
lean_ctor_set(v_reuseFailAlloc_404_, 8, v_nextExprIdx_393_);
lean_ctor_set(v_reuseFailAlloc_404_, 9, v_exprMVarArgs_394_);
lean_ctor_set(v_reuseFailAlloc_404_, 10, v_exprFVarArgs_395_);
lean_ctor_set(v_reuseFailAlloc_404_, 11, v_toProcess_396_);
v___x_402_ = v_reuseFailAlloc_404_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; 
v___x_403_ = lean_st_ref_put(v_a_366_, v___x_402_);
v_a_371_ = v_a_383_;
goto v___jp_370_;
}
}
}
else
{
lean_dec_ref_known(v_x_365_, 1);
return v___x_382_;
}
}
else
{
lean_object* v_val_406_; 
v_val_406_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_val_406_);
lean_dec_ref_known(v___x_381_, 1);
v_a_371_ = v_val_406_;
goto v___jp_370_;
}
}
}
case 2:
{
lean_object* v_a_409_; lean_object* v_a_410_; lean_object* v___y_412_; lean_object* v_a_413_; lean_object* v___y_427_; lean_object* v_a_457_; uint8_t v___x_489_; 
v_a_409_ = lean_ctor_get(v_x_365_, 0);
v_a_410_ = lean_ctor_get(v_x_365_, 1);
v___x_489_ = l_Lean_Level_hasMVar(v_a_409_);
if (v___x_489_ == 0)
{
uint8_t v___x_490_; 
v___x_490_ = l_Lean_Level_hasParam(v_a_409_);
if (v___x_490_ == 0)
{
lean_inc(v_a_409_);
v_a_457_ = v_a_409_;
goto v___jp_456_;
}
else
{
goto v___jp_460_;
}
}
else
{
goto v___jp_460_;
}
v___jp_411_:
{
size_t v___x_414_; size_t v___x_415_; uint8_t v___x_416_; 
v___x_414_ = lean_ptr_addr(v_a_409_);
v___x_415_ = lean_ptr_addr(v___y_412_);
v___x_416_ = lean_usize_dec_eq(v___x_414_, v___x_415_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; lean_object* v___x_418_; 
lean_dec_ref_known(v_x_365_, 2);
v___x_417_ = l_Lean_mkLevelMax_x27(v___y_412_, v_a_413_);
v___x_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
return v___x_418_;
}
else
{
size_t v___x_419_; size_t v___x_420_; uint8_t v___x_421_; 
v___x_419_ = lean_ptr_addr(v_a_410_);
v___x_420_ = lean_ptr_addr(v_a_413_);
v___x_421_ = lean_usize_dec_eq(v___x_419_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; lean_object* v___x_423_; 
lean_dec_ref_known(v_x_365_, 2);
v___x_422_ = l_Lean_mkLevelMax_x27(v___y_412_, v_a_413_);
v___x_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
return v___x_423_;
}
else
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = l_Lean_simpLevelMax_x27(v___y_412_, v_a_413_, v_x_365_);
lean_dec_ref_known(v_x_365_, 2);
lean_dec(v_a_413_);
lean_dec(v___y_412_);
v___x_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
return v___x_425_;
}
}
}
v___jp_426_:
{
lean_object* v___x_428_; lean_object* v_visitedLevel_429_; lean_object* v___x_430_; 
v___x_428_ = lean_st_ref_get(v_a_366_);
v_visitedLevel_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc_ref(v_visitedLevel_429_);
lean_dec(v___x_428_);
v___x_430_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_429_, v_a_410_);
lean_dec_ref(v_visitedLevel_429_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v___x_431_; 
lean_inc(v_a_410_);
v___x_431_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_410_, v_a_366_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v___x_433_; lean_object* v_visitedLevel_434_; lean_object* v_visitedExpr_435_; lean_object* v_levelParams_436_; lean_object* v_nextLevelIdx_437_; lean_object* v_levelArgs_438_; lean_object* v_newLocalDecls_439_; lean_object* v_newLocalDeclsForMVars_440_; lean_object* v_newLetDecls_441_; lean_object* v_nextExprIdx_442_; lean_object* v_exprMVarArgs_443_; lean_object* v_exprFVarArgs_444_; lean_object* v_toProcess_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_454_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_a_432_);
lean_dec_ref_known(v___x_431_, 1);
v___x_433_ = lean_st_ref_take(v_a_366_);
v_visitedLevel_434_ = lean_ctor_get(v___x_433_, 0);
v_visitedExpr_435_ = lean_ctor_get(v___x_433_, 1);
v_levelParams_436_ = lean_ctor_get(v___x_433_, 2);
v_nextLevelIdx_437_ = lean_ctor_get(v___x_433_, 3);
v_levelArgs_438_ = lean_ctor_get(v___x_433_, 4);
v_newLocalDecls_439_ = lean_ctor_get(v___x_433_, 5);
v_newLocalDeclsForMVars_440_ = lean_ctor_get(v___x_433_, 6);
v_newLetDecls_441_ = lean_ctor_get(v___x_433_, 7);
v_nextExprIdx_442_ = lean_ctor_get(v___x_433_, 8);
v_exprMVarArgs_443_ = lean_ctor_get(v___x_433_, 9);
v_exprFVarArgs_444_ = lean_ctor_get(v___x_433_, 10);
v_toProcess_445_ = lean_ctor_get(v___x_433_, 11);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_454_ == 0)
{
v___x_447_ = v___x_433_;
v_isShared_448_ = v_isSharedCheck_454_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_toProcess_445_);
lean_inc(v_exprFVarArgs_444_);
lean_inc(v_exprMVarArgs_443_);
lean_inc(v_nextExprIdx_442_);
lean_inc(v_newLetDecls_441_);
lean_inc(v_newLocalDeclsForMVars_440_);
lean_inc(v_newLocalDecls_439_);
lean_inc(v_levelArgs_438_);
lean_inc(v_nextLevelIdx_437_);
lean_inc(v_levelParams_436_);
lean_inc(v_visitedExpr_435_);
lean_inc(v_visitedLevel_434_);
lean_dec(v___x_433_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_454_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_449_; lean_object* v___x_451_; 
lean_inc(v_a_432_);
lean_inc(v_a_410_);
v___x_449_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_434_, v_a_410_, v_a_432_);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_449_);
v___x_451_ = v___x_447_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v___x_449_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_visitedExpr_435_);
lean_ctor_set(v_reuseFailAlloc_453_, 2, v_levelParams_436_);
lean_ctor_set(v_reuseFailAlloc_453_, 3, v_nextLevelIdx_437_);
lean_ctor_set(v_reuseFailAlloc_453_, 4, v_levelArgs_438_);
lean_ctor_set(v_reuseFailAlloc_453_, 5, v_newLocalDecls_439_);
lean_ctor_set(v_reuseFailAlloc_453_, 6, v_newLocalDeclsForMVars_440_);
lean_ctor_set(v_reuseFailAlloc_453_, 7, v_newLetDecls_441_);
lean_ctor_set(v_reuseFailAlloc_453_, 8, v_nextExprIdx_442_);
lean_ctor_set(v_reuseFailAlloc_453_, 9, v_exprMVarArgs_443_);
lean_ctor_set(v_reuseFailAlloc_453_, 10, v_exprFVarArgs_444_);
lean_ctor_set(v_reuseFailAlloc_453_, 11, v_toProcess_445_);
v___x_451_ = v_reuseFailAlloc_453_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_object* v___x_452_; 
v___x_452_ = lean_st_ref_put(v_a_366_, v___x_451_);
v___y_412_ = v___y_427_;
v_a_413_ = v_a_432_;
goto v___jp_411_;
}
}
}
else
{
lean_dec(v___y_427_);
lean_dec_ref_known(v_x_365_, 2);
return v___x_431_;
}
}
else
{
lean_object* v_val_455_; 
v_val_455_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_val_455_);
lean_dec_ref_known(v___x_430_, 1);
v___y_412_ = v___y_427_;
v_a_413_ = v_val_455_;
goto v___jp_411_;
}
}
v___jp_456_:
{
uint8_t v___x_458_; 
v___x_458_ = l_Lean_Level_hasMVar(v_a_410_);
if (v___x_458_ == 0)
{
uint8_t v___x_459_; 
v___x_459_ = l_Lean_Level_hasParam(v_a_410_);
if (v___x_459_ == 0)
{
lean_inc(v_a_410_);
v___y_412_ = v_a_457_;
v_a_413_ = v_a_410_;
goto v___jp_411_;
}
else
{
v___y_427_ = v_a_457_;
goto v___jp_426_;
}
}
else
{
v___y_427_ = v_a_457_;
goto v___jp_426_;
}
}
v___jp_460_:
{
lean_object* v___x_461_; lean_object* v_visitedLevel_462_; lean_object* v___x_463_; 
v___x_461_ = lean_st_ref_get(v_a_366_);
v_visitedLevel_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc_ref(v_visitedLevel_462_);
lean_dec(v___x_461_);
v___x_463_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_462_, v_a_409_);
lean_dec_ref(v_visitedLevel_462_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v___x_464_; 
lean_inc(v_a_409_);
v___x_464_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_409_, v_a_366_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_466_; lean_object* v_visitedLevel_467_; lean_object* v_visitedExpr_468_; lean_object* v_levelParams_469_; lean_object* v_nextLevelIdx_470_; lean_object* v_levelArgs_471_; lean_object* v_newLocalDecls_472_; lean_object* v_newLocalDeclsForMVars_473_; lean_object* v_newLetDecls_474_; lean_object* v_nextExprIdx_475_; lean_object* v_exprMVarArgs_476_; lean_object* v_exprFVarArgs_477_; lean_object* v_toProcess_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_487_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_a_465_);
lean_dec_ref_known(v___x_464_, 1);
v___x_466_ = lean_st_ref_take(v_a_366_);
v_visitedLevel_467_ = lean_ctor_get(v___x_466_, 0);
v_visitedExpr_468_ = lean_ctor_get(v___x_466_, 1);
v_levelParams_469_ = lean_ctor_get(v___x_466_, 2);
v_nextLevelIdx_470_ = lean_ctor_get(v___x_466_, 3);
v_levelArgs_471_ = lean_ctor_get(v___x_466_, 4);
v_newLocalDecls_472_ = lean_ctor_get(v___x_466_, 5);
v_newLocalDeclsForMVars_473_ = lean_ctor_get(v___x_466_, 6);
v_newLetDecls_474_ = lean_ctor_get(v___x_466_, 7);
v_nextExprIdx_475_ = lean_ctor_get(v___x_466_, 8);
v_exprMVarArgs_476_ = lean_ctor_get(v___x_466_, 9);
v_exprFVarArgs_477_ = lean_ctor_get(v___x_466_, 10);
v_toProcess_478_ = lean_ctor_get(v___x_466_, 11);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_487_ == 0)
{
v___x_480_ = v___x_466_;
v_isShared_481_ = v_isSharedCheck_487_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_toProcess_478_);
lean_inc(v_exprFVarArgs_477_);
lean_inc(v_exprMVarArgs_476_);
lean_inc(v_nextExprIdx_475_);
lean_inc(v_newLetDecls_474_);
lean_inc(v_newLocalDeclsForMVars_473_);
lean_inc(v_newLocalDecls_472_);
lean_inc(v_levelArgs_471_);
lean_inc(v_nextLevelIdx_470_);
lean_inc(v_levelParams_469_);
lean_inc(v_visitedExpr_468_);
lean_inc(v_visitedLevel_467_);
lean_dec(v___x_466_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_487_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_482_; lean_object* v___x_484_; 
lean_inc(v_a_465_);
lean_inc(v_a_409_);
v___x_482_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_467_, v_a_409_, v_a_465_);
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 0, v___x_482_);
v___x_484_ = v___x_480_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_482_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v_visitedExpr_468_);
lean_ctor_set(v_reuseFailAlloc_486_, 2, v_levelParams_469_);
lean_ctor_set(v_reuseFailAlloc_486_, 3, v_nextLevelIdx_470_);
lean_ctor_set(v_reuseFailAlloc_486_, 4, v_levelArgs_471_);
lean_ctor_set(v_reuseFailAlloc_486_, 5, v_newLocalDecls_472_);
lean_ctor_set(v_reuseFailAlloc_486_, 6, v_newLocalDeclsForMVars_473_);
lean_ctor_set(v_reuseFailAlloc_486_, 7, v_newLetDecls_474_);
lean_ctor_set(v_reuseFailAlloc_486_, 8, v_nextExprIdx_475_);
lean_ctor_set(v_reuseFailAlloc_486_, 9, v_exprMVarArgs_476_);
lean_ctor_set(v_reuseFailAlloc_486_, 10, v_exprFVarArgs_477_);
lean_ctor_set(v_reuseFailAlloc_486_, 11, v_toProcess_478_);
v___x_484_ = v_reuseFailAlloc_486_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_485_; 
v___x_485_ = lean_st_ref_put(v_a_366_, v___x_484_);
v_a_457_ = v_a_465_;
goto v___jp_456_;
}
}
}
else
{
lean_dec_ref_known(v_x_365_, 2);
return v___x_464_;
}
}
else
{
lean_object* v_val_488_; 
v_val_488_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_val_488_);
lean_dec_ref_known(v___x_463_, 1);
v_a_457_ = v_val_488_;
goto v___jp_456_;
}
}
}
case 3:
{
lean_object* v_a_491_; lean_object* v_a_492_; lean_object* v___y_494_; lean_object* v_a_495_; lean_object* v___y_509_; lean_object* v_a_539_; uint8_t v___x_571_; 
v_a_491_ = lean_ctor_get(v_x_365_, 0);
v_a_492_ = lean_ctor_get(v_x_365_, 1);
v___x_571_ = l_Lean_Level_hasMVar(v_a_491_);
if (v___x_571_ == 0)
{
uint8_t v___x_572_; 
v___x_572_ = l_Lean_Level_hasParam(v_a_491_);
if (v___x_572_ == 0)
{
lean_inc(v_a_491_);
v_a_539_ = v_a_491_;
goto v___jp_538_;
}
else
{
goto v___jp_542_;
}
}
else
{
goto v___jp_542_;
}
v___jp_493_:
{
size_t v___x_496_; size_t v___x_497_; uint8_t v___x_498_; 
v___x_496_ = lean_ptr_addr(v_a_491_);
v___x_497_ = lean_ptr_addr(v___y_494_);
v___x_498_ = lean_usize_dec_eq(v___x_496_, v___x_497_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; lean_object* v___x_500_; 
lean_dec_ref_known(v_x_365_, 2);
v___x_499_ = l_Lean_mkLevelIMax_x27(v___y_494_, v_a_495_);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
else
{
size_t v___x_501_; size_t v___x_502_; uint8_t v___x_503_; 
v___x_501_ = lean_ptr_addr(v_a_492_);
v___x_502_ = lean_ptr_addr(v_a_495_);
v___x_503_ = lean_usize_dec_eq(v___x_501_, v___x_502_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; lean_object* v___x_505_; 
lean_dec_ref_known(v_x_365_, 2);
v___x_504_ = l_Lean_mkLevelIMax_x27(v___y_494_, v_a_495_);
v___x_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
return v___x_505_;
}
else
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = l_Lean_simpLevelIMax_x27(v___y_494_, v_a_495_, v_x_365_);
lean_dec_ref_known(v_x_365_, 2);
v___x_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_507_, 0, v___x_506_);
return v___x_507_;
}
}
}
v___jp_508_:
{
lean_object* v___x_510_; lean_object* v_visitedLevel_511_; lean_object* v___x_512_; 
v___x_510_ = lean_st_ref_get(v_a_366_);
v_visitedLevel_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc_ref(v_visitedLevel_511_);
lean_dec(v___x_510_);
v___x_512_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_511_, v_a_492_);
lean_dec_ref(v_visitedLevel_511_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v___x_513_; 
lean_inc(v_a_492_);
v___x_513_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_492_, v_a_366_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_515_; lean_object* v_visitedLevel_516_; lean_object* v_visitedExpr_517_; lean_object* v_levelParams_518_; lean_object* v_nextLevelIdx_519_; lean_object* v_levelArgs_520_; lean_object* v_newLocalDecls_521_; lean_object* v_newLocalDeclsForMVars_522_; lean_object* v_newLetDecls_523_; lean_object* v_nextExprIdx_524_; lean_object* v_exprMVarArgs_525_; lean_object* v_exprFVarArgs_526_; lean_object* v_toProcess_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_536_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_514_);
lean_dec_ref_known(v___x_513_, 1);
v___x_515_ = lean_st_ref_take(v_a_366_);
v_visitedLevel_516_ = lean_ctor_get(v___x_515_, 0);
v_visitedExpr_517_ = lean_ctor_get(v___x_515_, 1);
v_levelParams_518_ = lean_ctor_get(v___x_515_, 2);
v_nextLevelIdx_519_ = lean_ctor_get(v___x_515_, 3);
v_levelArgs_520_ = lean_ctor_get(v___x_515_, 4);
v_newLocalDecls_521_ = lean_ctor_get(v___x_515_, 5);
v_newLocalDeclsForMVars_522_ = lean_ctor_get(v___x_515_, 6);
v_newLetDecls_523_ = lean_ctor_get(v___x_515_, 7);
v_nextExprIdx_524_ = lean_ctor_get(v___x_515_, 8);
v_exprMVarArgs_525_ = lean_ctor_get(v___x_515_, 9);
v_exprFVarArgs_526_ = lean_ctor_get(v___x_515_, 10);
v_toProcess_527_ = lean_ctor_get(v___x_515_, 11);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_536_ == 0)
{
v___x_529_ = v___x_515_;
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_toProcess_527_);
lean_inc(v_exprFVarArgs_526_);
lean_inc(v_exprMVarArgs_525_);
lean_inc(v_nextExprIdx_524_);
lean_inc(v_newLetDecls_523_);
lean_inc(v_newLocalDeclsForMVars_522_);
lean_inc(v_newLocalDecls_521_);
lean_inc(v_levelArgs_520_);
lean_inc(v_nextLevelIdx_519_);
lean_inc(v_levelParams_518_);
lean_inc(v_visitedExpr_517_);
lean_inc(v_visitedLevel_516_);
lean_dec(v___x_515_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_531_; lean_object* v___x_533_; 
lean_inc(v_a_514_);
lean_inc(v_a_492_);
v___x_531_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_516_, v_a_492_, v_a_514_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v___x_531_);
v___x_533_ = v___x_529_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_531_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_visitedExpr_517_);
lean_ctor_set(v_reuseFailAlloc_535_, 2, v_levelParams_518_);
lean_ctor_set(v_reuseFailAlloc_535_, 3, v_nextLevelIdx_519_);
lean_ctor_set(v_reuseFailAlloc_535_, 4, v_levelArgs_520_);
lean_ctor_set(v_reuseFailAlloc_535_, 5, v_newLocalDecls_521_);
lean_ctor_set(v_reuseFailAlloc_535_, 6, v_newLocalDeclsForMVars_522_);
lean_ctor_set(v_reuseFailAlloc_535_, 7, v_newLetDecls_523_);
lean_ctor_set(v_reuseFailAlloc_535_, 8, v_nextExprIdx_524_);
lean_ctor_set(v_reuseFailAlloc_535_, 9, v_exprMVarArgs_525_);
lean_ctor_set(v_reuseFailAlloc_535_, 10, v_exprFVarArgs_526_);
lean_ctor_set(v_reuseFailAlloc_535_, 11, v_toProcess_527_);
v___x_533_ = v_reuseFailAlloc_535_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
lean_object* v___x_534_; 
v___x_534_ = lean_st_ref_put(v_a_366_, v___x_533_);
v___y_494_ = v___y_509_;
v_a_495_ = v_a_514_;
goto v___jp_493_;
}
}
}
else
{
lean_dec(v___y_509_);
lean_dec_ref_known(v_x_365_, 2);
return v___x_513_;
}
}
else
{
lean_object* v_val_537_; 
v_val_537_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_val_537_);
lean_dec_ref_known(v___x_512_, 1);
v___y_494_ = v___y_509_;
v_a_495_ = v_val_537_;
goto v___jp_493_;
}
}
v___jp_538_:
{
uint8_t v___x_540_; 
v___x_540_ = l_Lean_Level_hasMVar(v_a_492_);
if (v___x_540_ == 0)
{
uint8_t v___x_541_; 
v___x_541_ = l_Lean_Level_hasParam(v_a_492_);
if (v___x_541_ == 0)
{
lean_inc(v_a_492_);
v___y_494_ = v_a_539_;
v_a_495_ = v_a_492_;
goto v___jp_493_;
}
else
{
v___y_509_ = v_a_539_;
goto v___jp_508_;
}
}
else
{
v___y_509_ = v_a_539_;
goto v___jp_508_;
}
}
v___jp_542_:
{
lean_object* v___x_543_; lean_object* v_visitedLevel_544_; lean_object* v___x_545_; 
v___x_543_ = lean_st_ref_get(v_a_366_);
v_visitedLevel_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc_ref(v_visitedLevel_544_);
lean_dec(v___x_543_);
v___x_545_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_544_, v_a_491_);
lean_dec_ref(v_visitedLevel_544_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v___x_546_; 
lean_inc(v_a_491_);
v___x_546_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_491_, v_a_366_);
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; lean_object* v___x_548_; lean_object* v_visitedLevel_549_; lean_object* v_visitedExpr_550_; lean_object* v_levelParams_551_; lean_object* v_nextLevelIdx_552_; lean_object* v_levelArgs_553_; lean_object* v_newLocalDecls_554_; lean_object* v_newLocalDeclsForMVars_555_; lean_object* v_newLetDecls_556_; lean_object* v_nextExprIdx_557_; lean_object* v_exprMVarArgs_558_; lean_object* v_exprFVarArgs_559_; lean_object* v_toProcess_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_569_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_a_547_);
lean_dec_ref_known(v___x_546_, 1);
v___x_548_ = lean_st_ref_take(v_a_366_);
v_visitedLevel_549_ = lean_ctor_get(v___x_548_, 0);
v_visitedExpr_550_ = lean_ctor_get(v___x_548_, 1);
v_levelParams_551_ = lean_ctor_get(v___x_548_, 2);
v_nextLevelIdx_552_ = lean_ctor_get(v___x_548_, 3);
v_levelArgs_553_ = lean_ctor_get(v___x_548_, 4);
v_newLocalDecls_554_ = lean_ctor_get(v___x_548_, 5);
v_newLocalDeclsForMVars_555_ = lean_ctor_get(v___x_548_, 6);
v_newLetDecls_556_ = lean_ctor_get(v___x_548_, 7);
v_nextExprIdx_557_ = lean_ctor_get(v___x_548_, 8);
v_exprMVarArgs_558_ = lean_ctor_get(v___x_548_, 9);
v_exprFVarArgs_559_ = lean_ctor_get(v___x_548_, 10);
v_toProcess_560_ = lean_ctor_get(v___x_548_, 11);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_569_ == 0)
{
v___x_562_ = v___x_548_;
v_isShared_563_ = v_isSharedCheck_569_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_toProcess_560_);
lean_inc(v_exprFVarArgs_559_);
lean_inc(v_exprMVarArgs_558_);
lean_inc(v_nextExprIdx_557_);
lean_inc(v_newLetDecls_556_);
lean_inc(v_newLocalDeclsForMVars_555_);
lean_inc(v_newLocalDecls_554_);
lean_inc(v_levelArgs_553_);
lean_inc(v_nextLevelIdx_552_);
lean_inc(v_levelParams_551_);
lean_inc(v_visitedExpr_550_);
lean_inc(v_visitedLevel_549_);
lean_dec(v___x_548_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_569_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_564_; lean_object* v___x_566_; 
lean_inc(v_a_547_);
lean_inc(v_a_491_);
v___x_564_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_549_, v_a_491_, v_a_547_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_564_);
v___x_566_ = v___x_562_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v___x_564_);
lean_ctor_set(v_reuseFailAlloc_568_, 1, v_visitedExpr_550_);
lean_ctor_set(v_reuseFailAlloc_568_, 2, v_levelParams_551_);
lean_ctor_set(v_reuseFailAlloc_568_, 3, v_nextLevelIdx_552_);
lean_ctor_set(v_reuseFailAlloc_568_, 4, v_levelArgs_553_);
lean_ctor_set(v_reuseFailAlloc_568_, 5, v_newLocalDecls_554_);
lean_ctor_set(v_reuseFailAlloc_568_, 6, v_newLocalDeclsForMVars_555_);
lean_ctor_set(v_reuseFailAlloc_568_, 7, v_newLetDecls_556_);
lean_ctor_set(v_reuseFailAlloc_568_, 8, v_nextExprIdx_557_);
lean_ctor_set(v_reuseFailAlloc_568_, 9, v_exprMVarArgs_558_);
lean_ctor_set(v_reuseFailAlloc_568_, 10, v_exprFVarArgs_559_);
lean_ctor_set(v_reuseFailAlloc_568_, 11, v_toProcess_560_);
v___x_566_ = v_reuseFailAlloc_568_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
lean_object* v___x_567_; 
v___x_567_ = lean_st_ref_put(v_a_366_, v___x_566_);
v_a_539_ = v_a_547_;
goto v___jp_538_;
}
}
}
else
{
lean_dec_ref_known(v_x_365_, 2);
return v___x_546_;
}
}
else
{
lean_object* v_val_570_; 
v_val_570_ = lean_ctor_get(v___x_545_, 0);
lean_inc(v_val_570_);
lean_dec_ref_known(v___x_545_, 1);
v_a_539_ = v_val_570_;
goto v___jp_538_;
}
}
}
default: 
{
lean_object* v___x_573_; 
v___x_573_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_x_365_, v_a_366_);
return v___x_573_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg___boxed(lean_object* v_x_574_, lean_object* v_a_575_, lean_object* v_a_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_x_574_, v_a_575_);
lean_dec(v_a_575_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux(lean_object* v_x_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_x_578_, v_a_580_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___boxed(lean_object* v_x_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Lean_Meta_Closure_collectLevelAux(v_x_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_);
lean_dec(v_a_593_);
lean_dec_ref(v_a_592_);
lean_dec(v_a_591_);
lean_dec_ref(v_a_590_);
lean_dec(v_a_589_);
lean_dec_ref(v_a_588_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(lean_object* v_00_u03b2_596_, lean_object* v_m_597_, lean_object* v_a_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_m_597_, v_a_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___boxed(lean_object* v_00_u03b2_600_, lean_object* v_m_601_, lean_object* v_a_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(v_00_u03b2_600_, v_m_601_, v_a_602_);
lean_dec(v_a_602_);
lean_dec_ref(v_m_601_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2(lean_object* v_00_u03b2_604_, lean_object* v_m_605_, lean_object* v_a_606_, lean_object* v_b_607_){
_start:
{
lean_object* v___x_608_; 
v___x_608_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_m_605_, v_a_606_, v_b_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(lean_object* v_00_u03b2_609_, lean_object* v_a_610_, lean_object* v_x_611_){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_610_, v_x_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___boxed(lean_object* v_00_u03b2_613_, lean_object* v_a_614_, lean_object* v_x_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(v_00_u03b2_613_, v_a_614_, v_x_615_);
lean_dec(v_x_615_);
lean_dec(v_a_614_);
return v_res_616_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(lean_object* v_00_u03b2_617_, lean_object* v_a_618_, lean_object* v_x_619_){
_start:
{
uint8_t v___x_620_; 
v___x_620_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_618_, v_x_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___boxed(lean_object* v_00_u03b2_621_, lean_object* v_a_622_, lean_object* v_x_623_){
_start:
{
uint8_t v_res_624_; lean_object* v_r_625_; 
v_res_624_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(v_00_u03b2_621_, v_a_622_, v_x_623_);
lean_dec(v_x_623_);
lean_dec(v_a_622_);
v_r_625_ = lean_box(v_res_624_);
return v_r_625_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4(lean_object* v_00_u03b2_626_, lean_object* v_data_627_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(v_data_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5(lean_object* v_00_u03b2_629_, lean_object* v_a_630_, lean_object* v_b_631_, lean_object* v_x_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_630_, v_b_631_, v_x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_634_, lean_object* v_i_635_, lean_object* v_source_636_, lean_object* v_target_637_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(v_i_635_, v_source_636_, v_target_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_639_, lean_object* v_x_640_, lean_object* v_x_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(v_x_640_, v_x_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg(lean_object* v_u_643_, lean_object* v_a_644_){
_start:
{
uint8_t v___x_689_; 
v___x_689_ = l_Lean_Level_hasMVar(v_u_643_);
if (v___x_689_ == 0)
{
uint8_t v___x_690_; 
v___x_690_ = l_Lean_Level_hasParam(v_u_643_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; 
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v_u_643_);
return v___x_691_;
}
else
{
goto v___jp_646_;
}
}
else
{
goto v___jp_646_;
}
v___jp_646_:
{
lean_object* v___x_647_; lean_object* v_visitedLevel_648_; lean_object* v___x_649_; 
v___x_647_ = lean_st_ref_get(v_a_644_);
v_visitedLevel_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc_ref(v_visitedLevel_648_);
lean_dec(v___x_647_);
v___x_649_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_648_, v_u_643_);
lean_dec_ref(v_visitedLevel_648_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v___x_650_; 
lean_inc(v_u_643_);
v___x_650_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_u_643_, v_a_644_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_680_; 
v_a_651_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_680_ == 0)
{
v___x_653_ = v___x_650_;
v_isShared_654_ = v_isSharedCheck_680_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_650_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_680_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_655_; lean_object* v_visitedLevel_656_; lean_object* v_visitedExpr_657_; lean_object* v_levelParams_658_; lean_object* v_nextLevelIdx_659_; lean_object* v_levelArgs_660_; lean_object* v_newLocalDecls_661_; lean_object* v_newLocalDeclsForMVars_662_; lean_object* v_newLetDecls_663_; lean_object* v_nextExprIdx_664_; lean_object* v_exprMVarArgs_665_; lean_object* v_exprFVarArgs_666_; lean_object* v_toProcess_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_679_; 
v___x_655_ = lean_st_ref_take(v_a_644_);
v_visitedLevel_656_ = lean_ctor_get(v___x_655_, 0);
v_visitedExpr_657_ = lean_ctor_get(v___x_655_, 1);
v_levelParams_658_ = lean_ctor_get(v___x_655_, 2);
v_nextLevelIdx_659_ = lean_ctor_get(v___x_655_, 3);
v_levelArgs_660_ = lean_ctor_get(v___x_655_, 4);
v_newLocalDecls_661_ = lean_ctor_get(v___x_655_, 5);
v_newLocalDeclsForMVars_662_ = lean_ctor_get(v___x_655_, 6);
v_newLetDecls_663_ = lean_ctor_get(v___x_655_, 7);
v_nextExprIdx_664_ = lean_ctor_get(v___x_655_, 8);
v_exprMVarArgs_665_ = lean_ctor_get(v___x_655_, 9);
v_exprFVarArgs_666_ = lean_ctor_get(v___x_655_, 10);
v_toProcess_667_ = lean_ctor_get(v___x_655_, 11);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_679_ == 0)
{
v___x_669_ = v___x_655_;
v_isShared_670_ = v_isSharedCheck_679_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_toProcess_667_);
lean_inc(v_exprFVarArgs_666_);
lean_inc(v_exprMVarArgs_665_);
lean_inc(v_nextExprIdx_664_);
lean_inc(v_newLetDecls_663_);
lean_inc(v_newLocalDeclsForMVars_662_);
lean_inc(v_newLocalDecls_661_);
lean_inc(v_levelArgs_660_);
lean_inc(v_nextLevelIdx_659_);
lean_inc(v_levelParams_658_);
lean_inc(v_visitedExpr_657_);
lean_inc(v_visitedLevel_656_);
lean_dec(v___x_655_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_679_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_671_; lean_object* v___x_673_; 
lean_inc(v_a_651_);
v___x_671_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_656_, v_u_643_, v_a_651_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 0, v___x_671_);
v___x_673_ = v___x_669_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_671_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v_visitedExpr_657_);
lean_ctor_set(v_reuseFailAlloc_678_, 2, v_levelParams_658_);
lean_ctor_set(v_reuseFailAlloc_678_, 3, v_nextLevelIdx_659_);
lean_ctor_set(v_reuseFailAlloc_678_, 4, v_levelArgs_660_);
lean_ctor_set(v_reuseFailAlloc_678_, 5, v_newLocalDecls_661_);
lean_ctor_set(v_reuseFailAlloc_678_, 6, v_newLocalDeclsForMVars_662_);
lean_ctor_set(v_reuseFailAlloc_678_, 7, v_newLetDecls_663_);
lean_ctor_set(v_reuseFailAlloc_678_, 8, v_nextExprIdx_664_);
lean_ctor_set(v_reuseFailAlloc_678_, 9, v_exprMVarArgs_665_);
lean_ctor_set(v_reuseFailAlloc_678_, 10, v_exprFVarArgs_666_);
lean_ctor_set(v_reuseFailAlloc_678_, 11, v_toProcess_667_);
v___x_673_ = v_reuseFailAlloc_678_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
lean_object* v___x_674_; lean_object* v___x_676_; 
v___x_674_ = lean_st_ref_put(v_a_644_, v___x_673_);
if (v_isShared_654_ == 0)
{
v___x_676_ = v___x_653_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_651_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
else
{
lean_dec(v_u_643_);
return v___x_650_;
}
}
else
{
lean_object* v_val_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
lean_dec(v_u_643_);
v_val_681_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_649_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_val_681_);
lean_dec(v___x_649_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
lean_ctor_set_tag(v___x_683_, 0);
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_val_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg___boxed(lean_object* v_u_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_692_, v_a_693_);
lean_dec(v_a_693_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel(lean_object* v_u_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_696_, v_a_698_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___boxed(lean_object* v_u_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_Meta_Closure_collectLevel(v_u_705_, v_a_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec(v_a_709_);
lean_dec_ref(v_a_708_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(lean_object* v_e_714_, lean_object* v___y_715_){
_start:
{
uint8_t v___x_717_; 
v___x_717_ = l_Lean_Expr_hasMVar(v_e_714_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; 
v___x_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_718_, 0, v_e_714_);
return v___x_718_;
}
else
{
lean_object* v___x_719_; lean_object* v_mctx_720_; lean_object* v___x_721_; lean_object* v_fst_722_; lean_object* v_snd_723_; lean_object* v___x_724_; lean_object* v_cache_725_; lean_object* v_zetaDeltaFVarIds_726_; lean_object* v_postponed_727_; lean_object* v_diag_728_; lean_object* v_rewriteFires_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_738_; 
v___x_719_ = lean_st_ref_get(v___y_715_);
v_mctx_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc_ref(v_mctx_720_);
lean_dec(v___x_719_);
v___x_721_ = l_Lean_instantiateMVarsCore(v_mctx_720_, v_e_714_);
v_fst_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_fst_722_);
v_snd_723_ = lean_ctor_get(v___x_721_, 1);
lean_inc(v_snd_723_);
lean_dec_ref(v___x_721_);
v___x_724_ = lean_st_ref_take(v___y_715_);
v_cache_725_ = lean_ctor_get(v___x_724_, 1);
v_zetaDeltaFVarIds_726_ = lean_ctor_get(v___x_724_, 2);
v_postponed_727_ = lean_ctor_get(v___x_724_, 3);
v_diag_728_ = lean_ctor_get(v___x_724_, 4);
v_rewriteFires_729_ = lean_ctor_get(v___x_724_, 5);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; 
v_unused_739_ = lean_ctor_get(v___x_724_, 0);
lean_dec(v_unused_739_);
v___x_731_ = v___x_724_;
v_isShared_732_ = v_isSharedCheck_738_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_rewriteFires_729_);
lean_inc(v_diag_728_);
lean_inc(v_postponed_727_);
lean_inc(v_zetaDeltaFVarIds_726_);
lean_inc(v_cache_725_);
lean_dec(v___x_724_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_738_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 0, v_snd_723_);
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_snd_723_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v_cache_725_);
lean_ctor_set(v_reuseFailAlloc_737_, 2, v_zetaDeltaFVarIds_726_);
lean_ctor_set(v_reuseFailAlloc_737_, 3, v_postponed_727_);
lean_ctor_set(v_reuseFailAlloc_737_, 4, v_diag_728_);
lean_ctor_set(v_reuseFailAlloc_737_, 5, v_rewriteFires_729_);
v___x_734_ = v_reuseFailAlloc_737_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = lean_st_ref_put(v___y_715_, v___x_734_);
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v_fst_722_);
return v___x_736_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg___boxed(lean_object* v_e_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_740_, v___y_741_);
lean_dec(v___y_741_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(lean_object* v_e_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_744_, v___y_748_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___boxed(lean_object* v_e_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(v_e_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess(lean_object* v_e_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_){
_start:
{
lean_object* v___x_770_; uint8_t v_zetaDelta_771_; 
v___x_770_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_762_, v_a_766_);
v_zetaDelta_771_ = lean_ctor_get_uint8(v_a_763_, 0);
if (v_zetaDelta_771_ == 0)
{
uint8_t v_hasLetDecls_772_; 
v_hasLetDecls_772_ = lean_ctor_get_uint8(v_a_763_, 1);
if (v_hasLetDecls_772_ == 0)
{
return v___x_770_;
}
else
{
lean_object* v_a_773_; uint8_t v___x_774_; lean_object* v___x_775_; 
v_a_773_ = lean_ctor_get(v___x_770_, 0);
lean_inc_n(v_a_773_, 2);
lean_dec_ref(v___x_770_);
v___x_774_ = 0;
v___x_775_ = l_Lean_Meta_check(v_a_773_, v___x_774_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_782_ == 0)
{
lean_object* v_unused_783_; 
v_unused_783_ = lean_ctor_get(v___x_775_, 0);
lean_dec(v_unused_783_);
v___x_777_ = v___x_775_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_dec(v___x_775_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 0, v_a_773_);
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_773_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec(v_a_773_);
v_a_784_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_775_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_775_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
}
else
{
return v___x_770_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess___boxed(lean_object* v_e_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_Meta_Closure_preprocess(v_e_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_, v_a_798_);
lean_dec(v_a_798_);
lean_dec_ref(v_a_797_);
lean_dec(v_a_796_);
lean_dec_ref(v_a_795_);
lean_dec(v_a_794_);
lean_dec_ref(v_a_793_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg(lean_object* v_a_804_){
_start:
{
lean_object* v___x_806_; lean_object* v_nextExprIdx_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v_visitedLevel_811_; lean_object* v_visitedExpr_812_; lean_object* v_levelParams_813_; lean_object* v_nextLevelIdx_814_; lean_object* v_levelArgs_815_; lean_object* v_newLocalDecls_816_; lean_object* v_newLocalDeclsForMVars_817_; lean_object* v_newLetDecls_818_; lean_object* v_nextExprIdx_819_; lean_object* v_exprMVarArgs_820_; lean_object* v_exprFVarArgs_821_; lean_object* v_toProcess_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_833_; 
v___x_806_ = lean_st_ref_get(v_a_804_);
v_nextExprIdx_807_ = lean_ctor_get(v___x_806_, 8);
lean_inc(v_nextExprIdx_807_);
lean_dec(v___x_806_);
v___x_808_ = ((lean_object*)(l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1));
v___x_809_ = lean_name_append_index_after(v___x_808_, v_nextExprIdx_807_);
v___x_810_ = lean_st_ref_take(v_a_804_);
v_visitedLevel_811_ = lean_ctor_get(v___x_810_, 0);
v_visitedExpr_812_ = lean_ctor_get(v___x_810_, 1);
v_levelParams_813_ = lean_ctor_get(v___x_810_, 2);
v_nextLevelIdx_814_ = lean_ctor_get(v___x_810_, 3);
v_levelArgs_815_ = lean_ctor_get(v___x_810_, 4);
v_newLocalDecls_816_ = lean_ctor_get(v___x_810_, 5);
v_newLocalDeclsForMVars_817_ = lean_ctor_get(v___x_810_, 6);
v_newLetDecls_818_ = lean_ctor_get(v___x_810_, 7);
v_nextExprIdx_819_ = lean_ctor_get(v___x_810_, 8);
v_exprMVarArgs_820_ = lean_ctor_get(v___x_810_, 9);
v_exprFVarArgs_821_ = lean_ctor_get(v___x_810_, 10);
v_toProcess_822_ = lean_ctor_get(v___x_810_, 11);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_833_ == 0)
{
v___x_824_ = v___x_810_;
v_isShared_825_ = v_isSharedCheck_833_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_toProcess_822_);
lean_inc(v_exprFVarArgs_821_);
lean_inc(v_exprMVarArgs_820_);
lean_inc(v_nextExprIdx_819_);
lean_inc(v_newLetDecls_818_);
lean_inc(v_newLocalDeclsForMVars_817_);
lean_inc(v_newLocalDecls_816_);
lean_inc(v_levelArgs_815_);
lean_inc(v_nextLevelIdx_814_);
lean_inc(v_levelParams_813_);
lean_inc(v_visitedExpr_812_);
lean_inc(v_visitedLevel_811_);
lean_dec(v___x_810_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_833_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_829_; 
v___x_826_ = lean_unsigned_to_nat(1u);
v___x_827_ = lean_nat_add(v_nextExprIdx_819_, v___x_826_);
lean_dec(v_nextExprIdx_819_);
if (v_isShared_825_ == 0)
{
lean_ctor_set(v___x_824_, 8, v___x_827_);
v___x_829_ = v___x_824_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_visitedLevel_811_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v_visitedExpr_812_);
lean_ctor_set(v_reuseFailAlloc_832_, 2, v_levelParams_813_);
lean_ctor_set(v_reuseFailAlloc_832_, 3, v_nextLevelIdx_814_);
lean_ctor_set(v_reuseFailAlloc_832_, 4, v_levelArgs_815_);
lean_ctor_set(v_reuseFailAlloc_832_, 5, v_newLocalDecls_816_);
lean_ctor_set(v_reuseFailAlloc_832_, 6, v_newLocalDeclsForMVars_817_);
lean_ctor_set(v_reuseFailAlloc_832_, 7, v_newLetDecls_818_);
lean_ctor_set(v_reuseFailAlloc_832_, 8, v___x_827_);
lean_ctor_set(v_reuseFailAlloc_832_, 9, v_exprMVarArgs_820_);
lean_ctor_set(v_reuseFailAlloc_832_, 10, v_exprFVarArgs_821_);
lean_ctor_set(v_reuseFailAlloc_832_, 11, v_toProcess_822_);
v___x_829_ = v_reuseFailAlloc_832_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_st_ref_put(v_a_804_, v___x_829_);
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_809_);
return v___x_831_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___boxed(lean_object* v_a_834_, lean_object* v_a_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v_a_834_);
lean_dec(v_a_834_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName(lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v_a_838_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___boxed(lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_Meta_Closure_mkNextUserName(v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
lean_dec(v_a_850_);
lean_dec_ref(v_a_849_);
lean_dec(v_a_848_);
lean_dec_ref(v_a_847_);
lean_dec(v_a_846_);
lean_dec_ref(v_a_845_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg(lean_object* v_elem_853_, lean_object* v_a_854_){
_start:
{
lean_object* v___x_856_; lean_object* v_visitedLevel_857_; lean_object* v_visitedExpr_858_; lean_object* v_levelParams_859_; lean_object* v_nextLevelIdx_860_; lean_object* v_levelArgs_861_; lean_object* v_newLocalDecls_862_; lean_object* v_newLocalDeclsForMVars_863_; lean_object* v_newLetDecls_864_; lean_object* v_nextExprIdx_865_; lean_object* v_exprMVarArgs_866_; lean_object* v_exprFVarArgs_867_; lean_object* v_toProcess_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_879_; 
v___x_856_ = lean_st_ref_take(v_a_854_);
v_visitedLevel_857_ = lean_ctor_get(v___x_856_, 0);
v_visitedExpr_858_ = lean_ctor_get(v___x_856_, 1);
v_levelParams_859_ = lean_ctor_get(v___x_856_, 2);
v_nextLevelIdx_860_ = lean_ctor_get(v___x_856_, 3);
v_levelArgs_861_ = lean_ctor_get(v___x_856_, 4);
v_newLocalDecls_862_ = lean_ctor_get(v___x_856_, 5);
v_newLocalDeclsForMVars_863_ = lean_ctor_get(v___x_856_, 6);
v_newLetDecls_864_ = lean_ctor_get(v___x_856_, 7);
v_nextExprIdx_865_ = lean_ctor_get(v___x_856_, 8);
v_exprMVarArgs_866_ = lean_ctor_get(v___x_856_, 9);
v_exprFVarArgs_867_ = lean_ctor_get(v___x_856_, 10);
v_toProcess_868_ = lean_ctor_get(v___x_856_, 11);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_879_ == 0)
{
v___x_870_ = v___x_856_;
v_isShared_871_ = v_isSharedCheck_879_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_toProcess_868_);
lean_inc(v_exprFVarArgs_867_);
lean_inc(v_exprMVarArgs_866_);
lean_inc(v_nextExprIdx_865_);
lean_inc(v_newLetDecls_864_);
lean_inc(v_newLocalDeclsForMVars_863_);
lean_inc(v_newLocalDecls_862_);
lean_inc(v_levelArgs_861_);
lean_inc(v_nextLevelIdx_860_);
lean_inc(v_levelParams_859_);
lean_inc(v_visitedExpr_858_);
lean_inc(v_visitedLevel_857_);
lean_dec(v___x_856_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_879_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_875_; 
v___x_872_ = lean_box(0);
v___x_873_ = lean_array_push(v_toProcess_868_, v_elem_853_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 11, v___x_873_);
v___x_875_ = v___x_870_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_visitedLevel_857_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v_visitedExpr_858_);
lean_ctor_set(v_reuseFailAlloc_878_, 2, v_levelParams_859_);
lean_ctor_set(v_reuseFailAlloc_878_, 3, v_nextLevelIdx_860_);
lean_ctor_set(v_reuseFailAlloc_878_, 4, v_levelArgs_861_);
lean_ctor_set(v_reuseFailAlloc_878_, 5, v_newLocalDecls_862_);
lean_ctor_set(v_reuseFailAlloc_878_, 6, v_newLocalDeclsForMVars_863_);
lean_ctor_set(v_reuseFailAlloc_878_, 7, v_newLetDecls_864_);
lean_ctor_set(v_reuseFailAlloc_878_, 8, v_nextExprIdx_865_);
lean_ctor_set(v_reuseFailAlloc_878_, 9, v_exprMVarArgs_866_);
lean_ctor_set(v_reuseFailAlloc_878_, 10, v_exprFVarArgs_867_);
lean_ctor_set(v_reuseFailAlloc_878_, 11, v___x_873_);
v___x_875_ = v_reuseFailAlloc_878_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_876_ = lean_st_ref_put(v_a_854_, v___x_875_);
v___x_877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_877_, 0, v___x_872_);
return v___x_877_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg___boxed(lean_object* v_elem_880_, lean_object* v_a_881_, lean_object* v_a_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lean_Meta_Closure_pushToProcess___redArg(v_elem_880_, v_a_881_);
lean_dec(v_a_881_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess(lean_object* v_elem_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = l_Lean_Meta_Closure_pushToProcess___redArg(v_elem_884_, v_a_886_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___boxed(lean_object* v_elem_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_Meta_Closure_pushToProcess(v_elem_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_, v_a_899_);
lean_dec(v_a_899_);
lean_dec_ref(v_a_898_);
lean_dec(v_a_897_);
lean_dec_ref(v_a_896_);
lean_dec(v_a_895_);
lean_dec_ref(v_a_894_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(lean_object* v_mvarId_902_, lean_object* v___y_903_){
_start:
{
lean_object* v___x_905_; lean_object* v_mctx_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_905_ = lean_st_ref_get(v___y_903_);
v_mctx_906_ = lean_ctor_get(v___x_905_, 0);
lean_inc_ref(v_mctx_906_);
lean_dec(v___x_905_);
v___x_907_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_906_, v_mvarId_902_);
lean_dec_ref(v_mctx_906_);
v___x_908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg___boxed(lean_object* v_mvarId_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_909_, v___y_910_);
lean_dec(v___y_910_);
lean_dec(v_mvarId_909_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(lean_object* v_mvarId_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_913_, v___y_917_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___boxed(lean_object* v_mvarId_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(v_mvarId_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
lean_dec(v_mvarId_922_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(lean_object* v_k_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v_b_934_, lean_object* v_c_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v___x_941_; 
lean_inc(v___y_939_);
lean_inc_ref(v___y_938_);
lean_inc(v___y_937_);
lean_inc_ref(v___y_936_);
lean_inc(v___y_933_);
lean_inc_ref(v___y_932_);
v___x_941_ = lean_apply_9(v_k_931_, v_b_934_, v_c_935_, v___y_932_, v___y_933_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, lean_box(0));
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed(lean_object* v_k_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v_b_945_, lean_object* v_c_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(v_k_942_, v___y_943_, v___y_944_, v_b_945_, v_c_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(lean_object* v_type_953_, lean_object* v_maxFVars_x3f_954_, lean_object* v_k_955_, uint8_t v_cleanupAnnotations_956_, uint8_t v_whnfType_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v___f_965_; lean_object* v___x_966_; 
lean_inc(v___y_959_);
lean_inc_ref(v___y_958_);
v___f_965_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_965_, 0, v_k_955_);
lean_closure_set(v___f_965_, 1, v___y_958_);
lean_closure_set(v___f_965_, 2, v___y_959_);
v___x_966_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_953_, v_maxFVars_x3f_954_, v___f_965_, v_cleanupAnnotations_956_, v_whnfType_957_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
if (lean_obj_tag(v___x_966_) == 0)
{
return v___x_966_;
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
v_a_967_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_966_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_966_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___boxed(lean_object* v_type_975_, lean_object* v_maxFVars_x3f_976_, lean_object* v_k_977_, lean_object* v_cleanupAnnotations_978_, lean_object* v_whnfType_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_987_; uint8_t v_whnfType_boxed_988_; lean_object* v_res_989_; 
v_cleanupAnnotations_boxed_987_ = lean_unbox(v_cleanupAnnotations_978_);
v_whnfType_boxed_988_ = lean_unbox(v_whnfType_979_);
v_res_989_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_975_, v_maxFVars_x3f_976_, v_k_977_, v_cleanupAnnotations_boxed_987_, v_whnfType_boxed_988_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(lean_object* v_00_u03b1_990_, lean_object* v_type_991_, lean_object* v_maxFVars_x3f_992_, lean_object* v_k_993_, uint8_t v_cleanupAnnotations_994_, uint8_t v_whnfType_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_991_, v_maxFVars_x3f_992_, v_k_993_, v_cleanupAnnotations_994_, v_whnfType_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___boxed(lean_object* v_00_u03b1_1004_, lean_object* v_type_1005_, lean_object* v_maxFVars_x3f_1006_, lean_object* v_k_1007_, lean_object* v_cleanupAnnotations_1008_, lean_object* v_whnfType_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1017_; uint8_t v_whnfType_boxed_1018_; lean_object* v_res_1019_; 
v_cleanupAnnotations_boxed_1017_ = lean_unbox(v_cleanupAnnotations_1008_);
v_whnfType_boxed_1018_ = lean_unbox(v_whnfType_1009_);
v_res_1019_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(v_00_u03b1_1004_, v_type_1005_, v_maxFVars_x3f_1006_, v_k_1007_, v_cleanupAnnotations_boxed_1017_, v_whnfType_boxed_1018_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(lean_object* v_a_1020_, lean_object* v_x_1021_){
_start:
{
if (lean_obj_tag(v_x_1021_) == 0)
{
lean_object* v___x_1022_; 
v___x_1022_ = lean_box(0);
return v___x_1022_;
}
else
{
lean_object* v_key_1023_; lean_object* v_value_1024_; lean_object* v_tail_1025_; uint8_t v___x_1026_; 
v_key_1023_ = lean_ctor_get(v_x_1021_, 0);
v_value_1024_ = lean_ctor_get(v_x_1021_, 1);
v_tail_1025_ = lean_ctor_get(v_x_1021_, 2);
v___x_1026_ = l_Lean_ExprStructEq_beq(v_key_1023_, v_a_1020_);
if (v___x_1026_ == 0)
{
v_x_1021_ = v_tail_1025_;
goto _start;
}
else
{
lean_object* v___x_1028_; 
lean_inc(v_value_1024_);
v___x_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1028_, 0, v_value_1024_);
return v___x_1028_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg___boxed(lean_object* v_a_1029_, lean_object* v_x_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1029_, v_x_1030_);
lean_dec(v_x_1030_);
lean_dec_ref(v_a_1029_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(lean_object* v_m_1032_, lean_object* v_a_1033_){
_start:
{
lean_object* v_buckets_1034_; lean_object* v___x_1035_; uint64_t v___x_1036_; uint64_t v___x_1037_; uint64_t v___x_1038_; uint64_t v_fold_1039_; uint64_t v___x_1040_; uint64_t v___x_1041_; uint64_t v___x_1042_; size_t v___x_1043_; size_t v___x_1044_; size_t v___x_1045_; size_t v___x_1046_; size_t v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v_buckets_1034_ = lean_ctor_get(v_m_1032_, 1);
v___x_1035_ = lean_array_get_size(v_buckets_1034_);
v___x_1036_ = l_Lean_ExprStructEq_hash(v_a_1033_);
v___x_1037_ = 32ULL;
v___x_1038_ = lean_uint64_shift_right(v___x_1036_, v___x_1037_);
v_fold_1039_ = lean_uint64_xor(v___x_1036_, v___x_1038_);
v___x_1040_ = 16ULL;
v___x_1041_ = lean_uint64_shift_right(v_fold_1039_, v___x_1040_);
v___x_1042_ = lean_uint64_xor(v_fold_1039_, v___x_1041_);
v___x_1043_ = lean_uint64_to_usize(v___x_1042_);
v___x_1044_ = lean_usize_of_nat(v___x_1035_);
v___x_1045_ = ((size_t)1ULL);
v___x_1046_ = lean_usize_sub(v___x_1044_, v___x_1045_);
v___x_1047_ = lean_usize_land(v___x_1043_, v___x_1046_);
v___x_1048_ = lean_array_uget_borrowed(v_buckets_1034_, v___x_1047_);
v___x_1049_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1033_, v___x_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg___boxed(lean_object* v_m_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_m_1050_, v_a_1051_);
lean_dec_ref(v_a_1051_);
lean_dec_ref(v_m_1050_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(lean_object* v_x_1053_, lean_object* v_x_1054_, lean_object* v___y_1055_){
_start:
{
if (lean_obj_tag(v_x_1053_) == 0)
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = l_List_reverse___redArg(v_x_1054_);
v___x_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
return v___x_1058_;
}
else
{
lean_object* v_head_1059_; lean_object* v_tail_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1078_; 
v_head_1059_ = lean_ctor_get(v_x_1053_, 0);
v_tail_1060_ = lean_ctor_get(v_x_1053_, 1);
v_isSharedCheck_1078_ = !lean_is_exclusive(v_x_1053_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1062_ = v_x_1053_;
v_isShared_1063_ = v_isSharedCheck_1078_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_tail_1060_);
lean_inc(v_head_1059_);
lean_dec(v_x_1053_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1078_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_Meta_Closure_collectLevel___redArg(v_head_1059_, v___y_1055_);
if (lean_obj_tag(v___x_1064_) == 0)
{
lean_object* v_a_1065_; lean_object* v___x_1067_; 
v_a_1065_ = lean_ctor_get(v___x_1064_, 0);
lean_inc(v_a_1065_);
lean_dec_ref_known(v___x_1064_, 1);
if (v_isShared_1063_ == 0)
{
lean_ctor_set(v___x_1062_, 1, v_x_1054_);
lean_ctor_set(v___x_1062_, 0, v_a_1065_);
v___x_1067_ = v___x_1062_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1065_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v_x_1054_);
v___x_1067_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
v_x_1053_ = v_tail_1060_;
v_x_1054_ = v___x_1067_;
goto _start;
}
}
else
{
lean_object* v_a_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1077_; 
lean_del_object(v___x_1062_);
lean_dec(v_tail_1060_);
lean_dec(v_x_1054_);
v_a_1070_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1072_ = v___x_1064_;
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_a_1070_);
lean_dec(v___x_1064_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1075_; 
if (v_isShared_1073_ == 0)
{
v___x_1075_ = v___x_1072_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_a_1070_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg___boxed(lean_object* v_x_1079_, lean_object* v_x_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_x_1079_, v_x_1080_, v___y_1081_);
lean_dec(v___y_1081_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(lean_object* v___y_1084_){
_start:
{
lean_object* v___x_1086_; lean_object* v_ngen_1087_; lean_object* v_namePrefix_1088_; lean_object* v_idx_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1119_; 
v___x_1086_ = lean_st_ref_get(v___y_1084_);
v_ngen_1087_ = lean_ctor_get(v___x_1086_, 2);
lean_inc_ref(v_ngen_1087_);
lean_dec(v___x_1086_);
v_namePrefix_1088_ = lean_ctor_get(v_ngen_1087_, 0);
v_idx_1089_ = lean_ctor_get(v_ngen_1087_, 1);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_ngen_1087_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1091_ = v_ngen_1087_;
v_isShared_1092_ = v_isSharedCheck_1119_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_idx_1089_);
lean_inc(v_namePrefix_1088_);
lean_dec(v_ngen_1087_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1119_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v_r_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
lean_inc(v_idx_1089_);
lean_inc(v_namePrefix_1088_);
v_r_1093_ = l_Lean_Name_num___override(v_namePrefix_1088_, v_idx_1089_);
v___x_1094_ = lean_unsigned_to_nat(1u);
v___x_1095_ = lean_nat_add(v_idx_1089_, v___x_1094_);
lean_dec(v_idx_1089_);
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 1, v___x_1095_);
v___x_1097_ = v___x_1091_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_namePrefix_1088_);
lean_ctor_set(v_reuseFailAlloc_1118_, 1, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
lean_object* v___x_1098_; lean_object* v_env_1099_; lean_object* v_nextMacroScope_1100_; lean_object* v_auxDeclNGen_1101_; lean_object* v_traceState_1102_; lean_object* v_cache_1103_; lean_object* v_recordedDeps_1104_; lean_object* v_messages_1105_; lean_object* v_infoState_1106_; lean_object* v_snapshotTasks_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1116_; 
v___x_1098_ = lean_st_ref_take(v___y_1084_);
v_env_1099_ = lean_ctor_get(v___x_1098_, 0);
v_nextMacroScope_1100_ = lean_ctor_get(v___x_1098_, 1);
v_auxDeclNGen_1101_ = lean_ctor_get(v___x_1098_, 3);
v_traceState_1102_ = lean_ctor_get(v___x_1098_, 4);
v_cache_1103_ = lean_ctor_get(v___x_1098_, 5);
v_recordedDeps_1104_ = lean_ctor_get(v___x_1098_, 6);
v_messages_1105_ = lean_ctor_get(v___x_1098_, 7);
v_infoState_1106_ = lean_ctor_get(v___x_1098_, 8);
v_snapshotTasks_1107_ = lean_ctor_get(v___x_1098_, 9);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1116_ == 0)
{
lean_object* v_unused_1117_; 
v_unused_1117_ = lean_ctor_get(v___x_1098_, 2);
lean_dec(v_unused_1117_);
v___x_1109_ = v___x_1098_;
v_isShared_1110_ = v_isSharedCheck_1116_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_snapshotTasks_1107_);
lean_inc(v_infoState_1106_);
lean_inc(v_messages_1105_);
lean_inc(v_recordedDeps_1104_);
lean_inc(v_cache_1103_);
lean_inc(v_traceState_1102_);
lean_inc(v_auxDeclNGen_1101_);
lean_inc(v_nextMacroScope_1100_);
lean_inc(v_env_1099_);
lean_dec(v___x_1098_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1116_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 2, v___x_1097_);
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_env_1099_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v_nextMacroScope_1100_);
lean_ctor_set(v_reuseFailAlloc_1115_, 2, v___x_1097_);
lean_ctor_set(v_reuseFailAlloc_1115_, 3, v_auxDeclNGen_1101_);
lean_ctor_set(v_reuseFailAlloc_1115_, 4, v_traceState_1102_);
lean_ctor_set(v_reuseFailAlloc_1115_, 5, v_cache_1103_);
lean_ctor_set(v_reuseFailAlloc_1115_, 6, v_recordedDeps_1104_);
lean_ctor_set(v_reuseFailAlloc_1115_, 7, v_messages_1105_);
lean_ctor_set(v_reuseFailAlloc_1115_, 8, v_infoState_1106_);
lean_ctor_set(v_reuseFailAlloc_1115_, 9, v_snapshotTasks_1107_);
v___x_1112_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = lean_st_ref_put(v___y_1084_, v___x_1112_);
v___x_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1114_, 0, v_r_1093_);
return v___x_1114_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg___boxed(lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1120_);
lean_dec(v___y_1120_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v___x_1130_; lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
v___x_1130_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1128_);
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1130_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1130_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3___boxed(lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1(lean_object* v_e_1147_, lean_object* v_args_1148_, lean_object* v_x_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v___x_1157_; uint8_t v___x_1158_; uint8_t v___x_1159_; uint8_t v___x_1160_; lean_object* v___x_1161_; 
v___x_1157_ = l_Lean_mkAppN(v_e_1147_, v_args_1148_);
v___x_1158_ = 0;
v___x_1159_ = 1;
v___x_1160_ = 1;
v___x_1161_ = l_Lean_Meta_mkLambdaFVars(v_args_1148_, v___x_1157_, v___x_1158_, v___x_1159_, v___x_1158_, v___x_1159_, v___x_1160_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1___boxed(lean_object* v_e_1162_, lean_object* v_args_1163_, lean_object* v_x_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lean_Meta_Closure_collectExprAux___lam__1(v_e_1162_, v_args_1163_, v_x_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
lean_dec_ref(v_x_1164_);
lean_dec_ref(v_args_1163_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(lean_object* v_x_1173_, lean_object* v_x_1174_){
_start:
{
if (lean_obj_tag(v_x_1174_) == 0)
{
return v_x_1173_;
}
else
{
lean_object* v_key_1175_; lean_object* v_value_1176_; lean_object* v_tail_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1200_; 
v_key_1175_ = lean_ctor_get(v_x_1174_, 0);
v_value_1176_ = lean_ctor_get(v_x_1174_, 1);
v_tail_1177_ = lean_ctor_get(v_x_1174_, 2);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_x_1174_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1179_ = v_x_1174_;
v_isShared_1180_ = v_isSharedCheck_1200_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_tail_1177_);
lean_inc(v_value_1176_);
lean_inc(v_key_1175_);
lean_dec(v_x_1174_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1200_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1181_; uint64_t v___x_1182_; uint64_t v___x_1183_; uint64_t v___x_1184_; uint64_t v_fold_1185_; uint64_t v___x_1186_; uint64_t v___x_1187_; uint64_t v___x_1188_; size_t v___x_1189_; size_t v___x_1190_; size_t v___x_1191_; size_t v___x_1192_; size_t v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1196_; 
v___x_1181_ = lean_array_get_size(v_x_1173_);
v___x_1182_ = l_Lean_ExprStructEq_hash(v_key_1175_);
v___x_1183_ = 32ULL;
v___x_1184_ = lean_uint64_shift_right(v___x_1182_, v___x_1183_);
v_fold_1185_ = lean_uint64_xor(v___x_1182_, v___x_1184_);
v___x_1186_ = 16ULL;
v___x_1187_ = lean_uint64_shift_right(v_fold_1185_, v___x_1186_);
v___x_1188_ = lean_uint64_xor(v_fold_1185_, v___x_1187_);
v___x_1189_ = lean_uint64_to_usize(v___x_1188_);
v___x_1190_ = lean_usize_of_nat(v___x_1181_);
v___x_1191_ = ((size_t)1ULL);
v___x_1192_ = lean_usize_sub(v___x_1190_, v___x_1191_);
v___x_1193_ = lean_usize_land(v___x_1189_, v___x_1192_);
v___x_1194_ = lean_array_uget_borrowed(v_x_1173_, v___x_1193_);
lean_inc(v___x_1194_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 2, v___x_1194_);
v___x_1196_ = v___x_1179_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_key_1175_);
lean_ctor_set(v_reuseFailAlloc_1199_, 1, v_value_1176_);
lean_ctor_set(v_reuseFailAlloc_1199_, 2, v___x_1194_);
v___x_1196_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_object* v___x_1197_; 
v___x_1197_ = lean_array_uset(v_x_1173_, v___x_1193_, v___x_1196_);
v_x_1173_ = v___x_1197_;
v_x_1174_ = v_tail_1177_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(lean_object* v_i_1201_, lean_object* v_source_1202_, lean_object* v_target_1203_){
_start:
{
lean_object* v___x_1204_; uint8_t v___x_1205_; 
v___x_1204_ = lean_array_get_size(v_source_1202_);
v___x_1205_ = lean_nat_dec_lt(v_i_1201_, v___x_1204_);
if (v___x_1205_ == 0)
{
lean_dec_ref(v_source_1202_);
lean_dec(v_i_1201_);
return v_target_1203_;
}
else
{
lean_object* v_es_1206_; lean_object* v___x_1207_; lean_object* v_source_1208_; lean_object* v_target_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v_es_1206_ = lean_array_fget(v_source_1202_, v_i_1201_);
v___x_1207_ = lean_box(0);
v_source_1208_ = lean_array_fset(v_source_1202_, v_i_1201_, v___x_1207_);
v_target_1209_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(v_target_1203_, v_es_1206_);
v___x_1210_ = lean_unsigned_to_nat(1u);
v___x_1211_ = lean_nat_add(v_i_1201_, v___x_1210_);
lean_dec(v_i_1201_);
v_i_1201_ = v___x_1211_;
v_source_1202_ = v_source_1208_;
v_target_1203_ = v_target_1209_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(lean_object* v_data_1213_){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v_nbuckets_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1214_ = lean_array_get_size(v_data_1213_);
v___x_1215_ = lean_unsigned_to_nat(2u);
v_nbuckets_1216_ = lean_nat_mul(v___x_1214_, v___x_1215_);
v___x_1217_ = lean_unsigned_to_nat(0u);
v___x_1218_ = lean_box(0);
v___x_1219_ = lean_mk_array(v_nbuckets_1216_, v___x_1218_);
v___x_1220_ = lean_array_propagate_mark(v_data_1213_, v___x_1219_);
v___x_1221_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(v___x_1217_, v_data_1213_, v___x_1220_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(lean_object* v_a_1222_, lean_object* v_b_1223_, lean_object* v_x_1224_){
_start:
{
if (lean_obj_tag(v_x_1224_) == 0)
{
lean_dec(v_b_1223_);
lean_dec_ref(v_a_1222_);
return v_x_1224_;
}
else
{
lean_object* v_key_1225_; lean_object* v_value_1226_; lean_object* v_tail_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1239_; 
v_key_1225_ = lean_ctor_get(v_x_1224_, 0);
v_value_1226_ = lean_ctor_get(v_x_1224_, 1);
v_tail_1227_ = lean_ctor_get(v_x_1224_, 2);
v_isSharedCheck_1239_ = !lean_is_exclusive(v_x_1224_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1229_ = v_x_1224_;
v_isShared_1230_ = v_isSharedCheck_1239_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_tail_1227_);
lean_inc(v_value_1226_);
lean_inc(v_key_1225_);
lean_dec(v_x_1224_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1239_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
uint8_t v___x_1231_; 
v___x_1231_ = l_Lean_ExprStructEq_beq(v_key_1225_, v_a_1222_);
if (v___x_1231_ == 0)
{
lean_object* v___x_1232_; lean_object* v___x_1234_; 
v___x_1232_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1222_, v_b_1223_, v_tail_1227_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 2, v___x_1232_);
v___x_1234_ = v___x_1229_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_key_1225_);
lean_ctor_set(v_reuseFailAlloc_1235_, 1, v_value_1226_);
lean_ctor_set(v_reuseFailAlloc_1235_, 2, v___x_1232_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
else
{
lean_object* v___x_1237_; 
lean_dec(v_value_1226_);
lean_dec(v_key_1225_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 1, v_b_1223_);
lean_ctor_set(v___x_1229_, 0, v_a_1222_);
v___x_1237_ = v___x_1229_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1222_);
lean_ctor_set(v_reuseFailAlloc_1238_, 1, v_b_1223_);
lean_ctor_set(v_reuseFailAlloc_1238_, 2, v_tail_1227_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(lean_object* v_a_1240_, lean_object* v_x_1241_){
_start:
{
if (lean_obj_tag(v_x_1241_) == 0)
{
uint8_t v___x_1242_; 
v___x_1242_ = 0;
return v___x_1242_;
}
else
{
lean_object* v_key_1243_; lean_object* v_tail_1244_; uint8_t v___x_1245_; 
v_key_1243_ = lean_ctor_get(v_x_1241_, 0);
v_tail_1244_ = lean_ctor_get(v_x_1241_, 2);
v___x_1245_ = l_Lean_ExprStructEq_beq(v_key_1243_, v_a_1240_);
if (v___x_1245_ == 0)
{
v_x_1241_ = v_tail_1244_;
goto _start;
}
else
{
return v___x_1245_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg___boxed(lean_object* v_a_1247_, lean_object* v_x_1248_){
_start:
{
uint8_t v_res_1249_; lean_object* v_r_1250_; 
v_res_1249_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1247_, v_x_1248_);
lean_dec(v_x_1248_);
lean_dec_ref(v_a_1247_);
v_r_1250_ = lean_box(v_res_1249_);
return v_r_1250_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(lean_object* v_m_1251_, lean_object* v_a_1252_, lean_object* v_b_1253_){
_start:
{
lean_object* v_size_1254_; lean_object* v_buckets_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1298_; 
v_size_1254_ = lean_ctor_get(v_m_1251_, 0);
v_buckets_1255_ = lean_ctor_get(v_m_1251_, 1);
v_isSharedCheck_1298_ = !lean_is_exclusive(v_m_1251_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1257_ = v_m_1251_;
v_isShared_1258_ = v_isSharedCheck_1298_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_buckets_1255_);
lean_inc(v_size_1254_);
lean_dec(v_m_1251_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1298_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1259_; uint64_t v___x_1260_; uint64_t v___x_1261_; uint64_t v___x_1262_; uint64_t v_fold_1263_; uint64_t v___x_1264_; uint64_t v___x_1265_; uint64_t v___x_1266_; size_t v___x_1267_; size_t v___x_1268_; size_t v___x_1269_; size_t v___x_1270_; size_t v___x_1271_; lean_object* v_bkt_1272_; uint8_t v___x_1273_; 
v___x_1259_ = lean_array_get_size(v_buckets_1255_);
v___x_1260_ = l_Lean_ExprStructEq_hash(v_a_1252_);
v___x_1261_ = 32ULL;
v___x_1262_ = lean_uint64_shift_right(v___x_1260_, v___x_1261_);
v_fold_1263_ = lean_uint64_xor(v___x_1260_, v___x_1262_);
v___x_1264_ = 16ULL;
v___x_1265_ = lean_uint64_shift_right(v_fold_1263_, v___x_1264_);
v___x_1266_ = lean_uint64_xor(v_fold_1263_, v___x_1265_);
v___x_1267_ = lean_uint64_to_usize(v___x_1266_);
v___x_1268_ = lean_usize_of_nat(v___x_1259_);
v___x_1269_ = ((size_t)1ULL);
v___x_1270_ = lean_usize_sub(v___x_1268_, v___x_1269_);
v___x_1271_ = lean_usize_land(v___x_1267_, v___x_1270_);
v_bkt_1272_ = lean_array_uget_borrowed(v_buckets_1255_, v___x_1271_);
v___x_1273_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1252_, v_bkt_1272_);
if (v___x_1273_ == 0)
{
lean_object* v___x_1274_; lean_object* v_size_x27_1275_; lean_object* v___x_1276_; lean_object* v_buckets_x27_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; 
v___x_1274_ = lean_unsigned_to_nat(1u);
v_size_x27_1275_ = lean_nat_add(v_size_1254_, v___x_1274_);
lean_dec(v_size_1254_);
lean_inc(v_bkt_1272_);
v___x_1276_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1276_, 0, v_a_1252_);
lean_ctor_set(v___x_1276_, 1, v_b_1253_);
lean_ctor_set(v___x_1276_, 2, v_bkt_1272_);
v_buckets_x27_1277_ = lean_array_uset(v_buckets_1255_, v___x_1271_, v___x_1276_);
v___x_1278_ = lean_unsigned_to_nat(4u);
v___x_1279_ = lean_nat_mul(v_size_x27_1275_, v___x_1278_);
v___x_1280_ = lean_unsigned_to_nat(3u);
v___x_1281_ = lean_nat_div(v___x_1279_, v___x_1280_);
lean_dec(v___x_1279_);
v___x_1282_ = lean_array_get_size(v_buckets_x27_1277_);
v___x_1283_ = lean_nat_dec_le(v___x_1281_, v___x_1282_);
lean_dec(v___x_1281_);
if (v___x_1283_ == 0)
{
lean_object* v_val_1284_; lean_object* v___x_1286_; 
v_val_1284_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(v_buckets_x27_1277_);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 1, v_val_1284_);
lean_ctor_set(v___x_1257_, 0, v_size_x27_1275_);
v___x_1286_ = v___x_1257_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_size_x27_1275_);
lean_ctor_set(v_reuseFailAlloc_1287_, 1, v_val_1284_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
else
{
lean_object* v___x_1289_; 
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 1, v_buckets_x27_1277_);
lean_ctor_set(v___x_1257_, 0, v_size_x27_1275_);
v___x_1289_ = v___x_1257_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_size_x27_1275_);
lean_ctor_set(v_reuseFailAlloc_1290_, 1, v_buckets_x27_1277_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
else
{
lean_object* v___x_1291_; lean_object* v_buckets_x27_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1296_; 
lean_inc(v_bkt_1272_);
v___x_1291_ = lean_box(0);
v_buckets_x27_1292_ = lean_array_uset(v_buckets_1255_, v___x_1271_, v___x_1291_);
v___x_1293_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1252_, v_b_1253_, v_bkt_1272_);
v___x_1294_ = lean_array_uset(v_buckets_x27_1292_, v___x_1271_, v___x_1293_);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 1, v___x_1294_);
v___x_1296_ = v___x_1257_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_size_1254_);
lean_ctor_set(v_reuseFailAlloc_1297_, 1, v___x_1294_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux(lean_object* v_e_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_){
_start:
{
switch(lean_obj_tag(v_e_1299_))
{
case 11:
{
lean_object* v_typeName_1307_; lean_object* v_idx_1308_; lean_object* v_struct_1309_; lean_object* v___x_1310_; 
v_typeName_1307_ = lean_ctor_get(v_e_1299_, 0);
v_idx_1308_ = lean_ctor_get(v_e_1299_, 1);
v_struct_1309_ = lean_ctor_get(v_e_1299_, 2);
lean_inc_ref(v_struct_1309_);
v___x_1310_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_struct_1309_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1325_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1313_ = v___x_1310_;
v_isShared_1314_ = v_isSharedCheck_1325_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1310_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1325_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
size_t v___x_1315_; size_t v___x_1316_; uint8_t v___x_1317_; 
v___x_1315_ = lean_ptr_addr(v_struct_1309_);
v___x_1316_ = lean_ptr_addr(v_a_1311_);
v___x_1317_ = lean_usize_dec_eq(v___x_1315_, v___x_1316_);
if (v___x_1317_ == 0)
{
lean_object* v___x_1318_; lean_object* v___x_1320_; 
lean_inc(v_idx_1308_);
lean_inc(v_typeName_1307_);
lean_dec_ref_known(v_e_1299_, 3);
v___x_1318_ = l_Lean_Expr_proj___override(v_typeName_1307_, v_idx_1308_, v_a_1311_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1318_);
v___x_1320_ = v___x_1313_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___x_1318_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
else
{
lean_object* v___x_1323_; 
lean_dec(v_a_1311_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v_e_1299_);
v___x_1323_ = v___x_1313_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_e_1299_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_1299_, 3);
return v___x_1310_;
}
}
case 7:
{
lean_object* v_binderName_1326_; lean_object* v_binderType_1327_; lean_object* v_body_1328_; uint8_t v_binderInfo_1329_; lean_object* v___x_1330_; 
v_binderName_1326_ = lean_ctor_get(v_e_1299_, 0);
v_binderType_1327_ = lean_ctor_get(v_e_1299_, 1);
v_body_1328_ = lean_ctor_get(v_e_1299_, 2);
v_binderInfo_1329_ = lean_ctor_get_uint8(v_e_1299_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1327_);
v___x_1330_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_binderType_1327_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1332_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_a_1331_);
lean_dec_ref_known(v___x_1330_, 1);
lean_inc_ref(v_body_1328_);
v___x_1332_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1328_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1359_; 
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1335_ = v___x_1332_;
v_isShared_1336_ = v_isSharedCheck_1359_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1332_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1359_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
size_t v___x_1337_; size_t v___x_1338_; uint8_t v___x_1339_; 
v___x_1337_ = lean_ptr_addr(v_binderType_1327_);
v___x_1338_ = lean_ptr_addr(v_a_1331_);
v___x_1339_ = lean_usize_dec_eq(v___x_1337_, v___x_1338_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; lean_object* v___x_1342_; 
lean_inc(v_binderName_1326_);
lean_dec_ref_known(v_e_1299_, 3);
v___x_1340_ = l_Lean_Expr_forallE___override(v_binderName_1326_, v_a_1331_, v_a_1333_, v_binderInfo_1329_);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 0, v___x_1340_);
v___x_1342_ = v___x_1335_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___x_1340_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
else
{
size_t v___x_1344_; size_t v___x_1345_; uint8_t v___x_1346_; 
v___x_1344_ = lean_ptr_addr(v_body_1328_);
v___x_1345_ = lean_ptr_addr(v_a_1333_);
v___x_1346_ = lean_usize_dec_eq(v___x_1344_, v___x_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1349_; 
lean_inc(v_binderName_1326_);
lean_dec_ref_known(v_e_1299_, 3);
v___x_1347_ = l_Lean_Expr_forallE___override(v_binderName_1326_, v_a_1331_, v_a_1333_, v_binderInfo_1329_);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 0, v___x_1347_);
v___x_1349_ = v___x_1335_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
else
{
uint8_t v___x_1351_; 
v___x_1351_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1329_, v_binderInfo_1329_);
if (v___x_1351_ == 0)
{
lean_object* v___x_1352_; lean_object* v___x_1354_; 
lean_inc(v_binderName_1326_);
lean_dec_ref_known(v_e_1299_, 3);
v___x_1352_ = l_Lean_Expr_forallE___override(v_binderName_1326_, v_a_1331_, v_a_1333_, v_binderInfo_1329_);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 0, v___x_1352_);
v___x_1354_ = v___x_1335_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v___x_1352_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
else
{
lean_object* v___x_1357_; 
lean_dec(v_a_1333_);
lean_dec(v_a_1331_);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 0, v_e_1299_);
v___x_1357_ = v___x_1335_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_e_1299_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1331_);
lean_dec_ref_known(v_e_1299_, 3);
return v___x_1332_;
}
}
else
{
lean_dec_ref_known(v_e_1299_, 3);
return v___x_1330_;
}
}
case 6:
{
lean_object* v_binderName_1360_; lean_object* v_binderType_1361_; lean_object* v_body_1362_; uint8_t v_binderInfo_1363_; lean_object* v___x_1364_; 
v_binderName_1360_ = lean_ctor_get(v_e_1299_, 0);
v_binderType_1361_ = lean_ctor_get(v_e_1299_, 1);
v_body_1362_ = lean_ctor_get(v_e_1299_, 2);
v_binderInfo_1363_ = lean_ctor_get_uint8(v_e_1299_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1361_);
v___x_1364_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_binderType_1361_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v_a_1365_; lean_object* v___x_1366_; 
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_a_1365_);
lean_dec_ref_known(v___x_1364_, 1);
lean_inc_ref(v_body_1362_);
v___x_1366_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1362_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1393_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1369_ = v___x_1366_;
v_isShared_1370_ = v_isSharedCheck_1393_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1366_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1393_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
size_t v___x_1371_; size_t v___x_1372_; uint8_t v___x_1373_; 
v___x_1371_ = lean_ptr_addr(v_binderType_1361_);
v___x_1372_ = lean_ptr_addr(v_a_1365_);
v___x_1373_ = lean_usize_dec_eq(v___x_1371_, v___x_1372_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1374_; lean_object* v___x_1376_; 
lean_inc(v_binderName_1360_);
lean_dec_ref_known(v_e_1299_, 3);
v___x_1374_ = l_Lean_Expr_lam___override(v_binderName_1360_, v_a_1365_, v_a_1367_, v_binderInfo_1363_);
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 0, v___x_1374_);
v___x_1376_ = v___x_1369_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1374_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
else
{
size_t v___x_1378_; size_t v___x_1379_; uint8_t v___x_1380_; 
v___x_1378_ = lean_ptr_addr(v_body_1362_);
v___x_1379_ = lean_ptr_addr(v_a_1367_);
v___x_1380_ = lean_usize_dec_eq(v___x_1378_, v___x_1379_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; lean_object* v___x_1383_; 
lean_inc(v_binderName_1360_);
lean_dec_ref_known(v_e_1299_, 3);
v___x_1381_ = l_Lean_Expr_lam___override(v_binderName_1360_, v_a_1365_, v_a_1367_, v_binderInfo_1363_);
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 0, v___x_1381_);
v___x_1383_ = v___x_1369_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
else
{
uint8_t v___x_1385_; 
v___x_1385_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1363_, v_binderInfo_1363_);
if (v___x_1385_ == 0)
{
lean_object* v___x_1386_; lean_object* v___x_1388_; 
lean_inc(v_binderName_1360_);
lean_dec_ref_known(v_e_1299_, 3);
v___x_1386_ = l_Lean_Expr_lam___override(v_binderName_1360_, v_a_1365_, v_a_1367_, v_binderInfo_1363_);
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 0, v___x_1386_);
v___x_1388_ = v___x_1369_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v___x_1386_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
else
{
lean_object* v___x_1391_; 
lean_dec(v_a_1367_);
lean_dec(v_a_1365_);
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 0, v_e_1299_);
v___x_1391_ = v___x_1369_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_e_1299_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1365_);
lean_dec_ref_known(v_e_1299_, 3);
return v___x_1366_;
}
}
else
{
lean_dec_ref_known(v_e_1299_, 3);
return v___x_1364_;
}
}
case 8:
{
lean_object* v_declName_1394_; lean_object* v_type_1395_; lean_object* v_value_1396_; lean_object* v_body_1397_; uint8_t v_nondep_1398_; lean_object* v___x_1399_; 
v_declName_1394_ = lean_ctor_get(v_e_1299_, 0);
v_type_1395_ = lean_ctor_get(v_e_1299_, 1);
v_value_1396_ = lean_ctor_get(v_e_1299_, 2);
v_body_1397_ = lean_ctor_get(v_e_1299_, 3);
v_nondep_1398_ = lean_ctor_get_uint8(v_e_1299_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1395_);
v___x_1399_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_type_1395_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v_a_1400_; lean_object* v___x_1401_; 
v_a_1400_ = lean_ctor_get(v___x_1399_, 0);
lean_inc(v_a_1400_);
lean_dec_ref_known(v___x_1399_, 1);
lean_inc_ref(v_value_1396_);
v___x_1401_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_value_1396_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v_a_1402_; lean_object* v___x_1403_; 
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
lean_inc(v_a_1402_);
lean_dec_ref_known(v___x_1401_, 1);
lean_inc_ref(v_body_1397_);
v___x_1403_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1397_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1432_; 
v_a_1404_ = lean_ctor_get(v___x_1403_, 0);
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1432_ == 0)
{
v___x_1406_ = v___x_1403_;
v_isShared_1407_ = v_isSharedCheck_1432_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1403_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1432_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
size_t v___x_1408_; size_t v___x_1409_; uint8_t v___x_1410_; 
v___x_1408_ = lean_ptr_addr(v_type_1395_);
v___x_1409_ = lean_ptr_addr(v_a_1400_);
v___x_1410_ = lean_usize_dec_eq(v___x_1408_, v___x_1409_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1411_; lean_object* v___x_1413_; 
lean_inc(v_declName_1394_);
lean_dec_ref_known(v_e_1299_, 4);
v___x_1411_ = l_Lean_Expr_letE___override(v_declName_1394_, v_a_1400_, v_a_1402_, v_a_1404_, v_nondep_1398_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 0, v___x_1411_);
v___x_1413_ = v___x_1406_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
else
{
size_t v___x_1415_; size_t v___x_1416_; uint8_t v___x_1417_; 
v___x_1415_ = lean_ptr_addr(v_value_1396_);
v___x_1416_ = lean_ptr_addr(v_a_1402_);
v___x_1417_ = lean_usize_dec_eq(v___x_1415_, v___x_1416_);
if (v___x_1417_ == 0)
{
lean_object* v___x_1418_; lean_object* v___x_1420_; 
lean_inc(v_declName_1394_);
lean_dec_ref_known(v_e_1299_, 4);
v___x_1418_ = l_Lean_Expr_letE___override(v_declName_1394_, v_a_1400_, v_a_1402_, v_a_1404_, v_nondep_1398_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 0, v___x_1418_);
v___x_1420_ = v___x_1406_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
else
{
size_t v___x_1422_; size_t v___x_1423_; uint8_t v___x_1424_; 
v___x_1422_ = lean_ptr_addr(v_body_1397_);
v___x_1423_ = lean_ptr_addr(v_a_1404_);
v___x_1424_ = lean_usize_dec_eq(v___x_1422_, v___x_1423_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1425_; lean_object* v___x_1427_; 
lean_inc(v_declName_1394_);
lean_dec_ref_known(v_e_1299_, 4);
v___x_1425_ = l_Lean_Expr_letE___override(v_declName_1394_, v_a_1400_, v_a_1402_, v_a_1404_, v_nondep_1398_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 0, v___x_1425_);
v___x_1427_ = v___x_1406_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1425_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
else
{
lean_object* v___x_1430_; 
lean_dec(v_a_1404_);
lean_dec(v_a_1402_);
lean_dec(v_a_1400_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 0, v_e_1299_);
v___x_1430_ = v___x_1406_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_e_1299_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1402_);
lean_dec(v_a_1400_);
lean_dec_ref_known(v_e_1299_, 4);
return v___x_1403_;
}
}
else
{
lean_dec(v_a_1400_);
lean_dec_ref_known(v_e_1299_, 4);
return v___x_1401_;
}
}
else
{
lean_dec_ref_known(v_e_1299_, 4);
return v___x_1399_;
}
}
case 5:
{
lean_object* v_fn_1433_; lean_object* v_arg_1434_; lean_object* v___x_1435_; 
v_fn_1433_ = lean_ctor_get(v_e_1299_, 0);
v_arg_1434_ = lean_ctor_get(v_e_1299_, 1);
lean_inc_ref(v_fn_1433_);
v___x_1435_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_fn_1433_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_object* v_a_1436_; lean_object* v___x_1437_; 
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc(v_a_1436_);
lean_dec_ref_known(v___x_1435_, 1);
lean_inc_ref(v_arg_1434_);
v___x_1437_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_arg_1434_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1459_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1440_ = v___x_1437_;
v_isShared_1441_ = v_isSharedCheck_1459_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1437_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1459_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
size_t v___x_1442_; size_t v___x_1443_; uint8_t v___x_1444_; 
v___x_1442_ = lean_ptr_addr(v_fn_1433_);
v___x_1443_ = lean_ptr_addr(v_a_1436_);
v___x_1444_ = lean_usize_dec_eq(v___x_1442_, v___x_1443_);
if (v___x_1444_ == 0)
{
lean_object* v___x_1445_; lean_object* v___x_1447_; 
lean_dec_ref_known(v_e_1299_, 2);
v___x_1445_ = l_Lean_Expr_app___override(v_a_1436_, v_a_1438_);
if (v_isShared_1441_ == 0)
{
lean_ctor_set(v___x_1440_, 0, v___x_1445_);
v___x_1447_ = v___x_1440_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1445_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
else
{
size_t v___x_1449_; size_t v___x_1450_; uint8_t v___x_1451_; 
v___x_1449_ = lean_ptr_addr(v_arg_1434_);
v___x_1450_ = lean_ptr_addr(v_a_1438_);
v___x_1451_ = lean_usize_dec_eq(v___x_1449_, v___x_1450_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; lean_object* v___x_1454_; 
lean_dec_ref_known(v_e_1299_, 2);
v___x_1452_ = l_Lean_Expr_app___override(v_a_1436_, v_a_1438_);
if (v_isShared_1441_ == 0)
{
lean_ctor_set(v___x_1440_, 0, v___x_1452_);
v___x_1454_ = v___x_1440_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1452_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
else
{
lean_object* v___x_1457_; 
lean_dec(v_a_1438_);
lean_dec(v_a_1436_);
if (v_isShared_1441_ == 0)
{
lean_ctor_set(v___x_1440_, 0, v_e_1299_);
v___x_1457_ = v___x_1440_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_e_1299_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
}
else
{
lean_dec(v_a_1436_);
lean_dec_ref_known(v_e_1299_, 2);
return v___x_1437_;
}
}
else
{
lean_dec_ref_known(v_e_1299_, 2);
return v___x_1435_;
}
}
case 10:
{
lean_object* v_data_1460_; lean_object* v_expr_1461_; lean_object* v___x_1462_; 
v_data_1460_ = lean_ctor_get(v_e_1299_, 0);
v_expr_1461_ = lean_ctor_get(v_e_1299_, 1);
lean_inc_ref(v_expr_1461_);
v___x_1462_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_expr_1461_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1477_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1465_ = v___x_1462_;
v_isShared_1466_ = v_isSharedCheck_1477_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_dec(v___x_1462_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1477_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
size_t v___x_1467_; size_t v___x_1468_; uint8_t v___x_1469_; 
v___x_1467_ = lean_ptr_addr(v_expr_1461_);
v___x_1468_ = lean_ptr_addr(v_a_1463_);
v___x_1469_ = lean_usize_dec_eq(v___x_1467_, v___x_1468_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; lean_object* v___x_1472_; 
lean_inc(v_data_1460_);
lean_dec_ref_known(v_e_1299_, 2);
v___x_1470_ = l_Lean_Expr_mdata___override(v_data_1460_, v_a_1463_);
if (v_isShared_1466_ == 0)
{
lean_ctor_set(v___x_1465_, 0, v___x_1470_);
v___x_1472_ = v___x_1465_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v___x_1470_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
else
{
lean_object* v___x_1475_; 
lean_dec(v_a_1463_);
if (v_isShared_1466_ == 0)
{
lean_ctor_set(v___x_1465_, 0, v_e_1299_);
v___x_1475_ = v___x_1465_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_e_1299_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_1299_, 2);
return v___x_1462_;
}
}
case 3:
{
lean_object* v_u_1478_; lean_object* v___x_1479_; 
v_u_1478_ = lean_ctor_get(v_e_1299_, 0);
lean_inc(v_u_1478_);
v___x_1479_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_1478_, v_a_1301_);
if (lean_obj_tag(v___x_1479_) == 0)
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1494_; 
v_a_1480_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1482_ = v___x_1479_;
v_isShared_1483_ = v_isSharedCheck_1494_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1479_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1494_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
size_t v___x_1484_; size_t v___x_1485_; uint8_t v___x_1486_; 
v___x_1484_ = lean_ptr_addr(v_u_1478_);
v___x_1485_ = lean_ptr_addr(v_a_1480_);
v___x_1486_ = lean_usize_dec_eq(v___x_1484_, v___x_1485_);
if (v___x_1486_ == 0)
{
lean_object* v___x_1487_; lean_object* v___x_1489_; 
lean_dec_ref_known(v_e_1299_, 1);
v___x_1487_ = l_Lean_Expr_sort___override(v_a_1480_);
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 0, v___x_1487_);
v___x_1489_ = v___x_1482_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1487_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
else
{
lean_object* v___x_1492_; 
lean_dec(v_a_1480_);
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 0, v_e_1299_);
v___x_1492_ = v___x_1482_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_e_1299_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
else
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
lean_dec_ref_known(v_e_1299_, 1);
v_a_1495_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___x_1479_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1479_);
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
case 4:
{
lean_object* v_declName_1503_; lean_object* v_us_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v_declName_1503_ = lean_ctor_get(v_e_1299_, 0);
v_us_1504_ = lean_ctor_get(v_e_1299_, 1);
v___x_1505_ = lean_box(0);
lean_inc(v_us_1504_);
v___x_1506_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_us_1504_, v___x_1505_, v_a_1301_);
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1519_; 
v_a_1507_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1509_ = v___x_1506_;
v_isShared_1510_ = v_isSharedCheck_1519_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1506_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1519_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
uint8_t v___x_1511_; 
v___x_1511_ = l_ptrEqList___redArg(v_us_1504_, v_a_1507_);
if (v___x_1511_ == 0)
{
lean_object* v___x_1512_; lean_object* v___x_1514_; 
lean_inc(v_declName_1503_);
lean_dec_ref_known(v_e_1299_, 2);
v___x_1512_ = l_Lean_Expr_const___override(v_declName_1503_, v_a_1507_);
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 0, v___x_1512_);
v___x_1514_ = v___x_1509_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1512_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
else
{
lean_object* v___x_1517_; 
lean_dec(v_a_1507_);
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 0, v_e_1299_);
v___x_1517_ = v___x_1509_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_e_1299_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
lean_dec_ref_known(v_e_1299_, 2);
v_a_1520_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1506_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1506_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_1528_; lean_object* v___f_1529_; lean_object* v___x_1530_; 
v_mvarId_1528_ = lean_ctor_get(v_e_1299_, 0);
lean_inc_ref(v_e_1299_);
v___f_1529_ = lean_alloc_closure((void*)(l_Lean_Meta_Closure_collectExprAux___lam__1___boxed), 10, 1);
lean_closure_set(v___f_1529_, 0, v_e_1299_);
lean_inc(v_mvarId_1528_);
v___x_1530_ = l_Lean_MVarId_getDecl(v_mvarId_1528_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v_type_1532_; lean_object* v___x_1533_; 
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1530_, 1);
v_type_1532_ = lean_ctor_get(v_a_1531_, 2);
lean_inc_ref_n(v_type_1532_, 2);
lean_dec(v_a_1531_);
v___x_1533_ = l_Lean_Meta_Closure_preprocess(v_type_1532_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1535_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref_known(v___x_1533_, 1);
v___x_1535_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_a_1534_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v_a_1536_; lean_object* v___x_1537_; 
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref_known(v___x_1535_, 1);
v___x_1537_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v_a_1538_; lean_object* v___x_1539_; 
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
lean_inc(v_a_1538_);
lean_dec_ref_known(v___x_1537_, 1);
v___x_1539_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v_a_1301_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1601_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1542_ = v___x_1539_;
v_isShared_1543_ = v_isSharedCheck_1601_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1539_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1601_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v_e_x27_1545_; lean_object* v___y_1546_; lean_object* v___x_1578_; 
v___x_1578_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_1528_, v_a_1303_);
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_object* v_a_1579_; 
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1579_);
lean_dec_ref_known(v___x_1578_, 1);
if (lean_obj_tag(v_a_1579_) == 1)
{
lean_object* v_val_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1592_; 
lean_dec_ref_known(v_e_1299_, 1);
v_val_1580_ = lean_ctor_get(v_a_1579_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v_a_1579_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1582_ = v_a_1579_;
v_isShared_1583_ = v_isSharedCheck_1592_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_val_1580_);
lean_dec(v_a_1579_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1592_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v_fvars_1584_; lean_object* v___x_1585_; lean_object* v___x_1587_; 
v_fvars_1584_ = lean_ctor_get(v_val_1580_, 0);
lean_inc_ref(v_fvars_1584_);
lean_dec(v_val_1580_);
v___x_1585_ = lean_array_get_size(v_fvars_1584_);
lean_dec_ref(v_fvars_1584_);
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 0, v___x_1585_);
v___x_1587_ = v___x_1582_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v___x_1585_);
v___x_1587_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
uint8_t v___x_1588_; lean_object* v___x_1589_; 
v___x_1588_ = 0;
v___x_1589_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_1532_, v___x_1587_, v___f_1529_, v___x_1588_, v___x_1588_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
lean_inc(v_a_1590_);
lean_dec_ref_known(v___x_1589_, 1);
v_e_x27_1545_ = v_a_1590_;
v___y_1546_ = v_a_1301_;
goto v___jp_1544_;
}
else
{
lean_del_object(v___x_1542_);
lean_dec(v_a_1540_);
lean_dec(v_a_1538_);
lean_dec(v_a_1536_);
return v___x_1589_;
}
}
}
}
else
{
lean_dec(v_a_1579_);
lean_dec_ref(v_type_1532_);
lean_dec_ref(v___f_1529_);
v_e_x27_1545_ = v_e_1299_;
v___y_1546_ = v_a_1301_;
goto v___jp_1544_;
}
}
else
{
lean_object* v_a_1593_; lean_object* v___x_1595_; uint8_t v_isShared_1596_; uint8_t v_isSharedCheck_1600_; 
lean_del_object(v___x_1542_);
lean_dec(v_a_1540_);
lean_dec(v_a_1538_);
lean_dec(v_a_1536_);
lean_dec_ref(v_type_1532_);
lean_dec_ref(v___f_1529_);
lean_dec_ref_known(v_e_1299_, 1);
v_a_1593_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1595_ = v___x_1578_;
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
else
{
lean_inc(v_a_1593_);
lean_dec(v___x_1578_);
v___x_1595_ = lean_box(0);
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
v_resetjp_1594_:
{
lean_object* v___x_1598_; 
if (v_isShared_1596_ == 0)
{
v___x_1598_ = v___x_1595_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_a_1593_);
v___x_1598_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
return v___x_1598_;
}
}
}
v___jp_1544_:
{
lean_object* v___x_1547_; lean_object* v_visitedLevel_1548_; lean_object* v_visitedExpr_1549_; lean_object* v_levelParams_1550_; lean_object* v_nextLevelIdx_1551_; lean_object* v_levelArgs_1552_; lean_object* v_newLocalDecls_1553_; lean_object* v_newLocalDeclsForMVars_1554_; lean_object* v_newLetDecls_1555_; lean_object* v_nextExprIdx_1556_; lean_object* v_exprMVarArgs_1557_; lean_object* v_exprFVarArgs_1558_; lean_object* v_toProcess_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1577_; 
v___x_1547_ = lean_st_ref_take(v___y_1546_);
v_visitedLevel_1548_ = lean_ctor_get(v___x_1547_, 0);
v_visitedExpr_1549_ = lean_ctor_get(v___x_1547_, 1);
v_levelParams_1550_ = lean_ctor_get(v___x_1547_, 2);
v_nextLevelIdx_1551_ = lean_ctor_get(v___x_1547_, 3);
v_levelArgs_1552_ = lean_ctor_get(v___x_1547_, 4);
v_newLocalDecls_1553_ = lean_ctor_get(v___x_1547_, 5);
v_newLocalDeclsForMVars_1554_ = lean_ctor_get(v___x_1547_, 6);
v_newLetDecls_1555_ = lean_ctor_get(v___x_1547_, 7);
v_nextExprIdx_1556_ = lean_ctor_get(v___x_1547_, 8);
v_exprMVarArgs_1557_ = lean_ctor_get(v___x_1547_, 9);
v_exprFVarArgs_1558_ = lean_ctor_get(v___x_1547_, 10);
v_toProcess_1559_ = lean_ctor_get(v___x_1547_, 11);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1561_ = v___x_1547_;
v_isShared_1562_ = v_isSharedCheck_1577_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_toProcess_1559_);
lean_inc(v_exprFVarArgs_1558_);
lean_inc(v_exprMVarArgs_1557_);
lean_inc(v_nextExprIdx_1556_);
lean_inc(v_newLetDecls_1555_);
lean_inc(v_newLocalDeclsForMVars_1554_);
lean_inc(v_newLocalDecls_1553_);
lean_inc(v_levelArgs_1552_);
lean_inc(v_nextLevelIdx_1551_);
lean_inc(v_levelParams_1550_);
lean_inc(v_visitedExpr_1549_);
lean_inc(v_visitedLevel_1548_);
lean_dec(v___x_1547_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1577_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1563_; uint8_t v___x_1564_; uint8_t v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1570_; 
v___x_1563_ = lean_unsigned_to_nat(0u);
v___x_1564_ = 0;
v___x_1565_ = 0;
lean_inc(v_a_1538_);
v___x_1566_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1566_, 0, v___x_1563_);
lean_ctor_set(v___x_1566_, 1, v_a_1538_);
lean_ctor_set(v___x_1566_, 2, v_a_1540_);
lean_ctor_set(v___x_1566_, 3, v_a_1536_);
lean_ctor_set_uint8(v___x_1566_, sizeof(void*)*4, v___x_1564_);
lean_ctor_set_uint8(v___x_1566_, sizeof(void*)*4 + 1, v___x_1565_);
v___x_1567_ = lean_array_push(v_newLocalDeclsForMVars_1554_, v___x_1566_);
v___x_1568_ = lean_array_push(v_exprMVarArgs_1557_, v_e_x27_1545_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 9, v___x_1568_);
lean_ctor_set(v___x_1561_, 6, v___x_1567_);
v___x_1570_ = v___x_1561_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_visitedLevel_1548_);
lean_ctor_set(v_reuseFailAlloc_1576_, 1, v_visitedExpr_1549_);
lean_ctor_set(v_reuseFailAlloc_1576_, 2, v_levelParams_1550_);
lean_ctor_set(v_reuseFailAlloc_1576_, 3, v_nextLevelIdx_1551_);
lean_ctor_set(v_reuseFailAlloc_1576_, 4, v_levelArgs_1552_);
lean_ctor_set(v_reuseFailAlloc_1576_, 5, v_newLocalDecls_1553_);
lean_ctor_set(v_reuseFailAlloc_1576_, 6, v___x_1567_);
lean_ctor_set(v_reuseFailAlloc_1576_, 7, v_newLetDecls_1555_);
lean_ctor_set(v_reuseFailAlloc_1576_, 8, v_nextExprIdx_1556_);
lean_ctor_set(v_reuseFailAlloc_1576_, 9, v___x_1568_);
lean_ctor_set(v_reuseFailAlloc_1576_, 10, v_exprFVarArgs_1558_);
lean_ctor_set(v_reuseFailAlloc_1576_, 11, v_toProcess_1559_);
v___x_1570_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1574_; 
v___x_1571_ = lean_st_ref_put(v___y_1546_, v___x_1570_);
v___x_1572_ = l_Lean_mkFVar(v_a_1538_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 0, v___x_1572_);
v___x_1574_ = v___x_1542_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v___x_1572_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
}
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
lean_dec(v_a_1538_);
lean_dec(v_a_1536_);
lean_dec_ref(v_type_1532_);
lean_dec_ref(v___f_1529_);
lean_dec_ref_known(v_e_1299_, 1);
v_a_1602_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1539_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1539_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1602_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
else
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
lean_dec(v_a_1536_);
lean_dec_ref(v_type_1532_);
lean_dec_ref(v___f_1529_);
lean_dec_ref_known(v_e_1299_, 1);
v_a_1610_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1612_ = v___x_1537_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1537_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1615_; 
if (v_isShared_1613_ == 0)
{
v___x_1615_ = v___x_1612_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1610_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
else
{
lean_dec_ref(v_type_1532_);
lean_dec_ref(v___f_1529_);
lean_dec_ref_known(v_e_1299_, 1);
return v___x_1535_;
}
}
else
{
lean_dec_ref(v_type_1532_);
lean_dec_ref(v___f_1529_);
lean_dec_ref_known(v_e_1299_, 1);
return v___x_1533_;
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
lean_dec_ref(v___f_1529_);
lean_dec_ref_known(v_e_1299_, 1);
v_a_1618_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1530_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1530_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_1626_; lean_object* v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; uint8_t v___x_1663_; lean_object* v___x_1664_; 
v_fvarId_1626_ = lean_ctor_get(v_e_1299_, 0);
lean_inc_n(v_fvarId_1626_, 2);
lean_dec_ref_known(v_e_1299_, 1);
v___x_1663_ = 0;
v___x_1664_ = l_Lean_FVarId_getValue_x3f___redArg(v_fvarId_1626_, v___x_1663_, v_a_1302_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1664_) == 0)
{
uint8_t v_zetaDelta_1665_; 
v_zetaDelta_1665_ = lean_ctor_get_uint8(v_a_1300_, 0);
if (v_zetaDelta_1665_ == 1)
{
lean_object* v_a_1666_; 
v_a_1666_ = lean_ctor_get(v___x_1664_, 0);
lean_inc(v_a_1666_);
lean_dec_ref_known(v___x_1664_, 1);
if (lean_obj_tag(v_a_1666_) == 1)
{
lean_object* v_val_1667_; lean_object* v___x_1668_; 
lean_dec(v_fvarId_1626_);
v_val_1667_ = lean_ctor_get(v_a_1666_, 0);
lean_inc(v_val_1667_);
lean_dec_ref_known(v_a_1666_, 1);
v___x_1668_ = l_Lean_Meta_Closure_preprocess(v_val_1667_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1669_; lean_object* v___x_1670_; 
v_a_1669_ = lean_ctor_get(v___x_1668_, 0);
lean_inc(v_a_1669_);
lean_dec_ref_known(v___x_1668_, 1);
v___x_1670_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_a_1669_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
return v___x_1670_;
}
else
{
return v___x_1668_;
}
}
else
{
lean_dec(v_a_1666_);
v___y_1628_ = v_a_1300_;
v___y_1629_ = v_a_1301_;
v___y_1630_ = v_a_1302_;
v___y_1631_ = v_a_1303_;
v___y_1632_ = v_a_1304_;
v___y_1633_ = v_a_1305_;
goto v___jp_1627_;
}
}
else
{
lean_dec_ref_known(v___x_1664_, 1);
v___y_1628_ = v_a_1300_;
v___y_1629_ = v_a_1301_;
v___y_1630_ = v_a_1302_;
v___y_1631_ = v_a_1303_;
v___y_1632_ = v_a_1304_;
v___y_1633_ = v_a_1305_;
goto v___jp_1627_;
}
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1678_; 
lean_dec(v_fvarId_1626_);
v_a_1671_ = lean_ctor_get(v___x_1664_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1673_ = v___x_1664_;
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v___x_1664_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1676_; 
if (v_isShared_1674_ == 0)
{
v___x_1676_ = v___x_1673_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1671_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
v___jp_1627_:
{
lean_object* v___x_1634_; 
v___x_1634_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v_a_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
v_a_1635_ = lean_ctor_get(v___x_1634_, 0);
lean_inc_n(v_a_1635_, 2);
lean_dec_ref_known(v___x_1634_, 1);
v___x_1636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1636_, 0, v_fvarId_1626_);
lean_ctor_set(v___x_1636_, 1, v_a_1635_);
v___x_1637_ = l_Lean_Meta_Closure_pushToProcess___redArg(v___x_1636_, v___y_1629_);
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1645_; 
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1645_ == 0)
{
lean_object* v_unused_1646_; 
v_unused_1646_ = lean_ctor_get(v___x_1637_, 0);
lean_dec(v_unused_1646_);
v___x_1639_ = v___x_1637_;
v_isShared_1640_ = v_isSharedCheck_1645_;
goto v_resetjp_1638_;
}
else
{
lean_dec(v___x_1637_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1645_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1641_; lean_object* v___x_1643_; 
v___x_1641_ = l_Lean_mkFVar(v_a_1635_);
if (v_isShared_1640_ == 0)
{
lean_ctor_set(v___x_1639_, 0, v___x_1641_);
v___x_1643_ = v___x_1639_;
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
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
lean_dec(v_a_1635_);
v_a_1647_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1649_ = v___x_1637_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1637_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1650_ == 0)
{
v___x_1652_ = v___x_1649_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1647_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
else
{
lean_object* v_a_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1662_; 
lean_dec(v_fvarId_1626_);
v_a_1655_ = lean_ctor_get(v___x_1634_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1634_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1657_ = v___x_1634_;
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_a_1655_);
lean_dec(v___x_1634_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1660_; 
if (v_isShared_1658_ == 0)
{
v___x_1660_ = v___x_1657_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_a_1655_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
}
}
}
default: 
{
lean_object* v___x_1679_; 
v___x_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1679_, 0, v_e_1299_);
return v___x_1679_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0(lean_object* v_e_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_){
_start:
{
uint8_t v___x_1731_; 
v___x_1731_ = l_Lean_Expr_hasLevelParam(v_e_1680_);
if (v___x_1731_ == 0)
{
uint8_t v___x_1732_; 
v___x_1732_ = l_Lean_Expr_hasFVar(v_e_1680_);
if (v___x_1732_ == 0)
{
uint8_t v___x_1733_; 
v___x_1733_ = l_Lean_Expr_hasMVar(v_e_1680_);
if (v___x_1733_ == 0)
{
lean_object* v___x_1734_; 
v___x_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1734_, 0, v_e_1680_);
return v___x_1734_;
}
else
{
goto v___jp_1688_;
}
}
else
{
goto v___jp_1688_;
}
}
else
{
goto v___jp_1688_;
}
v___jp_1688_:
{
lean_object* v___x_1689_; lean_object* v_visitedExpr_1690_; lean_object* v___x_1691_; 
v___x_1689_ = lean_st_ref_get(v___y_1682_);
v_visitedExpr_1690_ = lean_ctor_get(v___x_1689_, 1);
lean_inc_ref(v_visitedExpr_1690_);
lean_dec(v___x_1689_);
v___x_1691_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_visitedExpr_1690_, v_e_1680_);
lean_dec_ref(v_visitedExpr_1690_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v___x_1692_; 
lean_inc_ref(v_e_1680_);
v___x_1692_ = l_Lean_Meta_Closure_collectExprAux(v_e_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1722_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1695_ = v___x_1692_;
v_isShared_1696_ = v_isSharedCheck_1722_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1722_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1697_; lean_object* v_visitedLevel_1698_; lean_object* v_visitedExpr_1699_; lean_object* v_levelParams_1700_; lean_object* v_nextLevelIdx_1701_; lean_object* v_levelArgs_1702_; lean_object* v_newLocalDecls_1703_; lean_object* v_newLocalDeclsForMVars_1704_; lean_object* v_newLetDecls_1705_; lean_object* v_nextExprIdx_1706_; lean_object* v_exprMVarArgs_1707_; lean_object* v_exprFVarArgs_1708_; lean_object* v_toProcess_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1721_; 
v___x_1697_ = lean_st_ref_take(v___y_1682_);
v_visitedLevel_1698_ = lean_ctor_get(v___x_1697_, 0);
v_visitedExpr_1699_ = lean_ctor_get(v___x_1697_, 1);
v_levelParams_1700_ = lean_ctor_get(v___x_1697_, 2);
v_nextLevelIdx_1701_ = lean_ctor_get(v___x_1697_, 3);
v_levelArgs_1702_ = lean_ctor_get(v___x_1697_, 4);
v_newLocalDecls_1703_ = lean_ctor_get(v___x_1697_, 5);
v_newLocalDeclsForMVars_1704_ = lean_ctor_get(v___x_1697_, 6);
v_newLetDecls_1705_ = lean_ctor_get(v___x_1697_, 7);
v_nextExprIdx_1706_ = lean_ctor_get(v___x_1697_, 8);
v_exprMVarArgs_1707_ = lean_ctor_get(v___x_1697_, 9);
v_exprFVarArgs_1708_ = lean_ctor_get(v___x_1697_, 10);
v_toProcess_1709_ = lean_ctor_get(v___x_1697_, 11);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1711_ = v___x_1697_;
v_isShared_1712_ = v_isSharedCheck_1721_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_toProcess_1709_);
lean_inc(v_exprFVarArgs_1708_);
lean_inc(v_exprMVarArgs_1707_);
lean_inc(v_nextExprIdx_1706_);
lean_inc(v_newLetDecls_1705_);
lean_inc(v_newLocalDeclsForMVars_1704_);
lean_inc(v_newLocalDecls_1703_);
lean_inc(v_levelArgs_1702_);
lean_inc(v_nextLevelIdx_1701_);
lean_inc(v_levelParams_1700_);
lean_inc(v_visitedExpr_1699_);
lean_inc(v_visitedLevel_1698_);
lean_dec(v___x_1697_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1721_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1713_; lean_object* v___x_1715_; 
lean_inc(v_a_1693_);
v___x_1713_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_visitedExpr_1699_, v_e_1680_, v_a_1693_);
if (v_isShared_1712_ == 0)
{
lean_ctor_set(v___x_1711_, 1, v___x_1713_);
v___x_1715_ = v___x_1711_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_visitedLevel_1698_);
lean_ctor_set(v_reuseFailAlloc_1720_, 1, v___x_1713_);
lean_ctor_set(v_reuseFailAlloc_1720_, 2, v_levelParams_1700_);
lean_ctor_set(v_reuseFailAlloc_1720_, 3, v_nextLevelIdx_1701_);
lean_ctor_set(v_reuseFailAlloc_1720_, 4, v_levelArgs_1702_);
lean_ctor_set(v_reuseFailAlloc_1720_, 5, v_newLocalDecls_1703_);
lean_ctor_set(v_reuseFailAlloc_1720_, 6, v_newLocalDeclsForMVars_1704_);
lean_ctor_set(v_reuseFailAlloc_1720_, 7, v_newLetDecls_1705_);
lean_ctor_set(v_reuseFailAlloc_1720_, 8, v_nextExprIdx_1706_);
lean_ctor_set(v_reuseFailAlloc_1720_, 9, v_exprMVarArgs_1707_);
lean_ctor_set(v_reuseFailAlloc_1720_, 10, v_exprFVarArgs_1708_);
lean_ctor_set(v_reuseFailAlloc_1720_, 11, v_toProcess_1709_);
v___x_1715_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
lean_object* v___x_1716_; lean_object* v___x_1718_; 
v___x_1716_ = lean_st_ref_put(v___y_1682_, v___x_1715_);
if (v_isShared_1696_ == 0)
{
v___x_1718_ = v___x_1695_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1693_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_1680_);
return v___x_1692_;
}
}
else
{
lean_object* v_val_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1730_; 
lean_dec_ref(v_e_1680_);
v_val_1723_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1725_ = v___x_1691_;
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_val_1723_);
lean_dec(v___x_1691_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
lean_ctor_set_tag(v___x_1725_, 0);
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_val_1723_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0___boxed(lean_object* v_e_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v_res_1743_; 
v_res_1743_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_e_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec(v___y_1739_);
lean_dec_ref(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___boxed(lean_object* v_e_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_){
_start:
{
lean_object* v_res_1752_; 
v_res_1752_ = l_Lean_Meta_Closure_collectExprAux(v_e_1744_, v_a_1745_, v_a_1746_, v_a_1747_, v_a_1748_, v_a_1749_, v_a_1750_);
lean_dec(v_a_1750_);
lean_dec_ref(v_a_1749_);
lean_dec(v_a_1748_);
lean_dec_ref(v_a_1747_);
lean_dec(v_a_1746_);
lean_dec_ref(v_a_1745_);
return v_res_1752_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(lean_object* v_00_u03b2_1753_, lean_object* v_m_1754_, lean_object* v_a_1755_){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_m_1754_, v_a_1755_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___boxed(lean_object* v_00_u03b2_1757_, lean_object* v_m_1758_, lean_object* v_a_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(v_00_u03b2_1757_, v_m_1758_, v_a_1759_);
lean_dec_ref(v_a_1759_);
lean_dec_ref(v_m_1758_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1(lean_object* v_00_u03b2_1761_, lean_object* v_m_1762_, lean_object* v_a_1763_, lean_object* v_b_1764_){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_m_1762_, v_a_1763_, v_b_1764_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(lean_object* v_x_1766_, lean_object* v_x_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_){
_start:
{
lean_object* v___x_1775_; 
v___x_1775_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_x_1766_, v_x_1767_, v___y_1769_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___boxed(lean_object* v_x_1776_, lean_object* v_x_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(v_x_1776_, v_x_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v___x_1793_; 
v___x_1793_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1791_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___boxed(lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
lean_dec(v___y_1799_);
lean_dec_ref(v___y_1798_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(lean_object* v_00_u03b2_1802_, lean_object* v_a_1803_, lean_object* v_x_1804_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1803_, v_x_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1806_, lean_object* v_a_1807_, lean_object* v_x_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(v_00_u03b2_1806_, v_a_1807_, v_x_1808_);
lean_dec(v_x_1808_);
lean_dec_ref(v_a_1807_);
return v_res_1809_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(lean_object* v_00_u03b2_1810_, lean_object* v_a_1811_, lean_object* v_x_1812_){
_start:
{
uint8_t v___x_1813_; 
v___x_1813_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1811_, v_x_1812_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1814_, lean_object* v_a_1815_, lean_object* v_x_1816_){
_start:
{
uint8_t v_res_1817_; lean_object* v_r_1818_; 
v_res_1817_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(v_00_u03b2_1814_, v_a_1815_, v_x_1816_);
lean_dec(v_x_1816_);
lean_dec_ref(v_a_1815_);
v_r_1818_ = lean_box(v_res_1817_);
return v_r_1818_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3(lean_object* v_00_u03b2_1819_, lean_object* v_data_1820_){
_start:
{
lean_object* v___x_1821_; 
v___x_1821_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(v_data_1820_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4(lean_object* v_00_u03b2_1822_, lean_object* v_a_1823_, lean_object* v_b_1824_, lean_object* v_x_1825_){
_start:
{
lean_object* v___x_1826_; 
v___x_1826_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1823_, v_b_1824_, v_x_1825_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_1827_, lean_object* v_i_1828_, lean_object* v_source_1829_, lean_object* v_target_1830_){
_start:
{
lean_object* v___x_1831_; 
v___x_1831_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(v_i_1828_, v_source_1829_, v_target_1830_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10(lean_object* v_00_u03b2_1832_, lean_object* v_x_1833_, lean_object* v_x_1834_){
_start:
{
lean_object* v___x_1835_; 
v___x_1835_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(v_x_1833_, v_x_1834_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr(lean_object* v_e_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_){
_start:
{
lean_object* v___x_1844_; 
v___x_1844_ = l_Lean_Meta_Closure_preprocess(v_e_1836_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_);
if (lean_obj_tag(v___x_1844_) == 0)
{
lean_object* v_a_1845_; uint8_t v___x_1889_; 
v_a_1845_ = lean_ctor_get(v___x_1844_, 0);
v___x_1889_ = l_Lean_Expr_hasLevelParam(v_a_1845_);
if (v___x_1889_ == 0)
{
uint8_t v___x_1890_; 
v___x_1890_ = l_Lean_Expr_hasFVar(v_a_1845_);
if (v___x_1890_ == 0)
{
uint8_t v___x_1891_; 
v___x_1891_ = l_Lean_Expr_hasMVar(v_a_1845_);
if (v___x_1891_ == 0)
{
return v___x_1844_;
}
else
{
lean_inc(v_a_1845_);
lean_dec_ref_known(v___x_1844_, 1);
goto v___jp_1846_;
}
}
else
{
lean_inc(v_a_1845_);
lean_dec_ref_known(v___x_1844_, 1);
goto v___jp_1846_;
}
}
else
{
lean_inc(v_a_1845_);
lean_dec_ref_known(v___x_1844_, 1);
goto v___jp_1846_;
}
v___jp_1846_:
{
lean_object* v___x_1847_; lean_object* v_visitedExpr_1848_; lean_object* v___x_1849_; 
v___x_1847_ = lean_st_ref_get(v_a_1838_);
v_visitedExpr_1848_ = lean_ctor_get(v___x_1847_, 1);
lean_inc_ref(v_visitedExpr_1848_);
lean_dec(v___x_1847_);
v___x_1849_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_visitedExpr_1848_, v_a_1845_);
lean_dec_ref(v_visitedExpr_1848_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v___x_1850_; 
lean_inc(v_a_1845_);
v___x_1850_ = l_Lean_Meta_Closure_collectExprAux(v_a_1845_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1880_; 
v_a_1851_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1853_ = v___x_1850_;
v_isShared_1854_ = v_isSharedCheck_1880_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1850_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1880_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1855_; lean_object* v_visitedLevel_1856_; lean_object* v_visitedExpr_1857_; lean_object* v_levelParams_1858_; lean_object* v_nextLevelIdx_1859_; lean_object* v_levelArgs_1860_; lean_object* v_newLocalDecls_1861_; lean_object* v_newLocalDeclsForMVars_1862_; lean_object* v_newLetDecls_1863_; lean_object* v_nextExprIdx_1864_; lean_object* v_exprMVarArgs_1865_; lean_object* v_exprFVarArgs_1866_; lean_object* v_toProcess_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1879_; 
v___x_1855_ = lean_st_ref_take(v_a_1838_);
v_visitedLevel_1856_ = lean_ctor_get(v___x_1855_, 0);
v_visitedExpr_1857_ = lean_ctor_get(v___x_1855_, 1);
v_levelParams_1858_ = lean_ctor_get(v___x_1855_, 2);
v_nextLevelIdx_1859_ = lean_ctor_get(v___x_1855_, 3);
v_levelArgs_1860_ = lean_ctor_get(v___x_1855_, 4);
v_newLocalDecls_1861_ = lean_ctor_get(v___x_1855_, 5);
v_newLocalDeclsForMVars_1862_ = lean_ctor_get(v___x_1855_, 6);
v_newLetDecls_1863_ = lean_ctor_get(v___x_1855_, 7);
v_nextExprIdx_1864_ = lean_ctor_get(v___x_1855_, 8);
v_exprMVarArgs_1865_ = lean_ctor_get(v___x_1855_, 9);
v_exprFVarArgs_1866_ = lean_ctor_get(v___x_1855_, 10);
v_toProcess_1867_ = lean_ctor_get(v___x_1855_, 11);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1869_ = v___x_1855_;
v_isShared_1870_ = v_isSharedCheck_1879_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_toProcess_1867_);
lean_inc(v_exprFVarArgs_1866_);
lean_inc(v_exprMVarArgs_1865_);
lean_inc(v_nextExprIdx_1864_);
lean_inc(v_newLetDecls_1863_);
lean_inc(v_newLocalDeclsForMVars_1862_);
lean_inc(v_newLocalDecls_1861_);
lean_inc(v_levelArgs_1860_);
lean_inc(v_nextLevelIdx_1859_);
lean_inc(v_levelParams_1858_);
lean_inc(v_visitedExpr_1857_);
lean_inc(v_visitedLevel_1856_);
lean_dec(v___x_1855_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1879_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1871_; lean_object* v___x_1873_; 
lean_inc(v_a_1851_);
v___x_1871_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_visitedExpr_1857_, v_a_1845_, v_a_1851_);
if (v_isShared_1870_ == 0)
{
lean_ctor_set(v___x_1869_, 1, v___x_1871_);
v___x_1873_ = v___x_1869_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_visitedLevel_1856_);
lean_ctor_set(v_reuseFailAlloc_1878_, 1, v___x_1871_);
lean_ctor_set(v_reuseFailAlloc_1878_, 2, v_levelParams_1858_);
lean_ctor_set(v_reuseFailAlloc_1878_, 3, v_nextLevelIdx_1859_);
lean_ctor_set(v_reuseFailAlloc_1878_, 4, v_levelArgs_1860_);
lean_ctor_set(v_reuseFailAlloc_1878_, 5, v_newLocalDecls_1861_);
lean_ctor_set(v_reuseFailAlloc_1878_, 6, v_newLocalDeclsForMVars_1862_);
lean_ctor_set(v_reuseFailAlloc_1878_, 7, v_newLetDecls_1863_);
lean_ctor_set(v_reuseFailAlloc_1878_, 8, v_nextExprIdx_1864_);
lean_ctor_set(v_reuseFailAlloc_1878_, 9, v_exprMVarArgs_1865_);
lean_ctor_set(v_reuseFailAlloc_1878_, 10, v_exprFVarArgs_1866_);
lean_ctor_set(v_reuseFailAlloc_1878_, 11, v_toProcess_1867_);
v___x_1873_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
lean_object* v___x_1874_; lean_object* v___x_1876_; 
v___x_1874_ = lean_st_ref_put(v_a_1838_, v___x_1873_);
if (v_isShared_1854_ == 0)
{
v___x_1876_ = v___x_1853_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_a_1851_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
}
}
else
{
lean_dec(v_a_1845_);
return v___x_1850_;
}
}
else
{
lean_object* v_val_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1888_; 
lean_dec(v_a_1845_);
v_val_1881_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1883_ = v___x_1849_;
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_val_1881_);
lean_dec(v___x_1849_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1886_; 
if (v_isShared_1884_ == 0)
{
lean_ctor_set_tag(v___x_1883_, 0);
v___x_1886_ = v___x_1883_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_val_1881_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
}
else
{
return v___x_1844_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr___boxed(lean_object* v_e_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_Lean_Meta_Closure_collectExpr(v_e_1892_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_, v_a_1897_, v_a_1898_);
lean_dec(v_a_1898_);
lean_dec_ref(v_a_1897_);
lean_dec(v_a_1896_);
lean_dec_ref(v_a_1895_);
lean_dec(v_a_1894_);
lean_dec_ref(v_a_1893_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcessAux(lean_object* v_lctx_1901_, lean_object* v_i_1902_, lean_object* v_toProcess_1903_, lean_object* v_elem_1904_){
_start:
{
lean_object* v___x_1905_; uint8_t v___x_1906_; 
v___x_1905_ = lean_array_get_size(v_toProcess_1903_);
v___x_1906_ = lean_nat_dec_lt(v_i_1902_, v___x_1905_);
if (v___x_1906_ == 0)
{
lean_object* v___x_1907_; 
lean_dec(v_i_1902_);
lean_dec_ref(v_lctx_1901_);
v___x_1907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1907_, 0, v_elem_1904_);
lean_ctor_set(v___x_1907_, 1, v_toProcess_1903_);
return v___x_1907_;
}
else
{
lean_object* v_fvarId_1908_; lean_object* v_elem_x27_1909_; lean_object* v_fvarId_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; uint8_t v___x_1915_; 
v_fvarId_1908_ = lean_ctor_get(v_elem_1904_, 0);
v_elem_x27_1909_ = lean_array_fget_borrowed(v_toProcess_1903_, v_i_1902_);
v_fvarId_1910_ = lean_ctor_get(v_elem_x27_1909_, 0);
lean_inc(v_fvarId_1908_);
lean_inc_ref_n(v_lctx_1901_, 2);
v___x_1911_ = l_Lean_LocalContext_get_x21(v_lctx_1901_, v_fvarId_1908_);
v___x_1912_ = l_Lean_LocalDecl_index(v___x_1911_);
lean_dec_ref(v___x_1911_);
lean_inc(v_fvarId_1910_);
v___x_1913_ = l_Lean_LocalContext_get_x21(v_lctx_1901_, v_fvarId_1910_);
v___x_1914_ = l_Lean_LocalDecl_index(v___x_1913_);
lean_dec_ref(v___x_1913_);
v___x_1915_ = lean_nat_dec_lt(v___x_1912_, v___x_1914_);
lean_dec(v___x_1914_);
lean_dec(v___x_1912_);
if (v___x_1915_ == 0)
{
lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1916_ = lean_unsigned_to_nat(1u);
v___x_1917_ = lean_nat_add(v_i_1902_, v___x_1916_);
lean_dec(v_i_1902_);
v_i_1902_ = v___x_1917_;
goto _start;
}
else
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
lean_inc(v_elem_x27_1909_);
v___x_1919_ = lean_unsigned_to_nat(1u);
v___x_1920_ = lean_nat_add(v_i_1902_, v___x_1919_);
v___x_1921_ = lean_array_fset(v_toProcess_1903_, v_i_1902_, v_elem_1904_);
lean_dec(v_i_1902_);
v_i_1902_ = v___x_1920_;
v_toProcess_1903_ = v___x_1921_;
v_elem_1904_ = v_elem_x27_1909_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(lean_object* v_a_1923_, lean_object* v_a_1924_){
_start:
{
lean_object* v_lctx_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v_toProcess_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; uint8_t v___x_1932_; 
v_lctx_1926_ = lean_ctor_get(v_a_1924_, 2);
v___x_1927_ = ((lean_object*)(l_Lean_Meta_Closure_instInhabitedToProcessElement_default));
v___x_1928_ = lean_st_ref_get(v_a_1923_);
v_toProcess_1929_ = lean_ctor_get(v___x_1928_, 11);
lean_inc_ref(v_toProcess_1929_);
lean_dec(v___x_1928_);
v___x_1930_ = lean_array_get_size(v_toProcess_1929_);
lean_dec_ref(v_toProcess_1929_);
v___x_1931_ = lean_unsigned_to_nat(0u);
v___x_1932_ = lean_nat_dec_eq(v___x_1930_, v___x_1931_);
if (v___x_1932_ == 0)
{
lean_object* v___x_1933_; lean_object* v_visitedLevel_1934_; lean_object* v_visitedExpr_1935_; lean_object* v_levelParams_1936_; lean_object* v_nextLevelIdx_1937_; lean_object* v_levelArgs_1938_; lean_object* v_newLocalDecls_1939_; lean_object* v_newLocalDeclsForMVars_1940_; lean_object* v_newLetDecls_1941_; lean_object* v_nextExprIdx_1942_; lean_object* v_exprMVarArgs_1943_; lean_object* v_exprFVarArgs_1944_; lean_object* v_toProcess_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1963_; 
v___x_1933_ = lean_st_ref_take(v_a_1923_);
v_visitedLevel_1934_ = lean_ctor_get(v___x_1933_, 0);
v_visitedExpr_1935_ = lean_ctor_get(v___x_1933_, 1);
v_levelParams_1936_ = lean_ctor_get(v___x_1933_, 2);
v_nextLevelIdx_1937_ = lean_ctor_get(v___x_1933_, 3);
v_levelArgs_1938_ = lean_ctor_get(v___x_1933_, 4);
v_newLocalDecls_1939_ = lean_ctor_get(v___x_1933_, 5);
v_newLocalDeclsForMVars_1940_ = lean_ctor_get(v___x_1933_, 6);
v_newLetDecls_1941_ = lean_ctor_get(v___x_1933_, 7);
v_nextExprIdx_1942_ = lean_ctor_get(v___x_1933_, 8);
v_exprMVarArgs_1943_ = lean_ctor_get(v___x_1933_, 9);
v_exprFVarArgs_1944_ = lean_ctor_get(v___x_1933_, 10);
v_toProcess_1945_ = lean_ctor_get(v___x_1933_, 11);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1947_ = v___x_1933_;
v_isShared_1948_ = v_isSharedCheck_1963_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_toProcess_1945_);
lean_inc(v_exprFVarArgs_1944_);
lean_inc(v_exprMVarArgs_1943_);
lean_inc(v_nextExprIdx_1942_);
lean_inc(v_newLetDecls_1941_);
lean_inc(v_newLocalDeclsForMVars_1940_);
lean_inc(v_newLocalDecls_1939_);
lean_inc(v_levelArgs_1938_);
lean_inc(v_nextLevelIdx_1937_);
lean_inc(v_levelParams_1936_);
lean_inc(v_visitedExpr_1935_);
lean_inc(v_visitedLevel_1934_);
lean_dec(v___x_1933_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1963_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v_fst_1955_; lean_object* v_snd_1956_; lean_object* v___x_1957_; lean_object* v___x_1959_; 
v___x_1949_ = lean_array_get_size(v_toProcess_1945_);
v___x_1950_ = lean_unsigned_to_nat(1u);
v___x_1951_ = lean_nat_sub(v___x_1949_, v___x_1950_);
v___x_1952_ = lean_array_get(v___x_1927_, v_toProcess_1945_, v___x_1951_);
lean_dec(v___x_1951_);
v___x_1953_ = lean_array_pop(v_toProcess_1945_);
lean_inc_ref(v_lctx_1926_);
v___x_1954_ = l_Lean_Meta_Closure_pickNextToProcessAux(v_lctx_1926_, v___x_1931_, v___x_1953_, v___x_1952_);
v_fst_1955_ = lean_ctor_get(v___x_1954_, 0);
lean_inc(v_fst_1955_);
v_snd_1956_ = lean_ctor_get(v___x_1954_, 1);
lean_inc(v_snd_1956_);
lean_dec_ref(v___x_1954_);
v___x_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1957_, 0, v_fst_1955_);
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 11, v_snd_1956_);
v___x_1959_ = v___x_1947_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_visitedLevel_1934_);
lean_ctor_set(v_reuseFailAlloc_1962_, 1, v_visitedExpr_1935_);
lean_ctor_set(v_reuseFailAlloc_1962_, 2, v_levelParams_1936_);
lean_ctor_set(v_reuseFailAlloc_1962_, 3, v_nextLevelIdx_1937_);
lean_ctor_set(v_reuseFailAlloc_1962_, 4, v_levelArgs_1938_);
lean_ctor_set(v_reuseFailAlloc_1962_, 5, v_newLocalDecls_1939_);
lean_ctor_set(v_reuseFailAlloc_1962_, 6, v_newLocalDeclsForMVars_1940_);
lean_ctor_set(v_reuseFailAlloc_1962_, 7, v_newLetDecls_1941_);
lean_ctor_set(v_reuseFailAlloc_1962_, 8, v_nextExprIdx_1942_);
lean_ctor_set(v_reuseFailAlloc_1962_, 9, v_exprMVarArgs_1943_);
lean_ctor_set(v_reuseFailAlloc_1962_, 10, v_exprFVarArgs_1944_);
lean_ctor_set(v_reuseFailAlloc_1962_, 11, v_snd_1956_);
v___x_1959_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1960_ = lean_st_ref_put(v_a_1923_, v___x_1959_);
v___x_1961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1957_);
return v___x_1961_;
}
}
}
else
{
lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1964_ = lean_box(0);
v___x_1965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1964_);
return v___x_1965_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg___boxed(lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v_a_1966_, v_a_1967_);
lean_dec_ref(v_a_1967_);
lean_dec(v_a_1966_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f(lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_){
_start:
{
lean_object* v___x_1977_; 
v___x_1977_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v_a_1971_, v_a_1972_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___boxed(lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Lean_Meta_Closure_pickNextToProcess_x3f(v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_, v_a_1983_);
lean_dec(v_a_1983_);
lean_dec_ref(v_a_1982_);
lean_dec(v_a_1981_);
lean_dec_ref(v_a_1980_);
lean_dec(v_a_1979_);
lean_dec_ref(v_a_1978_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg(lean_object* v_e_1986_, lean_object* v_a_1987_){
_start:
{
lean_object* v___x_1989_; lean_object* v_visitedLevel_1990_; lean_object* v_visitedExpr_1991_; lean_object* v_levelParams_1992_; lean_object* v_nextLevelIdx_1993_; lean_object* v_levelArgs_1994_; lean_object* v_newLocalDecls_1995_; lean_object* v_newLocalDeclsForMVars_1996_; lean_object* v_newLetDecls_1997_; lean_object* v_nextExprIdx_1998_; lean_object* v_exprMVarArgs_1999_; lean_object* v_exprFVarArgs_2000_; lean_object* v_toProcess_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2012_; 
v___x_1989_ = lean_st_ref_take(v_a_1987_);
v_visitedLevel_1990_ = lean_ctor_get(v___x_1989_, 0);
v_visitedExpr_1991_ = lean_ctor_get(v___x_1989_, 1);
v_levelParams_1992_ = lean_ctor_get(v___x_1989_, 2);
v_nextLevelIdx_1993_ = lean_ctor_get(v___x_1989_, 3);
v_levelArgs_1994_ = lean_ctor_get(v___x_1989_, 4);
v_newLocalDecls_1995_ = lean_ctor_get(v___x_1989_, 5);
v_newLocalDeclsForMVars_1996_ = lean_ctor_get(v___x_1989_, 6);
v_newLetDecls_1997_ = lean_ctor_get(v___x_1989_, 7);
v_nextExprIdx_1998_ = lean_ctor_get(v___x_1989_, 8);
v_exprMVarArgs_1999_ = lean_ctor_get(v___x_1989_, 9);
v_exprFVarArgs_2000_ = lean_ctor_get(v___x_1989_, 10);
v_toProcess_2001_ = lean_ctor_get(v___x_1989_, 11);
v_isSharedCheck_2012_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2012_ == 0)
{
v___x_2003_ = v___x_1989_;
v_isShared_2004_ = v_isSharedCheck_2012_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_toProcess_2001_);
lean_inc(v_exprFVarArgs_2000_);
lean_inc(v_exprMVarArgs_1999_);
lean_inc(v_nextExprIdx_1998_);
lean_inc(v_newLetDecls_1997_);
lean_inc(v_newLocalDeclsForMVars_1996_);
lean_inc(v_newLocalDecls_1995_);
lean_inc(v_levelArgs_1994_);
lean_inc(v_nextLevelIdx_1993_);
lean_inc(v_levelParams_1992_);
lean_inc(v_visitedExpr_1991_);
lean_inc(v_visitedLevel_1990_);
lean_dec(v___x_1989_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2012_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2008_; 
v___x_2005_ = lean_box(0);
v___x_2006_ = lean_array_push(v_exprFVarArgs_2000_, v_e_1986_);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 10, v___x_2006_);
v___x_2008_ = v___x_2003_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v_visitedLevel_1990_);
lean_ctor_set(v_reuseFailAlloc_2011_, 1, v_visitedExpr_1991_);
lean_ctor_set(v_reuseFailAlloc_2011_, 2, v_levelParams_1992_);
lean_ctor_set(v_reuseFailAlloc_2011_, 3, v_nextLevelIdx_1993_);
lean_ctor_set(v_reuseFailAlloc_2011_, 4, v_levelArgs_1994_);
lean_ctor_set(v_reuseFailAlloc_2011_, 5, v_newLocalDecls_1995_);
lean_ctor_set(v_reuseFailAlloc_2011_, 6, v_newLocalDeclsForMVars_1996_);
lean_ctor_set(v_reuseFailAlloc_2011_, 7, v_newLetDecls_1997_);
lean_ctor_set(v_reuseFailAlloc_2011_, 8, v_nextExprIdx_1998_);
lean_ctor_set(v_reuseFailAlloc_2011_, 9, v_exprMVarArgs_1999_);
lean_ctor_set(v_reuseFailAlloc_2011_, 10, v___x_2006_);
lean_ctor_set(v_reuseFailAlloc_2011_, 11, v_toProcess_2001_);
v___x_2008_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = lean_st_ref_put(v_a_1987_, v___x_2008_);
v___x_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2010_, 0, v___x_2005_);
return v___x_2010_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg___boxed(lean_object* v_e_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v_e_2013_, v_a_2014_);
lean_dec(v_a_2014_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg(lean_object* v_e_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_){
_start:
{
lean_object* v___x_2025_; 
v___x_2025_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v_e_2017_, v_a_2019_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___boxed(lean_object* v_e_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = l_Lean_Meta_Closure_pushFVarArg(v_e_2026_, v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_, v_a_2031_, v_a_2032_);
lean_dec(v_a_2032_);
lean_dec_ref(v_a_2031_);
lean_dec(v_a_2030_);
lean_dec_ref(v_a_2029_);
lean_dec(v_a_2028_);
lean_dec_ref(v_a_2027_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl(lean_object* v_newFVarId_2035_, lean_object* v_userName_2036_, lean_object* v_type_2037_, uint8_t v_bi_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_){
_start:
{
lean_object* v___x_2046_; 
v___x_2046_ = l_Lean_Meta_Closure_collectExpr(v_type_2037_, v_a_2039_, v_a_2040_, v_a_2041_, v_a_2042_, v_a_2043_, v_a_2044_);
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2080_; 
v_a_2047_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2049_ = v___x_2046_;
v_isShared_2050_ = v_isSharedCheck_2080_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2046_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2080_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2051_; lean_object* v_visitedLevel_2052_; lean_object* v_visitedExpr_2053_; lean_object* v_levelParams_2054_; lean_object* v_nextLevelIdx_2055_; lean_object* v_levelArgs_2056_; lean_object* v_newLocalDecls_2057_; lean_object* v_newLocalDeclsForMVars_2058_; lean_object* v_newLetDecls_2059_; lean_object* v_nextExprIdx_2060_; lean_object* v_exprMVarArgs_2061_; lean_object* v_exprFVarArgs_2062_; lean_object* v_toProcess_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2079_; 
v___x_2051_ = lean_st_ref_take(v_a_2040_);
v_visitedLevel_2052_ = lean_ctor_get(v___x_2051_, 0);
v_visitedExpr_2053_ = lean_ctor_get(v___x_2051_, 1);
v_levelParams_2054_ = lean_ctor_get(v___x_2051_, 2);
v_nextLevelIdx_2055_ = lean_ctor_get(v___x_2051_, 3);
v_levelArgs_2056_ = lean_ctor_get(v___x_2051_, 4);
v_newLocalDecls_2057_ = lean_ctor_get(v___x_2051_, 5);
v_newLocalDeclsForMVars_2058_ = lean_ctor_get(v___x_2051_, 6);
v_newLetDecls_2059_ = lean_ctor_get(v___x_2051_, 7);
v_nextExprIdx_2060_ = lean_ctor_get(v___x_2051_, 8);
v_exprMVarArgs_2061_ = lean_ctor_get(v___x_2051_, 9);
v_exprFVarArgs_2062_ = lean_ctor_get(v___x_2051_, 10);
v_toProcess_2063_ = lean_ctor_get(v___x_2051_, 11);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2065_ = v___x_2051_;
v_isShared_2066_ = v_isSharedCheck_2079_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_toProcess_2063_);
lean_inc(v_exprFVarArgs_2062_);
lean_inc(v_exprMVarArgs_2061_);
lean_inc(v_nextExprIdx_2060_);
lean_inc(v_newLetDecls_2059_);
lean_inc(v_newLocalDeclsForMVars_2058_);
lean_inc(v_newLocalDecls_2057_);
lean_inc(v_levelArgs_2056_);
lean_inc(v_nextLevelIdx_2055_);
lean_inc(v_levelParams_2054_);
lean_inc(v_visitedExpr_2053_);
lean_inc(v_visitedLevel_2052_);
lean_dec(v___x_2051_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2079_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; uint8_t v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2073_; 
v___x_2067_ = lean_box(0);
v___x_2068_ = lean_unsigned_to_nat(0u);
v___x_2069_ = 0;
v___x_2070_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2070_, 0, v___x_2068_);
lean_ctor_set(v___x_2070_, 1, v_newFVarId_2035_);
lean_ctor_set(v___x_2070_, 2, v_userName_2036_);
lean_ctor_set(v___x_2070_, 3, v_a_2047_);
lean_ctor_set_uint8(v___x_2070_, sizeof(void*)*4, v_bi_2038_);
lean_ctor_set_uint8(v___x_2070_, sizeof(void*)*4 + 1, v___x_2069_);
v___x_2071_ = lean_array_push(v_newLocalDecls_2057_, v___x_2070_);
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 5, v___x_2071_);
v___x_2073_ = v___x_2065_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_visitedLevel_2052_);
lean_ctor_set(v_reuseFailAlloc_2078_, 1, v_visitedExpr_2053_);
lean_ctor_set(v_reuseFailAlloc_2078_, 2, v_levelParams_2054_);
lean_ctor_set(v_reuseFailAlloc_2078_, 3, v_nextLevelIdx_2055_);
lean_ctor_set(v_reuseFailAlloc_2078_, 4, v_levelArgs_2056_);
lean_ctor_set(v_reuseFailAlloc_2078_, 5, v___x_2071_);
lean_ctor_set(v_reuseFailAlloc_2078_, 6, v_newLocalDeclsForMVars_2058_);
lean_ctor_set(v_reuseFailAlloc_2078_, 7, v_newLetDecls_2059_);
lean_ctor_set(v_reuseFailAlloc_2078_, 8, v_nextExprIdx_2060_);
lean_ctor_set(v_reuseFailAlloc_2078_, 9, v_exprMVarArgs_2061_);
lean_ctor_set(v_reuseFailAlloc_2078_, 10, v_exprFVarArgs_2062_);
lean_ctor_set(v_reuseFailAlloc_2078_, 11, v_toProcess_2063_);
v___x_2073_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
lean_object* v___x_2074_; lean_object* v___x_2076_; 
v___x_2074_ = lean_st_ref_put(v_a_2040_, v___x_2073_);
if (v_isShared_2050_ == 0)
{
lean_ctor_set(v___x_2049_, 0, v___x_2067_);
v___x_2076_ = v___x_2049_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v___x_2067_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
}
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
lean_dec(v_userName_2036_);
lean_dec(v_newFVarId_2035_);
v_a_2081_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___x_2046_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2046_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl___boxed(lean_object* v_newFVarId_2089_, lean_object* v_userName_2090_, lean_object* v_type_2091_, lean_object* v_bi_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_){
_start:
{
uint8_t v_bi_boxed_2100_; lean_object* v_res_2101_; 
v_bi_boxed_2100_ = lean_unbox(v_bi_2092_);
v_res_2101_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2089_, v_userName_2090_, v_type_2091_, v_bi_boxed_2100_, v_a_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_);
lean_dec(v_a_2098_);
lean_dec_ref(v_a_2097_);
lean_dec(v_a_2096_);
lean_dec_ref(v_a_2095_);
lean_dec(v_a_2094_);
lean_dec_ref(v_a_2093_);
return v_res_2101_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(lean_object* v_k_2102_, lean_object* v_t_2103_){
_start:
{
if (lean_obj_tag(v_t_2103_) == 0)
{
lean_object* v_k_2104_; lean_object* v_l_2105_; lean_object* v_r_2106_; uint8_t v___x_2107_; 
v_k_2104_ = lean_ctor_get(v_t_2103_, 1);
v_l_2105_ = lean_ctor_get(v_t_2103_, 3);
v_r_2106_ = lean_ctor_get(v_t_2103_, 4);
v___x_2107_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2102_, v_k_2104_);
switch(v___x_2107_)
{
case 0:
{
v_t_2103_ = v_l_2105_;
goto _start;
}
case 1:
{
uint8_t v___x_2109_; 
v___x_2109_ = 1;
return v___x_2109_;
}
default: 
{
v_t_2103_ = v_r_2106_;
goto _start;
}
}
}
else
{
uint8_t v___x_2111_; 
v___x_2111_ = 0;
return v___x_2111_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg___boxed(lean_object* v_k_2112_, lean_object* v_t_2113_){
_start:
{
uint8_t v_res_2114_; lean_object* v_r_2115_; 
v_res_2114_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(v_k_2112_, v_t_2113_);
lean_dec(v_t_2113_);
lean_dec(v_k_2112_);
v_r_2115_ = lean_box(v_res_2114_);
return v_r_2115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(lean_object* v_newFVarId_2116_, lean_object* v_a_2117_, size_t v_sz_2118_, size_t v_i_2119_, lean_object* v_bs_2120_){
_start:
{
uint8_t v___x_2121_; 
v___x_2121_ = lean_usize_dec_lt(v_i_2119_, v_sz_2118_);
if (v___x_2121_ == 0)
{
lean_dec(v_newFVarId_2116_);
return v_bs_2120_;
}
else
{
lean_object* v_v_2122_; lean_object* v___x_2123_; lean_object* v_bs_x27_2124_; lean_object* v___x_2125_; size_t v___x_2126_; size_t v___x_2127_; lean_object* v___x_2128_; 
v_v_2122_ = lean_array_uget(v_bs_2120_, v_i_2119_);
v___x_2123_ = lean_unsigned_to_nat(0u);
v_bs_x27_2124_ = lean_array_uset(v_bs_2120_, v_i_2119_, v___x_2123_);
lean_inc(v_newFVarId_2116_);
v___x_2125_ = l_Lean_LocalDecl_replaceFVarId(v_newFVarId_2116_, v_a_2117_, v_v_2122_);
v___x_2126_ = ((size_t)1ULL);
v___x_2127_ = lean_usize_add(v_i_2119_, v___x_2126_);
v___x_2128_ = lean_array_uset(v_bs_x27_2124_, v_i_2119_, v___x_2125_);
v_i_2119_ = v___x_2127_;
v_bs_2120_ = v___x_2128_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1___boxed(lean_object* v_newFVarId_2130_, lean_object* v_a_2131_, lean_object* v_sz_2132_, lean_object* v_i_2133_, lean_object* v_bs_2134_){
_start:
{
size_t v_sz_boxed_2135_; size_t v_i_boxed_2136_; lean_object* v_res_2137_; 
v_sz_boxed_2135_ = lean_unbox_usize(v_sz_2132_);
lean_dec(v_sz_2132_);
v_i_boxed_2136_ = lean_unbox_usize(v_i_2133_);
lean_dec(v_i_2133_);
v_res_2137_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(v_newFVarId_2130_, v_a_2131_, v_sz_boxed_2135_, v_i_boxed_2136_, v_bs_2134_);
lean_dec_ref(v_a_2131_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process(lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_){
_start:
{
lean_object* v___x_2145_; 
v___x_2145_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v_a_2139_, v_a_2140_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2273_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2148_ = v___x_2145_;
v_isShared_2149_ = v_isSharedCheck_2273_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2145_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2273_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
if (lean_obj_tag(v_a_2146_) == 0)
{
lean_object* v___x_2150_; lean_object* v___x_2152_; 
v___x_2150_ = lean_box(0);
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 0, v___x_2150_);
v___x_2152_ = v___x_2148_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v___x_2150_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
else
{
lean_object* v_val_2154_; lean_object* v_fvarId_2155_; lean_object* v_newFVarId_2156_; lean_object* v___x_2157_; 
lean_del_object(v___x_2148_);
v_val_2154_ = lean_ctor_get(v_a_2146_, 0);
lean_inc(v_val_2154_);
lean_dec_ref_known(v_a_2146_, 1);
v_fvarId_2155_ = lean_ctor_get(v_val_2154_, 0);
lean_inc_n(v_fvarId_2155_, 2);
v_newFVarId_2156_ = lean_ctor_get(v_val_2154_, 1);
lean_inc(v_newFVarId_2156_);
lean_dec(v_val_2154_);
v___x_2157_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_2155_, v_a_2140_, v_a_2142_, v_a_2143_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
lean_inc(v_a_2158_);
lean_dec_ref_known(v___x_2157_, 1);
if (lean_obj_tag(v_a_2158_) == 0)
{
lean_object* v_userName_2159_; lean_object* v_type_2160_; uint8_t v_bi_2161_; lean_object* v___x_2162_; 
v_userName_2159_ = lean_ctor_get(v_a_2158_, 2);
lean_inc(v_userName_2159_);
v_type_2160_ = lean_ctor_get(v_a_2158_, 3);
lean_inc_ref(v_type_2160_);
v_bi_2161_ = lean_ctor_get_uint8(v_a_2158_, sizeof(void*)*4);
lean_dec_ref_known(v_a_2158_, 4);
v___x_2162_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2156_, v_userName_2159_, v_type_2160_, v_bi_2161_, v_a_2138_, v_a_2139_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v___x_2163_; lean_object* v___x_2164_; 
lean_dec_ref_known(v___x_2162_, 1);
v___x_2163_ = l_Lean_mkFVar(v_fvarId_2155_);
v___x_2164_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v___x_2163_, v_a_2139_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_dec_ref_known(v___x_2164_, 1);
goto _start;
}
else
{
return v___x_2164_;
}
}
else
{
lean_dec(v_fvarId_2155_);
return v___x_2162_;
}
}
else
{
lean_object* v_userName_2166_; lean_object* v_type_2167_; lean_object* v_value_2168_; uint8_t v_nondep_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2262_; 
v_userName_2166_ = lean_ctor_get(v_a_2158_, 2);
v_type_2167_ = lean_ctor_get(v_a_2158_, 3);
v_value_2168_ = lean_ctor_get(v_a_2158_, 4);
v_nondep_2169_ = lean_ctor_get_uint8(v_a_2158_, sizeof(void*)*5);
v_isSharedCheck_2262_ = !lean_is_exclusive(v_a_2158_);
if (v_isSharedCheck_2262_ == 0)
{
lean_object* v_unused_2263_; lean_object* v_unused_2264_; 
v_unused_2263_ = lean_ctor_get(v_a_2158_, 1);
lean_dec(v_unused_2263_);
v_unused_2264_ = lean_ctor_get(v_a_2158_, 0);
lean_dec(v_unused_2264_);
v___x_2171_ = v_a_2158_;
v_isShared_2172_ = v_isSharedCheck_2262_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_value_2168_);
lean_inc(v_type_2167_);
lean_inc(v_userName_2166_);
lean_dec(v_a_2158_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2262_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2173_; 
v___x_2173_ = l_Lean_Meta_getZetaDeltaFVarIds___redArg(v_a_2141_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2173_, 1);
if (v_nondep_2169_ == 0)
{
uint8_t v___x_2181_; 
v___x_2181_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(v_fvarId_2155_, v_a_2174_);
lean_dec(v_a_2174_);
if (v___x_2181_ == 0)
{
lean_del_object(v___x_2171_);
lean_dec_ref(v_value_2168_);
goto v___jp_2175_;
}
else
{
lean_object* v___x_2182_; 
lean_dec(v_fvarId_2155_);
v___x_2182_ = l_Lean_Meta_Closure_collectExpr(v_type_2167_, v_a_2138_, v_a_2139_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
if (lean_obj_tag(v___x_2182_) == 0)
{
lean_object* v_a_2183_; lean_object* v___x_2184_; 
v_a_2183_ = lean_ctor_get(v___x_2182_, 0);
lean_inc(v_a_2183_);
lean_dec_ref_known(v___x_2182_, 1);
v___x_2184_ = l_Lean_Meta_Closure_collectExpr(v_value_2168_, v_a_2138_, v_a_2139_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; lean_object* v___x_2186_; lean_object* v_visitedLevel_2187_; lean_object* v_visitedExpr_2188_; lean_object* v_levelParams_2189_; lean_object* v_nextLevelIdx_2190_; lean_object* v_levelArgs_2191_; lean_object* v_newLocalDecls_2192_; lean_object* v_newLocalDeclsForMVars_2193_; lean_object* v_newLetDecls_2194_; lean_object* v_nextExprIdx_2195_; lean_object* v_exprMVarArgs_2196_; lean_object* v_exprFVarArgs_2197_; lean_object* v_toProcess_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2237_; 
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
lean_inc(v_a_2185_);
lean_dec_ref_known(v___x_2184_, 1);
v___x_2186_ = lean_st_ref_take(v_a_2139_);
v_visitedLevel_2187_ = lean_ctor_get(v___x_2186_, 0);
v_visitedExpr_2188_ = lean_ctor_get(v___x_2186_, 1);
v_levelParams_2189_ = lean_ctor_get(v___x_2186_, 2);
v_nextLevelIdx_2190_ = lean_ctor_get(v___x_2186_, 3);
v_levelArgs_2191_ = lean_ctor_get(v___x_2186_, 4);
v_newLocalDecls_2192_ = lean_ctor_get(v___x_2186_, 5);
v_newLocalDeclsForMVars_2193_ = lean_ctor_get(v___x_2186_, 6);
v_newLetDecls_2194_ = lean_ctor_get(v___x_2186_, 7);
v_nextExprIdx_2195_ = lean_ctor_get(v___x_2186_, 8);
v_exprMVarArgs_2196_ = lean_ctor_get(v___x_2186_, 9);
v_exprFVarArgs_2197_ = lean_ctor_get(v___x_2186_, 10);
v_toProcess_2198_ = lean_ctor_get(v___x_2186_, 11);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2200_ = v___x_2186_;
v_isShared_2201_ = v_isSharedCheck_2237_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_toProcess_2198_);
lean_inc(v_exprFVarArgs_2197_);
lean_inc(v_exprMVarArgs_2196_);
lean_inc(v_nextExprIdx_2195_);
lean_inc(v_newLetDecls_2194_);
lean_inc(v_newLocalDeclsForMVars_2193_);
lean_inc(v_newLocalDecls_2192_);
lean_inc(v_levelArgs_2191_);
lean_inc(v_nextLevelIdx_2190_);
lean_inc(v_levelParams_2189_);
lean_inc(v_visitedExpr_2188_);
lean_inc(v_visitedLevel_2187_);
lean_dec(v___x_2186_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2237_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2202_; uint8_t v___x_2203_; lean_object* v___x_2205_; 
v___x_2202_ = lean_unsigned_to_nat(0u);
v___x_2203_ = 0;
lean_inc(v_a_2185_);
lean_inc(v_newFVarId_2156_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 4, v_a_2185_);
lean_ctor_set(v___x_2171_, 3, v_a_2183_);
lean_ctor_set(v___x_2171_, 1, v_newFVarId_2156_);
lean_ctor_set(v___x_2171_, 0, v___x_2202_);
v___x_2205_ = v___x_2171_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v___x_2202_);
lean_ctor_set(v_reuseFailAlloc_2236_, 1, v_newFVarId_2156_);
lean_ctor_set(v_reuseFailAlloc_2236_, 2, v_userName_2166_);
lean_ctor_set(v_reuseFailAlloc_2236_, 3, v_a_2183_);
lean_ctor_set(v_reuseFailAlloc_2236_, 4, v_a_2185_);
lean_ctor_set_uint8(v_reuseFailAlloc_2236_, sizeof(void*)*5, v_nondep_2169_);
v___x_2205_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
lean_object* v___x_2206_; lean_object* v___x_2208_; 
lean_ctor_set_uint8(v___x_2205_, sizeof(void*)*5 + 1, v___x_2203_);
v___x_2206_ = lean_array_push(v_newLetDecls_2194_, v___x_2205_);
if (v_isShared_2201_ == 0)
{
lean_ctor_set(v___x_2200_, 7, v___x_2206_);
v___x_2208_ = v___x_2200_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_visitedLevel_2187_);
lean_ctor_set(v_reuseFailAlloc_2235_, 1, v_visitedExpr_2188_);
lean_ctor_set(v_reuseFailAlloc_2235_, 2, v_levelParams_2189_);
lean_ctor_set(v_reuseFailAlloc_2235_, 3, v_nextLevelIdx_2190_);
lean_ctor_set(v_reuseFailAlloc_2235_, 4, v_levelArgs_2191_);
lean_ctor_set(v_reuseFailAlloc_2235_, 5, v_newLocalDecls_2192_);
lean_ctor_set(v_reuseFailAlloc_2235_, 6, v_newLocalDeclsForMVars_2193_);
lean_ctor_set(v_reuseFailAlloc_2235_, 7, v___x_2206_);
lean_ctor_set(v_reuseFailAlloc_2235_, 8, v_nextExprIdx_2195_);
lean_ctor_set(v_reuseFailAlloc_2235_, 9, v_exprMVarArgs_2196_);
lean_ctor_set(v_reuseFailAlloc_2235_, 10, v_exprFVarArgs_2197_);
lean_ctor_set(v_reuseFailAlloc_2235_, 11, v_toProcess_2198_);
v___x_2208_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v_visitedLevel_2211_; lean_object* v_visitedExpr_2212_; lean_object* v_levelParams_2213_; lean_object* v_nextLevelIdx_2214_; lean_object* v_levelArgs_2215_; lean_object* v_newLocalDecls_2216_; lean_object* v_newLocalDeclsForMVars_2217_; lean_object* v_newLetDecls_2218_; lean_object* v_nextExprIdx_2219_; lean_object* v_exprMVarArgs_2220_; lean_object* v_exprFVarArgs_2221_; lean_object* v_toProcess_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2234_; 
v___x_2209_ = lean_st_ref_put(v_a_2139_, v___x_2208_);
v___x_2210_ = lean_st_ref_take(v_a_2139_);
v_visitedLevel_2211_ = lean_ctor_get(v___x_2210_, 0);
v_visitedExpr_2212_ = lean_ctor_get(v___x_2210_, 1);
v_levelParams_2213_ = lean_ctor_get(v___x_2210_, 2);
v_nextLevelIdx_2214_ = lean_ctor_get(v___x_2210_, 3);
v_levelArgs_2215_ = lean_ctor_get(v___x_2210_, 4);
v_newLocalDecls_2216_ = lean_ctor_get(v___x_2210_, 5);
v_newLocalDeclsForMVars_2217_ = lean_ctor_get(v___x_2210_, 6);
v_newLetDecls_2218_ = lean_ctor_get(v___x_2210_, 7);
v_nextExprIdx_2219_ = lean_ctor_get(v___x_2210_, 8);
v_exprMVarArgs_2220_ = lean_ctor_get(v___x_2210_, 9);
v_exprFVarArgs_2221_ = lean_ctor_get(v___x_2210_, 10);
v_toProcess_2222_ = lean_ctor_get(v___x_2210_, 11);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2224_ = v___x_2210_;
v_isShared_2225_ = v_isSharedCheck_2234_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_toProcess_2222_);
lean_inc(v_exprFVarArgs_2221_);
lean_inc(v_exprMVarArgs_2220_);
lean_inc(v_nextExprIdx_2219_);
lean_inc(v_newLetDecls_2218_);
lean_inc(v_newLocalDeclsForMVars_2217_);
lean_inc(v_newLocalDecls_2216_);
lean_inc(v_levelArgs_2215_);
lean_inc(v_nextLevelIdx_2214_);
lean_inc(v_levelParams_2213_);
lean_inc(v_visitedExpr_2212_);
lean_inc(v_visitedLevel_2211_);
lean_dec(v___x_2210_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2234_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
size_t v_sz_2226_; size_t v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2230_; 
v_sz_2226_ = lean_array_size(v_newLocalDecls_2216_);
v___x_2227_ = ((size_t)0ULL);
v___x_2228_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(v_newFVarId_2156_, v_a_2185_, v_sz_2226_, v___x_2227_, v_newLocalDecls_2216_);
lean_dec(v_a_2185_);
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 5, v___x_2228_);
v___x_2230_ = v___x_2224_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_visitedLevel_2211_);
lean_ctor_set(v_reuseFailAlloc_2233_, 1, v_visitedExpr_2212_);
lean_ctor_set(v_reuseFailAlloc_2233_, 2, v_levelParams_2213_);
lean_ctor_set(v_reuseFailAlloc_2233_, 3, v_nextLevelIdx_2214_);
lean_ctor_set(v_reuseFailAlloc_2233_, 4, v_levelArgs_2215_);
lean_ctor_set(v_reuseFailAlloc_2233_, 5, v___x_2228_);
lean_ctor_set(v_reuseFailAlloc_2233_, 6, v_newLocalDeclsForMVars_2217_);
lean_ctor_set(v_reuseFailAlloc_2233_, 7, v_newLetDecls_2218_);
lean_ctor_set(v_reuseFailAlloc_2233_, 8, v_nextExprIdx_2219_);
lean_ctor_set(v_reuseFailAlloc_2233_, 9, v_exprMVarArgs_2220_);
lean_ctor_set(v_reuseFailAlloc_2233_, 10, v_exprFVarArgs_2221_);
lean_ctor_set(v_reuseFailAlloc_2233_, 11, v_toProcess_2222_);
v___x_2230_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
lean_object* v___x_2231_; 
v___x_2231_ = lean_st_ref_put(v_a_2139_, v___x_2230_);
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2245_; 
lean_dec(v_a_2183_);
lean_del_object(v___x_2171_);
lean_dec(v_userName_2166_);
lean_dec(v_newFVarId_2156_);
v_a_2238_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2240_ = v___x_2184_;
v_isShared_2241_ = v_isSharedCheck_2245_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_a_2238_);
lean_dec(v___x_2184_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2245_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v___x_2243_; 
if (v_isShared_2241_ == 0)
{
v___x_2243_ = v___x_2240_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v_a_2238_);
v___x_2243_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
return v___x_2243_;
}
}
}
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
lean_del_object(v___x_2171_);
lean_dec_ref(v_value_2168_);
lean_dec(v_userName_2166_);
lean_dec(v_newFVarId_2156_);
v_a_2246_ = lean_ctor_get(v___x_2182_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2182_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v___x_2182_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2182_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
}
}
else
{
lean_dec(v_a_2174_);
lean_del_object(v___x_2171_);
lean_dec_ref(v_value_2168_);
goto v___jp_2175_;
}
v___jp_2175_:
{
uint8_t v___x_2176_; lean_object* v___x_2177_; 
v___x_2176_ = 0;
v___x_2177_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2156_, v_userName_2166_, v_type_2167_, v___x_2176_, v_a_2138_, v_a_2139_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v___x_2178_; lean_object* v___x_2179_; 
lean_dec_ref_known(v___x_2177_, 1);
v___x_2178_ = l_Lean_mkFVar(v_fvarId_2155_);
v___x_2179_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v___x_2178_, v_a_2139_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_dec_ref_known(v___x_2179_, 1);
goto _start;
}
else
{
return v___x_2179_;
}
}
else
{
lean_dec(v_fvarId_2155_);
return v___x_2177_;
}
}
}
else
{
lean_object* v_a_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2261_; 
lean_del_object(v___x_2171_);
lean_dec_ref(v_value_2168_);
lean_dec_ref(v_type_2167_);
lean_dec(v_userName_2166_);
lean_dec(v_newFVarId_2156_);
lean_dec(v_fvarId_2155_);
v_a_2254_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2256_ = v___x_2173_;
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_a_2254_);
lean_dec(v___x_2173_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2259_; 
if (v_isShared_2257_ == 0)
{
v___x_2259_ = v___x_2256_;
goto v_reusejp_2258_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v_a_2254_);
v___x_2259_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2258_;
}
v_reusejp_2258_:
{
return v___x_2259_;
}
}
}
}
}
}
else
{
lean_object* v_a_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2272_; 
lean_dec(v_newFVarId_2156_);
lean_dec(v_fvarId_2155_);
v_a_2265_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2267_ = v___x_2157_;
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_a_2265_);
lean_dec(v___x_2157_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v___x_2270_; 
if (v_isShared_2268_ == 0)
{
v___x_2270_ = v___x_2267_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_a_2265_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
}
}
}
}
}
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2281_; 
v_a_2274_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2276_ = v___x_2145_;
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2145_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2279_; 
if (v_isShared_2277_ == 0)
{
v___x_2279_ = v___x_2276_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2274_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process___boxed(lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l_Lean_Meta_Closure_process(v_a_2282_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_, v_a_2287_);
lean_dec(v_a_2287_);
lean_dec_ref(v_a_2286_);
lean_dec(v_a_2285_);
lean_dec_ref(v_a_2284_);
lean_dec(v_a_2283_);
lean_dec_ref(v_a_2282_);
return v_res_2289_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0(lean_object* v_00_u03b2_2290_, lean_object* v_k_2291_, lean_object* v_t_2292_){
_start:
{
uint8_t v___x_2293_; 
v___x_2293_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(v_k_2291_, v_t_2292_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___boxed(lean_object* v_00_u03b2_2294_, lean_object* v_k_2295_, lean_object* v_t_2296_){
_start:
{
uint8_t v_res_2297_; lean_object* v_r_2298_; 
v_res_2297_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0(v_00_u03b2_2294_, v_k_2295_, v_t_2296_);
lean_dec(v_t_2296_);
lean_dec(v_k_2295_);
v_r_2298_ = lean_box(v_res_2297_);
return v_r_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0(lean_object* v_decls_2299_, lean_object* v_xs_2300_, uint8_t v_isLambda_2301_, lean_object* v_i_2302_, lean_object* v_x_2303_, lean_object* v_b_2304_){
_start:
{
lean_object* v_decl_2305_; 
v_decl_2305_ = lean_array_fget_borrowed(v_decls_2299_, v_i_2302_);
if (lean_obj_tag(v_decl_2305_) == 0)
{
lean_object* v_userName_2306_; lean_object* v_type_2307_; uint8_t v_bi_2308_; lean_object* v_ty_2309_; 
v_userName_2306_ = lean_ctor_get(v_decl_2305_, 2);
v_type_2307_ = lean_ctor_get(v_decl_2305_, 3);
v_bi_2308_ = lean_ctor_get_uint8(v_decl_2305_, sizeof(void*)*4);
v_ty_2309_ = lean_expr_abstract_range(v_type_2307_, v_i_2302_, v_xs_2300_);
if (v_isLambda_2301_ == 0)
{
lean_object* v___x_2310_; 
lean_inc(v_userName_2306_);
v___x_2310_ = l_Lean_mkForall(v_userName_2306_, v_bi_2308_, v_ty_2309_, v_b_2304_);
return v___x_2310_;
}
else
{
lean_object* v___x_2311_; 
lean_inc(v_userName_2306_);
v___x_2311_ = l_Lean_mkLambda(v_userName_2306_, v_bi_2308_, v_ty_2309_, v_b_2304_);
return v___x_2311_;
}
}
else
{
lean_object* v_userName_2312_; lean_object* v_type_2313_; lean_object* v_value_2314_; uint8_t v_nondep_2315_; lean_object* v___x_2316_; uint8_t v___x_2317_; 
v_userName_2312_ = lean_ctor_get(v_decl_2305_, 2);
v_type_2313_ = lean_ctor_get(v_decl_2305_, 3);
v_value_2314_ = lean_ctor_get(v_decl_2305_, 4);
v_nondep_2315_ = lean_ctor_get_uint8(v_decl_2305_, sizeof(void*)*5);
v___x_2316_ = lean_unsigned_to_nat(0u);
v___x_2317_ = lean_expr_has_loose_bvar(v_b_2304_, v___x_2316_);
if (v___x_2317_ == 0)
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = lean_unsigned_to_nat(1u);
v___x_2319_ = lean_expr_lower_loose_bvars(v_b_2304_, v___x_2318_, v___x_2318_);
lean_dec_ref(v_b_2304_);
return v___x_2319_;
}
else
{
lean_object* v_ty_2320_; lean_object* v_val_2321_; lean_object* v___x_2322_; 
v_ty_2320_ = lean_expr_abstract_range(v_type_2313_, v_i_2302_, v_xs_2300_);
v_val_2321_ = lean_expr_abstract_range(v_value_2314_, v_i_2302_, v_xs_2300_);
lean_inc(v_userName_2312_);
v___x_2322_ = l_Lean_Expr_letE___override(v_userName_2312_, v_ty_2320_, v_val_2321_, v_b_2304_, v_nondep_2315_);
return v___x_2322_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0___boxed(lean_object* v_decls_2323_, lean_object* v_xs_2324_, lean_object* v_isLambda_2325_, lean_object* v_i_2326_, lean_object* v_x_2327_, lean_object* v_b_2328_){
_start:
{
uint8_t v_isLambda_boxed_2329_; lean_object* v_res_2330_; 
v_isLambda_boxed_2329_ = lean_unbox(v_isLambda_2325_);
v_res_2330_ = l_Lean_Meta_Closure_mkBinding___lam__0(v_decls_2323_, v_xs_2324_, v_isLambda_boxed_2329_, v_i_2326_, v_x_2327_, v_b_2328_);
lean_dec(v_i_2326_);
lean_dec_ref(v_xs_2324_);
lean_dec_ref(v_decls_2323_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding(uint8_t v_isLambda_2351_, lean_object* v_decls_2352_, lean_object* v_b_2353_){
_start:
{
lean_object* v___f_2354_; lean_object* v___x_2355_; size_t v_sz_2356_; size_t v___x_2357_; lean_object* v_xs_2358_; lean_object* v___x_2359_; lean_object* v___f_2360_; lean_object* v_b_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___f_2354_ = ((lean_object*)(l_Lean_Meta_Closure_mkBinding___closed__0));
v___x_2355_ = ((lean_object*)(l_Lean_Meta_Closure_mkBinding___closed__10));
v_sz_2356_ = lean_array_size(v_decls_2352_);
v___x_2357_ = ((size_t)0ULL);
lean_inc_ref_n(v_decls_2352_, 2);
v_xs_2358_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2355_, v___f_2354_, v_sz_2356_, v___x_2357_, v_decls_2352_);
v___x_2359_ = lean_box(v_isLambda_2351_);
lean_inc(v_xs_2358_);
v___f_2360_ = lean_alloc_closure((void*)(l_Lean_Meta_Closure_mkBinding___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2360_, 0, v_decls_2352_);
lean_closure_set(v___f_2360_, 1, v_xs_2358_);
lean_closure_set(v___f_2360_, 2, v___x_2359_);
v_b_2361_ = lean_expr_abstract(v_b_2353_, v_xs_2358_);
lean_dec(v_xs_2358_);
v___x_2362_ = lean_array_get_size(v_decls_2352_);
lean_dec_ref(v_decls_2352_);
v___x_2363_ = l_Nat_foldRev___redArg(v___x_2362_, v___f_2360_, v_b_2361_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___boxed(lean_object* v_isLambda_2364_, lean_object* v_decls_2365_, lean_object* v_b_2366_){
_start:
{
uint8_t v_isLambda_boxed_2367_; lean_object* v_res_2368_; 
v_isLambda_boxed_2367_ = lean_unbox(v_isLambda_2364_);
v_res_2368_ = l_Lean_Meta_Closure_mkBinding(v_isLambda_boxed_2367_, v_decls_2365_, v_b_2366_);
lean_dec_ref(v_b_2366_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(size_t v_sz_2369_, size_t v_i_2370_, lean_object* v_bs_2371_){
_start:
{
uint8_t v___x_2372_; 
v___x_2372_ = lean_usize_dec_lt(v_i_2370_, v_sz_2369_);
if (v___x_2372_ == 0)
{
return v_bs_2371_;
}
else
{
lean_object* v_v_2373_; lean_object* v___x_2374_; lean_object* v_bs_x27_2375_; lean_object* v___x_2376_; size_t v___x_2377_; size_t v___x_2378_; lean_object* v___x_2379_; 
v_v_2373_ = lean_array_uget(v_bs_2371_, v_i_2370_);
v___x_2374_ = lean_unsigned_to_nat(0u);
v_bs_x27_2375_ = lean_array_uset(v_bs_2371_, v_i_2370_, v___x_2374_);
v___x_2376_ = l_Lean_LocalDecl_toExpr(v_v_2373_);
v___x_2377_ = ((size_t)1ULL);
v___x_2378_ = lean_usize_add(v_i_2370_, v___x_2377_);
v___x_2379_ = lean_array_uset(v_bs_x27_2375_, v_i_2370_, v___x_2376_);
v_i_2370_ = v___x_2378_;
v_bs_2371_ = v___x_2379_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0___boxed(lean_object* v_sz_2381_, lean_object* v_i_2382_, lean_object* v_bs_2383_){
_start:
{
size_t v_sz_boxed_2384_; size_t v_i_boxed_2385_; lean_object* v_res_2386_; 
v_sz_boxed_2384_ = lean_unbox_usize(v_sz_2381_);
lean_dec(v_sz_2381_);
v_i_boxed_2385_ = lean_unbox_usize(v_i_2382_);
lean_dec(v_i_2382_);
v_res_2386_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_boxed_2384_, v_i_boxed_2385_, v_bs_2383_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(lean_object* v_decls_2387_, lean_object* v_xs_2388_, lean_object* v_x_2389_, lean_object* v_x_2390_){
_start:
{
lean_object* v_zero_2391_; uint8_t v_isZero_2392_; 
v_zero_2391_ = lean_unsigned_to_nat(0u);
v_isZero_2392_ = lean_nat_dec_eq(v_x_2389_, v_zero_2391_);
if (v_isZero_2392_ == 1)
{
lean_dec(v_x_2389_);
return v_x_2390_;
}
else
{
lean_object* v_one_2393_; lean_object* v_n_2394_; lean_object* v_decl_2395_; 
v_one_2393_ = lean_unsigned_to_nat(1u);
v_n_2394_ = lean_nat_sub(v_x_2389_, v_one_2393_);
lean_dec(v_x_2389_);
v_decl_2395_ = lean_array_fget_borrowed(v_decls_2387_, v_n_2394_);
if (lean_obj_tag(v_decl_2395_) == 0)
{
lean_object* v_userName_2396_; lean_object* v_type_2397_; uint8_t v_bi_2398_; lean_object* v_ty_2399_; lean_object* v___x_2400_; 
v_userName_2396_ = lean_ctor_get(v_decl_2395_, 2);
v_type_2397_ = lean_ctor_get(v_decl_2395_, 3);
v_bi_2398_ = lean_ctor_get_uint8(v_decl_2395_, sizeof(void*)*4);
v_ty_2399_ = lean_expr_abstract_range(v_type_2397_, v_n_2394_, v_xs_2388_);
lean_inc(v_userName_2396_);
v___x_2400_ = l_Lean_mkLambda(v_userName_2396_, v_bi_2398_, v_ty_2399_, v_x_2390_);
v_x_2389_ = v_n_2394_;
v_x_2390_ = v___x_2400_;
goto _start;
}
else
{
lean_object* v_userName_2402_; lean_object* v_type_2403_; lean_object* v_value_2404_; uint8_t v_nondep_2405_; uint8_t v___x_2406_; 
v_userName_2402_ = lean_ctor_get(v_decl_2395_, 2);
v_type_2403_ = lean_ctor_get(v_decl_2395_, 3);
v_value_2404_ = lean_ctor_get(v_decl_2395_, 4);
v_nondep_2405_ = lean_ctor_get_uint8(v_decl_2395_, sizeof(void*)*5);
v___x_2406_ = lean_expr_has_loose_bvar(v_x_2390_, v_zero_2391_);
if (v___x_2406_ == 0)
{
lean_object* v___x_2407_; 
v___x_2407_ = lean_expr_lower_loose_bvars(v_x_2390_, v_one_2393_, v_one_2393_);
lean_dec_ref(v_x_2390_);
v_x_2389_ = v_n_2394_;
v_x_2390_ = v___x_2407_;
goto _start;
}
else
{
lean_object* v_ty_2409_; lean_object* v_val_2410_; lean_object* v___x_2411_; 
v_ty_2409_ = lean_expr_abstract_range(v_type_2403_, v_n_2394_, v_xs_2388_);
v_val_2410_ = lean_expr_abstract_range(v_value_2404_, v_n_2394_, v_xs_2388_);
lean_inc(v_userName_2402_);
v___x_2411_ = l_Lean_Expr_letE___override(v_userName_2402_, v_ty_2409_, v_val_2410_, v_x_2390_, v_nondep_2405_);
v_x_2389_ = v_n_2394_;
v_x_2390_ = v___x_2411_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1___boxed(lean_object* v_decls_2413_, lean_object* v_xs_2414_, lean_object* v_x_2415_, lean_object* v_x_2416_){
_start:
{
lean_object* v_res_2417_; 
v_res_2417_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2413_, v_xs_2414_, v_x_2415_, v_x_2416_);
lean_dec_ref(v_xs_2414_);
lean_dec_ref(v_decls_2413_);
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(lean_object* v_decls_2418_, lean_object* v_xs_2419_, lean_object* v_x_2420_, lean_object* v_x_2421_){
_start:
{
lean_object* v_zero_2422_; uint8_t v_isZero_2423_; 
v_zero_2422_ = lean_unsigned_to_nat(0u);
v_isZero_2423_ = lean_nat_dec_eq(v_x_2420_, v_zero_2422_);
if (v_isZero_2423_ == 1)
{
return v_x_2421_;
}
else
{
lean_object* v_one_2424_; lean_object* v_n_2425_; lean_object* v_decl_2426_; 
v_one_2424_ = lean_unsigned_to_nat(1u);
v_n_2425_ = lean_nat_sub(v_x_2420_, v_one_2424_);
v_decl_2426_ = lean_array_fget_borrowed(v_decls_2418_, v_n_2425_);
if (lean_obj_tag(v_decl_2426_) == 0)
{
lean_object* v_userName_2427_; lean_object* v_type_2428_; uint8_t v_bi_2429_; lean_object* v_ty_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; 
v_userName_2427_ = lean_ctor_get(v_decl_2426_, 2);
v_type_2428_ = lean_ctor_get(v_decl_2426_, 3);
v_bi_2429_ = lean_ctor_get_uint8(v_decl_2426_, sizeof(void*)*4);
v_ty_2430_ = lean_expr_abstract_range(v_type_2428_, v_n_2425_, v_xs_2419_);
lean_inc(v_userName_2427_);
v___x_2431_ = l_Lean_mkLambda(v_userName_2427_, v_bi_2429_, v_ty_2430_, v_x_2421_);
v___x_2432_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2418_, v_xs_2419_, v_n_2425_, v___x_2431_);
return v___x_2432_;
}
else
{
lean_object* v_userName_2433_; lean_object* v_type_2434_; lean_object* v_value_2435_; uint8_t v_nondep_2436_; uint8_t v___x_2437_; 
v_userName_2433_ = lean_ctor_get(v_decl_2426_, 2);
v_type_2434_ = lean_ctor_get(v_decl_2426_, 3);
v_value_2435_ = lean_ctor_get(v_decl_2426_, 4);
v_nondep_2436_ = lean_ctor_get_uint8(v_decl_2426_, sizeof(void*)*5);
v___x_2437_ = lean_expr_has_loose_bvar(v_x_2421_, v_zero_2422_);
if (v___x_2437_ == 0)
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2438_ = lean_expr_lower_loose_bvars(v_x_2421_, v_one_2424_, v_one_2424_);
lean_dec_ref(v_x_2421_);
v___x_2439_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2418_, v_xs_2419_, v_n_2425_, v___x_2438_);
return v___x_2439_;
}
else
{
lean_object* v_ty_2440_; lean_object* v_val_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
v_ty_2440_ = lean_expr_abstract_range(v_type_2434_, v_n_2425_, v_xs_2419_);
v_val_2441_ = lean_expr_abstract_range(v_value_2435_, v_n_2425_, v_xs_2419_);
lean_inc(v_userName_2433_);
v___x_2442_ = l_Lean_Expr_letE___override(v_userName_2433_, v_ty_2440_, v_val_2441_, v_x_2421_, v_nondep_2436_);
v___x_2443_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2418_, v_xs_2419_, v_n_2425_, v___x_2442_);
return v___x_2443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1___boxed(lean_object* v_decls_2444_, lean_object* v_xs_2445_, lean_object* v_x_2446_, lean_object* v_x_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(v_decls_2444_, v_xs_2445_, v_x_2446_, v_x_2447_);
lean_dec(v_x_2446_);
lean_dec_ref(v_xs_2445_);
lean_dec_ref(v_decls_2444_);
return v_res_2448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda(lean_object* v_decls_2449_, lean_object* v_b_2450_){
_start:
{
size_t v_sz_2451_; size_t v___x_2452_; lean_object* v_xs_2453_; lean_object* v_b_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v_sz_2451_ = lean_array_size(v_decls_2449_);
v___x_2452_ = ((size_t)0ULL);
lean_inc_ref(v_decls_2449_);
v_xs_2453_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_2451_, v___x_2452_, v_decls_2449_);
v_b_2454_ = lean_expr_abstract(v_b_2450_, v_xs_2453_);
v___x_2455_ = lean_array_get_size(v_decls_2449_);
v___x_2456_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(v_decls_2449_, v_xs_2453_, v___x_2455_, v_b_2454_);
lean_dec_ref(v_xs_2453_);
lean_dec_ref(v_decls_2449_);
return v___x_2456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda___boxed(lean_object* v_decls_2457_, lean_object* v_b_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l_Lean_Meta_Closure_mkLambda(v_decls_2457_, v_b_2458_);
lean_dec_ref(v_b_2458_);
return v_res_2459_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(lean_object* v_decls_2460_, lean_object* v_xs_2461_, lean_object* v_x_2462_, lean_object* v_x_2463_){
_start:
{
lean_object* v_zero_2464_; uint8_t v_isZero_2465_; 
v_zero_2464_ = lean_unsigned_to_nat(0u);
v_isZero_2465_ = lean_nat_dec_eq(v_x_2462_, v_zero_2464_);
if (v_isZero_2465_ == 1)
{
lean_dec(v_x_2462_);
return v_x_2463_;
}
else
{
lean_object* v_one_2466_; lean_object* v_n_2467_; lean_object* v_decl_2468_; 
v_one_2466_ = lean_unsigned_to_nat(1u);
v_n_2467_ = lean_nat_sub(v_x_2462_, v_one_2466_);
lean_dec(v_x_2462_);
v_decl_2468_ = lean_array_fget_borrowed(v_decls_2460_, v_n_2467_);
if (lean_obj_tag(v_decl_2468_) == 0)
{
lean_object* v_userName_2469_; lean_object* v_type_2470_; uint8_t v_bi_2471_; lean_object* v_ty_2472_; lean_object* v___x_2473_; 
v_userName_2469_ = lean_ctor_get(v_decl_2468_, 2);
v_type_2470_ = lean_ctor_get(v_decl_2468_, 3);
v_bi_2471_ = lean_ctor_get_uint8(v_decl_2468_, sizeof(void*)*4);
v_ty_2472_ = lean_expr_abstract_range(v_type_2470_, v_n_2467_, v_xs_2461_);
lean_inc(v_userName_2469_);
v___x_2473_ = l_Lean_mkForall(v_userName_2469_, v_bi_2471_, v_ty_2472_, v_x_2463_);
v_x_2462_ = v_n_2467_;
v_x_2463_ = v___x_2473_;
goto _start;
}
else
{
lean_object* v_userName_2475_; lean_object* v_type_2476_; lean_object* v_value_2477_; uint8_t v_nondep_2478_; uint8_t v___x_2479_; 
v_userName_2475_ = lean_ctor_get(v_decl_2468_, 2);
v_type_2476_ = lean_ctor_get(v_decl_2468_, 3);
v_value_2477_ = lean_ctor_get(v_decl_2468_, 4);
v_nondep_2478_ = lean_ctor_get_uint8(v_decl_2468_, sizeof(void*)*5);
v___x_2479_ = lean_expr_has_loose_bvar(v_x_2463_, v_zero_2464_);
if (v___x_2479_ == 0)
{
lean_object* v___x_2480_; 
v___x_2480_ = lean_expr_lower_loose_bvars(v_x_2463_, v_one_2466_, v_one_2466_);
lean_dec_ref(v_x_2463_);
v_x_2462_ = v_n_2467_;
v_x_2463_ = v___x_2480_;
goto _start;
}
else
{
lean_object* v_ty_2482_; lean_object* v_val_2483_; lean_object* v___x_2484_; 
v_ty_2482_ = lean_expr_abstract_range(v_type_2476_, v_n_2467_, v_xs_2461_);
v_val_2483_ = lean_expr_abstract_range(v_value_2477_, v_n_2467_, v_xs_2461_);
lean_inc(v_userName_2475_);
v___x_2484_ = l_Lean_Expr_letE___override(v_userName_2475_, v_ty_2482_, v_val_2483_, v_x_2463_, v_nondep_2478_);
v_x_2462_ = v_n_2467_;
v_x_2463_ = v___x_2484_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0___boxed(lean_object* v_decls_2486_, lean_object* v_xs_2487_, lean_object* v_x_2488_, lean_object* v_x_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2486_, v_xs_2487_, v_x_2488_, v_x_2489_);
lean_dec_ref(v_xs_2487_);
lean_dec_ref(v_decls_2486_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(lean_object* v_decls_2491_, lean_object* v_xs_2492_, lean_object* v_x_2493_, lean_object* v_x_2494_){
_start:
{
lean_object* v_zero_2495_; uint8_t v_isZero_2496_; 
v_zero_2495_ = lean_unsigned_to_nat(0u);
v_isZero_2496_ = lean_nat_dec_eq(v_x_2493_, v_zero_2495_);
if (v_isZero_2496_ == 1)
{
return v_x_2494_;
}
else
{
lean_object* v_one_2497_; lean_object* v_n_2498_; lean_object* v_decl_2499_; 
v_one_2497_ = lean_unsigned_to_nat(1u);
v_n_2498_ = lean_nat_sub(v_x_2493_, v_one_2497_);
v_decl_2499_ = lean_array_fget_borrowed(v_decls_2491_, v_n_2498_);
if (lean_obj_tag(v_decl_2499_) == 0)
{
lean_object* v_userName_2500_; lean_object* v_type_2501_; uint8_t v_bi_2502_; lean_object* v_ty_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; 
v_userName_2500_ = lean_ctor_get(v_decl_2499_, 2);
v_type_2501_ = lean_ctor_get(v_decl_2499_, 3);
v_bi_2502_ = lean_ctor_get_uint8(v_decl_2499_, sizeof(void*)*4);
v_ty_2503_ = lean_expr_abstract_range(v_type_2501_, v_n_2498_, v_xs_2492_);
lean_inc(v_userName_2500_);
v___x_2504_ = l_Lean_mkForall(v_userName_2500_, v_bi_2502_, v_ty_2503_, v_x_2494_);
v___x_2505_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2491_, v_xs_2492_, v_n_2498_, v___x_2504_);
return v___x_2505_;
}
else
{
lean_object* v_userName_2506_; lean_object* v_type_2507_; lean_object* v_value_2508_; uint8_t v_nondep_2509_; uint8_t v___x_2510_; 
v_userName_2506_ = lean_ctor_get(v_decl_2499_, 2);
v_type_2507_ = lean_ctor_get(v_decl_2499_, 3);
v_value_2508_ = lean_ctor_get(v_decl_2499_, 4);
v_nondep_2509_ = lean_ctor_get_uint8(v_decl_2499_, sizeof(void*)*5);
v___x_2510_ = lean_expr_has_loose_bvar(v_x_2494_, v_zero_2495_);
if (v___x_2510_ == 0)
{
lean_object* v___x_2511_; lean_object* v___x_2512_; 
v___x_2511_ = lean_expr_lower_loose_bvars(v_x_2494_, v_one_2497_, v_one_2497_);
lean_dec_ref(v_x_2494_);
v___x_2512_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2491_, v_xs_2492_, v_n_2498_, v___x_2511_);
return v___x_2512_;
}
else
{
lean_object* v_ty_2513_; lean_object* v_val_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v_ty_2513_ = lean_expr_abstract_range(v_type_2507_, v_n_2498_, v_xs_2492_);
v_val_2514_ = lean_expr_abstract_range(v_value_2508_, v_n_2498_, v_xs_2492_);
lean_inc(v_userName_2506_);
v___x_2515_ = l_Lean_Expr_letE___override(v_userName_2506_, v_ty_2513_, v_val_2514_, v_x_2494_, v_nondep_2509_);
v___x_2516_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2491_, v_xs_2492_, v_n_2498_, v___x_2515_);
return v___x_2516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0___boxed(lean_object* v_decls_2517_, lean_object* v_xs_2518_, lean_object* v_x_2519_, lean_object* v_x_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(v_decls_2517_, v_xs_2518_, v_x_2519_, v_x_2520_);
lean_dec(v_x_2519_);
lean_dec_ref(v_xs_2518_);
lean_dec_ref(v_decls_2517_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall(lean_object* v_decls_2522_, lean_object* v_b_2523_){
_start:
{
size_t v_sz_2524_; size_t v___x_2525_; lean_object* v_xs_2526_; lean_object* v_b_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; 
v_sz_2524_ = lean_array_size(v_decls_2522_);
v___x_2525_ = ((size_t)0ULL);
lean_inc_ref(v_decls_2522_);
v_xs_2526_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_2524_, v___x_2525_, v_decls_2522_);
v_b_2527_ = lean_expr_abstract(v_b_2523_, v_xs_2526_);
v___x_2528_ = lean_array_get_size(v_decls_2522_);
v___x_2529_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(v_decls_2522_, v_xs_2526_, v___x_2528_, v_b_2527_);
lean_dec_ref(v_xs_2526_);
lean_dec_ref(v_decls_2522_);
return v___x_2529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall___boxed(lean_object* v_decls_2530_, lean_object* v_b_2531_){
_start:
{
lean_object* v_res_2532_; 
v_res_2532_ = l_Lean_Meta_Closure_mkForall(v_decls_2530_, v_b_2531_);
lean_dec_ref(v_b_2531_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(lean_object* v_a_2533_, lean_object* v_cache_2534_, lean_object* v_a_x3f_2535_){
_start:
{
lean_object* v___x_2537_; lean_object* v_mctx_2538_; lean_object* v_zetaDeltaFVarIds_2539_; lean_object* v_postponed_2540_; lean_object* v_diag_2541_; lean_object* v_rewriteFires_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2552_; 
v___x_2537_ = lean_st_ref_take(v_a_2533_);
v_mctx_2538_ = lean_ctor_get(v___x_2537_, 0);
v_zetaDeltaFVarIds_2539_ = lean_ctor_get(v___x_2537_, 2);
v_postponed_2540_ = lean_ctor_get(v___x_2537_, 3);
v_diag_2541_ = lean_ctor_get(v___x_2537_, 4);
v_rewriteFires_2542_ = lean_ctor_get(v___x_2537_, 5);
v_isSharedCheck_2552_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2552_ == 0)
{
lean_object* v_unused_2553_; 
v_unused_2553_ = lean_ctor_get(v___x_2537_, 1);
lean_dec(v_unused_2553_);
v___x_2544_ = v___x_2537_;
v_isShared_2545_ = v_isSharedCheck_2552_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_rewriteFires_2542_);
lean_inc(v_diag_2541_);
lean_inc(v_postponed_2540_);
lean_inc(v_zetaDeltaFVarIds_2539_);
lean_inc(v_mctx_2538_);
lean_dec(v___x_2537_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2552_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2546_; lean_object* v___x_2548_; 
v___x_2546_ = lean_box(0);
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 1, v_cache_2534_);
v___x_2548_ = v___x_2544_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v_mctx_2538_);
lean_ctor_set(v_reuseFailAlloc_2551_, 1, v_cache_2534_);
lean_ctor_set(v_reuseFailAlloc_2551_, 2, v_zetaDeltaFVarIds_2539_);
lean_ctor_set(v_reuseFailAlloc_2551_, 3, v_postponed_2540_);
lean_ctor_set(v_reuseFailAlloc_2551_, 4, v_diag_2541_);
lean_ctor_set(v_reuseFailAlloc_2551_, 5, v_rewriteFires_2542_);
v___x_2548_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2549_ = lean_st_ref_put(v_a_2533_, v___x_2548_);
v___x_2550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2546_);
return v___x_2550_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0___boxed(lean_object* v_a_2554_, lean_object* v_cache_2555_, lean_object* v_a_x3f_2556_, lean_object* v___y_2557_){
_start:
{
lean_object* v_res_2558_; 
v_res_2558_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v_a_2554_, v_cache_2555_, v_a_x3f_2556_);
lean_dec(v_a_x3f_2556_);
lean_dec(v_a_2554_);
return v_res_2558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(lean_object* v_a_2559_, lean_object* v_zetaDeltaFVarIds_2560_, lean_object* v_a_x3f_2561_){
_start:
{
lean_object* v___x_2563_; lean_object* v_mctx_2564_; lean_object* v_cache_2565_; lean_object* v_postponed_2566_; lean_object* v_diag_2567_; lean_object* v_rewriteFires_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2578_; 
v___x_2563_ = lean_st_ref_take(v_a_2559_);
v_mctx_2564_ = lean_ctor_get(v___x_2563_, 0);
v_cache_2565_ = lean_ctor_get(v___x_2563_, 1);
v_postponed_2566_ = lean_ctor_get(v___x_2563_, 3);
v_diag_2567_ = lean_ctor_get(v___x_2563_, 4);
v_rewriteFires_2568_ = lean_ctor_get(v___x_2563_, 5);
v_isSharedCheck_2578_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2578_ == 0)
{
lean_object* v_unused_2579_; 
v_unused_2579_ = lean_ctor_get(v___x_2563_, 2);
lean_dec(v_unused_2579_);
v___x_2570_ = v___x_2563_;
v_isShared_2571_ = v_isSharedCheck_2578_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_rewriteFires_2568_);
lean_inc(v_diag_2567_);
lean_inc(v_postponed_2566_);
lean_inc(v_cache_2565_);
lean_inc(v_mctx_2564_);
lean_dec(v___x_2563_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2578_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2572_; lean_object* v___x_2574_; 
v___x_2572_ = lean_box(0);
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 2, v_zetaDeltaFVarIds_2560_);
v___x_2574_ = v___x_2570_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_mctx_2564_);
lean_ctor_set(v_reuseFailAlloc_2577_, 1, v_cache_2565_);
lean_ctor_set(v_reuseFailAlloc_2577_, 2, v_zetaDeltaFVarIds_2560_);
lean_ctor_set(v_reuseFailAlloc_2577_, 3, v_postponed_2566_);
lean_ctor_set(v_reuseFailAlloc_2577_, 4, v_diag_2567_);
lean_ctor_set(v_reuseFailAlloc_2577_, 5, v_rewriteFires_2568_);
v___x_2574_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2575_ = lean_st_ref_put(v_a_2559_, v___x_2574_);
v___x_2576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2572_);
return v___x_2576_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1___boxed(lean_object* v_a_2580_, lean_object* v_zetaDeltaFVarIds_2581_, lean_object* v_a_x3f_2582_, lean_object* v___y_2583_){
_start:
{
lean_object* v_res_2584_; 
v_res_2584_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v_a_2580_, v_zetaDeltaFVarIds_2581_, v_a_x3f_2582_);
lean_dec(v_a_x3f_2582_);
lean_dec(v_a_2580_);
return v_res_2584_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0(void){
_start:
{
lean_object* v___x_2585_; 
v___x_2585_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2585_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1(void){
_start:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; 
v___x_2586_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0);
v___x_2587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2586_);
return v___x_2587_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2(void){
_start:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1);
v___x_2589_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2588_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
lean_ctor_set(v___x_2589_, 2, v___x_2588_);
lean_ctor_set(v___x_2589_, 3, v___x_2588_);
lean_ctor_set(v___x_2589_, 4, v___x_2588_);
lean_ctor_set(v___x_2589_, 5, v___x_2588_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux(lean_object* v_type_2590_, lean_object* v_value_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_){
_start:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v_cache_2601_; lean_object* v_a_2603_; lean_object* v___x_2614_; lean_object* v_mctx_2615_; lean_object* v_zetaDeltaFVarIds_2616_; lean_object* v_postponed_2617_; lean_object* v_diag_2618_; lean_object* v_rewriteFires_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2688_; 
v___x_2599_ = lean_box(1);
v___x_2600_ = lean_st_ref_get(v_a_2595_);
v_cache_2601_ = lean_ctor_get(v___x_2600_, 1);
lean_inc_ref(v_cache_2601_);
lean_dec(v___x_2600_);
v___x_2614_ = lean_st_ref_take(v_a_2595_);
v_mctx_2615_ = lean_ctor_get(v___x_2614_, 0);
v_zetaDeltaFVarIds_2616_ = lean_ctor_get(v___x_2614_, 2);
v_postponed_2617_ = lean_ctor_get(v___x_2614_, 3);
v_diag_2618_ = lean_ctor_get(v___x_2614_, 4);
v_rewriteFires_2619_ = lean_ctor_get(v___x_2614_, 5);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2688_ == 0)
{
lean_object* v_unused_2689_; 
v_unused_2689_ = lean_ctor_get(v___x_2614_, 1);
lean_dec(v_unused_2689_);
v___x_2621_ = v___x_2614_;
v_isShared_2622_ = v_isSharedCheck_2688_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_rewriteFires_2619_);
lean_inc(v_diag_2618_);
lean_inc(v_postponed_2617_);
lean_inc(v_zetaDeltaFVarIds_2616_);
lean_inc(v_mctx_2615_);
lean_dec(v___x_2614_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2688_;
goto v_resetjp_2620_;
}
v___jp_2602_:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2612_; 
v___x_2604_ = lean_box(0);
v___x_2605_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v_a_2595_, v_cache_2601_, v___x_2604_);
v_isSharedCheck_2612_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2612_ == 0)
{
lean_object* v_unused_2613_; 
v_unused_2613_ = lean_ctor_get(v___x_2605_, 0);
lean_dec(v_unused_2613_);
v___x_2607_ = v___x_2605_;
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
else
{
lean_dec(v___x_2605_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2610_; 
if (v_isShared_2608_ == 0)
{
lean_ctor_set_tag(v___x_2607_, 1);
lean_ctor_set(v___x_2607_, 0, v_a_2603_);
v___x_2610_ = v___x_2607_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_a_2603_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
}
v_resetjp_2620_:
{
lean_object* v___x_2623_; lean_object* v___x_2625_; 
v___x_2623_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2);
if (v_isShared_2622_ == 0)
{
lean_ctor_set(v___x_2621_, 1, v___x_2623_);
v___x_2625_ = v___x_2621_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_mctx_2615_);
lean_ctor_set(v_reuseFailAlloc_2687_, 1, v___x_2623_);
lean_ctor_set(v_reuseFailAlloc_2687_, 2, v_zetaDeltaFVarIds_2616_);
lean_ctor_set(v_reuseFailAlloc_2687_, 3, v_postponed_2617_);
lean_ctor_set(v_reuseFailAlloc_2687_, 4, v_diag_2618_);
lean_ctor_set(v_reuseFailAlloc_2687_, 5, v_rewriteFires_2619_);
v___x_2625_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
lean_object* v___x_2626_; lean_object* v_keyedConfig_2627_; lean_object* v_zetaDeltaSet_2628_; lean_object* v_lctx_2629_; lean_object* v_localInstances_2630_; lean_object* v_defEqCtx_x3f_2631_; lean_object* v_synthPendingDepth_2632_; lean_object* v_customCanUnfoldPredicate_x3f_2633_; uint8_t v_univApprox_2634_; uint8_t v_inTypeClassResolution_2635_; uint8_t v_cacheInferType_2636_; lean_object* v_rewriteSet_x3f_2637_; uint8_t v_rewriteFuelScope_2638_; uint8_t v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v_mctx_2642_; lean_object* v_cache_2643_; lean_object* v_zetaDeltaFVarIds_2644_; lean_object* v_postponed_2645_; lean_object* v_diag_2646_; lean_object* v_rewriteFires_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2686_; 
v___x_2626_ = lean_st_ref_put(v_a_2595_, v___x_2625_);
v_keyedConfig_2627_ = lean_ctor_get(v_a_2594_, 0);
v_zetaDeltaSet_2628_ = lean_ctor_get(v_a_2594_, 1);
v_lctx_2629_ = lean_ctor_get(v_a_2594_, 2);
v_localInstances_2630_ = lean_ctor_get(v_a_2594_, 3);
v_defEqCtx_x3f_2631_ = lean_ctor_get(v_a_2594_, 4);
v_synthPendingDepth_2632_ = lean_ctor_get(v_a_2594_, 5);
v_customCanUnfoldPredicate_x3f_2633_ = lean_ctor_get(v_a_2594_, 6);
v_univApprox_2634_ = lean_ctor_get_uint8(v_a_2594_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_2635_ = lean_ctor_get_uint8(v_a_2594_, sizeof(void*)*8 + 2);
v_cacheInferType_2636_ = lean_ctor_get_uint8(v_a_2594_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_2637_ = lean_ctor_get(v_a_2594_, 7);
v_rewriteFuelScope_2638_ = lean_ctor_get_uint8(v_a_2594_, sizeof(void*)*8 + 4);
v___x_2639_ = 1;
lean_inc(v_rewriteSet_x3f_2637_);
lean_inc(v_customCanUnfoldPredicate_x3f_2633_);
lean_inc(v_synthPendingDepth_2632_);
lean_inc(v_defEqCtx_x3f_2631_);
lean_inc_ref(v_localInstances_2630_);
lean_inc_ref(v_lctx_2629_);
lean_inc(v_zetaDeltaSet_2628_);
lean_inc_ref(v_keyedConfig_2627_);
v___x_2640_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_2640_, 0, v_keyedConfig_2627_);
lean_ctor_set(v___x_2640_, 1, v_zetaDeltaSet_2628_);
lean_ctor_set(v___x_2640_, 2, v_lctx_2629_);
lean_ctor_set(v___x_2640_, 3, v_localInstances_2630_);
lean_ctor_set(v___x_2640_, 4, v_defEqCtx_x3f_2631_);
lean_ctor_set(v___x_2640_, 5, v_synthPendingDepth_2632_);
lean_ctor_set(v___x_2640_, 6, v_customCanUnfoldPredicate_x3f_2633_);
lean_ctor_set(v___x_2640_, 7, v_rewriteSet_x3f_2637_);
lean_ctor_set_uint8(v___x_2640_, sizeof(void*)*8, v___x_2639_);
lean_ctor_set_uint8(v___x_2640_, sizeof(void*)*8 + 1, v_univApprox_2634_);
lean_ctor_set_uint8(v___x_2640_, sizeof(void*)*8 + 2, v_inTypeClassResolution_2635_);
lean_ctor_set_uint8(v___x_2640_, sizeof(void*)*8 + 3, v_cacheInferType_2636_);
lean_ctor_set_uint8(v___x_2640_, sizeof(void*)*8 + 4, v_rewriteFuelScope_2638_);
v___x_2641_ = lean_st_ref_take(v_a_2595_);
v_mctx_2642_ = lean_ctor_get(v___x_2641_, 0);
v_cache_2643_ = lean_ctor_get(v___x_2641_, 1);
v_zetaDeltaFVarIds_2644_ = lean_ctor_get(v___x_2641_, 2);
v_postponed_2645_ = lean_ctor_get(v___x_2641_, 3);
v_diag_2646_ = lean_ctor_get(v___x_2641_, 4);
v_rewriteFires_2647_ = lean_ctor_get(v___x_2641_, 5);
v_isSharedCheck_2686_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2649_ = v___x_2641_;
v_isShared_2650_ = v_isSharedCheck_2686_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_rewriteFires_2647_);
lean_inc(v_diag_2646_);
lean_inc(v_postponed_2645_);
lean_inc(v_zetaDeltaFVarIds_2644_);
lean_inc(v_cache_2643_);
lean_inc(v_mctx_2642_);
lean_dec(v___x_2641_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2686_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v_a_2652_; lean_object* v___x_2656_; 
if (v_isShared_2650_ == 0)
{
lean_ctor_set(v___x_2649_, 2, v___x_2599_);
v___x_2656_ = v___x_2649_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v_mctx_2642_);
lean_ctor_set(v_reuseFailAlloc_2685_, 1, v_cache_2643_);
lean_ctor_set(v_reuseFailAlloc_2685_, 2, v___x_2599_);
lean_ctor_set(v_reuseFailAlloc_2685_, 3, v_postponed_2645_);
lean_ctor_set(v_reuseFailAlloc_2685_, 4, v_diag_2646_);
lean_ctor_set(v_reuseFailAlloc_2685_, 5, v_rewriteFires_2647_);
v___x_2656_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2655_;
}
v___jp_2651_:
{
lean_object* v___x_2653_; lean_object* v___x_2654_; 
v___x_2653_ = lean_box(0);
v___x_2654_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v_a_2595_, v_zetaDeltaFVarIds_2644_, v___x_2653_);
lean_dec_ref(v___x_2654_);
v_a_2603_ = v_a_2652_;
goto v___jp_2602_;
}
v_reusejp_2655_:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; 
v___x_2657_ = lean_st_ref_put(v_a_2595_, v___x_2656_);
v___x_2658_ = l_Lean_Meta_Closure_collectExpr(v_type_2590_, v_a_2592_, v_a_2593_, v___x_2640_, v_a_2595_, v_a_2596_, v_a_2597_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; lean_object* v___x_2660_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v___x_2660_ = l_Lean_Meta_Closure_collectExpr(v_value_2591_, v_a_2592_, v_a_2593_, v___x_2640_, v_a_2595_, v_a_2596_, v_a_2597_);
if (lean_obj_tag(v___x_2660_) == 0)
{
lean_object* v_a_2661_; lean_object* v___x_2662_; 
v_a_2661_ = lean_ctor_get(v___x_2660_, 0);
lean_inc(v_a_2661_);
lean_dec_ref_known(v___x_2660_, 1);
v___x_2662_ = l_Lean_Meta_Closure_process(v_a_2592_, v_a_2593_, v___x_2640_, v_a_2595_, v_a_2596_, v_a_2597_);
lean_dec_ref_known(v___x_2640_, 8);
if (lean_obj_tag(v___x_2662_) == 0)
{
lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2680_; 
v_isSharedCheck_2680_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2680_ == 0)
{
lean_object* v_unused_2681_; 
v_unused_2681_ = lean_ctor_get(v___x_2662_, 0);
lean_dec(v_unused_2681_);
v___x_2664_ = v___x_2662_;
v_isShared_2665_ = v_isSharedCheck_2680_;
goto v_resetjp_2663_;
}
else
{
lean_dec(v___x_2662_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2680_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2666_; lean_object* v___x_2668_; 
v___x_2666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2666_, 0, v_a_2659_);
lean_ctor_set(v___x_2666_, 1, v_a_2661_);
lean_inc_ref(v___x_2666_);
if (v_isShared_2665_ == 0)
{
lean_ctor_set_tag(v___x_2664_, 1);
lean_ctor_set(v___x_2664_, 0, v___x_2666_);
v___x_2668_ = v___x_2664_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v___x_2666_);
v___x_2668_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2677_; 
v___x_2669_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v_a_2595_, v_zetaDeltaFVarIds_2644_, v___x_2668_);
lean_dec_ref(v___x_2669_);
v___x_2670_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v_a_2595_, v_cache_2601_, v___x_2668_);
lean_dec_ref(v___x_2668_);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2677_ == 0)
{
lean_object* v_unused_2678_; 
v_unused_2678_ = lean_ctor_get(v___x_2670_, 0);
lean_dec(v_unused_2678_);
v___x_2672_ = v___x_2670_;
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
else
{
lean_dec(v___x_2670_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2675_; 
if (v_isShared_2673_ == 0)
{
lean_ctor_set(v___x_2672_, 0, v___x_2666_);
v___x_2675_ = v___x_2672_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v___x_2666_);
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
else
{
lean_object* v_a_2682_; 
lean_dec(v_a_2661_);
lean_dec(v_a_2659_);
v_a_2682_ = lean_ctor_get(v___x_2662_, 0);
lean_inc(v_a_2682_);
lean_dec_ref_known(v___x_2662_, 1);
v_a_2652_ = v_a_2682_;
goto v___jp_2651_;
}
}
else
{
lean_object* v_a_2683_; 
lean_dec(v_a_2659_);
lean_dec_ref_known(v___x_2640_, 8);
v_a_2683_ = lean_ctor_get(v___x_2660_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2660_, 1);
v_a_2652_ = v_a_2683_;
goto v___jp_2651_;
}
}
else
{
lean_object* v_a_2684_; 
lean_dec_ref_known(v___x_2640_, 8);
lean_dec_ref(v_value_2591_);
v_a_2684_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2684_);
lean_dec_ref_known(v___x_2658_, 1);
v_a_2652_ = v_a_2684_;
goto v___jp_2651_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___boxed(lean_object* v_type_2690_, lean_object* v_value_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_Lean_Meta_Closure_mkValueTypeClosureAux(v_type_2690_, v_value_2691_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_, v_a_2696_, v_a_2697_);
lean_dec(v_a_2697_);
lean_dec_ref(v_a_2696_);
lean_dec(v_a_2695_);
lean_dec_ref(v_a_2694_);
lean_dec(v_a_2693_);
lean_dec_ref(v_a_2692_);
return v_res_2699_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2700_; 
v___x_2700_ = l_instMonadEIO___redArg();
return v___x_2700_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(lean_object* v_msg_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v_toApplicative_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2751_; 
v___x_2708_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0, &l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0);
v___x_2709_ = l_StateRefT_x27_instMonad___redArg(v___x_2708_);
v_toApplicative_2710_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2751_ == 0)
{
lean_object* v_unused_2752_; 
v_unused_2752_ = lean_ctor_get(v___x_2709_, 1);
lean_dec(v_unused_2752_);
v___x_2712_ = v___x_2709_;
v_isShared_2713_ = v_isSharedCheck_2751_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_toApplicative_2710_);
lean_dec(v___x_2709_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2751_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v_toFunctor_2714_; lean_object* v_toSeq_2715_; lean_object* v_toSeqLeft_2716_; lean_object* v_toSeqRight_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2749_; 
v_toFunctor_2714_ = lean_ctor_get(v_toApplicative_2710_, 0);
v_toSeq_2715_ = lean_ctor_get(v_toApplicative_2710_, 2);
v_toSeqLeft_2716_ = lean_ctor_get(v_toApplicative_2710_, 3);
v_toSeqRight_2717_ = lean_ctor_get(v_toApplicative_2710_, 4);
v_isSharedCheck_2749_ = !lean_is_exclusive(v_toApplicative_2710_);
if (v_isSharedCheck_2749_ == 0)
{
lean_object* v_unused_2750_; 
v_unused_2750_ = lean_ctor_get(v_toApplicative_2710_, 1);
lean_dec(v_unused_2750_);
v___x_2719_ = v_toApplicative_2710_;
v_isShared_2720_ = v_isSharedCheck_2749_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_toSeqRight_2717_);
lean_inc(v_toSeqLeft_2716_);
lean_inc(v_toSeq_2715_);
lean_inc(v_toFunctor_2714_);
lean_dec(v_toApplicative_2710_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2749_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___f_2721_; lean_object* v___f_2722_; lean_object* v___f_2723_; lean_object* v___f_2724_; lean_object* v___x_2725_; lean_object* v___f_2726_; lean_object* v___f_2727_; lean_object* v___f_2728_; lean_object* v___x_2730_; 
v___f_2721_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1));
v___f_2722_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2));
lean_inc_ref(v_toFunctor_2714_);
v___f_2723_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2723_, 0, v_toFunctor_2714_);
v___f_2724_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2724_, 0, v_toFunctor_2714_);
v___x_2725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___f_2723_);
lean_ctor_set(v___x_2725_, 1, v___f_2724_);
v___f_2726_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2726_, 0, v_toSeqRight_2717_);
v___f_2727_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2727_, 0, v_toSeqLeft_2716_);
v___f_2728_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2728_, 0, v_toSeq_2715_);
if (v_isShared_2720_ == 0)
{
lean_ctor_set(v___x_2719_, 4, v___f_2726_);
lean_ctor_set(v___x_2719_, 3, v___f_2727_);
lean_ctor_set(v___x_2719_, 2, v___f_2728_);
lean_ctor_set(v___x_2719_, 1, v___f_2721_);
lean_ctor_set(v___x_2719_, 0, v___x_2725_);
v___x_2730_ = v___x_2719_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v___x_2725_);
lean_ctor_set(v_reuseFailAlloc_2748_, 1, v___f_2721_);
lean_ctor_set(v_reuseFailAlloc_2748_, 2, v___f_2728_);
lean_ctor_set(v_reuseFailAlloc_2748_, 3, v___f_2727_);
lean_ctor_set(v_reuseFailAlloc_2748_, 4, v___f_2726_);
v___x_2730_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
lean_object* v___x_2732_; 
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 1, v___f_2722_);
lean_ctor_set(v___x_2712_, 0, v___x_2730_);
v___x_2732_ = v___x_2712_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v___x_2730_);
lean_ctor_set(v_reuseFailAlloc_2747_, 1, v___f_2722_);
v___x_2732_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
lean_object* v___f_2733_; lean_object* v___f_2734_; lean_object* v___f_2735_; lean_object* v___f_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_12483__overap_2745_; lean_object* v___x_2746_; 
lean_inc_ref_n(v___x_2732_, 6);
v___f_2733_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2733_, 0, v___x_2732_);
v___f_2734_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2734_, 0, v___x_2732_);
v___f_2735_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2735_, 0, v___x_2732_);
v___f_2736_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2736_, 0, v___x_2732_);
v___x_2737_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2737_, 0, lean_box(0));
lean_closure_set(v___x_2737_, 1, lean_box(0));
lean_closure_set(v___x_2737_, 2, v___x_2732_);
v___x_2738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2737_);
lean_ctor_set(v___x_2738_, 1, v___f_2733_);
v___x_2739_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2739_, 0, lean_box(0));
lean_closure_set(v___x_2739_, 1, lean_box(0));
lean_closure_set(v___x_2739_, 2, v___x_2732_);
v___x_2740_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2738_);
lean_ctor_set(v___x_2740_, 1, v___x_2739_);
lean_ctor_set(v___x_2740_, 2, v___f_2734_);
lean_ctor_set(v___x_2740_, 3, v___f_2735_);
lean_ctor_set(v___x_2740_, 4, v___f_2736_);
v___x_2741_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2741_, 0, lean_box(0));
lean_closure_set(v___x_2741_, 1, lean_box(0));
lean_closure_set(v___x_2741_, 2, v___x_2732_);
v___x_2742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2740_);
lean_ctor_set(v___x_2742_, 1, v___x_2741_);
v___x_2743_ = lean_box(0);
v___x_2744_ = l_instInhabitedOfMonad___redArg(v___x_2742_, v___x_2743_);
v___x_12483__overap_2745_ = lean_panic_fn_borrowed(v___x_2744_, v_msg_2703_);
lean_dec(v___x_2744_);
lean_inc(v___y_2706_);
lean_inc_ref(v___y_2705_);
v___x_2746_ = lean_apply_4(v___x_12483__overap_2745_, v___y_2704_, v___y_2705_, v___y_2706_, lean_box(0));
return v___x_2746_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___boxed(lean_object* v_msg_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(v_msg_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
return v_res_2758_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(lean_object* v_a_2759_, lean_object* v_x_2760_){
_start:
{
if (lean_obj_tag(v_x_2760_) == 0)
{
uint8_t v___x_2761_; 
v___x_2761_ = 0;
return v___x_2761_;
}
else
{
lean_object* v_key_2762_; lean_object* v_tail_2763_; uint8_t v___x_2764_; 
v_key_2762_ = lean_ctor_get(v_x_2760_, 0);
v_tail_2763_ = lean_ctor_get(v_x_2760_, 2);
v___x_2764_ = l_Lean_instBEqFVarId_beq(v_key_2762_, v_a_2759_);
if (v___x_2764_ == 0)
{
v_x_2760_ = v_tail_2763_;
goto _start;
}
else
{
return v___x_2764_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg___boxed(lean_object* v_a_2766_, lean_object* v_x_2767_){
_start:
{
uint8_t v_res_2768_; lean_object* v_r_2769_; 
v_res_2768_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_2766_, v_x_2767_);
lean_dec(v_x_2767_);
lean_dec(v_a_2766_);
v_r_2769_ = lean_box(v_res_2768_);
return v_r_2769_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(lean_object* v_x_2770_, lean_object* v_x_2771_){
_start:
{
if (lean_obj_tag(v_x_2771_) == 0)
{
return v_x_2770_;
}
else
{
lean_object* v_key_2772_; lean_object* v_value_2773_; lean_object* v_tail_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2797_; 
v_key_2772_ = lean_ctor_get(v_x_2771_, 0);
v_value_2773_ = lean_ctor_get(v_x_2771_, 1);
v_tail_2774_ = lean_ctor_get(v_x_2771_, 2);
v_isSharedCheck_2797_ = !lean_is_exclusive(v_x_2771_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2776_ = v_x_2771_;
v_isShared_2777_ = v_isSharedCheck_2797_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_tail_2774_);
lean_inc(v_value_2773_);
lean_inc(v_key_2772_);
lean_dec(v_x_2771_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2797_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2778_; uint64_t v___x_2779_; uint64_t v___x_2780_; uint64_t v___x_2781_; uint64_t v_fold_2782_; uint64_t v___x_2783_; uint64_t v___x_2784_; uint64_t v___x_2785_; size_t v___x_2786_; size_t v___x_2787_; size_t v___x_2788_; size_t v___x_2789_; size_t v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2793_; 
v___x_2778_ = lean_array_get_size(v_x_2770_);
v___x_2779_ = l_Lean_instHashableFVarId_hash(v_key_2772_);
v___x_2780_ = 32ULL;
v___x_2781_ = lean_uint64_shift_right(v___x_2779_, v___x_2780_);
v_fold_2782_ = lean_uint64_xor(v___x_2779_, v___x_2781_);
v___x_2783_ = 16ULL;
v___x_2784_ = lean_uint64_shift_right(v_fold_2782_, v___x_2783_);
v___x_2785_ = lean_uint64_xor(v_fold_2782_, v___x_2784_);
v___x_2786_ = lean_uint64_to_usize(v___x_2785_);
v___x_2787_ = lean_usize_of_nat(v___x_2778_);
v___x_2788_ = ((size_t)1ULL);
v___x_2789_ = lean_usize_sub(v___x_2787_, v___x_2788_);
v___x_2790_ = lean_usize_land(v___x_2786_, v___x_2789_);
v___x_2791_ = lean_array_uget_borrowed(v_x_2770_, v___x_2790_);
lean_inc(v___x_2791_);
if (v_isShared_2777_ == 0)
{
lean_ctor_set(v___x_2776_, 2, v___x_2791_);
v___x_2793_ = v___x_2776_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_key_2772_);
lean_ctor_set(v_reuseFailAlloc_2796_, 1, v_value_2773_);
lean_ctor_set(v_reuseFailAlloc_2796_, 2, v___x_2791_);
v___x_2793_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
lean_object* v___x_2794_; 
v___x_2794_ = lean_array_uset(v_x_2770_, v___x_2790_, v___x_2793_);
v_x_2770_ = v___x_2794_;
v_x_2771_ = v_tail_2774_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(lean_object* v_i_2798_, lean_object* v_source_2799_, lean_object* v_target_2800_){
_start:
{
lean_object* v___x_2801_; uint8_t v___x_2802_; 
v___x_2801_ = lean_array_get_size(v_source_2799_);
v___x_2802_ = lean_nat_dec_lt(v_i_2798_, v___x_2801_);
if (v___x_2802_ == 0)
{
lean_dec_ref(v_source_2799_);
lean_dec(v_i_2798_);
return v_target_2800_;
}
else
{
lean_object* v_es_2803_; lean_object* v___x_2804_; lean_object* v_source_2805_; lean_object* v_target_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; 
v_es_2803_ = lean_array_fget(v_source_2799_, v_i_2798_);
v___x_2804_ = lean_box(0);
v_source_2805_ = lean_array_fset(v_source_2799_, v_i_2798_, v___x_2804_);
v_target_2806_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(v_target_2800_, v_es_2803_);
v___x_2807_ = lean_unsigned_to_nat(1u);
v___x_2808_ = lean_nat_add(v_i_2798_, v___x_2807_);
lean_dec(v_i_2798_);
v_i_2798_ = v___x_2808_;
v_source_2799_ = v_source_2805_;
v_target_2800_ = v_target_2806_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(lean_object* v_data_2810_){
_start:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v_nbuckets_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2811_ = lean_array_get_size(v_data_2810_);
v___x_2812_ = lean_unsigned_to_nat(2u);
v_nbuckets_2813_ = lean_nat_mul(v___x_2811_, v___x_2812_);
v___x_2814_ = lean_unsigned_to_nat(0u);
v___x_2815_ = lean_box(0);
v___x_2816_ = lean_mk_array(v_nbuckets_2813_, v___x_2815_);
v___x_2817_ = lean_array_propagate_mark(v_data_2810_, v___x_2816_);
v___x_2818_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(v___x_2814_, v_data_2810_, v___x_2817_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(lean_object* v_m_2819_, lean_object* v_a_2820_, lean_object* v_b_2821_){
_start:
{
lean_object* v_size_2822_; lean_object* v_buckets_2823_; lean_object* v___x_2824_; uint64_t v___x_2825_; uint64_t v___x_2826_; uint64_t v___x_2827_; uint64_t v_fold_2828_; uint64_t v___x_2829_; uint64_t v___x_2830_; uint64_t v___x_2831_; size_t v___x_2832_; size_t v___x_2833_; size_t v___x_2834_; size_t v___x_2835_; size_t v___x_2836_; lean_object* v_bkt_2837_; uint8_t v___x_2838_; 
v_size_2822_ = lean_ctor_get(v_m_2819_, 0);
v_buckets_2823_ = lean_ctor_get(v_m_2819_, 1);
v___x_2824_ = lean_array_get_size(v_buckets_2823_);
v___x_2825_ = l_Lean_instHashableFVarId_hash(v_a_2820_);
v___x_2826_ = 32ULL;
v___x_2827_ = lean_uint64_shift_right(v___x_2825_, v___x_2826_);
v_fold_2828_ = lean_uint64_xor(v___x_2825_, v___x_2827_);
v___x_2829_ = 16ULL;
v___x_2830_ = lean_uint64_shift_right(v_fold_2828_, v___x_2829_);
v___x_2831_ = lean_uint64_xor(v_fold_2828_, v___x_2830_);
v___x_2832_ = lean_uint64_to_usize(v___x_2831_);
v___x_2833_ = lean_usize_of_nat(v___x_2824_);
v___x_2834_ = ((size_t)1ULL);
v___x_2835_ = lean_usize_sub(v___x_2833_, v___x_2834_);
v___x_2836_ = lean_usize_land(v___x_2832_, v___x_2835_);
v_bkt_2837_ = lean_array_uget_borrowed(v_buckets_2823_, v___x_2836_);
v___x_2838_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_2820_, v_bkt_2837_);
if (v___x_2838_ == 0)
{
lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2859_; 
lean_inc_ref(v_buckets_2823_);
lean_inc(v_size_2822_);
v_isSharedCheck_2859_ = !lean_is_exclusive(v_m_2819_);
if (v_isSharedCheck_2859_ == 0)
{
lean_object* v_unused_2860_; lean_object* v_unused_2861_; 
v_unused_2860_ = lean_ctor_get(v_m_2819_, 1);
lean_dec(v_unused_2860_);
v_unused_2861_ = lean_ctor_get(v_m_2819_, 0);
lean_dec(v_unused_2861_);
v___x_2840_ = v_m_2819_;
v_isShared_2841_ = v_isSharedCheck_2859_;
goto v_resetjp_2839_;
}
else
{
lean_dec(v_m_2819_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2859_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v___x_2842_; lean_object* v_size_x27_2843_; lean_object* v___x_2844_; lean_object* v_buckets_x27_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; uint8_t v___x_2851_; 
v___x_2842_ = lean_unsigned_to_nat(1u);
v_size_x27_2843_ = lean_nat_add(v_size_2822_, v___x_2842_);
lean_dec(v_size_2822_);
lean_inc(v_bkt_2837_);
v___x_2844_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2844_, 0, v_a_2820_);
lean_ctor_set(v___x_2844_, 1, v_b_2821_);
lean_ctor_set(v___x_2844_, 2, v_bkt_2837_);
v_buckets_x27_2845_ = lean_array_uset(v_buckets_2823_, v___x_2836_, v___x_2844_);
v___x_2846_ = lean_unsigned_to_nat(4u);
v___x_2847_ = lean_nat_mul(v_size_x27_2843_, v___x_2846_);
v___x_2848_ = lean_unsigned_to_nat(3u);
v___x_2849_ = lean_nat_div(v___x_2847_, v___x_2848_);
lean_dec(v___x_2847_);
v___x_2850_ = lean_array_get_size(v_buckets_x27_2845_);
v___x_2851_ = lean_nat_dec_le(v___x_2849_, v___x_2850_);
lean_dec(v___x_2849_);
if (v___x_2851_ == 0)
{
lean_object* v_val_2852_; lean_object* v___x_2854_; 
v_val_2852_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(v_buckets_x27_2845_);
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 1, v_val_2852_);
lean_ctor_set(v___x_2840_, 0, v_size_x27_2843_);
v___x_2854_ = v___x_2840_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_size_x27_2843_);
lean_ctor_set(v_reuseFailAlloc_2855_, 1, v_val_2852_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
else
{
lean_object* v___x_2857_; 
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 1, v_buckets_x27_2845_);
lean_ctor_set(v___x_2840_, 0, v_size_x27_2843_);
v___x_2857_ = v___x_2840_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_size_x27_2843_);
lean_ctor_set(v_reuseFailAlloc_2858_, 1, v_buckets_x27_2845_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
}
else
{
lean_dec(v_b_2821_);
lean_dec(v_a_2820_);
return v_m_2819_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(lean_object* v_m_2862_, lean_object* v_a_2863_){
_start:
{
lean_object* v_buckets_2864_; lean_object* v___x_2865_; uint64_t v___x_2866_; uint64_t v___x_2867_; uint64_t v___x_2868_; uint64_t v_fold_2869_; uint64_t v___x_2870_; uint64_t v___x_2871_; uint64_t v___x_2872_; size_t v___x_2873_; size_t v___x_2874_; size_t v___x_2875_; size_t v___x_2876_; size_t v___x_2877_; lean_object* v___x_2878_; uint8_t v___x_2879_; 
v_buckets_2864_ = lean_ctor_get(v_m_2862_, 1);
v___x_2865_ = lean_array_get_size(v_buckets_2864_);
v___x_2866_ = l_Lean_instHashableFVarId_hash(v_a_2863_);
v___x_2867_ = 32ULL;
v___x_2868_ = lean_uint64_shift_right(v___x_2866_, v___x_2867_);
v_fold_2869_ = lean_uint64_xor(v___x_2866_, v___x_2868_);
v___x_2870_ = 16ULL;
v___x_2871_ = lean_uint64_shift_right(v_fold_2869_, v___x_2870_);
v___x_2872_ = lean_uint64_xor(v_fold_2869_, v___x_2871_);
v___x_2873_ = lean_uint64_to_usize(v___x_2872_);
v___x_2874_ = lean_usize_of_nat(v___x_2865_);
v___x_2875_ = ((size_t)1ULL);
v___x_2876_ = lean_usize_sub(v___x_2874_, v___x_2875_);
v___x_2877_ = lean_usize_land(v___x_2873_, v___x_2876_);
v___x_2878_ = lean_array_uget_borrowed(v_buckets_2864_, v___x_2877_);
v___x_2879_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_2863_, v___x_2878_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg___boxed(lean_object* v_m_2880_, lean_object* v_a_2881_){
_start:
{
uint8_t v_res_2882_; lean_object* v_r_2883_; 
v_res_2882_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_m_2880_, v_a_2881_);
lean_dec(v_a_2881_);
lean_dec_ref(v_m_2880_);
v_r_2883_ = lean_box(v_res_2882_);
return v_r_2883_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(lean_object* v_a_2884_, lean_object* v_x_2885_){
_start:
{
if (lean_obj_tag(v_x_2885_) == 0)
{
lean_object* v___x_2886_; 
v___x_2886_ = lean_box(0);
return v___x_2886_;
}
else
{
lean_object* v_key_2887_; lean_object* v_value_2888_; lean_object* v_tail_2889_; uint8_t v___x_2890_; 
v_key_2887_ = lean_ctor_get(v_x_2885_, 0);
v_value_2888_ = lean_ctor_get(v_x_2885_, 1);
v_tail_2889_ = lean_ctor_get(v_x_2885_, 2);
v___x_2890_ = lean_expr_eqv(v_key_2887_, v_a_2884_);
if (v___x_2890_ == 0)
{
v_x_2885_ = v_tail_2889_;
goto _start;
}
else
{
lean_object* v___x_2892_; 
lean_inc(v_value_2888_);
v___x_2892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2892_, 0, v_value_2888_);
return v___x_2892_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg___boxed(lean_object* v_a_2893_, lean_object* v_x_2894_){
_start:
{
lean_object* v_res_2895_; 
v_res_2895_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(v_a_2893_, v_x_2894_);
lean_dec(v_x_2894_);
lean_dec_ref(v_a_2893_);
return v_res_2895_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(lean_object* v_m_2896_, lean_object* v_a_2897_){
_start:
{
lean_object* v_buckets_2898_; lean_object* v___x_2899_; uint64_t v___x_2900_; uint64_t v___x_2901_; uint64_t v___x_2902_; uint64_t v_fold_2903_; uint64_t v___x_2904_; uint64_t v___x_2905_; uint64_t v___x_2906_; size_t v___x_2907_; size_t v___x_2908_; size_t v___x_2909_; size_t v___x_2910_; size_t v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v_buckets_2898_ = lean_ctor_get(v_m_2896_, 1);
v___x_2899_ = lean_array_get_size(v_buckets_2898_);
v___x_2900_ = l_Lean_Expr_hash(v_a_2897_);
v___x_2901_ = 32ULL;
v___x_2902_ = lean_uint64_shift_right(v___x_2900_, v___x_2901_);
v_fold_2903_ = lean_uint64_xor(v___x_2900_, v___x_2902_);
v___x_2904_ = 16ULL;
v___x_2905_ = lean_uint64_shift_right(v_fold_2903_, v___x_2904_);
v___x_2906_ = lean_uint64_xor(v_fold_2903_, v___x_2905_);
v___x_2907_ = lean_uint64_to_usize(v___x_2906_);
v___x_2908_ = lean_usize_of_nat(v___x_2899_);
v___x_2909_ = ((size_t)1ULL);
v___x_2910_ = lean_usize_sub(v___x_2908_, v___x_2909_);
v___x_2911_ = lean_usize_land(v___x_2907_, v___x_2910_);
v___x_2912_ = lean_array_uget_borrowed(v_buckets_2898_, v___x_2911_);
v___x_2913_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(v_a_2897_, v___x_2912_);
return v___x_2913_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg___boxed(lean_object* v_m_2914_, lean_object* v_a_2915_){
_start:
{
lean_object* v_res_2916_; 
v_res_2916_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(v_m_2914_, v_a_2915_);
lean_dec_ref(v_a_2915_);
lean_dec_ref(v_m_2914_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(lean_object* v_a_2917_, lean_object* v_b_2918_, lean_object* v_x_2919_){
_start:
{
if (lean_obj_tag(v_x_2919_) == 0)
{
lean_dec(v_b_2918_);
lean_dec_ref(v_a_2917_);
return v_x_2919_;
}
else
{
lean_object* v_key_2920_; lean_object* v_value_2921_; lean_object* v_tail_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2934_; 
v_key_2920_ = lean_ctor_get(v_x_2919_, 0);
v_value_2921_ = lean_ctor_get(v_x_2919_, 1);
v_tail_2922_ = lean_ctor_get(v_x_2919_, 2);
v_isSharedCheck_2934_ = !lean_is_exclusive(v_x_2919_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2924_ = v_x_2919_;
v_isShared_2925_ = v_isSharedCheck_2934_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_tail_2922_);
lean_inc(v_value_2921_);
lean_inc(v_key_2920_);
lean_dec(v_x_2919_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2934_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
uint8_t v___x_2926_; 
v___x_2926_ = lean_expr_eqv(v_key_2920_, v_a_2917_);
if (v___x_2926_ == 0)
{
lean_object* v___x_2927_; lean_object* v___x_2929_; 
v___x_2927_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(v_a_2917_, v_b_2918_, v_tail_2922_);
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 2, v___x_2927_);
v___x_2929_ = v___x_2924_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_key_2920_);
lean_ctor_set(v_reuseFailAlloc_2930_, 1, v_value_2921_);
lean_ctor_set(v_reuseFailAlloc_2930_, 2, v___x_2927_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
else
{
lean_object* v___x_2932_; 
lean_dec(v_value_2921_);
lean_dec(v_key_2920_);
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 1, v_b_2918_);
lean_ctor_set(v___x_2924_, 0, v_a_2917_);
v___x_2932_ = v___x_2924_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2917_);
lean_ctor_set(v_reuseFailAlloc_2933_, 1, v_b_2918_);
lean_ctor_set(v_reuseFailAlloc_2933_, 2, v_tail_2922_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(lean_object* v_x_2935_, lean_object* v_x_2936_){
_start:
{
if (lean_obj_tag(v_x_2936_) == 0)
{
return v_x_2935_;
}
else
{
lean_object* v_key_2937_; lean_object* v_value_2938_; lean_object* v_tail_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2962_; 
v_key_2937_ = lean_ctor_get(v_x_2936_, 0);
v_value_2938_ = lean_ctor_get(v_x_2936_, 1);
v_tail_2939_ = lean_ctor_get(v_x_2936_, 2);
v_isSharedCheck_2962_ = !lean_is_exclusive(v_x_2936_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2941_ = v_x_2936_;
v_isShared_2942_ = v_isSharedCheck_2962_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_tail_2939_);
lean_inc(v_value_2938_);
lean_inc(v_key_2937_);
lean_dec(v_x_2936_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2962_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2943_; uint64_t v___x_2944_; uint64_t v___x_2945_; uint64_t v___x_2946_; uint64_t v_fold_2947_; uint64_t v___x_2948_; uint64_t v___x_2949_; uint64_t v___x_2950_; size_t v___x_2951_; size_t v___x_2952_; size_t v___x_2953_; size_t v___x_2954_; size_t v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2958_; 
v___x_2943_ = lean_array_get_size(v_x_2935_);
v___x_2944_ = l_Lean_Expr_hash(v_key_2937_);
v___x_2945_ = 32ULL;
v___x_2946_ = lean_uint64_shift_right(v___x_2944_, v___x_2945_);
v_fold_2947_ = lean_uint64_xor(v___x_2944_, v___x_2946_);
v___x_2948_ = 16ULL;
v___x_2949_ = lean_uint64_shift_right(v_fold_2947_, v___x_2948_);
v___x_2950_ = lean_uint64_xor(v_fold_2947_, v___x_2949_);
v___x_2951_ = lean_uint64_to_usize(v___x_2950_);
v___x_2952_ = lean_usize_of_nat(v___x_2943_);
v___x_2953_ = ((size_t)1ULL);
v___x_2954_ = lean_usize_sub(v___x_2952_, v___x_2953_);
v___x_2955_ = lean_usize_land(v___x_2951_, v___x_2954_);
v___x_2956_ = lean_array_uget_borrowed(v_x_2935_, v___x_2955_);
lean_inc(v___x_2956_);
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 2, v___x_2956_);
v___x_2958_ = v___x_2941_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v_key_2937_);
lean_ctor_set(v_reuseFailAlloc_2961_, 1, v_value_2938_);
lean_ctor_set(v_reuseFailAlloc_2961_, 2, v___x_2956_);
v___x_2958_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
lean_object* v___x_2959_; 
v___x_2959_ = lean_array_uset(v_x_2935_, v___x_2955_, v___x_2958_);
v_x_2935_ = v___x_2959_;
v_x_2936_ = v_tail_2939_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(lean_object* v_i_2963_, lean_object* v_source_2964_, lean_object* v_target_2965_){
_start:
{
lean_object* v___x_2966_; uint8_t v___x_2967_; 
v___x_2966_ = lean_array_get_size(v_source_2964_);
v___x_2967_ = lean_nat_dec_lt(v_i_2963_, v___x_2966_);
if (v___x_2967_ == 0)
{
lean_dec_ref(v_source_2964_);
lean_dec(v_i_2963_);
return v_target_2965_;
}
else
{
lean_object* v_es_2968_; lean_object* v___x_2969_; lean_object* v_source_2970_; lean_object* v_target_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v_es_2968_ = lean_array_fget(v_source_2964_, v_i_2963_);
v___x_2969_ = lean_box(0);
v_source_2970_ = lean_array_fset(v_source_2964_, v_i_2963_, v___x_2969_);
v_target_2971_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(v_target_2965_, v_es_2968_);
v___x_2972_ = lean_unsigned_to_nat(1u);
v___x_2973_ = lean_nat_add(v_i_2963_, v___x_2972_);
lean_dec(v_i_2963_);
v_i_2963_ = v___x_2973_;
v_source_2964_ = v_source_2970_;
v_target_2965_ = v_target_2971_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(lean_object* v_data_2975_){
_start:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v_nbuckets_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v___x_2976_ = lean_array_get_size(v_data_2975_);
v___x_2977_ = lean_unsigned_to_nat(2u);
v_nbuckets_2978_ = lean_nat_mul(v___x_2976_, v___x_2977_);
v___x_2979_ = lean_unsigned_to_nat(0u);
v___x_2980_ = lean_box(0);
v___x_2981_ = lean_mk_array(v_nbuckets_2978_, v___x_2980_);
v___x_2982_ = lean_array_propagate_mark(v_data_2975_, v___x_2981_);
v___x_2983_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(v___x_2979_, v_data_2975_, v___x_2982_);
return v___x_2983_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(lean_object* v_a_2984_, lean_object* v_x_2985_){
_start:
{
if (lean_obj_tag(v_x_2985_) == 0)
{
uint8_t v___x_2986_; 
v___x_2986_ = 0;
return v___x_2986_;
}
else
{
lean_object* v_key_2987_; lean_object* v_tail_2988_; uint8_t v___x_2989_; 
v_key_2987_ = lean_ctor_get(v_x_2985_, 0);
v_tail_2988_ = lean_ctor_get(v_x_2985_, 2);
v___x_2989_ = lean_expr_eqv(v_key_2987_, v_a_2984_);
if (v___x_2989_ == 0)
{
v_x_2985_ = v_tail_2988_;
goto _start;
}
else
{
return v___x_2989_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg___boxed(lean_object* v_a_2991_, lean_object* v_x_2992_){
_start:
{
uint8_t v_res_2993_; lean_object* v_r_2994_; 
v_res_2993_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(v_a_2991_, v_x_2992_);
lean_dec(v_x_2992_);
lean_dec_ref(v_a_2991_);
v_r_2994_ = lean_box(v_res_2993_);
return v_r_2994_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(lean_object* v_m_2995_, lean_object* v_a_2996_, lean_object* v_b_2997_){
_start:
{
lean_object* v_size_2998_; lean_object* v_buckets_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3042_; 
v_size_2998_ = lean_ctor_get(v_m_2995_, 0);
v_buckets_2999_ = lean_ctor_get(v_m_2995_, 1);
v_isSharedCheck_3042_ = !lean_is_exclusive(v_m_2995_);
if (v_isSharedCheck_3042_ == 0)
{
v___x_3001_ = v_m_2995_;
v_isShared_3002_ = v_isSharedCheck_3042_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_buckets_2999_);
lean_inc(v_size_2998_);
lean_dec(v_m_2995_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3042_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v___x_3003_; uint64_t v___x_3004_; uint64_t v___x_3005_; uint64_t v___x_3006_; uint64_t v_fold_3007_; uint64_t v___x_3008_; uint64_t v___x_3009_; uint64_t v___x_3010_; size_t v___x_3011_; size_t v___x_3012_; size_t v___x_3013_; size_t v___x_3014_; size_t v___x_3015_; lean_object* v_bkt_3016_; uint8_t v___x_3017_; 
v___x_3003_ = lean_array_get_size(v_buckets_2999_);
v___x_3004_ = l_Lean_Expr_hash(v_a_2996_);
v___x_3005_ = 32ULL;
v___x_3006_ = lean_uint64_shift_right(v___x_3004_, v___x_3005_);
v_fold_3007_ = lean_uint64_xor(v___x_3004_, v___x_3006_);
v___x_3008_ = 16ULL;
v___x_3009_ = lean_uint64_shift_right(v_fold_3007_, v___x_3008_);
v___x_3010_ = lean_uint64_xor(v_fold_3007_, v___x_3009_);
v___x_3011_ = lean_uint64_to_usize(v___x_3010_);
v___x_3012_ = lean_usize_of_nat(v___x_3003_);
v___x_3013_ = ((size_t)1ULL);
v___x_3014_ = lean_usize_sub(v___x_3012_, v___x_3013_);
v___x_3015_ = lean_usize_land(v___x_3011_, v___x_3014_);
v_bkt_3016_ = lean_array_uget_borrowed(v_buckets_2999_, v___x_3015_);
v___x_3017_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(v_a_2996_, v_bkt_3016_);
if (v___x_3017_ == 0)
{
lean_object* v___x_3018_; lean_object* v_size_x27_3019_; lean_object* v___x_3020_; lean_object* v_buckets_x27_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; uint8_t v___x_3027_; 
v___x_3018_ = lean_unsigned_to_nat(1u);
v_size_x27_3019_ = lean_nat_add(v_size_2998_, v___x_3018_);
lean_dec(v_size_2998_);
lean_inc(v_bkt_3016_);
v___x_3020_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3020_, 0, v_a_2996_);
lean_ctor_set(v___x_3020_, 1, v_b_2997_);
lean_ctor_set(v___x_3020_, 2, v_bkt_3016_);
v_buckets_x27_3021_ = lean_array_uset(v_buckets_2999_, v___x_3015_, v___x_3020_);
v___x_3022_ = lean_unsigned_to_nat(4u);
v___x_3023_ = lean_nat_mul(v_size_x27_3019_, v___x_3022_);
v___x_3024_ = lean_unsigned_to_nat(3u);
v___x_3025_ = lean_nat_div(v___x_3023_, v___x_3024_);
lean_dec(v___x_3023_);
v___x_3026_ = lean_array_get_size(v_buckets_x27_3021_);
v___x_3027_ = lean_nat_dec_le(v___x_3025_, v___x_3026_);
lean_dec(v___x_3025_);
if (v___x_3027_ == 0)
{
lean_object* v_val_3028_; lean_object* v___x_3030_; 
v_val_3028_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(v_buckets_x27_3021_);
if (v_isShared_3002_ == 0)
{
lean_ctor_set(v___x_3001_, 1, v_val_3028_);
lean_ctor_set(v___x_3001_, 0, v_size_x27_3019_);
v___x_3030_ = v___x_3001_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_size_x27_3019_);
lean_ctor_set(v_reuseFailAlloc_3031_, 1, v_val_3028_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
else
{
lean_object* v___x_3033_; 
if (v_isShared_3002_ == 0)
{
lean_ctor_set(v___x_3001_, 1, v_buckets_x27_3021_);
lean_ctor_set(v___x_3001_, 0, v_size_x27_3019_);
v___x_3033_ = v___x_3001_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_size_x27_3019_);
lean_ctor_set(v_reuseFailAlloc_3034_, 1, v_buckets_x27_3021_);
v___x_3033_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
return v___x_3033_;
}
}
}
else
{
lean_object* v___x_3035_; lean_object* v_buckets_x27_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3040_; 
lean_inc(v_bkt_3016_);
v___x_3035_ = lean_box(0);
v_buckets_x27_3036_ = lean_array_uset(v_buckets_2999_, v___x_3015_, v___x_3035_);
v___x_3037_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(v_a_2996_, v_b_2997_, v_bkt_3016_);
v___x_3038_ = lean_array_uset(v_buckets_x27_3036_, v___x_3015_, v___x_3037_);
if (v_isShared_3002_ == 0)
{
lean_ctor_set(v___x_3001_, 1, v___x_3038_);
v___x_3040_ = v___x_3001_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_size_2998_);
lean_ctor_set(v_reuseFailAlloc_3041_, 1, v___x_3038_);
v___x_3040_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
return v___x_3040_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(lean_object* v_g_3043_, lean_object* v_e_3044_, lean_object* v_a_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_){
_start:
{
lean_object* v_a_3051_; lean_object* v_fst_3052_; lean_object* v___y_3058_; lean_object* v___x_3061_; lean_object* v___x_3062_; 
v___x_3061_ = lean_st_ref_get(v_a_3045_);
v___x_3062_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(v___x_3061_, v_e_3044_);
lean_dec(v___x_3061_);
if (lean_obj_tag(v___x_3062_) == 0)
{
lean_object* v___x_3063_; 
lean_inc_ref(v_g_3043_);
lean_inc(v___y_3048_);
lean_inc_ref(v___y_3047_);
lean_inc_ref(v_e_3044_);
v___x_3063_ = lean_apply_5(v_g_3043_, v_e_3044_, v___y_3046_, v___y_3047_, v___y_3048_, lean_box(0));
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v_a_3064_; lean_object* v_fst_3065_; lean_object* v_snd_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3111_; 
v_a_3064_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_a_3064_);
lean_dec_ref_known(v___x_3063_, 1);
v_fst_3065_ = lean_ctor_get(v_a_3064_, 0);
v_snd_3066_ = lean_ctor_get(v_a_3064_, 1);
v_isSharedCheck_3111_ = !lean_is_exclusive(v_a_3064_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3068_ = v_a_3064_;
v_isShared_3069_ = v_isSharedCheck_3111_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_snd_3066_);
lean_inc(v_fst_3065_);
lean_dec(v_a_3064_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3111_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v_d_3071_; lean_object* v_b_3072_; lean_object* v___y_3073_; uint8_t v___x_3078_; 
v___x_3078_ = lean_unbox(v_fst_3065_);
lean_dec(v_fst_3065_);
if (v___x_3078_ == 0)
{
lean_object* v___x_3079_; lean_object* v___x_3081_; 
lean_dec_ref(v_g_3043_);
v___x_3079_ = lean_box(0);
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 0, v___x_3079_);
v___x_3081_ = v___x_3068_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v___x_3079_);
lean_ctor_set(v_reuseFailAlloc_3082_, 1, v_snd_3066_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
v_a_3051_ = v___x_3081_;
v_fst_3052_ = v___x_3079_;
goto v___jp_3050_;
}
}
else
{
switch(lean_obj_tag(v_e_3044_))
{
case 7:
{
lean_object* v_binderType_3083_; lean_object* v_body_3084_; 
lean_del_object(v___x_3068_);
v_binderType_3083_ = lean_ctor_get(v_e_3044_, 1);
v_body_3084_ = lean_ctor_get(v_e_3044_, 2);
lean_inc_ref(v_body_3084_);
lean_inc_ref(v_binderType_3083_);
v_d_3071_ = v_binderType_3083_;
v_b_3072_ = v_body_3084_;
v___y_3073_ = v_a_3045_;
goto v___jp_3070_;
}
case 6:
{
lean_object* v_binderType_3085_; lean_object* v_body_3086_; 
lean_del_object(v___x_3068_);
v_binderType_3085_ = lean_ctor_get(v_e_3044_, 1);
v_body_3086_ = lean_ctor_get(v_e_3044_, 2);
lean_inc_ref(v_body_3086_);
lean_inc_ref(v_binderType_3085_);
v_d_3071_ = v_binderType_3085_;
v_b_3072_ = v_body_3086_;
v___y_3073_ = v_a_3045_;
goto v___jp_3070_;
}
case 8:
{
lean_object* v_type_3087_; lean_object* v_value_3088_; lean_object* v_body_3089_; lean_object* v___x_3090_; 
lean_del_object(v___x_3068_);
v_type_3087_ = lean_ctor_get(v_e_3044_, 1);
v_value_3088_ = lean_ctor_get(v_e_3044_, 2);
v_body_3089_ = lean_ctor_get(v_e_3044_, 3);
lean_inc_ref(v_type_3087_);
lean_inc_ref(v_g_3043_);
v___x_3090_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3043_, v_type_3087_, v_a_3045_, v_snd_3066_, v___y_3047_, v___y_3048_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_object* v_a_3091_; lean_object* v_snd_3092_; lean_object* v___x_3093_; 
v_a_3091_ = lean_ctor_get(v___x_3090_, 0);
lean_inc(v_a_3091_);
lean_dec_ref_known(v___x_3090_, 1);
v_snd_3092_ = lean_ctor_get(v_a_3091_, 1);
lean_inc(v_snd_3092_);
lean_dec(v_a_3091_);
lean_inc_ref(v_value_3088_);
lean_inc_ref(v_g_3043_);
v___x_3093_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3043_, v_value_3088_, v_a_3045_, v_snd_3092_, v___y_3047_, v___y_3048_);
if (lean_obj_tag(v___x_3093_) == 0)
{
lean_object* v_a_3094_; lean_object* v_snd_3095_; lean_object* v___x_3096_; 
v_a_3094_ = lean_ctor_get(v___x_3093_, 0);
lean_inc(v_a_3094_);
lean_dec_ref_known(v___x_3093_, 1);
v_snd_3095_ = lean_ctor_get(v_a_3094_, 1);
lean_inc(v_snd_3095_);
lean_dec(v_a_3094_);
lean_inc_ref(v_body_3089_);
v___x_3096_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3043_, v_body_3089_, v_a_3045_, v_snd_3095_, v___y_3047_, v___y_3048_);
v___y_3058_ = v___x_3096_;
goto v___jp_3057_;
}
else
{
lean_dec_ref_known(v_e_3044_, 4);
lean_dec_ref(v_g_3043_);
return v___x_3093_;
}
}
else
{
lean_dec_ref_known(v_e_3044_, 4);
lean_dec_ref(v_g_3043_);
return v___x_3090_;
}
}
case 5:
{
lean_object* v_fn_3097_; lean_object* v_arg_3098_; lean_object* v___x_3099_; 
lean_del_object(v___x_3068_);
v_fn_3097_ = lean_ctor_get(v_e_3044_, 0);
v_arg_3098_ = lean_ctor_get(v_e_3044_, 1);
lean_inc_ref(v_fn_3097_);
lean_inc_ref(v_g_3043_);
v___x_3099_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3043_, v_fn_3097_, v_a_3045_, v_snd_3066_, v___y_3047_, v___y_3048_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; lean_object* v_snd_3101_; lean_object* v___x_3102_; 
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_a_3100_);
lean_dec_ref_known(v___x_3099_, 1);
v_snd_3101_ = lean_ctor_get(v_a_3100_, 1);
lean_inc(v_snd_3101_);
lean_dec(v_a_3100_);
lean_inc_ref(v_arg_3098_);
v___x_3102_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3043_, v_arg_3098_, v_a_3045_, v_snd_3101_, v___y_3047_, v___y_3048_);
v___y_3058_ = v___x_3102_;
goto v___jp_3057_;
}
else
{
lean_dec_ref_known(v_e_3044_, 2);
lean_dec_ref(v_g_3043_);
return v___x_3099_;
}
}
case 10:
{
lean_object* v_expr_3103_; lean_object* v___x_3104_; 
lean_del_object(v___x_3068_);
v_expr_3103_ = lean_ctor_get(v_e_3044_, 1);
lean_inc_ref(v_expr_3103_);
v___x_3104_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3043_, v_expr_3103_, v_a_3045_, v_snd_3066_, v___y_3047_, v___y_3048_);
v___y_3058_ = v___x_3104_;
goto v___jp_3057_;
}
case 11:
{
lean_object* v_struct_3105_; lean_object* v___x_3106_; 
lean_del_object(v___x_3068_);
v_struct_3105_ = lean_ctor_get(v_e_3044_, 2);
lean_inc_ref(v_struct_3105_);
v___x_3106_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3043_, v_struct_3105_, v_a_3045_, v_snd_3066_, v___y_3047_, v___y_3048_);
v___y_3058_ = v___x_3106_;
goto v___jp_3057_;
}
default: 
{
lean_object* v___x_3107_; lean_object* v___x_3109_; 
lean_dec_ref(v_g_3043_);
v___x_3107_ = lean_box(0);
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 0, v___x_3107_);
v___x_3109_ = v___x_3068_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v___x_3107_);
lean_ctor_set(v_reuseFailAlloc_3110_, 1, v_snd_3066_);
v___x_3109_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
v_a_3051_ = v___x_3109_;
v_fst_3052_ = v___x_3107_;
goto v___jp_3050_;
}
}
}
}
v___jp_3070_:
{
lean_object* v___x_3074_; 
lean_inc_ref(v_g_3043_);
v___x_3074_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3043_, v_d_3071_, v___y_3073_, v_snd_3066_, v___y_3047_, v___y_3048_);
if (lean_obj_tag(v___x_3074_) == 0)
{
lean_object* v_a_3075_; lean_object* v_snd_3076_; lean_object* v___x_3077_; 
v_a_3075_ = lean_ctor_get(v___x_3074_, 0);
lean_inc(v_a_3075_);
lean_dec_ref_known(v___x_3074_, 1);
v_snd_3076_ = lean_ctor_get(v_a_3075_, 1);
lean_inc(v_snd_3076_);
lean_dec(v_a_3075_);
v___x_3077_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3043_, v_b_3072_, v___y_3073_, v_snd_3076_, v___y_3047_, v___y_3048_);
v___y_3058_ = v___x_3077_;
goto v___jp_3057_;
}
else
{
lean_dec_ref(v_b_3072_);
lean_dec_ref(v_e_3044_);
lean_dec_ref(v_g_3043_);
return v___x_3074_;
}
}
}
}
else
{
lean_object* v_a_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3119_; 
lean_dec_ref(v_e_3044_);
lean_dec_ref(v_g_3043_);
v_a_3112_ = lean_ctor_get(v___x_3063_, 0);
v_isSharedCheck_3119_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3119_ == 0)
{
v___x_3114_ = v___x_3063_;
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_a_3112_);
lean_dec(v___x_3063_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
lean_object* v___x_3117_; 
if (v_isShared_3115_ == 0)
{
v___x_3117_ = v___x_3114_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_a_3112_);
v___x_3117_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
return v___x_3117_;
}
}
}
}
else
{
lean_object* v_val_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3128_; 
lean_dec_ref(v_e_3044_);
lean_dec_ref(v_g_3043_);
v_val_3120_ = lean_ctor_get(v___x_3062_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3062_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3122_ = v___x_3062_;
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_val_3120_);
lean_dec(v___x_3062_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3124_; lean_object* v___x_3126_; 
v___x_3124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3124_, 0, v_val_3120_);
lean_ctor_set(v___x_3124_, 1, v___y_3046_);
if (v_isShared_3123_ == 0)
{
lean_ctor_set_tag(v___x_3122_, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3124_);
v___x_3126_ = v___x_3122_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v___x_3124_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
v___jp_3050_:
{
lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3053_ = lean_st_ref_take(v_a_3045_);
v___x_3054_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(v___x_3053_, v_e_3044_, v_fst_3052_);
v___x_3055_ = lean_st_ref_put(v_a_3045_, v___x_3054_);
v___x_3056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3056_, 0, v_a_3051_);
return v___x_3056_;
}
v___jp_3057_:
{
if (lean_obj_tag(v___y_3058_) == 0)
{
lean_object* v_a_3059_; lean_object* v_fst_3060_; 
v_a_3059_ = lean_ctor_get(v___y_3058_, 0);
lean_inc(v_a_3059_);
lean_dec_ref_known(v___y_3058_, 1);
v_fst_3060_ = lean_ctor_get(v_a_3059_, 0);
lean_inc(v_fst_3060_);
v_a_3051_ = v_a_3059_;
v_fst_3052_ = v_fst_3060_;
goto v___jp_3050_;
}
else
{
lean_dec_ref(v_e_3044_);
return v___y_3058_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___boxed(lean_object* v_g_3129_, lean_object* v_e_3130_, lean_object* v_a_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_){
_start:
{
lean_object* v_res_3136_; 
v_res_3136_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3129_, v_e_3130_, v_a_3131_, v___y_3132_, v___y_3133_, v___y_3134_);
lean_dec(v___y_3134_);
lean_dec_ref(v___y_3133_);
lean_dec(v_a_3131_);
return v_res_3136_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0(void){
_start:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3137_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0);
v___x_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3137_);
return v___x_3138_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1(void){
_start:
{
lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3139_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_3140_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0);
v___x_3141_ = lean_unsigned_to_nat(0u);
v___x_3142_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
lean_ctor_set(v___x_3142_, 1, v___x_3141_);
lean_ctor_set(v___x_3142_, 2, v___x_3141_);
lean_ctor_set(v___x_3142_, 3, v___x_3141_);
lean_ctor_set(v___x_3142_, 4, v___x_3140_);
lean_ctor_set(v___x_3142_, 5, v___x_3140_);
lean_ctor_set(v___x_3142_, 6, v___x_3140_);
lean_ctor_set(v___x_3142_, 7, v___x_3140_);
lean_ctor_set(v___x_3142_, 8, v___x_3140_);
lean_ctor_set(v___x_3142_, 9, v___x_3140_);
lean_ctor_set(v___x_3142_, 10, v___x_3140_);
lean_ctor_set(v___x_3142_, 11, v___x_3139_);
return v___x_3142_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2(void){
_start:
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3143_ = lean_unsigned_to_nat(32u);
v___x_3144_ = lean_mk_empty_array_with_capacity(v___x_3143_);
v___x_3145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3144_);
return v___x_3145_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3(void){
_start:
{
size_t v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3146_ = ((size_t)5ULL);
v___x_3147_ = lean_unsigned_to_nat(0u);
v___x_3148_ = lean_unsigned_to_nat(32u);
v___x_3149_ = lean_mk_empty_array_with_capacity(v___x_3148_);
v___x_3150_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2);
v___x_3151_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3151_, 0, v___x_3150_);
lean_ctor_set(v___x_3151_, 1, v___x_3149_);
lean_ctor_set(v___x_3151_, 2, v___x_3147_);
lean_ctor_set(v___x_3151_, 3, v___x_3147_);
lean_ctor_set_usize(v___x_3151_, 4, v___x_3146_);
return v___x_3151_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4(void){
_start:
{
lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3152_ = lean_box(1);
v___x_3153_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3);
v___x_3154_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0);
v___x_3155_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3154_);
lean_ctor_set(v___x_3155_, 1, v___x_3153_);
lean_ctor_set(v___x_3155_, 2, v___x_3152_);
return v___x_3155_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(lean_object* v_msgData_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_){
_start:
{
lean_object* v___x_3160_; lean_object* v_toCold_3161_; lean_object* v_env_3162_; lean_object* v_options_3163_; uint8_t v___x_3164_; lean_object* v_env_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; 
v___x_3160_ = lean_st_ref_get(v___y_3158_);
v_toCold_3161_ = lean_ctor_get(v___y_3157_, 0);
v_env_3162_ = lean_ctor_get(v___x_3160_, 0);
lean_inc_ref(v_env_3162_);
lean_dec(v___x_3160_);
v_options_3163_ = lean_ctor_get(v_toCold_3161_, 2);
v___x_3164_ = 0;
v_env_3165_ = l_Lean_Environment_setRecordingDeps(v_env_3162_, v___x_3164_);
v___x_3166_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1);
v___x_3167_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4);
lean_inc_ref(v_options_3163_);
v___x_3168_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3168_, 0, v_env_3165_);
lean_ctor_set(v___x_3168_, 1, v___x_3166_);
lean_ctor_set(v___x_3168_, 2, v___x_3167_);
lean_ctor_set(v___x_3168_, 3, v_options_3163_);
v___x_3169_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3169_, 0, v___x_3168_);
lean_ctor_set(v___x_3169_, 1, v_msgData_3156_);
v___x_3170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3169_);
return v___x_3170_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___boxed(lean_object* v_msgData_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_){
_start:
{
lean_object* v_res_3175_; 
v_res_3175_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msgData_3171_, v___y_3172_, v___y_3173_);
lean_dec(v___y_3173_);
lean_dec_ref(v___y_3172_);
return v_res_3175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(lean_object* v_msg_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_){
_start:
{
lean_object* v_ref_3180_; lean_object* v___x_3181_; lean_object* v_a_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3190_; 
v_ref_3180_ = lean_ctor_get(v___y_3177_, 2);
v___x_3181_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msg_3176_, v___y_3177_, v___y_3178_);
v_a_3182_ = lean_ctor_get(v___x_3181_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3181_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3184_ = v___x_3181_;
v_isShared_3185_ = v_isSharedCheck_3190_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_a_3182_);
lean_dec(v___x_3181_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3190_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3186_; lean_object* v___x_3188_; 
lean_inc(v_ref_3180_);
v___x_3186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3186_, 0, v_ref_3180_);
lean_ctor_set(v___x_3186_, 1, v_a_3182_);
if (v_isShared_3185_ == 0)
{
lean_ctor_set_tag(v___x_3184_, 1);
lean_ctor_set(v___x_3184_, 0, v___x_3186_);
v___x_3188_ = v___x_3184_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v___x_3186_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
return v___x_3188_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg___boxed(lean_object* v_msg_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_){
_start:
{
lean_object* v_res_3195_; 
v_res_3195_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(v_msg_3191_, v___y_3192_, v___y_3193_);
lean_dec(v___y_3193_);
lean_dec_ref(v___y_3192_);
return v_res_3195_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0(void){
_start:
{
lean_object* v___x_3196_; double v___x_3197_; 
v___x_3196_ = lean_unsigned_to_nat(0u);
v___x_3197_ = lean_float_of_nat(v___x_3196_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(lean_object* v_cls_3201_, lean_object* v_msg_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_){
_start:
{
lean_object* v_ref_3207_; lean_object* v___x_3208_; lean_object* v_a_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3255_; 
v_ref_3207_ = lean_ctor_get(v___y_3204_, 2);
v___x_3208_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msg_3202_, v___y_3204_, v___y_3205_);
v_a_3209_ = lean_ctor_get(v___x_3208_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3211_ = v___x_3208_;
v_isShared_3212_ = v_isSharedCheck_3255_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_a_3209_);
lean_dec(v___x_3208_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3255_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3213_; lean_object* v_traceState_3214_; lean_object* v_env_3215_; lean_object* v_nextMacroScope_3216_; lean_object* v_ngen_3217_; lean_object* v_auxDeclNGen_3218_; lean_object* v_cache_3219_; lean_object* v_recordedDeps_3220_; lean_object* v_messages_3221_; lean_object* v_infoState_3222_; lean_object* v_snapshotTasks_3223_; lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3254_; 
v___x_3213_ = lean_st_ref_take(v___y_3205_);
v_traceState_3214_ = lean_ctor_get(v___x_3213_, 4);
v_env_3215_ = lean_ctor_get(v___x_3213_, 0);
v_nextMacroScope_3216_ = lean_ctor_get(v___x_3213_, 1);
v_ngen_3217_ = lean_ctor_get(v___x_3213_, 2);
v_auxDeclNGen_3218_ = lean_ctor_get(v___x_3213_, 3);
v_cache_3219_ = lean_ctor_get(v___x_3213_, 5);
v_recordedDeps_3220_ = lean_ctor_get(v___x_3213_, 6);
v_messages_3221_ = lean_ctor_get(v___x_3213_, 7);
v_infoState_3222_ = lean_ctor_get(v___x_3213_, 8);
v_snapshotTasks_3223_ = lean_ctor_get(v___x_3213_, 9);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3213_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3225_ = v___x_3213_;
v_isShared_3226_ = v_isSharedCheck_3254_;
goto v_resetjp_3224_;
}
else
{
lean_inc(v_snapshotTasks_3223_);
lean_inc(v_infoState_3222_);
lean_inc(v_messages_3221_);
lean_inc(v_recordedDeps_3220_);
lean_inc(v_cache_3219_);
lean_inc(v_traceState_3214_);
lean_inc(v_auxDeclNGen_3218_);
lean_inc(v_ngen_3217_);
lean_inc(v_nextMacroScope_3216_);
lean_inc(v_env_3215_);
lean_dec(v___x_3213_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3254_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
uint64_t v_tid_3227_; lean_object* v_traces_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3253_; 
v_tid_3227_ = lean_ctor_get_uint64(v_traceState_3214_, sizeof(void*)*1);
v_traces_3228_ = lean_ctor_get(v_traceState_3214_, 0);
v_isSharedCheck_3253_ = !lean_is_exclusive(v_traceState_3214_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3230_ = v_traceState_3214_;
v_isShared_3231_ = v_isSharedCheck_3253_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_traces_3228_);
lean_dec(v_traceState_3214_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3253_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; double v___x_3234_; uint8_t v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3243_; 
v___x_3232_ = lean_box(0);
v___x_3233_ = lean_box(0);
v___x_3234_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0);
v___x_3235_ = 0;
v___x_3236_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1));
v___x_3237_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3237_, 0, v_cls_3201_);
lean_ctor_set(v___x_3237_, 1, v___x_3233_);
lean_ctor_set(v___x_3237_, 2, v___x_3236_);
lean_ctor_set_float(v___x_3237_, sizeof(void*)*3, v___x_3234_);
lean_ctor_set_float(v___x_3237_, sizeof(void*)*3 + 8, v___x_3234_);
lean_ctor_set_uint8(v___x_3237_, sizeof(void*)*3 + 16, v___x_3235_);
v___x_3238_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2));
v___x_3239_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3239_, 0, v___x_3237_);
lean_ctor_set(v___x_3239_, 1, v_a_3209_);
lean_ctor_set(v___x_3239_, 2, v___x_3238_);
lean_inc(v_ref_3207_);
v___x_3240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3240_, 0, v_ref_3207_);
lean_ctor_set(v___x_3240_, 1, v___x_3239_);
v___x_3241_ = l_Lean_PersistentArray_push___redArg(v_traces_3228_, v___x_3240_);
if (v_isShared_3231_ == 0)
{
lean_ctor_set(v___x_3230_, 0, v___x_3241_);
v___x_3243_ = v___x_3230_;
goto v_reusejp_3242_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v___x_3241_);
lean_ctor_set_uint64(v_reuseFailAlloc_3252_, sizeof(void*)*1, v_tid_3227_);
v___x_3243_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3242_;
}
v_reusejp_3242_:
{
lean_object* v___x_3245_; 
if (v_isShared_3226_ == 0)
{
lean_ctor_set(v___x_3225_, 4, v___x_3243_);
v___x_3245_ = v___x_3225_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_env_3215_);
lean_ctor_set(v_reuseFailAlloc_3251_, 1, v_nextMacroScope_3216_);
lean_ctor_set(v_reuseFailAlloc_3251_, 2, v_ngen_3217_);
lean_ctor_set(v_reuseFailAlloc_3251_, 3, v_auxDeclNGen_3218_);
lean_ctor_set(v_reuseFailAlloc_3251_, 4, v___x_3243_);
lean_ctor_set(v_reuseFailAlloc_3251_, 5, v_cache_3219_);
lean_ctor_set(v_reuseFailAlloc_3251_, 6, v_recordedDeps_3220_);
lean_ctor_set(v_reuseFailAlloc_3251_, 7, v_messages_3221_);
lean_ctor_set(v_reuseFailAlloc_3251_, 8, v_infoState_3222_);
lean_ctor_set(v_reuseFailAlloc_3251_, 9, v_snapshotTasks_3223_);
v___x_3245_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3249_; 
v___x_3246_ = lean_st_ref_put(v___y_3205_, v___x_3245_);
v___x_3247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3247_, 0, v___x_3232_);
lean_ctor_set(v___x_3247_, 1, v___y_3203_);
if (v_isShared_3212_ == 0)
{
lean_ctor_set(v___x_3211_, 0, v___x_3247_);
v___x_3249_ = v___x_3211_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v___x_3247_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___boxed(lean_object* v_cls_3256_, lean_object* v_msg_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
lean_object* v_res_3262_; 
v_res_3262_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(v_cls_3256_, v_msg_3257_, v___y_3258_, v___y_3259_, v___y_3260_);
lean_dec(v___y_3260_);
lean_dec_ref(v___y_3259_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(lean_object* v_a_3263_, lean_object* v_x_3264_){
_start:
{
if (lean_obj_tag(v_x_3264_) == 0)
{
lean_object* v___x_3265_; 
v___x_3265_ = lean_box(0);
return v___x_3265_;
}
else
{
lean_object* v_key_3266_; lean_object* v_value_3267_; lean_object* v_tail_3268_; uint8_t v___x_3269_; 
v_key_3266_ = lean_ctor_get(v_x_3264_, 0);
v_value_3267_ = lean_ctor_get(v_x_3264_, 1);
v_tail_3268_ = lean_ctor_get(v_x_3264_, 2);
v___x_3269_ = l_Lean_instBEqFVarId_beq(v_key_3266_, v_a_3263_);
if (v___x_3269_ == 0)
{
v_x_3264_ = v_tail_3268_;
goto _start;
}
else
{
lean_object* v___x_3271_; 
lean_inc(v_value_3267_);
v___x_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3271_, 0, v_value_3267_);
return v___x_3271_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg___boxed(lean_object* v_a_3272_, lean_object* v_x_3273_){
_start:
{
lean_object* v_res_3274_; 
v_res_3274_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3272_, v_x_3273_);
lean_dec(v_x_3273_);
lean_dec(v_a_3272_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(lean_object* v_m_3275_, lean_object* v_a_3276_){
_start:
{
lean_object* v_buckets_3277_; lean_object* v___x_3278_; uint64_t v___x_3279_; uint64_t v___x_3280_; uint64_t v___x_3281_; uint64_t v_fold_3282_; uint64_t v___x_3283_; uint64_t v___x_3284_; uint64_t v___x_3285_; size_t v___x_3286_; size_t v___x_3287_; size_t v___x_3288_; size_t v___x_3289_; size_t v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v_buckets_3277_ = lean_ctor_get(v_m_3275_, 1);
v___x_3278_ = lean_array_get_size(v_buckets_3277_);
v___x_3279_ = l_Lean_instHashableFVarId_hash(v_a_3276_);
v___x_3280_ = 32ULL;
v___x_3281_ = lean_uint64_shift_right(v___x_3279_, v___x_3280_);
v_fold_3282_ = lean_uint64_xor(v___x_3279_, v___x_3281_);
v___x_3283_ = 16ULL;
v___x_3284_ = lean_uint64_shift_right(v_fold_3282_, v___x_3283_);
v___x_3285_ = lean_uint64_xor(v_fold_3282_, v___x_3284_);
v___x_3286_ = lean_uint64_to_usize(v___x_3285_);
v___x_3287_ = lean_usize_of_nat(v___x_3278_);
v___x_3288_ = ((size_t)1ULL);
v___x_3289_ = lean_usize_sub(v___x_3287_, v___x_3288_);
v___x_3290_ = lean_usize_land(v___x_3286_, v___x_3289_);
v___x_3291_ = lean_array_uget_borrowed(v_buckets_3277_, v___x_3290_);
v___x_3292_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3276_, v___x_3291_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg___boxed(lean_object* v_m_3293_, lean_object* v_a_3294_){
_start:
{
lean_object* v_res_3295_; 
v_res_3295_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3293_, v_a_3294_);
lean_dec(v_a_3294_);
lean_dec_ref(v_m_3293_);
return v_res_3295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed(lean_object* v___x_3296_, lean_object* v_m_3297_, lean_object* v_e_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_){
_start:
{
uint8_t v___x_17738__boxed_3303_; lean_object* v_res_3304_; 
v___x_17738__boxed_3303_ = lean_unbox(v___x_3296_);
v_res_3304_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(v___x_17738__boxed_3303_, v_m_3297_, v_e_3298_, v___y_3299_, v___y_3300_, v___y_3301_);
lean_dec(v___y_3301_);
lean_dec_ref(v___y_3300_);
lean_dec_ref(v_e_3298_);
return v_res_3304_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0(void){
_start:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; 
v___x_3305_ = lean_box(0);
v___x_3306_ = lean_unsigned_to_nat(16u);
v___x_3307_ = lean_mk_array(v___x_3306_, v___x_3305_);
return v___x_3307_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1(void){
_start:
{
lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3308_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0);
v___x_3309_ = lean_unsigned_to_nat(0u);
v___x_3310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3309_);
lean_ctor_set(v___x_3310_, 1, v___x_3308_);
return v___x_3310_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5(void){
_start:
{
lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3314_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4));
v___x_3315_ = lean_unsigned_to_nat(4u);
v___x_3316_ = lean_unsigned_to_nat(390u);
v___x_3317_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3));
v___x_3318_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_3319_ = l_mkPanicMessageWithDecl(v___x_3318_, v___x_3317_, v___x_3316_, v___x_3315_, v___x_3314_);
return v___x_3319_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7(void){
_start:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3321_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6));
v___x_3322_ = l_Lean_stringToMessageData(v___x_3321_);
return v___x_3322_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13(void){
_start:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; 
v___x_3331_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
v___x_3332_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12));
v___x_3333_ = l_Lean_Name_append(v___x_3332_, v___x_3331_);
return v___x_3333_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15(void){
_start:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3335_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14));
v___x_3336_ = l_Lean_stringToMessageData(v___x_3335_);
return v___x_3336_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17(void){
_start:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3338_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16));
v___x_3339_ = l_Lean_stringToMessageData(v___x_3338_);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(lean_object* v_m_3340_, lean_object* v_fvarId_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_, lean_object* v_a_3344_){
_start:
{
lean_object* v___x_3346_; 
v___x_3346_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3340_, v_fvarId_3341_);
if (lean_obj_tag(v___x_3346_) == 1)
{
lean_object* v_val_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3457_; 
v_val_3347_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3457_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3457_ == 0)
{
v___x_3349_ = v___x_3346_;
v_isShared_3350_ = v_isSharedCheck_3457_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_val_3347_);
lean_dec(v___x_3346_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3457_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v_fst_3351_; lean_object* v_snd_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3456_; 
v_fst_3351_ = lean_ctor_get(v_val_3347_, 0);
v_snd_3352_ = lean_ctor_get(v_val_3347_, 1);
v_isSharedCheck_3456_ = !lean_is_exclusive(v_val_3347_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3354_ = v_val_3347_;
v_isShared_3355_ = v_isSharedCheck_3456_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_snd_3352_);
lean_inc(v_fst_3351_);
lean_dec(v_val_3347_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3456_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v_tempMark_3356_; lean_object* v_doneMark_3357_; lean_object* v___x_3358_; uint8_t v___x_3359_; 
v_tempMark_3356_ = lean_ctor_get(v_a_3342_, 0);
v_doneMark_3357_ = lean_ctor_get(v_a_3342_, 1);
v___x_3358_ = l_Lean_LocalDecl_fvarId(v_fst_3351_);
v___x_3359_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_doneMark_3357_, v___x_3358_);
if (v___x_3359_ == 0)
{
lean_object* v_toCold_3360_; lean_object* v_options_3361_; lean_object* v_inheritedTraceOptions_3362_; uint8_t v_hasTrace_3363_; uint8_t v___x_3364_; lean_object* v___x_3365_; lean_object* v___f_3366_; lean_object* v___y_3368_; lean_object* v___y_3369_; lean_object* v___y_3370_; lean_object* v___y_3424_; lean_object* v_tempMark_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; 
lean_del_object(v___x_3354_);
lean_del_object(v___x_3349_);
v_toCold_3360_ = lean_ctor_get(v_a_3343_, 0);
v_options_3361_ = lean_ctor_get(v_toCold_3360_, 2);
v_inheritedTraceOptions_3362_ = lean_ctor_get(v_toCold_3360_, 11);
v_hasTrace_3363_ = lean_ctor_get_uint8(v_options_3361_, sizeof(void*)*1);
v___x_3364_ = 1;
v___x_3365_ = lean_box(v___x_3364_);
v___f_3366_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3366_, 0, v___x_3365_);
lean_closure_set(v___f_3366_, 1, v_m_3340_);
if (v_hasTrace_3363_ == 0)
{
lean_inc_ref(v_tempMark_3356_);
v___y_3424_ = v_a_3342_;
v_tempMark_3425_ = v_tempMark_3356_;
v___y_3426_ = v_a_3343_;
v___y_3427_ = v_a_3344_;
goto v___jp_3423_;
}
else
{
lean_object* v___x_3433_; lean_object* v___x_3434_; uint8_t v___x_3435_; 
v___x_3433_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
v___x_3434_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_3435_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3362_, v_options_3361_, v___x_3434_);
if (v___x_3435_ == 0)
{
lean_inc_ref(v_tempMark_3356_);
v___y_3424_ = v_a_3342_;
v_tempMark_3425_ = v_tempMark_3356_;
v___y_3426_ = v_a_3343_;
v___y_3427_ = v_a_3344_;
goto v___jp_3423_;
}
else
{
lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3436_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15);
lean_inc(v___x_3358_);
v___x_3437_ = l_Lean_mkFVar(v___x_3358_);
v___x_3438_ = l_Lean_MessageData_ofExpr(v___x_3437_);
v___x_3439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3436_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
v___x_3440_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17);
v___x_3441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3439_);
lean_ctor_set(v___x_3441_, 1, v___x_3440_);
v___x_3442_ = l_Lean_LocalDecl_type(v_fst_3351_);
v___x_3443_ = l_Lean_MessageData_ofExpr(v___x_3442_);
v___x_3444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3441_);
lean_ctor_set(v___x_3444_, 1, v___x_3443_);
v___x_3445_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(v___x_3433_, v___x_3444_, v_a_3342_, v_a_3343_, v_a_3344_);
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v_a_3446_; lean_object* v_snd_3447_; lean_object* v_tempMark_3448_; 
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3445_, 1);
v_snd_3447_ = lean_ctor_get(v_a_3446_, 1);
lean_inc(v_snd_3447_);
lean_dec(v_a_3446_);
v_tempMark_3448_ = lean_ctor_get(v_snd_3447_, 0);
lean_inc_ref(v_tempMark_3448_);
v___y_3424_ = v_snd_3447_;
v_tempMark_3425_ = v_tempMark_3448_;
v___y_3426_ = v_a_3343_;
v___y_3427_ = v_a_3344_;
goto v___jp_3423_;
}
else
{
lean_dec_ref(v___f_3366_);
lean_dec(v___x_3358_);
lean_dec(v_snd_3352_);
lean_dec(v_fst_3351_);
return v___x_3445_;
}
}
}
v___jp_3367_:
{
uint8_t v___x_3371_; 
v___x_3371_ = l_Lean_LocalDecl_isLet(v_fst_3351_, v___x_3364_);
if (v___x_3371_ == 0)
{
lean_object* v_tempMark_3372_; lean_object* v_doneMark_3373_; lean_object* v_newDecls_3374_; lean_object* v_newArgs_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3420_; 
v_tempMark_3372_ = lean_ctor_get(v___y_3368_, 0);
v_doneMark_3373_ = lean_ctor_get(v___y_3368_, 1);
v_newDecls_3374_ = lean_ctor_get(v___y_3368_, 2);
v_newArgs_3375_ = lean_ctor_get(v___y_3368_, 3);
v_isSharedCheck_3420_ = !lean_is_exclusive(v___y_3368_);
if (v_isSharedCheck_3420_ == 0)
{
v___x_3377_ = v___y_3368_;
v_isShared_3378_ = v_isSharedCheck_3420_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_newArgs_3375_);
lean_inc(v_newDecls_3374_);
lean_inc(v_doneMark_3373_);
lean_inc(v_tempMark_3372_);
lean_dec(v___y_3368_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3420_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3382_; 
v___x_3379_ = lean_box(0);
lean_inc(v___x_3358_);
v___x_3380_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(v_tempMark_3372_, v___x_3358_, v___x_3379_);
if (v_isShared_3378_ == 0)
{
lean_ctor_set(v___x_3377_, 0, v___x_3380_);
v___x_3382_ = v___x_3377_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v___x_3380_);
lean_ctor_set(v_reuseFailAlloc_3419_, 1, v_doneMark_3373_);
lean_ctor_set(v_reuseFailAlloc_3419_, 2, v_newDecls_3374_);
lean_ctor_set(v_reuseFailAlloc_3419_, 3, v_newArgs_3375_);
v___x_3382_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3383_ = l_Lean_LocalDecl_type(v_fst_3351_);
v___x_3384_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1);
v___x_3385_ = lean_st_mk_ref(v___x_3384_);
v___x_3386_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v___f_3366_, v___x_3383_, v___x_3385_, v___x_3382_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3418_; 
v_a_3387_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3389_ = v___x_3386_;
v_isShared_3390_ = v_isSharedCheck_3418_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v___x_3386_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3418_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v_snd_3391_; lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3416_; 
v_snd_3391_ = lean_ctor_get(v_a_3387_, 1);
v_isSharedCheck_3416_ = !lean_is_exclusive(v_a_3387_);
if (v_isSharedCheck_3416_ == 0)
{
lean_object* v_unused_3417_; 
v_unused_3417_ = lean_ctor_get(v_a_3387_, 0);
lean_dec(v_unused_3417_);
v___x_3393_ = v_a_3387_;
v_isShared_3394_ = v_isSharedCheck_3416_;
goto v_resetjp_3392_;
}
else
{
lean_inc(v_snd_3391_);
lean_dec(v_a_3387_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3416_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
lean_object* v___x_3395_; lean_object* v_tempMark_3396_; lean_object* v_doneMark_3397_; lean_object* v_newDecls_3398_; lean_object* v_newArgs_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3415_; 
v___x_3395_ = lean_st_ref_get(v___x_3385_);
lean_dec(v___x_3385_);
lean_dec(v___x_3395_);
v_tempMark_3396_ = lean_ctor_get(v_snd_3391_, 0);
v_doneMark_3397_ = lean_ctor_get(v_snd_3391_, 1);
v_newDecls_3398_ = lean_ctor_get(v_snd_3391_, 2);
v_newArgs_3399_ = lean_ctor_get(v_snd_3391_, 3);
v_isSharedCheck_3415_ = !lean_is_exclusive(v_snd_3391_);
if (v_isSharedCheck_3415_ == 0)
{
v___x_3401_ = v_snd_3391_;
v_isShared_3402_ = v_isSharedCheck_3415_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_newArgs_3399_);
lean_inc(v_newDecls_3398_);
lean_inc(v_doneMark_3397_);
lean_inc(v_tempMark_3396_);
lean_dec(v_snd_3391_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3415_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3407_; 
v___x_3403_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(v_doneMark_3397_, v___x_3358_, v___x_3379_);
v___x_3404_ = lean_array_push(v_newDecls_3398_, v_fst_3351_);
v___x_3405_ = lean_array_push(v_newArgs_3399_, v_snd_3352_);
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 3, v___x_3405_);
lean_ctor_set(v___x_3401_, 2, v___x_3404_);
lean_ctor_set(v___x_3401_, 1, v___x_3403_);
v___x_3407_ = v___x_3401_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v_tempMark_3396_);
lean_ctor_set(v_reuseFailAlloc_3414_, 1, v___x_3403_);
lean_ctor_set(v_reuseFailAlloc_3414_, 2, v___x_3404_);
lean_ctor_set(v_reuseFailAlloc_3414_, 3, v___x_3405_);
v___x_3407_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
lean_object* v___x_3409_; 
if (v_isShared_3394_ == 0)
{
lean_ctor_set(v___x_3393_, 1, v___x_3407_);
lean_ctor_set(v___x_3393_, 0, v___x_3379_);
v___x_3409_ = v___x_3393_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v___x_3379_);
lean_ctor_set(v_reuseFailAlloc_3413_, 1, v___x_3407_);
v___x_3409_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
lean_object* v___x_3411_; 
if (v_isShared_3390_ == 0)
{
lean_ctor_set(v___x_3389_, 0, v___x_3409_);
v___x_3411_ = v___x_3389_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v___x_3409_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_3385_);
lean_dec(v___x_3358_);
lean_dec(v_snd_3352_);
lean_dec(v_fst_3351_);
return v___x_3386_;
}
}
}
}
else
{
lean_object* v___x_3421_; lean_object* v___x_3422_; 
lean_dec_ref(v___f_3366_);
lean_dec(v___x_3358_);
lean_dec(v_snd_3352_);
lean_dec(v_fst_3351_);
v___x_3421_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5);
v___x_3422_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(v___x_3421_, v___y_3368_, v___y_3369_, v___y_3370_);
return v___x_3422_;
}
}
v___jp_3423_:
{
uint8_t v___x_3428_; 
v___x_3428_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_tempMark_3425_, v___x_3358_);
lean_dec_ref(v_tempMark_3425_);
if (v___x_3428_ == 0)
{
v___y_3368_ = v___y_3424_;
v___y_3369_ = v___y_3426_;
v___y_3370_ = v___y_3427_;
goto v___jp_3367_;
}
else
{
lean_object* v___x_3429_; lean_object* v___x_3430_; 
lean_dec_ref(v___y_3424_);
v___x_3429_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7);
v___x_3430_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(v___x_3429_, v___y_3426_, v___y_3427_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v_a_3431_; lean_object* v_snd_3432_; 
v_a_3431_ = lean_ctor_get(v___x_3430_, 0);
lean_inc(v_a_3431_);
lean_dec_ref_known(v___x_3430_, 1);
v_snd_3432_ = lean_ctor_get(v_a_3431_, 1);
lean_inc(v_snd_3432_);
lean_dec(v_a_3431_);
v___y_3368_ = v_snd_3432_;
v___y_3369_ = v___y_3426_;
v___y_3370_ = v___y_3427_;
goto v___jp_3367_;
}
else
{
lean_dec_ref(v___f_3366_);
lean_dec(v___x_3358_);
lean_dec(v_snd_3352_);
lean_dec(v_fst_3351_);
return v___x_3430_;
}
}
}
}
else
{
lean_object* v___x_3449_; lean_object* v___x_3451_; 
lean_dec(v___x_3358_);
lean_dec(v_snd_3352_);
lean_dec(v_fst_3351_);
lean_dec_ref(v_m_3340_);
v___x_3449_ = lean_box(0);
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 1, v_a_3342_);
lean_ctor_set(v___x_3354_, 0, v___x_3449_);
v___x_3451_ = v___x_3354_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v___x_3449_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v_a_3342_);
v___x_3451_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
lean_object* v___x_3453_; 
if (v_isShared_3350_ == 0)
{
lean_ctor_set_tag(v___x_3349_, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3451_);
v___x_3453_ = v___x_3349_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v___x_3451_);
v___x_3453_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
return v___x_3453_;
}
}
}
}
}
}
else
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; 
lean_dec(v___x_3346_);
lean_dec_ref(v_m_3340_);
v___x_3458_ = lean_box(0);
v___x_3459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3459_, 0, v___x_3458_);
lean_ctor_set(v___x_3459_, 1, v_a_3342_);
v___x_3460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
return v___x_3460_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(uint8_t v___x_3461_, lean_object* v_m_3462_, lean_object* v_e_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_){
_start:
{
lean_object* v___y_3469_; uint8_t v___x_3473_; 
v___x_3473_ = l_Lean_Expr_hasFVar(v_e_3463_);
if (v___x_3473_ == 0)
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; 
lean_dec_ref(v_m_3462_);
v___x_3474_ = lean_box(v___x_3473_);
v___x_3475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3474_);
lean_ctor_set(v___x_3475_, 1, v___y_3464_);
v___x_3476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3475_);
return v___x_3476_;
}
else
{
uint8_t v___x_3477_; 
v___x_3477_ = l_Lean_Expr_isFVar(v_e_3463_);
if (v___x_3477_ == 0)
{
lean_dec_ref(v_m_3462_);
v___y_3469_ = v___y_3464_;
goto v___jp_3468_;
}
else
{
lean_object* v___x_3478_; lean_object* v___x_3479_; 
v___x_3478_ = l_Lean_Expr_fvarId_x21(v_e_3463_);
v___x_3479_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v_m_3462_, v___x_3478_, v___y_3464_, v___y_3465_, v___y_3466_);
lean_dec(v___x_3478_);
if (lean_obj_tag(v___x_3479_) == 0)
{
lean_object* v_a_3480_; lean_object* v_snd_3481_; 
v_a_3480_ = lean_ctor_get(v___x_3479_, 0);
lean_inc(v_a_3480_);
lean_dec_ref_known(v___x_3479_, 1);
v_snd_3481_ = lean_ctor_get(v_a_3480_, 1);
lean_inc(v_snd_3481_);
lean_dec(v_a_3480_);
v___y_3469_ = v_snd_3481_;
goto v___jp_3468_;
}
else
{
lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
v_a_3482_ = lean_ctor_get(v___x_3479_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3479_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3484_ = v___x_3479_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3479_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3485_ == 0)
{
v___x_3487_ = v___x_3484_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_a_3482_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
}
}
}
v___jp_3468_:
{
lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; 
v___x_3470_ = lean_box(v___x_3461_);
v___x_3471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3471_, 0, v___x_3470_);
lean_ctor_set(v___x_3471_, 1, v___y_3469_);
v___x_3472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3472_, 0, v___x_3471_);
return v___x_3472_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___boxed(lean_object* v_m_3490_, lean_object* v_fvarId_3491_, lean_object* v_a_3492_, lean_object* v_a_3493_, lean_object* v_a_3494_, lean_object* v_a_3495_){
_start:
{
lean_object* v_res_3496_; 
v_res_3496_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v_m_3490_, v_fvarId_3491_, v_a_3492_, v_a_3493_, v_a_3494_);
lean_dec(v_a_3494_);
lean_dec_ref(v_a_3493_);
lean_dec(v_fvarId_3491_);
return v_res_3496_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(lean_object* v_00_u03b2_3497_, lean_object* v_m_3498_, lean_object* v_a_3499_){
_start:
{
lean_object* v___x_3500_; 
v___x_3500_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3498_, v_a_3499_);
return v___x_3500_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___boxed(lean_object* v_00_u03b2_3501_, lean_object* v_m_3502_, lean_object* v_a_3503_){
_start:
{
lean_object* v_res_3504_; 
v_res_3504_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(v_00_u03b2_3501_, v_m_3502_, v_a_3503_);
lean_dec(v_a_3503_);
lean_dec_ref(v_m_3502_);
return v_res_3504_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(lean_object* v_00_u03b2_3505_, lean_object* v_m_3506_, lean_object* v_a_3507_){
_start:
{
uint8_t v___x_3508_; 
v___x_3508_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_m_3506_, v_a_3507_);
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___boxed(lean_object* v_00_u03b2_3509_, lean_object* v_m_3510_, lean_object* v_a_3511_){
_start:
{
uint8_t v_res_3512_; lean_object* v_r_3513_; 
v_res_3512_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_00_u03b2_3509_, v_m_3510_, v_a_3511_);
lean_dec(v_a_3511_);
lean_dec_ref(v_m_3510_);
v_r_3513_ = lean_box(v_res_3512_);
return v_r_3513_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2(lean_object* v_00_u03b2_3514_, lean_object* v_m_3515_, lean_object* v_a_3516_, lean_object* v_b_3517_){
_start:
{
lean_object* v___x_3518_; 
v___x_3518_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(v_m_3515_, v_a_3516_, v_b_3517_);
return v___x_3518_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5(lean_object* v_00_u03b1_3519_, lean_object* v_msg_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_){
_start:
{
lean_object* v___x_3525_; 
v___x_3525_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(v_msg_3520_, v___y_3522_, v___y_3523_);
return v___x_3525_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___boxed(lean_object* v_00_u03b1_3526_, lean_object* v_msg_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_){
_start:
{
lean_object* v_res_3532_; 
v_res_3532_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5(v_00_u03b1_3526_, v_msg_3527_, v___y_3528_, v___y_3529_, v___y_3530_);
lean_dec(v___y_3530_);
lean_dec_ref(v___y_3529_);
lean_dec_ref(v___y_3528_);
return v_res_3532_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(lean_object* v_00_u03b2_3533_, lean_object* v_a_3534_, lean_object* v_x_3535_){
_start:
{
lean_object* v___x_3536_; 
v___x_3536_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3534_, v_x_3535_);
return v___x_3536_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3537_, lean_object* v_a_3538_, lean_object* v_x_3539_){
_start:
{
lean_object* v_res_3540_; 
v_res_3540_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(v_00_u03b2_3537_, v_a_3538_, v_x_3539_);
lean_dec(v_x_3539_);
lean_dec(v_a_3538_);
return v_res_3540_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(lean_object* v_00_u03b2_3541_, lean_object* v_a_3542_, lean_object* v_x_3543_){
_start:
{
uint8_t v___x_3544_; 
v___x_3544_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_3542_, v_x_3543_);
return v___x_3544_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3545_, lean_object* v_a_3546_, lean_object* v_x_3547_){
_start:
{
uint8_t v_res_3548_; lean_object* v_r_3549_; 
v_res_3548_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(v_00_u03b2_3545_, v_a_3546_, v_x_3547_);
lean_dec(v_x_3547_);
lean_dec(v_a_3546_);
v_r_3549_ = lean_box(v_res_3548_);
return v_r_3549_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4(lean_object* v_00_u03b2_3550_, lean_object* v_data_3551_){
_start:
{
lean_object* v___x_3552_; 
v___x_3552_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(v_data_3551_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(lean_object* v_00_u03b2_3553_, lean_object* v_m_3554_, lean_object* v_a_3555_){
_start:
{
lean_object* v___x_3556_; 
v___x_3556_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(v_m_3554_, v_a_3555_);
return v___x_3556_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3557_, lean_object* v_m_3558_, lean_object* v_a_3559_){
_start:
{
lean_object* v_res_3560_; 
v_res_3560_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(v_00_u03b2_3557_, v_m_3558_, v_a_3559_);
lean_dec_ref(v_a_3559_);
lean_dec_ref(v_m_3558_);
return v_res_3560_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7(lean_object* v_00_u03b2_3561_, lean_object* v_m_3562_, lean_object* v_a_3563_, lean_object* v_b_3564_){
_start:
{
lean_object* v___x_3565_; 
v___x_3565_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(v_m_3562_, v_a_3563_, v_b_3564_);
return v___x_3565_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_3566_, lean_object* v_i_3567_, lean_object* v_source_3568_, lean_object* v_target_3569_){
_start:
{
lean_object* v___x_3570_; 
v___x_3570_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(v_i_3567_, v_source_3568_, v_target_3569_);
return v___x_3570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_3571_, lean_object* v_a_3572_, lean_object* v_x_3573_){
_start:
{
lean_object* v___x_3574_; 
v___x_3574_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(v_a_3572_, v_x_3573_);
return v___x_3574_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___boxed(lean_object* v_00_u03b2_3575_, lean_object* v_a_3576_, lean_object* v_x_3577_){
_start:
{
lean_object* v_res_3578_; 
v_res_3578_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9(v_00_u03b2_3575_, v_a_3576_, v_x_3577_);
lean_dec(v_x_3577_);
lean_dec_ref(v_a_3576_);
return v_res_3578_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11(lean_object* v_00_u03b2_3579_, lean_object* v_a_3580_, lean_object* v_x_3581_){
_start:
{
uint8_t v___x_3582_; 
v___x_3582_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(v_a_3580_, v_x_3581_);
return v___x_3582_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___boxed(lean_object* v_00_u03b2_3583_, lean_object* v_a_3584_, lean_object* v_x_3585_){
_start:
{
uint8_t v_res_3586_; lean_object* v_r_3587_; 
v_res_3586_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11(v_00_u03b2_3583_, v_a_3584_, v_x_3585_);
lean_dec(v_x_3585_);
lean_dec_ref(v_a_3584_);
v_r_3587_ = lean_box(v_res_3586_);
return v_r_3587_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12(lean_object* v_00_u03b2_3588_, lean_object* v_data_3589_){
_start:
{
lean_object* v___x_3590_; 
v___x_3590_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(v_data_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13(lean_object* v_00_u03b2_3591_, lean_object* v_a_3592_, lean_object* v_b_3593_, lean_object* v_x_3594_){
_start:
{
lean_object* v___x_3595_; 
v___x_3595_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(v_a_3592_, v_b_3593_, v_x_3594_);
return v___x_3595_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11(lean_object* v_00_u03b2_3596_, lean_object* v_x_3597_, lean_object* v_x_3598_){
_start:
{
lean_object* v___x_3599_; 
v___x_3599_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(v_x_3597_, v_x_3598_);
return v___x_3599_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17(lean_object* v_00_u03b2_3600_, lean_object* v_i_3601_, lean_object* v_source_3602_, lean_object* v_target_3603_){
_start:
{
lean_object* v___x_3604_; 
v___x_3604_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(v_i_3601_, v_source_3602_, v_target_3603_);
return v___x_3604_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18(lean_object* v_00_u03b2_3605_, lean_object* v_x_3606_, lean_object* v_x_3607_){
_start:
{
lean_object* v___x_3608_; 
v___x_3608_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(v_x_3606_, v_x_3607_);
return v___x_3608_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(lean_object* v_msg_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_){
_start:
{
lean_object* v___f_3614_; lean_object* v___x_7408__overap_3615_; lean_object* v___x_3616_; 
v___f_3614_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0));
v___x_7408__overap_3615_ = lean_panic_fn_borrowed(v___f_3614_, v_msg_3610_);
lean_inc(v___y_3612_);
lean_inc_ref(v___y_3611_);
v___x_3616_ = lean_apply_3(v___x_7408__overap_3615_, v___y_3611_, v___y_3612_, lean_box(0));
return v___x_3616_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___boxed(lean_object* v_msg_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_){
_start:
{
lean_object* v_res_3621_; 
v_res_3621_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(v_msg_3617_, v___y_3618_, v___y_3619_);
lean_dec(v___y_3619_);
lean_dec_ref(v___y_3618_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(lean_object* v_newDecls_3622_, lean_object* v_newArgs_3623_, lean_object* v_____r_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_){
_start:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; 
v___x_3629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3629_, 0, v_newDecls_3622_);
lean_ctor_set(v___x_3629_, 1, v_newArgs_3623_);
v___x_3630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3629_);
lean_ctor_set(v___x_3630_, 1, v___y_3625_);
v___x_3631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3631_, 0, v___x_3630_);
return v___x_3631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed(lean_object* v_newDecls_3632_, lean_object* v_newArgs_3633_, lean_object* v_____r_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(v_newDecls_3632_, v_newArgs_3633_, v_____r_3634_, v___y_3635_, v___y_3636_, v___y_3637_);
lean_dec(v___y_3637_);
lean_dec_ref(v___y_3636_);
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(lean_object* v_cls_3640_, lean_object* v_msg_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_){
_start:
{
lean_object* v_ref_3645_; lean_object* v___x_3646_; lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3692_; 
v_ref_3645_ = lean_ctor_get(v___y_3642_, 2);
v___x_3646_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msg_3641_, v___y_3642_, v___y_3643_);
v_a_3647_ = lean_ctor_get(v___x_3646_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3646_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3649_ = v___x_3646_;
v_isShared_3650_ = v_isSharedCheck_3692_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_dec(v___x_3646_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3692_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3651_; lean_object* v_traceState_3652_; lean_object* v_env_3653_; lean_object* v_nextMacroScope_3654_; lean_object* v_ngen_3655_; lean_object* v_auxDeclNGen_3656_; lean_object* v_cache_3657_; lean_object* v_recordedDeps_3658_; lean_object* v_messages_3659_; lean_object* v_infoState_3660_; lean_object* v_snapshotTasks_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3691_; 
v___x_3651_ = lean_st_ref_take(v___y_3643_);
v_traceState_3652_ = lean_ctor_get(v___x_3651_, 4);
v_env_3653_ = lean_ctor_get(v___x_3651_, 0);
v_nextMacroScope_3654_ = lean_ctor_get(v___x_3651_, 1);
v_ngen_3655_ = lean_ctor_get(v___x_3651_, 2);
v_auxDeclNGen_3656_ = lean_ctor_get(v___x_3651_, 3);
v_cache_3657_ = lean_ctor_get(v___x_3651_, 5);
v_recordedDeps_3658_ = lean_ctor_get(v___x_3651_, 6);
v_messages_3659_ = lean_ctor_get(v___x_3651_, 7);
v_infoState_3660_ = lean_ctor_get(v___x_3651_, 8);
v_snapshotTasks_3661_ = lean_ctor_get(v___x_3651_, 9);
v_isSharedCheck_3691_ = !lean_is_exclusive(v___x_3651_);
if (v_isSharedCheck_3691_ == 0)
{
v___x_3663_ = v___x_3651_;
v_isShared_3664_ = v_isSharedCheck_3691_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_snapshotTasks_3661_);
lean_inc(v_infoState_3660_);
lean_inc(v_messages_3659_);
lean_inc(v_recordedDeps_3658_);
lean_inc(v_cache_3657_);
lean_inc(v_traceState_3652_);
lean_inc(v_auxDeclNGen_3656_);
lean_inc(v_ngen_3655_);
lean_inc(v_nextMacroScope_3654_);
lean_inc(v_env_3653_);
lean_dec(v___x_3651_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3691_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
uint64_t v_tid_3665_; lean_object* v_traces_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3690_; 
v_tid_3665_ = lean_ctor_get_uint64(v_traceState_3652_, sizeof(void*)*1);
v_traces_3666_ = lean_ctor_get(v_traceState_3652_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v_traceState_3652_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3668_ = v_traceState_3652_;
v_isShared_3669_ = v_isSharedCheck_3690_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_traces_3666_);
lean_dec(v_traceState_3652_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3690_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3670_; lean_object* v___x_3671_; double v___x_3672_; uint8_t v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3681_; 
v___x_3670_ = lean_box(0);
v___x_3671_ = lean_box(0);
v___x_3672_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0);
v___x_3673_ = 0;
v___x_3674_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1));
v___x_3675_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3675_, 0, v_cls_3640_);
lean_ctor_set(v___x_3675_, 1, v___x_3671_);
lean_ctor_set(v___x_3675_, 2, v___x_3674_);
lean_ctor_set_float(v___x_3675_, sizeof(void*)*3, v___x_3672_);
lean_ctor_set_float(v___x_3675_, sizeof(void*)*3 + 8, v___x_3672_);
lean_ctor_set_uint8(v___x_3675_, sizeof(void*)*3 + 16, v___x_3673_);
v___x_3676_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2));
v___x_3677_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3675_);
lean_ctor_set(v___x_3677_, 1, v_a_3647_);
lean_ctor_set(v___x_3677_, 2, v___x_3676_);
lean_inc(v_ref_3645_);
v___x_3678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3678_, 0, v_ref_3645_);
lean_ctor_set(v___x_3678_, 1, v___x_3677_);
v___x_3679_ = l_Lean_PersistentArray_push___redArg(v_traces_3666_, v___x_3678_);
if (v_isShared_3669_ == 0)
{
lean_ctor_set(v___x_3668_, 0, v___x_3679_);
v___x_3681_ = v___x_3668_;
goto v_reusejp_3680_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v___x_3679_);
lean_ctor_set_uint64(v_reuseFailAlloc_3689_, sizeof(void*)*1, v_tid_3665_);
v___x_3681_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3680_;
}
v_reusejp_3680_:
{
lean_object* v___x_3683_; 
if (v_isShared_3664_ == 0)
{
lean_ctor_set(v___x_3663_, 4, v___x_3681_);
v___x_3683_ = v___x_3663_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_env_3653_);
lean_ctor_set(v_reuseFailAlloc_3688_, 1, v_nextMacroScope_3654_);
lean_ctor_set(v_reuseFailAlloc_3688_, 2, v_ngen_3655_);
lean_ctor_set(v_reuseFailAlloc_3688_, 3, v_auxDeclNGen_3656_);
lean_ctor_set(v_reuseFailAlloc_3688_, 4, v___x_3681_);
lean_ctor_set(v_reuseFailAlloc_3688_, 5, v_cache_3657_);
lean_ctor_set(v_reuseFailAlloc_3688_, 6, v_recordedDeps_3658_);
lean_ctor_set(v_reuseFailAlloc_3688_, 7, v_messages_3659_);
lean_ctor_set(v_reuseFailAlloc_3688_, 8, v_infoState_3660_);
lean_ctor_set(v_reuseFailAlloc_3688_, 9, v_snapshotTasks_3661_);
v___x_3683_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
lean_object* v___x_3684_; lean_object* v___x_3686_; 
v___x_3684_ = lean_st_ref_put(v___y_3643_, v___x_3683_);
if (v_isShared_3650_ == 0)
{
lean_ctor_set(v___x_3649_, 0, v___x_3670_);
v___x_3686_ = v___x_3649_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3670_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6___boxed(lean_object* v_cls_3693_, lean_object* v_msg_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_){
_start:
{
lean_object* v_res_3698_; 
v_res_3698_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(v_cls_3693_, v_msg_3694_, v___y_3695_, v___y_3696_);
lean_dec(v___y_3696_);
lean_dec_ref(v___y_3695_);
return v_res_3698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(size_t v_sz_3699_, size_t v_i_3700_, lean_object* v_bs_3701_){
_start:
{
uint8_t v___x_3702_; 
v___x_3702_ = lean_usize_dec_lt(v_i_3700_, v_sz_3699_);
if (v___x_3702_ == 0)
{
return v_bs_3701_;
}
else
{
lean_object* v_v_3703_; lean_object* v___x_3704_; lean_object* v_bs_x27_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; size_t v___x_3708_; size_t v___x_3709_; lean_object* v___x_3710_; 
v_v_3703_ = lean_array_uget(v_bs_3701_, v_i_3700_);
v___x_3704_ = lean_unsigned_to_nat(0u);
v_bs_x27_3705_ = lean_array_uset(v_bs_3701_, v_i_3700_, v___x_3704_);
v___x_3706_ = l_Lean_LocalDecl_fvarId(v_v_3703_);
lean_dec(v_v_3703_);
v___x_3707_ = l_Lean_mkFVar(v___x_3706_);
v___x_3708_ = ((size_t)1ULL);
v___x_3709_ = lean_usize_add(v_i_3700_, v___x_3708_);
v___x_3710_ = lean_array_uset(v_bs_x27_3705_, v_i_3700_, v___x_3707_);
v_i_3700_ = v___x_3709_;
v_bs_3701_ = v___x_3710_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4___boxed(lean_object* v_sz_3712_, lean_object* v_i_3713_, lean_object* v_bs_3714_){
_start:
{
size_t v_sz_boxed_3715_; size_t v_i_boxed_3716_; lean_object* v_res_3717_; 
v_sz_boxed_3715_ = lean_unbox_usize(v_sz_3712_);
lean_dec(v_sz_3712_);
v_i_boxed_3716_ = lean_unbox_usize(v_i_3713_);
lean_dec(v_i_3713_);
v_res_3717_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(v_sz_boxed_3715_, v_i_boxed_3716_, v_bs_3714_);
return v_res_3717_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(lean_object* v___x_3718_, lean_object* v_as_3719_, size_t v_sz_3720_, size_t v_i_3721_, lean_object* v_b_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_){
_start:
{
uint8_t v___x_3727_; 
v___x_3727_ = lean_usize_dec_lt(v_i_3721_, v_sz_3720_);
if (v___x_3727_ == 0)
{
lean_object* v___x_3728_; lean_object* v___x_3729_; 
lean_dec_ref(v___x_3718_);
v___x_3728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3728_, 0, v_b_3722_);
lean_ctor_set(v___x_3728_, 1, v___y_3723_);
v___x_3729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3729_, 0, v___x_3728_);
return v___x_3729_;
}
else
{
lean_object* v___x_3730_; lean_object* v_a_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v___x_3730_ = lean_box(0);
v_a_3731_ = lean_array_uget_borrowed(v_as_3719_, v_i_3721_);
v___x_3732_ = l_Lean_LocalDecl_fvarId(v_a_3731_);
lean_inc_ref(v___x_3718_);
v___x_3733_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v___x_3718_, v___x_3732_, v___y_3723_, v___y_3724_, v___y_3725_);
lean_dec(v___x_3732_);
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_object* v_a_3734_; lean_object* v_snd_3735_; size_t v___x_3736_; size_t v___x_3737_; 
v_a_3734_ = lean_ctor_get(v___x_3733_, 0);
lean_inc(v_a_3734_);
lean_dec_ref_known(v___x_3733_, 1);
v_snd_3735_ = lean_ctor_get(v_a_3734_, 1);
lean_inc(v_snd_3735_);
lean_dec(v_a_3734_);
v___x_3736_ = ((size_t)1ULL);
v___x_3737_ = lean_usize_add(v_i_3721_, v___x_3736_);
v_i_3721_ = v___x_3737_;
v_b_3722_ = v___x_3730_;
v___y_3723_ = v_snd_3735_;
goto _start;
}
else
{
lean_dec_ref(v___x_3718_);
return v___x_3733_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3___boxed(lean_object* v___x_3739_, lean_object* v_as_3740_, lean_object* v_sz_3741_, lean_object* v_i_3742_, lean_object* v_b_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_){
_start:
{
size_t v_sz_boxed_3748_; size_t v_i_boxed_3749_; lean_object* v_res_3750_; 
v_sz_boxed_3748_ = lean_unbox_usize(v_sz_3741_);
lean_dec(v_sz_3741_);
v_i_boxed_3749_ = lean_unbox_usize(v_i_3742_);
lean_dec(v_i_3742_);
v_res_3750_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v___x_3739_, v_as_3740_, v_sz_boxed_3748_, v_i_boxed_3749_, v_b_3743_, v___y_3744_, v___y_3745_, v___y_3746_);
lean_dec(v___y_3746_);
lean_dec_ref(v___y_3745_);
lean_dec_ref(v_as_3740_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(lean_object* v_a_3751_, lean_object* v_a_3752_){
_start:
{
if (lean_obj_tag(v_a_3751_) == 0)
{
lean_object* v___x_3753_; 
v___x_3753_ = l_List_reverse___redArg(v_a_3752_);
return v___x_3753_;
}
else
{
lean_object* v_head_3754_; lean_object* v_tail_3755_; lean_object* v___x_3757_; uint8_t v_isShared_3758_; uint8_t v_isSharedCheck_3764_; 
v_head_3754_ = lean_ctor_get(v_a_3751_, 0);
v_tail_3755_ = lean_ctor_get(v_a_3751_, 1);
v_isSharedCheck_3764_ = !lean_is_exclusive(v_a_3751_);
if (v_isSharedCheck_3764_ == 0)
{
v___x_3757_ = v_a_3751_;
v_isShared_3758_ = v_isSharedCheck_3764_;
goto v_resetjp_3756_;
}
else
{
lean_inc(v_tail_3755_);
lean_inc(v_head_3754_);
lean_dec(v_a_3751_);
v___x_3757_ = lean_box(0);
v_isShared_3758_ = v_isSharedCheck_3764_;
goto v_resetjp_3756_;
}
v_resetjp_3756_:
{
lean_object* v___x_3759_; lean_object* v___x_3761_; 
v___x_3759_ = l_Lean_MessageData_ofExpr(v_head_3754_);
if (v_isShared_3758_ == 0)
{
lean_ctor_set(v___x_3757_, 1, v_a_3752_);
lean_ctor_set(v___x_3757_, 0, v___x_3759_);
v___x_3761_ = v___x_3757_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3763_; 
v_reuseFailAlloc_3763_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3763_, 0, v___x_3759_);
lean_ctor_set(v_reuseFailAlloc_3763_, 1, v_a_3752_);
v___x_3761_ = v_reuseFailAlloc_3763_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
v_a_3751_ = v_tail_3755_;
v_a_3752_ = v___x_3761_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(lean_object* v_a_3765_, lean_object* v_b_3766_, lean_object* v_x_3767_){
_start:
{
if (lean_obj_tag(v_x_3767_) == 0)
{
lean_dec(v_b_3766_);
lean_dec(v_a_3765_);
return v_x_3767_;
}
else
{
lean_object* v_key_3768_; lean_object* v_value_3769_; lean_object* v_tail_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3782_; 
v_key_3768_ = lean_ctor_get(v_x_3767_, 0);
v_value_3769_ = lean_ctor_get(v_x_3767_, 1);
v_tail_3770_ = lean_ctor_get(v_x_3767_, 2);
v_isSharedCheck_3782_ = !lean_is_exclusive(v_x_3767_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3772_ = v_x_3767_;
v_isShared_3773_ = v_isSharedCheck_3782_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_tail_3770_);
lean_inc(v_value_3769_);
lean_inc(v_key_3768_);
lean_dec(v_x_3767_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3782_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
uint8_t v___x_3774_; 
v___x_3774_ = l_Lean_instBEqFVarId_beq(v_key_3768_, v_a_3765_);
if (v___x_3774_ == 0)
{
lean_object* v___x_3775_; lean_object* v___x_3777_; 
v___x_3775_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(v_a_3765_, v_b_3766_, v_tail_3770_);
if (v_isShared_3773_ == 0)
{
lean_ctor_set(v___x_3772_, 2, v___x_3775_);
v___x_3777_ = v___x_3772_;
goto v_reusejp_3776_;
}
else
{
lean_object* v_reuseFailAlloc_3778_; 
v_reuseFailAlloc_3778_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3778_, 0, v_key_3768_);
lean_ctor_set(v_reuseFailAlloc_3778_, 1, v_value_3769_);
lean_ctor_set(v_reuseFailAlloc_3778_, 2, v___x_3775_);
v___x_3777_ = v_reuseFailAlloc_3778_;
goto v_reusejp_3776_;
}
v_reusejp_3776_:
{
return v___x_3777_;
}
}
else
{
lean_object* v___x_3780_; 
lean_dec(v_value_3769_);
lean_dec(v_key_3768_);
if (v_isShared_3773_ == 0)
{
lean_ctor_set(v___x_3772_, 1, v_b_3766_);
lean_ctor_set(v___x_3772_, 0, v_a_3765_);
v___x_3780_ = v___x_3772_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v_a_3765_);
lean_ctor_set(v_reuseFailAlloc_3781_, 1, v_b_3766_);
lean_ctor_set(v_reuseFailAlloc_3781_, 2, v_tail_3770_);
v___x_3780_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
return v___x_3780_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(lean_object* v_m_3783_, lean_object* v_a_3784_, lean_object* v_b_3785_){
_start:
{
lean_object* v_size_3786_; lean_object* v_buckets_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3830_; 
v_size_3786_ = lean_ctor_get(v_m_3783_, 0);
v_buckets_3787_ = lean_ctor_get(v_m_3783_, 1);
v_isSharedCheck_3830_ = !lean_is_exclusive(v_m_3783_);
if (v_isSharedCheck_3830_ == 0)
{
v___x_3789_ = v_m_3783_;
v_isShared_3790_ = v_isSharedCheck_3830_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_buckets_3787_);
lean_inc(v_size_3786_);
lean_dec(v_m_3783_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3830_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___x_3791_; uint64_t v___x_3792_; uint64_t v___x_3793_; uint64_t v___x_3794_; uint64_t v_fold_3795_; uint64_t v___x_3796_; uint64_t v___x_3797_; uint64_t v___x_3798_; size_t v___x_3799_; size_t v___x_3800_; size_t v___x_3801_; size_t v___x_3802_; size_t v___x_3803_; lean_object* v_bkt_3804_; uint8_t v___x_3805_; 
v___x_3791_ = lean_array_get_size(v_buckets_3787_);
v___x_3792_ = l_Lean_instHashableFVarId_hash(v_a_3784_);
v___x_3793_ = 32ULL;
v___x_3794_ = lean_uint64_shift_right(v___x_3792_, v___x_3793_);
v_fold_3795_ = lean_uint64_xor(v___x_3792_, v___x_3794_);
v___x_3796_ = 16ULL;
v___x_3797_ = lean_uint64_shift_right(v_fold_3795_, v___x_3796_);
v___x_3798_ = lean_uint64_xor(v_fold_3795_, v___x_3797_);
v___x_3799_ = lean_uint64_to_usize(v___x_3798_);
v___x_3800_ = lean_usize_of_nat(v___x_3791_);
v___x_3801_ = ((size_t)1ULL);
v___x_3802_ = lean_usize_sub(v___x_3800_, v___x_3801_);
v___x_3803_ = lean_usize_land(v___x_3799_, v___x_3802_);
v_bkt_3804_ = lean_array_uget_borrowed(v_buckets_3787_, v___x_3803_);
v___x_3805_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_3784_, v_bkt_3804_);
if (v___x_3805_ == 0)
{
lean_object* v___x_3806_; lean_object* v_size_x27_3807_; lean_object* v___x_3808_; lean_object* v_buckets_x27_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; uint8_t v___x_3815_; 
v___x_3806_ = lean_unsigned_to_nat(1u);
v_size_x27_3807_ = lean_nat_add(v_size_3786_, v___x_3806_);
lean_dec(v_size_3786_);
lean_inc(v_bkt_3804_);
v___x_3808_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3808_, 0, v_a_3784_);
lean_ctor_set(v___x_3808_, 1, v_b_3785_);
lean_ctor_set(v___x_3808_, 2, v_bkt_3804_);
v_buckets_x27_3809_ = lean_array_uset(v_buckets_3787_, v___x_3803_, v___x_3808_);
v___x_3810_ = lean_unsigned_to_nat(4u);
v___x_3811_ = lean_nat_mul(v_size_x27_3807_, v___x_3810_);
v___x_3812_ = lean_unsigned_to_nat(3u);
v___x_3813_ = lean_nat_div(v___x_3811_, v___x_3812_);
lean_dec(v___x_3811_);
v___x_3814_ = lean_array_get_size(v_buckets_x27_3809_);
v___x_3815_ = lean_nat_dec_le(v___x_3813_, v___x_3814_);
lean_dec(v___x_3813_);
if (v___x_3815_ == 0)
{
lean_object* v_val_3816_; lean_object* v___x_3818_; 
v_val_3816_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(v_buckets_x27_3809_);
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 1, v_val_3816_);
lean_ctor_set(v___x_3789_, 0, v_size_x27_3807_);
v___x_3818_ = v___x_3789_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v_size_x27_3807_);
lean_ctor_set(v_reuseFailAlloc_3819_, 1, v_val_3816_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
else
{
lean_object* v___x_3821_; 
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 1, v_buckets_x27_3809_);
lean_ctor_set(v___x_3789_, 0, v_size_x27_3807_);
v___x_3821_ = v___x_3789_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_size_x27_3807_);
lean_ctor_set(v_reuseFailAlloc_3822_, 1, v_buckets_x27_3809_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
return v___x_3821_;
}
}
}
else
{
lean_object* v___x_3823_; lean_object* v_buckets_x27_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3828_; 
lean_inc(v_bkt_3804_);
v___x_3823_ = lean_box(0);
v_buckets_x27_3824_ = lean_array_uset(v_buckets_3787_, v___x_3803_, v___x_3823_);
v___x_3825_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(v_a_3784_, v_b_3785_, v_bkt_3804_);
v___x_3826_ = lean_array_uset(v_buckets_x27_3824_, v___x_3803_, v___x_3825_);
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 1, v___x_3826_);
v___x_3828_ = v___x_3789_;
goto v_reusejp_3827_;
}
else
{
lean_object* v_reuseFailAlloc_3829_; 
v_reuseFailAlloc_3829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3829_, 0, v_size_3786_);
lean_ctor_set(v_reuseFailAlloc_3829_, 1, v___x_3826_);
v___x_3828_ = v_reuseFailAlloc_3829_;
goto v_reusejp_3827_;
}
v_reusejp_3827_:
{
return v___x_3828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(lean_object* v_as_3831_, size_t v_sz_3832_, size_t v_i_3833_, lean_object* v_b_3834_){
_start:
{
uint8_t v___x_3836_; 
v___x_3836_ = lean_usize_dec_lt(v_i_3833_, v_sz_3832_);
if (v___x_3836_ == 0)
{
lean_object* v___x_3837_; 
v___x_3837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3837_, 0, v_b_3834_);
return v___x_3837_;
}
else
{
lean_object* v_snd_3838_; lean_object* v_fst_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3874_; 
v_snd_3838_ = lean_ctor_get(v_b_3834_, 1);
v_fst_3839_ = lean_ctor_get(v_b_3834_, 0);
v_isSharedCheck_3874_ = !lean_is_exclusive(v_b_3834_);
if (v_isSharedCheck_3874_ == 0)
{
v___x_3841_ = v_b_3834_;
v_isShared_3842_ = v_isSharedCheck_3874_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_snd_3838_);
lean_inc(v_fst_3839_);
lean_dec(v_b_3834_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3874_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v_array_3843_; lean_object* v_start_3844_; lean_object* v_stop_3845_; uint8_t v___x_3846_; 
v_array_3843_ = lean_ctor_get(v_snd_3838_, 0);
v_start_3844_ = lean_ctor_get(v_snd_3838_, 1);
v_stop_3845_ = lean_ctor_get(v_snd_3838_, 2);
v___x_3846_ = lean_nat_dec_lt(v_start_3844_, v_stop_3845_);
if (v___x_3846_ == 0)
{
lean_object* v___x_3848_; 
if (v_isShared_3842_ == 0)
{
v___x_3848_ = v___x_3841_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v_fst_3839_);
lean_ctor_set(v_reuseFailAlloc_3850_, 1, v_snd_3838_);
v___x_3848_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
lean_object* v___x_3849_; 
v___x_3849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3848_);
return v___x_3849_;
}
}
else
{
lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3870_; 
lean_inc(v_stop_3845_);
lean_inc(v_start_3844_);
lean_inc_ref(v_array_3843_);
v_isSharedCheck_3870_ = !lean_is_exclusive(v_snd_3838_);
if (v_isSharedCheck_3870_ == 0)
{
lean_object* v_unused_3871_; lean_object* v_unused_3872_; lean_object* v_unused_3873_; 
v_unused_3871_ = lean_ctor_get(v_snd_3838_, 2);
lean_dec(v_unused_3871_);
v_unused_3872_ = lean_ctor_get(v_snd_3838_, 1);
lean_dec(v_unused_3872_);
v_unused_3873_ = lean_ctor_get(v_snd_3838_, 0);
lean_dec(v_unused_3873_);
v___x_3852_ = v_snd_3838_;
v_isShared_3853_ = v_isSharedCheck_3870_;
goto v_resetjp_3851_;
}
else
{
lean_dec(v_snd_3838_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3870_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
lean_object* v_a_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3859_; 
v_a_3854_ = lean_array_uget_borrowed(v_as_3831_, v_i_3833_);
v___x_3855_ = lean_array_fget(v_array_3843_, v_start_3844_);
v___x_3856_ = lean_unsigned_to_nat(1u);
v___x_3857_ = lean_nat_add(v_start_3844_, v___x_3856_);
lean_dec(v_start_3844_);
if (v_isShared_3853_ == 0)
{
lean_ctor_set(v___x_3852_, 1, v___x_3857_);
v___x_3859_ = v___x_3852_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_array_3843_);
lean_ctor_set(v_reuseFailAlloc_3869_, 1, v___x_3857_);
lean_ctor_set(v_reuseFailAlloc_3869_, 2, v_stop_3845_);
v___x_3859_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
lean_object* v___x_3860_; lean_object* v___x_3862_; 
v___x_3860_ = l_Lean_LocalDecl_fvarId(v_a_3854_);
lean_inc(v_a_3854_);
if (v_isShared_3842_ == 0)
{
lean_ctor_set(v___x_3841_, 1, v___x_3855_);
lean_ctor_set(v___x_3841_, 0, v_a_3854_);
v___x_3862_ = v___x_3841_;
goto v_reusejp_3861_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_a_3854_);
lean_ctor_set(v_reuseFailAlloc_3868_, 1, v___x_3855_);
v___x_3862_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3861_;
}
v_reusejp_3861_:
{
lean_object* v___x_3863_; lean_object* v___x_3864_; size_t v___x_3865_; size_t v___x_3866_; 
v___x_3863_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(v_fst_3839_, v___x_3860_, v___x_3862_);
v___x_3864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3864_, 0, v___x_3863_);
lean_ctor_set(v___x_3864_, 1, v___x_3859_);
v___x_3865_ = ((size_t)1ULL);
v___x_3866_ = lean_usize_add(v_i_3833_, v___x_3865_);
v_i_3833_ = v___x_3866_;
v_b_3834_ = v___x_3864_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg___boxed(lean_object* v_as_3875_, lean_object* v_sz_3876_, lean_object* v_i_3877_, lean_object* v_b_3878_, lean_object* v___y_3879_){
_start:
{
size_t v_sz_boxed_3880_; size_t v_i_boxed_3881_; lean_object* v_res_3882_; 
v_sz_boxed_3880_ = lean_unbox_usize(v_sz_3876_);
lean_dec(v_sz_3876_);
v_i_boxed_3881_ = lean_unbox_usize(v_i_3877_);
lean_dec(v_i_3877_);
v_res_3882_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_as_3875_, v_sz_boxed_3880_, v_i_boxed_3881_, v_b_3878_);
lean_dec_ref(v_as_3875_);
return v_res_3882_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2(void){
_start:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3885_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1));
v___x_3886_ = lean_unsigned_to_nat(2u);
v___x_3887_ = lean_unsigned_to_nat(372u);
v___x_3888_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0));
v___x_3889_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_3890_ = l_mkPanicMessageWithDecl(v___x_3889_, v___x_3888_, v___x_3887_, v___x_3886_, v___x_3885_);
return v___x_3890_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4(void){
_start:
{
lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; 
v___x_3892_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3));
v___x_3893_ = lean_unsigned_to_nat(2u);
v___x_3894_ = lean_unsigned_to_nat(373u);
v___x_3895_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0));
v___x_3896_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_3897_ = l_mkPanicMessageWithDecl(v___x_3896_, v___x_3895_, v___x_3894_, v___x_3893_, v___x_3892_);
return v___x_3897_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5(void){
_start:
{
lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3898_ = lean_box(0);
v___x_3899_ = lean_unsigned_to_nat(16u);
v___x_3900_ = lean_mk_array(v___x_3899_, v___x_3898_);
return v___x_3900_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6(void){
_start:
{
lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3901_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5);
v___x_3902_ = lean_unsigned_to_nat(0u);
v___x_3903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3902_);
lean_ctor_set(v___x_3903_, 1, v___x_3901_);
return v___x_3903_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8(void){
_start:
{
lean_object* v___x_3905_; lean_object* v___x_3906_; 
v___x_3905_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7));
v___x_3906_ = l_Lean_stringToMessageData(v___x_3905_);
return v___x_3906_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10(void){
_start:
{
lean_object* v___x_3908_; lean_object* v___x_3909_; 
v___x_3908_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9));
v___x_3909_ = l_Lean_stringToMessageData(v___x_3908_);
return v___x_3909_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(lean_object* v_sortedDecls_3910_, lean_object* v_sortedArgs_3911_, lean_object* v_toSortDecls_3912_, lean_object* v_toSortArgs_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_){
_start:
{
lean_object* v___y_3918_; lean_object* v___y_3937_; lean_object* v___y_3938_; lean_object* v___y_3939_; lean_object* v___y_3940_; lean_object* v_snd_3941_; lean_object* v___x_3943_; lean_object* v___x_3944_; uint8_t v___x_3945_; 
v___x_3943_ = lean_array_get_size(v_sortedDecls_3910_);
v___x_3944_ = lean_array_get_size(v_sortedArgs_3911_);
v___x_3945_ = lean_nat_dec_eq(v___x_3943_, v___x_3944_);
if (v___x_3945_ == 0)
{
lean_object* v___x_3946_; lean_object* v___x_3947_; 
lean_dec_ref(v_toSortArgs_3913_);
lean_dec_ref(v_sortedArgs_3911_);
lean_dec_ref(v_sortedDecls_3910_);
v___x_3946_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2);
v___x_3947_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(v___x_3946_, v_a_3914_, v_a_3915_);
return v___x_3947_;
}
else
{
lean_object* v___x_3948_; lean_object* v___x_3949_; uint8_t v___x_3950_; 
v___x_3948_ = lean_array_get_size(v_toSortDecls_3912_);
v___x_3949_ = lean_array_get_size(v_toSortArgs_3913_);
v___x_3950_ = lean_nat_dec_eq(v___x_3948_, v___x_3949_);
if (v___x_3950_ == 0)
{
lean_object* v___x_3951_; lean_object* v___x_3952_; 
lean_dec_ref(v_toSortArgs_3913_);
lean_dec_ref(v_sortedArgs_3911_);
lean_dec_ref(v_sortedDecls_3910_);
v___x_3951_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4);
v___x_3952_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(v___x_3951_, v_a_3914_, v_a_3915_);
return v___x_3952_;
}
else
{
lean_object* v___x_3953_; uint8_t v___x_3954_; 
v___x_3953_ = lean_unsigned_to_nat(0u);
v___x_3954_ = lean_nat_dec_eq(v___x_3948_, v___x_3953_);
if (v___x_3954_ == 0)
{
lean_object* v_toCold_3955_; lean_object* v_options_3956_; lean_object* v_inheritedTraceOptions_3957_; uint8_t v_hasTrace_3958_; lean_object* v___x_3959_; lean_object* v_cls_3960_; lean_object* v___y_3962_; lean_object* v___y_3963_; 
v_toCold_3955_ = lean_ctor_get(v_a_3914_, 0);
v_options_3956_ = lean_ctor_get(v_toCold_3955_, 2);
v_inheritedTraceOptions_3957_ = lean_ctor_get(v_toCold_3955_, 11);
v_hasTrace_3958_ = lean_ctor_get_uint8(v_options_3956_, sizeof(void*)*1);
v___x_3959_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v_cls_3960_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
if (v_hasTrace_3958_ == 0)
{
v___y_3962_ = v_a_3914_;
v___y_3963_ = v_a_3915_;
goto v___jp_3961_;
}
else
{
lean_object* v___x_4064_; uint8_t v___x_4065_; 
v___x_4064_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_4065_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3957_, v_options_3956_, v___x_4064_);
if (v___x_4065_ == 0)
{
v___y_3962_ = v_a_3914_;
v___y_3963_ = v_a_3915_;
goto v___jp_3961_;
}
else
{
lean_object* v___x_4066_; lean_object* v___x_4067_; 
v___x_4066_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10);
v___x_4067_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(v_cls_3960_, v___x_4066_, v_a_3914_, v_a_3915_);
if (lean_obj_tag(v___x_4067_) == 0)
{
lean_dec_ref_known(v___x_4067_, 1);
v___y_3962_ = v_a_3914_;
v___y_3963_ = v_a_3915_;
goto v___jp_3961_;
}
else
{
lean_object* v_a_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4075_; 
lean_dec_ref(v_toSortArgs_3913_);
lean_dec_ref(v_sortedArgs_3911_);
lean_dec_ref(v_sortedDecls_3910_);
v_a_4068_ = lean_ctor_get(v___x_4067_, 0);
v_isSharedCheck_4075_ = !lean_is_exclusive(v___x_4067_);
if (v_isSharedCheck_4075_ == 0)
{
v___x_4070_ = v___x_4067_;
v_isShared_4071_ = v_isSharedCheck_4075_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_a_4068_);
lean_dec(v___x_4067_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4075_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4073_; 
if (v_isShared_4071_ == 0)
{
v___x_4073_ = v___x_4070_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v_a_4068_);
v___x_4073_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
return v___x_4073_;
}
}
}
}
}
v___jp_3961_:
{
lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; size_t v_sz_3967_; size_t v___x_3968_; lean_object* v___x_3969_; 
v___x_3964_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6);
v___x_3965_ = l_Array_toSubarray___redArg(v_sortedArgs_3911_, v___x_3953_, v___x_3944_);
v___x_3966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3964_);
lean_ctor_set(v___x_3966_, 1, v___x_3965_);
v_sz_3967_ = lean_array_size(v_sortedDecls_3910_);
v___x_3968_ = ((size_t)0ULL);
v___x_3969_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_sortedDecls_3910_, v_sz_3967_, v___x_3968_, v___x_3966_);
if (lean_obj_tag(v___x_3969_) == 0)
{
lean_object* v_a_3970_; lean_object* v_fst_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_4054_; 
v_a_3970_ = lean_ctor_get(v___x_3969_, 0);
lean_inc(v_a_3970_);
lean_dec_ref_known(v___x_3969_, 1);
v_fst_3971_ = lean_ctor_get(v_a_3970_, 0);
v_isSharedCheck_4054_ = !lean_is_exclusive(v_a_3970_);
if (v_isSharedCheck_4054_ == 0)
{
lean_object* v_unused_4055_; 
v_unused_4055_ = lean_ctor_get(v_a_3970_, 1);
lean_dec(v_unused_4055_);
v___x_3973_ = v_a_3970_;
v_isShared_3974_ = v_isSharedCheck_4054_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_fst_3971_);
lean_dec(v_a_3970_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_4054_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v___x_3975_; lean_object* v___x_3977_; 
v___x_3975_ = l_Array_toSubarray___redArg(v_toSortArgs_3913_, v___x_3953_, v___x_3949_);
if (v_isShared_3974_ == 0)
{
lean_ctor_set(v___x_3973_, 1, v___x_3975_);
v___x_3977_ = v___x_3973_;
goto v_reusejp_3976_;
}
else
{
lean_object* v_reuseFailAlloc_4053_; 
v_reuseFailAlloc_4053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4053_, 0, v_fst_3971_);
lean_ctor_set(v_reuseFailAlloc_4053_, 1, v___x_3975_);
v___x_3977_ = v_reuseFailAlloc_4053_;
goto v_reusejp_3976_;
}
v_reusejp_3976_:
{
size_t v_sz_3978_; lean_object* v___x_3979_; 
v_sz_3978_ = lean_array_size(v_toSortDecls_3912_);
v___x_3979_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_toSortDecls_3912_, v_sz_3978_, v___x_3968_, v___x_3977_);
if (lean_obj_tag(v___x_3979_) == 0)
{
lean_object* v_a_3980_; lean_object* v_fst_3981_; lean_object* v_size_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; 
v_a_3980_ = lean_ctor_get(v___x_3979_, 0);
lean_inc(v_a_3980_);
lean_dec_ref_known(v___x_3979_, 1);
v_fst_3981_ = lean_ctor_get(v_a_3980_, 0);
lean_inc_n(v_fst_3981_, 2);
lean_dec(v_a_3980_);
v_size_3982_ = lean_ctor_get(v_fst_3981_, 0);
v___x_3983_ = lean_mk_empty_array_with_capacity(v_size_3982_);
lean_inc_ref(v___x_3983_);
v___x_3984_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3984_, 0, v___x_3959_);
lean_ctor_set(v___x_3984_, 1, v___x_3959_);
lean_ctor_set(v___x_3984_, 2, v___x_3983_);
lean_ctor_set(v___x_3984_, 3, v___x_3983_);
v___x_3985_ = lean_box(0);
v___x_3986_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v_fst_3981_, v_sortedDecls_3910_, v_sz_3967_, v___x_3968_, v___x_3985_, v___x_3984_, v___y_3962_, v___y_3963_);
lean_dec_ref(v_sortedDecls_3910_);
if (lean_obj_tag(v___x_3986_) == 0)
{
lean_object* v_a_3987_; lean_object* v_snd_3988_; lean_object* v___x_3989_; 
v_a_3987_ = lean_ctor_get(v___x_3986_, 0);
lean_inc(v_a_3987_);
lean_dec_ref_known(v___x_3986_, 1);
v_snd_3988_ = lean_ctor_get(v_a_3987_, 1);
lean_inc(v_snd_3988_);
lean_dec(v_a_3987_);
v___x_3989_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v_fst_3981_, v_toSortDecls_3912_, v_sz_3978_, v___x_3968_, v___x_3985_, v_snd_3988_, v___y_3962_, v___y_3963_);
if (lean_obj_tag(v___x_3989_) == 0)
{
lean_object* v_a_3990_; lean_object* v_snd_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_4027_; 
v_a_3990_ = lean_ctor_get(v___x_3989_, 0);
lean_inc(v_a_3990_);
lean_dec_ref_known(v___x_3989_, 1);
v_snd_3991_ = lean_ctor_get(v_a_3990_, 1);
v_isSharedCheck_4027_ = !lean_is_exclusive(v_a_3990_);
if (v_isSharedCheck_4027_ == 0)
{
lean_object* v_unused_4028_; 
v_unused_4028_ = lean_ctor_get(v_a_3990_, 0);
lean_dec(v_unused_4028_);
v___x_3993_ = v_a_3990_;
v_isShared_3994_ = v_isSharedCheck_4027_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_snd_3991_);
lean_dec(v_a_3990_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_4027_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v_toCold_3995_; lean_object* v_options_3996_; lean_object* v_newDecls_3997_; lean_object* v_newArgs_3998_; lean_object* v_inheritedTraceOptions_3999_; uint8_t v_hasTrace_4000_; lean_object* v___f_4001_; 
v_toCold_3995_ = lean_ctor_get(v___y_3962_, 0);
v_options_3996_ = lean_ctor_get(v_toCold_3995_, 2);
v_newDecls_3997_ = lean_ctor_get(v_snd_3991_, 2);
v_newArgs_3998_ = lean_ctor_get(v_snd_3991_, 3);
v_inheritedTraceOptions_3999_ = lean_ctor_get(v_toCold_3995_, 11);
v_hasTrace_4000_ = lean_ctor_get_uint8(v_options_3996_, sizeof(void*)*1);
lean_inc_ref(v_newArgs_3998_);
lean_inc_ref(v_newDecls_3997_);
v___f_4001_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed), 7, 2);
lean_closure_set(v___f_4001_, 0, v_newDecls_3997_);
lean_closure_set(v___f_4001_, 1, v_newArgs_3998_);
if (v_hasTrace_4000_ == 0)
{
lean_del_object(v___x_3993_);
v___y_3937_ = v___y_3963_;
v___y_3938_ = v___y_3962_;
v___y_3939_ = v___f_4001_;
v___y_3940_ = v___x_3985_;
v_snd_3941_ = v_snd_3991_;
goto v___jp_3936_;
}
else
{
lean_object* v___x_4002_; uint8_t v___x_4003_; 
v___x_4002_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_4003_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3999_, v_options_3996_, v___x_4002_);
if (v___x_4003_ == 0)
{
lean_del_object(v___x_3993_);
v___y_3937_ = v___y_3963_;
v___y_3938_ = v___y_3962_;
v___y_3939_ = v___f_4001_;
v___y_3940_ = v___x_3985_;
v_snd_3941_ = v_snd_3991_;
goto v___jp_3936_;
}
else
{
lean_object* v___x_4004_; size_t v_sz_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4012_; 
lean_inc_ref(v_newArgs_3998_);
lean_inc_ref_n(v_newDecls_3997_, 2);
lean_dec_ref(v___f_4001_);
v___x_4004_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8);
v_sz_4005_ = lean_array_size(v_newDecls_3997_);
v___x_4006_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(v_sz_4005_, v___x_3968_, v_newDecls_3997_);
v___x_4007_ = lean_array_to_list(v___x_4006_);
v___x_4008_ = lean_box(0);
v___x_4009_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(v___x_4007_, v___x_4008_);
v___x_4010_ = l_Lean_MessageData_ofList(v___x_4009_);
if (v_isShared_3994_ == 0)
{
lean_ctor_set_tag(v___x_3993_, 7);
lean_ctor_set(v___x_3993_, 1, v___x_4010_);
lean_ctor_set(v___x_3993_, 0, v___x_4004_);
v___x_4012_ = v___x_3993_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v___x_4004_);
lean_ctor_set(v_reuseFailAlloc_4026_, 1, v___x_4010_);
v___x_4012_ = v_reuseFailAlloc_4026_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
lean_object* v___x_4013_; 
v___x_4013_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(v_cls_3960_, v___x_4012_, v_snd_3991_, v___y_3962_, v___y_3963_);
if (lean_obj_tag(v___x_4013_) == 0)
{
lean_object* v_a_4014_; lean_object* v_fst_4015_; lean_object* v_snd_4016_; lean_object* v___x_4017_; 
v_a_4014_ = lean_ctor_get(v___x_4013_, 0);
lean_inc(v_a_4014_);
lean_dec_ref_known(v___x_4013_, 1);
v_fst_4015_ = lean_ctor_get(v_a_4014_, 0);
lean_inc(v_fst_4015_);
v_snd_4016_ = lean_ctor_get(v_a_4014_, 1);
lean_inc(v_snd_4016_);
lean_dec(v_a_4014_);
v___x_4017_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(v_newDecls_3997_, v_newArgs_3998_, v_fst_4015_, v_snd_4016_, v___y_3962_, v___y_3963_);
v___y_3918_ = v___x_4017_;
goto v___jp_3917_;
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
lean_dec_ref(v_newArgs_3998_);
lean_dec_ref(v_newDecls_3997_);
v_a_4018_ = lean_ctor_get(v___x_4013_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_4013_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_4013_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_4013_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
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
lean_object* v_a_4029_; lean_object* v___x_4031_; uint8_t v_isShared_4032_; uint8_t v_isSharedCheck_4036_; 
v_a_4029_ = lean_ctor_get(v___x_3989_, 0);
v_isSharedCheck_4036_ = !lean_is_exclusive(v___x_3989_);
if (v_isSharedCheck_4036_ == 0)
{
v___x_4031_ = v___x_3989_;
v_isShared_4032_ = v_isSharedCheck_4036_;
goto v_resetjp_4030_;
}
else
{
lean_inc(v_a_4029_);
lean_dec(v___x_3989_);
v___x_4031_ = lean_box(0);
v_isShared_4032_ = v_isSharedCheck_4036_;
goto v_resetjp_4030_;
}
v_resetjp_4030_:
{
lean_object* v___x_4034_; 
if (v_isShared_4032_ == 0)
{
v___x_4034_ = v___x_4031_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v_a_4029_);
v___x_4034_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
return v___x_4034_;
}
}
}
}
else
{
lean_object* v_a_4037_; lean_object* v___x_4039_; uint8_t v_isShared_4040_; uint8_t v_isSharedCheck_4044_; 
lean_dec(v_fst_3981_);
v_a_4037_ = lean_ctor_get(v___x_3986_, 0);
v_isSharedCheck_4044_ = !lean_is_exclusive(v___x_3986_);
if (v_isSharedCheck_4044_ == 0)
{
v___x_4039_ = v___x_3986_;
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
else
{
lean_inc(v_a_4037_);
lean_dec(v___x_3986_);
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
v_reuseFailAlloc_4043_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4052_; 
lean_dec_ref(v_sortedDecls_3910_);
v_a_4045_ = lean_ctor_get(v___x_3979_, 0);
v_isSharedCheck_4052_ = !lean_is_exclusive(v___x_3979_);
if (v_isSharedCheck_4052_ == 0)
{
v___x_4047_ = v___x_3979_;
v_isShared_4048_ = v_isSharedCheck_4052_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_a_4045_);
lean_dec(v___x_3979_);
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
else
{
lean_object* v_a_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4063_; 
lean_dec_ref(v_toSortArgs_3913_);
lean_dec_ref(v_sortedDecls_3910_);
v_a_4056_ = lean_ctor_get(v___x_3969_, 0);
v_isSharedCheck_4063_ = !lean_is_exclusive(v___x_3969_);
if (v_isSharedCheck_4063_ == 0)
{
v___x_4058_ = v___x_3969_;
v_isShared_4059_ = v_isSharedCheck_4063_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_a_4056_);
lean_dec(v___x_3969_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4063_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
lean_object* v___x_4061_; 
if (v_isShared_4059_ == 0)
{
v___x_4061_ = v___x_4058_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v_a_4056_);
v___x_4061_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
return v___x_4061_;
}
}
}
}
}
else
{
lean_object* v___x_4076_; lean_object* v___x_4077_; 
lean_dec_ref(v_toSortArgs_3913_);
v___x_4076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4076_, 0, v_sortedDecls_3910_);
lean_ctor_set(v___x_4076_, 1, v_sortedArgs_3911_);
v___x_4077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4077_, 0, v___x_4076_);
return v___x_4077_;
}
}
}
v___jp_3917_:
{
if (lean_obj_tag(v___y_3918_) == 0)
{
lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3927_; 
v_a_3919_ = lean_ctor_get(v___y_3918_, 0);
v_isSharedCheck_3927_ = !lean_is_exclusive(v___y_3918_);
if (v_isSharedCheck_3927_ == 0)
{
v___x_3921_ = v___y_3918_;
v_isShared_3922_ = v_isSharedCheck_3927_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___y_3918_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3927_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v_fst_3923_; lean_object* v___x_3925_; 
v_fst_3923_ = lean_ctor_get(v_a_3919_, 0);
lean_inc(v_fst_3923_);
lean_dec(v_a_3919_);
if (v_isShared_3922_ == 0)
{
lean_ctor_set(v___x_3921_, 0, v_fst_3923_);
v___x_3925_ = v___x_3921_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v_fst_3923_);
v___x_3925_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
return v___x_3925_;
}
}
}
else
{
lean_object* v_a_3928_; lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_3935_; 
v_a_3928_ = lean_ctor_get(v___y_3918_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v___y_3918_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3930_ = v___y_3918_;
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
else
{
lean_inc(v_a_3928_);
lean_dec(v___y_3918_);
v___x_3930_ = lean_box(0);
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
v_resetjp_3929_:
{
lean_object* v___x_3933_; 
if (v_isShared_3931_ == 0)
{
v___x_3933_ = v___x_3930_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3934_; 
v_reuseFailAlloc_3934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3934_, 0, v_a_3928_);
v___x_3933_ = v_reuseFailAlloc_3934_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
return v___x_3933_;
}
}
}
}
v___jp_3936_:
{
lean_object* v___x_3942_; 
lean_inc(v___y_3937_);
lean_inc_ref(v___y_3938_);
v___x_3942_ = lean_apply_5(v___y_3939_, v___y_3940_, v_snd_3941_, v___y_3938_, v___y_3937_, lean_box(0));
v___y_3918_ = v___x_3942_;
goto v___jp_3917_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___boxed(lean_object* v_sortedDecls_4078_, lean_object* v_sortedArgs_4079_, lean_object* v_toSortDecls_4080_, lean_object* v_toSortArgs_4081_, lean_object* v_a_4082_, lean_object* v_a_4083_, lean_object* v_a_4084_){
_start:
{
lean_object* v_res_4085_; 
v_res_4085_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(v_sortedDecls_4078_, v_sortedArgs_4079_, v_toSortDecls_4080_, v_toSortArgs_4081_, v_a_4082_, v_a_4083_);
lean_dec(v_a_4083_);
lean_dec_ref(v_a_4082_);
lean_dec_ref(v_toSortDecls_4080_);
return v_res_4085_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0(lean_object* v_00_u03b2_4086_, lean_object* v_m_4087_, lean_object* v_a_4088_, lean_object* v_b_4089_){
_start:
{
lean_object* v___x_4090_; 
v___x_4090_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(v_m_4087_, v_a_4088_, v_b_4089_);
return v___x_4090_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(lean_object* v_as_4091_, size_t v_sz_4092_, size_t v_i_4093_, lean_object* v_b_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_){
_start:
{
lean_object* v___x_4098_; 
v___x_4098_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_as_4091_, v_sz_4092_, v_i_4093_, v_b_4094_);
return v___x_4098_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___boxed(lean_object* v_as_4099_, lean_object* v_sz_4100_, lean_object* v_i_4101_, lean_object* v_b_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_){
_start:
{
size_t v_sz_boxed_4106_; size_t v_i_boxed_4107_; lean_object* v_res_4108_; 
v_sz_boxed_4106_ = lean_unbox_usize(v_sz_4100_);
lean_dec(v_sz_4100_);
v_i_boxed_4107_ = lean_unbox_usize(v_i_4101_);
lean_dec(v_i_4101_);
v_res_4108_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(v_as_4099_, v_sz_boxed_4106_, v_i_boxed_4107_, v_b_4102_, v___y_4103_, v___y_4104_);
lean_dec(v___y_4104_);
lean_dec_ref(v___y_4103_);
lean_dec_ref(v_as_4099_);
return v_res_4108_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0(lean_object* v_00_u03b2_4109_, lean_object* v_a_4110_, lean_object* v_b_4111_, lean_object* v_x_4112_){
_start:
{
lean_object* v___x_4113_; 
v___x_4113_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(v_a_4110_, v_b_4111_, v_x_4112_);
return v___x_4113_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__1(lean_object* v_msg_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_){
_start:
{
lean_object* v___f_4121_; lean_object* v___x_1735__overap_4122_; lean_object* v___x_4123_; 
v___f_4121_ = ((lean_object*)(l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__1___closed__0));
v___x_1735__overap_4122_ = lean_panic_fn_borrowed(v___f_4121_, v_msg_4115_);
lean_inc(v___y_4119_);
lean_inc_ref(v___y_4118_);
lean_inc(v___y_4117_);
lean_inc_ref(v___y_4116_);
v___x_4123_ = lean_apply_5(v___x_1735__overap_4122_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, lean_box(0));
return v___x_4123_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__1___boxed(lean_object* v_msg_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_){
_start:
{
lean_object* v_res_4130_; 
v_res_4130_ = l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__1(v_msg_4124_, v___y_4125_, v___y_4126_, v___y_4127_, v___y_4128_);
lean_dec(v___y_4128_);
lean_dec_ref(v___y_4127_);
lean_dec(v___y_4126_);
lean_dec_ref(v___y_4125_);
return v_res_4130_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__1(lean_object* v_as_4131_, size_t v_i_4132_, size_t v_stop_4133_){
_start:
{
uint8_t v___x_4138_; 
v___x_4138_ = lean_usize_dec_eq(v_i_4132_, v_stop_4133_);
if (v___x_4138_ == 0)
{
lean_object* v___x_4139_; 
v___x_4139_ = lean_array_uget_borrowed(v_as_4131_, v_i_4132_);
if (lean_obj_tag(v___x_4139_) == 0)
{
goto v___jp_4134_;
}
else
{
lean_object* v_val_4140_; uint8_t v___x_4141_; 
v_val_4140_ = lean_ctor_get(v___x_4139_, 0);
v___x_4141_ = l_Lean_LocalDecl_isLet(v_val_4140_, v___x_4138_);
if (v___x_4141_ == 0)
{
goto v___jp_4134_;
}
else
{
return v___x_4141_;
}
}
}
else
{
uint8_t v___x_4142_; 
v___x_4142_ = 0;
return v___x_4142_;
}
v___jp_4134_:
{
size_t v___x_4135_; size_t v___x_4136_; 
v___x_4135_ = ((size_t)1ULL);
v___x_4136_ = lean_usize_add(v_i_4132_, v___x_4135_);
v_i_4132_ = v___x_4136_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__1___boxed(lean_object* v_as_4143_, lean_object* v_i_4144_, lean_object* v_stop_4145_){
_start:
{
size_t v_i_boxed_4146_; size_t v_stop_boxed_4147_; uint8_t v_res_4148_; lean_object* v_r_4149_; 
v_i_boxed_4146_ = lean_unbox_usize(v_i_4144_);
lean_dec(v_i_4144_);
v_stop_boxed_4147_ = lean_unbox_usize(v_stop_4145_);
lean_dec(v_stop_4145_);
v_res_4148_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__1(v_as_4143_, v_i_boxed_4146_, v_stop_boxed_4147_);
lean_dec_ref(v_as_4143_);
v_r_4149_ = lean_box(v_res_4148_);
return v_r_4149_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0(lean_object* v_x_4150_){
_start:
{
if (lean_obj_tag(v_x_4150_) == 0)
{
lean_object* v_cs_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; uint8_t v___x_4154_; 
v_cs_4151_ = lean_ctor_get(v_x_4150_, 0);
v___x_4152_ = lean_unsigned_to_nat(0u);
v___x_4153_ = lean_array_get_size(v_cs_4151_);
v___x_4154_ = lean_nat_dec_lt(v___x_4152_, v___x_4153_);
if (v___x_4154_ == 0)
{
return v___x_4154_;
}
else
{
size_t v___x_4155_; size_t v___x_4156_; uint8_t v___x_4157_; 
v___x_4155_ = ((size_t)0ULL);
v___x_4156_ = lean_usize_of_nat(v___x_4153_);
v___x_4157_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0_spec__2(v_cs_4151_, v___x_4155_, v___x_4156_);
return v___x_4157_;
}
}
else
{
lean_object* v_vs_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; uint8_t v___x_4161_; 
v_vs_4158_ = lean_ctor_get(v_x_4150_, 0);
v___x_4159_ = lean_unsigned_to_nat(0u);
v___x_4160_ = lean_array_get_size(v_vs_4158_);
v___x_4161_ = lean_nat_dec_lt(v___x_4159_, v___x_4160_);
if (v___x_4161_ == 0)
{
return v___x_4161_;
}
else
{
size_t v___x_4162_; size_t v___x_4163_; uint8_t v___x_4164_; 
v___x_4162_ = ((size_t)0ULL);
v___x_4163_ = lean_usize_of_nat(v___x_4160_);
v___x_4164_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__1(v_vs_4158_, v___x_4162_, v___x_4163_);
return v___x_4164_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0_spec__2(lean_object* v_as_4165_, size_t v_i_4166_, size_t v_stop_4167_){
_start:
{
uint8_t v___x_4168_; 
v___x_4168_ = lean_usize_dec_eq(v_i_4166_, v_stop_4167_);
if (v___x_4168_ == 0)
{
lean_object* v___x_4169_; uint8_t v___x_4170_; 
v___x_4169_ = lean_array_uget_borrowed(v_as_4165_, v_i_4166_);
v___x_4170_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0(v___x_4169_);
if (v___x_4170_ == 0)
{
size_t v___x_4171_; size_t v___x_4172_; 
v___x_4171_ = ((size_t)1ULL);
v___x_4172_ = lean_usize_add(v_i_4166_, v___x_4171_);
v_i_4166_ = v___x_4172_;
goto _start;
}
else
{
return v___x_4170_;
}
}
else
{
uint8_t v___x_4174_; 
v___x_4174_ = 0;
return v___x_4174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0_spec__2___boxed(lean_object* v_as_4175_, lean_object* v_i_4176_, lean_object* v_stop_4177_){
_start:
{
size_t v_i_boxed_4178_; size_t v_stop_boxed_4179_; uint8_t v_res_4180_; lean_object* v_r_4181_; 
v_i_boxed_4178_ = lean_unbox_usize(v_i_4176_);
lean_dec(v_i_4176_);
v_stop_boxed_4179_ = lean_unbox_usize(v_stop_4177_);
lean_dec(v_stop_4177_);
v_res_4180_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0_spec__2(v_as_4175_, v_i_boxed_4178_, v_stop_boxed_4179_);
lean_dec_ref(v_as_4175_);
v_r_4181_ = lean_box(v_res_4180_);
return v_r_4181_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0___boxed(lean_object* v_x_4182_){
_start:
{
uint8_t v_res_4183_; lean_object* v_r_4184_; 
v_res_4183_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0(v_x_4182_);
lean_dec_ref(v_x_4182_);
v_r_4184_ = lean_box(v_res_4183_);
return v_r_4184_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(lean_object* v_t_4185_){
_start:
{
lean_object* v_root_4186_; lean_object* v_tail_4187_; uint8_t v___x_4188_; 
v_root_4186_ = lean_ctor_get(v_t_4185_, 0);
v_tail_4187_ = lean_ctor_get(v_t_4185_, 1);
v___x_4188_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__0(v_root_4186_);
if (v___x_4188_ == 0)
{
lean_object* v___x_4189_; lean_object* v___x_4190_; uint8_t v___x_4191_; 
v___x_4189_ = lean_unsigned_to_nat(0u);
v___x_4190_ = lean_array_get_size(v_tail_4187_);
v___x_4191_ = lean_nat_dec_lt(v___x_4189_, v___x_4190_);
if (v___x_4191_ == 0)
{
return v___x_4191_;
}
else
{
size_t v___x_4192_; size_t v___x_4193_; uint8_t v___x_4194_; 
v___x_4192_ = ((size_t)0ULL);
v___x_4193_ = lean_usize_of_nat(v___x_4190_);
v___x_4194_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0_spec__1(v_tail_4187_, v___x_4192_, v___x_4193_);
return v___x_4194_;
}
}
else
{
return v___x_4188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___boxed(lean_object* v_t_4195_){
_start:
{
uint8_t v_res_4196_; lean_object* v_r_4197_; 
v_res_4196_ = l_Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(v_t_4195_);
lean_dec_ref(v_t_4195_);
v_r_4197_ = lean_box(v_res_4196_);
return v_r_4197_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__0(void){
_start:
{
lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; 
v___x_4198_ = lean_box(0);
v___x_4199_ = lean_unsigned_to_nat(16u);
v___x_4200_ = lean_mk_array(v___x_4199_, v___x_4198_);
return v___x_4200_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__1(void){
_start:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; 
v___x_4201_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__0, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__0_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__0);
v___x_4202_ = lean_unsigned_to_nat(0u);
v___x_4203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4203_, 0, v___x_4202_);
lean_ctor_set(v___x_4203_, 1, v___x_4201_);
return v___x_4203_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__3(void){
_start:
{
lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v___x_4206_ = lean_unsigned_to_nat(1u);
v___x_4207_ = ((lean_object*)(l_Lean_Meta_Closure_mkValueTypeClosure___closed__2));
v___x_4208_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__1, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__1_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__1);
v___x_4209_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4208_);
lean_ctor_set(v___x_4209_, 1, v___x_4208_);
lean_ctor_set(v___x_4209_, 2, v___x_4207_);
lean_ctor_set(v___x_4209_, 3, v___x_4206_);
lean_ctor_set(v___x_4209_, 4, v___x_4207_);
lean_ctor_set(v___x_4209_, 5, v___x_4207_);
lean_ctor_set(v___x_4209_, 6, v___x_4207_);
lean_ctor_set(v___x_4209_, 7, v___x_4207_);
lean_ctor_set(v___x_4209_, 8, v___x_4206_);
lean_ctor_set(v___x_4209_, 9, v___x_4207_);
lean_ctor_set(v___x_4209_, 10, v___x_4207_);
lean_ctor_set(v___x_4209_, 11, v___x_4207_);
return v___x_4209_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__6(void){
_start:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; 
v___x_4212_ = ((lean_object*)(l_Lean_Meta_Closure_mkValueTypeClosure___closed__5));
v___x_4213_ = lean_unsigned_to_nat(2u);
v___x_4214_ = lean_unsigned_to_nat(424u);
v___x_4215_ = ((lean_object*)(l_Lean_Meta_Closure_mkValueTypeClosure___closed__4));
v___x_4216_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_4217_ = l_mkPanicMessageWithDecl(v___x_4216_, v___x_4215_, v___x_4214_, v___x_4213_, v___x_4212_);
return v___x_4217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure(lean_object* v_type_4218_, lean_object* v_value_4219_, uint8_t v_zetaDelta_4220_, lean_object* v_a_4221_, lean_object* v_a_4222_, lean_object* v_a_4223_, lean_object* v_a_4224_){
_start:
{
lean_object* v_lctx_4226_; lean_object* v_decls_4227_; uint8_t v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; 
v_lctx_4226_ = lean_ctor_get(v_a_4221_, 2);
v_decls_4227_ = lean_ctor_get(v_lctx_4226_, 1);
v___x_4228_ = l_Lean_PersistentArray_anyM___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(v_decls_4227_);
v___x_4229_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_4229_, 0, v_zetaDelta_4220_);
lean_ctor_set_uint8(v___x_4229_, 1, v___x_4228_);
v___x_4230_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__3, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__3_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__3);
v___x_4231_ = lean_st_mk_ref(v___x_4230_);
v___x_4232_ = l_Lean_Meta_Closure_mkValueTypeClosureAux(v_type_4218_, v_value_4219_, v___x_4229_, v___x_4231_, v_a_4221_, v_a_4222_, v_a_4223_, v_a_4224_);
lean_dec_ref_known(v___x_4229_, 0);
if (lean_obj_tag(v___x_4232_) == 0)
{
lean_object* v_a_4233_; lean_object* v___x_4234_; lean_object* v_fst_4235_; lean_object* v_snd_4236_; lean_object* v_levelParams_4237_; lean_object* v_levelArgs_4238_; lean_object* v_newLocalDecls_4239_; lean_object* v_newLocalDeclsForMVars_4240_; lean_object* v_newLetDecls_4241_; lean_object* v_exprMVarArgs_4242_; lean_object* v_exprFVarArgs_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; 
v_a_4233_ = lean_ctor_get(v___x_4232_, 0);
lean_inc(v_a_4233_);
lean_dec_ref_known(v___x_4232_, 1);
v___x_4234_ = lean_st_ref_get(v___x_4231_);
lean_dec(v___x_4231_);
v_fst_4235_ = lean_ctor_get(v_a_4233_, 0);
lean_inc(v_fst_4235_);
v_snd_4236_ = lean_ctor_get(v_a_4233_, 1);
lean_inc(v_snd_4236_);
lean_dec(v_a_4233_);
v_levelParams_4237_ = lean_ctor_get(v___x_4234_, 2);
lean_inc_ref(v_levelParams_4237_);
v_levelArgs_4238_ = lean_ctor_get(v___x_4234_, 4);
lean_inc_ref(v_levelArgs_4238_);
v_newLocalDecls_4239_ = lean_ctor_get(v___x_4234_, 5);
lean_inc_ref(v_newLocalDecls_4239_);
v_newLocalDeclsForMVars_4240_ = lean_ctor_get(v___x_4234_, 6);
lean_inc_ref(v_newLocalDeclsForMVars_4240_);
v_newLetDecls_4241_ = lean_ctor_get(v___x_4234_, 7);
lean_inc_ref(v_newLetDecls_4241_);
v_exprMVarArgs_4242_ = lean_ctor_get(v___x_4234_, 9);
lean_inc_ref(v_exprMVarArgs_4242_);
v_exprFVarArgs_4243_ = lean_ctor_get(v___x_4234_, 10);
lean_inc_ref(v_exprFVarArgs_4243_);
lean_dec(v___x_4234_);
v___x_4244_ = l_Array_reverse___redArg(v_newLocalDecls_4239_);
v___x_4245_ = l_Array_reverse___redArg(v_exprFVarArgs_4243_);
v___x_4246_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(v___x_4244_, v___x_4245_, v_newLocalDeclsForMVars_4240_, v_exprMVarArgs_4242_, v_a_4223_, v_a_4224_);
lean_dec_ref(v_newLocalDeclsForMVars_4240_);
if (lean_obj_tag(v___x_4246_) == 0)
{
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4265_; 
v_a_4247_ = lean_ctor_get(v___x_4246_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v___x_4246_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4249_ = v___x_4246_;
v_isShared_4250_ = v_isSharedCheck_4265_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v___x_4246_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4265_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v_fst_4251_; lean_object* v_snd_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; uint8_t v___x_4258_; 
v_fst_4251_ = lean_ctor_get(v_a_4247_, 0);
lean_inc_n(v_fst_4251_, 2);
v_snd_4252_ = lean_ctor_get(v_a_4247_, 1);
lean_inc(v_snd_4252_);
lean_dec(v_a_4247_);
v___x_4253_ = l_Array_reverse___redArg(v_newLetDecls_4241_);
lean_inc_ref(v___x_4253_);
v___x_4254_ = l_Lean_Meta_Closure_mkForall(v___x_4253_, v_fst_4235_);
lean_dec(v_fst_4235_);
v___x_4255_ = l_Lean_Meta_Closure_mkForall(v_fst_4251_, v___x_4254_);
lean_dec_ref(v___x_4254_);
v___x_4256_ = l_Lean_Meta_Closure_mkLambda(v___x_4253_, v_snd_4236_);
lean_dec(v_snd_4236_);
v___x_4257_ = l_Lean_Meta_Closure_mkLambda(v_fst_4251_, v___x_4256_);
lean_dec_ref(v___x_4256_);
v___x_4258_ = l_Lean_Expr_hasFVar(v___x_4257_);
if (v___x_4258_ == 0)
{
lean_object* v___x_4259_; lean_object* v___x_4261_; 
v___x_4259_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4259_, 0, v_levelParams_4237_);
lean_ctor_set(v___x_4259_, 1, v___x_4255_);
lean_ctor_set(v___x_4259_, 2, v___x_4257_);
lean_ctor_set(v___x_4259_, 3, v_levelArgs_4238_);
lean_ctor_set(v___x_4259_, 4, v_snd_4252_);
if (v_isShared_4250_ == 0)
{
lean_ctor_set(v___x_4249_, 0, v___x_4259_);
v___x_4261_ = v___x_4249_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v___x_4259_);
v___x_4261_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
return v___x_4261_;
}
}
else
{
lean_object* v___x_4263_; lean_object* v___x_4264_; 
lean_dec_ref(v___x_4257_);
lean_dec_ref(v___x_4255_);
lean_dec(v_snd_4252_);
lean_del_object(v___x_4249_);
lean_dec_ref(v_levelArgs_4238_);
lean_dec_ref(v_levelParams_4237_);
v___x_4263_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__6, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__6_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__6);
v___x_4264_ = l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__1(v___x_4263_, v_a_4221_, v_a_4222_, v_a_4223_, v_a_4224_);
return v___x_4264_;
}
}
}
else
{
lean_object* v_a_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4273_; 
lean_dec_ref(v_newLetDecls_4241_);
lean_dec_ref(v_levelArgs_4238_);
lean_dec_ref(v_levelParams_4237_);
lean_dec(v_snd_4236_);
lean_dec(v_fst_4235_);
v_a_4266_ = lean_ctor_get(v___x_4246_, 0);
v_isSharedCheck_4273_ = !lean_is_exclusive(v___x_4246_);
if (v_isSharedCheck_4273_ == 0)
{
v___x_4268_ = v___x_4246_;
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_a_4266_);
lean_dec(v___x_4246_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
lean_object* v___x_4271_; 
if (v_isShared_4269_ == 0)
{
v___x_4271_ = v___x_4268_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v_a_4266_);
v___x_4271_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
return v___x_4271_;
}
}
}
}
else
{
lean_object* v_a_4274_; lean_object* v___x_4276_; uint8_t v_isShared_4277_; uint8_t v_isSharedCheck_4281_; 
lean_dec(v___x_4231_);
v_a_4274_ = lean_ctor_get(v___x_4232_, 0);
v_isSharedCheck_4281_ = !lean_is_exclusive(v___x_4232_);
if (v_isSharedCheck_4281_ == 0)
{
v___x_4276_ = v___x_4232_;
v_isShared_4277_ = v_isSharedCheck_4281_;
goto v_resetjp_4275_;
}
else
{
lean_inc(v_a_4274_);
lean_dec(v___x_4232_);
v___x_4276_ = lean_box(0);
v_isShared_4277_ = v_isSharedCheck_4281_;
goto v_resetjp_4275_;
}
v_resetjp_4275_:
{
lean_object* v___x_4279_; 
if (v_isShared_4277_ == 0)
{
v___x_4279_ = v___x_4276_;
goto v_reusejp_4278_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4280_, 0, v_a_4274_);
v___x_4279_ = v_reuseFailAlloc_4280_;
goto v_reusejp_4278_;
}
v_reusejp_4278_:
{
return v___x_4279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___boxed(lean_object* v_type_4282_, lean_object* v_value_4283_, lean_object* v_zetaDelta_4284_, lean_object* v_a_4285_, lean_object* v_a_4286_, lean_object* v_a_4287_, lean_object* v_a_4288_, lean_object* v_a_4289_){
_start:
{
uint8_t v_zetaDelta_boxed_4290_; lean_object* v_res_4291_; 
v_zetaDelta_boxed_4290_ = lean_unbox(v_zetaDelta_4284_);
v_res_4291_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4282_, v_value_4283_, v_zetaDelta_boxed_4290_, v_a_4285_, v_a_4286_, v_a_4287_, v_a_4288_);
lean_dec(v_a_4288_);
lean_dec_ref(v_a_4287_);
lean_dec(v_a_4286_);
lean_dec_ref(v_a_4285_);
return v_res_4291_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(lean_object* v_name_4292_, lean_object* v_levelParams_4293_, lean_object* v_type_4294_, lean_object* v_value_4295_, lean_object* v_hints_4296_, lean_object* v___y_4297_){
_start:
{
lean_object* v___x_4299_; uint8_t v___y_4301_; lean_object* v_env_4309_; uint8_t v___x_4310_; 
v___x_4299_ = lean_st_ref_get(v___y_4297_);
v_env_4309_ = lean_ctor_get(v___x_4299_, 0);
lean_inc_ref_n(v_env_4309_, 2);
lean_dec(v___x_4299_);
v___x_4310_ = l_Lean_Environment_hasUnsafe(v_env_4309_, v_type_4294_);
if (v___x_4310_ == 0)
{
uint8_t v___x_4311_; 
v___x_4311_ = l_Lean_Environment_hasUnsafe(v_env_4309_, v_value_4295_);
if (v___x_4311_ == 0)
{
uint8_t v___x_4312_; 
v___x_4312_ = 1;
v___y_4301_ = v___x_4312_;
goto v___jp_4300_;
}
else
{
goto v___jp_4307_;
}
}
else
{
lean_dec_ref(v_env_4309_);
goto v___jp_4307_;
}
v___jp_4300_:
{
lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; 
lean_inc(v_name_4292_);
v___x_4302_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4302_, 0, v_name_4292_);
lean_ctor_set(v___x_4302_, 1, v_levelParams_4293_);
lean_ctor_set(v___x_4302_, 2, v_type_4294_);
v___x_4303_ = lean_box(0);
v___x_4304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4304_, 0, v_name_4292_);
lean_ctor_set(v___x_4304_, 1, v___x_4303_);
v___x_4305_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_4305_, 0, v___x_4302_);
lean_ctor_set(v___x_4305_, 1, v_value_4295_);
lean_ctor_set(v___x_4305_, 2, v_hints_4296_);
lean_ctor_set(v___x_4305_, 3, v___x_4304_);
lean_ctor_set_uint8(v___x_4305_, sizeof(void*)*4, v___y_4301_);
v___x_4306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4306_, 0, v___x_4305_);
return v___x_4306_;
}
v___jp_4307_:
{
uint8_t v___x_4308_; 
v___x_4308_ = 0;
v___y_4301_ = v___x_4308_;
goto v___jp_4300_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg___boxed(lean_object* v_name_4313_, lean_object* v_levelParams_4314_, lean_object* v_type_4315_, lean_object* v_value_4316_, lean_object* v_hints_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_){
_start:
{
lean_object* v_res_4320_; 
v_res_4320_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4313_, v_levelParams_4314_, v_type_4315_, v_value_4316_, v_hints_4317_, v___y_4318_);
lean_dec(v___y_4318_);
return v_res_4320_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(lean_object* v_name_4321_, lean_object* v_levelParams_4322_, lean_object* v_type_4323_, lean_object* v_value_4324_, lean_object* v_hints_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_){
_start:
{
lean_object* v___x_4331_; 
v___x_4331_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4321_, v_levelParams_4322_, v_type_4323_, v_value_4324_, v_hints_4325_, v___y_4329_);
return v___x_4331_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___boxed(lean_object* v_name_4332_, lean_object* v_levelParams_4333_, lean_object* v_type_4334_, lean_object* v_value_4335_, lean_object* v_hints_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_){
_start:
{
lean_object* v_res_4342_; 
v_res_4342_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(v_name_4332_, v_levelParams_4333_, v_type_4334_, v_value_4335_, v_hints_4336_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_);
lean_dec(v___y_4340_);
lean_dec_ref(v___y_4339_);
lean_dec(v___y_4338_);
lean_dec_ref(v___y_4337_);
return v_res_4342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition(lean_object* v_name_4343_, lean_object* v_type_4344_, lean_object* v_value_4345_, uint8_t v_zetaDelta_4346_, uint8_t v_compile_4347_, uint8_t v_logCompileErrors_4348_, lean_object* v_a_4349_, lean_object* v_a_4350_, lean_object* v_a_4351_, lean_object* v_a_4352_){
_start:
{
lean_object* v___x_4354_; 
v___x_4354_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4344_, v_value_4345_, v_zetaDelta_4346_, v_a_4349_, v_a_4350_, v_a_4351_, v_a_4352_);
if (lean_obj_tag(v___x_4354_) == 0)
{
lean_object* v_a_4355_; lean_object* v___x_4357_; uint8_t v_isShared_4358_; uint8_t v_isSharedCheck_4406_; 
v_a_4355_ = lean_ctor_get(v___x_4354_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v___x_4354_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4357_ = v___x_4354_;
v_isShared_4358_ = v_isSharedCheck_4406_;
goto v_resetjp_4356_;
}
else
{
lean_inc(v_a_4355_);
lean_dec(v___x_4354_);
v___x_4357_ = lean_box(0);
v_isShared_4358_ = v_isSharedCheck_4406_;
goto v_resetjp_4356_;
}
v_resetjp_4356_:
{
lean_object* v___x_4368_; lean_object* v_env_4369_; lean_object* v_levelParams_4370_; lean_object* v_type_4371_; lean_object* v_value_4372_; uint32_t v___x_4373_; uint32_t v___x_4374_; uint32_t v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v_a_4379_; lean_object* v___x_4381_; uint8_t v_isShared_4382_; uint8_t v_isSharedCheck_4405_; 
v___x_4368_ = lean_st_ref_get(v_a_4352_);
v_env_4369_ = lean_ctor_get(v___x_4368_, 0);
lean_inc_ref(v_env_4369_);
lean_dec(v___x_4368_);
v_levelParams_4370_ = lean_ctor_get(v_a_4355_, 0);
v_type_4371_ = lean_ctor_get(v_a_4355_, 1);
v_value_4372_ = lean_ctor_get(v_a_4355_, 2);
lean_inc_ref_n(v_value_4372_, 2);
v___x_4373_ = l_Lean_getMaxHeight(v_env_4369_, v_value_4372_);
v___x_4374_ = 1;
v___x_4375_ = lean_uint32_add(v___x_4373_, v___x_4374_);
v___x_4376_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_4376_, 0, v___x_4375_);
lean_inc_ref(v_levelParams_4370_);
v___x_4377_ = lean_array_to_list(v_levelParams_4370_);
lean_inc_ref(v_type_4371_);
lean_inc(v_name_4343_);
v___x_4378_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4343_, v___x_4377_, v_type_4371_, v_value_4372_, v___x_4376_, v_a_4352_);
v_a_4379_ = lean_ctor_get(v___x_4378_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v___x_4378_);
if (v_isSharedCheck_4405_ == 0)
{
v___x_4381_ = v___x_4378_;
v_isShared_4382_ = v_isSharedCheck_4405_;
goto v_resetjp_4380_;
}
else
{
lean_inc(v_a_4379_);
lean_dec(v___x_4378_);
v___x_4381_ = lean_box(0);
v_isShared_4382_ = v_isSharedCheck_4405_;
goto v_resetjp_4380_;
}
v___jp_4359_:
{
lean_object* v_levelArgs_4360_; lean_object* v_exprArgs_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4366_; 
v_levelArgs_4360_ = lean_ctor_get(v_a_4355_, 3);
lean_inc_ref(v_levelArgs_4360_);
v_exprArgs_4361_ = lean_ctor_get(v_a_4355_, 4);
lean_inc_ref(v_exprArgs_4361_);
lean_dec(v_a_4355_);
v___x_4362_ = lean_array_to_list(v_levelArgs_4360_);
v___x_4363_ = l_Lean_mkConst(v_name_4343_, v___x_4362_);
v___x_4364_ = l_Lean_mkAppN(v___x_4363_, v_exprArgs_4361_);
lean_dec_ref(v_exprArgs_4361_);
if (v_isShared_4358_ == 0)
{
lean_ctor_set(v___x_4357_, 0, v___x_4364_);
v___x_4366_ = v___x_4357_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v___x_4364_);
v___x_4366_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
return v___x_4366_;
}
}
v_resetjp_4380_:
{
lean_object* v___x_4384_; 
if (v_isShared_4382_ == 0)
{
lean_ctor_set_tag(v___x_4381_, 1);
v___x_4384_ = v___x_4381_;
goto v_reusejp_4383_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v_a_4379_);
v___x_4384_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4383_;
}
v_reusejp_4383_:
{
uint8_t v___x_4385_; lean_object* v___x_4386_; 
v___x_4385_ = 0;
lean_inc_ref(v___x_4384_);
v___x_4386_ = l_Lean_addDecl(v___x_4384_, v___x_4385_, v_a_4351_, v_a_4352_);
if (lean_obj_tag(v___x_4386_) == 0)
{
lean_dec_ref_known(v___x_4386_, 1);
if (v_compile_4347_ == 0)
{
lean_dec_ref(v___x_4384_);
goto v___jp_4359_;
}
else
{
lean_object* v___x_4387_; 
v___x_4387_ = l_Lean_compileDecl(v___x_4384_, v_logCompileErrors_4348_, v_a_4351_, v_a_4352_);
if (lean_obj_tag(v___x_4387_) == 0)
{
lean_dec_ref_known(v___x_4387_, 1);
goto v___jp_4359_;
}
else
{
lean_object* v_a_4388_; lean_object* v___x_4390_; uint8_t v_isShared_4391_; uint8_t v_isSharedCheck_4395_; 
lean_del_object(v___x_4357_);
lean_dec(v_a_4355_);
lean_dec(v_name_4343_);
v_a_4388_ = lean_ctor_get(v___x_4387_, 0);
v_isSharedCheck_4395_ = !lean_is_exclusive(v___x_4387_);
if (v_isSharedCheck_4395_ == 0)
{
v___x_4390_ = v___x_4387_;
v_isShared_4391_ = v_isSharedCheck_4395_;
goto v_resetjp_4389_;
}
else
{
lean_inc(v_a_4388_);
lean_dec(v___x_4387_);
v___x_4390_ = lean_box(0);
v_isShared_4391_ = v_isSharedCheck_4395_;
goto v_resetjp_4389_;
}
v_resetjp_4389_:
{
lean_object* v___x_4393_; 
if (v_isShared_4391_ == 0)
{
v___x_4393_ = v___x_4390_;
goto v_reusejp_4392_;
}
else
{
lean_object* v_reuseFailAlloc_4394_; 
v_reuseFailAlloc_4394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4394_, 0, v_a_4388_);
v___x_4393_ = v_reuseFailAlloc_4394_;
goto v_reusejp_4392_;
}
v_reusejp_4392_:
{
return v___x_4393_;
}
}
}
}
}
else
{
lean_object* v_a_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4403_; 
lean_dec_ref(v___x_4384_);
lean_del_object(v___x_4357_);
lean_dec(v_a_4355_);
lean_dec(v_name_4343_);
v_a_4396_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4403_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4403_ == 0)
{
v___x_4398_ = v___x_4386_;
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_a_4396_);
lean_dec(v___x_4386_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4401_; 
if (v_isShared_4399_ == 0)
{
v___x_4401_ = v___x_4398_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4402_; 
v_reuseFailAlloc_4402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4402_, 0, v_a_4396_);
v___x_4401_ = v_reuseFailAlloc_4402_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
return v___x_4401_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4407_; lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4414_; 
lean_dec(v_name_4343_);
v_a_4407_ = lean_ctor_get(v___x_4354_, 0);
v_isSharedCheck_4414_ = !lean_is_exclusive(v___x_4354_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4409_ = v___x_4354_;
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
else
{
lean_inc(v_a_4407_);
lean_dec(v___x_4354_);
v___x_4409_ = lean_box(0);
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
v_resetjp_4408_:
{
lean_object* v___x_4412_; 
if (v_isShared_4410_ == 0)
{
v___x_4412_ = v___x_4409_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4413_; 
v_reuseFailAlloc_4413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4413_, 0, v_a_4407_);
v___x_4412_ = v_reuseFailAlloc_4413_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
return v___x_4412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition___boxed(lean_object* v_name_4415_, lean_object* v_type_4416_, lean_object* v_value_4417_, lean_object* v_zetaDelta_4418_, lean_object* v_compile_4419_, lean_object* v_logCompileErrors_4420_, lean_object* v_a_4421_, lean_object* v_a_4422_, lean_object* v_a_4423_, lean_object* v_a_4424_, lean_object* v_a_4425_){
_start:
{
uint8_t v_zetaDelta_boxed_4426_; uint8_t v_compile_boxed_4427_; uint8_t v_logCompileErrors_boxed_4428_; lean_object* v_res_4429_; 
v_zetaDelta_boxed_4426_ = lean_unbox(v_zetaDelta_4418_);
v_compile_boxed_4427_ = lean_unbox(v_compile_4419_);
v_logCompileErrors_boxed_4428_ = lean_unbox(v_logCompileErrors_4420_);
v_res_4429_ = l_Lean_Meta_mkAuxDefinition(v_name_4415_, v_type_4416_, v_value_4417_, v_zetaDelta_boxed_4426_, v_compile_boxed_4427_, v_logCompileErrors_boxed_4428_, v_a_4421_, v_a_4422_, v_a_4423_, v_a_4424_);
lean_dec(v_a_4424_);
lean_dec_ref(v_a_4423_);
lean_dec(v_a_4422_);
lean_dec_ref(v_a_4421_);
return v_res_4429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor(lean_object* v_name_4430_, lean_object* v_value_4431_, uint8_t v_zetaDelta_4432_, uint8_t v_compile_4433_, uint8_t v_logCompileErrors_4434_, lean_object* v_a_4435_, lean_object* v_a_4436_, lean_object* v_a_4437_, lean_object* v_a_4438_){
_start:
{
lean_object* v___x_4440_; 
lean_inc(v_a_4438_);
lean_inc_ref(v_a_4437_);
lean_inc(v_a_4436_);
lean_inc_ref(v_a_4435_);
lean_inc_ref(v_value_4431_);
v___x_4440_ = lean_infer_type(v_value_4431_, v_a_4435_, v_a_4436_, v_a_4437_, v_a_4438_);
if (lean_obj_tag(v___x_4440_) == 0)
{
lean_object* v_a_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; 
v_a_4441_ = lean_ctor_get(v___x_4440_, 0);
lean_inc(v_a_4441_);
lean_dec_ref_known(v___x_4440_, 1);
v___x_4442_ = l_Lean_Expr_headBeta(v_a_4441_);
v___x_4443_ = l_Lean_Meta_mkAuxDefinition(v_name_4430_, v___x_4442_, v_value_4431_, v_zetaDelta_4432_, v_compile_4433_, v_logCompileErrors_4434_, v_a_4435_, v_a_4436_, v_a_4437_, v_a_4438_);
return v___x_4443_;
}
else
{
lean_dec_ref(v_value_4431_);
lean_dec(v_name_4430_);
return v___x_4440_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor___boxed(lean_object* v_name_4444_, lean_object* v_value_4445_, lean_object* v_zetaDelta_4446_, lean_object* v_compile_4447_, lean_object* v_logCompileErrors_4448_, lean_object* v_a_4449_, lean_object* v_a_4450_, lean_object* v_a_4451_, lean_object* v_a_4452_, lean_object* v_a_4453_){
_start:
{
uint8_t v_zetaDelta_boxed_4454_; uint8_t v_compile_boxed_4455_; uint8_t v_logCompileErrors_boxed_4456_; lean_object* v_res_4457_; 
v_zetaDelta_boxed_4454_ = lean_unbox(v_zetaDelta_4446_);
v_compile_boxed_4455_ = lean_unbox(v_compile_4447_);
v_logCompileErrors_boxed_4456_ = lean_unbox(v_logCompileErrors_4448_);
v_res_4457_ = l_Lean_Meta_mkAuxDefinitionFor(v_name_4444_, v_value_4445_, v_zetaDelta_boxed_4454_, v_compile_boxed_4455_, v_logCompileErrors_boxed_4456_, v_a_4449_, v_a_4450_, v_a_4451_, v_a_4452_);
lean_dec(v_a_4452_);
lean_dec_ref(v_a_4451_);
lean_dec(v_a_4450_);
lean_dec_ref(v_a_4449_);
return v_res_4457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem(lean_object* v_type_4458_, lean_object* v_value_4459_, uint8_t v_zetaDelta_4460_, lean_object* v_kind_x3f_4461_, uint8_t v_cache_4462_, lean_object* v_a_4463_, lean_object* v_a_4464_, lean_object* v_a_4465_, lean_object* v_a_4466_){
_start:
{
lean_object* v___x_4468_; 
v___x_4468_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4458_, v_value_4459_, v_zetaDelta_4460_, v_a_4463_, v_a_4464_, v_a_4465_, v_a_4466_);
if (lean_obj_tag(v___x_4468_) == 0)
{
lean_object* v_a_4469_; lean_object* v_levelParams_4470_; lean_object* v_type_4471_; lean_object* v_value_4472_; lean_object* v_levelArgs_4473_; lean_object* v_exprArgs_4474_; lean_object* v___x_4475_; uint8_t v___x_4476_; lean_object* v___x_4477_; 
v_a_4469_ = lean_ctor_get(v___x_4468_, 0);
lean_inc(v_a_4469_);
lean_dec_ref_known(v___x_4468_, 1);
v_levelParams_4470_ = lean_ctor_get(v_a_4469_, 0);
lean_inc_ref(v_levelParams_4470_);
v_type_4471_ = lean_ctor_get(v_a_4469_, 1);
lean_inc_ref(v_type_4471_);
v_value_4472_ = lean_ctor_get(v_a_4469_, 2);
lean_inc_ref(v_value_4472_);
v_levelArgs_4473_ = lean_ctor_get(v_a_4469_, 3);
lean_inc_ref(v_levelArgs_4473_);
v_exprArgs_4474_ = lean_ctor_get(v_a_4469_, 4);
lean_inc_ref(v_exprArgs_4474_);
lean_dec(v_a_4469_);
v___x_4475_ = lean_array_to_list(v_levelParams_4470_);
v___x_4476_ = 0;
v___x_4477_ = l_Lean_Meta_mkAuxLemma(v___x_4475_, v_type_4471_, v_value_4472_, v_kind_x3f_4461_, v_cache_4462_, v___x_4476_, v___x_4476_, v___x_4476_, v_a_4463_, v_a_4464_, v_a_4465_, v_a_4466_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; lean_object* v___x_4480_; uint8_t v_isShared_4481_; uint8_t v_isSharedCheck_4488_; 
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4488_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4488_ == 0)
{
v___x_4480_ = v___x_4477_;
v_isShared_4481_ = v_isSharedCheck_4488_;
goto v_resetjp_4479_;
}
else
{
lean_inc(v_a_4478_);
lean_dec(v___x_4477_);
v___x_4480_ = lean_box(0);
v_isShared_4481_ = v_isSharedCheck_4488_;
goto v_resetjp_4479_;
}
v_resetjp_4479_:
{
lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4486_; 
v___x_4482_ = lean_array_to_list(v_levelArgs_4473_);
v___x_4483_ = l_Lean_mkConst(v_a_4478_, v___x_4482_);
v___x_4484_ = l_Lean_mkAppN(v___x_4483_, v_exprArgs_4474_);
lean_dec_ref(v_exprArgs_4474_);
if (v_isShared_4481_ == 0)
{
lean_ctor_set(v___x_4480_, 0, v___x_4484_);
v___x_4486_ = v___x_4480_;
goto v_reusejp_4485_;
}
else
{
lean_object* v_reuseFailAlloc_4487_; 
v_reuseFailAlloc_4487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4487_, 0, v___x_4484_);
v___x_4486_ = v_reuseFailAlloc_4487_;
goto v_reusejp_4485_;
}
v_reusejp_4485_:
{
return v___x_4486_;
}
}
}
else
{
lean_object* v_a_4489_; lean_object* v___x_4491_; uint8_t v_isShared_4492_; uint8_t v_isSharedCheck_4496_; 
lean_dec_ref(v_exprArgs_4474_);
lean_dec_ref(v_levelArgs_4473_);
v_a_4489_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4496_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4496_ == 0)
{
v___x_4491_ = v___x_4477_;
v_isShared_4492_ = v_isSharedCheck_4496_;
goto v_resetjp_4490_;
}
else
{
lean_inc(v_a_4489_);
lean_dec(v___x_4477_);
v___x_4491_ = lean_box(0);
v_isShared_4492_ = v_isSharedCheck_4496_;
goto v_resetjp_4490_;
}
v_resetjp_4490_:
{
lean_object* v___x_4494_; 
if (v_isShared_4492_ == 0)
{
v___x_4494_ = v___x_4491_;
goto v_reusejp_4493_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v_a_4489_);
v___x_4494_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4493_;
}
v_reusejp_4493_:
{
return v___x_4494_;
}
}
}
}
else
{
lean_object* v_a_4497_; lean_object* v___x_4499_; uint8_t v_isShared_4500_; uint8_t v_isSharedCheck_4504_; 
lean_dec(v_kind_x3f_4461_);
v_a_4497_ = lean_ctor_get(v___x_4468_, 0);
v_isSharedCheck_4504_ = !lean_is_exclusive(v___x_4468_);
if (v_isSharedCheck_4504_ == 0)
{
v___x_4499_ = v___x_4468_;
v_isShared_4500_ = v_isSharedCheck_4504_;
goto v_resetjp_4498_;
}
else
{
lean_inc(v_a_4497_);
lean_dec(v___x_4468_);
v___x_4499_ = lean_box(0);
v_isShared_4500_ = v_isSharedCheck_4504_;
goto v_resetjp_4498_;
}
v_resetjp_4498_:
{
lean_object* v___x_4502_; 
if (v_isShared_4500_ == 0)
{
v___x_4502_ = v___x_4499_;
goto v_reusejp_4501_;
}
else
{
lean_object* v_reuseFailAlloc_4503_; 
v_reuseFailAlloc_4503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4503_, 0, v_a_4497_);
v___x_4502_ = v_reuseFailAlloc_4503_;
goto v_reusejp_4501_;
}
v_reusejp_4501_:
{
return v___x_4502_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem___boxed(lean_object* v_type_4505_, lean_object* v_value_4506_, lean_object* v_zetaDelta_4507_, lean_object* v_kind_x3f_4508_, lean_object* v_cache_4509_, lean_object* v_a_4510_, lean_object* v_a_4511_, lean_object* v_a_4512_, lean_object* v_a_4513_, lean_object* v_a_4514_){
_start:
{
uint8_t v_zetaDelta_boxed_4515_; uint8_t v_cache_boxed_4516_; lean_object* v_res_4517_; 
v_zetaDelta_boxed_4515_ = lean_unbox(v_zetaDelta_4507_);
v_cache_boxed_4516_ = lean_unbox(v_cache_4509_);
v_res_4517_ = l_Lean_Meta_mkAuxTheorem(v_type_4505_, v_value_4506_, v_zetaDelta_boxed_4515_, v_kind_x3f_4508_, v_cache_boxed_4516_, v_a_4510_, v_a_4511_, v_a_4512_, v_a_4513_);
lean_dec(v_a_4513_);
lean_dec_ref(v_a_4512_);
lean_dec(v_a_4511_);
lean_dec_ref(v_a_4510_);
return v_res_4517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4573_; uint8_t v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; 
v___x_4573_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
v___x_4574_ = 0;
v___x_4575_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_));
v___x_4576_ = l_Lean_registerTraceClass(v___x_4573_, v___x_4574_, v___x_4575_);
return v___x_4576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2____boxed(lean_object* v_a_4577_){
_start:
{
lean_object* v_res_4578_; 
v_res_4578_ = l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_();
return v_res_4578_;
}
}
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Closure(builtin);
}
#ifdef __cplusplus
}
#endif
