// Lean compiler output
// Module: Lean.Meta.Tactic.Lets
// Imports: public import Lean.Meta.Tactic.Replace public import Lean.Meta.LetToHave
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAtomic(lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_isLet___boxed(lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForallWithParamInfos(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedExprParamInfo_default;
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableBool___lam__0___boxed(lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_instHashableProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLet(lean_object*);
uint8_t l_Lean_Expr_isMData(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_left(size_t, size_t);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withExistingLocalDecls___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_withReverted___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceLocalDeclDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_instInhabitedState;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_extractable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_ExtractLets_flushDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value),((lean_object*)&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_flushDecls___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_flushDecls___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ExtractLets_containsLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_isLet___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_containsLet___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_containsLet___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_containsLet(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_containsLet___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instHashableBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "let expression expected"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Expr.updateLetE!"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3_value;
static const lean_string_object l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.ExtractLets.extractCore"};
static const lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2_value;
static const lean_string_object l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Meta.Tactic.Lets"};
static const lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1_value;
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_liftLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_liftLets___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "made no progress"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_extractLets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extract_lets"};
static const lean_object* l_Lean_MVarId_extractLets___closed__0 = (const lean_object*)&l_Lean_MVarId_extractLets___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_extractLets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_extractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 33, 143, 120, 246, 234, 114, 64)}};
static const lean_object* l_Lean_MVarId_extractLets___closed__1 = (const lean_object*)&l_Lean_MVarId_extractLets___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed(lean_object**);
static const lean_string_object l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unexpected auxiliary target"};
static const lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0 = (const lean_object*)&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0_value)}};
static const lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1 = (const lean_object*)&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2;
static lean_once_cell_t l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_liftLets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lift_lets"};
static const lean_object* l_Lean_MVarId_liftLets___closed__0 = (const lean_object*)&l_Lean_MVarId_liftLets___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_liftLets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_liftLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 227, 82, 255, 128, 171, 101)}};
static const lean_object* l_Lean_MVarId_liftLets___closed__1 = (const lean_object*)&l_Lean_MVarId_liftLets___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_letToHave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "let_to_have"};
static const lean_object* l_Lean_MVarId_letToHave___closed__0 = (const lean_object*)&l_Lean_MVarId_letToHave___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_letToHave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_letToHave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 121, 21, 93, 142, 174, 18, 85)}};
static const lean_object* l_Lean_MVarId_letToHave___closed__1 = (const lean_object*)&l_Lean_MVarId_letToHave___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_unsigned_to_nat(16u);
v___x_5_ = lean_mk_array(v___x_4_, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1);
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_9_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2);
v___x_10_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_11_ = lean_box(0);
v___x_12_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_10_);
lean_ctor_set(v___x_12_, 2, v___x_9_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Meta_ExtractLets_instInhabitedState_default;
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg(lean_object* v_a_15_, lean_object* v_a_16_){
_start:
{
lean_object* v___x_18_; uint8_t v_onlyGivenNames_19_; 
v___x_18_ = lean_st_ref_get(v_a_16_);
v_onlyGivenNames_19_ = lean_ctor_get_uint8(v_a_15_, 8);
if (v_onlyGivenNames_19_ == 0)
{
uint8_t v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
lean_dec(v___x_18_);
v___x_20_ = 1;
v___x_21_ = lean_box(v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
else
{
lean_object* v_givenNames_23_; uint8_t v___x_24_; 
v_givenNames_23_ = lean_ctor_get(v___x_18_, 0);
lean_inc(v_givenNames_23_);
lean_dec(v___x_18_);
v___x_24_ = l_List_isEmpty___redArg(v_givenNames_23_);
lean_dec(v_givenNames_23_);
if (v___x_24_ == 0)
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_box(v_onlyGivenNames_19_);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
else
{
uint8_t v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = 0;
v___x_28_ = lean_box(v___x_27_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg___boxed(lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_30_, v_a_31_);
lean_dec(v_a_31_);
lean_dec_ref(v_a_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName(lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_34_, v_a_36_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___boxed(lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Meta_ExtractLets_hasNextName(v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_);
lean_dec(v_a_49_);
lean_dec_ref(v_a_48_);
lean_dec(v_a_47_);
lean_dec_ref(v_a_46_);
lean_dec(v_a_45_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg(lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v___x_60_; lean_object* v_givenNames_61_; 
v___x_60_ = lean_st_ref_get(v_a_58_);
v_givenNames_61_ = lean_ctor_get(v___x_60_, 0);
lean_inc(v_givenNames_61_);
if (lean_obj_tag(v_givenNames_61_) == 0)
{
uint8_t v_onlyGivenNames_62_; 
lean_dec(v___x_60_);
v_onlyGivenNames_62_ = lean_ctor_get_uint8(v_a_57_, 8);
if (v_onlyGivenNames_62_ == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = ((lean_object*)(l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2));
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
else
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_box(0);
v___x_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
else
{
lean_object* v_decls_67_; lean_object* v_valueMap_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_80_; 
v_decls_67_ = lean_ctor_get(v___x_60_, 1);
v_valueMap_68_ = lean_ctor_get(v___x_60_, 2);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_60_);
if (v_isSharedCheck_80_ == 0)
{
lean_object* v_unused_81_; 
v_unused_81_ = lean_ctor_get(v___x_60_, 0);
lean_dec(v_unused_81_);
v___x_70_ = v___x_60_;
v_isShared_71_ = v_isSharedCheck_80_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_valueMap_68_);
lean_inc(v_decls_67_);
lean_dec(v___x_60_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_80_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v_head_72_; lean_object* v_tail_73_; lean_object* v___x_75_; 
v_head_72_ = lean_ctor_get(v_givenNames_61_, 0);
lean_inc(v_head_72_);
v_tail_73_ = lean_ctor_get(v_givenNames_61_, 1);
lean_inc(v_tail_73_);
lean_dec_ref_known(v_givenNames_61_, 2);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v_tail_73_);
v___x_75_ = v___x_70_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_tail_73_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v_decls_67_);
lean_ctor_set(v_reuseFailAlloc_79_, 2, v_valueMap_68_);
v___x_75_ = v_reuseFailAlloc_79_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = lean_st_ref_swap(v_a_58_, v___x_75_);
lean_dec(v___x_76_);
v___x_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_77_, 0, v_head_72_);
v___x_78_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
return v___x_78_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___boxed(lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_82_, v_a_83_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f(lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_86_, v_a_88_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___boxed(lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Meta_ExtractLets_nextName_x3f(v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
lean_dec(v_a_101_);
lean_dec_ref(v_a_100_);
lean_dec(v_a_99_);
lean_dec_ref(v_a_98_);
lean_dec(v_a_97_);
lean_dec(v_a_96_);
lean_dec_ref(v_a_95_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(lean_object* v_binderName_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
lean_object* v___x_113_; lean_object* v_a_114_; 
v___x_113_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_108_, v_a_109_);
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
if (lean_obj_tag(v_a_114_) == 1)
{
lean_object* v_val_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_165_; 
v_val_115_ = lean_ctor_get(v_a_114_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v_a_114_);
if (v_isSharedCheck_165_ == 0)
{
v___x_117_ = v_a_114_;
v_isShared_118_ = v_isSharedCheck_165_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_val_115_);
lean_dec(v_a_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_165_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = ((lean_object*)(l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1));
v___x_120_ = lean_name_eq(v_val_115_, v___x_119_);
if (v___x_120_ == 0)
{
lean_del_object(v___x_117_);
lean_dec(v_val_115_);
lean_dec(v_binderName_107_);
return v___x_113_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = l_Lean_Name_isAnonymous(v_binderName_107_);
if (v___x_121_ == 0)
{
uint8_t v_preserveBinderNames_122_; 
v_preserveBinderNames_122_ = lean_ctor_get_uint8(v_a_108_, 9);
if (v_preserveBinderNames_122_ == 0)
{
uint8_t v___x_123_; 
v___x_123_ = l_Lean_Name_hasMacroScopes(v_val_115_);
lean_dec(v_val_115_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; 
lean_dec_ref(v___x_113_);
v___x_124_ = l_Lean_Core_mkFreshUserName(v_binderName_107_, v_a_110_, v_a_111_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_135_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_135_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_135_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_135_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v_a_125_);
v___x_130_ = v___x_117_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_125_);
v___x_130_ = v_reuseFailAlloc_134_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
lean_object* v___x_132_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_130_);
v___x_132_ = v___x_127_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
lean_del_object(v___x_117_);
v_a_136_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_124_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_124_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
else
{
lean_del_object(v___x_117_);
lean_dec(v_binderName_107_);
return v___x_113_;
}
}
else
{
lean_del_object(v___x_117_);
lean_dec(v_val_115_);
lean_dec(v_binderName_107_);
return v___x_113_;
}
}
else
{
lean_object* v___x_144_; lean_object* v___x_145_; 
lean_dec(v_val_115_);
lean_dec_ref(v___x_113_);
lean_dec(v_binderName_107_);
v___x_144_ = ((lean_object*)(l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1));
v___x_145_ = l_Lean_Core_mkFreshUserName(v___x_144_, v_a_110_, v_a_111_);
if (lean_obj_tag(v___x_145_) == 0)
{
lean_object* v_a_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_156_; 
v_a_146_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_156_ == 0)
{
v___x_148_ = v___x_145_;
v_isShared_149_ = v_isSharedCheck_156_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_a_146_);
lean_dec(v___x_145_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_156_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v_a_146_);
v___x_151_ = v___x_117_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_146_);
v___x_151_ = v_reuseFailAlloc_155_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
lean_object* v___x_153_; 
if (v_isShared_149_ == 0)
{
lean_ctor_set(v___x_148_, 0, v___x_151_);
v___x_153_ = v___x_148_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_151_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
else
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
lean_del_object(v___x_117_);
v_a_157_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v___x_145_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_145_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_a_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_173_; 
lean_dec(v_a_114_);
lean_dec(v_binderName_107_);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_173_ == 0)
{
lean_object* v_unused_174_; 
v_unused_174_ = lean_ctor_get(v___x_113_, 0);
lean_dec(v_unused_174_);
v___x_167_ = v___x_113_;
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
else
{
lean_dec(v___x_113_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v___x_171_; 
v___x_169_ = lean_box(0);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_169_);
v___x_171_ = v___x_167_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___boxed(lean_object* v_binderName_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_binderName_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
lean_dec(v_a_179_);
lean_dec_ref(v_a_178_);
lean_dec(v_a_177_);
lean_dec_ref(v_a_176_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(lean_object* v_binderName_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_binderName_182_, v_a_183_, v_a_185_, v_a_188_, v_a_189_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___boxed(lean_object* v_binderName_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(v_binderName_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
lean_dec(v_a_199_);
lean_dec_ref(v_a_198_);
lean_dec(v_a_197_);
lean_dec_ref(v_a_196_);
lean_dec(v_a_195_);
lean_dec(v_a_194_);
lean_dec_ref(v_a_193_);
return v_res_201_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(lean_object* v_a_202_, lean_object* v_x_203_){
_start:
{
if (lean_obj_tag(v_x_203_) == 0)
{
uint8_t v___x_204_; 
v___x_204_ = 0;
return v___x_204_;
}
else
{
lean_object* v_head_205_; lean_object* v_tail_206_; uint8_t v___x_207_; 
v_head_205_ = lean_ctor_get(v_x_203_, 0);
v_tail_206_ = lean_ctor_get(v_x_203_, 1);
v___x_207_ = lean_expr_eqv(v_a_202_, v_head_205_);
if (v___x_207_ == 0)
{
v_x_203_ = v_tail_206_;
goto _start;
}
else
{
return v___x_207_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0___boxed(lean_object* v_a_209_, lean_object* v_x_210_){
_start:
{
uint8_t v_res_211_; lean_object* v_r_212_; 
v_res_211_ = l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(v_a_209_, v_x_210_);
lean_dec(v_x_210_);
lean_dec_ref(v_a_209_);
v_r_212_ = lean_box(v_res_211_);
return v_r_212_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(lean_object* v_fvars_213_, lean_object* v_e_214_){
_start:
{
uint8_t v___x_215_; lean_object* v_d_217_; lean_object* v_b_218_; 
v___x_215_ = l_Lean_Expr_hasFVar(v_e_214_);
if (v___x_215_ == 0)
{
lean_dec_ref(v_e_214_);
return v___x_215_;
}
else
{
switch(lean_obj_tag(v_e_214_))
{
case 7:
{
lean_object* v_binderType_221_; lean_object* v_body_222_; 
v_binderType_221_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_binderType_221_);
v_body_222_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_body_222_);
lean_dec_ref_known(v_e_214_, 3);
v_d_217_ = v_binderType_221_;
v_b_218_ = v_body_222_;
goto v___jp_216_;
}
case 6:
{
lean_object* v_binderType_223_; lean_object* v_body_224_; 
v_binderType_223_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_binderType_223_);
v_body_224_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_body_224_);
lean_dec_ref_known(v_e_214_, 3);
v_d_217_ = v_binderType_223_;
v_b_218_ = v_body_224_;
goto v___jp_216_;
}
case 10:
{
lean_object* v_expr_225_; 
v_expr_225_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_expr_225_);
lean_dec_ref_known(v_e_214_, 2);
v_e_214_ = v_expr_225_;
goto _start;
}
case 8:
{
lean_object* v_type_227_; lean_object* v_value_228_; lean_object* v_body_229_; uint8_t v___x_230_; 
v_type_227_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_type_227_);
v_value_228_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_value_228_);
v_body_229_ = lean_ctor_get(v_e_214_, 3);
lean_inc_ref(v_body_229_);
lean_dec_ref_known(v_e_214_, 4);
v___x_230_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_type_227_);
if (v___x_230_ == 0)
{
uint8_t v___x_231_; 
v___x_231_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_value_228_);
if (v___x_231_ == 0)
{
v_e_214_ = v_body_229_;
goto _start;
}
else
{
lean_dec_ref(v_body_229_);
return v___x_215_;
}
}
else
{
lean_dec_ref(v_body_229_);
lean_dec_ref(v_value_228_);
return v___x_215_;
}
}
case 5:
{
lean_object* v_fn_233_; lean_object* v_arg_234_; uint8_t v___x_235_; 
v_fn_233_ = lean_ctor_get(v_e_214_, 0);
lean_inc_ref(v_fn_233_);
v_arg_234_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_arg_234_);
lean_dec_ref_known(v_e_214_, 2);
v___x_235_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_fn_233_);
if (v___x_235_ == 0)
{
v_e_214_ = v_arg_234_;
goto _start;
}
else
{
lean_dec_ref(v_arg_234_);
return v___x_215_;
}
}
case 11:
{
lean_object* v_struct_237_; 
v_struct_237_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_struct_237_);
lean_dec_ref_known(v_e_214_, 3);
v_e_214_ = v_struct_237_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
v_fvarId_239_ = lean_ctor_get(v_e_214_, 0);
lean_inc(v_fvarId_239_);
lean_dec_ref_known(v_e_214_, 1);
v___x_240_ = l_Lean_Expr_fvar___override(v_fvarId_239_);
v___x_241_ = l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(v___x_240_, v_fvars_213_);
lean_dec_ref(v___x_240_);
return v___x_241_;
}
default: 
{
uint8_t v___x_242_; 
lean_dec_ref(v_e_214_);
v___x_242_ = 0;
return v___x_242_;
}
}
}
v___jp_216_:
{
uint8_t v___x_219_; 
v___x_219_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_d_217_);
if (v___x_219_ == 0)
{
v_e_214_ = v_b_218_;
goto _start;
}
else
{
lean_dec_ref(v_b_218_);
return v___x_215_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1___boxed(lean_object* v_fvars_243_, lean_object* v_e_244_){
_start:
{
uint8_t v_res_245_; lean_object* v_r_246_; 
v_res_245_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_243_, v_e_244_);
lean_dec(v_fvars_243_);
v_r_246_ = lean_box(v_res_245_);
return v_r_246_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_extractable(lean_object* v_fvars_247_, lean_object* v_e_248_){
_start:
{
uint8_t v___x_249_; 
v___x_249_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_247_, v_e_248_);
if (v___x_249_ == 0)
{
uint8_t v___x_250_; 
v___x_250_ = 1;
return v___x_250_;
}
else
{
uint8_t v___x_251_; 
v___x_251_ = 0;
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractable___boxed(lean_object* v_fvars_252_, lean_object* v_e_253_){
_start:
{
uint8_t v_res_254_; lean_object* v_r_255_; 
v_res_254_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_252_, v_e_253_);
lean_dec(v_fvars_252_);
v_r_255_ = lean_box(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg(lean_object* v_fvars_256_, lean_object* v_n_257_, lean_object* v_t_258_, lean_object* v_v_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v___y_266_; lean_object* v___x_271_; lean_object* v_a_272_; uint8_t v___x_273_; 
v___x_271_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_260_, v_a_261_);
v_a_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_272_);
lean_dec_ref(v___x_271_);
v___x_273_ = lean_unbox(v_a_272_);
lean_dec(v_a_272_);
if (v___x_273_ == 0)
{
lean_dec_ref(v_v_259_);
lean_dec_ref(v_t_258_);
v___y_266_ = v_a_260_;
goto v___jp_265_;
}
else
{
uint8_t v___x_274_; 
v___x_274_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_256_, v_t_258_);
if (v___x_274_ == 0)
{
lean_dec_ref(v_v_259_);
v___y_266_ = v_a_260_;
goto v___jp_265_;
}
else
{
uint8_t v___x_275_; 
v___x_275_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_256_, v_v_259_);
if (v___x_275_ == 0)
{
v___y_266_ = v_a_260_;
goto v___jp_265_;
}
else
{
lean_object* v___x_276_; 
lean_inc(v_n_257_);
v___x_276_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_n_257_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_287_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_287_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_287_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_287_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
if (lean_obj_tag(v_a_277_) == 1)
{
lean_object* v_val_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_285_; 
lean_dec(v_n_257_);
v_val_281_ = lean_ctor_get(v_a_277_, 0);
lean_inc(v_val_281_);
lean_dec_ref_known(v_a_277_, 1);
v___x_282_ = lean_box(v___x_274_);
v___x_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v_val_281_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_283_);
v___x_285_ = v___x_279_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_283_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
else
{
lean_del_object(v___x_279_);
lean_dec(v_a_277_);
v___y_266_ = v_a_260_;
goto v___jp_265_;
}
}
}
else
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
lean_dec(v_n_257_);
v_a_288_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_295_ == 0)
{
v___x_290_ = v___x_276_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_276_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
}
}
v___jp_265_:
{
uint8_t v_lift_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v_lift_267_ = lean_ctor_get_uint8(v___y_266_, 10);
v___x_268_ = lean_box(v_lift_267_);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v_n_257_);
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
return v___x_270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg___boxed(lean_object* v_fvars_296_, lean_object* v_n_297_, lean_object* v_t_298_, lean_object* v_v_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_296_, v_n_297_, v_t_298_, v_v_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
lean_dec(v_fvars_296_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet(lean_object* v_fvars_306_, lean_object* v_n_307_, lean_object* v_t_308_, lean_object* v_v_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_306_, v_n_307_, v_t_308_, v_v_309_, v_a_310_, v_a_312_, v_a_315_, v_a_316_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___boxed(lean_object* v_fvars_319_, lean_object* v_n_320_, lean_object* v_t_321_, lean_object* v_v_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_Meta_ExtractLets_isExtractableLet(v_fvars_319_, v_n_320_, v_t_321_, v_v_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_);
lean_dec(v_a_329_);
lean_dec_ref(v_a_328_);
lean_dec(v_a_327_);
lean_dec_ref(v_a_326_);
lean_dec(v_a_325_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_fvars_319_);
return v_res_331_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(lean_object* v_a_332_, lean_object* v_x_333_){
_start:
{
if (lean_obj_tag(v_x_333_) == 0)
{
uint8_t v___x_334_; 
v___x_334_ = 0;
return v___x_334_;
}
else
{
lean_object* v_key_335_; lean_object* v_tail_336_; uint8_t v___x_337_; 
v_key_335_ = lean_ctor_get(v_x_333_, 0);
v_tail_336_ = lean_ctor_get(v_x_333_, 2);
v___x_337_ = l_Lean_ExprStructEq_beq(v_key_335_, v_a_332_);
if (v___x_337_ == 0)
{
v_x_333_ = v_tail_336_;
goto _start;
}
else
{
return v___x_337_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg___boxed(lean_object* v_a_339_, lean_object* v_x_340_){
_start:
{
uint8_t v_res_341_; lean_object* v_r_342_; 
v_res_341_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_339_, v_x_340_);
lean_dec(v_x_340_);
lean_dec_ref(v_a_339_);
v_r_342_ = lean_box(v_res_341_);
return v_r_342_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(lean_object* v_a_343_, lean_object* v_b_344_, lean_object* v_x_345_){
_start:
{
if (lean_obj_tag(v_x_345_) == 0)
{
lean_dec(v_b_344_);
lean_dec_ref(v_a_343_);
return v_x_345_;
}
else
{
lean_object* v_key_346_; lean_object* v_value_347_; lean_object* v_tail_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_360_; 
v_key_346_ = lean_ctor_get(v_x_345_, 0);
v_value_347_ = lean_ctor_get(v_x_345_, 1);
v_tail_348_ = lean_ctor_get(v_x_345_, 2);
v_isSharedCheck_360_ = !lean_is_exclusive(v_x_345_);
if (v_isSharedCheck_360_ == 0)
{
v___x_350_ = v_x_345_;
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_tail_348_);
lean_inc(v_value_347_);
lean_inc(v_key_346_);
lean_dec(v_x_345_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
uint8_t v___x_352_; 
v___x_352_ = l_Lean_ExprStructEq_beq(v_key_346_, v_a_343_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_353_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_343_, v_b_344_, v_tail_348_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 2, v___x_353_);
v___x_355_ = v___x_350_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_key_346_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v_value_347_);
lean_ctor_set(v_reuseFailAlloc_356_, 2, v___x_353_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
else
{
lean_object* v___x_358_; 
lean_dec(v_value_347_);
lean_dec(v_key_346_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 1, v_b_344_);
lean_ctor_set(v___x_350_, 0, v_a_343_);
v___x_358_ = v___x_350_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_343_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_b_344_);
lean_ctor_set(v_reuseFailAlloc_359_, 2, v_tail_348_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_361_, lean_object* v_x_362_){
_start:
{
if (lean_obj_tag(v_x_362_) == 0)
{
return v_x_361_;
}
else
{
lean_object* v_key_363_; lean_object* v_value_364_; lean_object* v_tail_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_388_; 
v_key_363_ = lean_ctor_get(v_x_362_, 0);
v_value_364_ = lean_ctor_get(v_x_362_, 1);
v_tail_365_ = lean_ctor_get(v_x_362_, 2);
v_isSharedCheck_388_ = !lean_is_exclusive(v_x_362_);
if (v_isSharedCheck_388_ == 0)
{
v___x_367_ = v_x_362_;
v_isShared_368_ = v_isSharedCheck_388_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_tail_365_);
lean_inc(v_value_364_);
lean_inc(v_key_363_);
lean_dec(v_x_362_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_388_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; uint64_t v___x_370_; uint64_t v___x_371_; uint64_t v___x_372_; uint64_t v_fold_373_; uint64_t v___x_374_; uint64_t v___x_375_; uint64_t v___x_376_; size_t v___x_377_; size_t v___x_378_; size_t v___x_379_; size_t v___x_380_; size_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_384_; 
v___x_369_ = lean_array_get_size(v_x_361_);
v___x_370_ = l_Lean_ExprStructEq_hash(v_key_363_);
v___x_371_ = 32ULL;
v___x_372_ = lean_uint64_shift_right(v___x_370_, v___x_371_);
v_fold_373_ = lean_uint64_xor(v___x_370_, v___x_372_);
v___x_374_ = 16ULL;
v___x_375_ = lean_uint64_shift_right(v_fold_373_, v___x_374_);
v___x_376_ = lean_uint64_xor(v_fold_373_, v___x_375_);
v___x_377_ = lean_uint64_to_usize(v___x_376_);
v___x_378_ = lean_usize_of_nat(v___x_369_);
v___x_379_ = ((size_t)1ULL);
v___x_380_ = lean_usize_sub(v___x_378_, v___x_379_);
v___x_381_ = lean_usize_land(v___x_377_, v___x_380_);
v___x_382_ = lean_array_uget_borrowed(v_x_361_, v___x_381_);
lean_inc(v___x_382_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 2, v___x_382_);
v___x_384_ = v___x_367_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_key_363_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v_value_364_);
lean_ctor_set(v_reuseFailAlloc_387_, 2, v___x_382_);
v___x_384_ = v_reuseFailAlloc_387_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_385_; 
v___x_385_ = lean_array_uset(v_x_361_, v___x_381_, v___x_384_);
v_x_361_ = v___x_385_;
v_x_362_ = v_tail_365_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(lean_object* v_i_389_, lean_object* v_source_390_, lean_object* v_target_391_){
_start:
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = lean_array_get_size(v_source_390_);
v___x_393_ = lean_nat_dec_lt(v_i_389_, v___x_392_);
if (v___x_393_ == 0)
{
lean_dec_ref(v_source_390_);
lean_dec(v_i_389_);
return v_target_391_;
}
else
{
lean_object* v_es_394_; lean_object* v___x_395_; lean_object* v_source_396_; lean_object* v_target_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v_es_394_ = lean_array_fget(v_source_390_, v_i_389_);
v___x_395_ = lean_box(0);
v_source_396_ = lean_array_fset(v_source_390_, v_i_389_, v___x_395_);
v_target_397_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(v_target_391_, v_es_394_);
v___x_398_ = lean_unsigned_to_nat(1u);
v___x_399_ = lean_nat_add(v_i_389_, v___x_398_);
lean_dec(v_i_389_);
v_i_389_ = v___x_399_;
v_source_390_ = v_source_396_;
v_target_391_ = v_target_397_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(lean_object* v_data_401_){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v_nbuckets_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_402_ = lean_array_get_size(v_data_401_);
v___x_403_ = lean_unsigned_to_nat(2u);
v_nbuckets_404_ = lean_nat_mul(v___x_402_, v___x_403_);
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_box(0);
v___x_407_ = lean_mk_array(v_nbuckets_404_, v___x_406_);
v___x_408_ = lean_array_propagate_mark(v_data_401_, v___x_407_);
v___x_409_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(v___x_405_, v_data_401_, v___x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(lean_object* v_m_410_, lean_object* v_a_411_, lean_object* v_b_412_){
_start:
{
lean_object* v_size_413_; lean_object* v_buckets_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_457_; 
v_size_413_ = lean_ctor_get(v_m_410_, 0);
v_buckets_414_ = lean_ctor_get(v_m_410_, 1);
v_isSharedCheck_457_ = !lean_is_exclusive(v_m_410_);
if (v_isSharedCheck_457_ == 0)
{
v___x_416_ = v_m_410_;
v_isShared_417_ = v_isSharedCheck_457_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_buckets_414_);
lean_inc(v_size_413_);
lean_dec(v_m_410_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_457_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_418_; uint64_t v___x_419_; uint64_t v___x_420_; uint64_t v___x_421_; uint64_t v_fold_422_; uint64_t v___x_423_; uint64_t v___x_424_; uint64_t v___x_425_; size_t v___x_426_; size_t v___x_427_; size_t v___x_428_; size_t v___x_429_; size_t v___x_430_; lean_object* v_bkt_431_; uint8_t v___x_432_; 
v___x_418_ = lean_array_get_size(v_buckets_414_);
v___x_419_ = l_Lean_ExprStructEq_hash(v_a_411_);
v___x_420_ = 32ULL;
v___x_421_ = lean_uint64_shift_right(v___x_419_, v___x_420_);
v_fold_422_ = lean_uint64_xor(v___x_419_, v___x_421_);
v___x_423_ = 16ULL;
v___x_424_ = lean_uint64_shift_right(v_fold_422_, v___x_423_);
v___x_425_ = lean_uint64_xor(v_fold_422_, v___x_424_);
v___x_426_ = lean_uint64_to_usize(v___x_425_);
v___x_427_ = lean_usize_of_nat(v___x_418_);
v___x_428_ = ((size_t)1ULL);
v___x_429_ = lean_usize_sub(v___x_427_, v___x_428_);
v___x_430_ = lean_usize_land(v___x_426_, v___x_429_);
v_bkt_431_ = lean_array_uget_borrowed(v_buckets_414_, v___x_430_);
v___x_432_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_411_, v_bkt_431_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; lean_object* v_size_x27_434_; lean_object* v___x_435_; lean_object* v_buckets_x27_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_433_ = lean_unsigned_to_nat(1u);
v_size_x27_434_ = lean_nat_add(v_size_413_, v___x_433_);
lean_dec(v_size_413_);
lean_inc(v_bkt_431_);
v___x_435_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_435_, 0, v_a_411_);
lean_ctor_set(v___x_435_, 1, v_b_412_);
lean_ctor_set(v___x_435_, 2, v_bkt_431_);
v_buckets_x27_436_ = lean_array_uset(v_buckets_414_, v___x_430_, v___x_435_);
v___x_437_ = lean_unsigned_to_nat(4u);
v___x_438_ = lean_nat_mul(v_size_x27_434_, v___x_437_);
v___x_439_ = lean_unsigned_to_nat(3u);
v___x_440_ = lean_nat_div(v___x_438_, v___x_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_array_get_size(v_buckets_x27_436_);
v___x_442_ = lean_nat_dec_le(v___x_440_, v___x_441_);
lean_dec(v___x_440_);
if (v___x_442_ == 0)
{
lean_object* v_val_443_; lean_object* v___x_445_; 
v_val_443_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(v_buckets_x27_436_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 1, v_val_443_);
lean_ctor_set(v___x_416_, 0, v_size_x27_434_);
v___x_445_ = v___x_416_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_size_x27_434_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v_val_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
else
{
lean_object* v___x_448_; 
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 1, v_buckets_x27_436_);
lean_ctor_set(v___x_416_, 0, v_size_x27_434_);
v___x_448_ = v___x_416_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_size_x27_434_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_buckets_x27_436_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
else
{
lean_object* v___x_450_; lean_object* v_buckets_x27_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_455_; 
lean_inc(v_bkt_431_);
v___x_450_ = lean_box(0);
v_buckets_x27_451_ = lean_array_uset(v_buckets_414_, v___x_430_, v___x_450_);
v___x_452_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_411_, v_b_412_, v_bkt_431_);
v___x_453_ = lean_array_uset(v_buckets_x27_451_, v___x_430_, v___x_452_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 1, v___x_453_);
v___x_455_ = v___x_416_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_size_413_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v___x_453_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg(lean_object* v_decl_458_, uint8_t v_isLet_459_, lean_object* v_a_460_, lean_object* v_a_461_){
_start:
{
lean_object* v___x_463_; lean_object* v_fst_465_; lean_object* v_snd_466_; lean_object* v_givenNames_469_; lean_object* v_decls_470_; lean_object* v_valueMap_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_489_; 
v___x_463_ = lean_st_ref_take(v_a_461_);
v_givenNames_469_ = lean_ctor_get(v___x_463_, 0);
v_decls_470_ = lean_ctor_get(v___x_463_, 1);
v_valueMap_471_ = lean_ctor_get(v___x_463_, 2);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_489_ == 0)
{
v___x_473_ = v___x_463_;
v_isShared_474_ = v_isSharedCheck_489_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_valueMap_471_);
lean_inc(v_decls_470_);
lean_inc(v_givenNames_469_);
lean_dec(v___x_463_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_489_;
goto v_resetjp_472_;
}
v___jp_464_:
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = lean_st_ref_put(v_a_461_, v_snd_466_);
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v_fst_465_);
return v___x_468_;
}
v_resetjp_472_:
{
uint8_t v_merge_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_merge_475_ = lean_ctor_get_uint8(v_a_460_, 6);
v___x_476_ = lean_box(0);
lean_inc_ref(v_decl_458_);
v___x_477_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_477_, 0, v_decl_458_);
lean_ctor_set_uint8(v___x_477_, sizeof(void*)*1, v_isLet_459_);
v___x_478_ = lean_array_push(v_decls_470_, v___x_477_);
if (v_merge_475_ == 0)
{
lean_object* v___x_480_; 
lean_dec_ref(v_decl_458_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 1, v___x_478_);
v___x_480_ = v___x_473_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_givenNames_469_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v___x_478_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_valueMap_471_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
v_fst_465_ = v___x_476_;
v_snd_466_ = v___x_480_;
goto v___jp_464_;
}
}
else
{
uint8_t v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_482_ = 0;
v___x_483_ = l_Lean_LocalDecl_value(v_decl_458_, v___x_482_);
v___x_484_ = l_Lean_LocalDecl_fvarId(v_decl_458_);
lean_dec_ref(v_decl_458_);
v___x_485_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_471_, v___x_483_, v___x_484_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 2, v___x_485_);
lean_ctor_set(v___x_473_, 1, v___x_478_);
v___x_487_ = v___x_473_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_givenNames_469_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v___x_478_);
lean_ctor_set(v_reuseFailAlloc_488_, 2, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
v_fst_465_ = v___x_476_;
v_snd_466_ = v___x_487_;
goto v___jp_464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg___boxed(lean_object* v_decl_490_, lean_object* v_isLet_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
uint8_t v_isLet_boxed_495_; lean_object* v_res_496_; 
v_isLet_boxed_495_ = lean_unbox(v_isLet_491_);
v_res_496_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_decl_490_, v_isLet_boxed_495_, v_a_492_, v_a_493_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl(lean_object* v_decl_497_, uint8_t v_isLet_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_decl_497_, v_isLet_498_, v_a_499_, v_a_501_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___boxed(lean_object* v_decl_508_, lean_object* v_isLet_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_){
_start:
{
uint8_t v_isLet_boxed_518_; lean_object* v_res_519_; 
v_isLet_boxed_518_ = lean_unbox(v_isLet_509_);
v_res_519_ = l_Lean_Meta_ExtractLets_addDecl(v_decl_508_, v_isLet_boxed_518_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_, v_a_515_, v_a_516_);
lean_dec(v_a_516_);
lean_dec_ref(v_a_515_);
lean_dec(v_a_514_);
lean_dec_ref(v_a_513_);
lean_dec(v_a_512_);
lean_dec(v_a_511_);
lean_dec_ref(v_a_510_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0(lean_object* v_00_u03b2_520_, lean_object* v_m_521_, lean_object* v_a_522_, lean_object* v_b_523_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_m_521_, v_a_522_, v_b_523_);
return v___x_524_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(lean_object* v_00_u03b2_525_, lean_object* v_a_526_, lean_object* v_x_527_){
_start:
{
uint8_t v___x_528_; 
v___x_528_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_526_, v_x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_529_, lean_object* v_a_530_, lean_object* v_x_531_){
_start:
{
uint8_t v_res_532_; lean_object* v_r_533_; 
v_res_532_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(v_00_u03b2_529_, v_a_530_, v_x_531_);
lean_dec(v_x_531_);
lean_dec_ref(v_a_530_);
v_r_533_ = lean_box(v_res_532_);
return v_r_533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1(lean_object* v_00_u03b2_534_, lean_object* v_data_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(v_data_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2(lean_object* v_00_u03b2_537_, lean_object* v_a_538_, lean_object* v_b_539_, lean_object* v_x_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_538_, v_b_539_, v_x_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_542_, lean_object* v_i_543_, lean_object* v_source_544_, lean_object* v_target_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(v_i_543_, v_source_544_, v_target_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(v_x_548_, v_x_549_);
return v___x_550_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(lean_object* v_k_551_, lean_object* v_t_552_){
_start:
{
if (lean_obj_tag(v_t_552_) == 0)
{
lean_object* v_k_553_; lean_object* v_l_554_; lean_object* v_r_555_; uint8_t v___x_556_; 
v_k_553_ = lean_ctor_get(v_t_552_, 1);
v_l_554_ = lean_ctor_get(v_t_552_, 3);
v_r_555_ = lean_ctor_get(v_t_552_, 4);
v___x_556_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_551_, v_k_553_);
switch(v___x_556_)
{
case 0:
{
v_t_552_ = v_l_554_;
goto _start;
}
case 1:
{
uint8_t v___x_558_; 
v___x_558_ = 1;
return v___x_558_;
}
default: 
{
v_t_552_ = v_r_555_;
goto _start;
}
}
}
else
{
uint8_t v___x_560_; 
v___x_560_ = 0;
return v___x_560_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg___boxed(lean_object* v_k_561_, lean_object* v_t_562_){
_start:
{
uint8_t v_res_563_; lean_object* v_r_564_; 
v_res_563_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(v_k_561_, v_t_562_);
lean_dec(v_t_562_);
lean_dec(v_k_561_);
v_r_564_ = lean_box(v_res_563_);
return v_r_564_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(lean_object* v___x_565_, lean_object* v_e_566_){
_start:
{
uint8_t v___x_567_; lean_object* v_d_569_; lean_object* v_b_570_; 
v___x_567_ = l_Lean_Expr_hasFVar(v_e_566_);
if (v___x_567_ == 0)
{
return v___x_567_;
}
else
{
switch(lean_obj_tag(v_e_566_))
{
case 7:
{
lean_object* v_binderType_573_; lean_object* v_body_574_; 
v_binderType_573_ = lean_ctor_get(v_e_566_, 1);
v_body_574_ = lean_ctor_get(v_e_566_, 2);
v_d_569_ = v_binderType_573_;
v_b_570_ = v_body_574_;
goto v___jp_568_;
}
case 6:
{
lean_object* v_binderType_575_; lean_object* v_body_576_; 
v_binderType_575_ = lean_ctor_get(v_e_566_, 1);
v_body_576_ = lean_ctor_get(v_e_566_, 2);
v_d_569_ = v_binderType_575_;
v_b_570_ = v_body_576_;
goto v___jp_568_;
}
case 10:
{
lean_object* v_expr_577_; 
v_expr_577_ = lean_ctor_get(v_e_566_, 1);
v_e_566_ = v_expr_577_;
goto _start;
}
case 8:
{
lean_object* v_type_579_; lean_object* v_value_580_; lean_object* v_body_581_; uint8_t v___x_582_; 
v_type_579_ = lean_ctor_get(v_e_566_, 1);
v_value_580_ = lean_ctor_get(v_e_566_, 2);
v_body_581_ = lean_ctor_get(v_e_566_, 3);
v___x_582_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_565_, v_type_579_);
if (v___x_582_ == 0)
{
uint8_t v___x_583_; 
v___x_583_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_565_, v_value_580_);
if (v___x_583_ == 0)
{
v_e_566_ = v_body_581_;
goto _start;
}
else
{
return v___x_567_;
}
}
else
{
return v___x_567_;
}
}
case 5:
{
lean_object* v_fn_585_; lean_object* v_arg_586_; uint8_t v___x_587_; 
v_fn_585_ = lean_ctor_get(v_e_566_, 0);
v_arg_586_ = lean_ctor_get(v_e_566_, 1);
v___x_587_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_565_, v_fn_585_);
if (v___x_587_ == 0)
{
v_e_566_ = v_arg_586_;
goto _start;
}
else
{
return v___x_567_;
}
}
case 11:
{
lean_object* v_struct_589_; 
v_struct_589_ = lean_ctor_get(v_e_566_, 2);
v_e_566_ = v_struct_589_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_591_; uint8_t v___x_592_; 
v_fvarId_591_ = lean_ctor_get(v_e_566_, 0);
v___x_592_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(v_fvarId_591_, v___x_565_);
return v___x_592_;
}
default: 
{
uint8_t v___x_593_; 
v___x_593_ = 0;
return v___x_593_;
}
}
}
v___jp_568_:
{
uint8_t v___x_571_; 
v___x_571_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_565_, v_d_569_);
if (v___x_571_ == 0)
{
v_e_566_ = v_b_570_;
goto _start;
}
else
{
return v___x_567_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___boxed(lean_object* v___x_594_, lean_object* v_e_595_){
_start:
{
uint8_t v_res_596_; lean_object* v_r_597_; 
v_res_596_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_594_, v_e_595_);
lean_dec_ref(v_e_595_);
lean_dec(v___x_594_);
v_r_597_ = lean_box(v_res_596_);
return v_r_597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(lean_object* v_as_598_, size_t v_sz_599_, size_t v_i_600_, lean_object* v_b_601_){
_start:
{
lean_object* v_a_604_; uint8_t v___x_608_; 
v___x_608_ = lean_usize_dec_lt(v_i_600_, v_sz_599_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; 
v___x_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_609_, 0, v_b_601_);
return v___x_609_;
}
else
{
lean_object* v_snd_610_; lean_object* v_fst_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_640_; 
v_snd_610_ = lean_ctor_get(v_b_601_, 1);
v_fst_611_ = lean_ctor_get(v_b_601_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v_b_601_);
if (v_isSharedCheck_640_ == 0)
{
v___x_613_ = v_b_601_;
v_isShared_614_ = v_isSharedCheck_640_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_snd_610_);
lean_inc(v_fst_611_);
lean_dec(v_b_601_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_640_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v_fst_615_; lean_object* v_snd_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_639_; 
v_fst_615_ = lean_ctor_get(v_snd_610_, 0);
v_snd_616_ = lean_ctor_get(v_snd_610_, 1);
v_isSharedCheck_639_ = !lean_is_exclusive(v_snd_610_);
if (v_isSharedCheck_639_ == 0)
{
v___x_618_ = v_snd_610_;
v_isShared_619_ = v_isSharedCheck_639_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_snd_616_);
lean_inc(v_fst_615_);
lean_dec(v_snd_610_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_639_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v_a_620_; lean_object* v_decl_621_; lean_object* v___x_632_; uint8_t v___x_633_; 
v_a_620_ = lean_array_uget_borrowed(v_as_598_, v_i_600_);
v_decl_621_ = lean_ctor_get(v_a_620_, 0);
v___x_632_ = l_Lean_LocalDecl_type(v_decl_621_);
v___x_633_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v_fst_611_, v___x_632_);
lean_dec_ref(v___x_632_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; uint8_t v___x_635_; 
v___x_634_ = l_Lean_LocalDecl_value(v_decl_621_, v___x_633_);
v___x_635_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v_fst_611_, v___x_634_);
lean_dec_ref(v___x_634_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
lean_del_object(v___x_618_);
lean_del_object(v___x_613_);
lean_inc(v_a_620_);
v___x_636_ = lean_array_push(v_fst_615_, v_a_620_);
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
lean_ctor_set(v___x_637_, 1, v_snd_616_);
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v_fst_611_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v_a_604_ = v___x_638_;
goto v___jp_603_;
}
else
{
goto v___jp_622_;
}
}
else
{
goto v___jp_622_;
}
v___jp_622_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_627_; 
lean_inc(v_a_620_);
v___x_623_ = lean_array_push(v_snd_616_, v_a_620_);
v___x_624_ = l_Lean_LocalDecl_fvarId(v_decl_621_);
v___x_625_ = l_Lean_FVarIdSet_insert(v_fst_611_, v___x_624_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 1, v___x_623_);
v___x_627_ = v___x_618_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_fst_615_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v___x_623_);
v___x_627_ = v_reuseFailAlloc_631_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
lean_object* v___x_629_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 1, v___x_627_);
lean_ctor_set(v___x_613_, 0, v___x_625_);
v___x_629_ = v___x_613_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_625_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v___x_627_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
v_a_604_ = v___x_629_;
goto v___jp_603_;
}
}
}
}
}
}
v___jp_603_:
{
size_t v___x_605_; size_t v___x_606_; 
v___x_605_ = ((size_t)1ULL);
v___x_606_ = lean_usize_add(v_i_600_, v___x_605_);
v_i_600_ = v___x_606_;
v_b_601_ = v_a_604_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg___boxed(lean_object* v_as_641_, lean_object* v_sz_642_, lean_object* v_i_643_, lean_object* v_b_644_, lean_object* v___y_645_){
_start:
{
size_t v_sz_boxed_646_; size_t v_i_boxed_647_; lean_object* v_res_648_; 
v_sz_boxed_646_ = lean_unbox_usize(v_sz_642_);
lean_dec(v_sz_642_);
v_i_boxed_647_ = lean_unbox_usize(v_i_643_);
lean_dec(v_i_643_);
v_res_648_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(v_as_641_, v_sz_boxed_646_, v_i_boxed_647_, v_b_644_);
lean_dec_ref(v_as_641_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls(lean_object* v_fvar_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_){
_start:
{
lean_object* v_fvarSet_660_; lean_object* v_fvarSet_661_; lean_object* v___x_662_; lean_object* v_decls_663_; lean_object* v___x_664_; lean_object* v___x_665_; size_t v_sz_666_; size_t v___x_667_; lean_object* v___x_668_; 
v_fvarSet_660_ = lean_box(1);
v_fvarSet_661_ = l_Lean_FVarIdSet_insert(v_fvarSet_660_, v_fvar_651_);
v___x_662_ = lean_st_ref_get(v_a_654_);
v_decls_663_ = lean_ctor_get(v___x_662_, 1);
lean_inc_ref(v_decls_663_);
lean_dec(v___x_662_);
v___x_664_ = ((lean_object*)(l_Lean_Meta_ExtractLets_flushDecls___closed__0));
v___x_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_665_, 0, v_fvarSet_661_);
lean_ctor_set(v___x_665_, 1, v___x_664_);
v_sz_666_ = lean_array_size(v_decls_663_);
v___x_667_ = ((size_t)0ULL);
v___x_668_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(v_decls_663_, v_sz_666_, v___x_667_, v___x_665_);
lean_dec_ref(v_decls_663_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_691_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_691_ == 0)
{
v___x_671_ = v___x_668_;
v_isShared_672_ = v_isSharedCheck_691_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_691_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v_snd_673_; lean_object* v_fst_674_; lean_object* v_snd_675_; lean_object* v___x_676_; lean_object* v_givenNames_677_; lean_object* v_valueMap_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_689_; 
v_snd_673_ = lean_ctor_get(v_a_669_, 1);
lean_inc(v_snd_673_);
lean_dec(v_a_669_);
v_fst_674_ = lean_ctor_get(v_snd_673_, 0);
lean_inc(v_fst_674_);
v_snd_675_ = lean_ctor_get(v_snd_673_, 1);
lean_inc(v_snd_675_);
lean_dec(v_snd_673_);
v___x_676_ = lean_st_ref_take(v_a_654_);
v_givenNames_677_ = lean_ctor_get(v___x_676_, 0);
v_valueMap_678_ = lean_ctor_get(v___x_676_, 2);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_689_ == 0)
{
lean_object* v_unused_690_; 
v_unused_690_ = lean_ctor_get(v___x_676_, 1);
lean_dec(v_unused_690_);
v___x_680_ = v___x_676_;
v_isShared_681_ = v_isSharedCheck_689_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_valueMap_678_);
lean_inc(v_givenNames_677_);
lean_dec(v___x_676_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_689_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 1, v_fst_674_);
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_givenNames_677_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v_fst_674_);
lean_ctor_set(v_reuseFailAlloc_688_, 2, v_valueMap_678_);
v___x_683_ = v_reuseFailAlloc_688_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
lean_object* v___x_684_; lean_object* v___x_686_; 
v___x_684_ = lean_st_ref_put(v_a_654_, v___x_683_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v_snd_675_);
v___x_686_ = v___x_671_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_snd_675_);
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
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
v_a_692_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_668_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_668_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls___boxed(lean_object* v_fvar_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lean_Meta_ExtractLets_flushDecls(v_fvar_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
lean_dec(v_a_705_);
lean_dec_ref(v_a_704_);
lean_dec(v_a_703_);
lean_dec(v_a_702_);
lean_dec_ref(v_a_701_);
return v_res_709_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(lean_object* v_00_u03b2_710_, lean_object* v_k_711_, lean_object* v_t_712_){
_start:
{
uint8_t v___x_713_; 
v___x_713_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(v_k_711_, v_t_712_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___boxed(lean_object* v_00_u03b2_714_, lean_object* v_k_715_, lean_object* v_t_716_){
_start:
{
uint8_t v_res_717_; lean_object* v_r_718_; 
v_res_717_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(v_00_u03b2_714_, v_k_715_, v_t_716_);
lean_dec(v_t_716_);
lean_dec(v_k_715_);
v_r_718_ = lean_box(v_res_717_);
return v_r_718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2(lean_object* v_as_719_, size_t v_sz_720_, size_t v_i_721_, lean_object* v_b_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(v_as_719_, v_sz_720_, v_i_721_, v_b_722_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___boxed(lean_object* v_as_732_, lean_object* v_sz_733_, lean_object* v_i_734_, lean_object* v_b_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
size_t v_sz_boxed_744_; size_t v_i_boxed_745_; lean_object* v_res_746_; 
v_sz_boxed_744_ = lean_unbox_usize(v_sz_733_);
lean_dec(v_sz_733_);
v_i_boxed_745_ = lean_unbox_usize(v_i_734_);
lean_dec(v_i_734_);
v_res_746_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2(v_as_732_, v_sz_boxed_744_, v_i_boxed_745_, v_b_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec_ref(v_as_732_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(lean_object* v_x_747_){
_start:
{
lean_object* v_decl_748_; 
v_decl_748_ = lean_ctor_get(v_x_747_, 0);
lean_inc_ref(v_decl_748_);
return v_decl_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed(lean_object* v_x_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(v_x_749_);
lean_dec_ref(v_x_749_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(lean_object* v_lctx_751_, lean_object* v_x1_752_, lean_object* v_x2_753_){
_start:
{
lean_object* v_decl_754_; lean_object* v___x_755_; uint8_t v___x_756_; 
v_decl_754_ = lean_ctor_get(v_x2_753_, 0);
v___x_755_ = l_Lean_LocalDecl_fvarId(v_decl_754_);
v___x_756_ = l_Lean_LocalContext_contains(v_lctx_751_, v___x_755_);
lean_dec(v___x_755_);
if (v___x_756_ == 0)
{
lean_object* v___x_757_; 
v___x_757_ = lean_array_push(v_x1_752_, v_x2_753_);
return v___x_757_;
}
else
{
lean_dec_ref(v_x2_753_);
return v_x1_752_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed(lean_object* v_lctx_758_, lean_object* v_x1_759_, lean_object* v_x2_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(v_lctx_758_, v_x1_759_, v_x2_760_);
lean_dec_ref(v_lctx_758_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2(lean_object* v___f_781_, lean_object* v_inst_782_, lean_object* v_inst_783_, lean_object* v_k_784_, lean_object* v_decls_785_, lean_object* v_lctx_786_){
_start:
{
lean_object* v___y_788_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v___x_795_ = lean_unsigned_to_nat(0u);
v___x_796_ = lean_array_get_size(v_decls_785_);
v___x_797_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_798_ = ((lean_object*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9));
v___x_799_ = lean_nat_dec_lt(v___x_795_, v___x_796_);
if (v___x_799_ == 0)
{
lean_dec_ref(v_lctx_786_);
lean_dec_ref(v_decls_785_);
v___y_788_ = v___x_797_;
goto v___jp_787_;
}
else
{
lean_object* v___f_800_; size_t v___x_801_; size_t v___x_802_; lean_object* v___x_803_; 
v___f_800_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_800_, 0, v_lctx_786_);
v___x_801_ = ((size_t)0ULL);
v___x_802_ = lean_usize_of_nat(v___x_796_);
v___x_803_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_798_, v___f_800_, v_decls_785_, v___x_801_, v___x_802_, v___x_797_);
v___y_788_ = v___x_803_;
goto v___jp_787_;
}
v___jp_787_:
{
lean_object* v___x_789_; size_t v_sz_790_; size_t v___x_791_; lean_object* v_decls_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_789_ = ((lean_object*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9));
v_sz_790_ = lean_array_size(v___y_788_);
v___x_791_ = ((size_t)0ULL);
v_decls_792_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_789_, v___f_781_, v_sz_790_, v___x_791_, v___y_788_);
v___x_793_ = lean_array_to_list(v_decls_792_);
v___x_794_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_782_, v_inst_783_, v___x_793_, v_k_784_);
return v___x_794_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(lean_object* v_inst_805_, lean_object* v_inst_806_, lean_object* v_inst_807_, lean_object* v_decls_808_, lean_object* v_k_809_){
_start:
{
lean_object* v_toBind_810_; lean_object* v___f_811_; lean_object* v___f_812_; lean_object* v___x_813_; 
v_toBind_810_ = lean_ctor_get(v_inst_805_, 1);
lean_inc(v_toBind_810_);
v___f_811_ = ((lean_object*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0));
v___f_812_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2), 6, 5);
lean_closure_set(v___f_812_, 0, v___f_811_);
lean_closure_set(v___f_812_, 1, v_inst_806_);
lean_closure_set(v___f_812_, 2, v_inst_805_);
lean_closure_set(v___f_812_, 3, v_k_809_);
lean_closure_set(v___f_812_, 4, v_decls_808_);
v___x_813_ = lean_apply_4(v_toBind_810_, lean_box(0), lean_box(0), v_inst_807_, v___f_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext(lean_object* v_m_814_, lean_object* v_00_u03b1_815_, lean_object* v_inst_816_, lean_object* v_inst_817_, lean_object* v_inst_818_, lean_object* v_decls_819_, lean_object* v_k_820_){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(v_inst_816_, v_inst_817_, v_inst_818_, v_decls_819_, v_k_820_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(lean_object* v_as_822_, size_t v_i_823_, size_t v_stop_824_, lean_object* v_b_825_){
_start:
{
uint8_t v___x_826_; 
v___x_826_ = lean_usize_dec_eq(v_i_823_, v_stop_824_);
if (v___x_826_ == 0)
{
size_t v___x_827_; size_t v___x_828_; lean_object* v___x_829_; lean_object* v_decl_830_; uint8_t v_isLet_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_827_ = ((size_t)1ULL);
v___x_828_ = lean_usize_sub(v_i_823_, v___x_827_);
v___x_829_ = lean_array_uget_borrowed(v_as_822_, v___x_828_);
v_decl_830_ = lean_ctor_get(v___x_829_, 0);
v_isLet_831_ = lean_ctor_get_uint8(v___x_829_, sizeof(void*)*1);
v___x_832_ = l_Lean_LocalDecl_userName(v_decl_830_);
v___x_833_ = l_Lean_LocalDecl_type(v_decl_830_);
v___x_834_ = l_Lean_LocalDecl_value(v_decl_830_, v___x_826_);
lean_inc_ref(v_decl_830_);
v___x_835_ = l_Lean_LocalDecl_toExpr(v_decl_830_);
v___x_836_ = lean_unsigned_to_nat(1u);
v___x_837_ = lean_mk_empty_array_with_capacity(v___x_836_);
v___x_838_ = lean_array_push(v___x_837_, v___x_835_);
v___x_839_ = lean_expr_abstract(v_b_825_, v___x_838_);
lean_dec_ref(v___x_838_);
lean_dec_ref(v_b_825_);
if (v_isLet_831_ == 0)
{
uint8_t v___x_840_; lean_object* v___x_841_; 
v___x_840_ = 1;
v___x_841_ = l_Lean_Expr_letE___override(v___x_832_, v___x_833_, v___x_834_, v___x_839_, v___x_840_);
v_i_823_ = v___x_828_;
v_b_825_ = v___x_841_;
goto _start;
}
else
{
lean_object* v___x_843_; 
v___x_843_ = l_Lean_Expr_letE___override(v___x_832_, v___x_833_, v___x_834_, v___x_839_, v___x_826_);
v_i_823_ = v___x_828_;
v_b_825_ = v___x_843_;
goto _start;
}
}
else
{
return v_b_825_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0___boxed(lean_object* v_as_845_, lean_object* v_i_846_, lean_object* v_stop_847_, lean_object* v_b_848_){
_start:
{
size_t v_i_boxed_849_; size_t v_stop_boxed_850_; lean_object* v_res_851_; 
v_i_boxed_849_ = lean_unbox_usize(v_i_846_);
lean_dec(v_i_846_);
v_stop_boxed_850_ = lean_unbox_usize(v_stop_847_);
lean_dec(v_stop_847_);
v_res_851_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(v_as_845_, v_i_boxed_849_, v_stop_boxed_850_, v_b_848_);
lean_dec_ref(v_as_845_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls(lean_object* v_decls_852_, lean_object* v_e_853_){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; uint8_t v___x_856_; 
v___x_854_ = lean_array_get_size(v_decls_852_);
v___x_855_ = lean_unsigned_to_nat(0u);
v___x_856_ = lean_nat_dec_lt(v___x_855_, v___x_854_);
if (v___x_856_ == 0)
{
return v_e_853_;
}
else
{
size_t v___x_857_; size_t v___x_858_; lean_object* v___x_859_; 
v___x_857_ = lean_usize_of_nat(v___x_854_);
v___x_858_ = ((size_t)0ULL);
v___x_859_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(v_decls_852_, v___x_857_, v___x_858_, v_e_853_);
return v___x_859_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls___boxed(lean_object* v_decls_860_, lean_object* v_e_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_decls_860_, v_e_861_);
lean_dec_ref(v_decls_860_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(lean_object* v_fvarId_863_, size_t v_sz_864_, size_t v_i_865_, lean_object* v_bs_866_){
_start:
{
uint8_t v___x_867_; 
v___x_867_ = lean_usize_dec_lt(v_i_865_, v_sz_864_);
if (v___x_867_ == 0)
{
return v_bs_866_;
}
else
{
lean_object* v_v_868_; lean_object* v_decl_869_; lean_object* v___x_870_; lean_object* v_bs_x27_871_; lean_object* v___y_873_; lean_object* v___x_878_; uint8_t v___x_879_; 
v_v_868_ = lean_array_uget(v_bs_866_, v_i_865_);
v_decl_869_ = lean_ctor_get(v_v_868_, 0);
v___x_870_ = lean_unsigned_to_nat(0u);
v_bs_x27_871_ = lean_array_uset(v_bs_866_, v_i_865_, v___x_870_);
v___x_878_ = l_Lean_LocalDecl_fvarId(v_decl_869_);
v___x_879_ = l_Lean_instBEqFVarId_beq(v___x_878_, v_fvarId_863_);
lean_dec(v___x_878_);
if (v___x_879_ == 0)
{
v___y_873_ = v_v_868_;
goto v___jp_872_;
}
else
{
lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
lean_inc_ref(v_decl_869_);
v_isSharedCheck_886_ = !lean_is_exclusive(v_v_868_);
if (v_isSharedCheck_886_ == 0)
{
lean_object* v_unused_887_; 
v_unused_887_ = lean_ctor_get(v_v_868_, 0);
lean_dec(v_unused_887_);
v___x_881_ = v_v_868_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_dec(v_v_868_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_decl_869_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
lean_ctor_set_uint8(v___x_884_, sizeof(void*)*1, v___x_879_);
v___y_873_ = v___x_884_;
goto v___jp_872_;
}
}
}
v___jp_872_:
{
size_t v___x_874_; size_t v___x_875_; lean_object* v___x_876_; 
v___x_874_ = ((size_t)1ULL);
v___x_875_ = lean_usize_add(v_i_865_, v___x_874_);
v___x_876_ = lean_array_uset(v_bs_x27_871_, v_i_865_, v___y_873_);
v_i_865_ = v___x_875_;
v_bs_866_ = v___x_876_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0___boxed(lean_object* v_fvarId_888_, lean_object* v_sz_889_, lean_object* v_i_890_, lean_object* v_bs_891_){
_start:
{
size_t v_sz_boxed_892_; size_t v_i_boxed_893_; lean_object* v_res_894_; 
v_sz_boxed_892_ = lean_unbox_usize(v_sz_889_);
lean_dec(v_sz_889_);
v_i_boxed_893_ = lean_unbox_usize(v_i_890_);
lean_dec(v_i_890_);
v_res_894_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(v_fvarId_888_, v_sz_boxed_892_, v_i_boxed_893_, v_bs_891_);
lean_dec(v_fvarId_888_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg(lean_object* v_fvarId_895_, lean_object* v_a_896_){
_start:
{
lean_object* v___x_898_; lean_object* v_givenNames_899_; lean_object* v_decls_900_; lean_object* v_valueMap_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_914_; 
v___x_898_ = lean_st_ref_take(v_a_896_);
v_givenNames_899_ = lean_ctor_get(v___x_898_, 0);
v_decls_900_ = lean_ctor_get(v___x_898_, 1);
v_valueMap_901_ = lean_ctor_get(v___x_898_, 2);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_914_ == 0)
{
v___x_903_ = v___x_898_;
v_isShared_904_ = v_isSharedCheck_914_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_valueMap_901_);
lean_inc(v_decls_900_);
lean_inc(v_givenNames_899_);
lean_dec(v___x_898_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_914_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_905_; size_t v_sz_906_; size_t v___x_907_; lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_905_ = lean_box(0);
v_sz_906_ = lean_array_size(v_decls_900_);
v___x_907_ = ((size_t)0ULL);
v___x_908_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(v_fvarId_895_, v_sz_906_, v___x_907_, v_decls_900_);
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 1, v___x_908_);
v___x_910_ = v___x_903_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_givenNames_899_);
lean_ctor_set(v_reuseFailAlloc_913_, 1, v___x_908_);
lean_ctor_set(v_reuseFailAlloc_913_, 2, v_valueMap_901_);
v___x_910_ = v_reuseFailAlloc_913_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_911_ = lean_st_ref_put(v_a_896_, v___x_910_);
v___x_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_912_, 0, v___x_905_);
return v___x_912_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg___boxed(lean_object* v_fvarId_915_, lean_object* v_a_916_, lean_object* v_a_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_fvarId_915_, v_a_916_);
lean_dec(v_a_916_);
lean_dec(v_fvarId_915_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet(lean_object* v_fvarId_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_){
_start:
{
lean_object* v___x_928_; 
v___x_928_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_fvarId_919_, v_a_922_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___boxed(lean_object* v_fvarId_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lean_Meta_ExtractLets_ensureIsLet(v_fvarId_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_);
lean_dec(v_a_936_);
lean_dec_ref(v_a_935_);
lean_dec(v_a_934_);
lean_dec_ref(v_a_933_);
lean_dec(v_a_932_);
lean_dec(v_a_931_);
lean_dec_ref(v_a_930_);
lean_dec(v_fvarId_929_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(size_t v_sz_939_, size_t v_i_940_, lean_object* v_bs_941_){
_start:
{
uint8_t v___x_942_; 
v___x_942_ = lean_usize_dec_lt(v_i_940_, v_sz_939_);
if (v___x_942_ == 0)
{
return v_bs_941_;
}
else
{
lean_object* v_v_943_; lean_object* v_decl_944_; lean_object* v___x_945_; lean_object* v_bs_x27_946_; size_t v___x_947_; size_t v___x_948_; lean_object* v___x_949_; 
v_v_943_ = lean_array_uget_borrowed(v_bs_941_, v_i_940_);
v_decl_944_ = lean_ctor_get(v_v_943_, 0);
lean_inc_ref(v_decl_944_);
v___x_945_ = lean_unsigned_to_nat(0u);
v_bs_x27_946_ = lean_array_uset(v_bs_941_, v_i_940_, v___x_945_);
v___x_947_ = ((size_t)1ULL);
v___x_948_ = lean_usize_add(v_i_940_, v___x_947_);
v___x_949_ = lean_array_uset(v_bs_x27_946_, v_i_940_, v_decl_944_);
v_i_940_ = v___x_948_;
v_bs_941_ = v___x_949_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1___boxed(lean_object* v_sz_951_, lean_object* v_i_952_, lean_object* v_bs_953_){
_start:
{
size_t v_sz_boxed_954_; size_t v_i_boxed_955_; lean_object* v_res_956_; 
v_sz_boxed_954_ = lean_unbox_usize(v_sz_951_);
lean_dec(v_sz_951_);
v_i_boxed_955_ = lean_unbox_usize(v_i_952_);
lean_dec(v_i_952_);
v_res_956_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_boxed_954_, v_i_boxed_955_, v_bs_953_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(lean_object* v_x_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v___x_966_; 
lean_inc(v___y_960_);
lean_inc(v___y_959_);
lean_inc_ref(v___y_958_);
v___x_966_ = lean_apply_8(v_x_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, lean_box(0));
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v_x_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(v_x_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_970_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(lean_object* v_decls_977_, lean_object* v_x_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v___f_987_; lean_object* v___x_988_; 
lean_inc(v___y_981_);
lean_inc(v___y_980_);
lean_inc_ref(v___y_979_);
v___f_987_ = lean_alloc_closure((void*)(l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed), 9, 4);
lean_closure_set(v___f_987_, 0, v_x_978_);
lean_closure_set(v___f_987_, 1, v___y_979_);
lean_closure_set(v___f_987_, 2, v___y_980_);
lean_closure_set(v___f_987_, 3, v___y_981_);
v___x_988_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_box(0), v_decls_977_, v___f_987_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
if (lean_obj_tag(v___x_988_) == 0)
{
return v___x_988_;
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
v_a_989_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_988_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_988_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___boxed(lean_object* v_decls_997_, lean_object* v_x_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v_decls_997_, v_x_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(lean_object* v___x_1008_, lean_object* v_as_1009_, size_t v_i_1010_, size_t v_stop_1011_, lean_object* v_b_1012_){
_start:
{
lean_object* v___y_1014_; uint8_t v___x_1018_; 
v___x_1018_ = lean_usize_dec_eq(v_i_1010_, v_stop_1011_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; lean_object* v_decl_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; 
v___x_1019_ = lean_array_uget_borrowed(v_as_1009_, v_i_1010_);
v_decl_1020_ = lean_ctor_get(v___x_1019_, 0);
v___x_1021_ = l_Lean_LocalDecl_fvarId(v_decl_1020_);
v___x_1022_ = l_Lean_LocalContext_contains(v___x_1008_, v___x_1021_);
lean_dec(v___x_1021_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; 
lean_inc(v___x_1019_);
v___x_1023_ = lean_array_push(v_b_1012_, v___x_1019_);
v___y_1014_ = v___x_1023_;
goto v___jp_1013_;
}
else
{
v___y_1014_ = v_b_1012_;
goto v___jp_1013_;
}
}
else
{
return v_b_1012_;
}
v___jp_1013_:
{
size_t v___x_1015_; size_t v___x_1016_; 
v___x_1015_ = ((size_t)1ULL);
v___x_1016_ = lean_usize_add(v_i_1010_, v___x_1015_);
v_i_1010_ = v___x_1016_;
v_b_1012_ = v___y_1014_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3___boxed(lean_object* v___x_1024_, lean_object* v_as_1025_, lean_object* v_i_1026_, lean_object* v_stop_1027_, lean_object* v_b_1028_){
_start:
{
size_t v_i_boxed_1029_; size_t v_stop_boxed_1030_; lean_object* v_res_1031_; 
v_i_boxed_1029_ = lean_unbox_usize(v_i_1026_);
lean_dec(v_i_1026_);
v_stop_boxed_1030_ = lean_unbox_usize(v_stop_1027_);
lean_dec(v_stop_1027_);
v_res_1031_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(v___x_1024_, v_as_1025_, v_i_boxed_1029_, v_stop_boxed_1030_, v_b_1028_);
lean_dec_ref(v_as_1025_);
lean_dec_ref(v___x_1024_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(lean_object* v_decls_1032_, lean_object* v_k_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v___y_1043_; lean_object* v_lctx_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; uint8_t v___x_1053_; 
v_lctx_1049_ = lean_ctor_get(v___y_1037_, 2);
v___x_1050_ = lean_unsigned_to_nat(0u);
v___x_1051_ = lean_array_get_size(v_decls_1032_);
v___x_1052_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_1053_ = lean_nat_dec_lt(v___x_1050_, v___x_1051_);
if (v___x_1053_ == 0)
{
v___y_1043_ = v___x_1052_;
goto v___jp_1042_;
}
else
{
size_t v___x_1054_; size_t v___x_1055_; lean_object* v___x_1056_; 
v___x_1054_ = ((size_t)0ULL);
v___x_1055_ = lean_usize_of_nat(v___x_1051_);
v___x_1056_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(v_lctx_1049_, v_decls_1032_, v___x_1054_, v___x_1055_, v___x_1052_);
v___y_1043_ = v___x_1056_;
goto v___jp_1042_;
}
v___jp_1042_:
{
size_t v_sz_1044_; size_t v___x_1045_; lean_object* v_decls_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v_sz_1044_ = lean_array_size(v___y_1043_);
v___x_1045_ = ((size_t)0ULL);
v_decls_1046_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_1044_, v___x_1045_, v___y_1043_);
v___x_1047_ = lean_array_to_list(v_decls_1046_);
v___x_1048_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v___x_1047_, v_k_1033_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
return v___x_1048_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg___boxed(lean_object* v_decls_1057_, lean_object* v_k_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v_decls_1057_, v_k_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec_ref(v_decls_1057_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(lean_object* v_fvarId_1068_, lean_object* v_as_1069_, lean_object* v_j_1070_){
_start:
{
lean_object* v___x_1071_; uint8_t v___x_1072_; 
v___x_1071_ = lean_array_get_size(v_as_1069_);
v___x_1072_ = lean_nat_dec_lt(v_j_1070_, v___x_1071_);
if (v___x_1072_ == 0)
{
lean_object* v___x_1073_; 
lean_dec(v_j_1070_);
v___x_1073_ = lean_box(0);
return v___x_1073_;
}
else
{
lean_object* v___x_1074_; lean_object* v_decl_1075_; lean_object* v___x_1076_; uint8_t v___x_1077_; 
v___x_1074_ = lean_array_fget_borrowed(v_as_1069_, v_j_1070_);
v_decl_1075_ = lean_ctor_get(v___x_1074_, 0);
v___x_1076_ = l_Lean_LocalDecl_fvarId(v_decl_1075_);
v___x_1077_ = l_Lean_instBEqFVarId_beq(v___x_1076_, v_fvarId_1068_);
lean_dec(v___x_1076_);
if (v___x_1077_ == 0)
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = lean_unsigned_to_nat(1u);
v___x_1079_ = lean_nat_add(v_j_1070_, v___x_1078_);
lean_dec(v_j_1070_);
v_j_1070_ = v___x_1079_;
goto _start;
}
else
{
lean_object* v___x_1081_; 
v___x_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1081_, 0, v_j_1070_);
return v___x_1081_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0___boxed(lean_object* v_fvarId_1082_, lean_object* v_as_1083_, lean_object* v_j_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(v_fvarId_1082_, v_as_1083_, v_j_1084_);
lean_dec_ref(v_as_1083_);
lean_dec(v_fvarId_1082_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg(lean_object* v_fvarId_1086_, lean_object* v_k_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v___x_1096_; lean_object* v_lctx_1097_; uint8_t v___x_1098_; 
v___x_1096_ = lean_st_ref_get(v_a_1090_);
v_lctx_1097_ = lean_ctor_get(v_a_1091_, 2);
v___x_1098_ = l_Lean_LocalContext_contains(v_lctx_1097_, v_fvarId_1086_);
if (v___x_1098_ == 0)
{
lean_object* v_decls_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v_decls_1099_ = lean_ctor_get(v___x_1096_, 1);
lean_inc_ref(v_decls_1099_);
lean_dec(v___x_1096_);
v___x_1100_ = lean_unsigned_to_nat(0u);
v___x_1101_ = l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(v_fvarId_1086_, v_decls_1099_, v___x_1100_);
if (lean_obj_tag(v___x_1101_) == 1)
{
lean_object* v_val_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v_val_1102_ = lean_ctor_get(v___x_1101_, 0);
lean_inc(v_val_1102_);
lean_dec_ref_known(v___x_1101_, 1);
v___x_1103_ = lean_unsigned_to_nat(1u);
v___x_1104_ = lean_nat_add(v_val_1102_, v___x_1103_);
lean_dec(v_val_1102_);
v___x_1105_ = l_Array_toSubarray___redArg(v_decls_1099_, v___x_1100_, v___x_1104_);
v___x_1106_ = l_Subarray_copy___redArg(v___x_1105_);
v___x_1107_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v___x_1106_, v_k_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_);
lean_dec_ref(v___x_1106_);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; 
lean_dec(v___x_1101_);
lean_dec_ref(v_decls_1099_);
lean_inc(v_a_1094_);
lean_inc_ref(v_a_1093_);
lean_inc(v_a_1092_);
lean_inc_ref(v_a_1091_);
lean_inc(v_a_1090_);
lean_inc(v_a_1089_);
lean_inc_ref(v_a_1088_);
v___x_1108_ = lean_apply_8(v_k_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, lean_box(0));
return v___x_1108_;
}
}
else
{
lean_object* v___x_1109_; 
lean_dec(v___x_1096_);
lean_inc(v_a_1094_);
lean_inc_ref(v_a_1093_);
lean_inc(v_a_1092_);
lean_inc_ref(v_a_1091_);
lean_inc(v_a_1090_);
lean_inc(v_a_1089_);
lean_inc_ref(v_a_1088_);
v___x_1109_ = lean_apply_8(v_k_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, lean_box(0));
return v___x_1109_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg___boxed(lean_object* v_fvarId_1110_, lean_object* v_k_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v_fvarId_1110_, v_k_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_);
lean_dec(v_a_1118_);
lean_dec_ref(v_a_1117_);
lean_dec(v_a_1116_);
lean_dec_ref(v_a_1115_);
lean_dec(v_a_1114_);
lean_dec(v_a_1113_);
lean_dec_ref(v_a_1112_);
lean_dec(v_fvarId_1110_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext(lean_object* v_00_u03b1_1121_, lean_object* v_fvarId_1122_, lean_object* v_k_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v_fvarId_1122_, v_k_1123_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_, v_a_1129_, v_a_1130_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___boxed(lean_object* v_00_u03b1_1133_, lean_object* v_fvarId_1134_, lean_object* v_k_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_Meta_ExtractLets_withDeclInContext(v_00_u03b1_1133_, v_fvarId_1134_, v_k_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
lean_dec(v_a_1142_);
lean_dec_ref(v_a_1141_);
lean_dec(v_a_1140_);
lean_dec_ref(v_a_1139_);
lean_dec(v_a_1138_);
lean_dec(v_a_1137_);
lean_dec_ref(v_a_1136_);
lean_dec(v_fvarId_1134_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(lean_object* v_00_u03b1_1145_, lean_object* v_decls_1146_, lean_object* v_x_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v___x_1156_; 
v___x_1156_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v_decls_1146_, v_x_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1157_, lean_object* v_decls_1158_, lean_object* v_x_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(v_00_u03b1_1157_, v_decls_1158_, v_x_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(lean_object* v_00_u03b1_1169_, lean_object* v_decls_1170_, lean_object* v_k_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v_decls_1170_, v_k_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___boxed(lean_object* v_00_u03b1_1181_, lean_object* v_decls_1182_, lean_object* v_k_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(v_00_u03b1_1181_, v_decls_1182_, v_k_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec_ref(v_decls_1182_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(lean_object* v_e_1193_, lean_object* v___y_1194_){
_start:
{
uint8_t v___x_1196_; 
v___x_1196_ = l_Lean_Expr_hasMVar(v_e_1193_);
if (v___x_1196_ == 0)
{
lean_object* v___x_1197_; 
v___x_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1197_, 0, v_e_1193_);
return v___x_1197_;
}
else
{
lean_object* v___x_1198_; lean_object* v_mctx_1199_; lean_object* v___x_1200_; lean_object* v_fst_1201_; lean_object* v_snd_1202_; lean_object* v___x_1203_; lean_object* v_cache_1204_; lean_object* v_zetaDeltaFVarIds_1205_; lean_object* v_postponed_1206_; lean_object* v_diag_1207_; lean_object* v_rewriteFires_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1217_; 
v___x_1198_ = lean_st_ref_get(v___y_1194_);
v_mctx_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc_ref(v_mctx_1199_);
lean_dec(v___x_1198_);
v___x_1200_ = l_Lean_instantiateMVarsCore(v_mctx_1199_, v_e_1193_);
v_fst_1201_ = lean_ctor_get(v___x_1200_, 0);
lean_inc(v_fst_1201_);
v_snd_1202_ = lean_ctor_get(v___x_1200_, 1);
lean_inc(v_snd_1202_);
lean_dec_ref(v___x_1200_);
v___x_1203_ = lean_st_ref_take(v___y_1194_);
v_cache_1204_ = lean_ctor_get(v___x_1203_, 1);
v_zetaDeltaFVarIds_1205_ = lean_ctor_get(v___x_1203_, 2);
v_postponed_1206_ = lean_ctor_get(v___x_1203_, 3);
v_diag_1207_ = lean_ctor_get(v___x_1203_, 4);
v_rewriteFires_1208_ = lean_ctor_get(v___x_1203_, 5);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1217_ == 0)
{
lean_object* v_unused_1218_; 
v_unused_1218_ = lean_ctor_get(v___x_1203_, 0);
lean_dec(v_unused_1218_);
v___x_1210_ = v___x_1203_;
v_isShared_1211_ = v_isSharedCheck_1217_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_rewriteFires_1208_);
lean_inc(v_diag_1207_);
lean_inc(v_postponed_1206_);
lean_inc(v_zetaDeltaFVarIds_1205_);
lean_inc(v_cache_1204_);
lean_dec(v___x_1203_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1217_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1213_; 
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 0, v_snd_1202_);
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_snd_1202_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v_cache_1204_);
lean_ctor_set(v_reuseFailAlloc_1216_, 2, v_zetaDeltaFVarIds_1205_);
lean_ctor_set(v_reuseFailAlloc_1216_, 3, v_postponed_1206_);
lean_ctor_set(v_reuseFailAlloc_1216_, 4, v_diag_1207_);
lean_ctor_set(v_reuseFailAlloc_1216_, 5, v_rewriteFires_1208_);
v___x_1213_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = lean_st_ref_put(v___y_1194_, v___x_1213_);
v___x_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1215_, 0, v_fst_1201_);
return v___x_1215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg___boxed(lean_object* v_e_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_1219_, v___y_1220_);
lean_dec(v___y_1220_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(lean_object* v_e_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_1223_, v___y_1228_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___boxed(lean_object* v_e_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(v_e_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_);
lean_dec(v___y_1240_);
lean_dec_ref(v___y_1239_);
lean_dec(v___y_1238_);
lean_dec_ref(v___y_1237_);
lean_dec(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(lean_object* v_as_1243_, size_t v_i_1244_, size_t v_stop_1245_, lean_object* v_b_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v_a_1256_; uint8_t v___x_1262_; 
v___x_1262_ = lean_usize_dec_eq(v_i_1244_, v_stop_1245_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; 
v___x_1263_ = lean_array_uget_borrowed(v_as_1243_, v_i_1244_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v___x_1264_; 
v___x_1264_ = lean_box(0);
v_a_1256_ = v___x_1264_;
goto v___jp_1255_;
}
else
{
lean_object* v_val_1265_; uint8_t v___x_1266_; 
v_val_1265_ = lean_ctor_get(v___x_1263_, 0);
v___x_1266_ = l_Lean_LocalDecl_isLet(v_val_1265_, v___x_1262_);
if (v___x_1266_ == 0)
{
goto v___jp_1260_;
}
else
{
uint8_t v___x_1267_; 
v___x_1267_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1265_);
if (v___x_1267_ == 0)
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1268_ = l_Lean_LocalDecl_value(v_val_1265_, v___x_1262_);
v___x_1269_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v___x_1268_, v___y_1251_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1271_; lean_object* v_givenNames_1272_; lean_object* v_decls_1273_; lean_object* v_valueMap_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1285_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_a_1270_);
lean_dec_ref_known(v___x_1269_, 1);
v___x_1271_ = lean_st_ref_take(v___y_1249_);
v_givenNames_1272_ = lean_ctor_get(v___x_1271_, 0);
v_decls_1273_ = lean_ctor_get(v___x_1271_, 1);
v_valueMap_1274_ = lean_ctor_get(v___x_1271_, 2);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1276_ = v___x_1271_;
v_isShared_1277_ = v_isSharedCheck_1285_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_valueMap_1274_);
lean_inc(v_decls_1273_);
lean_inc(v_givenNames_1272_);
lean_dec(v___x_1271_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1285_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1282_; 
v___x_1278_ = lean_box(0);
v___x_1279_ = l_Lean_LocalDecl_fvarId(v_val_1265_);
v___x_1280_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_1274_, v_a_1270_, v___x_1279_);
if (v_isShared_1277_ == 0)
{
lean_ctor_set(v___x_1276_, 2, v___x_1280_);
v___x_1282_ = v___x_1276_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_givenNames_1272_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v_decls_1273_);
lean_ctor_set(v_reuseFailAlloc_1284_, 2, v___x_1280_);
v___x_1282_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
lean_object* v___x_1283_; 
v___x_1283_ = lean_st_ref_put(v___y_1249_, v___x_1282_);
v_a_1256_ = v___x_1278_;
goto v___jp_1255_;
}
}
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
v_a_1286_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1269_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1269_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
else
{
goto v___jp_1260_;
}
}
}
}
else
{
lean_object* v___x_1294_; 
v___x_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1294_, 0, v_b_1246_);
return v___x_1294_;
}
v___jp_1255_:
{
size_t v___x_1257_; size_t v___x_1258_; 
v___x_1257_ = ((size_t)1ULL);
v___x_1258_ = lean_usize_add(v_i_1244_, v___x_1257_);
v_i_1244_ = v___x_1258_;
v_b_1246_ = v_a_1256_;
goto _start;
}
v___jp_1260_:
{
lean_object* v___x_1261_; 
v___x_1261_ = lean_box(0);
v_a_1256_ = v___x_1261_;
goto v___jp_1255_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6___boxed(lean_object* v_as_1295_, lean_object* v_i_1296_, lean_object* v_stop_1297_, lean_object* v_b_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
size_t v_i_boxed_1307_; size_t v_stop_boxed_1308_; lean_object* v_res_1309_; 
v_i_boxed_1307_ = lean_unbox_usize(v_i_1296_);
lean_dec(v_i_1296_);
v_stop_boxed_1308_ = lean_unbox_usize(v_stop_1297_);
lean_dec(v_stop_1297_);
v_res_1309_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(v_as_1295_, v_i_boxed_1307_, v_stop_boxed_1308_, v_b_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec_ref(v_as_1295_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(lean_object* v_as_1310_, size_t v_i_1311_, size_t v_stop_1312_, lean_object* v_b_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v_a_1323_; uint8_t v___x_1329_; 
v___x_1329_ = lean_usize_dec_eq(v_i_1311_, v_stop_1312_);
if (v___x_1329_ == 0)
{
lean_object* v___x_1330_; 
v___x_1330_ = lean_array_uget_borrowed(v_as_1310_, v_i_1311_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v___x_1331_; 
v___x_1331_ = lean_box(0);
v_a_1323_ = v___x_1331_;
goto v___jp_1322_;
}
else
{
lean_object* v_val_1332_; uint8_t v___x_1333_; 
v_val_1332_ = lean_ctor_get(v___x_1330_, 0);
v___x_1333_ = l_Lean_LocalDecl_isLet(v_val_1332_, v___x_1329_);
if (v___x_1333_ == 0)
{
goto v___jp_1327_;
}
else
{
uint8_t v___x_1334_; 
v___x_1334_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1332_);
if (v___x_1334_ == 0)
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = l_Lean_LocalDecl_value(v_val_1332_, v___x_1329_);
v___x_1336_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v___x_1335_, v___y_1318_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1337_; lean_object* v___x_1338_; lean_object* v_givenNames_1339_; lean_object* v_decls_1340_; lean_object* v_valueMap_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1352_; 
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1337_);
lean_dec_ref_known(v___x_1336_, 1);
v___x_1338_ = lean_st_ref_take(v___y_1316_);
v_givenNames_1339_ = lean_ctor_get(v___x_1338_, 0);
v_decls_1340_ = lean_ctor_get(v___x_1338_, 1);
v_valueMap_1341_ = lean_ctor_get(v___x_1338_, 2);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1338_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1343_ = v___x_1338_;
v_isShared_1344_ = v_isSharedCheck_1352_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_valueMap_1341_);
lean_inc(v_decls_1340_);
lean_inc(v_givenNames_1339_);
lean_dec(v___x_1338_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1352_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1349_; 
v___x_1345_ = lean_box(0);
v___x_1346_ = l_Lean_LocalDecl_fvarId(v_val_1332_);
v___x_1347_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_1341_, v_a_1337_, v___x_1346_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 2, v___x_1347_);
v___x_1349_ = v___x_1343_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_givenNames_1339_);
lean_ctor_set(v_reuseFailAlloc_1351_, 1, v_decls_1340_);
lean_ctor_set(v_reuseFailAlloc_1351_, 2, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_st_ref_put(v___y_1316_, v___x_1349_);
v_a_1323_ = v___x_1345_;
goto v___jp_1322_;
}
}
}
else
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1360_; 
v_a_1353_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1355_ = v___x_1336_;
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1336_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1358_; 
if (v_isShared_1356_ == 0)
{
v___x_1358_ = v___x_1355_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_a_1353_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
}
}
else
{
goto v___jp_1327_;
}
}
}
}
else
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1361_, 0, v_b_1313_);
return v___x_1361_;
}
v___jp_1322_:
{
size_t v___x_1324_; size_t v___x_1325_; lean_object* v___x_1326_; 
v___x_1324_ = ((size_t)1ULL);
v___x_1325_ = lean_usize_add(v_i_1311_, v___x_1324_);
v___x_1326_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(v_as_1310_, v___x_1325_, v_stop_1312_, v_a_1323_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_);
return v___x_1326_;
}
v___jp_1327_:
{
lean_object* v___x_1328_; 
v___x_1328_ = lean_box(0);
v_a_1323_ = v___x_1328_;
goto v___jp_1322_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3___boxed(lean_object* v_as_1362_, lean_object* v_i_1363_, lean_object* v_stop_1364_, lean_object* v_b_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
size_t v_i_boxed_1374_; size_t v_stop_boxed_1375_; lean_object* v_res_1376_; 
v_i_boxed_1374_ = lean_unbox_usize(v_i_1363_);
lean_dec(v_i_1363_);
v_stop_boxed_1375_ = lean_unbox_usize(v_stop_1364_);
lean_dec(v_stop_1364_);
v_res_1376_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_as_1362_, v_i_boxed_1374_, v_stop_boxed_1375_, v_b_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec_ref(v_as_1362_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(lean_object* v_x_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
if (lean_obj_tag(v_x_1377_) == 0)
{
lean_object* v_cs_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1400_; 
v_cs_1386_ = lean_ctor_get(v_x_1377_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v_x_1377_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1388_ = v_x_1377_;
v_isShared_1389_ = v_isSharedCheck_1400_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_cs_1386_);
lean_dec(v_x_1377_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1400_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; 
v___x_1390_ = lean_unsigned_to_nat(0u);
v___x_1391_ = lean_array_get_size(v_cs_1386_);
v___x_1392_ = lean_box(0);
v___x_1393_ = lean_nat_dec_lt(v___x_1390_, v___x_1391_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1395_; 
lean_dec_ref(v_cs_1386_);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 0, v___x_1392_);
v___x_1395_ = v___x_1388_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1392_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
else
{
size_t v___x_1397_; size_t v___x_1398_; lean_object* v___x_1399_; 
lean_del_object(v___x_1388_);
v___x_1397_ = ((size_t)0ULL);
v___x_1398_ = lean_usize_of_nat(v___x_1391_);
v___x_1399_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_cs_1386_, v___x_1397_, v___x_1398_, v___x_1392_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
lean_dec_ref(v_cs_1386_);
return v___x_1399_;
}
}
}
else
{
lean_object* v_vs_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1415_; 
v_vs_1401_ = lean_ctor_get(v_x_1377_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v_x_1377_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1403_ = v_x_1377_;
v_isShared_1404_ = v_isSharedCheck_1415_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_vs_1401_);
lean_dec(v_x_1377_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1415_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1405_ = lean_unsigned_to_nat(0u);
v___x_1406_ = lean_array_get_size(v_vs_1401_);
v___x_1407_ = lean_box(0);
v___x_1408_ = lean_nat_dec_lt(v___x_1405_, v___x_1406_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1410_; 
lean_dec_ref(v_vs_1401_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set_tag(v___x_1403_, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1407_);
v___x_1410_ = v___x_1403_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___x_1407_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
else
{
size_t v___x_1412_; size_t v___x_1413_; lean_object* v___x_1414_; 
lean_del_object(v___x_1403_);
v___x_1412_ = ((size_t)0ULL);
v___x_1413_ = lean_usize_of_nat(v___x_1406_);
v___x_1414_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_vs_1401_, v___x_1412_, v___x_1413_, v___x_1407_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
lean_dec_ref(v_vs_1401_);
return v___x_1414_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(lean_object* v_as_1416_, size_t v_i_1417_, size_t v_stop_1418_, lean_object* v_b_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
uint8_t v___x_1428_; 
v___x_1428_ = lean_usize_dec_eq(v_i_1417_, v_stop_1418_);
if (v___x_1428_ == 0)
{
lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1429_ = lean_array_uget_borrowed(v_as_1416_, v_i_1417_);
lean_inc(v___x_1429_);
v___x_1430_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v___x_1429_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; size_t v___x_1432_; size_t v___x_1433_; 
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
lean_inc(v_a_1431_);
lean_dec_ref_known(v___x_1430_, 1);
v___x_1432_ = ((size_t)1ULL);
v___x_1433_ = lean_usize_add(v_i_1417_, v___x_1432_);
v_i_1417_ = v___x_1433_;
v_b_1419_ = v_a_1431_;
goto _start;
}
else
{
return v___x_1430_;
}
}
else
{
lean_object* v___x_1435_; 
v___x_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1435_, 0, v_b_1419_);
return v___x_1435_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_as_1436_, lean_object* v_i_1437_, lean_object* v_stop_1438_, lean_object* v_b_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
size_t v_i_boxed_1448_; size_t v_stop_boxed_1449_; lean_object* v_res_1450_; 
v_i_boxed_1448_ = lean_unbox_usize(v_i_1437_);
lean_dec(v_i_1437_);
v_stop_boxed_1449_ = lean_unbox_usize(v_stop_1438_);
lean_dec(v_stop_1438_);
v_res_1450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_as_1436_, v_i_boxed_1448_, v_stop_boxed_1449_, v_b_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1442_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec_ref(v_as_1436_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_x_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v_x_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
lean_dec(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(lean_object* v_t_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_root_1470_; lean_object* v_tail_1471_; lean_object* v___x_1472_; 
v_root_1470_ = lean_ctor_get(v_t_1461_, 0);
lean_inc_ref(v_root_1470_);
v_tail_1471_ = lean_ctor_get(v_t_1461_, 1);
lean_inc_ref(v_tail_1471_);
lean_dec_ref(v_t_1461_);
v___x_1472_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v_root_1470_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1486_; 
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1486_ == 0)
{
lean_object* v_unused_1487_; 
v_unused_1487_ = lean_ctor_get(v___x_1472_, 0);
lean_dec(v_unused_1487_);
v___x_1474_ = v___x_1472_;
v_isShared_1475_ = v_isSharedCheck_1486_;
goto v_resetjp_1473_;
}
else
{
lean_dec(v___x_1472_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1486_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; uint8_t v___x_1479_; 
v___x_1476_ = lean_unsigned_to_nat(0u);
v___x_1477_ = lean_array_get_size(v_tail_1471_);
v___x_1478_ = lean_box(0);
v___x_1479_ = lean_nat_dec_lt(v___x_1476_, v___x_1477_);
if (v___x_1479_ == 0)
{
lean_object* v___x_1481_; 
lean_dec_ref(v_tail_1471_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 0, v___x_1478_);
v___x_1481_ = v___x_1474_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1478_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
else
{
size_t v___x_1483_; size_t v___x_1484_; lean_object* v___x_1485_; 
lean_del_object(v___x_1474_);
v___x_1483_ = ((size_t)0ULL);
v___x_1484_ = lean_usize_of_nat(v___x_1477_);
v___x_1485_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1471_, v___x_1483_, v___x_1484_, v___x_1478_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
lean_dec_ref(v_tail_1471_);
return v___x_1485_;
}
}
}
else
{
lean_dec_ref(v_tail_1471_);
return v___x_1472_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4___boxed(lean_object* v_t_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v_res_1497_; 
v_res_1497_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(v_t_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec(v___y_1493_);
lean_dec_ref(v___y_1492_);
lean_dec(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
return v_res_1497_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(lean_object* v_x_1499_, size_t v_x_1500_, size_t v_x_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_){
_start:
{
if (lean_obj_tag(v_x_1499_) == 0)
{
lean_object* v_cs_1510_; lean_object* v___x_1511_; size_t v___x_1512_; lean_object* v_j_1513_; lean_object* v___x_1514_; size_t v___x_1515_; size_t v___x_1516_; size_t v___x_1517_; size_t v___x_1518_; size_t v___x_1519_; size_t v___x_1520_; lean_object* v___x_1521_; 
v_cs_1510_ = lean_ctor_get(v_x_1499_, 0);
lean_inc_ref(v_cs_1510_);
lean_dec_ref_known(v_x_1499_, 1);
v___x_1511_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0);
v___x_1512_ = lean_usize_shift_right(v_x_1500_, v_x_1501_);
v_j_1513_ = lean_usize_to_nat(v___x_1512_);
v___x_1514_ = lean_array_get_borrowed(v___x_1511_, v_cs_1510_, v_j_1513_);
v___x_1515_ = ((size_t)1ULL);
v___x_1516_ = lean_usize_shift_left(v___x_1515_, v_x_1501_);
v___x_1517_ = lean_usize_sub(v___x_1516_, v___x_1515_);
v___x_1518_ = lean_usize_land(v_x_1500_, v___x_1517_);
v___x_1519_ = ((size_t)5ULL);
v___x_1520_ = lean_usize_sub(v_x_1501_, v___x_1519_);
lean_inc(v___x_1514_);
v___x_1521_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v___x_1514_, v___x_1518_, v___x_1520_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1536_; 
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1536_ == 0)
{
lean_object* v_unused_1537_; 
v_unused_1537_ = lean_ctor_get(v___x_1521_, 0);
lean_dec(v_unused_1537_);
v___x_1523_ = v___x_1521_;
v_isShared_1524_ = v_isSharedCheck_1536_;
goto v_resetjp_1522_;
}
else
{
lean_dec(v___x_1521_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1536_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; uint8_t v___x_1529_; 
v___x_1525_ = lean_unsigned_to_nat(1u);
v___x_1526_ = lean_nat_add(v_j_1513_, v___x_1525_);
lean_dec(v_j_1513_);
v___x_1527_ = lean_array_get_size(v_cs_1510_);
v___x_1528_ = lean_box(0);
v___x_1529_ = lean_nat_dec_lt(v___x_1526_, v___x_1527_);
if (v___x_1529_ == 0)
{
lean_object* v___x_1531_; 
lean_dec(v___x_1526_);
lean_dec_ref(v_cs_1510_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 0, v___x_1528_);
v___x_1531_ = v___x_1523_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v___x_1528_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
else
{
size_t v___x_1533_; size_t v___x_1534_; lean_object* v___x_1535_; 
lean_del_object(v___x_1523_);
v___x_1533_ = lean_usize_of_nat(v___x_1526_);
lean_dec(v___x_1526_);
v___x_1534_ = lean_usize_of_nat(v___x_1527_);
v___x_1535_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_cs_1510_, v___x_1533_, v___x_1534_, v___x_1528_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_);
lean_dec_ref(v_cs_1510_);
return v___x_1535_;
}
}
}
else
{
lean_dec(v_j_1513_);
lean_dec_ref(v_cs_1510_);
return v___x_1521_;
}
}
else
{
lean_object* v_vs_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1552_; 
v_vs_1538_ = lean_ctor_get(v_x_1499_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v_x_1499_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1540_ = v_x_1499_;
v_isShared_1541_ = v_isSharedCheck_1552_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_vs_1538_);
lean_dec(v_x_1499_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1552_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; uint8_t v___x_1545_; 
v___x_1542_ = lean_usize_to_nat(v_x_1500_);
v___x_1543_ = lean_array_get_size(v_vs_1538_);
v___x_1544_ = lean_box(0);
v___x_1545_ = lean_nat_dec_lt(v___x_1542_, v___x_1543_);
if (v___x_1545_ == 0)
{
lean_object* v___x_1547_; 
lean_dec(v___x_1542_);
lean_dec_ref(v_vs_1538_);
if (v_isShared_1541_ == 0)
{
lean_ctor_set_tag(v___x_1540_, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1544_);
v___x_1547_ = v___x_1540_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v___x_1544_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
else
{
size_t v___x_1549_; size_t v___x_1550_; lean_object* v___x_1551_; 
lean_del_object(v___x_1540_);
v___x_1549_ = lean_usize_of_nat(v___x_1542_);
lean_dec(v___x_1542_);
v___x_1550_ = lean_usize_of_nat(v___x_1543_);
v___x_1551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_vs_1538_, v___x_1549_, v___x_1550_, v___x_1544_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_);
lean_dec_ref(v_vs_1538_);
return v___x_1551_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___boxed(lean_object* v_x_1553_, lean_object* v_x_1554_, lean_object* v_x_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
size_t v_x_9296__boxed_1564_; size_t v_x_9297__boxed_1565_; lean_object* v_res_1566_; 
v_x_9296__boxed_1564_ = lean_unbox_usize(v_x_1554_);
lean_dec(v_x_1554_);
v_x_9297__boxed_1565_ = lean_unbox_usize(v_x_1555_);
lean_dec(v_x_1555_);
v_res_1566_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v_x_1553_, v_x_9296__boxed_1564_, v_x_9297__boxed_1565_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_);
lean_dec(v___y_1562_);
lean_dec_ref(v___y_1561_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec(v___y_1558_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(lean_object* v_t_1567_, lean_object* v_start_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v___x_1577_; uint8_t v___x_1578_; 
v___x_1577_ = lean_unsigned_to_nat(0u);
v___x_1578_ = lean_nat_dec_eq(v_start_1568_, v___x_1577_);
if (v___x_1578_ == 0)
{
lean_object* v_root_1579_; lean_object* v_tail_1580_; size_t v_shift_1581_; lean_object* v_tailOff_1582_; uint8_t v___x_1583_; 
v_root_1579_ = lean_ctor_get(v_t_1567_, 0);
lean_inc_ref(v_root_1579_);
v_tail_1580_ = lean_ctor_get(v_t_1567_, 1);
lean_inc_ref(v_tail_1580_);
v_shift_1581_ = lean_ctor_get_usize(v_t_1567_, 4);
v_tailOff_1582_ = lean_ctor_get(v_t_1567_, 3);
lean_inc(v_tailOff_1582_);
lean_dec_ref(v_t_1567_);
v___x_1583_ = lean_nat_dec_le(v_tailOff_1582_, v_start_1568_);
if (v___x_1583_ == 0)
{
size_t v___x_1584_; lean_object* v___x_1585_; 
lean_dec(v_tailOff_1582_);
v___x_1584_ = lean_usize_of_nat(v_start_1568_);
v___x_1585_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v_root_1579_, v___x_1584_, v_shift_1581_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1598_; 
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1598_ == 0)
{
lean_object* v_unused_1599_; 
v_unused_1599_ = lean_ctor_get(v___x_1585_, 0);
lean_dec(v_unused_1599_);
v___x_1587_ = v___x_1585_;
v_isShared_1588_ = v_isSharedCheck_1598_;
goto v_resetjp_1586_;
}
else
{
lean_dec(v___x_1585_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1598_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; uint8_t v___x_1591_; 
v___x_1589_ = lean_array_get_size(v_tail_1580_);
v___x_1590_ = lean_box(0);
v___x_1591_ = lean_nat_dec_lt(v___x_1577_, v___x_1589_);
if (v___x_1591_ == 0)
{
lean_object* v___x_1593_; 
lean_dec_ref(v_tail_1580_);
if (v_isShared_1588_ == 0)
{
lean_ctor_set(v___x_1587_, 0, v___x_1590_);
v___x_1593_ = v___x_1587_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1590_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
else
{
size_t v___x_1595_; size_t v___x_1596_; lean_object* v___x_1597_; 
lean_del_object(v___x_1587_);
v___x_1595_ = ((size_t)0ULL);
v___x_1596_ = lean_usize_of_nat(v___x_1589_);
v___x_1597_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1580_, v___x_1595_, v___x_1596_, v___x_1590_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
lean_dec_ref(v_tail_1580_);
return v___x_1597_;
}
}
}
else
{
lean_dec_ref(v_tail_1580_);
return v___x_1585_;
}
}
else
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; uint8_t v___x_1603_; 
lean_dec_ref(v_root_1579_);
v___x_1600_ = lean_nat_sub(v_start_1568_, v_tailOff_1582_);
lean_dec(v_tailOff_1582_);
v___x_1601_ = lean_array_get_size(v_tail_1580_);
v___x_1602_ = lean_box(0);
v___x_1603_ = lean_nat_dec_lt(v___x_1600_, v___x_1601_);
if (v___x_1603_ == 0)
{
lean_object* v___x_1604_; 
lean_dec(v___x_1600_);
lean_dec_ref(v_tail_1580_);
v___x_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1602_);
return v___x_1604_;
}
else
{
size_t v___x_1605_; size_t v___x_1606_; lean_object* v___x_1607_; 
v___x_1605_ = lean_usize_of_nat(v___x_1600_);
lean_dec(v___x_1600_);
v___x_1606_ = lean_usize_of_nat(v___x_1601_);
v___x_1607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1580_, v___x_1605_, v___x_1606_, v___x_1602_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
lean_dec_ref(v_tail_1580_);
return v___x_1607_;
}
}
}
else
{
lean_object* v___x_1608_; 
v___x_1608_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(v_t_1567_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
return v___x_1608_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1___boxed(lean_object* v_t_1609_, lean_object* v_start_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(v_t_1609_, v_start_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec(v_start_1610_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(lean_object* v_lctx_1620_, lean_object* v_start_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v_decls_1630_; lean_object* v___x_1631_; 
v_decls_1630_ = lean_ctor_get(v_lctx_1620_, 1);
lean_inc_ref(v_decls_1630_);
lean_dec_ref(v_lctx_1620_);
v___x_1631_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(v_decls_1630_, v_start_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1___boxed(lean_object* v_lctx_1632_, lean_object* v_start_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(v_lctx_1632_, v_start_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v_start_1633_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap(lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_){
_start:
{
lean_object* v_lctx_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; 
v_lctx_1651_ = lean_ctor_get(v_a_1646_, 2);
v___x_1652_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_lctx_1651_);
v___x_1653_ = l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(v_lctx_1651_, v___x_1652_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap___boxed(lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l_Lean_Meta_ExtractLets_initializeValueMap(v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_, v_a_1658_, v_a_1659_, v_a_1660_);
lean_dec(v_a_1660_);
lean_dec_ref(v_a_1659_);
lean_dec(v_a_1658_);
lean_dec_ref(v_a_1657_);
lean_dec(v_a_1656_);
lean_dec(v_a_1655_);
lean_dec_ref(v_a_1654_);
return v_res_1662_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_containsLet(lean_object* v_e_1664_){
_start:
{
lean_object* v___f_1665_; lean_object* v___x_1666_; 
v___f_1665_ = ((lean_object*)(l_Lean_Meta_ExtractLets_containsLet___closed__0));
v___x_1666_ = lean_find_expr(v___f_1665_, v_e_1664_);
if (lean_obj_tag(v___x_1666_) == 0)
{
uint8_t v___x_1667_; 
v___x_1667_ = 0;
return v___x_1667_;
}
else
{
uint8_t v___x_1668_; 
lean_dec_ref_known(v___x_1666_, 1);
v___x_1668_ = 1;
return v___x_1668_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_containsLet___boxed(lean_object* v_e_1669_){
_start:
{
uint8_t v_res_1670_; lean_object* v_r_1671_; 
v_res_1670_ = l_Lean_Meta_ExtractLets_containsLet(v_e_1669_);
lean_dec_ref(v_e_1669_);
v_r_1671_ = lean_box(v_res_1670_);
return v_r_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(lean_object* v_k_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v_b_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_){
_start:
{
lean_object* v___x_1682_; 
lean_inc(v___y_1680_);
lean_inc_ref(v___y_1679_);
lean_inc(v___y_1678_);
lean_inc_ref(v___y_1677_);
lean_inc(v___y_1675_);
lean_inc(v___y_1674_);
lean_inc_ref(v___y_1673_);
v___x_1682_ = lean_apply_9(v_k_1672_, v_b_1676_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, lean_box(0));
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed(lean_object* v_k_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v_b_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(v_k_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v_b_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v___y_1686_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(lean_object* v_name_1694_, uint8_t v_bi_1695_, lean_object* v_type_1696_, lean_object* v_k_1697_, uint8_t v_kind_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v___f_1707_; lean_object* v___x_1708_; 
lean_inc(v___y_1701_);
lean_inc(v___y_1700_);
lean_inc_ref(v___y_1699_);
v___f_1707_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1707_, 0, v_k_1697_);
lean_closure_set(v___f_1707_, 1, v___y_1699_);
lean_closure_set(v___f_1707_, 2, v___y_1700_);
lean_closure_set(v___f_1707_, 3, v___y_1701_);
v___x_1708_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1694_, v_bi_1695_, v_type_1696_, v___f_1707_, v_kind_1698_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_);
if (lean_obj_tag(v___x_1708_) == 0)
{
return v___x_1708_;
}
else
{
lean_object* v_a_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1716_; 
v_a_1709_ = lean_ctor_get(v___x_1708_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1711_ = v___x_1708_;
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_a_1709_);
lean_dec(v___x_1708_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1714_; 
if (v_isShared_1712_ == 0)
{
v___x_1714_ = v___x_1711_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_a_1709_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___boxed(lean_object* v_name_1717_, lean_object* v_bi_1718_, lean_object* v_type_1719_, lean_object* v_k_1720_, lean_object* v_kind_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
uint8_t v_bi_boxed_1730_; uint8_t v_kind_boxed_1731_; lean_object* v_res_1732_; 
v_bi_boxed_1730_ = lean_unbox(v_bi_1718_);
v_kind_boxed_1731_ = lean_unbox(v_kind_1721_);
v_res_1732_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_name_1717_, v_bi_boxed_1730_, v_type_1719_, v_k_1720_, v_kind_boxed_1731_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
lean_dec(v___y_1724_);
lean_dec(v___y_1723_);
lean_dec_ref(v___y_1722_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(lean_object* v_00_u03b1_1733_, lean_object* v_name_1734_, uint8_t v_bi_1735_, lean_object* v_type_1736_, lean_object* v_k_1737_, uint8_t v_kind_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_name_1734_, v_bi_1735_, v_type_1736_, v_k_1737_, v_kind_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___boxed(lean_object* v_00_u03b1_1748_, lean_object* v_name_1749_, lean_object* v_bi_1750_, lean_object* v_type_1751_, lean_object* v_k_1752_, lean_object* v_kind_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
uint8_t v_bi_boxed_1762_; uint8_t v_kind_boxed_1763_; lean_object* v_res_1764_; 
v_bi_boxed_1762_ = lean_unbox(v_bi_1750_);
v_kind_boxed_1763_ = lean_unbox(v_kind_1753_);
v_res_1764_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(v_00_u03b1_1748_, v_name_1749_, v_bi_boxed_1762_, v_type_1751_, v_k_1752_, v_kind_boxed_1763_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v___y_1756_);
lean_dec(v___y_1755_);
lean_dec_ref(v___y_1754_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4(uint8_t v_types_1765_, lean_object* v_e_1766_, lean_object* v___f_1767_, lean_object* v_____r_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_){
_start:
{
if (v_types_1765_ == 0)
{
lean_object* v___x_1777_; 
lean_inc_ref(v_e_1766_);
v___x_1777_ = l_Lean_Meta_isType(v_e_1766_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1788_; 
v_a_1778_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1780_ = v___x_1777_;
v_isShared_1781_ = v_isSharedCheck_1788_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1777_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1788_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
uint8_t v___x_1782_; 
v___x_1782_ = lean_unbox(v_a_1778_);
lean_dec(v_a_1778_);
if (v___x_1782_ == 0)
{
lean_object* v___x_1783_; lean_object* v___x_1784_; 
lean_del_object(v___x_1780_);
lean_dec_ref(v_e_1766_);
v___x_1783_ = lean_box(0);
lean_inc(v___y_1775_);
lean_inc_ref(v___y_1774_);
lean_inc(v___y_1773_);
lean_inc_ref(v___y_1772_);
lean_inc(v___y_1771_);
lean_inc(v___y_1770_);
lean_inc_ref(v___y_1769_);
v___x_1784_ = lean_apply_9(v___f_1767_, v___x_1783_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, lean_box(0));
return v___x_1784_;
}
else
{
lean_object* v___x_1786_; 
lean_dec_ref(v___f_1767_);
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 0, v_e_1766_);
v___x_1786_ = v___x_1780_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_e_1766_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1796_; 
lean_dec_ref(v___f_1767_);
lean_dec_ref(v_e_1766_);
v_a_1789_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1791_ = v___x_1777_;
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1777_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_a_1789_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
}
else
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
lean_dec_ref(v_e_1766_);
v___x_1797_ = lean_box(0);
lean_inc(v___y_1775_);
lean_inc_ref(v___y_1774_);
lean_inc(v___y_1773_);
lean_inc_ref(v___y_1772_);
lean_inc(v___y_1771_);
lean_inc(v___y_1770_);
lean_inc_ref(v___y_1769_);
v___x_1798_ = lean_apply_9(v___f_1767_, v___x_1797_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, lean_box(0));
return v___x_1798_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed(lean_object* v_types_1799_, lean_object* v_e_1800_, lean_object* v___f_1801_, lean_object* v_____r_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_){
_start:
{
uint8_t v_types_boxed_1811_; lean_object* v_res_1812_; 
v_types_boxed_1811_ = lean_unbox(v_types_1799_);
v_res_1812_ = l_Lean_Meta_ExtractLets_extractCore___lam__4(v_types_boxed_1811_, v_e_1800_, v___f_1801_, v_____r_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_);
lean_dec(v___y_1809_);
lean_dec_ref(v___y_1808_);
lean_dec(v___y_1807_);
lean_dec_ref(v___y_1806_);
lean_dec(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
return v_res_1812_;
}
}
LEAN_EXPORT uint8_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(uint8_t v___y_1813_, uint8_t v___y_1814_){
_start:
{
if (v___y_1814_ == 0)
{
if (v___y_1813_ == 0)
{
uint8_t v___x_1815_; 
v___x_1815_ = 1;
return v___x_1815_;
}
else
{
return v___y_1814_;
}
}
else
{
return v___y_1813_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed(lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
uint8_t v___y_41877__boxed_1818_; uint8_t v___y_41878__boxed_1819_; uint8_t v_res_1820_; lean_object* v_r_1821_; 
v___y_41877__boxed_1818_ = lean_unbox(v___y_1816_);
v___y_41878__boxed_1819_ = lean_unbox(v___y_1817_);
v_res_1820_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(v___y_41877__boxed_1818_, v___y_41878__boxed_1819_);
v_r_1821_ = lean_box(v_res_1820_);
return v_r_1821_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1822_; 
v___x_1822_ = l_instMonadEIO___redArg();
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(lean_object* v_msg_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v_toApplicative_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1913_; 
v___x_1839_ = lean_box(0);
v___x_1840_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0);
v___x_1841_ = l_StateRefT_x27_instMonad___redArg(v___x_1840_);
v_toApplicative_1842_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1913_ == 0)
{
lean_object* v_unused_1914_; 
v_unused_1914_ = lean_ctor_get(v___x_1841_, 1);
lean_dec(v_unused_1914_);
v___x_1844_ = v___x_1841_;
v_isShared_1845_ = v_isSharedCheck_1913_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_toApplicative_1842_);
lean_dec(v___x_1841_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1913_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v_toFunctor_1846_; lean_object* v_toSeq_1847_; lean_object* v_toSeqLeft_1848_; lean_object* v_toSeqRight_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1911_; 
v_toFunctor_1846_ = lean_ctor_get(v_toApplicative_1842_, 0);
v_toSeq_1847_ = lean_ctor_get(v_toApplicative_1842_, 2);
v_toSeqLeft_1848_ = lean_ctor_get(v_toApplicative_1842_, 3);
v_toSeqRight_1849_ = lean_ctor_get(v_toApplicative_1842_, 4);
v_isSharedCheck_1911_ = !lean_is_exclusive(v_toApplicative_1842_);
if (v_isSharedCheck_1911_ == 0)
{
lean_object* v_unused_1912_; 
v_unused_1912_ = lean_ctor_get(v_toApplicative_1842_, 1);
lean_dec(v_unused_1912_);
v___x_1851_ = v_toApplicative_1842_;
v_isShared_1852_ = v_isSharedCheck_1911_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_toSeqRight_1849_);
lean_inc(v_toSeqLeft_1848_);
lean_inc(v_toSeq_1847_);
lean_inc(v_toFunctor_1846_);
lean_dec(v_toApplicative_1842_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1911_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___f_1853_; lean_object* v___f_1854_; lean_object* v___f_1855_; lean_object* v___f_1856_; lean_object* v___x_1857_; lean_object* v___f_1858_; lean_object* v___f_1859_; lean_object* v___f_1860_; lean_object* v___x_1862_; 
v___f_1853_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1));
v___f_1854_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2));
lean_inc_ref(v_toFunctor_1846_);
v___f_1855_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1855_, 0, v_toFunctor_1846_);
v___f_1856_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1856_, 0, v_toFunctor_1846_);
v___x_1857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1857_, 0, v___f_1855_);
lean_ctor_set(v___x_1857_, 1, v___f_1856_);
v___f_1858_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1858_, 0, v_toSeqRight_1849_);
v___f_1859_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1859_, 0, v_toSeqLeft_1848_);
v___f_1860_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1860_, 0, v_toSeq_1847_);
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 4, v___f_1858_);
lean_ctor_set(v___x_1851_, 3, v___f_1859_);
lean_ctor_set(v___x_1851_, 2, v___f_1860_);
lean_ctor_set(v___x_1851_, 1, v___f_1853_);
lean_ctor_set(v___x_1851_, 0, v___x_1857_);
v___x_1862_ = v___x_1851_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1857_);
lean_ctor_set(v_reuseFailAlloc_1910_, 1, v___f_1853_);
lean_ctor_set(v_reuseFailAlloc_1910_, 2, v___f_1860_);
lean_ctor_set(v_reuseFailAlloc_1910_, 3, v___f_1859_);
lean_ctor_set(v_reuseFailAlloc_1910_, 4, v___f_1858_);
v___x_1862_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
lean_object* v___x_1864_; 
if (v_isShared_1845_ == 0)
{
lean_ctor_set(v___x_1844_, 1, v___f_1854_);
lean_ctor_set(v___x_1844_, 0, v___x_1862_);
v___x_1864_ = v___x_1844_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1862_);
lean_ctor_set(v_reuseFailAlloc_1909_, 1, v___f_1854_);
v___x_1864_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
lean_object* v___x_1865_; lean_object* v_toApplicative_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1907_; 
v___x_1865_ = l_StateRefT_x27_instMonad___redArg(v___x_1864_);
v_toApplicative_1866_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1907_ == 0)
{
lean_object* v_unused_1908_; 
v_unused_1908_ = lean_ctor_get(v___x_1865_, 1);
lean_dec(v_unused_1908_);
v___x_1868_ = v___x_1865_;
v_isShared_1869_ = v_isSharedCheck_1907_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_toApplicative_1866_);
lean_dec(v___x_1865_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1907_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v_toFunctor_1870_; lean_object* v_toSeq_1871_; lean_object* v_toSeqLeft_1872_; lean_object* v_toSeqRight_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1905_; 
v_toFunctor_1870_ = lean_ctor_get(v_toApplicative_1866_, 0);
v_toSeq_1871_ = lean_ctor_get(v_toApplicative_1866_, 2);
v_toSeqLeft_1872_ = lean_ctor_get(v_toApplicative_1866_, 3);
v_toSeqRight_1873_ = lean_ctor_get(v_toApplicative_1866_, 4);
v_isSharedCheck_1905_ = !lean_is_exclusive(v_toApplicative_1866_);
if (v_isSharedCheck_1905_ == 0)
{
lean_object* v_unused_1906_; 
v_unused_1906_ = lean_ctor_get(v_toApplicative_1866_, 1);
lean_dec(v_unused_1906_);
v___x_1875_ = v_toApplicative_1866_;
v_isShared_1876_ = v_isSharedCheck_1905_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_toSeqRight_1873_);
lean_inc(v_toSeqLeft_1872_);
lean_inc(v_toSeq_1871_);
lean_inc(v_toFunctor_1870_);
lean_dec(v_toApplicative_1866_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1905_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___f_1877_; lean_object* v___f_1878_; lean_object* v___x_1879_; lean_object* v___f_1880_; lean_object* v___f_1881_; lean_object* v___x_1882_; lean_object* v___f_1883_; lean_object* v___f_1884_; lean_object* v___f_1885_; lean_object* v___f_1886_; lean_object* v___f_1887_; lean_object* v___x_1888_; lean_object* v___f_1889_; lean_object* v___f_1890_; lean_object* v___f_1891_; lean_object* v___x_1893_; 
v___f_1877_ = lean_alloc_closure((void*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed), 2, 0);
v___f_1878_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1878_, 0, v___f_1877_);
v___x_1879_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3));
v___f_1880_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1880_, 0, v___f_1878_);
lean_closure_set(v___f_1880_, 1, v___x_1879_);
v___f_1881_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4));
v___x_1882_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5));
v___f_1883_ = lean_alloc_closure((void*)(l_instHashableProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1883_, 0, v___f_1881_);
lean_closure_set(v___f_1883_, 1, v___x_1882_);
v___f_1884_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6));
v___f_1885_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7));
lean_inc_ref(v_toFunctor_1870_);
v___f_1886_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1886_, 0, v_toFunctor_1870_);
v___f_1887_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1887_, 0, v_toFunctor_1870_);
v___x_1888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1888_, 0, v___f_1886_);
lean_ctor_set(v___x_1888_, 1, v___f_1887_);
v___f_1889_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1889_, 0, v_toSeqRight_1873_);
v___f_1890_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1890_, 0, v_toSeqLeft_1872_);
v___f_1891_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1891_, 0, v_toSeq_1871_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 4, v___f_1889_);
lean_ctor_set(v___x_1875_, 3, v___f_1890_);
lean_ctor_set(v___x_1875_, 2, v___f_1891_);
lean_ctor_set(v___x_1875_, 1, v___f_1884_);
lean_ctor_set(v___x_1875_, 0, v___x_1888_);
v___x_1893_ = v___x_1875_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1888_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v___f_1884_);
lean_ctor_set(v_reuseFailAlloc_1904_, 2, v___f_1891_);
lean_ctor_set(v_reuseFailAlloc_1904_, 3, v___f_1890_);
lean_ctor_set(v_reuseFailAlloc_1904_, 4, v___f_1889_);
v___x_1893_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
lean_object* v___x_1895_; 
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 1, v___f_1885_);
lean_ctor_set(v___x_1868_, 0, v___x_1893_);
v___x_1895_ = v___x_1868_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1893_);
lean_ctor_set(v_reuseFailAlloc_1903_, 1, v___f_1885_);
v___x_1895_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___f_1900_; lean_object* v___x_38719__overap_1901_; lean_object* v___x_1902_; 
v___x_1896_ = l_StateRefT_x27_instMonad___redArg(v___x_1895_);
v___x_1897_ = l_Lean_MonadCacheT_instMonad___redArg(v___x_1839_, v___f_1880_, v___f_1883_, v___x_1896_);
v___x_1898_ = l_Lean_instInhabitedExpr;
v___x_1899_ = l_instInhabitedOfMonad___redArg(v___x_1897_, v___x_1898_);
v___f_1900_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1900_, 0, v___x_1899_);
v___x_38719__overap_1901_ = lean_panic_fn_borrowed(v___f_1900_, v_msg_1830_);
lean_dec_ref(v___f_1900_);
lean_inc(v___y_1837_);
lean_inc_ref(v___y_1836_);
lean_inc(v___y_1835_);
lean_inc_ref(v___y_1834_);
lean_inc(v___y_1833_);
lean_inc(v___y_1832_);
lean_inc_ref(v___y_1831_);
v___x_1902_ = lean_apply_8(v___x_38719__overap_1901_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, lean_box(0));
return v___x_1902_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___boxed(lean_object* v_msg_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v_msg_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec(v___y_1918_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0(lean_object* v_binderType_1925_, lean_object* v_binderName_1926_, uint8_t v_binderInfo_1927_, lean_object* v_body_1928_, lean_object* v_e_1929_, lean_object* v_t_1930_, lean_object* v_b_1931_){
_start:
{
size_t v___x_1932_; size_t v___x_1933_; uint8_t v___x_1934_; 
v___x_1932_ = lean_ptr_addr(v_binderType_1925_);
v___x_1933_ = lean_ptr_addr(v_t_1930_);
v___x_1934_ = lean_usize_dec_eq(v___x_1932_, v___x_1933_);
if (v___x_1934_ == 0)
{
lean_object* v___x_1935_; 
v___x_1935_ = l_Lean_Expr_lam___override(v_binderName_1926_, v_t_1930_, v_b_1931_, v_binderInfo_1927_);
return v___x_1935_;
}
else
{
size_t v___x_1936_; size_t v___x_1937_; uint8_t v___x_1938_; 
v___x_1936_ = lean_ptr_addr(v_body_1928_);
v___x_1937_ = lean_ptr_addr(v_b_1931_);
v___x_1938_ = lean_usize_dec_eq(v___x_1936_, v___x_1937_);
if (v___x_1938_ == 0)
{
lean_object* v___x_1939_; 
v___x_1939_ = l_Lean_Expr_lam___override(v_binderName_1926_, v_t_1930_, v_b_1931_, v_binderInfo_1927_);
return v___x_1939_;
}
else
{
uint8_t v___x_1940_; 
v___x_1940_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1927_, v_binderInfo_1927_);
if (v___x_1940_ == 0)
{
lean_object* v___x_1941_; 
v___x_1941_ = l_Lean_Expr_lam___override(v_binderName_1926_, v_t_1930_, v_b_1931_, v_binderInfo_1927_);
return v___x_1941_;
}
else
{
lean_dec_ref(v_b_1931_);
lean_dec_ref(v_t_1930_);
lean_dec(v_binderName_1926_);
lean_inc_ref(v_e_1929_);
return v_e_1929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed(lean_object* v_binderType_1942_, lean_object* v_binderName_1943_, lean_object* v_binderInfo_1944_, lean_object* v_body_1945_, lean_object* v_e_1946_, lean_object* v_t_1947_, lean_object* v_b_1948_){
_start:
{
uint8_t v_binderInfo_42065__boxed_1949_; lean_object* v_res_1950_; 
v_binderInfo_42065__boxed_1949_ = lean_unbox(v_binderInfo_1944_);
v_res_1950_ = l_Lean_Meta_ExtractLets_extractCore___lam__0(v_binderType_1942_, v_binderName_1943_, v_binderInfo_42065__boxed_1949_, v_body_1945_, v_e_1946_, v_t_1947_, v_b_1948_);
lean_dec_ref(v_e_1946_);
lean_dec_ref(v_body_1945_);
lean_dec_ref(v_binderType_1942_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1(lean_object* v_binderType_1951_, lean_object* v_binderName_1952_, uint8_t v_binderInfo_1953_, lean_object* v_body_1954_, lean_object* v_e_1955_, lean_object* v_t_1956_, lean_object* v_b_1957_){
_start:
{
size_t v___x_1958_; size_t v___x_1959_; uint8_t v___x_1960_; 
v___x_1958_ = lean_ptr_addr(v_binderType_1951_);
v___x_1959_ = lean_ptr_addr(v_t_1956_);
v___x_1960_ = lean_usize_dec_eq(v___x_1958_, v___x_1959_);
if (v___x_1960_ == 0)
{
lean_object* v___x_1961_; 
v___x_1961_ = l_Lean_Expr_forallE___override(v_binderName_1952_, v_t_1956_, v_b_1957_, v_binderInfo_1953_);
return v___x_1961_;
}
else
{
size_t v___x_1962_; size_t v___x_1963_; uint8_t v___x_1964_; 
v___x_1962_ = lean_ptr_addr(v_body_1954_);
v___x_1963_ = lean_ptr_addr(v_b_1957_);
v___x_1964_ = lean_usize_dec_eq(v___x_1962_, v___x_1963_);
if (v___x_1964_ == 0)
{
lean_object* v___x_1965_; 
v___x_1965_ = l_Lean_Expr_forallE___override(v_binderName_1952_, v_t_1956_, v_b_1957_, v_binderInfo_1953_);
return v___x_1965_;
}
else
{
uint8_t v___x_1966_; 
v___x_1966_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1953_, v_binderInfo_1953_);
if (v___x_1966_ == 0)
{
lean_object* v___x_1967_; 
v___x_1967_ = l_Lean_Expr_forallE___override(v_binderName_1952_, v_t_1956_, v_b_1957_, v_binderInfo_1953_);
return v___x_1967_;
}
else
{
lean_dec_ref(v_b_1957_);
lean_dec_ref(v_t_1956_);
lean_dec(v_binderName_1952_);
lean_inc_ref(v_e_1955_);
return v_e_1955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed(lean_object* v_binderType_1968_, lean_object* v_binderName_1969_, lean_object* v_binderInfo_1970_, lean_object* v_body_1971_, lean_object* v_e_1972_, lean_object* v_t_1973_, lean_object* v_b_1974_){
_start:
{
uint8_t v_binderInfo_42097__boxed_1975_; lean_object* v_res_1976_; 
v_binderInfo_42097__boxed_1975_ = lean_unbox(v_binderInfo_1970_);
v_res_1976_ = l_Lean_Meta_ExtractLets_extractCore___lam__1(v_binderType_1968_, v_binderName_1969_, v_binderInfo_42097__boxed_1975_, v_body_1971_, v_e_1972_, v_t_1973_, v_b_1974_);
lean_dec_ref(v_e_1972_);
lean_dec_ref(v_body_1971_);
lean_dec_ref(v_binderType_1968_);
return v_res_1976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(lean_object* v_name_1977_, lean_object* v_type_1978_, lean_object* v_val_1979_, lean_object* v_k_1980_, uint8_t v_nondep_1981_, uint8_t v_kind_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_){
_start:
{
lean_object* v___f_1991_; lean_object* v___x_1992_; 
lean_inc(v___y_1985_);
lean_inc(v___y_1984_);
lean_inc_ref(v___y_1983_);
v___f_1991_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1991_, 0, v_k_1980_);
lean_closure_set(v___f_1991_, 1, v___y_1983_);
lean_closure_set(v___f_1991_, 2, v___y_1984_);
lean_closure_set(v___f_1991_, 3, v___y_1985_);
v___x_1992_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1977_, v_type_1978_, v_val_1979_, v___f_1991_, v_nondep_1981_, v_kind_1982_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_);
if (lean_obj_tag(v___x_1992_) == 0)
{
return v___x_1992_;
}
else
{
lean_object* v_a_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2000_; 
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2000_ == 0)
{
v___x_1995_ = v___x_1992_;
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_a_1993_);
lean_dec(v___x_1992_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1996_ == 0)
{
v___x_1998_ = v___x_1995_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v_a_1993_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg___boxed(lean_object* v_name_2001_, lean_object* v_type_2002_, lean_object* v_val_2003_, lean_object* v_k_2004_, lean_object* v_nondep_2005_, lean_object* v_kind_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
uint8_t v_nondep_boxed_2015_; uint8_t v_kind_boxed_2016_; lean_object* v_res_2017_; 
v_nondep_boxed_2015_ = lean_unbox(v_nondep_2005_);
v_kind_boxed_2016_ = lean_unbox(v_kind_2006_);
v_res_2017_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_2001_, v_type_2002_, v_val_2003_, v_k_2004_, v_nondep_boxed_2015_, v_kind_boxed_2016_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v___y_2009_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(lean_object* v_msg_2018_){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = l_Lean_instInhabitedExpr;
v___x_2020_ = lean_panic_fn_borrowed(v___x_2019_, v_msg_2018_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(lean_object* v_a_2021_, lean_object* v_x_2022_){
_start:
{
if (lean_obj_tag(v_x_2022_) == 0)
{
lean_object* v___x_2023_; 
v___x_2023_ = lean_box(0);
return v___x_2023_;
}
else
{
lean_object* v_key_2024_; lean_object* v_value_2025_; lean_object* v_tail_2026_; uint8_t v___x_2027_; 
v_key_2024_ = lean_ctor_get(v_x_2022_, 0);
v_value_2025_ = lean_ctor_get(v_x_2022_, 1);
v_tail_2026_ = lean_ctor_get(v_x_2022_, 2);
v___x_2027_ = l_Lean_ExprStructEq_beq(v_key_2024_, v_a_2021_);
if (v___x_2027_ == 0)
{
v_x_2022_ = v_tail_2026_;
goto _start;
}
else
{
lean_object* v___x_2029_; 
lean_inc(v_value_2025_);
v___x_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2029_, 0, v_value_2025_);
return v___x_2029_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg___boxed(lean_object* v_a_2030_, lean_object* v_x_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_2030_, v_x_2031_);
lean_dec(v_x_2031_);
lean_dec_ref(v_a_2030_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(lean_object* v_m_2033_, lean_object* v_a_2034_){
_start:
{
lean_object* v_buckets_2035_; lean_object* v___x_2036_; uint64_t v___x_2037_; uint64_t v___x_2038_; uint64_t v___x_2039_; uint64_t v_fold_2040_; uint64_t v___x_2041_; uint64_t v___x_2042_; uint64_t v___x_2043_; size_t v___x_2044_; size_t v___x_2045_; size_t v___x_2046_; size_t v___x_2047_; size_t v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v_buckets_2035_ = lean_ctor_get(v_m_2033_, 1);
v___x_2036_ = lean_array_get_size(v_buckets_2035_);
v___x_2037_ = l_Lean_ExprStructEq_hash(v_a_2034_);
v___x_2038_ = 32ULL;
v___x_2039_ = lean_uint64_shift_right(v___x_2037_, v___x_2038_);
v_fold_2040_ = lean_uint64_xor(v___x_2037_, v___x_2039_);
v___x_2041_ = 16ULL;
v___x_2042_ = lean_uint64_shift_right(v_fold_2040_, v___x_2041_);
v___x_2043_ = lean_uint64_xor(v_fold_2040_, v___x_2042_);
v___x_2044_ = lean_uint64_to_usize(v___x_2043_);
v___x_2045_ = lean_usize_of_nat(v___x_2036_);
v___x_2046_ = ((size_t)1ULL);
v___x_2047_ = lean_usize_sub(v___x_2045_, v___x_2046_);
v___x_2048_ = lean_usize_land(v___x_2044_, v___x_2047_);
v___x_2049_ = lean_array_uget_borrowed(v_buckets_2035_, v___x_2048_);
v___x_2050_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_2034_, v___x_2049_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg___boxed(lean_object* v_m_2051_, lean_object* v_a_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_2051_, v_a_2052_);
lean_dec_ref(v_a_2052_);
lean_dec_ref(v_m_2051_);
return v_res_2053_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(lean_object* v_a_2054_, lean_object* v_x_2055_){
_start:
{
if (lean_obj_tag(v_x_2055_) == 0)
{
uint8_t v___x_2056_; 
v___x_2056_ = 0;
return v___x_2056_;
}
else
{
lean_object* v_key_2057_; lean_object* v_tail_2058_; lean_object* v_fst_2059_; lean_object* v_snd_2060_; lean_object* v_fst_2061_; lean_object* v_snd_2062_; uint8_t v___x_2066_; 
v_key_2057_ = lean_ctor_get(v_x_2055_, 0);
v_tail_2058_ = lean_ctor_get(v_x_2055_, 2);
v_fst_2059_ = lean_ctor_get(v_key_2057_, 0);
v_snd_2060_ = lean_ctor_get(v_key_2057_, 1);
v_fst_2061_ = lean_ctor_get(v_a_2054_, 0);
v_snd_2062_ = lean_ctor_get(v_a_2054_, 1);
v___x_2066_ = lean_unbox(v_fst_2061_);
if (v___x_2066_ == 0)
{
uint8_t v___x_2067_; 
v___x_2067_ = lean_unbox(v_fst_2059_);
if (v___x_2067_ == 0)
{
goto v___jp_2063_;
}
else
{
v_x_2055_ = v_tail_2058_;
goto _start;
}
}
else
{
uint8_t v___x_2069_; 
v___x_2069_ = lean_unbox(v_fst_2059_);
if (v___x_2069_ == 0)
{
v_x_2055_ = v_tail_2058_;
goto _start;
}
else
{
goto v___jp_2063_;
}
}
v___jp_2063_:
{
uint8_t v___x_2064_; 
v___x_2064_ = l_Lean_ExprStructEq_beq(v_snd_2060_, v_snd_2062_);
if (v___x_2064_ == 0)
{
v_x_2055_ = v_tail_2058_;
goto _start;
}
else
{
return v___x_2064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg___boxed(lean_object* v_a_2071_, lean_object* v_x_2072_){
_start:
{
uint8_t v_res_2073_; lean_object* v_r_2074_; 
v_res_2073_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2071_, v_x_2072_);
lean_dec(v_x_2072_);
lean_dec_ref(v_a_2071_);
v_r_2074_ = lean_box(v_res_2073_);
return v_r_2074_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(lean_object* v_a_2075_, lean_object* v_b_2076_, lean_object* v_x_2077_){
_start:
{
if (lean_obj_tag(v_x_2077_) == 0)
{
lean_dec(v_b_2076_);
lean_dec_ref(v_a_2075_);
return v_x_2077_;
}
else
{
lean_object* v_key_2078_; lean_object* v_value_2079_; lean_object* v_tail_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2099_; 
v_key_2078_ = lean_ctor_get(v_x_2077_, 0);
v_value_2079_ = lean_ctor_get(v_x_2077_, 1);
v_tail_2080_ = lean_ctor_get(v_x_2077_, 2);
v_isSharedCheck_2099_ = !lean_is_exclusive(v_x_2077_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2082_ = v_x_2077_;
v_isShared_2083_ = v_isSharedCheck_2099_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_tail_2080_);
lean_inc(v_value_2079_);
lean_inc(v_key_2078_);
lean_dec(v_x_2077_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2099_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v_fst_2089_; lean_object* v_snd_2090_; lean_object* v_fst_2091_; lean_object* v_snd_2092_; uint8_t v___x_2096_; 
v_fst_2089_ = lean_ctor_get(v_key_2078_, 0);
v_snd_2090_ = lean_ctor_get(v_key_2078_, 1);
v_fst_2091_ = lean_ctor_get(v_a_2075_, 0);
v_snd_2092_ = lean_ctor_get(v_a_2075_, 1);
v___x_2096_ = lean_unbox(v_fst_2091_);
if (v___x_2096_ == 0)
{
uint8_t v___x_2097_; 
v___x_2097_ = lean_unbox(v_fst_2089_);
if (v___x_2097_ == 0)
{
goto v___jp_2093_;
}
else
{
goto v___jp_2084_;
}
}
else
{
uint8_t v___x_2098_; 
v___x_2098_ = lean_unbox(v_fst_2089_);
if (v___x_2098_ == 0)
{
goto v___jp_2084_;
}
else
{
goto v___jp_2093_;
}
}
v___jp_2084_:
{
lean_object* v___x_2085_; lean_object* v___x_2087_; 
v___x_2085_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2075_, v_b_2076_, v_tail_2080_);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 2, v___x_2085_);
v___x_2087_ = v___x_2082_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v_key_2078_);
lean_ctor_set(v_reuseFailAlloc_2088_, 1, v_value_2079_);
lean_ctor_set(v_reuseFailAlloc_2088_, 2, v___x_2085_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
return v___x_2087_;
}
}
v___jp_2093_:
{
uint8_t v___x_2094_; 
v___x_2094_ = l_Lean_ExprStructEq_beq(v_snd_2090_, v_snd_2092_);
if (v___x_2094_ == 0)
{
goto v___jp_2084_;
}
else
{
lean_object* v___x_2095_; 
lean_del_object(v___x_2082_);
lean_dec(v_value_2079_);
lean_dec(v_key_2078_);
v___x_2095_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2095_, 0, v_a_2075_);
lean_ctor_set(v___x_2095_, 1, v_b_2076_);
lean_ctor_set(v___x_2095_, 2, v_tail_2080_);
return v___x_2095_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(lean_object* v_x_2100_, lean_object* v_x_2101_){
_start:
{
if (lean_obj_tag(v_x_2101_) == 0)
{
return v_x_2100_;
}
else
{
lean_object* v_key_2102_; lean_object* v_value_2103_; lean_object* v_tail_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2135_; 
v_key_2102_ = lean_ctor_get(v_x_2101_, 0);
v_value_2103_ = lean_ctor_get(v_x_2101_, 1);
v_tail_2104_ = lean_ctor_get(v_x_2101_, 2);
v_isSharedCheck_2135_ = !lean_is_exclusive(v_x_2101_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2106_ = v_x_2101_;
v_isShared_2107_ = v_isSharedCheck_2135_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_tail_2104_);
lean_inc(v_value_2103_);
lean_inc(v_key_2102_);
lean_dec(v_x_2101_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2135_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v_fst_2108_; lean_object* v_snd_2109_; lean_object* v___x_2110_; uint64_t v___y_2112_; uint8_t v___x_2132_; 
v_fst_2108_ = lean_ctor_get(v_key_2102_, 0);
v_snd_2109_ = lean_ctor_get(v_key_2102_, 1);
v___x_2110_ = lean_array_get_size(v_x_2100_);
v___x_2132_ = lean_unbox(v_fst_2108_);
if (v___x_2132_ == 0)
{
uint64_t v___x_2133_; 
v___x_2133_ = 13ULL;
v___y_2112_ = v___x_2133_;
goto v___jp_2111_;
}
else
{
uint64_t v___x_2134_; 
v___x_2134_ = 11ULL;
v___y_2112_ = v___x_2134_;
goto v___jp_2111_;
}
v___jp_2111_:
{
uint64_t v___x_2113_; uint64_t v___x_2114_; uint64_t v___x_2115_; uint64_t v___x_2116_; uint64_t v_fold_2117_; uint64_t v___x_2118_; uint64_t v___x_2119_; uint64_t v___x_2120_; size_t v___x_2121_; size_t v___x_2122_; size_t v___x_2123_; size_t v___x_2124_; size_t v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2128_; 
v___x_2113_ = l_Lean_ExprStructEq_hash(v_snd_2109_);
v___x_2114_ = lean_uint64_mix_hash(v___y_2112_, v___x_2113_);
v___x_2115_ = 32ULL;
v___x_2116_ = lean_uint64_shift_right(v___x_2114_, v___x_2115_);
v_fold_2117_ = lean_uint64_xor(v___x_2114_, v___x_2116_);
v___x_2118_ = 16ULL;
v___x_2119_ = lean_uint64_shift_right(v_fold_2117_, v___x_2118_);
v___x_2120_ = lean_uint64_xor(v_fold_2117_, v___x_2119_);
v___x_2121_ = lean_uint64_to_usize(v___x_2120_);
v___x_2122_ = lean_usize_of_nat(v___x_2110_);
v___x_2123_ = ((size_t)1ULL);
v___x_2124_ = lean_usize_sub(v___x_2122_, v___x_2123_);
v___x_2125_ = lean_usize_land(v___x_2121_, v___x_2124_);
v___x_2126_ = lean_array_uget_borrowed(v_x_2100_, v___x_2125_);
lean_inc(v___x_2126_);
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 2, v___x_2126_);
v___x_2128_ = v___x_2106_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v_key_2102_);
lean_ctor_set(v_reuseFailAlloc_2131_, 1, v_value_2103_);
lean_ctor_set(v_reuseFailAlloc_2131_, 2, v___x_2126_);
v___x_2128_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
lean_object* v___x_2129_; 
v___x_2129_ = lean_array_uset(v_x_2100_, v___x_2125_, v___x_2128_);
v_x_2100_ = v___x_2129_;
v_x_2101_ = v_tail_2104_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(lean_object* v_i_2136_, lean_object* v_source_2137_, lean_object* v_target_2138_){
_start:
{
lean_object* v___x_2139_; uint8_t v___x_2140_; 
v___x_2139_ = lean_array_get_size(v_source_2137_);
v___x_2140_ = lean_nat_dec_lt(v_i_2136_, v___x_2139_);
if (v___x_2140_ == 0)
{
lean_dec_ref(v_source_2137_);
lean_dec(v_i_2136_);
return v_target_2138_;
}
else
{
lean_object* v_es_2141_; lean_object* v___x_2142_; lean_object* v_source_2143_; lean_object* v_target_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v_es_2141_ = lean_array_fget(v_source_2137_, v_i_2136_);
v___x_2142_ = lean_box(0);
v_source_2143_ = lean_array_fset(v_source_2137_, v_i_2136_, v___x_2142_);
v_target_2144_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_target_2138_, v_es_2141_);
v___x_2145_ = lean_unsigned_to_nat(1u);
v___x_2146_ = lean_nat_add(v_i_2136_, v___x_2145_);
lean_dec(v_i_2136_);
v_i_2136_ = v___x_2146_;
v_source_2137_ = v_source_2143_;
v_target_2138_ = v_target_2144_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(lean_object* v_data_2148_){
_start:
{
lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v_nbuckets_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2149_ = lean_array_get_size(v_data_2148_);
v___x_2150_ = lean_unsigned_to_nat(2u);
v_nbuckets_2151_ = lean_nat_mul(v___x_2149_, v___x_2150_);
v___x_2152_ = lean_unsigned_to_nat(0u);
v___x_2153_ = lean_box(0);
v___x_2154_ = lean_mk_array(v_nbuckets_2151_, v___x_2153_);
v___x_2155_ = lean_array_propagate_mark(v_data_2148_, v___x_2154_);
v___x_2156_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v___x_2152_, v_data_2148_, v___x_2155_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(lean_object* v_m_2157_, lean_object* v_a_2158_, lean_object* v_b_2159_){
_start:
{
lean_object* v_size_2160_; lean_object* v_buckets_2161_; lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2212_; 
v_size_2160_ = lean_ctor_get(v_m_2157_, 0);
v_buckets_2161_ = lean_ctor_get(v_m_2157_, 1);
v_isSharedCheck_2212_ = !lean_is_exclusive(v_m_2157_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2163_ = v_m_2157_;
v_isShared_2164_ = v_isSharedCheck_2212_;
goto v_resetjp_2162_;
}
else
{
lean_inc(v_buckets_2161_);
lean_inc(v_size_2160_);
lean_dec(v_m_2157_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2212_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
lean_object* v_fst_2165_; lean_object* v_snd_2166_; lean_object* v___x_2167_; uint64_t v___y_2169_; uint8_t v___x_2209_; 
v_fst_2165_ = lean_ctor_get(v_a_2158_, 0);
v_snd_2166_ = lean_ctor_get(v_a_2158_, 1);
v___x_2167_ = lean_array_get_size(v_buckets_2161_);
v___x_2209_ = lean_unbox(v_fst_2165_);
if (v___x_2209_ == 0)
{
uint64_t v___x_2210_; 
v___x_2210_ = 13ULL;
v___y_2169_ = v___x_2210_;
goto v___jp_2168_;
}
else
{
uint64_t v___x_2211_; 
v___x_2211_ = 11ULL;
v___y_2169_ = v___x_2211_;
goto v___jp_2168_;
}
v___jp_2168_:
{
uint64_t v___x_2170_; uint64_t v___x_2171_; uint64_t v___x_2172_; uint64_t v___x_2173_; uint64_t v_fold_2174_; uint64_t v___x_2175_; uint64_t v___x_2176_; uint64_t v___x_2177_; size_t v___x_2178_; size_t v___x_2179_; size_t v___x_2180_; size_t v___x_2181_; size_t v___x_2182_; lean_object* v_bkt_2183_; uint8_t v___x_2184_; 
v___x_2170_ = l_Lean_ExprStructEq_hash(v_snd_2166_);
v___x_2171_ = lean_uint64_mix_hash(v___y_2169_, v___x_2170_);
v___x_2172_ = 32ULL;
v___x_2173_ = lean_uint64_shift_right(v___x_2171_, v___x_2172_);
v_fold_2174_ = lean_uint64_xor(v___x_2171_, v___x_2173_);
v___x_2175_ = 16ULL;
v___x_2176_ = lean_uint64_shift_right(v_fold_2174_, v___x_2175_);
v___x_2177_ = lean_uint64_xor(v_fold_2174_, v___x_2176_);
v___x_2178_ = lean_uint64_to_usize(v___x_2177_);
v___x_2179_ = lean_usize_of_nat(v___x_2167_);
v___x_2180_ = ((size_t)1ULL);
v___x_2181_ = lean_usize_sub(v___x_2179_, v___x_2180_);
v___x_2182_ = lean_usize_land(v___x_2178_, v___x_2181_);
v_bkt_2183_ = lean_array_uget_borrowed(v_buckets_2161_, v___x_2182_);
v___x_2184_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2158_, v_bkt_2183_);
if (v___x_2184_ == 0)
{
lean_object* v___x_2185_; lean_object* v_size_x27_2186_; lean_object* v___x_2187_; lean_object* v_buckets_x27_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; uint8_t v___x_2194_; 
v___x_2185_ = lean_unsigned_to_nat(1u);
v_size_x27_2186_ = lean_nat_add(v_size_2160_, v___x_2185_);
lean_dec(v_size_2160_);
lean_inc(v_bkt_2183_);
v___x_2187_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2187_, 0, v_a_2158_);
lean_ctor_set(v___x_2187_, 1, v_b_2159_);
lean_ctor_set(v___x_2187_, 2, v_bkt_2183_);
v_buckets_x27_2188_ = lean_array_uset(v_buckets_2161_, v___x_2182_, v___x_2187_);
v___x_2189_ = lean_unsigned_to_nat(4u);
v___x_2190_ = lean_nat_mul(v_size_x27_2186_, v___x_2189_);
v___x_2191_ = lean_unsigned_to_nat(3u);
v___x_2192_ = lean_nat_div(v___x_2190_, v___x_2191_);
lean_dec(v___x_2190_);
v___x_2193_ = lean_array_get_size(v_buckets_x27_2188_);
v___x_2194_ = lean_nat_dec_le(v___x_2192_, v___x_2193_);
lean_dec(v___x_2192_);
if (v___x_2194_ == 0)
{
lean_object* v_val_2195_; lean_object* v___x_2197_; 
v_val_2195_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_buckets_x27_2188_);
if (v_isShared_2164_ == 0)
{
lean_ctor_set(v___x_2163_, 1, v_val_2195_);
lean_ctor_set(v___x_2163_, 0, v_size_x27_2186_);
v___x_2197_ = v___x_2163_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_size_x27_2186_);
lean_ctor_set(v_reuseFailAlloc_2198_, 1, v_val_2195_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
else
{
lean_object* v___x_2200_; 
if (v_isShared_2164_ == 0)
{
lean_ctor_set(v___x_2163_, 1, v_buckets_x27_2188_);
lean_ctor_set(v___x_2163_, 0, v_size_x27_2186_);
v___x_2200_ = v___x_2163_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_size_x27_2186_);
lean_ctor_set(v_reuseFailAlloc_2201_, 1, v_buckets_x27_2188_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
}
else
{
lean_object* v___x_2202_; lean_object* v_buckets_x27_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2207_; 
lean_inc(v_bkt_2183_);
v___x_2202_ = lean_box(0);
v_buckets_x27_2203_ = lean_array_uset(v_buckets_2161_, v___x_2182_, v___x_2202_);
v___x_2204_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2158_, v_b_2159_, v_bkt_2183_);
v___x_2205_ = lean_array_uset(v_buckets_x27_2203_, v___x_2182_, v___x_2204_);
if (v_isShared_2164_ == 0)
{
lean_ctor_set(v___x_2163_, 1, v___x_2205_);
v___x_2207_ = v___x_2163_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_size_2160_);
lean_ctor_set(v_reuseFailAlloc_2208_, 1, v___x_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(lean_object* v_a_2213_, lean_object* v_x_2214_){
_start:
{
if (lean_obj_tag(v_x_2214_) == 0)
{
lean_object* v___x_2215_; 
v___x_2215_ = lean_box(0);
return v___x_2215_;
}
else
{
lean_object* v_key_2216_; lean_object* v_value_2217_; lean_object* v_tail_2218_; lean_object* v_fst_2219_; lean_object* v_snd_2220_; lean_object* v_fst_2221_; lean_object* v_snd_2222_; uint8_t v___x_2227_; 
v_key_2216_ = lean_ctor_get(v_x_2214_, 0);
v_value_2217_ = lean_ctor_get(v_x_2214_, 1);
v_tail_2218_ = lean_ctor_get(v_x_2214_, 2);
v_fst_2219_ = lean_ctor_get(v_key_2216_, 0);
v_snd_2220_ = lean_ctor_get(v_key_2216_, 1);
v_fst_2221_ = lean_ctor_get(v_a_2213_, 0);
v_snd_2222_ = lean_ctor_get(v_a_2213_, 1);
v___x_2227_ = lean_unbox(v_fst_2221_);
if (v___x_2227_ == 0)
{
uint8_t v___x_2228_; 
v___x_2228_ = lean_unbox(v_fst_2219_);
if (v___x_2228_ == 0)
{
goto v___jp_2223_;
}
else
{
v_x_2214_ = v_tail_2218_;
goto _start;
}
}
else
{
uint8_t v___x_2230_; 
v___x_2230_ = lean_unbox(v_fst_2219_);
if (v___x_2230_ == 0)
{
v_x_2214_ = v_tail_2218_;
goto _start;
}
else
{
goto v___jp_2223_;
}
}
v___jp_2223_:
{
uint8_t v___x_2224_; 
v___x_2224_ = l_Lean_ExprStructEq_beq(v_snd_2220_, v_snd_2222_);
if (v___x_2224_ == 0)
{
v_x_2214_ = v_tail_2218_;
goto _start;
}
else
{
lean_object* v___x_2226_; 
lean_inc(v_value_2217_);
v___x_2226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2226_, 0, v_value_2217_);
return v___x_2226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg___boxed(lean_object* v_a_2232_, lean_object* v_x_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2232_, v_x_2233_);
lean_dec(v_x_2233_);
lean_dec_ref(v_a_2232_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(lean_object* v_m_2235_, lean_object* v_a_2236_){
_start:
{
lean_object* v_buckets_2237_; lean_object* v_fst_2238_; lean_object* v_snd_2239_; lean_object* v___x_2240_; uint64_t v___y_2242_; uint8_t v___x_2258_; 
v_buckets_2237_ = lean_ctor_get(v_m_2235_, 1);
v_fst_2238_ = lean_ctor_get(v_a_2236_, 0);
v_snd_2239_ = lean_ctor_get(v_a_2236_, 1);
v___x_2240_ = lean_array_get_size(v_buckets_2237_);
v___x_2258_ = lean_unbox(v_fst_2238_);
if (v___x_2258_ == 0)
{
uint64_t v___x_2259_; 
v___x_2259_ = 13ULL;
v___y_2242_ = v___x_2259_;
goto v___jp_2241_;
}
else
{
uint64_t v___x_2260_; 
v___x_2260_ = 11ULL;
v___y_2242_ = v___x_2260_;
goto v___jp_2241_;
}
v___jp_2241_:
{
uint64_t v___x_2243_; uint64_t v___x_2244_; uint64_t v___x_2245_; uint64_t v___x_2246_; uint64_t v_fold_2247_; uint64_t v___x_2248_; uint64_t v___x_2249_; uint64_t v___x_2250_; size_t v___x_2251_; size_t v___x_2252_; size_t v___x_2253_; size_t v___x_2254_; size_t v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2243_ = l_Lean_ExprStructEq_hash(v_snd_2239_);
v___x_2244_ = lean_uint64_mix_hash(v___y_2242_, v___x_2243_);
v___x_2245_ = 32ULL;
v___x_2246_ = lean_uint64_shift_right(v___x_2244_, v___x_2245_);
v_fold_2247_ = lean_uint64_xor(v___x_2244_, v___x_2246_);
v___x_2248_ = 16ULL;
v___x_2249_ = lean_uint64_shift_right(v_fold_2247_, v___x_2248_);
v___x_2250_ = lean_uint64_xor(v_fold_2247_, v___x_2249_);
v___x_2251_ = lean_uint64_to_usize(v___x_2250_);
v___x_2252_ = lean_usize_of_nat(v___x_2240_);
v___x_2253_ = ((size_t)1ULL);
v___x_2254_ = lean_usize_sub(v___x_2252_, v___x_2253_);
v___x_2255_ = lean_usize_land(v___x_2251_, v___x_2254_);
v___x_2256_ = lean_array_uget_borrowed(v_buckets_2237_, v___x_2255_);
v___x_2257_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2236_, v___x_2256_);
return v___x_2257_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg___boxed(lean_object* v_m_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_2261_, v_a_2262_);
lean_dec_ref(v_a_2262_);
lean_dec_ref(v_m_2261_);
return v_res_2263_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0(void){
_start:
{
lean_object* v___x_2264_; lean_object* v_dummy_2265_; 
v___x_2264_ = lean_box(0);
v_dummy_2265_ = l_Lean_Expr_sort___override(v___x_2264_);
return v_dummy_2265_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(lean_object* v_upperBound_2266_, lean_object* v_fst_2267_, lean_object* v_fvars_2268_, lean_object* v_a_2269_, lean_object* v_b_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_){
_start:
{
lean_object* v_a_2280_; uint8_t v___x_2284_; 
v___x_2284_ = lean_nat_dec_lt(v_a_2269_, v_upperBound_2266_);
if (v___x_2284_ == 0)
{
lean_object* v___x_2285_; 
lean_dec(v_a_2269_);
lean_dec(v_fvars_2268_);
v___x_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2285_, 0, v_b_2270_);
return v___x_2285_;
}
else
{
lean_object* v___x_2286_; lean_object* v___x_2287_; uint8_t v_binderInfo_2288_; uint8_t v___x_2289_; 
v___x_2286_ = l_Lean_Meta_instInhabitedExprParamInfo_default;
v___x_2287_ = lean_array_get_borrowed(v___x_2286_, v_fst_2267_, v_a_2269_);
v_binderInfo_2288_ = lean_ctor_get_uint8(v___x_2287_, sizeof(void*)*2);
v___x_2289_ = l_Lean_BinderInfo_isExplicit(v_binderInfo_2288_);
if (v___x_2289_ == 0)
{
v_a_2280_ = v_b_2270_;
goto v___jp_2279_;
}
else
{
lean_object* v___x_2290_; uint8_t v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2290_ = l_Lean_instInhabitedExpr;
v___x_2291_ = 0;
v___x_2292_ = lean_array_get_borrowed(v___x_2290_, v_b_2270_, v_a_2269_);
lean_inc(v___x_2292_);
lean_inc(v_fvars_2268_);
v___x_2293_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2268_, v___x_2292_, v___x_2291_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
if (lean_obj_tag(v___x_2293_) == 0)
{
lean_object* v_a_2294_; lean_object* v___x_2295_; 
v_a_2294_ = lean_ctor_get(v___x_2293_, 0);
lean_inc(v_a_2294_);
lean_dec_ref_known(v___x_2293_, 1);
v___x_2295_ = lean_array_set(v_b_2270_, v_a_2269_, v_a_2294_);
v_a_2280_ = v___x_2295_;
goto v___jp_2279_;
}
else
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2303_; 
lean_dec_ref(v_b_2270_);
lean_dec(v_a_2269_);
lean_dec(v_fvars_2268_);
v_a_2296_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2298_ = v___x_2293_;
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2293_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2301_; 
if (v_isShared_2299_ == 0)
{
v___x_2301_ = v___x_2298_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_a_2296_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
}
}
}
v___jp_2279_:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2281_ = lean_unsigned_to_nat(1u);
v___x_2282_ = lean_nat_add(v_a_2269_, v___x_2281_);
lean_dec(v_a_2269_);
v_a_2269_ = v___x_2282_;
v_b_2270_ = v_a_2280_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(lean_object* v_fvars_2304_, size_t v_sz_2305_, size_t v_i_2306_, lean_object* v_bs_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
uint8_t v___x_2316_; 
v___x_2316_ = lean_usize_dec_lt(v_i_2306_, v_sz_2305_);
if (v___x_2316_ == 0)
{
lean_object* v___x_2317_; 
lean_dec(v_fvars_2304_);
v___x_2317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2317_, 0, v_bs_2307_);
return v___x_2317_;
}
else
{
uint8_t v___x_2318_; lean_object* v_v_2319_; lean_object* v___x_2320_; lean_object* v_bs_x27_2321_; lean_object* v___x_2322_; 
v___x_2318_ = 0;
v_v_2319_ = lean_array_uget(v_bs_2307_, v_i_2306_);
v___x_2320_ = lean_unsigned_to_nat(0u);
v_bs_x27_2321_ = lean_array_uset(v_bs_2307_, v_i_2306_, v___x_2320_);
lean_inc(v_fvars_2304_);
v___x_2322_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2304_, v_v_2319_, v___x_2318_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_object* v_a_2323_; size_t v___x_2324_; size_t v___x_2325_; lean_object* v___x_2326_; 
v_a_2323_ = lean_ctor_get(v___x_2322_, 0);
lean_inc(v_a_2323_);
lean_dec_ref_known(v___x_2322_, 1);
v___x_2324_ = ((size_t)1ULL);
v___x_2325_ = lean_usize_add(v_i_2306_, v___x_2324_);
v___x_2326_ = lean_array_uset(v_bs_x27_2321_, v_i_2306_, v_a_2323_);
v_i_2306_ = v___x_2325_;
v_bs_2307_ = v___x_2326_;
goto _start;
}
else
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2335_; 
lean_dec_ref(v_bs_x27_2321_);
lean_dec(v_fvars_2304_);
v_a_2328_ = lean_ctor_get(v___x_2322_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2322_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2330_ = v___x_2322_;
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2322_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2333_; 
if (v_isShared_2331_ == 0)
{
v___x_2333_ = v___x_2330_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v_a_2328_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(lean_object* v_fvars_2336_, lean_object* v_f_2337_, lean_object* v_args_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_){
_start:
{
uint8_t v___x_2347_; lean_object* v___x_2348_; 
v___x_2347_ = 0;
lean_inc_ref(v_f_2337_);
lean_inc(v_fvars_2336_);
v___x_2348_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2336_, v_f_2337_, v___x_2347_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_);
if (lean_obj_tag(v___x_2348_) == 0)
{
uint8_t v_implicits_2349_; 
v_implicits_2349_ = lean_ctor_get_uint8(v_a_2339_, 2);
if (v_implicits_2349_ == 0)
{
lean_object* v_a_2350_; lean_object* v___x_2351_; 
v_a_2350_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_a_2350_);
lean_dec_ref_known(v___x_2348_, 1);
lean_inc(v_a_2345_);
lean_inc_ref(v_a_2344_);
lean_inc(v_a_2343_);
lean_inc_ref(v_a_2342_);
v___x_2351_ = lean_infer_type(v_f_2337_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2353_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref_known(v___x_2351_, 1);
v___x_2353_ = l_Lean_Meta_instantiateForallWithParamInfos(v_a_2352_, v_args_2338_, v___x_2347_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v_fst_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_a_2354_);
lean_dec_ref_known(v___x_2353_, 1);
v_fst_2355_ = lean_ctor_get(v_a_2354_, 0);
lean_inc(v_fst_2355_);
lean_dec(v_a_2354_);
v___x_2356_ = lean_array_get_size(v_args_2338_);
v___x_2357_ = lean_unsigned_to_nat(0u);
v___x_2358_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v___x_2356_, v_fst_2355_, v_fvars_2336_, v___x_2357_, v_args_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_);
lean_dec(v_fst_2355_);
if (lean_obj_tag(v___x_2358_) == 0)
{
lean_object* v_a_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2367_; 
v_a_2359_ = lean_ctor_get(v___x_2358_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2358_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2361_ = v___x_2358_;
v_isShared_2362_ = v_isSharedCheck_2367_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_a_2359_);
lean_dec(v___x_2358_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2367_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2363_; lean_object* v___x_2365_; 
v___x_2363_ = l_Lean_mkAppN(v_a_2350_, v_a_2359_);
lean_dec(v_a_2359_);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 0, v___x_2363_);
v___x_2365_ = v___x_2361_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v___x_2363_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
lean_dec(v_a_2350_);
v_a_2368_ = lean_ctor_get(v___x_2358_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2358_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2370_ = v___x_2358_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2358_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2368_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
lean_dec(v_a_2350_);
lean_dec_ref(v_args_2338_);
lean_dec(v_fvars_2336_);
v_a_2376_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2353_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2353_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
else
{
lean_dec(v_a_2350_);
lean_dec_ref(v_args_2338_);
lean_dec(v_fvars_2336_);
return v___x_2351_;
}
}
else
{
lean_object* v_a_2384_; size_t v_sz_2385_; size_t v___x_2386_; lean_object* v___x_2387_; 
lean_dec_ref(v_f_2337_);
v_a_2384_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_a_2384_);
lean_dec_ref_known(v___x_2348_, 1);
v_sz_2385_ = lean_array_size(v_args_2338_);
v___x_2386_ = ((size_t)0ULL);
v___x_2387_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(v_fvars_2336_, v_sz_2385_, v___x_2386_, v_args_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_);
if (lean_obj_tag(v___x_2387_) == 0)
{
lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2396_; 
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v___x_2387_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2390_ = v___x_2387_;
v_isShared_2391_ = v_isSharedCheck_2396_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v___x_2387_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2396_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2392_; lean_object* v___x_2394_; 
v___x_2392_ = l_Lean_mkAppN(v_a_2384_, v_a_2388_);
lean_dec(v_a_2388_);
if (v_isShared_2391_ == 0)
{
lean_ctor_set(v___x_2390_, 0, v___x_2392_);
v___x_2394_ = v___x_2390_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v___x_2392_);
v___x_2394_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
return v___x_2394_;
}
}
}
else
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2404_; 
lean_dec(v_a_2384_);
v_a_2397_ = lean_ctor_get(v___x_2387_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v___x_2387_);
if (v_isSharedCheck_2404_ == 0)
{
v___x_2399_ = v___x_2387_;
v_isShared_2400_ = v_isSharedCheck_2404_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v___x_2387_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2404_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2402_; 
if (v_isShared_2400_ == 0)
{
v___x_2402_ = v___x_2399_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v_a_2397_);
v___x_2402_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
return v___x_2402_;
}
}
}
}
}
else
{
lean_dec_ref(v_args_2338_);
lean_dec_ref(v_f_2337_);
lean_dec(v_fvars_2336_);
return v___x_2348_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed(lean_object* v_fvars_2405_, lean_object* v_f_2406_, lean_object* v_args_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_){
_start:
{
lean_object* v_res_2416_; 
v_res_2416_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(v_fvars_2405_, v_f_2406_, v_args_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_, v_a_2413_, v_a_2414_);
lean_dec(v_a_2414_);
lean_dec_ref(v_a_2413_);
lean_dec(v_a_2412_);
lean_dec_ref(v_a_2411_);
lean_dec(v_a_2410_);
lean_dec(v_a_2409_);
lean_dec_ref(v_a_2408_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(lean_object* v_fvars_2417_, lean_object* v_b_2418_, uint8_t v___x_2419_, lean_object* v_mk_2420_, lean_object* v_a_2421_, lean_object* v_x_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
lean_inc_ref(v_x_2422_);
v___x_2431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2431_, 0, v_x_2422_);
lean_ctor_set(v___x_2431_, 1, v_fvars_2417_);
v___x_2432_ = lean_expr_instantiate1(v_b_2418_, v_x_2422_);
v___x_2433_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2431_, v___x_2432_, v___x_2419_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
if (lean_obj_tag(v___x_2433_) == 0)
{
uint8_t v_lift_2434_; 
v_lift_2434_ = lean_ctor_get_uint8(v___y_2423_, 10);
if (v_lift_2434_ == 0)
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2447_; 
v_a_2435_ = lean_ctor_get(v___x_2433_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v___x_2433_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2437_ = v___x_2433_;
v_isShared_2438_ = v_isSharedCheck_2447_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2433_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2447_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2445_; 
v___x_2439_ = lean_unsigned_to_nat(1u);
v___x_2440_ = lean_mk_empty_array_with_capacity(v___x_2439_);
v___x_2441_ = lean_array_push(v___x_2440_, v_x_2422_);
v___x_2442_ = lean_expr_abstract(v_a_2435_, v___x_2441_);
lean_dec_ref(v___x_2441_);
lean_dec(v_a_2435_);
v___x_2443_ = lean_apply_2(v_mk_2420_, v_a_2421_, v___x_2442_);
if (v_isShared_2438_ == 0)
{
lean_ctor_set(v___x_2437_, 0, v___x_2443_);
v___x_2445_ = v___x_2437_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v___x_2443_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
return v___x_2445_;
}
}
}
else
{
lean_object* v_a_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v_a_2448_ = lean_ctor_get(v___x_2433_, 0);
lean_inc(v_a_2448_);
lean_dec_ref_known(v___x_2433_, 1);
v___x_2449_ = l_Lean_Expr_fvarId_x21(v_x_2422_);
v___x_2450_ = l_Lean_Meta_ExtractLets_flushDecls(v___x_2449_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v_a_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2464_; 
v_a_2451_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2464_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2464_ == 0)
{
v___x_2453_ = v___x_2450_;
v_isShared_2454_ = v_isSharedCheck_2464_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_a_2451_);
lean_dec(v___x_2450_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2464_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2462_; 
v___x_2455_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_a_2451_, v_a_2448_);
lean_dec(v_a_2451_);
v___x_2456_ = lean_unsigned_to_nat(1u);
v___x_2457_ = lean_mk_empty_array_with_capacity(v___x_2456_);
v___x_2458_ = lean_array_push(v___x_2457_, v_x_2422_);
v___x_2459_ = lean_expr_abstract(v___x_2455_, v___x_2458_);
lean_dec_ref(v___x_2458_);
lean_dec_ref(v___x_2455_);
v___x_2460_ = lean_apply_2(v_mk_2420_, v_a_2421_, v___x_2459_);
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v___x_2460_);
v___x_2462_ = v___x_2453_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v___x_2460_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2472_; 
lean_dec(v_a_2448_);
lean_dec_ref(v_x_2422_);
lean_dec_ref(v_a_2421_);
lean_dec_ref(v_mk_2420_);
v_a_2465_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2467_ = v___x_2450_;
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2450_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2470_; 
if (v_isShared_2468_ == 0)
{
v___x_2470_ = v___x_2467_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_a_2465_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
}
}
else
{
lean_dec_ref(v_x_2422_);
lean_dec_ref(v_a_2421_);
lean_dec_ref(v_mk_2420_);
return v___x_2433_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed(lean_object* v_fvars_2473_, lean_object* v_b_2474_, lean_object* v___x_2475_, lean_object* v_mk_2476_, lean_object* v_a_2477_, lean_object* v_x_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
uint8_t v___x_42686__boxed_2487_; lean_object* v_res_2488_; 
v___x_42686__boxed_2487_ = lean_unbox(v___x_2475_);
v_res_2488_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(v_fvars_2473_, v_b_2474_, v___x_42686__boxed_2487_, v_mk_2476_, v_a_2477_, v_x_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
lean_dec(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec_ref(v_b_2474_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(lean_object* v_fvars_2489_, lean_object* v_n_2490_, lean_object* v_t_2491_, lean_object* v_b_2492_, uint8_t v_i_2493_, lean_object* v_mk_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_){
_start:
{
uint8_t v___x_2503_; lean_object* v___x_2504_; 
v___x_2503_ = 0;
lean_inc(v_fvars_2489_);
v___x_2504_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2489_, v_t_2491_, v___x_2503_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_);
if (lean_obj_tag(v___x_2504_) == 0)
{
uint8_t v_underBinder_2505_; 
v_underBinder_2505_ = lean_ctor_get_uint8(v_a_2495_, 4);
if (v_underBinder_2505_ == 0)
{
lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2514_; 
lean_dec(v_n_2490_);
lean_dec(v_fvars_2489_);
v_a_2506_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2508_ = v___x_2504_;
v_isShared_2509_ = v_isSharedCheck_2514_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2504_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2514_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v___x_2510_; lean_object* v___x_2512_; 
v___x_2510_ = lean_apply_2(v_mk_2494_, v_a_2506_, v_b_2492_);
if (v_isShared_2509_ == 0)
{
lean_ctor_set(v___x_2508_, 0, v___x_2510_);
v___x_2512_ = v___x_2508_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v___x_2510_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
else
{
lean_object* v_a_2515_; lean_object* v___x_2516_; lean_object* v___f_2517_; uint8_t v___x_2518_; lean_object* v___x_2519_; 
v_a_2515_ = lean_ctor_get(v___x_2504_, 0);
lean_inc_n(v_a_2515_, 2);
lean_dec_ref_known(v___x_2504_, 1);
v___x_2516_ = lean_box(v___x_2503_);
v___f_2517_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed), 14, 5);
lean_closure_set(v___f_2517_, 0, v_fvars_2489_);
lean_closure_set(v___f_2517_, 1, v_b_2492_);
lean_closure_set(v___f_2517_, 2, v___x_2516_);
lean_closure_set(v___f_2517_, 3, v_mk_2494_);
lean_closure_set(v___f_2517_, 4, v_a_2515_);
v___x_2518_ = 0;
v___x_2519_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_n_2490_, v_i_2493_, v_a_2515_, v___f_2517_, v___x_2518_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_);
return v___x_2519_;
}
}
else
{
lean_dec_ref(v_mk_2494_);
lean_dec_ref(v_b_2492_);
lean_dec(v_n_2490_);
lean_dec(v_fvars_2489_);
return v___x_2504_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed(lean_object* v_fvars_2520_, lean_object* v_n_2521_, lean_object* v_t_2522_, lean_object* v_b_2523_, lean_object* v_i_2524_, lean_object* v_mk_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_){
_start:
{
uint8_t v_i_boxed_2534_; lean_object* v_res_2535_; 
v_i_boxed_2534_ = lean_unbox(v_i_2524_);
v_res_2535_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(v_fvars_2520_, v_n_2521_, v_t_2522_, v_b_2523_, v_i_boxed_2534_, v_mk_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_);
lean_dec(v_a_2532_);
lean_dec_ref(v_a_2531_);
lean_dec(v_a_2530_);
lean_dec_ref(v_a_2529_);
lean_dec(v_a_2528_);
lean_dec(v_a_2527_);
lean_dec_ref(v_a_2526_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___boxed(lean_object* v_fvars_2536_, lean_object* v_e_2537_, lean_object* v_topLevel_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_){
_start:
{
uint8_t v_topLevel_boxed_2547_; lean_object* v_res_2548_; 
v_topLevel_boxed_2547_ = lean_unbox(v_topLevel_2538_);
v_res_2548_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2536_, v_e_2537_, v_topLevel_boxed_2547_, v_a_2539_, v_a_2540_, v_a_2541_, v_a_2542_, v_a_2543_, v_a_2544_, v_a_2545_);
lean_dec(v_a_2545_);
lean_dec_ref(v_a_2544_);
lean_dec(v_a_2543_);
lean_dec_ref(v_a_2542_);
lean_dec(v_a_2541_);
lean_dec(v_a_2540_);
lean_dec_ref(v_a_2539_);
return v_res_2548_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2552_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2));
v___x_2553_ = lean_unsigned_to_nat(27u);
v___x_2554_ = lean_unsigned_to_nat(1981u);
v___x_2555_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1));
v___x_2556_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0));
v___x_2557_ = l_mkPanicMessageWithDecl(v___x_2556_, v___x_2555_, v___x_2554_, v___x_2553_, v___x_2552_);
return v___x_2557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(uint8_t v_fst_2558_, lean_object* v_fvars_2559_, lean_object* v_b_2560_, uint8_t v___x_2561_, lean_object* v_e_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, uint8_t v_isLet_2565_, uint8_t v_topLevel_2566_, lean_object* v_x_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
if (v_fst_2558_ == 0)
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
lean_inc_ref(v_x_2567_);
v___x_2576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2576_, 0, v_x_2567_);
lean_ctor_set(v___x_2576_, 1, v_fvars_2559_);
v___x_2577_ = lean_expr_instantiate1(v_b_2560_, v_x_2567_);
v___x_2578_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2576_, v___x_2577_, v___x_2561_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_);
if (lean_obj_tag(v___x_2578_) == 0)
{
if (lean_obj_tag(v_e_2562_) == 8)
{
lean_object* v_a_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2616_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2581_ = v___x_2578_;
v_isShared_2582_ = v_isSharedCheck_2616_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_a_2579_);
lean_dec(v___x_2578_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2616_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v_declName_2583_; lean_object* v_type_2584_; lean_object* v_value_2585_; lean_object* v_body_2586_; uint8_t v_nondep_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; size_t v___x_2592_; size_t v___x_2593_; uint8_t v___x_2594_; 
v_declName_2583_ = lean_ctor_get(v_e_2562_, 0);
v_type_2584_ = lean_ctor_get(v_e_2562_, 1);
v_value_2585_ = lean_ctor_get(v_e_2562_, 2);
v_body_2586_ = lean_ctor_get(v_e_2562_, 3);
v_nondep_2587_ = lean_ctor_get_uint8(v_e_2562_, sizeof(void*)*4 + 8);
v___x_2588_ = lean_unsigned_to_nat(1u);
v___x_2589_ = lean_mk_empty_array_with_capacity(v___x_2588_);
v___x_2590_ = lean_array_push(v___x_2589_, v_x_2567_);
v___x_2591_ = lean_expr_abstract(v_a_2579_, v___x_2590_);
lean_dec_ref(v___x_2590_);
lean_dec(v_a_2579_);
v___x_2592_ = lean_ptr_addr(v_type_2584_);
v___x_2593_ = lean_ptr_addr(v_a_2563_);
v___x_2594_ = lean_usize_dec_eq(v___x_2592_, v___x_2593_);
if (v___x_2594_ == 0)
{
lean_object* v___x_2595_; lean_object* v___x_2597_; 
lean_inc(v_declName_2583_);
lean_dec_ref_known(v_e_2562_, 4);
v___x_2595_ = l_Lean_Expr_letE___override(v_declName_2583_, v_a_2563_, v_a_2564_, v___x_2591_, v_nondep_2587_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 0, v___x_2595_);
v___x_2597_ = v___x_2581_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2595_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
else
{
size_t v___x_2599_; size_t v___x_2600_; uint8_t v___x_2601_; 
v___x_2599_ = lean_ptr_addr(v_value_2585_);
v___x_2600_ = lean_ptr_addr(v_a_2564_);
v___x_2601_ = lean_usize_dec_eq(v___x_2599_, v___x_2600_);
if (v___x_2601_ == 0)
{
lean_object* v___x_2602_; lean_object* v___x_2604_; 
lean_inc(v_declName_2583_);
lean_dec_ref_known(v_e_2562_, 4);
v___x_2602_ = l_Lean_Expr_letE___override(v_declName_2583_, v_a_2563_, v_a_2564_, v___x_2591_, v_nondep_2587_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 0, v___x_2602_);
v___x_2604_ = v___x_2581_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v___x_2602_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
else
{
size_t v___x_2606_; size_t v___x_2607_; uint8_t v___x_2608_; 
v___x_2606_ = lean_ptr_addr(v_body_2586_);
v___x_2607_ = lean_ptr_addr(v___x_2591_);
v___x_2608_ = lean_usize_dec_eq(v___x_2606_, v___x_2607_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2609_; lean_object* v___x_2611_; 
lean_inc(v_declName_2583_);
lean_dec_ref_known(v_e_2562_, 4);
v___x_2609_ = l_Lean_Expr_letE___override(v_declName_2583_, v_a_2563_, v_a_2564_, v___x_2591_, v_nondep_2587_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 0, v___x_2609_);
v___x_2611_ = v___x_2581_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v___x_2609_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
else
{
lean_object* v___x_2614_; 
lean_dec_ref(v___x_2591_);
lean_dec_ref(v_a_2564_);
lean_dec_ref(v_a_2563_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 0, v_e_2562_);
v___x_2614_ = v___x_2581_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v_e_2562_);
v___x_2614_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
return v___x_2614_;
}
}
}
}
}
}
else
{
lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2625_; 
lean_dec_ref(v_x_2567_);
lean_dec_ref(v_a_2564_);
lean_dec_ref(v_a_2563_);
lean_dec_ref(v_e_2562_);
v_isSharedCheck_2625_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2625_ == 0)
{
lean_object* v_unused_2626_; 
v_unused_2626_ = lean_ctor_get(v___x_2578_, 0);
lean_dec(v_unused_2626_);
v___x_2618_ = v___x_2578_;
v_isShared_2619_ = v_isSharedCheck_2625_;
goto v_resetjp_2617_;
}
else
{
lean_dec(v___x_2578_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2625_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2623_; 
v___x_2620_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2621_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2620_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 0, v___x_2621_);
v___x_2623_ = v___x_2618_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v___x_2621_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
}
}
else
{
lean_dec_ref(v_x_2567_);
lean_dec_ref(v_a_2564_);
lean_dec_ref(v_a_2563_);
lean_dec_ref(v_e_2562_);
return v___x_2578_;
}
}
else
{
lean_object* v___x_2627_; lean_object* v___x_2628_; 
lean_dec_ref(v_a_2564_);
lean_dec_ref(v_a_2563_);
lean_dec_ref(v_e_2562_);
v___x_2627_ = l_Lean_Expr_fvarId_x21(v_x_2567_);
v___x_2628_ = l_Lean_FVarId_getDecl___redArg(v___x_2627_, v___y_2571_, v___y_2573_, v___y_2574_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v_a_2629_; lean_object* v___x_2630_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_a_2629_);
lean_dec_ref_known(v___x_2628_, 1);
v___x_2630_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_a_2629_, v_isLet_2565_, v___y_2568_, v___y_2570_);
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_object* v___x_2631_; lean_object* v___x_2632_; 
lean_dec_ref_known(v___x_2630_, 1);
v___x_2631_ = lean_expr_instantiate1(v_b_2560_, v_x_2567_);
lean_dec_ref(v_x_2567_);
v___x_2632_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2559_, v___x_2631_, v_topLevel_2566_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_);
return v___x_2632_;
}
else
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
lean_dec_ref(v_x_2567_);
lean_dec(v_fvars_2559_);
v_a_2633_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v___x_2630_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___x_2630_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
}
else
{
lean_object* v_a_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2648_; 
lean_dec_ref(v_x_2567_);
lean_dec(v_fvars_2559_);
v_a_2641_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2643_ = v___x_2628_;
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_a_2641_);
lean_dec(v___x_2628_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2646_; 
if (v_isShared_2644_ == 0)
{
v___x_2646_ = v___x_2643_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_a_2641_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed(lean_object** _args){
lean_object* v_fst_2649_ = _args[0];
lean_object* v_fvars_2650_ = _args[1];
lean_object* v_b_2651_ = _args[2];
lean_object* v___x_2652_ = _args[3];
lean_object* v_e_2653_ = _args[4];
lean_object* v_a_2654_ = _args[5];
lean_object* v_a_2655_ = _args[6];
lean_object* v_isLet_2656_ = _args[7];
lean_object* v_topLevel_2657_ = _args[8];
lean_object* v_x_2658_ = _args[9];
lean_object* v___y_2659_ = _args[10];
lean_object* v___y_2660_ = _args[11];
lean_object* v___y_2661_ = _args[12];
lean_object* v___y_2662_ = _args[13];
lean_object* v___y_2663_ = _args[14];
lean_object* v___y_2664_ = _args[15];
lean_object* v___y_2665_ = _args[16];
lean_object* v___y_2666_ = _args[17];
_start:
{
uint8_t v_fst_42831__boxed_2667_; uint8_t v___x_42832__boxed_2668_; uint8_t v_isLet_boxed_2669_; uint8_t v_topLevel_boxed_2670_; lean_object* v_res_2671_; 
v_fst_42831__boxed_2667_ = lean_unbox(v_fst_2649_);
v___x_42832__boxed_2668_ = lean_unbox(v___x_2652_);
v_isLet_boxed_2669_ = lean_unbox(v_isLet_2656_);
v_topLevel_boxed_2670_ = lean_unbox(v_topLevel_2657_);
v_res_2671_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(v_fst_42831__boxed_2667_, v_fvars_2650_, v_b_2651_, v___x_42832__boxed_2668_, v_e_2653_, v_a_2654_, v_a_2655_, v_isLet_boxed_2669_, v_topLevel_boxed_2670_, v_x_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_);
lean_dec(v___y_2665_);
lean_dec_ref(v___y_2664_);
lean_dec(v___y_2663_);
lean_dec_ref(v___y_2662_);
lean_dec(v___y_2661_);
lean_dec(v___y_2660_);
lean_dec_ref(v___y_2659_);
lean_dec_ref(v_b_2651_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(lean_object* v_fvars_2672_, lean_object* v_e_2673_, uint8_t v_isLet_2674_, lean_object* v_n_2675_, lean_object* v_t_2676_, lean_object* v_v_2677_, lean_object* v_b_2678_, uint8_t v_topLevel_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_){
_start:
{
lean_object* v___y_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; lean_object* v___y_2692_; lean_object* v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2695_; lean_object* v___y_2696_; uint8_t v___x_2702_; lean_object* v___x_2703_; 
v___x_2702_ = 0;
lean_inc(v_fvars_2672_);
v___x_2703_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2672_, v_t_2676_, v___x_2702_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_, v_a_2686_);
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v_a_2704_; lean_object* v___x_2705_; 
v_a_2704_ = lean_ctor_get(v___x_2703_, 0);
lean_inc(v_a_2704_);
lean_dec_ref_known(v___x_2703_, 1);
lean_inc(v_fvars_2672_);
v___x_2705_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2672_, v_v_2677_, v___x_2702_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_, v_a_2686_);
if (lean_obj_tag(v___x_2705_) == 0)
{
lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2817_; 
v_a_2706_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2708_ = v___x_2705_;
v_isShared_2709_ = v_isSharedCheck_2817_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v___x_2705_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2817_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___y_2746_; lean_object* v___y_2747_; lean_object* v___y_2748_; lean_object* v___y_2749_; lean_object* v___y_2750_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; uint8_t v_descend_2757_; uint8_t v_underBinder_2758_; uint8_t v_usedOnly_2759_; uint8_t v_merge_2760_; uint8_t v_lift_2761_; lean_object* v___y_2763_; lean_object* v___y_2764_; lean_object* v___y_2765_; lean_object* v___y_2766_; lean_object* v___y_2767_; lean_object* v___y_2768_; lean_object* v___y_2769_; lean_object* v___y_2770_; lean_object* v___y_2771_; uint8_t v___y_2773_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v___y_2776_; lean_object* v___y_2777_; lean_object* v___y_2778_; lean_object* v___y_2779_; lean_object* v___y_2780_; uint8_t v___y_2799_; 
v_descend_2757_ = lean_ctor_get_uint8(v_a_2680_, 3);
v_underBinder_2758_ = lean_ctor_get_uint8(v_a_2680_, 4);
v_usedOnly_2759_ = lean_ctor_get_uint8(v_a_2680_, 5);
v_merge_2760_ = lean_ctor_get_uint8(v_a_2680_, 6);
v_lift_2761_ = lean_ctor_get_uint8(v_a_2680_, 10);
if (v_usedOnly_2759_ == 0)
{
v___y_2799_ = v___x_2702_;
goto v___jp_2798_;
}
else
{
uint8_t v___x_2815_; 
v___x_2815_ = l_Lean_Expr_hasLooseBVars(v_b_2678_);
if (v___x_2815_ == 0)
{
lean_object* v___x_2816_; 
lean_del_object(v___x_2708_);
lean_dec(v_a_2706_);
lean_dec(v_a_2704_);
lean_dec(v_n_2675_);
lean_dec_ref(v_e_2673_);
v___x_2816_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2672_, v_b_2678_, v_topLevel_2679_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_, v_a_2686_);
return v___x_2816_;
}
else
{
v___y_2799_ = v___x_2702_;
goto v___jp_2798_;
}
}
v___jp_2710_:
{
if (lean_obj_tag(v_e_2673_) == 8)
{
lean_object* v_declName_2711_; lean_object* v_type_2712_; lean_object* v_value_2713_; lean_object* v_body_2714_; uint8_t v_nondep_2715_; size_t v___x_2716_; size_t v___x_2717_; uint8_t v___x_2718_; 
v_declName_2711_ = lean_ctor_get(v_e_2673_, 0);
v_type_2712_ = lean_ctor_get(v_e_2673_, 1);
v_value_2713_ = lean_ctor_get(v_e_2673_, 2);
v_body_2714_ = lean_ctor_get(v_e_2673_, 3);
v_nondep_2715_ = lean_ctor_get_uint8(v_e_2673_, sizeof(void*)*4 + 8);
v___x_2716_ = lean_ptr_addr(v_type_2712_);
v___x_2717_ = lean_ptr_addr(v_a_2704_);
v___x_2718_ = lean_usize_dec_eq(v___x_2716_, v___x_2717_);
if (v___x_2718_ == 0)
{
lean_object* v___x_2719_; lean_object* v___x_2721_; 
lean_inc(v_declName_2711_);
lean_dec_ref_known(v_e_2673_, 4);
v___x_2719_ = l_Lean_Expr_letE___override(v_declName_2711_, v_a_2704_, v_a_2706_, v_b_2678_, v_nondep_2715_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v___x_2719_);
v___x_2721_ = v___x_2708_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v___x_2719_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
else
{
size_t v___x_2723_; size_t v___x_2724_; uint8_t v___x_2725_; 
v___x_2723_ = lean_ptr_addr(v_value_2713_);
v___x_2724_ = lean_ptr_addr(v_a_2706_);
v___x_2725_ = lean_usize_dec_eq(v___x_2723_, v___x_2724_);
if (v___x_2725_ == 0)
{
lean_object* v___x_2726_; lean_object* v___x_2728_; 
lean_inc(v_declName_2711_);
lean_dec_ref_known(v_e_2673_, 4);
v___x_2726_ = l_Lean_Expr_letE___override(v_declName_2711_, v_a_2704_, v_a_2706_, v_b_2678_, v_nondep_2715_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v___x_2726_);
v___x_2728_ = v___x_2708_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v___x_2726_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
else
{
size_t v___x_2730_; size_t v___x_2731_; uint8_t v___x_2732_; 
v___x_2730_ = lean_ptr_addr(v_body_2714_);
v___x_2731_ = lean_ptr_addr(v_b_2678_);
v___x_2732_ = lean_usize_dec_eq(v___x_2730_, v___x_2731_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2733_; lean_object* v___x_2735_; 
lean_inc(v_declName_2711_);
lean_dec_ref_known(v_e_2673_, 4);
v___x_2733_ = l_Lean_Expr_letE___override(v_declName_2711_, v_a_2704_, v_a_2706_, v_b_2678_, v_nondep_2715_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v___x_2733_);
v___x_2735_ = v___x_2708_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v___x_2733_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
return v___x_2735_;
}
}
else
{
lean_object* v___x_2738_; 
lean_dec(v_a_2706_);
lean_dec(v_a_2704_);
lean_dec_ref(v_b_2678_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v_e_2673_);
v___x_2738_ = v___x_2708_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v_e_2673_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
}
}
}
else
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2743_; 
lean_dec(v_a_2706_);
lean_dec(v_a_2704_);
lean_dec_ref(v_b_2678_);
lean_dec_ref(v_e_2673_);
v___x_2740_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2741_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2740_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v___x_2741_);
v___x_2743_ = v___x_2708_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v___x_2741_);
v___x_2743_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
return v___x_2743_;
}
}
}
v___jp_2745_:
{
uint8_t v___x_2755_; lean_object* v___x_2756_; 
v___x_2755_ = 0;
v___x_2756_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v___y_2754_, v_a_2704_, v_a_2706_, v___y_2750_, v___x_2702_, v___x_2755_, v___y_2753_, v___y_2752_, v___y_2748_, v___y_2747_, v___y_2746_, v___y_2749_, v___y_2751_);
return v___x_2756_;
}
v___jp_2762_:
{
if (v_underBinder_2758_ == 0)
{
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2767_);
goto v___jp_2710_;
}
else
{
if (v_descend_2757_ == 0)
{
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2767_);
goto v___jp_2710_;
}
else
{
lean_del_object(v___x_2708_);
lean_dec_ref(v_b_2678_);
lean_dec_ref(v_e_2673_);
v___y_2746_ = v___y_2764_;
v___y_2747_ = v___y_2763_;
v___y_2748_ = v___y_2765_;
v___y_2749_ = v___y_2766_;
v___y_2750_ = v___y_2767_;
v___y_2751_ = v___y_2768_;
v___y_2752_ = v___y_2769_;
v___y_2753_ = v___y_2770_;
v___y_2754_ = v___y_2771_;
goto v___jp_2745_;
}
}
}
v___jp_2772_:
{
lean_object* v___x_2781_; 
lean_inc(v_a_2706_);
lean_inc(v_a_2704_);
v___x_2781_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_2672_, v_n_2675_, v_a_2704_, v_a_2706_, v___y_2774_, v___y_2776_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; lean_object* v_fst_2783_; lean_object* v_snd_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___f_2788_; uint8_t v___x_2789_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_a_2782_);
lean_dec_ref_known(v___x_2781_, 1);
v_fst_2783_ = lean_ctor_get(v_a_2782_, 0);
lean_inc_n(v_fst_2783_, 2);
v_snd_2784_ = lean_ctor_get(v_a_2782_, 1);
lean_inc(v_snd_2784_);
lean_dec(v_a_2782_);
v___x_2785_ = lean_box(v___x_2702_);
v___x_2786_ = lean_box(v_isLet_2674_);
v___x_2787_ = lean_box(v_topLevel_2679_);
lean_inc(v_a_2706_);
lean_inc(v_a_2704_);
lean_inc_ref(v_e_2673_);
lean_inc_ref(v_b_2678_);
v___f_2788_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed), 18, 9);
lean_closure_set(v___f_2788_, 0, v_fst_2783_);
lean_closure_set(v___f_2788_, 1, v_fvars_2672_);
lean_closure_set(v___f_2788_, 2, v_b_2678_);
lean_closure_set(v___f_2788_, 3, v___x_2785_);
lean_closure_set(v___f_2788_, 4, v_e_2673_);
lean_closure_set(v___f_2788_, 5, v_a_2704_);
lean_closure_set(v___f_2788_, 6, v_a_2706_);
lean_closure_set(v___f_2788_, 7, v___x_2786_);
lean_closure_set(v___f_2788_, 8, v___x_2787_);
v___x_2789_ = lean_unbox(v_fst_2783_);
lean_dec(v_fst_2783_);
if (v___x_2789_ == 0)
{
v___y_2763_ = v___y_2777_;
v___y_2764_ = v___y_2778_;
v___y_2765_ = v___y_2776_;
v___y_2766_ = v___y_2779_;
v___y_2767_ = v___f_2788_;
v___y_2768_ = v___y_2780_;
v___y_2769_ = v___y_2775_;
v___y_2770_ = v___y_2774_;
v___y_2771_ = v_snd_2784_;
goto v___jp_2762_;
}
else
{
if (v___y_2773_ == 0)
{
lean_del_object(v___x_2708_);
lean_dec_ref(v_b_2678_);
lean_dec_ref(v_e_2673_);
v___y_2746_ = v___y_2778_;
v___y_2747_ = v___y_2777_;
v___y_2748_ = v___y_2776_;
v___y_2749_ = v___y_2779_;
v___y_2750_ = v___f_2788_;
v___y_2751_ = v___y_2780_;
v___y_2752_ = v___y_2775_;
v___y_2753_ = v___y_2774_;
v___y_2754_ = v_snd_2784_;
goto v___jp_2745_;
}
else
{
v___y_2763_ = v___y_2777_;
v___y_2764_ = v___y_2778_;
v___y_2765_ = v___y_2776_;
v___y_2766_ = v___y_2779_;
v___y_2767_ = v___f_2788_;
v___y_2768_ = v___y_2780_;
v___y_2769_ = v___y_2775_;
v___y_2770_ = v___y_2774_;
v___y_2771_ = v_snd_2784_;
goto v___jp_2762_;
}
}
}
else
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2797_; 
lean_del_object(v___x_2708_);
lean_dec(v_a_2706_);
lean_dec(v_a_2704_);
lean_dec_ref(v_b_2678_);
lean_dec_ref(v_e_2673_);
lean_dec(v_fvars_2672_);
v_a_2790_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2792_ = v___x_2781_;
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2781_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2795_; 
if (v_isShared_2793_ == 0)
{
v___x_2795_ = v___x_2792_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_a_2790_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
}
}
v___jp_2798_:
{
if (v_merge_2760_ == 0)
{
v___y_2773_ = v___y_2799_;
v___y_2774_ = v_a_2680_;
v___y_2775_ = v_a_2681_;
v___y_2776_ = v_a_2682_;
v___y_2777_ = v_a_2683_;
v___y_2778_ = v_a_2684_;
v___y_2779_ = v_a_2685_;
v___y_2780_ = v_a_2686_;
goto v___jp_2772_;
}
else
{
lean_object* v___x_2800_; lean_object* v_valueMap_2801_; lean_object* v___x_2802_; 
v___x_2800_ = lean_st_ref_get(v_a_2682_);
v_valueMap_2801_ = lean_ctor_get(v___x_2800_, 2);
lean_inc_ref(v_valueMap_2801_);
lean_dec(v___x_2800_);
v___x_2802_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_valueMap_2801_, v_a_2706_);
lean_dec_ref(v_valueMap_2801_);
if (lean_obj_tag(v___x_2802_) == 1)
{
lean_del_object(v___x_2708_);
lean_dec(v_a_2706_);
lean_dec(v_a_2704_);
lean_dec(v_n_2675_);
lean_dec_ref(v_e_2673_);
if (v_isLet_2674_ == 0)
{
lean_object* v_val_2803_; 
v_val_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_val_2803_);
lean_dec_ref_known(v___x_2802_, 1);
v___y_2689_ = v_val_2803_;
v___y_2690_ = v_a_2680_;
v___y_2691_ = v_a_2681_;
v___y_2692_ = v_a_2682_;
v___y_2693_ = v_a_2683_;
v___y_2694_ = v_a_2684_;
v___y_2695_ = v_a_2685_;
v___y_2696_ = v_a_2686_;
goto v___jp_2688_;
}
else
{
if (v_lift_2761_ == 0)
{
lean_object* v_val_2804_; 
v_val_2804_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_val_2804_);
lean_dec_ref_known(v___x_2802_, 1);
v___y_2689_ = v_val_2804_;
v___y_2690_ = v_a_2680_;
v___y_2691_ = v_a_2681_;
v___y_2692_ = v_a_2682_;
v___y_2693_ = v_a_2683_;
v___y_2694_ = v_a_2684_;
v___y_2695_ = v_a_2685_;
v___y_2696_ = v_a_2686_;
goto v___jp_2688_;
}
else
{
lean_object* v_val_2805_; lean_object* v___x_2806_; 
v_val_2805_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_val_2805_);
lean_dec_ref_known(v___x_2802_, 1);
v___x_2806_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_val_2805_, v_a_2682_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_dec_ref_known(v___x_2806_, 1);
v___y_2689_ = v_val_2805_;
v___y_2690_ = v_a_2680_;
v___y_2691_ = v_a_2681_;
v___y_2692_ = v_a_2682_;
v___y_2693_ = v_a_2683_;
v___y_2694_ = v_a_2684_;
v___y_2695_ = v_a_2685_;
v___y_2696_ = v_a_2686_;
goto v___jp_2688_;
}
else
{
lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
lean_dec(v_val_2805_);
lean_dec_ref(v_b_2678_);
lean_dec(v_fvars_2672_);
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2809_ = v___x_2806_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_dec(v___x_2806_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2807_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
}
}
else
{
lean_dec(v___x_2802_);
v___y_2773_ = v___y_2799_;
v___y_2774_ = v_a_2680_;
v___y_2775_ = v_a_2681_;
v___y_2776_ = v_a_2682_;
v___y_2777_ = v_a_2683_;
v___y_2778_ = v_a_2684_;
v___y_2779_ = v_a_2685_;
v___y_2780_ = v_a_2686_;
goto v___jp_2772_;
}
}
}
}
}
else
{
lean_dec(v_a_2704_);
lean_dec_ref(v_b_2678_);
lean_dec(v_n_2675_);
lean_dec_ref(v_e_2673_);
lean_dec(v_fvars_2672_);
return v___x_2705_;
}
}
else
{
lean_dec_ref(v_b_2678_);
lean_dec_ref(v_v_2677_);
lean_dec(v_n_2675_);
lean_dec_ref(v_e_2673_);
lean_dec(v_fvars_2672_);
return v___x_2703_;
}
v___jp_2688_:
{
lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
lean_inc(v___y_2689_);
v___x_2697_ = l_Lean_Expr_fvar___override(v___y_2689_);
v___x_2698_ = lean_expr_instantiate1(v_b_2678_, v___x_2697_);
lean_dec_ref(v___x_2697_);
lean_dec_ref(v_b_2678_);
v___x_2699_ = lean_box(v_topLevel_2679_);
v___x_2700_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___boxed), 11, 3);
lean_closure_set(v___x_2700_, 0, v_fvars_2672_);
lean_closure_set(v___x_2700_, 1, v___x_2698_);
lean_closure_set(v___x_2700_, 2, v___x_2699_);
v___x_2701_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v___y_2689_, v___x_2700_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
lean_dec(v___y_2689_);
return v___x_2701_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed(lean_object* v_fvars_2818_, lean_object* v_struct_2819_, lean_object* v___y_2820_, lean_object* v_typeName_2821_, lean_object* v_idx_2822_, lean_object* v_e_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
uint8_t v___y_42607__boxed_2832_; lean_object* v_res_2833_; 
v___y_42607__boxed_2832_ = lean_unbox(v___y_2820_);
v_res_2833_ = l_Lean_Meta_ExtractLets_extractCore___lam__2(v_fvars_2818_, v_struct_2819_, v___y_42607__boxed_2832_, v_typeName_2821_, v_idx_2822_, v_e_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2827_);
lean_dec(v___y_2826_);
lean_dec(v___y_2825_);
lean_dec_ref(v___y_2824_);
return v_res_2833_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4(void){
_start:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; 
v___x_2837_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3));
v___x_2838_ = lean_unsigned_to_nat(75u);
v___x_2839_ = lean_unsigned_to_nat(229u);
v___x_2840_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2));
v___x_2841_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1));
v___x_2842_ = l_mkPanicMessageWithDecl(v___x_2841_, v___x_2840_, v___x_2839_, v___x_2838_, v___x_2837_);
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3(uint8_t v_descend_2843_, lean_object* v_e_2844_, lean_object* v_fvars_2845_, uint8_t v___x_2846_, uint8_t v_topLevel_2847_, uint8_t v___y_2848_, lean_object* v_____r_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v_k_2859_; 
switch(lean_obj_tag(v_e_2844_))
{
case 5:
{
lean_object* v___x_2862_; lean_object* v_dummy_2863_; lean_object* v_nargs_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2862_ = l_Lean_Expr_getAppFn(v_e_2844_);
v_dummy_2863_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0);
v_nargs_2864_ = l_Lean_Expr_getAppNumArgs(v_e_2844_);
lean_inc(v_nargs_2864_);
v___x_2865_ = lean_mk_array(v_nargs_2864_, v_dummy_2863_);
v___x_2866_ = lean_unsigned_to_nat(1u);
v___x_2867_ = lean_nat_sub(v_nargs_2864_, v___x_2866_);
lean_dec(v_nargs_2864_);
lean_inc_ref(v_e_2844_);
v___x_2868_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2844_, v___x_2865_, v___x_2867_);
v___x_2869_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed), 11, 3);
lean_closure_set(v___x_2869_, 0, v_fvars_2845_);
lean_closure_set(v___x_2869_, 1, v___x_2862_);
lean_closure_set(v___x_2869_, 2, v___x_2868_);
v_k_2859_ = v___x_2869_;
goto v___jp_2858_;
}
case 6:
{
lean_object* v_binderName_2870_; lean_object* v_binderType_2871_; lean_object* v_body_2872_; uint8_t v_binderInfo_2873_; lean_object* v___x_2874_; lean_object* v___f_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; 
v_binderName_2870_ = lean_ctor_get(v_e_2844_, 0);
v_binderType_2871_ = lean_ctor_get(v_e_2844_, 1);
v_body_2872_ = lean_ctor_get(v_e_2844_, 2);
v_binderInfo_2873_ = lean_ctor_get_uint8(v_e_2844_, sizeof(void*)*3 + 8);
v___x_2874_ = lean_box(v_binderInfo_2873_);
lean_inc_ref(v_e_2844_);
lean_inc_ref_n(v_body_2872_, 2);
lean_inc_n(v_binderName_2870_, 2);
lean_inc_ref_n(v_binderType_2871_, 2);
v___f_2875_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2875_, 0, v_binderType_2871_);
lean_closure_set(v___f_2875_, 1, v_binderName_2870_);
lean_closure_set(v___f_2875_, 2, v___x_2874_);
lean_closure_set(v___f_2875_, 3, v_body_2872_);
lean_closure_set(v___f_2875_, 4, v_e_2844_);
v___x_2876_ = lean_box(v_binderInfo_2873_);
v___x_2877_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2877_, 0, v_fvars_2845_);
lean_closure_set(v___x_2877_, 1, v_binderName_2870_);
lean_closure_set(v___x_2877_, 2, v_binderType_2871_);
lean_closure_set(v___x_2877_, 3, v_body_2872_);
lean_closure_set(v___x_2877_, 4, v___x_2876_);
lean_closure_set(v___x_2877_, 5, v___f_2875_);
v_k_2859_ = v___x_2877_;
goto v___jp_2858_;
}
case 7:
{
lean_object* v_binderName_2878_; lean_object* v_binderType_2879_; lean_object* v_body_2880_; uint8_t v_binderInfo_2881_; lean_object* v___x_2882_; lean_object* v___f_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; 
v_binderName_2878_ = lean_ctor_get(v_e_2844_, 0);
v_binderType_2879_ = lean_ctor_get(v_e_2844_, 1);
v_body_2880_ = lean_ctor_get(v_e_2844_, 2);
v_binderInfo_2881_ = lean_ctor_get_uint8(v_e_2844_, sizeof(void*)*3 + 8);
v___x_2882_ = lean_box(v_binderInfo_2881_);
lean_inc_ref(v_e_2844_);
lean_inc_ref_n(v_body_2880_, 2);
lean_inc_n(v_binderName_2878_, 2);
lean_inc_ref_n(v_binderType_2879_, 2);
v___f_2883_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2883_, 0, v_binderType_2879_);
lean_closure_set(v___f_2883_, 1, v_binderName_2878_);
lean_closure_set(v___f_2883_, 2, v___x_2882_);
lean_closure_set(v___f_2883_, 3, v_body_2880_);
lean_closure_set(v___f_2883_, 4, v_e_2844_);
v___x_2884_ = lean_box(v_binderInfo_2881_);
v___x_2885_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2885_, 0, v_fvars_2845_);
lean_closure_set(v___x_2885_, 1, v_binderName_2878_);
lean_closure_set(v___x_2885_, 2, v_binderType_2879_);
lean_closure_set(v___x_2885_, 3, v_body_2880_);
lean_closure_set(v___x_2885_, 4, v___x_2884_);
lean_closure_set(v___x_2885_, 5, v___f_2883_);
v_k_2859_ = v___x_2885_;
goto v___jp_2858_;
}
case 8:
{
uint8_t v_nondep_2886_; 
v_nondep_2886_ = lean_ctor_get_uint8(v_e_2844_, sizeof(void*)*4 + 8);
if (v_nondep_2886_ == 0)
{
lean_object* v_declName_2887_; lean_object* v_type_2888_; lean_object* v_value_2889_; lean_object* v_body_2890_; lean_object* v___x_2891_; 
v_declName_2887_ = lean_ctor_get(v_e_2844_, 0);
lean_inc(v_declName_2887_);
v_type_2888_ = lean_ctor_get(v_e_2844_, 1);
lean_inc_ref(v_type_2888_);
v_value_2889_ = lean_ctor_get(v_e_2844_, 2);
lean_inc_ref(v_value_2889_);
v_body_2890_ = lean_ctor_get(v_e_2844_, 3);
lean_inc_ref(v_body_2890_);
v___x_2891_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2845_, v_e_2844_, v___x_2846_, v_declName_2887_, v_type_2888_, v_value_2889_, v_body_2890_, v_topLevel_2847_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
return v___x_2891_;
}
else
{
lean_object* v_declName_2892_; lean_object* v_type_2893_; lean_object* v_value_2894_; lean_object* v_body_2895_; lean_object* v___x_2896_; 
v_declName_2892_ = lean_ctor_get(v_e_2844_, 0);
lean_inc(v_declName_2892_);
v_type_2893_ = lean_ctor_get(v_e_2844_, 1);
lean_inc_ref(v_type_2893_);
v_value_2894_ = lean_ctor_get(v_e_2844_, 2);
lean_inc_ref(v_value_2894_);
v_body_2895_ = lean_ctor_get(v_e_2844_, 3);
lean_inc_ref(v_body_2895_);
v___x_2896_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2845_, v_e_2844_, v___y_2848_, v_declName_2892_, v_type_2893_, v_value_2894_, v_body_2895_, v_topLevel_2847_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
return v___x_2896_;
}
}
case 10:
{
lean_object* v_data_2897_; lean_object* v_expr_2898_; lean_object* v___x_2899_; 
v_data_2897_ = lean_ctor_get(v_e_2844_, 0);
v_expr_2898_ = lean_ctor_get(v_e_2844_, 1);
lean_inc_ref(v_expr_2898_);
v___x_2899_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2845_, v_expr_2898_, v_topLevel_2847_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2914_; 
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2902_ = v___x_2899_;
v_isShared_2903_ = v_isSharedCheck_2914_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2899_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2914_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
size_t v___x_2904_; size_t v___x_2905_; uint8_t v___x_2906_; 
v___x_2904_ = lean_ptr_addr(v_expr_2898_);
v___x_2905_ = lean_ptr_addr(v_a_2900_);
v___x_2906_ = lean_usize_dec_eq(v___x_2904_, v___x_2905_);
if (v___x_2906_ == 0)
{
lean_object* v___x_2907_; lean_object* v___x_2909_; 
lean_inc(v_data_2897_);
lean_dec_ref_known(v_e_2844_, 2);
v___x_2907_ = l_Lean_Expr_mdata___override(v_data_2897_, v_a_2900_);
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 0, v___x_2907_);
v___x_2909_ = v___x_2902_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v___x_2907_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
else
{
lean_object* v___x_2912_; 
lean_dec(v_a_2900_);
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 0, v_e_2844_);
v___x_2912_ = v___x_2902_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_e_2844_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
return v___x_2912_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2844_, 2);
return v___x_2899_;
}
}
case 11:
{
lean_object* v_typeName_2915_; lean_object* v_idx_2916_; lean_object* v_struct_2917_; lean_object* v___x_2918_; lean_object* v___f_2919_; 
v_typeName_2915_ = lean_ctor_get(v_e_2844_, 0);
v_idx_2916_ = lean_ctor_get(v_e_2844_, 1);
v_struct_2917_ = lean_ctor_get(v_e_2844_, 2);
v___x_2918_ = lean_box(v___y_2848_);
lean_inc_ref(v_e_2844_);
lean_inc(v_idx_2916_);
lean_inc(v_typeName_2915_);
lean_inc_ref(v_struct_2917_);
v___f_2919_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed), 14, 6);
lean_closure_set(v___f_2919_, 0, v_fvars_2845_);
lean_closure_set(v___f_2919_, 1, v_struct_2917_);
lean_closure_set(v___f_2919_, 2, v___x_2918_);
lean_closure_set(v___f_2919_, 3, v_typeName_2915_);
lean_closure_set(v___f_2919_, 4, v_idx_2916_);
lean_closure_set(v___f_2919_, 5, v_e_2844_);
v_k_2859_ = v___f_2919_;
goto v___jp_2858_;
}
default: 
{
lean_object* v___x_2920_; lean_object* v___x_2921_; 
lean_dec(v_fvars_2845_);
lean_dec_ref(v_e_2844_);
v___x_2920_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4);
v___x_2921_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v___x_2920_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
return v___x_2921_;
}
}
v___jp_2858_:
{
if (v_descend_2843_ == 0)
{
lean_object* v___x_2860_; 
lean_dec_ref(v_k_2859_);
v___x_2860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2860_, 0, v_e_2844_);
return v___x_2860_;
}
else
{
lean_object* v___x_2861_; 
lean_dec_ref(v_e_2844_);
lean_inc(v___y_2856_);
lean_inc_ref(v___y_2855_);
lean_inc(v___y_2854_);
lean_inc_ref(v___y_2853_);
lean_inc(v___y_2852_);
lean_inc(v___y_2851_);
lean_inc_ref(v___y_2850_);
v___x_2861_ = lean_apply_8(v_k_2859_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, lean_box(0));
return v___x_2861_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed(lean_object* v_descend_2922_, lean_object* v_e_2923_, lean_object* v_fvars_2924_, lean_object* v___x_2925_, lean_object* v_topLevel_2926_, lean_object* v___y_2927_, lean_object* v_____r_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_){
_start:
{
uint8_t v_descend_boxed_2937_; uint8_t v___x_42760__boxed_2938_; uint8_t v_topLevel_boxed_2939_; uint8_t v___y_42761__boxed_2940_; lean_object* v_res_2941_; 
v_descend_boxed_2937_ = lean_unbox(v_descend_2922_);
v___x_42760__boxed_2938_ = lean_unbox(v___x_2925_);
v_topLevel_boxed_2939_ = lean_unbox(v_topLevel_2926_);
v___y_42761__boxed_2940_ = lean_unbox(v___y_2927_);
v_res_2941_ = l_Lean_Meta_ExtractLets_extractCore___lam__3(v_descend_boxed_2937_, v_e_2923_, v_fvars_2924_, v___x_42760__boxed_2938_, v_topLevel_boxed_2939_, v___y_42761__boxed_2940_, v_____r_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
lean_dec(v___y_2935_);
lean_dec_ref(v___y_2934_);
lean_dec(v___y_2933_);
lean_dec_ref(v___y_2932_);
lean_dec(v___y_2931_);
lean_dec(v___y_2930_);
lean_dec_ref(v___y_2929_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore(lean_object* v_fvars_2942_, lean_object* v_e_2943_, uint8_t v_topLevel_2944_, lean_object* v_a_2945_, lean_object* v_a_2946_, lean_object* v_a_2947_, lean_object* v_a_2948_, lean_object* v_a_2949_, lean_object* v_a_2950_, lean_object* v_a_2951_){
_start:
{
lean_object* v___y_2954_; lean_object* v_a_2955_; lean_object* v___y_2961_; lean_object* v___y_2962_; lean_object* v___y_2965_; lean_object* v___y_2966_; uint8_t v___x_2969_; 
v___x_2969_ = l_Lean_Expr_isAtomic(v_e_2943_);
if (v___x_2969_ == 0)
{
uint8_t v_proofs_2970_; uint8_t v_types_2971_; uint8_t v_descend_2972_; lean_object* v___y_2974_; lean_object* v___y_2975_; uint8_t v___y_2992_; 
v_proofs_2970_ = lean_ctor_get_uint8(v_a_2945_, 0);
v_types_2971_ = lean_ctor_get_uint8(v_a_2945_, 1);
v_descend_2972_ = lean_ctor_get_uint8(v_a_2945_, 3);
if (v_descend_2972_ == 0)
{
if (v_topLevel_2944_ == 0)
{
lean_object* v___x_3015_; 
lean_dec(v_fvars_2942_);
v___x_3015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3015_, 0, v_e_2943_);
return v___x_3015_;
}
else
{
v___y_2992_ = v___x_2969_;
goto v___jp_2991_;
}
}
else
{
v___y_2992_ = v___x_2969_;
goto v___jp_2991_;
}
v___jp_2973_:
{
if (v_proofs_2970_ == 0)
{
lean_object* v___x_2976_; 
lean_inc_ref(v_e_2943_);
v___x_2976_ = l_Lean_Meta_isProof(v_e_2943_, v_a_2948_, v_a_2949_, v_a_2950_, v_a_2951_);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v_a_2977_; uint8_t v___x_2978_; 
v_a_2977_ = lean_ctor_get(v___x_2976_, 0);
lean_inc(v_a_2977_);
lean_dec_ref_known(v___x_2976_, 1);
v___x_2978_ = lean_unbox(v_a_2977_);
lean_dec(v_a_2977_);
if (v___x_2978_ == 0)
{
lean_object* v___x_2979_; lean_object* v___x_2980_; 
lean_dec_ref(v_e_2943_);
v___x_2979_ = lean_box(0);
lean_inc(v_a_2951_);
lean_inc_ref(v_a_2950_);
lean_inc(v_a_2949_);
lean_inc_ref(v_a_2948_);
lean_inc(v_a_2947_);
lean_inc(v_a_2946_);
lean_inc_ref(v_a_2945_);
v___x_2980_ = lean_apply_9(v___y_2975_, v___x_2979_, v_a_2945_, v_a_2946_, v_a_2947_, v_a_2948_, v_a_2949_, v_a_2950_, v_a_2951_, lean_box(0));
v___y_2961_ = v___y_2974_;
v___y_2962_ = v___x_2980_;
goto v___jp_2960_;
}
else
{
lean_dec_ref(v___y_2975_);
v___y_2954_ = v___y_2974_;
v_a_2955_ = v_e_2943_;
goto v___jp_2953_;
}
}
else
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2988_; 
lean_dec_ref(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec_ref(v_e_2943_);
v_a_2981_ = lean_ctor_get(v___x_2976_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2983_ = v___x_2976_;
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2976_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2986_; 
if (v_isShared_2984_ == 0)
{
v___x_2986_ = v___x_2983_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2981_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
}
else
{
lean_object* v___x_2989_; lean_object* v___x_2990_; 
lean_dec_ref(v_e_2943_);
v___x_2989_ = lean_box(0);
lean_inc(v_a_2951_);
lean_inc_ref(v_a_2950_);
lean_inc(v_a_2949_);
lean_inc_ref(v_a_2948_);
lean_inc(v_a_2947_);
lean_inc(v_a_2946_);
lean_inc_ref(v_a_2945_);
v___x_2990_ = lean_apply_9(v___y_2975_, v___x_2989_, v_a_2945_, v_a_2946_, v_a_2947_, v_a_2948_, v_a_2949_, v_a_2950_, v_a_2951_, lean_box(0));
v___y_2961_ = v___y_2974_;
v___y_2962_ = v___x_2990_;
goto v___jp_2960_;
}
}
v___jp_2991_:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; 
v___x_2993_ = lean_box(v_topLevel_2944_);
lean_inc_ref(v_e_2943_);
v___x_2994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2994_, 0, v___x_2993_);
lean_ctor_set(v___x_2994_, 1, v_e_2943_);
v___x_2995_ = lean_st_ref_get(v_a_2946_);
v___x_2996_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v___x_2995_, v___x_2994_);
lean_dec(v___x_2995_);
if (lean_obj_tag(v___x_2996_) == 0)
{
uint8_t v___x_2997_; 
v___x_2997_ = l_Lean_Meta_ExtractLets_containsLet(v_e_2943_);
if (v___x_2997_ == 0)
{
lean_dec(v_fvars_2942_);
v___y_2954_ = v___x_2994_;
v_a_2955_ = v_e_2943_;
goto v___jp_2953_;
}
else
{
lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___f_3002_; lean_object* v___x_3003_; lean_object* v___f_3004_; 
v___x_2998_ = lean_box(v_descend_2972_);
v___x_2999_ = lean_box(v___x_2997_);
v___x_3000_ = lean_box(v_topLevel_2944_);
v___x_3001_ = lean_box(v___y_2992_);
lean_inc_ref_n(v_e_2943_, 2);
v___f_3002_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed), 15, 6);
lean_closure_set(v___f_3002_, 0, v___x_2998_);
lean_closure_set(v___f_3002_, 1, v_e_2943_);
lean_closure_set(v___f_3002_, 2, v_fvars_2942_);
lean_closure_set(v___f_3002_, 3, v___x_2999_);
lean_closure_set(v___f_3002_, 4, v___x_3000_);
lean_closure_set(v___f_3002_, 5, v___x_3001_);
v___x_3003_ = lean_box(v_types_2971_);
lean_inc_ref(v___f_3002_);
v___f_3004_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed), 12, 3);
lean_closure_set(v___f_3004_, 0, v___x_3003_);
lean_closure_set(v___f_3004_, 1, v_e_2943_);
lean_closure_set(v___f_3004_, 2, v___f_3002_);
if (v_topLevel_2944_ == 0)
{
lean_dec_ref(v___f_3002_);
v___y_2974_ = v___x_2994_;
v___y_2975_ = v___f_3004_;
goto v___jp_2973_;
}
else
{
uint8_t v___x_3005_; 
v___x_3005_ = l_Lean_Expr_isLet(v_e_2943_);
if (v___x_3005_ == 0)
{
uint8_t v___x_3006_; 
v___x_3006_ = l_Lean_Expr_isMData(v_e_2943_);
if (v___x_3006_ == 0)
{
lean_dec_ref(v___f_3002_);
v___y_2974_ = v___x_2994_;
v___y_2975_ = v___f_3004_;
goto v___jp_2973_;
}
else
{
lean_dec_ref(v___f_3004_);
lean_dec_ref(v_e_2943_);
v___y_2965_ = v___x_2994_;
v___y_2966_ = v___f_3002_;
goto v___jp_2964_;
}
}
else
{
lean_dec_ref(v___f_3004_);
lean_dec_ref(v_e_2943_);
v___y_2965_ = v___x_2994_;
v___y_2966_ = v___f_3002_;
goto v___jp_2964_;
}
}
}
}
else
{
lean_object* v_val_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3014_; 
lean_dec_ref_known(v___x_2994_, 2);
lean_dec_ref(v_e_2943_);
lean_dec(v_fvars_2942_);
v_val_3007_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_3009_ = v___x_2996_;
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_val_3007_);
lean_dec(v___x_2996_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v___x_3012_; 
if (v_isShared_3010_ == 0)
{
lean_ctor_set_tag(v___x_3009_, 0);
v___x_3012_ = v___x_3009_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_val_3007_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
}
}
else
{
lean_object* v___x_3016_; 
lean_dec(v_fvars_2942_);
v___x_3016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3016_, 0, v_e_2943_);
return v___x_3016_;
}
v___jp_2953_:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2956_ = lean_st_ref_take(v_a_2946_);
lean_inc_ref(v_a_2955_);
v___x_2957_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v___x_2956_, v___y_2954_, v_a_2955_);
v___x_2958_ = lean_st_ref_put(v_a_2946_, v___x_2957_);
v___x_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2959_, 0, v_a_2955_);
return v___x_2959_;
}
v___jp_2960_:
{
if (lean_obj_tag(v___y_2962_) == 0)
{
lean_object* v_a_2963_; 
v_a_2963_ = lean_ctor_get(v___y_2962_, 0);
lean_inc(v_a_2963_);
lean_dec_ref_known(v___y_2962_, 1);
v___y_2954_ = v___y_2961_;
v_a_2955_ = v_a_2963_;
goto v___jp_2953_;
}
else
{
lean_dec_ref(v___y_2961_);
return v___y_2962_;
}
}
v___jp_2964_:
{
lean_object* v___x_2967_; lean_object* v___x_2968_; 
v___x_2967_ = lean_box(0);
lean_inc(v_a_2951_);
lean_inc_ref(v_a_2950_);
lean_inc(v_a_2949_);
lean_inc_ref(v_a_2948_);
lean_inc(v_a_2947_);
lean_inc(v_a_2946_);
lean_inc_ref(v_a_2945_);
v___x_2968_ = lean_apply_9(v___y_2966_, v___x_2967_, v_a_2945_, v_a_2946_, v_a_2947_, v_a_2948_, v_a_2949_, v_a_2950_, v_a_2951_, lean_box(0));
v___y_2961_ = v___y_2965_;
v___y_2962_ = v___x_2968_;
goto v___jp_2960_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2(lean_object* v_fvars_3017_, lean_object* v_struct_3018_, uint8_t v___y_3019_, lean_object* v_typeName_3020_, lean_object* v_idx_3021_, lean_object* v_e_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_){
_start:
{
lean_object* v___x_3031_; 
lean_inc_ref(v_struct_3018_);
v___x_3031_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_3017_, v_struct_3018_, v___y_3019_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_, v___y_3029_);
if (lean_obj_tag(v___x_3031_) == 0)
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3046_; 
v_a_3032_ = lean_ctor_get(v___x_3031_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_3031_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3034_ = v___x_3031_;
v_isShared_3035_ = v_isSharedCheck_3046_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v___x_3031_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3046_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
size_t v___x_3036_; size_t v___x_3037_; uint8_t v___x_3038_; 
v___x_3036_ = lean_ptr_addr(v_struct_3018_);
lean_dec_ref(v_struct_3018_);
v___x_3037_ = lean_ptr_addr(v_a_3032_);
v___x_3038_ = lean_usize_dec_eq(v___x_3036_, v___x_3037_);
if (v___x_3038_ == 0)
{
lean_object* v___x_3039_; lean_object* v___x_3041_; 
lean_dec_ref(v_e_3022_);
v___x_3039_ = l_Lean_Expr_proj___override(v_typeName_3020_, v_idx_3021_, v_a_3032_);
if (v_isShared_3035_ == 0)
{
lean_ctor_set(v___x_3034_, 0, v___x_3039_);
v___x_3041_ = v___x_3034_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v___x_3039_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
else
{
lean_object* v___x_3044_; 
lean_dec(v_a_3032_);
lean_dec(v_idx_3021_);
lean_dec(v_typeName_3020_);
if (v_isShared_3035_ == 0)
{
lean_ctor_set(v___x_3034_, 0, v_e_3022_);
v___x_3044_ = v___x_3034_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_e_3022_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
}
else
{
lean_dec_ref(v_e_3022_);
lean_dec(v_idx_3021_);
lean_dec(v_typeName_3020_);
lean_dec_ref(v_struct_3018_);
return v___x_3031_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7___boxed(lean_object* v_fvars_3047_, lean_object* v_sz_3048_, lean_object* v_i_3049_, lean_object* v_bs_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_){
_start:
{
size_t v_sz_boxed_3059_; size_t v_i_boxed_3060_; lean_object* v_res_3061_; 
v_sz_boxed_3059_ = lean_unbox_usize(v_sz_3048_);
lean_dec(v_sz_3048_);
v_i_boxed_3060_ = lean_unbox_usize(v_i_3049_);
lean_dec(v_i_3049_);
v_res_3061_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(v_fvars_3047_, v_sz_boxed_3059_, v_i_boxed_3060_, v_bs_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3055_);
lean_dec_ref(v___y_3054_);
lean_dec(v___y_3053_);
lean_dec(v___y_3052_);
lean_dec_ref(v___y_3051_);
return v_res_3061_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg___boxed(lean_object* v_upperBound_3062_, lean_object* v_fst_3063_, lean_object* v_fvars_3064_, lean_object* v_a_3065_, lean_object* v_b_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v_res_3075_; 
v_res_3075_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3062_, v_fst_3063_, v_fvars_3064_, v_a_3065_, v_b_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_);
lean_dec(v___y_3073_);
lean_dec_ref(v___y_3072_);
lean_dec(v___y_3071_);
lean_dec_ref(v___y_3070_);
lean_dec(v___y_3069_);
lean_dec(v___y_3068_);
lean_dec_ref(v___y_3067_);
lean_dec_ref(v_fst_3063_);
lean_dec(v_upperBound_3062_);
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___boxed(lean_object* v_fvars_3076_, lean_object* v_e_3077_, lean_object* v_isLet_3078_, lean_object* v_n_3079_, lean_object* v_t_3080_, lean_object* v_v_3081_, lean_object* v_b_3082_, lean_object* v_topLevel_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_, lean_object* v_a_3090_, lean_object* v_a_3091_){
_start:
{
uint8_t v_isLet_boxed_3092_; uint8_t v_topLevel_boxed_3093_; lean_object* v_res_3094_; 
v_isLet_boxed_3092_ = lean_unbox(v_isLet_3078_);
v_topLevel_boxed_3093_ = lean_unbox(v_topLevel_3083_);
v_res_3094_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_3076_, v_e_3077_, v_isLet_boxed_3092_, v_n_3079_, v_t_3080_, v_v_3081_, v_b_3082_, v_topLevel_boxed_3093_, v_a_3084_, v_a_3085_, v_a_3086_, v_a_3087_, v_a_3088_, v_a_3089_, v_a_3090_);
lean_dec(v_a_3090_);
lean_dec_ref(v_a_3089_);
lean_dec(v_a_3088_);
lean_dec_ref(v_a_3087_);
lean_dec(v_a_3086_);
lean_dec(v_a_3085_);
lean_dec_ref(v_a_3084_);
return v_res_3094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(lean_object* v_00_u03b1_3095_, lean_object* v_name_3096_, lean_object* v_type_3097_, lean_object* v_val_3098_, lean_object* v_k_3099_, uint8_t v_nondep_3100_, uint8_t v_kind_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_){
_start:
{
lean_object* v___x_3110_; 
v___x_3110_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_3096_, v_type_3097_, v_val_3098_, v_k_3099_, v_nondep_3100_, v_kind_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_);
return v___x_3110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___boxed(lean_object* v_00_u03b1_3111_, lean_object* v_name_3112_, lean_object* v_type_3113_, lean_object* v_val_3114_, lean_object* v_k_3115_, lean_object* v_nondep_3116_, lean_object* v_kind_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
uint8_t v_nondep_boxed_3126_; uint8_t v_kind_boxed_3127_; lean_object* v_res_3128_; 
v_nondep_boxed_3126_ = lean_unbox(v_nondep_3116_);
v_kind_boxed_3127_ = lean_unbox(v_kind_3117_);
v_res_3128_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(v_00_u03b1_3111_, v_name_3112_, v_type_3113_, v_val_3114_, v_k_3115_, v_nondep_boxed_3126_, v_kind_boxed_3127_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v___y_3120_);
lean_dec(v___y_3119_);
lean_dec_ref(v___y_3118_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2(lean_object* v_00_u03b2_3129_, lean_object* v_m_3130_, lean_object* v_a_3131_, lean_object* v_b_3132_){
_start:
{
lean_object* v___x_3133_; 
v___x_3133_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v_m_3130_, v_a_3131_, v_b_3132_);
return v___x_3133_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(lean_object* v_00_u03b2_3134_, lean_object* v_m_3135_, lean_object* v_a_3136_){
_start:
{
lean_object* v___x_3137_; 
v___x_3137_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_3135_, v_a_3136_);
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___boxed(lean_object* v_00_u03b2_3138_, lean_object* v_m_3139_, lean_object* v_a_3140_){
_start:
{
lean_object* v_res_3141_; 
v_res_3141_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(v_00_u03b2_3138_, v_m_3139_, v_a_3140_);
lean_dec_ref(v_a_3140_);
lean_dec_ref(v_m_3139_);
return v_res_3141_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(lean_object* v_upperBound_3142_, lean_object* v_fst_3143_, lean_object* v_fvars_3144_, lean_object* v_inst_3145_, lean_object* v_R_3146_, lean_object* v_a_3147_, lean_object* v_b_3148_, lean_object* v_c_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_){
_start:
{
lean_object* v___x_3158_; 
v___x_3158_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3142_, v_fst_3143_, v_fvars_3144_, v_a_3147_, v_b_3148_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_);
return v___x_3158_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___boxed(lean_object* v_upperBound_3159_, lean_object* v_fst_3160_, lean_object* v_fvars_3161_, lean_object* v_inst_3162_, lean_object* v_R_3163_, lean_object* v_a_3164_, lean_object* v_b_3165_, lean_object* v_c_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_){
_start:
{
lean_object* v_res_3175_; 
v_res_3175_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(v_upperBound_3159_, v_fst_3160_, v_fvars_3161_, v_inst_3162_, v_R_3163_, v_a_3164_, v_b_3165_, v_c_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
lean_dec(v___y_3173_);
lean_dec_ref(v___y_3172_);
lean_dec(v___y_3171_);
lean_dec_ref(v___y_3170_);
lean_dec(v___y_3169_);
lean_dec(v___y_3168_);
lean_dec_ref(v___y_3167_);
lean_dec_ref(v_fst_3160_);
lean_dec(v_upperBound_3159_);
return v_res_3175_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(lean_object* v_00_u03b2_3176_, lean_object* v_m_3177_, lean_object* v_a_3178_){
_start:
{
lean_object* v___x_3179_; 
v___x_3179_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_3177_, v_a_3178_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___boxed(lean_object* v_00_u03b2_3180_, lean_object* v_m_3181_, lean_object* v_a_3182_){
_start:
{
lean_object* v_res_3183_; 
v_res_3183_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(v_00_u03b2_3180_, v_m_3181_, v_a_3182_);
lean_dec_ref(v_a_3182_);
lean_dec_ref(v_m_3181_);
return v_res_3183_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(lean_object* v_00_u03b2_3184_, lean_object* v_a_3185_, lean_object* v_x_3186_){
_start:
{
uint8_t v___x_3187_; 
v___x_3187_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_3185_, v_x_3186_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3188_, lean_object* v_a_3189_, lean_object* v_x_3190_){
_start:
{
uint8_t v_res_3191_; lean_object* v_r_3192_; 
v_res_3191_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(v_00_u03b2_3188_, v_a_3189_, v_x_3190_);
lean_dec(v_x_3190_);
lean_dec_ref(v_a_3189_);
v_r_3192_ = lean_box(v_res_3191_);
return v_r_3192_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3(lean_object* v_00_u03b2_3193_, lean_object* v_data_3194_){
_start:
{
lean_object* v___x_3195_; 
v___x_3195_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_data_3194_);
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4(lean_object* v_00_u03b2_3196_, lean_object* v_a_3197_, lean_object* v_b_3198_, lean_object* v_x_3199_){
_start:
{
lean_object* v___x_3200_; 
v___x_3200_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_3197_, v_b_3198_, v_x_3199_);
return v___x_3200_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(lean_object* v_00_u03b2_3201_, lean_object* v_a_3202_, lean_object* v_x_3203_){
_start:
{
lean_object* v___x_3204_; 
v___x_3204_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_3202_, v_x_3203_);
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3205_, lean_object* v_a_3206_, lean_object* v_x_3207_){
_start:
{
lean_object* v_res_3208_; 
v_res_3208_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(v_00_u03b2_3205_, v_a_3206_, v_x_3207_);
lean_dec(v_x_3207_);
lean_dec_ref(v_a_3206_);
return v_res_3208_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(lean_object* v_00_u03b2_3209_, lean_object* v_a_3210_, lean_object* v_x_3211_){
_start:
{
lean_object* v___x_3212_; 
v___x_3212_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_3210_, v_x_3211_);
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___boxed(lean_object* v_00_u03b2_3213_, lean_object* v_a_3214_, lean_object* v_x_3215_){
_start:
{
lean_object* v_res_3216_; 
v_res_3216_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(v_00_u03b2_3213_, v_a_3214_, v_x_3215_);
lean_dec(v_x_3215_);
lean_dec_ref(v_a_3214_);
return v_res_3216_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9(lean_object* v_00_u03b2_3217_, lean_object* v_i_3218_, lean_object* v_source_3219_, lean_object* v_target_3220_){
_start:
{
lean_object* v___x_3221_; 
v___x_3221_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v_i_3218_, v_source_3219_, v_target_3220_);
return v___x_3221_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14(lean_object* v_00_u03b2_3222_, lean_object* v_x_3223_, lean_object* v_x_3224_){
_start:
{
lean_object* v___x_3225_; 
v___x_3225_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_x_3223_, v_x_3224_);
return v___x_3225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel(lean_object* v_e_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_, lean_object* v_a_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_, lean_object* v_a_3232_, lean_object* v_a_3233_){
_start:
{
lean_object* v___x_3235_; lean_object* v_a_3236_; lean_object* v___x_3237_; uint8_t v___x_3238_; lean_object* v___x_3239_; 
v___x_3235_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_3226_, v_a_3231_);
v_a_3236_ = lean_ctor_get(v___x_3235_, 0);
lean_inc(v_a_3236_);
lean_dec_ref(v___x_3235_);
v___x_3237_ = lean_box(0);
v___x_3238_ = 1;
v___x_3239_ = l_Lean_Meta_ExtractLets_extractCore(v___x_3237_, v_a_3236_, v___x_3238_, v_a_3227_, v_a_3228_, v_a_3229_, v_a_3230_, v_a_3231_, v_a_3232_, v_a_3233_);
return v___x_3239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel___boxed(lean_object* v_e_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_){
_start:
{
lean_object* v_res_3249_; 
v_res_3249_ = l_Lean_Meta_ExtractLets_extractTopLevel(v_e_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_, v_a_3246_, v_a_3247_);
lean_dec(v_a_3247_);
lean_dec_ref(v_a_3246_);
lean_dec(v_a_3245_);
lean_dec_ref(v_a_3244_);
lean_dec(v_a_3243_);
lean_dec(v_a_3242_);
lean_dec_ref(v_a_3241_);
return v_res_3249_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(size_t v_sz_3250_, size_t v_i_3251_, lean_object* v_bs_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_){
_start:
{
uint8_t v___x_3261_; 
v___x_3261_ = lean_usize_dec_lt(v_i_3251_, v_sz_3250_);
if (v___x_3261_ == 0)
{
lean_object* v___x_3262_; 
v___x_3262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3262_, 0, v_bs_3252_);
return v___x_3262_;
}
else
{
lean_object* v_v_3263_; lean_object* v___x_3264_; lean_object* v_bs_x27_3265_; lean_object* v___x_3266_; 
v_v_3263_ = lean_array_uget(v_bs_3252_, v_i_3251_);
v___x_3264_ = lean_unsigned_to_nat(0u);
v_bs_x27_3265_ = lean_array_uset(v_bs_3252_, v_i_3251_, v___x_3264_);
v___x_3266_ = l_Lean_Meta_ExtractLets_extractTopLevel(v_v_3263_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_object* v_a_3267_; size_t v___x_3268_; size_t v___x_3269_; lean_object* v___x_3270_; 
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3267_);
lean_dec_ref_known(v___x_3266_, 1);
v___x_3268_ = ((size_t)1ULL);
v___x_3269_ = lean_usize_add(v_i_3251_, v___x_3268_);
v___x_3270_ = lean_array_uset(v_bs_x27_3265_, v_i_3251_, v_a_3267_);
v_i_3251_ = v___x_3269_;
v_bs_3252_ = v___x_3270_;
goto _start;
}
else
{
lean_object* v_a_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3279_; 
lean_dec_ref(v_bs_x27_3265_);
v_a_3272_ = lean_ctor_get(v___x_3266_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3266_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3274_ = v___x_3266_;
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_a_3272_);
lean_dec(v___x_3266_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3277_; 
if (v_isShared_3275_ == 0)
{
v___x_3277_ = v___x_3274_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v_a_3272_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0___boxed(lean_object* v_sz_3280_, lean_object* v_i_3281_, lean_object* v_bs_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_){
_start:
{
size_t v_sz_boxed_3291_; size_t v_i_boxed_3292_; lean_object* v_res_3293_; 
v_sz_boxed_3291_ = lean_unbox_usize(v_sz_3280_);
lean_dec(v_sz_3280_);
v_i_boxed_3292_ = lean_unbox_usize(v_i_3281_);
lean_dec(v_i_3281_);
v_res_3293_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(v_sz_boxed_3291_, v_i_boxed_3292_, v_bs_3282_, v___y_3283_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
lean_dec(v___y_3287_);
lean_dec_ref(v___y_3286_);
lean_dec(v___y_3285_);
lean_dec(v___y_3284_);
lean_dec_ref(v___y_3283_);
return v_res_3293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract(lean_object* v_es_3294_, lean_object* v_a_3295_, lean_object* v_a_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_){
_start:
{
lean_object* v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3308_; lean_object* v___y_3309_; lean_object* v___y_3310_; uint8_t v_merge_3314_; 
v_merge_3314_ = lean_ctor_get_uint8(v_a_3295_, 6);
if (v_merge_3314_ == 0)
{
v___y_3304_ = v_a_3295_;
v___y_3305_ = v_a_3296_;
v___y_3306_ = v_a_3297_;
v___y_3307_ = v_a_3298_;
v___y_3308_ = v_a_3299_;
v___y_3309_ = v_a_3300_;
v___y_3310_ = v_a_3301_;
goto v___jp_3303_;
}
else
{
uint8_t v_useContext_3315_; 
v_useContext_3315_ = lean_ctor_get_uint8(v_a_3295_, 7);
if (v_useContext_3315_ == 0)
{
v___y_3304_ = v_a_3295_;
v___y_3305_ = v_a_3296_;
v___y_3306_ = v_a_3297_;
v___y_3307_ = v_a_3298_;
v___y_3308_ = v_a_3299_;
v___y_3309_ = v_a_3300_;
v___y_3310_ = v_a_3301_;
goto v___jp_3303_;
}
else
{
lean_object* v___x_3316_; 
v___x_3316_ = l_Lean_Meta_ExtractLets_initializeValueMap(v_a_3295_, v_a_3296_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_dec_ref_known(v___x_3316_, 1);
v___y_3304_ = v_a_3295_;
v___y_3305_ = v_a_3296_;
v___y_3306_ = v_a_3297_;
v___y_3307_ = v_a_3298_;
v___y_3308_ = v_a_3299_;
v___y_3309_ = v_a_3300_;
v___y_3310_ = v_a_3301_;
goto v___jp_3303_;
}
else
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3324_; 
lean_dec_ref(v_es_3294_);
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3319_ = v___x_3316_;
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3316_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3322_; 
if (v_isShared_3320_ == 0)
{
v___x_3322_ = v___x_3319_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v_a_3317_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
}
}
v___jp_3303_:
{
size_t v_sz_3311_; size_t v___x_3312_; lean_object* v___x_3313_; 
v_sz_3311_ = lean_array_size(v_es_3294_);
v___x_3312_ = ((size_t)0ULL);
v___x_3313_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(v_sz_3311_, v___x_3312_, v_es_3294_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_);
return v___x_3313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract___boxed(lean_object* v_es_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_, lean_object* v_a_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_){
_start:
{
lean_object* v_res_3334_; 
v_res_3334_ = l_Lean_Meta_ExtractLets_extract(v_es_3325_, v_a_3326_, v_a_3327_, v_a_3328_, v_a_3329_, v_a_3330_, v_a_3331_, v_a_3332_);
lean_dec(v_a_3332_);
lean_dec_ref(v_a_3331_);
lean_dec(v_a_3330_);
lean_dec_ref(v_a_3329_);
lean_dec(v_a_3328_);
lean_dec(v_a_3327_);
lean_dec_ref(v_a_3326_);
return v_res_3334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(lean_object* v_decls_3335_, lean_object* v_x_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_){
_start:
{
lean_object* v___x_3342_; 
v___x_3342_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_box(0), v_decls_3335_, v_x_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_);
if (lean_obj_tag(v___x_3342_) == 0)
{
lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3350_; 
v_a_3343_ = lean_ctor_get(v___x_3342_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3345_ = v___x_3342_;
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v___x_3342_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3348_; 
if (v_isShared_3346_ == 0)
{
v___x_3348_ = v___x_3345_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v_a_3343_);
v___x_3348_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
return v___x_3348_;
}
}
}
else
{
lean_object* v_a_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3358_; 
v_a_3351_ = lean_ctor_get(v___x_3342_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3353_ = v___x_3342_;
v_isShared_3354_ = v_isSharedCheck_3358_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_a_3351_);
lean_dec(v___x_3342_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3358_;
goto v_resetjp_3352_;
}
v_resetjp_3352_:
{
lean_object* v___x_3356_; 
if (v_isShared_3354_ == 0)
{
v___x_3356_ = v___x_3353_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v_a_3351_);
v___x_3356_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
return v___x_3356_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg___boxed(lean_object* v_decls_3359_, lean_object* v_x_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_){
_start:
{
lean_object* v_res_3366_; 
v_res_3366_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3359_, v_x_3360_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_);
lean_dec(v___y_3364_);
lean_dec_ref(v___y_3363_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(lean_object* v_00_u03b1_3367_, lean_object* v_decls_3368_, lean_object* v_x_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_){
_start:
{
lean_object* v___x_3375_; 
v___x_3375_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3368_, v_x_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_);
return v___x_3375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___boxed(lean_object* v_00_u03b1_3376_, lean_object* v_decls_3377_, lean_object* v_x_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_){
_start:
{
lean_object* v_res_3384_; 
v_res_3384_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(v_00_u03b1_3376_, v_decls_3377_, v_x_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_);
lean_dec(v___y_3382_);
lean_dec_ref(v___y_3381_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
return v_res_3384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(size_t v_sz_3385_, size_t v_i_3386_, lean_object* v_bs_3387_){
_start:
{
uint8_t v___x_3388_; 
v___x_3388_ = lean_usize_dec_lt(v_i_3386_, v_sz_3385_);
if (v___x_3388_ == 0)
{
return v_bs_3387_;
}
else
{
lean_object* v_v_3389_; lean_object* v___x_3390_; lean_object* v_bs_x27_3391_; lean_object* v___x_3392_; size_t v___x_3393_; size_t v___x_3394_; lean_object* v___x_3395_; 
v_v_3389_ = lean_array_uget(v_bs_3387_, v_i_3386_);
v___x_3390_ = lean_unsigned_to_nat(0u);
v_bs_x27_3391_ = lean_array_uset(v_bs_3387_, v_i_3386_, v___x_3390_);
v___x_3392_ = l_Lean_LocalDecl_fvarId(v_v_3389_);
lean_dec(v_v_3389_);
v___x_3393_ = ((size_t)1ULL);
v___x_3394_ = lean_usize_add(v_i_3386_, v___x_3393_);
v___x_3395_ = lean_array_uset(v_bs_x27_3391_, v_i_3386_, v___x_3392_);
v_i_3386_ = v___x_3394_;
v_bs_3387_ = v___x_3395_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0___boxed(lean_object* v_sz_3397_, lean_object* v_i_3398_, lean_object* v_bs_3399_){
_start:
{
size_t v_sz_boxed_3400_; size_t v_i_boxed_3401_; lean_object* v_res_3402_; 
v_sz_boxed_3400_ = lean_unbox_usize(v_sz_3397_);
lean_dec(v_sz_3397_);
v_i_boxed_3401_ = lean_unbox_usize(v_i_3398_);
lean_dec(v_i_3398_);
v_res_3402_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_boxed_3400_, v_i_boxed_3401_, v_bs_3399_);
return v_res_3402_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0(void){
_start:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3403_ = lean_box(0);
v___x_3404_ = lean_unsigned_to_nat(16u);
v___x_3405_ = lean_mk_array(v___x_3404_, v___x_3403_);
return v___x_3405_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1(void){
_start:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3406_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0);
v___x_3407_ = lean_unsigned_to_nat(0u);
v___x_3408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3407_);
lean_ctor_set(v___x_3408_, 1, v___x_3406_);
return v___x_3408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(lean_object* v_es_3409_, lean_object* v_givenNames_3410_, lean_object* v_k_3411_, lean_object* v_config_3412_, lean_object* v_a_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_){
_start:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3418_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3419_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_3420_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3420_, 0, v_givenNames_3410_);
lean_ctor_set(v___x_3420_, 1, v___x_3419_);
lean_ctor_set(v___x_3420_, 2, v___x_3418_);
v___x_3421_ = lean_st_mk_ref(v___x_3420_);
v___x_3422_ = lean_st_mk_ref(v___x_3418_);
v___x_3423_ = l_Lean_Meta_ExtractLets_extract(v_es_3409_, v_config_3412_, v___x_3422_, v___x_3421_, v_a_3413_, v_a_3414_, v_a_3415_, v_a_3416_);
if (lean_obj_tag(v___x_3423_) == 0)
{
lean_object* v_a_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v_givenNames_3427_; lean_object* v_decls_3428_; size_t v_sz_3429_; size_t v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; size_t v_sz_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; 
v_a_3424_ = lean_ctor_get(v___x_3423_, 0);
lean_inc(v_a_3424_);
lean_dec_ref_known(v___x_3423_, 1);
v___x_3425_ = lean_st_ref_get(v___x_3422_);
lean_dec(v___x_3422_);
lean_dec(v___x_3425_);
v___x_3426_ = lean_st_ref_get(v___x_3421_);
lean_dec(v___x_3421_);
v_givenNames_3427_ = lean_ctor_get(v___x_3426_, 0);
lean_inc(v_givenNames_3427_);
v_decls_3428_ = lean_ctor_get(v___x_3426_, 1);
lean_inc_ref(v_decls_3428_);
lean_dec(v___x_3426_);
v_sz_3429_ = lean_array_size(v_decls_3428_);
v___x_3430_ = ((size_t)0ULL);
v___x_3431_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_3429_, v___x_3430_, v_decls_3428_);
lean_inc_ref(v___x_3431_);
v___x_3432_ = lean_array_to_list(v___x_3431_);
v_sz_3433_ = lean_array_size(v___x_3431_);
v___x_3434_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_3433_, v___x_3430_, v___x_3431_);
v___x_3435_ = lean_apply_3(v_k_3411_, v___x_3434_, v_a_3424_, v_givenNames_3427_);
v___x_3436_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v___x_3432_, v___x_3435_, v_a_3413_, v_a_3414_, v_a_3415_, v_a_3416_);
return v___x_3436_;
}
else
{
lean_object* v_a_3437_; lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3444_; 
lean_dec(v___x_3422_);
lean_dec(v___x_3421_);
lean_dec_ref(v_k_3411_);
v_a_3437_ = lean_ctor_get(v___x_3423_, 0);
v_isSharedCheck_3444_ = !lean_is_exclusive(v___x_3423_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3439_ = v___x_3423_;
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
else
{
lean_inc(v_a_3437_);
lean_dec(v___x_3423_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3442_; 
if (v_isShared_3440_ == 0)
{
v___x_3442_ = v___x_3439_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v_a_3437_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
return v___x_3442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___boxed(lean_object* v_es_3445_, lean_object* v_givenNames_3446_, lean_object* v_k_3447_, lean_object* v_config_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_, lean_object* v_a_3452_, lean_object* v_a_3453_){
_start:
{
lean_object* v_res_3454_; 
v_res_3454_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3445_, v_givenNames_3446_, v_k_3447_, v_config_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_);
lean_dec(v_a_3452_);
lean_dec_ref(v_a_3451_);
lean_dec(v_a_3450_);
lean_dec_ref(v_a_3449_);
lean_dec_ref(v_config_3448_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object* v_00_u03b1_3455_, lean_object* v_es_3456_, lean_object* v_givenNames_3457_, lean_object* v_k_3458_, lean_object* v_config_3459_, lean_object* v_a_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_){
_start:
{
lean_object* v___x_3465_; 
v___x_3465_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3456_, v_givenNames_3457_, v_k_3458_, v_config_3459_, v_a_3460_, v_a_3461_, v_a_3462_, v_a_3463_);
return v___x_3465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___boxed(lean_object* v_00_u03b1_3466_, lean_object* v_es_3467_, lean_object* v_givenNames_3468_, lean_object* v_k_3469_, lean_object* v_config_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_, lean_object* v_a_3473_, lean_object* v_a_3474_, lean_object* v_a_3475_){
_start:
{
lean_object* v_res_3476_; 
v_res_3476_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(v_00_u03b1_3466_, v_es_3467_, v_givenNames_3468_, v_k_3469_, v_config_3470_, v_a_3471_, v_a_3472_, v_a_3473_, v_a_3474_);
lean_dec(v_a_3474_);
lean_dec_ref(v_a_3473_);
lean_dec(v_a_3472_);
lean_dec_ref(v_a_3471_);
lean_dec_ref(v_config_3470_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0(lean_object* v_k_3477_, lean_object* v_runInBase_3478_, lean_object* v_b_3479_, lean_object* v_c_3480_, lean_object* v_d_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_){
_start:
{
lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3487_ = lean_apply_3(v_k_3477_, v_b_3479_, v_c_3480_, v_d_3481_);
lean_inc(v___y_3485_);
lean_inc_ref(v___y_3484_);
lean_inc(v___y_3483_);
lean_inc_ref(v___y_3482_);
v___x_3488_ = lean_apply_7(v_runInBase_3478_, lean_box(0), v___x_3487_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, lean_box(0));
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0___boxed(lean_object* v_k_3489_, lean_object* v_runInBase_3490_, lean_object* v_b_3491_, lean_object* v_c_3492_, lean_object* v_d_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_){
_start:
{
lean_object* v_res_3499_; 
v_res_3499_ = l_Lean_Meta_extractLets___redArg___lam__0(v_k_3489_, v_runInBase_3490_, v_b_3491_, v_c_3492_, v_d_3493_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_);
lean_dec(v___y_3497_);
lean_dec_ref(v___y_3496_);
lean_dec(v___y_3495_);
lean_dec_ref(v___y_3494_);
return v_res_3499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1(lean_object* v_k_3500_, lean_object* v_es_3501_, lean_object* v_givenNames_3502_, lean_object* v_config_3503_, lean_object* v_runInBase_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v___f_3510_; lean_object* v___x_3511_; 
v___f_3510_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_3510_, 0, v_k_3500_);
lean_closure_set(v___f_3510_, 1, v_runInBase_3504_);
v___x_3511_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3501_, v_givenNames_3502_, v___f_3510_, v_config_3503_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
return v___x_3511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1___boxed(lean_object* v_k_3512_, lean_object* v_es_3513_, lean_object* v_givenNames_3514_, lean_object* v_config_3515_, lean_object* v_runInBase_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_){
_start:
{
lean_object* v_res_3522_; 
v_res_3522_ = l_Lean_Meta_extractLets___redArg___lam__1(v_k_3512_, v_es_3513_, v_givenNames_3514_, v_config_3515_, v_runInBase_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_);
lean_dec(v___y_3520_);
lean_dec_ref(v___y_3519_);
lean_dec(v___y_3518_);
lean_dec_ref(v___y_3517_);
lean_dec_ref(v_config_3515_);
return v_res_3522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg(lean_object* v_inst_3523_, lean_object* v_inst_3524_, lean_object* v_es_3525_, lean_object* v_givenNames_3526_, lean_object* v_k_3527_, lean_object* v_config_3528_){
_start:
{
lean_object* v_toBind_3529_; lean_object* v_liftWith_3530_; lean_object* v_restoreM_3531_; lean_object* v___f_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
v_toBind_3529_ = lean_ctor_get(v_inst_3523_, 1);
lean_inc(v_toBind_3529_);
lean_dec_ref(v_inst_3523_);
v_liftWith_3530_ = lean_ctor_get(v_inst_3524_, 0);
lean_inc(v_liftWith_3530_);
v_restoreM_3531_ = lean_ctor_get(v_inst_3524_, 1);
lean_inc(v_restoreM_3531_);
lean_dec_ref(v_inst_3524_);
v___f_3532_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3532_, 0, v_k_3527_);
lean_closure_set(v___f_3532_, 1, v_es_3525_);
lean_closure_set(v___f_3532_, 2, v_givenNames_3526_);
lean_closure_set(v___f_3532_, 3, v_config_3528_);
v___x_3533_ = lean_apply_2(v_liftWith_3530_, lean_box(0), v___f_3532_);
v___x_3534_ = lean_apply_1(v_restoreM_3531_, lean_box(0));
v___x_3535_ = lean_apply_4(v_toBind_3529_, lean_box(0), lean_box(0), v___x_3533_, v___x_3534_);
return v___x_3535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets(lean_object* v_m_3536_, lean_object* v_00_u03b1_3537_, lean_object* v_inst_3538_, lean_object* v_inst_3539_, lean_object* v_es_3540_, lean_object* v_givenNames_3541_, lean_object* v_k_3542_, lean_object* v_config_3543_){
_start:
{
lean_object* v___x_3544_; 
v___x_3544_ = l_Lean_Meta_extractLets___redArg(v_inst_3538_, v_inst_3539_, v_es_3540_, v_givenNames_3541_, v_k_3542_, v_config_3543_);
return v___x_3544_;
}
}
static lean_object* _init_l_Lean_Meta_liftLets___closed__0(void){
_start:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3545_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3546_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_3547_ = lean_box(0);
v___x_3548_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3547_);
lean_ctor_set(v___x_3548_, 1, v___x_3546_);
lean_ctor_set(v___x_3548_, 2, v___x_3545_);
return v___x_3548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets(lean_object* v_e_3549_, lean_object* v_config_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_){
_start:
{
uint8_t v_proofs_3556_; uint8_t v_types_3557_; uint8_t v_implicits_3558_; uint8_t v_descend_3559_; uint8_t v_underBinder_3560_; uint8_t v_usedOnly_3561_; uint8_t v_merge_3562_; uint8_t v_useContext_3563_; uint8_t v_preserveBinderNames_3564_; uint8_t v_lift_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3604_; 
v_proofs_3556_ = lean_ctor_get_uint8(v_config_3550_, 0);
v_types_3557_ = lean_ctor_get_uint8(v_config_3550_, 1);
v_implicits_3558_ = lean_ctor_get_uint8(v_config_3550_, 2);
v_descend_3559_ = lean_ctor_get_uint8(v_config_3550_, 3);
v_underBinder_3560_ = lean_ctor_get_uint8(v_config_3550_, 4);
v_usedOnly_3561_ = lean_ctor_get_uint8(v_config_3550_, 5);
v_merge_3562_ = lean_ctor_get_uint8(v_config_3550_, 6);
v_useContext_3563_ = lean_ctor_get_uint8(v_config_3550_, 7);
v_preserveBinderNames_3564_ = lean_ctor_get_uint8(v_config_3550_, 9);
v_lift_3565_ = lean_ctor_get_uint8(v_config_3550_, 10);
v_isSharedCheck_3604_ = !lean_is_exclusive(v_config_3550_);
if (v_isSharedCheck_3604_ == 0)
{
v___x_3567_ = v_config_3550_;
v_isShared_3568_ = v_isSharedCheck_3604_;
goto v_resetjp_3566_;
}
else
{
lean_dec(v_config_3550_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3604_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; uint8_t v___x_3573_; lean_object* v___x_3575_; 
v___x_3569_ = l_Lean_instInhabitedExpr;
v___x_3570_ = lean_unsigned_to_nat(1u);
v___x_3571_ = lean_mk_empty_array_with_capacity(v___x_3570_);
v___x_3572_ = lean_array_push(v___x_3571_, v_e_3549_);
v___x_3573_ = 1;
if (v_isShared_3568_ == 0)
{
v___x_3575_ = v___x_3567_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3603_, 0, v_proofs_3556_);
lean_ctor_set_uint8(v_reuseFailAlloc_3603_, 1, v_types_3557_);
lean_ctor_set_uint8(v_reuseFailAlloc_3603_, 2, v_implicits_3558_);
lean_ctor_set_uint8(v_reuseFailAlloc_3603_, 3, v_descend_3559_);
lean_ctor_set_uint8(v_reuseFailAlloc_3603_, 4, v_underBinder_3560_);
lean_ctor_set_uint8(v_reuseFailAlloc_3603_, 5, v_usedOnly_3561_);
lean_ctor_set_uint8(v_reuseFailAlloc_3603_, 6, v_merge_3562_);
lean_ctor_set_uint8(v_reuseFailAlloc_3603_, 7, v_useContext_3563_);
lean_ctor_set_uint8(v_reuseFailAlloc_3603_, 9, v_preserveBinderNames_3564_);
lean_ctor_set_uint8(v_reuseFailAlloc_3603_, 10, v_lift_3565_);
v___x_3575_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; 
lean_ctor_set_uint8(v___x_3575_, 8, v___x_3573_);
v___x_3576_ = lean_unsigned_to_nat(0u);
v___x_3577_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3578_ = lean_obj_once(&l_Lean_Meta_liftLets___closed__0, &l_Lean_Meta_liftLets___closed__0_once, _init_l_Lean_Meta_liftLets___closed__0);
v___x_3579_ = lean_st_mk_ref(v___x_3578_);
v___x_3580_ = lean_st_mk_ref(v___x_3577_);
v___x_3581_ = l_Lean_Meta_ExtractLets_extract(v___x_3572_, v___x_3575_, v___x_3580_, v___x_3579_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
lean_dec_ref(v___x_3575_);
if (lean_obj_tag(v___x_3581_) == 0)
{
lean_object* v_a_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3594_; 
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3594_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3594_ == 0)
{
v___x_3584_ = v___x_3581_;
v_isShared_3585_ = v_isSharedCheck_3594_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_a_3582_);
lean_dec(v___x_3581_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3594_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v_decls_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3592_; 
v___x_3586_ = lean_st_ref_get(v___x_3580_);
lean_dec(v___x_3580_);
lean_dec(v___x_3586_);
v___x_3587_ = lean_st_ref_get(v___x_3579_);
lean_dec(v___x_3579_);
v_decls_3588_ = lean_ctor_get(v___x_3587_, 1);
lean_inc_ref(v_decls_3588_);
lean_dec(v___x_3587_);
v___x_3589_ = lean_array_get(v___x_3569_, v_a_3582_, v___x_3576_);
lean_dec(v_a_3582_);
v___x_3590_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_decls_3588_, v___x_3589_);
lean_dec_ref(v_decls_3588_);
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 0, v___x_3590_);
v___x_3592_ = v___x_3584_;
goto v_reusejp_3591_;
}
else
{
lean_object* v_reuseFailAlloc_3593_; 
v_reuseFailAlloc_3593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3593_, 0, v___x_3590_);
v___x_3592_ = v_reuseFailAlloc_3593_;
goto v_reusejp_3591_;
}
v_reusejp_3591_:
{
return v___x_3592_;
}
}
}
else
{
lean_object* v_a_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3602_; 
lean_dec(v___x_3580_);
lean_dec(v___x_3579_);
v_a_3595_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3602_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3597_ = v___x_3581_;
v_isShared_3598_ = v_isSharedCheck_3602_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_a_3595_);
lean_dec(v___x_3581_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3602_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___x_3600_; 
if (v_isShared_3598_ == 0)
{
v___x_3600_ = v___x_3597_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v_a_3595_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
return v___x_3600_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets___boxed(lean_object* v_e_3605_, lean_object* v_config_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_, lean_object* v_a_3610_, lean_object* v_a_3611_){
_start:
{
lean_object* v_res_3612_; 
v_res_3612_ = l_Lean_Meta_liftLets(v_e_3605_, v_config_3606_, v_a_3607_, v_a_3608_, v_a_3609_, v_a_3610_);
lean_dec(v_a_3610_);
lean_dec_ref(v_a_3609_);
lean_dec(v_a_3608_);
lean_dec_ref(v_a_3607_);
return v_res_3612_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1(void){
_start:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3614_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0));
v___x_3615_ = l_Lean_stringToMessageData(v___x_3614_);
return v___x_3615_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2(void){
_start:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; 
v___x_3616_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1);
v___x_3617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3617_, 0, v___x_3616_);
return v___x_3617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(lean_object* v_tactic_3618_, lean_object* v_mvarId_3619_, lean_object* v_a_3620_, lean_object* v_a_3621_, lean_object* v_a_3622_, lean_object* v_a_3623_){
_start:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; 
v___x_3625_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2);
v___x_3626_ = l_Lean_Meta_throwTacticEx___redArg(v_tactic_3618_, v_mvarId_3619_, v___x_3625_, v_a_3620_, v_a_3621_, v_a_3622_, v_a_3623_);
return v___x_3626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___boxed(lean_object* v_tactic_3627_, lean_object* v_mvarId_3628_, lean_object* v_a_3629_, lean_object* v_a_3630_, lean_object* v_a_3631_, lean_object* v_a_3632_, lean_object* v_a_3633_){
_start:
{
lean_object* v_res_3634_; 
v_res_3634_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3627_, v_mvarId_3628_, v_a_3629_, v_a_3630_, v_a_3631_, v_a_3632_);
lean_dec(v_a_3632_);
lean_dec_ref(v_a_3631_);
lean_dec(v_a_3630_);
lean_dec_ref(v_a_3629_);
return v_res_3634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(lean_object* v_00_u03b1_3635_, lean_object* v_tactic_3636_, lean_object* v_mvarId_3637_, lean_object* v_a_3638_, lean_object* v_a_3639_, lean_object* v_a_3640_, lean_object* v_a_3641_){
_start:
{
lean_object* v___x_3643_; 
v___x_3643_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3636_, v_mvarId_3637_, v_a_3638_, v_a_3639_, v_a_3640_, v_a_3641_);
return v___x_3643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___boxed(lean_object* v_00_u03b1_3644_, lean_object* v_tactic_3645_, lean_object* v_mvarId_3646_, lean_object* v_a_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_, lean_object* v_a_3650_, lean_object* v_a_3651_){
_start:
{
lean_object* v_res_3652_; 
v_res_3652_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(v_00_u03b1_3644_, v_tactic_3645_, v_mvarId_3646_, v_a_3647_, v_a_3648_, v_a_3649_, v_a_3650_);
lean_dec(v_a_3650_);
lean_dec_ref(v_a_3649_);
lean_dec(v_a_3648_);
lean_dec_ref(v_a_3647_);
return v_res_3652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(lean_object* v_k_3653_, lean_object* v_b_3654_, lean_object* v_c_3655_, lean_object* v_d_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_){
_start:
{
lean_object* v___x_3662_; 
lean_inc(v___y_3660_);
lean_inc_ref(v___y_3659_);
lean_inc(v___y_3658_);
lean_inc_ref(v___y_3657_);
v___x_3662_ = lean_apply_8(v_k_3653_, v_b_3654_, v_c_3655_, v_d_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_, lean_box(0));
return v___x_3662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed(lean_object* v_k_3663_, lean_object* v_b_3664_, lean_object* v_c_3665_, lean_object* v_d_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_){
_start:
{
lean_object* v_res_3672_; 
v_res_3672_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(v_k_3663_, v_b_3664_, v_c_3665_, v_d_3666_, v___y_3667_, v___y_3668_, v___y_3669_, v___y_3670_);
lean_dec(v___y_3670_);
lean_dec_ref(v___y_3669_);
lean_dec(v___y_3668_);
lean_dec_ref(v___y_3667_);
return v_res_3672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(lean_object* v_es_3673_, lean_object* v_givenNames_3674_, lean_object* v_k_3675_, lean_object* v_config_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_){
_start:
{
lean_object* v___f_3682_; lean_object* v___x_3683_; 
v___f_3682_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3682_, 0, v_k_3675_);
v___x_3683_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3673_, v_givenNames_3674_, v___f_3682_, v_config_3676_, v___y_3677_, v___y_3678_, v___y_3679_, v___y_3680_);
if (lean_obj_tag(v___x_3683_) == 0)
{
lean_object* v_a_3684_; lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3691_; 
v_a_3684_ = lean_ctor_get(v___x_3683_, 0);
v_isSharedCheck_3691_ = !lean_is_exclusive(v___x_3683_);
if (v_isSharedCheck_3691_ == 0)
{
v___x_3686_ = v___x_3683_;
v_isShared_3687_ = v_isSharedCheck_3691_;
goto v_resetjp_3685_;
}
else
{
lean_inc(v_a_3684_);
lean_dec(v___x_3683_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3691_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___x_3689_; 
if (v_isShared_3687_ == 0)
{
v___x_3689_ = v___x_3686_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v_a_3684_);
v___x_3689_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
return v___x_3689_;
}
}
}
else
{
lean_object* v_a_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3699_; 
v_a_3692_ = lean_ctor_get(v___x_3683_, 0);
v_isSharedCheck_3699_ = !lean_is_exclusive(v___x_3683_);
if (v_isSharedCheck_3699_ == 0)
{
v___x_3694_ = v___x_3683_;
v_isShared_3695_ = v_isSharedCheck_3699_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_a_3692_);
lean_dec(v___x_3683_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3699_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v___x_3697_; 
if (v_isShared_3695_ == 0)
{
v___x_3697_ = v___x_3694_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v_a_3692_);
v___x_3697_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
return v___x_3697_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___boxed(lean_object* v_es_3700_, lean_object* v_givenNames_3701_, lean_object* v_k_3702_, lean_object* v_config_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_){
_start:
{
lean_object* v_res_3709_; 
v_res_3709_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3700_, v_givenNames_3701_, v_k_3702_, v_config_3703_, v___y_3704_, v___y_3705_, v___y_3706_, v___y_3707_);
lean_dec(v___y_3707_);
lean_dec_ref(v___y_3706_);
lean_dec(v___y_3705_);
lean_dec_ref(v___y_3704_);
lean_dec_ref(v_config_3703_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(lean_object* v_00_u03b1_3710_, lean_object* v_es_3711_, lean_object* v_givenNames_3712_, lean_object* v_k_3713_, lean_object* v_config_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_){
_start:
{
lean_object* v___x_3720_; 
v___x_3720_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3711_, v_givenNames_3712_, v_k_3713_, v_config_3714_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_);
return v___x_3720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___boxed(lean_object* v_00_u03b1_3721_, lean_object* v_es_3722_, lean_object* v_givenNames_3723_, lean_object* v_k_3724_, lean_object* v_config_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_){
_start:
{
lean_object* v_res_3731_; 
v_res_3731_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(v_00_u03b1_3721_, v_es_3722_, v_givenNames_3723_, v_k_3724_, v_config_3725_, v___y_3726_, v___y_3727_, v___y_3728_, v___y_3729_);
lean_dec(v___y_3729_);
lean_dec_ref(v___y_3728_);
lean_dec(v___y_3727_);
lean_dec_ref(v___y_3726_);
lean_dec_ref(v_config_3725_);
return v_res_3731_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(lean_object* v_mvarId_3732_, lean_object* v_x_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_){
_start:
{
lean_object* v___x_3739_; 
v___x_3739_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3732_, v_x_3733_, v___y_3734_, v___y_3735_, v___y_3736_, v___y_3737_);
if (lean_obj_tag(v___x_3739_) == 0)
{
lean_object* v_a_3740_; lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3747_; 
v_a_3740_ = lean_ctor_get(v___x_3739_, 0);
v_isSharedCheck_3747_ = !lean_is_exclusive(v___x_3739_);
if (v_isSharedCheck_3747_ == 0)
{
v___x_3742_ = v___x_3739_;
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
else
{
lean_inc(v_a_3740_);
lean_dec(v___x_3739_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v___x_3745_; 
if (v_isShared_3743_ == 0)
{
v___x_3745_ = v___x_3742_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3746_; 
v_reuseFailAlloc_3746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3746_, 0, v_a_3740_);
v___x_3745_ = v_reuseFailAlloc_3746_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
return v___x_3745_;
}
}
}
else
{
lean_object* v_a_3748_; lean_object* v___x_3750_; uint8_t v_isShared_3751_; uint8_t v_isSharedCheck_3755_; 
v_a_3748_ = lean_ctor_get(v___x_3739_, 0);
v_isSharedCheck_3755_ = !lean_is_exclusive(v___x_3739_);
if (v_isSharedCheck_3755_ == 0)
{
v___x_3750_ = v___x_3739_;
v_isShared_3751_ = v_isSharedCheck_3755_;
goto v_resetjp_3749_;
}
else
{
lean_inc(v_a_3748_);
lean_dec(v___x_3739_);
v___x_3750_ = lean_box(0);
v_isShared_3751_ = v_isSharedCheck_3755_;
goto v_resetjp_3749_;
}
v_resetjp_3749_:
{
lean_object* v___x_3753_; 
if (v_isShared_3751_ == 0)
{
v___x_3753_ = v___x_3750_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v_a_3748_);
v___x_3753_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
return v___x_3753_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg___boxed(lean_object* v_mvarId_3756_, lean_object* v_x_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_){
_start:
{
lean_object* v_res_3763_; 
v_res_3763_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3756_, v_x_3757_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_);
lean_dec(v___y_3761_);
lean_dec_ref(v___y_3760_);
lean_dec(v___y_3759_);
lean_dec_ref(v___y_3758_);
return v_res_3763_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(lean_object* v_00_u03b1_3764_, lean_object* v_mvarId_3765_, lean_object* v_x_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_){
_start:
{
lean_object* v___x_3772_; 
v___x_3772_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3765_, v_x_3766_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_);
return v___x_3772_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___boxed(lean_object* v_00_u03b1_3773_, lean_object* v_mvarId_3774_, lean_object* v_x_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_){
_start:
{
lean_object* v_res_3781_; 
v_res_3781_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(v_00_u03b1_3773_, v_mvarId_3774_, v_x_3775_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
lean_dec(v___y_3779_);
lean_dec_ref(v___y_3778_);
lean_dec(v___y_3777_);
lean_dec_ref(v___y_3776_);
return v_res_3781_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_x_3782_, lean_object* v_x_3783_, lean_object* v_x_3784_, lean_object* v_x_3785_){
_start:
{
lean_object* v_ks_3786_; lean_object* v_vs_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3811_; 
v_ks_3786_ = lean_ctor_get(v_x_3782_, 0);
v_vs_3787_ = lean_ctor_get(v_x_3782_, 1);
v_isSharedCheck_3811_ = !lean_is_exclusive(v_x_3782_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3789_ = v_x_3782_;
v_isShared_3790_ = v_isSharedCheck_3811_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_vs_3787_);
lean_inc(v_ks_3786_);
lean_dec(v_x_3782_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3811_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___x_3791_; uint8_t v___x_3792_; 
v___x_3791_ = lean_array_get_size(v_ks_3786_);
v___x_3792_ = lean_nat_dec_lt(v_x_3783_, v___x_3791_);
if (v___x_3792_ == 0)
{
lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3796_; 
lean_dec(v_x_3783_);
v___x_3793_ = lean_array_push(v_ks_3786_, v_x_3784_);
v___x_3794_ = lean_array_push(v_vs_3787_, v_x_3785_);
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 1, v___x_3794_);
lean_ctor_set(v___x_3789_, 0, v___x_3793_);
v___x_3796_ = v___x_3789_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v___x_3793_);
lean_ctor_set(v_reuseFailAlloc_3797_, 1, v___x_3794_);
v___x_3796_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
return v___x_3796_;
}
}
else
{
lean_object* v_k_x27_3798_; uint8_t v___x_3799_; 
v_k_x27_3798_ = lean_array_fget_borrowed(v_ks_3786_, v_x_3783_);
v___x_3799_ = l_Lean_instBEqMVarId_beq(v_x_3784_, v_k_x27_3798_);
if (v___x_3799_ == 0)
{
lean_object* v___x_3801_; 
if (v_isShared_3790_ == 0)
{
v___x_3801_ = v___x_3789_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v_ks_3786_);
lean_ctor_set(v_reuseFailAlloc_3805_, 1, v_vs_3787_);
v___x_3801_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
lean_object* v___x_3802_; lean_object* v___x_3803_; 
v___x_3802_ = lean_unsigned_to_nat(1u);
v___x_3803_ = lean_nat_add(v_x_3783_, v___x_3802_);
lean_dec(v_x_3783_);
v_x_3782_ = v___x_3801_;
v_x_3783_ = v___x_3803_;
goto _start;
}
}
else
{
lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3809_; 
v___x_3806_ = lean_array_fset(v_ks_3786_, v_x_3783_, v_x_3784_);
v___x_3807_ = lean_array_fset(v_vs_3787_, v_x_3783_, v_x_3785_);
lean_dec(v_x_3783_);
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 1, v___x_3807_);
lean_ctor_set(v___x_3789_, 0, v___x_3806_);
v___x_3809_ = v___x_3789_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v___x_3806_);
lean_ctor_set(v_reuseFailAlloc_3810_, 1, v___x_3807_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(lean_object* v_n_3812_, lean_object* v_k_3813_, lean_object* v_v_3814_){
_start:
{
lean_object* v___x_3815_; lean_object* v___x_3816_; 
v___x_3815_ = lean_unsigned_to_nat(0u);
v___x_3816_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_n_3812_, v___x_3815_, v_k_3813_, v_v_3814_);
return v___x_3816_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3817_; 
v___x_3817_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(lean_object* v_x_3818_, size_t v_x_3819_, size_t v_x_3820_, lean_object* v_x_3821_, lean_object* v_x_3822_){
_start:
{
if (lean_obj_tag(v_x_3818_) == 0)
{
lean_object* v_es_3823_; size_t v___x_3824_; size_t v___x_3825_; lean_object* v_j_3826_; lean_object* v___x_3827_; uint8_t v___x_3828_; 
v_es_3823_ = lean_ctor_get(v_x_3818_, 0);
v___x_3824_ = ((size_t)31ULL);
v___x_3825_ = lean_usize_land(v_x_3819_, v___x_3824_);
v_j_3826_ = lean_usize_to_nat(v___x_3825_);
v___x_3827_ = lean_array_get_size(v_es_3823_);
v___x_3828_ = lean_nat_dec_lt(v_j_3826_, v___x_3827_);
if (v___x_3828_ == 0)
{
lean_dec(v_j_3826_);
lean_dec(v_x_3822_);
lean_dec(v_x_3821_);
return v_x_3818_;
}
else
{
lean_object* v___x_3830_; uint8_t v_isShared_3831_; uint8_t v_isSharedCheck_3867_; 
lean_inc_ref(v_es_3823_);
v_isSharedCheck_3867_ = !lean_is_exclusive(v_x_3818_);
if (v_isSharedCheck_3867_ == 0)
{
lean_object* v_unused_3868_; 
v_unused_3868_ = lean_ctor_get(v_x_3818_, 0);
lean_dec(v_unused_3868_);
v___x_3830_ = v_x_3818_;
v_isShared_3831_ = v_isSharedCheck_3867_;
goto v_resetjp_3829_;
}
else
{
lean_dec(v_x_3818_);
v___x_3830_ = lean_box(0);
v_isShared_3831_ = v_isSharedCheck_3867_;
goto v_resetjp_3829_;
}
v_resetjp_3829_:
{
lean_object* v_v_3832_; lean_object* v___x_3833_; lean_object* v_xs_x27_3834_; lean_object* v___y_3836_; 
v_v_3832_ = lean_array_fget(v_es_3823_, v_j_3826_);
v___x_3833_ = lean_box(0);
v_xs_x27_3834_ = lean_array_fset(v_es_3823_, v_j_3826_, v___x_3833_);
switch(lean_obj_tag(v_v_3832_))
{
case 0:
{
lean_object* v_key_3841_; lean_object* v_val_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3852_; 
v_key_3841_ = lean_ctor_get(v_v_3832_, 0);
v_val_3842_ = lean_ctor_get(v_v_3832_, 1);
v_isSharedCheck_3852_ = !lean_is_exclusive(v_v_3832_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3844_ = v_v_3832_;
v_isShared_3845_ = v_isSharedCheck_3852_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_val_3842_);
lean_inc(v_key_3841_);
lean_dec(v_v_3832_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3852_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
uint8_t v___x_3846_; 
v___x_3846_ = l_Lean_instBEqMVarId_beq(v_x_3821_, v_key_3841_);
if (v___x_3846_ == 0)
{
lean_object* v___x_3847_; lean_object* v___x_3848_; 
lean_del_object(v___x_3844_);
v___x_3847_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3841_, v_val_3842_, v_x_3821_, v_x_3822_);
v___x_3848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3848_, 0, v___x_3847_);
v___y_3836_ = v___x_3848_;
goto v___jp_3835_;
}
else
{
lean_object* v___x_3850_; 
lean_dec(v_val_3842_);
lean_dec(v_key_3841_);
if (v_isShared_3845_ == 0)
{
lean_ctor_set(v___x_3844_, 1, v_x_3822_);
lean_ctor_set(v___x_3844_, 0, v_x_3821_);
v___x_3850_ = v___x_3844_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_x_3821_);
lean_ctor_set(v_reuseFailAlloc_3851_, 1, v_x_3822_);
v___x_3850_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
v___y_3836_ = v___x_3850_;
goto v___jp_3835_;
}
}
}
}
case 1:
{
lean_object* v_node_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3865_; 
v_node_3853_ = lean_ctor_get(v_v_3832_, 0);
v_isSharedCheck_3865_ = !lean_is_exclusive(v_v_3832_);
if (v_isSharedCheck_3865_ == 0)
{
v___x_3855_ = v_v_3832_;
v_isShared_3856_ = v_isSharedCheck_3865_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_node_3853_);
lean_dec(v_v_3832_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3865_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
size_t v___x_3857_; size_t v___x_3858_; size_t v___x_3859_; size_t v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3863_; 
v___x_3857_ = ((size_t)5ULL);
v___x_3858_ = lean_usize_shift_right(v_x_3819_, v___x_3857_);
v___x_3859_ = ((size_t)1ULL);
v___x_3860_ = lean_usize_add(v_x_3820_, v___x_3859_);
v___x_3861_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_node_3853_, v___x_3858_, v___x_3860_, v_x_3821_, v_x_3822_);
if (v_isShared_3856_ == 0)
{
lean_ctor_set(v___x_3855_, 0, v___x_3861_);
v___x_3863_ = v___x_3855_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v___x_3861_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
v___y_3836_ = v___x_3863_;
goto v___jp_3835_;
}
}
}
default: 
{
lean_object* v___x_3866_; 
v___x_3866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3866_, 0, v_x_3821_);
lean_ctor_set(v___x_3866_, 1, v_x_3822_);
v___y_3836_ = v___x_3866_;
goto v___jp_3835_;
}
}
v___jp_3835_:
{
lean_object* v___x_3837_; lean_object* v___x_3839_; 
v___x_3837_ = lean_array_fset(v_xs_x27_3834_, v_j_3826_, v___y_3836_);
lean_dec(v_j_3826_);
if (v_isShared_3831_ == 0)
{
lean_ctor_set(v___x_3830_, 0, v___x_3837_);
v___x_3839_ = v___x_3830_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v___x_3837_);
v___x_3839_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
return v___x_3839_;
}
}
}
}
}
else
{
lean_object* v_ks_3869_; lean_object* v_vs_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3888_; 
v_ks_3869_ = lean_ctor_get(v_x_3818_, 0);
v_vs_3870_ = lean_ctor_get(v_x_3818_, 1);
v_isSharedCheck_3888_ = !lean_is_exclusive(v_x_3818_);
if (v_isSharedCheck_3888_ == 0)
{
v___x_3872_ = v_x_3818_;
v_isShared_3873_ = v_isSharedCheck_3888_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_vs_3870_);
lean_inc(v_ks_3869_);
lean_dec(v_x_3818_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3888_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___x_3875_; 
if (v_isShared_3873_ == 0)
{
v___x_3875_ = v___x_3872_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3887_; 
v_reuseFailAlloc_3887_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3887_, 0, v_ks_3869_);
lean_ctor_set(v_reuseFailAlloc_3887_, 1, v_vs_3870_);
v___x_3875_ = v_reuseFailAlloc_3887_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
lean_object* v_newNode_3876_; size_t v___x_3877_; uint8_t v___x_3878_; 
v_newNode_3876_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v___x_3875_, v_x_3821_, v_x_3822_);
v___x_3877_ = ((size_t)7ULL);
v___x_3878_ = lean_usize_dec_le(v___x_3877_, v_x_3820_);
if (v___x_3878_ == 0)
{
lean_object* v___x_3879_; lean_object* v___x_3880_; uint8_t v___x_3881_; 
v___x_3879_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3876_);
v___x_3880_ = lean_unsigned_to_nat(4u);
v___x_3881_ = lean_nat_dec_lt(v___x_3879_, v___x_3880_);
lean_dec(v___x_3879_);
if (v___x_3881_ == 0)
{
lean_object* v_ks_3882_; lean_object* v_vs_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; 
v_ks_3882_ = lean_ctor_get(v_newNode_3876_, 0);
lean_inc_ref(v_ks_3882_);
v_vs_3883_ = lean_ctor_get(v_newNode_3876_, 1);
lean_inc_ref(v_vs_3883_);
lean_dec_ref(v_newNode_3876_);
v___x_3884_ = lean_unsigned_to_nat(0u);
v___x_3885_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0);
v___x_3886_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_x_3820_, v_ks_3882_, v_vs_3883_, v___x_3884_, v___x_3885_);
lean_dec_ref(v_vs_3883_);
lean_dec_ref(v_ks_3882_);
return v___x_3886_;
}
else
{
return v_newNode_3876_;
}
}
else
{
return v_newNode_3876_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(size_t v_depth_3889_, lean_object* v_keys_3890_, lean_object* v_vals_3891_, lean_object* v_i_3892_, lean_object* v_entries_3893_){
_start:
{
lean_object* v___x_3894_; uint8_t v___x_3895_; 
v___x_3894_ = lean_array_get_size(v_keys_3890_);
v___x_3895_ = lean_nat_dec_lt(v_i_3892_, v___x_3894_);
if (v___x_3895_ == 0)
{
lean_dec(v_i_3892_);
return v_entries_3893_;
}
else
{
lean_object* v_k_3896_; lean_object* v_v_3897_; uint64_t v___x_3898_; size_t v_h_3899_; size_t v___x_3900_; lean_object* v___x_3901_; size_t v___x_3902_; size_t v___x_3903_; size_t v___x_3904_; size_t v_h_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; 
v_k_3896_ = lean_array_fget_borrowed(v_keys_3890_, v_i_3892_);
v_v_3897_ = lean_array_fget_borrowed(v_vals_3891_, v_i_3892_);
v___x_3898_ = l_Lean_instHashableMVarId_hash(v_k_3896_);
v_h_3899_ = lean_uint64_to_usize(v___x_3898_);
v___x_3900_ = ((size_t)5ULL);
v___x_3901_ = lean_unsigned_to_nat(1u);
v___x_3902_ = ((size_t)1ULL);
v___x_3903_ = lean_usize_sub(v_depth_3889_, v___x_3902_);
v___x_3904_ = lean_usize_mul(v___x_3900_, v___x_3903_);
v_h_3905_ = lean_usize_shift_right(v_h_3899_, v___x_3904_);
v___x_3906_ = lean_nat_add(v_i_3892_, v___x_3901_);
lean_dec(v_i_3892_);
lean_inc(v_v_3897_);
lean_inc(v_k_3896_);
v___x_3907_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_entries_3893_, v_h_3905_, v_depth_3889_, v_k_3896_, v_v_3897_);
v_i_3892_ = v___x_3906_;
v_entries_3893_ = v___x_3907_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_depth_3909_, lean_object* v_keys_3910_, lean_object* v_vals_3911_, lean_object* v_i_3912_, lean_object* v_entries_3913_){
_start:
{
size_t v_depth_boxed_3914_; lean_object* v_res_3915_; 
v_depth_boxed_3914_ = lean_unbox_usize(v_depth_3909_);
lean_dec(v_depth_3909_);
v_res_3915_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_boxed_3914_, v_keys_3910_, v_vals_3911_, v_i_3912_, v_entries_3913_);
lean_dec_ref(v_vals_3911_);
lean_dec_ref(v_keys_3910_);
return v_res_3915_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_x_3916_, lean_object* v_x_3917_, lean_object* v_x_3918_, lean_object* v_x_3919_, lean_object* v_x_3920_){
_start:
{
size_t v_x_2305__boxed_3921_; size_t v_x_2306__boxed_3922_; lean_object* v_res_3923_; 
v_x_2305__boxed_3921_ = lean_unbox_usize(v_x_3917_);
lean_dec(v_x_3917_);
v_x_2306__boxed_3922_ = lean_unbox_usize(v_x_3918_);
lean_dec(v_x_3918_);
v_res_3923_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_3916_, v_x_2305__boxed_3921_, v_x_2306__boxed_3922_, v_x_3919_, v_x_3920_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(lean_object* v_x_3924_, lean_object* v_x_3925_, lean_object* v_x_3926_){
_start:
{
uint64_t v___x_3927_; size_t v___x_3928_; size_t v___x_3929_; lean_object* v___x_3930_; 
v___x_3927_ = l_Lean_instHashableMVarId_hash(v_x_3925_);
v___x_3928_ = lean_uint64_to_usize(v___x_3927_);
v___x_3929_ = ((size_t)1ULL);
v___x_3930_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_3924_, v___x_3928_, v___x_3929_, v_x_3925_, v_x_3926_);
return v___x_3930_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(lean_object* v_mvarId_3931_, lean_object* v_val_3932_, lean_object* v___y_3933_){
_start:
{
lean_object* v___x_3935_; lean_object* v_mctx_3936_; lean_object* v_cache_3937_; lean_object* v_zetaDeltaFVarIds_3938_; lean_object* v_postponed_3939_; lean_object* v_diag_3940_; lean_object* v_rewriteFires_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3971_; 
v___x_3935_ = lean_st_ref_take(v___y_3933_);
v_mctx_3936_ = lean_ctor_get(v___x_3935_, 0);
v_cache_3937_ = lean_ctor_get(v___x_3935_, 1);
v_zetaDeltaFVarIds_3938_ = lean_ctor_get(v___x_3935_, 2);
v_postponed_3939_ = lean_ctor_get(v___x_3935_, 3);
v_diag_3940_ = lean_ctor_get(v___x_3935_, 4);
v_rewriteFires_3941_ = lean_ctor_get(v___x_3935_, 5);
v_isSharedCheck_3971_ = !lean_is_exclusive(v___x_3935_);
if (v_isSharedCheck_3971_ == 0)
{
v___x_3943_ = v___x_3935_;
v_isShared_3944_ = v_isSharedCheck_3971_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_rewriteFires_3941_);
lean_inc(v_diag_3940_);
lean_inc(v_postponed_3939_);
lean_inc(v_zetaDeltaFVarIds_3938_);
lean_inc(v_cache_3937_);
lean_inc(v_mctx_3936_);
lean_dec(v___x_3935_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3971_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v_depth_3945_; lean_object* v_levelAssignDepth_3946_; lean_object* v_lmvarCounter_3947_; lean_object* v_mvarCounter_3948_; lean_object* v_lDecls_3949_; lean_object* v_decls_3950_; lean_object* v_userNames_3951_; lean_object* v_lAssignment_3952_; lean_object* v_eAssignment_3953_; lean_object* v_dAssignment_3954_; lean_object* v_instanceTypedMVars_3955_; lean_object* v_synthNormMemo_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3970_; 
v_depth_3945_ = lean_ctor_get(v_mctx_3936_, 0);
v_levelAssignDepth_3946_ = lean_ctor_get(v_mctx_3936_, 1);
v_lmvarCounter_3947_ = lean_ctor_get(v_mctx_3936_, 2);
v_mvarCounter_3948_ = lean_ctor_get(v_mctx_3936_, 3);
v_lDecls_3949_ = lean_ctor_get(v_mctx_3936_, 4);
v_decls_3950_ = lean_ctor_get(v_mctx_3936_, 5);
v_userNames_3951_ = lean_ctor_get(v_mctx_3936_, 6);
v_lAssignment_3952_ = lean_ctor_get(v_mctx_3936_, 7);
v_eAssignment_3953_ = lean_ctor_get(v_mctx_3936_, 8);
v_dAssignment_3954_ = lean_ctor_get(v_mctx_3936_, 9);
v_instanceTypedMVars_3955_ = lean_ctor_get(v_mctx_3936_, 10);
v_synthNormMemo_3956_ = lean_ctor_get(v_mctx_3936_, 11);
v_isSharedCheck_3970_ = !lean_is_exclusive(v_mctx_3936_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3958_ = v_mctx_3936_;
v_isShared_3959_ = v_isSharedCheck_3970_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_synthNormMemo_3956_);
lean_inc(v_instanceTypedMVars_3955_);
lean_inc(v_dAssignment_3954_);
lean_inc(v_eAssignment_3953_);
lean_inc(v_lAssignment_3952_);
lean_inc(v_userNames_3951_);
lean_inc(v_decls_3950_);
lean_inc(v_lDecls_3949_);
lean_inc(v_mvarCounter_3948_);
lean_inc(v_lmvarCounter_3947_);
lean_inc(v_levelAssignDepth_3946_);
lean_inc(v_depth_3945_);
lean_dec(v_mctx_3936_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3970_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3963_; 
v___x_3960_ = lean_box(0);
v___x_3961_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_eAssignment_3953_, v_mvarId_3931_, v_val_3932_);
if (v_isShared_3959_ == 0)
{
lean_ctor_set(v___x_3958_, 8, v___x_3961_);
v___x_3963_ = v___x_3958_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v_depth_3945_);
lean_ctor_set(v_reuseFailAlloc_3969_, 1, v_levelAssignDepth_3946_);
lean_ctor_set(v_reuseFailAlloc_3969_, 2, v_lmvarCounter_3947_);
lean_ctor_set(v_reuseFailAlloc_3969_, 3, v_mvarCounter_3948_);
lean_ctor_set(v_reuseFailAlloc_3969_, 4, v_lDecls_3949_);
lean_ctor_set(v_reuseFailAlloc_3969_, 5, v_decls_3950_);
lean_ctor_set(v_reuseFailAlloc_3969_, 6, v_userNames_3951_);
lean_ctor_set(v_reuseFailAlloc_3969_, 7, v_lAssignment_3952_);
lean_ctor_set(v_reuseFailAlloc_3969_, 8, v___x_3961_);
lean_ctor_set(v_reuseFailAlloc_3969_, 9, v_dAssignment_3954_);
lean_ctor_set(v_reuseFailAlloc_3969_, 10, v_instanceTypedMVars_3955_);
lean_ctor_set(v_reuseFailAlloc_3969_, 11, v_synthNormMemo_3956_);
v___x_3963_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
lean_object* v___x_3965_; 
if (v_isShared_3944_ == 0)
{
lean_ctor_set(v___x_3943_, 0, v___x_3963_);
v___x_3965_ = v___x_3943_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v___x_3963_);
lean_ctor_set(v_reuseFailAlloc_3968_, 1, v_cache_3937_);
lean_ctor_set(v_reuseFailAlloc_3968_, 2, v_zetaDeltaFVarIds_3938_);
lean_ctor_set(v_reuseFailAlloc_3968_, 3, v_postponed_3939_);
lean_ctor_set(v_reuseFailAlloc_3968_, 4, v_diag_3940_);
lean_ctor_set(v_reuseFailAlloc_3968_, 5, v_rewriteFires_3941_);
v___x_3965_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
lean_object* v___x_3966_; lean_object* v___x_3967_; 
v___x_3966_ = lean_st_ref_put(v___y_3933_, v___x_3965_);
v___x_3967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3967_, 0, v___x_3960_);
return v___x_3967_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg___boxed(lean_object* v_mvarId_3972_, lean_object* v_val_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_){
_start:
{
lean_object* v_res_3976_; 
v_res_3976_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_3972_, v_val_3973_, v___y_3974_);
lean_dec(v___y_3974_);
return v_res_3976_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(size_t v_sz_3977_, size_t v_i_3978_, lean_object* v_bs_3979_){
_start:
{
uint8_t v___x_3980_; 
v___x_3980_ = lean_usize_dec_lt(v_i_3978_, v_sz_3977_);
if (v___x_3980_ == 0)
{
return v_bs_3979_;
}
else
{
lean_object* v_v_3981_; lean_object* v___x_3982_; lean_object* v_bs_x27_3983_; lean_object* v___x_3984_; size_t v___x_3985_; size_t v___x_3986_; lean_object* v___x_3987_; 
v_v_3981_ = lean_array_uget(v_bs_3979_, v_i_3978_);
v___x_3982_ = lean_unsigned_to_nat(0u);
v_bs_x27_3983_ = lean_array_uset(v_bs_3979_, v_i_3978_, v___x_3982_);
v___x_3984_ = l_Lean_Expr_fvar___override(v_v_3981_);
v___x_3985_ = ((size_t)1ULL);
v___x_3986_ = lean_usize_add(v_i_3978_, v___x_3985_);
v___x_3987_ = lean_array_uset(v_bs_x27_3983_, v_i_3978_, v___x_3984_);
v_i_3978_ = v___x_3986_;
v_bs_3979_ = v___x_3987_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0___boxed(lean_object* v_sz_3989_, lean_object* v_i_3990_, lean_object* v_bs_3991_){
_start:
{
size_t v_sz_boxed_3992_; size_t v_i_boxed_3993_; lean_object* v_res_3994_; 
v_sz_boxed_3992_ = lean_unbox_usize(v_sz_3989_);
lean_dec(v_sz_3989_);
v_i_boxed_3993_ = lean_unbox_usize(v_i_3990_);
lean_dec(v_i_3990_);
v_res_3994_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_boxed_3992_, v_i_boxed_3993_, v_bs_3991_);
return v_res_3994_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0(lean_object* v___x_3995_, lean_object* v_mvarId_3996_, lean_object* v_a_3997_, lean_object* v___x_3998_, lean_object* v_fvarIds_3999_, lean_object* v_es_4000_, lean_object* v_givenNames_x27_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_){
_start:
{
lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4058_; uint8_t v___x_4059_; 
v___x_4007_ = lean_unsigned_to_nat(0u);
v___x_4008_ = lean_array_get_borrowed(v___x_3995_, v_es_4000_, v___x_4007_);
v___x_4058_ = lean_array_get_size(v_fvarIds_3999_);
v___x_4059_ = lean_nat_dec_eq(v___x_4058_, v___x_4007_);
if (v___x_4059_ == 0)
{
lean_dec(v___x_3998_);
goto v___jp_4009_;
}
else
{
uint8_t v___x_4060_; 
v___x_4060_ = lean_expr_eqv(v_a_3997_, v___x_4008_);
if (v___x_4060_ == 0)
{
lean_dec(v___x_3998_);
goto v___jp_4009_;
}
else
{
lean_object* v___x_4061_; 
lean_inc(v_mvarId_3996_);
v___x_4061_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_3998_, v_mvarId_3996_, v___y_4002_, v___y_4003_, v___y_4004_, v___y_4005_);
if (lean_obj_tag(v___x_4061_) == 0)
{
lean_dec_ref_known(v___x_4061_, 1);
goto v___jp_4009_;
}
else
{
lean_object* v_a_4062_; lean_object* v___x_4064_; uint8_t v_isShared_4065_; uint8_t v_isSharedCheck_4069_; 
lean_dec(v_givenNames_x27_4001_);
lean_dec_ref(v_fvarIds_3999_);
lean_dec(v_mvarId_3996_);
v_a_4062_ = lean_ctor_get(v___x_4061_, 0);
v_isSharedCheck_4069_ = !lean_is_exclusive(v___x_4061_);
if (v_isSharedCheck_4069_ == 0)
{
v___x_4064_ = v___x_4061_;
v_isShared_4065_ = v_isSharedCheck_4069_;
goto v_resetjp_4063_;
}
else
{
lean_inc(v_a_4062_);
lean_dec(v___x_4061_);
v___x_4064_ = lean_box(0);
v_isShared_4065_ = v_isSharedCheck_4069_;
goto v_resetjp_4063_;
}
v_resetjp_4063_:
{
lean_object* v___x_4067_; 
if (v_isShared_4065_ == 0)
{
v___x_4067_ = v___x_4064_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v_a_4062_);
v___x_4067_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
return v___x_4067_;
}
}
}
}
}
v___jp_4009_:
{
lean_object* v___x_4010_; 
lean_inc(v_mvarId_3996_);
v___x_4010_ = l_Lean_MVarId_getTag(v_mvarId_3996_, v___y_4002_, v___y_4003_, v___y_4004_, v___y_4005_);
if (lean_obj_tag(v___x_4010_) == 0)
{
lean_object* v_a_4011_; lean_object* v___x_4012_; 
v_a_4011_ = lean_ctor_get(v___x_4010_, 0);
lean_inc(v_a_4011_);
lean_dec_ref_known(v___x_4010_, 1);
lean_inc(v___x_4008_);
v___x_4012_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_4008_, v_a_4011_, v___y_4002_, v___y_4003_, v___y_4004_, v___y_4005_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; size_t v_sz_4014_; size_t v___x_4015_; lean_object* v___x_4016_; uint8_t v___x_4017_; uint8_t v___x_4018_; uint8_t v___x_4019_; lean_object* v___x_4020_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
lean_inc_n(v_a_4013_, 2);
lean_dec_ref_known(v___x_4012_, 1);
v_sz_4014_ = lean_array_size(v_fvarIds_3999_);
v___x_4015_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_3999_);
v___x_4016_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_4014_, v___x_4015_, v_fvarIds_3999_);
v___x_4017_ = 0;
v___x_4018_ = 1;
v___x_4019_ = 1;
v___x_4020_ = l_Lean_Meta_mkLetFVars(v___x_4016_, v_a_4013_, v___x_4017_, v___x_4018_, v___x_4019_, v___y_4002_, v___y_4003_, v___y_4004_, v___y_4005_);
lean_dec_ref(v___x_4016_);
if (lean_obj_tag(v___x_4020_) == 0)
{
lean_object* v_a_4021_; lean_object* v___x_4022_; lean_object* v___x_4024_; uint8_t v_isShared_4025_; uint8_t v_isSharedCheck_4032_; 
v_a_4021_ = lean_ctor_get(v___x_4020_, 0);
lean_inc(v_a_4021_);
lean_dec_ref_known(v___x_4020_, 1);
v___x_4022_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_3996_, v_a_4021_, v___y_4003_);
v_isSharedCheck_4032_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4032_ == 0)
{
lean_object* v_unused_4033_; 
v_unused_4033_ = lean_ctor_get(v___x_4022_, 0);
lean_dec(v_unused_4033_);
v___x_4024_ = v___x_4022_;
v_isShared_4025_ = v_isSharedCheck_4032_;
goto v_resetjp_4023_;
}
else
{
lean_dec(v___x_4022_);
v___x_4024_ = lean_box(0);
v_isShared_4025_ = v_isSharedCheck_4032_;
goto v_resetjp_4023_;
}
v_resetjp_4023_:
{
lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4030_; 
v___x_4026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4026_, 0, v_fvarIds_3999_);
lean_ctor_set(v___x_4026_, 1, v_givenNames_x27_4001_);
v___x_4027_ = l_Lean_Expr_mvarId_x21(v_a_4013_);
lean_dec(v_a_4013_);
v___x_4028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4028_, 0, v___x_4026_);
lean_ctor_set(v___x_4028_, 1, v___x_4027_);
if (v_isShared_4025_ == 0)
{
lean_ctor_set(v___x_4024_, 0, v___x_4028_);
v___x_4030_ = v___x_4024_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v___x_4028_);
v___x_4030_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
return v___x_4030_;
}
}
}
else
{
lean_object* v_a_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4041_; 
lean_dec(v_a_4013_);
lean_dec(v_givenNames_x27_4001_);
lean_dec_ref(v_fvarIds_3999_);
lean_dec(v_mvarId_3996_);
v_a_4034_ = lean_ctor_get(v___x_4020_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v___x_4020_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4036_ = v___x_4020_;
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_a_4034_);
lean_dec(v___x_4020_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
lean_object* v___x_4039_; 
if (v_isShared_4037_ == 0)
{
v___x_4039_ = v___x_4036_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v_a_4034_);
v___x_4039_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
return v___x_4039_;
}
}
}
}
else
{
lean_object* v_a_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4049_; 
lean_dec(v_givenNames_x27_4001_);
lean_dec_ref(v_fvarIds_3999_);
lean_dec(v_mvarId_3996_);
v_a_4042_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4049_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4049_ == 0)
{
v___x_4044_ = v___x_4012_;
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_a_4042_);
lean_dec(v___x_4012_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v___x_4047_; 
if (v_isShared_4045_ == 0)
{
v___x_4047_ = v___x_4044_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v_a_4042_);
v___x_4047_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
return v___x_4047_;
}
}
}
}
else
{
lean_object* v_a_4050_; lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4057_; 
lean_dec(v_givenNames_x27_4001_);
lean_dec_ref(v_fvarIds_3999_);
lean_dec(v_mvarId_3996_);
v_a_4050_ = lean_ctor_get(v___x_4010_, 0);
v_isSharedCheck_4057_ = !lean_is_exclusive(v___x_4010_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_4052_ = v___x_4010_;
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
else
{
lean_inc(v_a_4050_);
lean_dec(v___x_4010_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v___x_4055_; 
if (v_isShared_4053_ == 0)
{
v___x_4055_ = v___x_4052_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v_a_4050_);
v___x_4055_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
return v___x_4055_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0___boxed(lean_object* v___x_4070_, lean_object* v_mvarId_4071_, lean_object* v_a_4072_, lean_object* v___x_4073_, lean_object* v_fvarIds_4074_, lean_object* v_es_4075_, lean_object* v_givenNames_x27_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_){
_start:
{
lean_object* v_res_4082_; 
v_res_4082_ = l_Lean_MVarId_extractLets___lam__0(v___x_4070_, v_mvarId_4071_, v_a_4072_, v___x_4073_, v_fvarIds_4074_, v_es_4075_, v_givenNames_x27_4076_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
lean_dec(v___y_4078_);
lean_dec_ref(v___y_4077_);
lean_dec_ref(v_es_4075_);
lean_dec_ref(v_a_4072_);
lean_dec_ref(v___x_4070_);
return v_res_4082_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1(lean_object* v_mvarId_4083_, lean_object* v___x_4084_, lean_object* v___x_4085_, lean_object* v_givenNames_4086_, lean_object* v_config_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_){
_start:
{
lean_object* v___x_4093_; 
lean_inc(v___x_4084_);
lean_inc(v_mvarId_4083_);
v___x_4093_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4083_, v___x_4084_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
if (lean_obj_tag(v___x_4093_) == 0)
{
lean_object* v___x_4094_; 
lean_dec_ref_known(v___x_4093_, 1);
lean_inc(v_mvarId_4083_);
v___x_4094_ = l_Lean_MVarId_getType(v_mvarId_4083_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
if (lean_obj_tag(v___x_4094_) == 0)
{
lean_object* v_a_4095_; lean_object* v___f_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; 
v_a_4095_ = lean_ctor_get(v___x_4094_, 0);
lean_inc_n(v_a_4095_, 2);
lean_dec_ref_known(v___x_4094_, 1);
v___f_4096_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__0___boxed), 12, 4);
lean_closure_set(v___f_4096_, 0, v___x_4085_);
lean_closure_set(v___f_4096_, 1, v_mvarId_4083_);
lean_closure_set(v___f_4096_, 2, v_a_4095_);
lean_closure_set(v___f_4096_, 3, v___x_4084_);
v___x_4097_ = lean_unsigned_to_nat(1u);
v___x_4098_ = lean_mk_empty_array_with_capacity(v___x_4097_);
v___x_4099_ = lean_array_push(v___x_4098_, v_a_4095_);
v___x_4100_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4099_, v_givenNames_4086_, v___f_4096_, v_config_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
return v___x_4100_;
}
else
{
lean_object* v_a_4101_; lean_object* v___x_4103_; uint8_t v_isShared_4104_; uint8_t v_isSharedCheck_4108_; 
lean_dec(v_givenNames_4086_);
lean_dec_ref(v___x_4085_);
lean_dec(v___x_4084_);
lean_dec(v_mvarId_4083_);
v_a_4101_ = lean_ctor_get(v___x_4094_, 0);
v_isSharedCheck_4108_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4108_ == 0)
{
v___x_4103_ = v___x_4094_;
v_isShared_4104_ = v_isSharedCheck_4108_;
goto v_resetjp_4102_;
}
else
{
lean_inc(v_a_4101_);
lean_dec(v___x_4094_);
v___x_4103_ = lean_box(0);
v_isShared_4104_ = v_isSharedCheck_4108_;
goto v_resetjp_4102_;
}
v_resetjp_4102_:
{
lean_object* v___x_4106_; 
if (v_isShared_4104_ == 0)
{
v___x_4106_ = v___x_4103_;
goto v_reusejp_4105_;
}
else
{
lean_object* v_reuseFailAlloc_4107_; 
v_reuseFailAlloc_4107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4107_, 0, v_a_4101_);
v___x_4106_ = v_reuseFailAlloc_4107_;
goto v_reusejp_4105_;
}
v_reusejp_4105_:
{
return v___x_4106_;
}
}
}
}
else
{
lean_object* v_a_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4116_; 
lean_dec(v_givenNames_4086_);
lean_dec_ref(v___x_4085_);
lean_dec(v___x_4084_);
lean_dec(v_mvarId_4083_);
v_a_4109_ = lean_ctor_get(v___x_4093_, 0);
v_isSharedCheck_4116_ = !lean_is_exclusive(v___x_4093_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4111_ = v___x_4093_;
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_a_4109_);
lean_dec(v___x_4093_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4114_; 
if (v_isShared_4112_ == 0)
{
v___x_4114_ = v___x_4111_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v_a_4109_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
return v___x_4114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1___boxed(lean_object* v_mvarId_4117_, lean_object* v___x_4118_, lean_object* v___x_4119_, lean_object* v_givenNames_4120_, lean_object* v_config_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_){
_start:
{
lean_object* v_res_4127_; 
v_res_4127_ = l_Lean_MVarId_extractLets___lam__1(v_mvarId_4117_, v___x_4118_, v___x_4119_, v_givenNames_4120_, v_config_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_);
lean_dec(v___y_4125_);
lean_dec_ref(v___y_4124_);
lean_dec(v___y_4123_);
lean_dec_ref(v___y_4122_);
lean_dec_ref(v_config_4121_);
return v_res_4127_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets(lean_object* v_mvarId_4131_, lean_object* v_givenNames_4132_, lean_object* v_config_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_){
_start:
{
lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___f_4141_; lean_object* v___x_4142_; 
v___x_4139_ = l_Lean_instInhabitedExpr;
v___x_4140_ = ((lean_object*)(l_Lean_MVarId_extractLets___closed__1));
lean_inc(v_mvarId_4131_);
v___f_4141_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__1___boxed), 10, 5);
lean_closure_set(v___f_4141_, 0, v_mvarId_4131_);
lean_closure_set(v___f_4141_, 1, v___x_4140_);
lean_closure_set(v___f_4141_, 2, v___x_4139_);
lean_closure_set(v___f_4141_, 3, v_givenNames_4132_);
lean_closure_set(v___f_4141_, 4, v_config_4133_);
v___x_4142_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4131_, v___f_4141_, v_a_4134_, v_a_4135_, v_a_4136_, v_a_4137_);
return v___x_4142_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___boxed(lean_object* v_mvarId_4143_, lean_object* v_givenNames_4144_, lean_object* v_config_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_, lean_object* v_a_4148_, lean_object* v_a_4149_, lean_object* v_a_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_Lean_MVarId_extractLets(v_mvarId_4143_, v_givenNames_4144_, v_config_4145_, v_a_4146_, v_a_4147_, v_a_4148_, v_a_4149_);
lean_dec(v_a_4149_);
lean_dec_ref(v_a_4148_);
lean_dec(v_a_4147_);
lean_dec_ref(v_a_4146_);
return v_res_4151_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(lean_object* v_mvarId_4152_, lean_object* v_val_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_){
_start:
{
lean_object* v___x_4159_; 
v___x_4159_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4152_, v_val_4153_, v___y_4155_);
return v___x_4159_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___boxed(lean_object* v_mvarId_4160_, lean_object* v_val_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_){
_start:
{
lean_object* v_res_4167_; 
v_res_4167_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(v_mvarId_4160_, v_val_4161_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_);
lean_dec(v___y_4165_);
lean_dec_ref(v___y_4164_);
lean_dec(v___y_4163_);
lean_dec_ref(v___y_4162_);
return v_res_4167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1(lean_object* v_00_u03b2_4168_, lean_object* v_x_4169_, lean_object* v_x_4170_, lean_object* v_x_4171_){
_start:
{
lean_object* v___x_4172_; 
v___x_4172_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_x_4169_, v_x_4170_, v_x_4171_);
return v___x_4172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_4173_, lean_object* v_x_4174_, size_t v_x_4175_, size_t v_x_4176_, lean_object* v_x_4177_, lean_object* v_x_4178_){
_start:
{
lean_object* v___x_4179_; 
v___x_4179_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_4174_, v_x_4175_, v_x_4176_, v_x_4177_, v_x_4178_);
return v___x_4179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_4180_, lean_object* v_x_4181_, lean_object* v_x_4182_, lean_object* v_x_4183_, lean_object* v_x_4184_, lean_object* v_x_4185_){
_start:
{
size_t v_x_2795__boxed_4186_; size_t v_x_2796__boxed_4187_; lean_object* v_res_4188_; 
v_x_2795__boxed_4186_ = lean_unbox_usize(v_x_4182_);
lean_dec(v_x_4182_);
v_x_2796__boxed_4187_ = lean_unbox_usize(v_x_4183_);
lean_dec(v_x_4183_);
v_res_4188_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(v_00_u03b2_4180_, v_x_4181_, v_x_2795__boxed_4186_, v_x_2796__boxed_4187_, v_x_4184_, v_x_4185_);
return v_res_4188_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_4189_, lean_object* v_n_4190_, lean_object* v_k_4191_, lean_object* v_v_4192_){
_start:
{
lean_object* v___x_4193_; 
v___x_4193_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v_n_4190_, v_k_4191_, v_v_4192_);
return v___x_4193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(lean_object* v_00_u03b2_4194_, size_t v_depth_4195_, lean_object* v_keys_4196_, lean_object* v_vals_4197_, lean_object* v_heq_4198_, lean_object* v_i_4199_, lean_object* v_entries_4200_){
_start:
{
lean_object* v___x_4201_; 
v___x_4201_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_4195_, v_keys_4196_, v_vals_4197_, v_i_4199_, v_entries_4200_);
return v___x_4201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b2_4202_, lean_object* v_depth_4203_, lean_object* v_keys_4204_, lean_object* v_vals_4205_, lean_object* v_heq_4206_, lean_object* v_i_4207_, lean_object* v_entries_4208_){
_start:
{
size_t v_depth_boxed_4209_; lean_object* v_res_4210_; 
v_depth_boxed_4209_ = lean_unbox_usize(v_depth_4203_);
lean_dec(v_depth_4203_);
v_res_4210_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(v_00_u03b2_4202_, v_depth_boxed_4209_, v_keys_4204_, v_vals_4205_, v_heq_4206_, v_i_4207_, v_entries_4208_);
lean_dec_ref(v_vals_4205_);
lean_dec_ref(v_keys_4204_);
return v_res_4210_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_4211_, lean_object* v_x_4212_, lean_object* v_x_4213_, lean_object* v_x_4214_, lean_object* v_x_4215_){
_start:
{
lean_object* v___x_4216_; 
v___x_4216_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_x_4212_, v_x_4213_, v_x_4214_, v_x_4215_);
return v___x_4216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(size_t v_sz_4217_, size_t v_i_4218_, lean_object* v_bs_4219_){
_start:
{
uint8_t v___x_4220_; 
v___x_4220_ = lean_usize_dec_lt(v_i_4218_, v_sz_4217_);
if (v___x_4220_ == 0)
{
return v_bs_4219_;
}
else
{
lean_object* v_v_4221_; lean_object* v___x_4222_; lean_object* v_bs_x27_4223_; lean_object* v___x_4224_; size_t v___x_4225_; size_t v___x_4226_; lean_object* v___x_4227_; 
v_v_4221_ = lean_array_uget(v_bs_4219_, v_i_4218_);
v___x_4222_ = lean_unsigned_to_nat(0u);
v_bs_x27_4223_ = lean_array_uset(v_bs_4219_, v_i_4218_, v___x_4222_);
v___x_4224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4224_, 0, v_v_4221_);
v___x_4225_ = ((size_t)1ULL);
v___x_4226_ = lean_usize_add(v_i_4218_, v___x_4225_);
v___x_4227_ = lean_array_uset(v_bs_x27_4223_, v_i_4218_, v___x_4224_);
v_i_4218_ = v___x_4226_;
v_bs_4219_ = v___x_4227_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0___boxed(lean_object* v_sz_4229_, lean_object* v_i_4230_, lean_object* v_bs_4231_){
_start:
{
size_t v_sz_boxed_4232_; size_t v_i_boxed_4233_; lean_object* v_res_4234_; 
v_sz_boxed_4232_ = lean_unbox_usize(v_sz_4229_);
lean_dec(v_sz_4229_);
v_i_boxed_4233_ = lean_unbox_usize(v_i_4230_);
lean_dec(v_i_4230_);
v_res_4234_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_boxed_4232_, v_i_boxed_4233_, v_bs_4231_);
return v_res_4234_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0(lean_object* v_mvarId_4235_, lean_object* v_fvars_4236_, lean_object* v_fvarIds_4237_, lean_object* v_givenNames_x27_4238_, lean_object* v_targetNew_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_){
_start:
{
lean_object* v___x_4245_; 
lean_inc(v_mvarId_4235_);
v___x_4245_ = l_Lean_MVarId_getTag(v_mvarId_4235_, v___y_4240_, v___y_4241_, v___y_4242_, v___y_4243_);
if (lean_obj_tag(v___x_4245_) == 0)
{
lean_object* v_a_4246_; lean_object* v___x_4247_; 
v_a_4246_ = lean_ctor_get(v___x_4245_, 0);
lean_inc(v_a_4246_);
lean_dec_ref_known(v___x_4245_, 1);
v___x_4247_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_targetNew_4239_, v_a_4246_, v___y_4240_, v___y_4241_, v___y_4242_, v___y_4243_);
if (lean_obj_tag(v___x_4247_) == 0)
{
lean_object* v_a_4248_; size_t v_sz_4249_; size_t v___x_4250_; lean_object* v___x_4251_; uint8_t v___x_4252_; uint8_t v___x_4253_; uint8_t v___x_4254_; lean_object* v___x_4255_; 
v_a_4248_ = lean_ctor_get(v___x_4247_, 0);
lean_inc_n(v_a_4248_, 2);
lean_dec_ref_known(v___x_4247_, 1);
v_sz_4249_ = lean_array_size(v_fvarIds_4237_);
v___x_4250_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_4237_);
v___x_4251_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_4249_, v___x_4250_, v_fvarIds_4237_);
v___x_4252_ = 0;
v___x_4253_ = 1;
v___x_4254_ = 1;
v___x_4255_ = l_Lean_Meta_mkLetFVars(v___x_4251_, v_a_4248_, v___x_4252_, v___x_4253_, v___x_4254_, v___y_4240_, v___y_4241_, v___y_4242_, v___y_4243_);
lean_dec_ref(v___x_4251_);
if (lean_obj_tag(v___x_4255_) == 0)
{
lean_object* v_a_4256_; lean_object* v___x_4257_; lean_object* v___x_4259_; uint8_t v_isShared_4260_; uint8_t v_isSharedCheck_4270_; 
v_a_4256_ = lean_ctor_get(v___x_4255_, 0);
lean_inc(v_a_4256_);
lean_dec_ref_known(v___x_4255_, 1);
v___x_4257_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4235_, v_a_4256_, v___y_4241_);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4257_);
if (v_isSharedCheck_4270_ == 0)
{
lean_object* v_unused_4271_; 
v_unused_4271_ = lean_ctor_get(v___x_4257_, 0);
lean_dec(v_unused_4271_);
v___x_4259_ = v___x_4257_;
v_isShared_4260_ = v_isSharedCheck_4270_;
goto v_resetjp_4258_;
}
else
{
lean_dec(v___x_4257_);
v___x_4259_ = lean_box(0);
v_isShared_4260_ = v_isSharedCheck_4270_;
goto v_resetjp_4258_;
}
v_resetjp_4258_:
{
lean_object* v___x_4261_; size_t v_sz_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4268_; 
v___x_4261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4261_, 0, v_fvarIds_4237_);
lean_ctor_set(v___x_4261_, 1, v_givenNames_x27_4238_);
v_sz_4262_ = lean_array_size(v_fvars_4236_);
v___x_4263_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4262_, v___x_4250_, v_fvars_4236_);
v___x_4264_ = l_Lean_Expr_mvarId_x21(v_a_4248_);
lean_dec(v_a_4248_);
v___x_4265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4265_, 0, v___x_4263_);
lean_ctor_set(v___x_4265_, 1, v___x_4264_);
v___x_4266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4266_, 0, v___x_4261_);
lean_ctor_set(v___x_4266_, 1, v___x_4265_);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 0, v___x_4266_);
v___x_4268_ = v___x_4259_;
goto v_reusejp_4267_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v___x_4266_);
v___x_4268_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4267_;
}
v_reusejp_4267_:
{
return v___x_4268_;
}
}
}
else
{
lean_object* v_a_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4279_; 
lean_dec(v_a_4248_);
lean_dec(v_givenNames_x27_4238_);
lean_dec_ref(v_fvarIds_4237_);
lean_dec_ref(v_fvars_4236_);
lean_dec(v_mvarId_4235_);
v_a_4272_ = lean_ctor_get(v___x_4255_, 0);
v_isSharedCheck_4279_ = !lean_is_exclusive(v___x_4255_);
if (v_isSharedCheck_4279_ == 0)
{
v___x_4274_ = v___x_4255_;
v_isShared_4275_ = v_isSharedCheck_4279_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_a_4272_);
lean_dec(v___x_4255_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4279_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
lean_object* v___x_4277_; 
if (v_isShared_4275_ == 0)
{
v___x_4277_ = v___x_4274_;
goto v_reusejp_4276_;
}
else
{
lean_object* v_reuseFailAlloc_4278_; 
v_reuseFailAlloc_4278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4278_, 0, v_a_4272_);
v___x_4277_ = v_reuseFailAlloc_4278_;
goto v_reusejp_4276_;
}
v_reusejp_4276_:
{
return v___x_4277_;
}
}
}
}
else
{
lean_object* v_a_4280_; lean_object* v___x_4282_; uint8_t v_isShared_4283_; uint8_t v_isSharedCheck_4287_; 
lean_dec(v_givenNames_x27_4238_);
lean_dec_ref(v_fvarIds_4237_);
lean_dec_ref(v_fvars_4236_);
lean_dec(v_mvarId_4235_);
v_a_4280_ = lean_ctor_get(v___x_4247_, 0);
v_isSharedCheck_4287_ = !lean_is_exclusive(v___x_4247_);
if (v_isSharedCheck_4287_ == 0)
{
v___x_4282_ = v___x_4247_;
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
else
{
lean_inc(v_a_4280_);
lean_dec(v___x_4247_);
v___x_4282_ = lean_box(0);
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
v_resetjp_4281_:
{
lean_object* v___x_4285_; 
if (v_isShared_4283_ == 0)
{
v___x_4285_ = v___x_4282_;
goto v_reusejp_4284_;
}
else
{
lean_object* v_reuseFailAlloc_4286_; 
v_reuseFailAlloc_4286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4286_, 0, v_a_4280_);
v___x_4285_ = v_reuseFailAlloc_4286_;
goto v_reusejp_4284_;
}
v_reusejp_4284_:
{
return v___x_4285_;
}
}
}
}
else
{
lean_object* v_a_4288_; lean_object* v___x_4290_; uint8_t v_isShared_4291_; uint8_t v_isSharedCheck_4295_; 
lean_dec_ref(v_targetNew_4239_);
lean_dec(v_givenNames_x27_4238_);
lean_dec_ref(v_fvarIds_4237_);
lean_dec_ref(v_fvars_4236_);
lean_dec(v_mvarId_4235_);
v_a_4288_ = lean_ctor_get(v___x_4245_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v___x_4245_);
if (v_isSharedCheck_4295_ == 0)
{
v___x_4290_ = v___x_4245_;
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
else
{
lean_inc(v_a_4288_);
lean_dec(v___x_4245_);
v___x_4290_ = lean_box(0);
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
v_resetjp_4289_:
{
lean_object* v___x_4293_; 
if (v_isShared_4291_ == 0)
{
v___x_4293_ = v___x_4290_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v_a_4288_);
v___x_4293_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
return v___x_4293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4296_, lean_object* v_fvars_4297_, lean_object* v_fvarIds_4298_, lean_object* v_givenNames_x27_4299_, lean_object* v_targetNew_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_){
_start:
{
lean_object* v_res_4306_; 
v_res_4306_ = l_Lean_MVarId_extractLetsLocalDecl___lam__0(v_mvarId_4296_, v_fvars_4297_, v_fvarIds_4298_, v_givenNames_x27_4299_, v_targetNew_4300_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_);
lean_dec(v___y_4304_);
lean_dec_ref(v___y_4303_);
lean_dec(v___y_4302_);
lean_dec_ref(v___y_4301_);
return v_res_4306_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1(lean_object* v___x_4307_, lean_object* v_binderName_4308_, lean_object* v_body_4309_, uint8_t v_binderInfo_4310_, lean_object* v___f_4311_, lean_object* v_binderType_4312_, lean_object* v___x_4313_, lean_object* v_mvarId_4314_, lean_object* v_fvarIds_4315_, lean_object* v_es_4316_, lean_object* v_givenNames_x27_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_){
_start:
{
lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4328_; uint8_t v___x_4329_; 
v___x_4323_ = lean_unsigned_to_nat(0u);
v___x_4324_ = lean_array_get_borrowed(v___x_4307_, v_es_4316_, v___x_4323_);
v___x_4328_ = lean_array_get_size(v_fvarIds_4315_);
v___x_4329_ = lean_nat_dec_eq(v___x_4328_, v___x_4323_);
if (v___x_4329_ == 0)
{
lean_dec(v_mvarId_4314_);
lean_dec(v___x_4313_);
goto v___jp_4325_;
}
else
{
uint8_t v___x_4330_; 
v___x_4330_ = lean_expr_eqv(v_binderType_4312_, v___x_4324_);
if (v___x_4330_ == 0)
{
lean_dec(v_mvarId_4314_);
lean_dec(v___x_4313_);
goto v___jp_4325_;
}
else
{
lean_object* v___x_4331_; 
v___x_4331_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4313_, v_mvarId_4314_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_);
if (lean_obj_tag(v___x_4331_) == 0)
{
lean_dec_ref_known(v___x_4331_, 1);
goto v___jp_4325_;
}
else
{
lean_object* v_a_4332_; lean_object* v___x_4334_; uint8_t v_isShared_4335_; uint8_t v_isSharedCheck_4339_; 
lean_dec(v_givenNames_x27_4317_);
lean_dec_ref(v_fvarIds_4315_);
lean_dec_ref(v___f_4311_);
lean_dec_ref(v_body_4309_);
lean_dec(v_binderName_4308_);
v_a_4332_ = lean_ctor_get(v___x_4331_, 0);
v_isSharedCheck_4339_ = !lean_is_exclusive(v___x_4331_);
if (v_isSharedCheck_4339_ == 0)
{
v___x_4334_ = v___x_4331_;
v_isShared_4335_ = v_isSharedCheck_4339_;
goto v_resetjp_4333_;
}
else
{
lean_inc(v_a_4332_);
lean_dec(v___x_4331_);
v___x_4334_ = lean_box(0);
v_isShared_4335_ = v_isSharedCheck_4339_;
goto v_resetjp_4333_;
}
v_resetjp_4333_:
{
lean_object* v___x_4337_; 
if (v_isShared_4335_ == 0)
{
v___x_4337_ = v___x_4334_;
goto v_reusejp_4336_;
}
else
{
lean_object* v_reuseFailAlloc_4338_; 
v_reuseFailAlloc_4338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4338_, 0, v_a_4332_);
v___x_4337_ = v_reuseFailAlloc_4338_;
goto v_reusejp_4336_;
}
v_reusejp_4336_:
{
return v___x_4337_;
}
}
}
}
}
v___jp_4325_:
{
lean_object* v___x_4326_; lean_object* v___x_4327_; 
lean_inc(v___x_4324_);
v___x_4326_ = l_Lean_Expr_forallE___override(v_binderName_4308_, v___x_4324_, v_body_4309_, v_binderInfo_4310_);
lean_inc(v___y_4321_);
lean_inc_ref(v___y_4320_);
lean_inc(v___y_4319_);
lean_inc_ref(v___y_4318_);
v___x_4327_ = lean_apply_8(v___f_4311_, v_fvarIds_4315_, v_givenNames_x27_4317_, v___x_4326_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_, lean_box(0));
return v___x_4327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed(lean_object* v___x_4340_, lean_object* v_binderName_4341_, lean_object* v_body_4342_, lean_object* v_binderInfo_4343_, lean_object* v___f_4344_, lean_object* v_binderType_4345_, lean_object* v___x_4346_, lean_object* v_mvarId_4347_, lean_object* v_fvarIds_4348_, lean_object* v_es_4349_, lean_object* v_givenNames_x27_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_, lean_object* v___y_4355_){
_start:
{
uint8_t v_binderInfo_1803__boxed_4356_; lean_object* v_res_4357_; 
v_binderInfo_1803__boxed_4356_ = lean_unbox(v_binderInfo_4343_);
v_res_4357_ = l_Lean_MVarId_extractLetsLocalDecl___lam__1(v___x_4340_, v_binderName_4341_, v_body_4342_, v_binderInfo_1803__boxed_4356_, v___f_4344_, v_binderType_4345_, v___x_4346_, v_mvarId_4347_, v_fvarIds_4348_, v_es_4349_, v_givenNames_x27_4350_, v___y_4351_, v___y_4352_, v___y_4353_, v___y_4354_);
lean_dec(v___y_4354_);
lean_dec_ref(v___y_4353_);
lean_dec(v___y_4352_);
lean_dec_ref(v___y_4351_);
lean_dec_ref(v_es_4349_);
lean_dec_ref(v_binderType_4345_);
lean_dec_ref(v___x_4340_);
return v_res_4357_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2(lean_object* v___x_4358_, lean_object* v_declName_4359_, lean_object* v_body_4360_, uint8_t v_nondep_4361_, lean_object* v___f_4362_, lean_object* v_type_4363_, lean_object* v_value_4364_, lean_object* v___x_4365_, lean_object* v_mvarId_4366_, lean_object* v_fvarIds_4367_, lean_object* v_es_4368_, lean_object* v_givenNames_x27_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_){
_start:
{
lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4382_; uint8_t v___x_4383_; 
v___x_4375_ = lean_unsigned_to_nat(0u);
v___x_4376_ = lean_array_get_borrowed(v___x_4358_, v_es_4368_, v___x_4375_);
v___x_4377_ = lean_unsigned_to_nat(1u);
v___x_4378_ = lean_array_get_borrowed(v___x_4358_, v_es_4368_, v___x_4377_);
v___x_4382_ = lean_array_get_size(v_fvarIds_4367_);
v___x_4383_ = lean_nat_dec_eq(v___x_4382_, v___x_4375_);
if (v___x_4383_ == 0)
{
lean_dec(v_mvarId_4366_);
lean_dec(v___x_4365_);
goto v___jp_4379_;
}
else
{
uint8_t v___x_4384_; 
v___x_4384_ = lean_expr_eqv(v_type_4363_, v___x_4376_);
if (v___x_4384_ == 0)
{
lean_dec(v_mvarId_4366_);
lean_dec(v___x_4365_);
goto v___jp_4379_;
}
else
{
uint8_t v___x_4385_; 
v___x_4385_ = lean_expr_eqv(v_value_4364_, v___x_4378_);
if (v___x_4385_ == 0)
{
lean_dec(v_mvarId_4366_);
lean_dec(v___x_4365_);
goto v___jp_4379_;
}
else
{
lean_object* v___x_4386_; 
v___x_4386_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4365_, v_mvarId_4366_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_);
if (lean_obj_tag(v___x_4386_) == 0)
{
lean_dec_ref_known(v___x_4386_, 1);
goto v___jp_4379_;
}
else
{
lean_object* v_a_4387_; lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4394_; 
lean_dec(v_givenNames_x27_4369_);
lean_dec_ref(v_fvarIds_4367_);
lean_dec_ref(v___f_4362_);
lean_dec_ref(v_body_4360_);
lean_dec(v_declName_4359_);
v_a_4387_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4394_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4394_ == 0)
{
v___x_4389_ = v___x_4386_;
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
else
{
lean_inc(v_a_4387_);
lean_dec(v___x_4386_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
lean_object* v___x_4392_; 
if (v_isShared_4390_ == 0)
{
v___x_4392_ = v___x_4389_;
goto v_reusejp_4391_;
}
else
{
lean_object* v_reuseFailAlloc_4393_; 
v_reuseFailAlloc_4393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4393_, 0, v_a_4387_);
v___x_4392_ = v_reuseFailAlloc_4393_;
goto v_reusejp_4391_;
}
v_reusejp_4391_:
{
return v___x_4392_;
}
}
}
}
}
}
v___jp_4379_:
{
lean_object* v___x_4380_; lean_object* v___x_4381_; 
lean_inc(v___x_4378_);
lean_inc(v___x_4376_);
v___x_4380_ = l_Lean_Expr_letE___override(v_declName_4359_, v___x_4376_, v___x_4378_, v_body_4360_, v_nondep_4361_);
lean_inc(v___y_4373_);
lean_inc_ref(v___y_4372_);
lean_inc(v___y_4371_);
lean_inc_ref(v___y_4370_);
v___x_4381_ = lean_apply_8(v___f_4362_, v_fvarIds_4367_, v_givenNames_x27_4369_, v___x_4380_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, lean_box(0));
return v___x_4381_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed(lean_object** _args){
lean_object* v___x_4395_ = _args[0];
lean_object* v_declName_4396_ = _args[1];
lean_object* v_body_4397_ = _args[2];
lean_object* v_nondep_4398_ = _args[3];
lean_object* v___f_4399_ = _args[4];
lean_object* v_type_4400_ = _args[5];
lean_object* v_value_4401_ = _args[6];
lean_object* v___x_4402_ = _args[7];
lean_object* v_mvarId_4403_ = _args[8];
lean_object* v_fvarIds_4404_ = _args[9];
lean_object* v_es_4405_ = _args[10];
lean_object* v_givenNames_x27_4406_ = _args[11];
lean_object* v___y_4407_ = _args[12];
lean_object* v___y_4408_ = _args[13];
lean_object* v___y_4409_ = _args[14];
lean_object* v___y_4410_ = _args[15];
lean_object* v___y_4411_ = _args[16];
_start:
{
uint8_t v_nondep_1874__boxed_4412_; lean_object* v_res_4413_; 
v_nondep_1874__boxed_4412_ = lean_unbox(v_nondep_4398_);
v_res_4413_ = l_Lean_MVarId_extractLetsLocalDecl___lam__2(v___x_4395_, v_declName_4396_, v_body_4397_, v_nondep_1874__boxed_4412_, v___f_4399_, v_type_4400_, v_value_4401_, v___x_4402_, v_mvarId_4403_, v_fvarIds_4404_, v_es_4405_, v_givenNames_x27_4406_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_);
lean_dec(v___y_4410_);
lean_dec_ref(v___y_4409_);
lean_dec(v___y_4408_);
lean_dec_ref(v___y_4407_);
lean_dec_ref(v_es_4405_);
lean_dec_ref(v_value_4401_);
lean_dec_ref(v_type_4400_);
lean_dec_ref(v___x_4395_);
return v_res_4413_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2(void){
_start:
{
lean_object* v___x_4417_; lean_object* v___x_4418_; 
v___x_4417_ = ((lean_object*)(l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1));
v___x_4418_ = l_Lean_MessageData_ofFormat(v___x_4417_);
return v___x_4418_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3(void){
_start:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; 
v___x_4419_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2);
v___x_4420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4420_, 0, v___x_4419_);
return v___x_4420_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3(lean_object* v_mvarId_4421_, lean_object* v___x_4422_, lean_object* v___f_4423_, lean_object* v___x_4424_, lean_object* v_givenNames_4425_, lean_object* v_config_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_){
_start:
{
lean_object* v___x_4432_; 
lean_inc(v_mvarId_4421_);
v___x_4432_ = l_Lean_MVarId_getType(v_mvarId_4421_, v___y_4427_, v___y_4428_, v___y_4429_, v___y_4430_);
if (lean_obj_tag(v___x_4432_) == 0)
{
lean_object* v_a_4433_; 
v_a_4433_ = lean_ctor_get(v___x_4432_, 0);
lean_inc(v_a_4433_);
lean_dec_ref_known(v___x_4432_, 1);
switch(lean_obj_tag(v_a_4433_))
{
case 7:
{
lean_object* v_binderName_4434_; lean_object* v_binderType_4435_; lean_object* v_body_4436_; uint8_t v_binderInfo_4437_; lean_object* v___x_4438_; lean_object* v___f_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; 
v_binderName_4434_ = lean_ctor_get(v_a_4433_, 0);
lean_inc(v_binderName_4434_);
v_binderType_4435_ = lean_ctor_get(v_a_4433_, 1);
lean_inc_ref_n(v_binderType_4435_, 2);
v_body_4436_ = lean_ctor_get(v_a_4433_, 2);
lean_inc_ref(v_body_4436_);
v_binderInfo_4437_ = lean_ctor_get_uint8(v_a_4433_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4433_, 3);
v___x_4438_ = lean_box(v_binderInfo_4437_);
v___f_4439_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed), 16, 8);
lean_closure_set(v___f_4439_, 0, v___x_4422_);
lean_closure_set(v___f_4439_, 1, v_binderName_4434_);
lean_closure_set(v___f_4439_, 2, v_body_4436_);
lean_closure_set(v___f_4439_, 3, v___x_4438_);
lean_closure_set(v___f_4439_, 4, v___f_4423_);
lean_closure_set(v___f_4439_, 5, v_binderType_4435_);
lean_closure_set(v___f_4439_, 6, v___x_4424_);
lean_closure_set(v___f_4439_, 7, v_mvarId_4421_);
v___x_4440_ = lean_unsigned_to_nat(1u);
v___x_4441_ = lean_mk_empty_array_with_capacity(v___x_4440_);
v___x_4442_ = lean_array_push(v___x_4441_, v_binderType_4435_);
v___x_4443_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4442_, v_givenNames_4425_, v___f_4439_, v_config_4426_, v___y_4427_, v___y_4428_, v___y_4429_, v___y_4430_);
return v___x_4443_;
}
case 8:
{
lean_object* v_declName_4444_; lean_object* v_type_4445_; lean_object* v_value_4446_; lean_object* v_body_4447_; uint8_t v_nondep_4448_; lean_object* v___x_4449_; lean_object* v___f_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; 
v_declName_4444_ = lean_ctor_get(v_a_4433_, 0);
lean_inc(v_declName_4444_);
v_type_4445_ = lean_ctor_get(v_a_4433_, 1);
lean_inc_ref_n(v_type_4445_, 2);
v_value_4446_ = lean_ctor_get(v_a_4433_, 2);
lean_inc_ref_n(v_value_4446_, 2);
v_body_4447_ = lean_ctor_get(v_a_4433_, 3);
lean_inc_ref(v_body_4447_);
v_nondep_4448_ = lean_ctor_get_uint8(v_a_4433_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_a_4433_, 4);
v___x_4449_ = lean_box(v_nondep_4448_);
v___f_4450_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed), 17, 9);
lean_closure_set(v___f_4450_, 0, v___x_4422_);
lean_closure_set(v___f_4450_, 1, v_declName_4444_);
lean_closure_set(v___f_4450_, 2, v_body_4447_);
lean_closure_set(v___f_4450_, 3, v___x_4449_);
lean_closure_set(v___f_4450_, 4, v___f_4423_);
lean_closure_set(v___f_4450_, 5, v_type_4445_);
lean_closure_set(v___f_4450_, 6, v_value_4446_);
lean_closure_set(v___f_4450_, 7, v___x_4424_);
lean_closure_set(v___f_4450_, 8, v_mvarId_4421_);
v___x_4451_ = lean_unsigned_to_nat(2u);
v___x_4452_ = lean_mk_empty_array_with_capacity(v___x_4451_);
v___x_4453_ = lean_array_push(v___x_4452_, v_type_4445_);
v___x_4454_ = lean_array_push(v___x_4453_, v_value_4446_);
v___x_4455_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4454_, v_givenNames_4425_, v___f_4450_, v_config_4426_, v___y_4427_, v___y_4428_, v___y_4429_, v___y_4430_);
return v___x_4455_;
}
default: 
{
lean_object* v___x_4456_; lean_object* v___x_4457_; 
lean_dec(v_a_4433_);
lean_dec(v_givenNames_4425_);
lean_dec_ref(v___f_4423_);
lean_dec_ref(v___x_4422_);
v___x_4456_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4457_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4424_, v_mvarId_4421_, v___x_4456_, v___y_4427_, v___y_4428_, v___y_4429_, v___y_4430_);
return v___x_4457_;
}
}
}
else
{
lean_object* v_a_4458_; lean_object* v___x_4460_; uint8_t v_isShared_4461_; uint8_t v_isSharedCheck_4465_; 
lean_dec(v_givenNames_4425_);
lean_dec(v___x_4424_);
lean_dec_ref(v___f_4423_);
lean_dec_ref(v___x_4422_);
lean_dec(v_mvarId_4421_);
v_a_4458_ = lean_ctor_get(v___x_4432_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v___x_4432_);
if (v_isSharedCheck_4465_ == 0)
{
v___x_4460_ = v___x_4432_;
v_isShared_4461_ = v_isSharedCheck_4465_;
goto v_resetjp_4459_;
}
else
{
lean_inc(v_a_4458_);
lean_dec(v___x_4432_);
v___x_4460_ = lean_box(0);
v_isShared_4461_ = v_isSharedCheck_4465_;
goto v_resetjp_4459_;
}
v_resetjp_4459_:
{
lean_object* v___x_4463_; 
if (v_isShared_4461_ == 0)
{
v___x_4463_ = v___x_4460_;
goto v_reusejp_4462_;
}
else
{
lean_object* v_reuseFailAlloc_4464_; 
v_reuseFailAlloc_4464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4464_, 0, v_a_4458_);
v___x_4463_ = v_reuseFailAlloc_4464_;
goto v_reusejp_4462_;
}
v_reusejp_4462_:
{
return v___x_4463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed(lean_object* v_mvarId_4466_, lean_object* v___x_4467_, lean_object* v___f_4468_, lean_object* v___x_4469_, lean_object* v_givenNames_4470_, lean_object* v_config_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_){
_start:
{
lean_object* v_res_4477_; 
v_res_4477_ = l_Lean_MVarId_extractLetsLocalDecl___lam__3(v_mvarId_4466_, v___x_4467_, v___f_4468_, v___x_4469_, v_givenNames_4470_, v_config_4471_, v___y_4472_, v___y_4473_, v___y_4474_, v___y_4475_);
lean_dec(v___y_4475_);
lean_dec_ref(v___y_4474_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
lean_dec_ref(v_config_4471_);
return v_res_4477_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4(lean_object* v___x_4478_, lean_object* v___x_4479_, lean_object* v_givenNames_4480_, lean_object* v_config_4481_, lean_object* v_mvarId_4482_, lean_object* v_fvars_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_){
_start:
{
lean_object* v___f_4489_; lean_object* v___f_4490_; lean_object* v___x_4491_; 
lean_inc_n(v_mvarId_4482_, 2);
v___f_4489_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed), 10, 2);
lean_closure_set(v___f_4489_, 0, v_mvarId_4482_);
lean_closure_set(v___f_4489_, 1, v_fvars_4483_);
v___f_4490_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed), 11, 6);
lean_closure_set(v___f_4490_, 0, v_mvarId_4482_);
lean_closure_set(v___f_4490_, 1, v___x_4478_);
lean_closure_set(v___f_4490_, 2, v___f_4489_);
lean_closure_set(v___f_4490_, 3, v___x_4479_);
lean_closure_set(v___f_4490_, 4, v_givenNames_4480_);
lean_closure_set(v___f_4490_, 5, v_config_4481_);
v___x_4491_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4482_, v___f_4490_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_);
return v___x_4491_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed(lean_object* v___x_4492_, lean_object* v___x_4493_, lean_object* v_givenNames_4494_, lean_object* v_config_4495_, lean_object* v_mvarId_4496_, lean_object* v_fvars_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_){
_start:
{
lean_object* v_res_4503_; 
v_res_4503_ = l_Lean_MVarId_extractLetsLocalDecl___lam__4(v___x_4492_, v___x_4493_, v_givenNames_4494_, v_config_4495_, v_mvarId_4496_, v_fvars_4497_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_);
lean_dec(v___y_4501_);
lean_dec_ref(v___y_4500_);
lean_dec(v___y_4499_);
lean_dec_ref(v___y_4498_);
return v_res_4503_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl(lean_object* v_mvarId_4504_, lean_object* v_fvarId_4505_, lean_object* v_givenNames_4506_, lean_object* v_config_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_, lean_object* v_a_4510_, lean_object* v_a_4511_){
_start:
{
lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___f_4515_; lean_object* v___x_4516_; 
v___x_4513_ = l_Lean_instInhabitedExpr;
v___x_4514_ = ((lean_object*)(l_Lean_MVarId_extractLets___closed__1));
v___f_4515_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed), 11, 4);
lean_closure_set(v___f_4515_, 0, v___x_4513_);
lean_closure_set(v___f_4515_, 1, v___x_4514_);
lean_closure_set(v___f_4515_, 2, v_givenNames_4506_);
lean_closure_set(v___f_4515_, 3, v_config_4507_);
lean_inc(v_mvarId_4504_);
v___x_4516_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4504_, v___x_4514_, v_a_4508_, v_a_4509_, v_a_4510_, v_a_4511_);
if (lean_obj_tag(v___x_4516_) == 0)
{
lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; uint8_t v___x_4520_; lean_object* v___x_4521_; 
lean_dec_ref_known(v___x_4516_, 1);
v___x_4517_ = lean_unsigned_to_nat(1u);
v___x_4518_ = lean_mk_empty_array_with_capacity(v___x_4517_);
v___x_4519_ = lean_array_push(v___x_4518_, v_fvarId_4505_);
v___x_4520_ = 0;
v___x_4521_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4504_, v___x_4519_, v___f_4515_, v___x_4520_, v_a_4508_, v_a_4509_, v_a_4510_, v_a_4511_);
return v___x_4521_;
}
else
{
lean_object* v_a_4522_; lean_object* v___x_4524_; uint8_t v_isShared_4525_; uint8_t v_isSharedCheck_4529_; 
lean_dec_ref(v___f_4515_);
lean_dec(v_fvarId_4505_);
lean_dec(v_mvarId_4504_);
v_a_4522_ = lean_ctor_get(v___x_4516_, 0);
v_isSharedCheck_4529_ = !lean_is_exclusive(v___x_4516_);
if (v_isSharedCheck_4529_ == 0)
{
v___x_4524_ = v___x_4516_;
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
else
{
lean_inc(v_a_4522_);
lean_dec(v___x_4516_);
v___x_4524_ = lean_box(0);
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
v_resetjp_4523_:
{
lean_object* v___x_4527_; 
if (v_isShared_4525_ == 0)
{
v___x_4527_ = v___x_4524_;
goto v_reusejp_4526_;
}
else
{
lean_object* v_reuseFailAlloc_4528_; 
v_reuseFailAlloc_4528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4528_, 0, v_a_4522_);
v___x_4527_ = v_reuseFailAlloc_4528_;
goto v_reusejp_4526_;
}
v_reusejp_4526_:
{
return v___x_4527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___boxed(lean_object* v_mvarId_4530_, lean_object* v_fvarId_4531_, lean_object* v_givenNames_4532_, lean_object* v_config_4533_, lean_object* v_a_4534_, lean_object* v_a_4535_, lean_object* v_a_4536_, lean_object* v_a_4537_, lean_object* v_a_4538_){
_start:
{
lean_object* v_res_4539_; 
v_res_4539_ = l_Lean_MVarId_extractLetsLocalDecl(v_mvarId_4530_, v_fvarId_4531_, v_givenNames_4532_, v_config_4533_, v_a_4534_, v_a_4535_, v_a_4536_, v_a_4537_);
lean_dec(v_a_4537_);
lean_dec_ref(v_a_4536_);
lean_dec(v_a_4535_);
lean_dec_ref(v_a_4534_);
return v_res_4539_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0(lean_object* v_mvarId_4540_, lean_object* v___x_4541_, lean_object* v_config_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_){
_start:
{
lean_object* v___x_4548_; 
lean_inc(v___x_4541_);
lean_inc(v_mvarId_4540_);
v___x_4548_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4540_, v___x_4541_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
if (lean_obj_tag(v___x_4548_) == 0)
{
lean_object* v___x_4549_; 
lean_dec_ref_known(v___x_4548_, 1);
lean_inc(v_mvarId_4540_);
v___x_4549_ = l_Lean_MVarId_getType(v_mvarId_4540_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
if (lean_obj_tag(v___x_4549_) == 0)
{
lean_object* v_a_4550_; lean_object* v___x_4551_; 
v_a_4550_ = lean_ctor_get(v___x_4549_, 0);
lean_inc_n(v_a_4550_, 2);
lean_dec_ref_known(v___x_4549_, 1);
v___x_4551_ = l_Lean_Meta_liftLets(v_a_4550_, v_config_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
if (lean_obj_tag(v___x_4551_) == 0)
{
lean_object* v_a_4552_; uint8_t v___x_4553_; 
v_a_4552_ = lean_ctor_get(v___x_4551_, 0);
lean_inc(v_a_4552_);
lean_dec_ref_known(v___x_4551_, 1);
v___x_4553_ = lean_expr_eqv(v_a_4550_, v_a_4552_);
lean_dec(v_a_4550_);
if (v___x_4553_ == 0)
{
lean_object* v___x_4554_; 
lean_dec(v___x_4541_);
v___x_4554_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4540_, v_a_4552_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
return v___x_4554_;
}
else
{
lean_object* v___x_4555_; 
lean_inc(v_mvarId_4540_);
v___x_4555_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4541_, v_mvarId_4540_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
if (lean_obj_tag(v___x_4555_) == 0)
{
lean_object* v___x_4556_; 
lean_dec_ref_known(v___x_4555_, 1);
v___x_4556_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4540_, v_a_4552_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
return v___x_4556_;
}
else
{
lean_object* v_a_4557_; lean_object* v___x_4559_; uint8_t v_isShared_4560_; uint8_t v_isSharedCheck_4564_; 
lean_dec(v_a_4552_);
lean_dec(v_mvarId_4540_);
v_a_4557_ = lean_ctor_get(v___x_4555_, 0);
v_isSharedCheck_4564_ = !lean_is_exclusive(v___x_4555_);
if (v_isSharedCheck_4564_ == 0)
{
v___x_4559_ = v___x_4555_;
v_isShared_4560_ = v_isSharedCheck_4564_;
goto v_resetjp_4558_;
}
else
{
lean_inc(v_a_4557_);
lean_dec(v___x_4555_);
v___x_4559_ = lean_box(0);
v_isShared_4560_ = v_isSharedCheck_4564_;
goto v_resetjp_4558_;
}
v_resetjp_4558_:
{
lean_object* v___x_4562_; 
if (v_isShared_4560_ == 0)
{
v___x_4562_ = v___x_4559_;
goto v_reusejp_4561_;
}
else
{
lean_object* v_reuseFailAlloc_4563_; 
v_reuseFailAlloc_4563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4563_, 0, v_a_4557_);
v___x_4562_ = v_reuseFailAlloc_4563_;
goto v_reusejp_4561_;
}
v_reusejp_4561_:
{
return v___x_4562_;
}
}
}
}
}
else
{
lean_object* v_a_4565_; lean_object* v___x_4567_; uint8_t v_isShared_4568_; uint8_t v_isSharedCheck_4572_; 
lean_dec(v_a_4550_);
lean_dec(v___x_4541_);
lean_dec(v_mvarId_4540_);
v_a_4565_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4572_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4572_ == 0)
{
v___x_4567_ = v___x_4551_;
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
else
{
lean_inc(v_a_4565_);
lean_dec(v___x_4551_);
v___x_4567_ = lean_box(0);
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
v_resetjp_4566_:
{
lean_object* v___x_4570_; 
if (v_isShared_4568_ == 0)
{
v___x_4570_ = v___x_4567_;
goto v_reusejp_4569_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v_a_4565_);
v___x_4570_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4569_;
}
v_reusejp_4569_:
{
return v___x_4570_;
}
}
}
}
else
{
lean_object* v_a_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4580_; 
lean_dec_ref(v_config_4542_);
lean_dec(v___x_4541_);
lean_dec(v_mvarId_4540_);
v_a_4573_ = lean_ctor_get(v___x_4549_, 0);
v_isSharedCheck_4580_ = !lean_is_exclusive(v___x_4549_);
if (v_isSharedCheck_4580_ == 0)
{
v___x_4575_ = v___x_4549_;
v_isShared_4576_ = v_isSharedCheck_4580_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_a_4573_);
lean_dec(v___x_4549_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4580_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v___x_4578_; 
if (v_isShared_4576_ == 0)
{
v___x_4578_ = v___x_4575_;
goto v_reusejp_4577_;
}
else
{
lean_object* v_reuseFailAlloc_4579_; 
v_reuseFailAlloc_4579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4579_, 0, v_a_4573_);
v___x_4578_ = v_reuseFailAlloc_4579_;
goto v_reusejp_4577_;
}
v_reusejp_4577_:
{
return v___x_4578_;
}
}
}
}
else
{
lean_object* v_a_4581_; lean_object* v___x_4583_; uint8_t v_isShared_4584_; uint8_t v_isSharedCheck_4588_; 
lean_dec_ref(v_config_4542_);
lean_dec(v___x_4541_);
lean_dec(v_mvarId_4540_);
v_a_4581_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4588_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4588_ == 0)
{
v___x_4583_ = v___x_4548_;
v_isShared_4584_ = v_isSharedCheck_4588_;
goto v_resetjp_4582_;
}
else
{
lean_inc(v_a_4581_);
lean_dec(v___x_4548_);
v___x_4583_ = lean_box(0);
v_isShared_4584_ = v_isSharedCheck_4588_;
goto v_resetjp_4582_;
}
v_resetjp_4582_:
{
lean_object* v___x_4586_; 
if (v_isShared_4584_ == 0)
{
v___x_4586_ = v___x_4583_;
goto v_reusejp_4585_;
}
else
{
lean_object* v_reuseFailAlloc_4587_; 
v_reuseFailAlloc_4587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4587_, 0, v_a_4581_);
v___x_4586_ = v_reuseFailAlloc_4587_;
goto v_reusejp_4585_;
}
v_reusejp_4585_:
{
return v___x_4586_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0___boxed(lean_object* v_mvarId_4589_, lean_object* v___x_4590_, lean_object* v_config_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_){
_start:
{
lean_object* v_res_4597_; 
v_res_4597_ = l_Lean_MVarId_liftLets___lam__0(v_mvarId_4589_, v___x_4590_, v_config_4591_, v___y_4592_, v___y_4593_, v___y_4594_, v___y_4595_);
lean_dec(v___y_4595_);
lean_dec_ref(v___y_4594_);
lean_dec(v___y_4593_);
lean_dec_ref(v___y_4592_);
return v_res_4597_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets(lean_object* v_mvarId_4601_, lean_object* v_config_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_){
_start:
{
lean_object* v___x_4608_; lean_object* v___f_4609_; lean_object* v___x_4610_; 
v___x_4608_ = ((lean_object*)(l_Lean_MVarId_liftLets___closed__1));
lean_inc(v_mvarId_4601_);
v___f_4609_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLets___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4609_, 0, v_mvarId_4601_);
lean_closure_set(v___f_4609_, 1, v___x_4608_);
lean_closure_set(v___f_4609_, 2, v_config_4602_);
v___x_4610_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4601_, v___f_4609_, v_a_4603_, v_a_4604_, v_a_4605_, v_a_4606_);
return v___x_4610_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___boxed(lean_object* v_mvarId_4611_, lean_object* v_config_4612_, lean_object* v_a_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_){
_start:
{
lean_object* v_res_4618_; 
v_res_4618_ = l_Lean_MVarId_liftLets(v_mvarId_4611_, v_config_4612_, v_a_4613_, v_a_4614_, v_a_4615_, v_a_4616_);
lean_dec(v_a_4616_);
lean_dec_ref(v_a_4615_);
lean_dec(v_a_4614_);
lean_dec_ref(v_a_4613_);
return v_res_4618_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0(lean_object* v_mvarId_4619_, lean_object* v_fvars_4620_, lean_object* v_targetNew_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_){
_start:
{
lean_object* v___x_4627_; 
v___x_4627_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4619_, v_targetNew_4621_, v___y_4622_, v___y_4623_, v___y_4624_, v___y_4625_);
if (lean_obj_tag(v___x_4627_) == 0)
{
lean_object* v_a_4628_; lean_object* v___x_4630_; uint8_t v_isShared_4631_; uint8_t v_isSharedCheck_4641_; 
v_a_4628_ = lean_ctor_get(v___x_4627_, 0);
v_isSharedCheck_4641_ = !lean_is_exclusive(v___x_4627_);
if (v_isSharedCheck_4641_ == 0)
{
v___x_4630_ = v___x_4627_;
v_isShared_4631_ = v_isSharedCheck_4641_;
goto v_resetjp_4629_;
}
else
{
lean_inc(v_a_4628_);
lean_dec(v___x_4627_);
v___x_4630_ = lean_box(0);
v_isShared_4631_ = v_isSharedCheck_4641_;
goto v_resetjp_4629_;
}
v_resetjp_4629_:
{
lean_object* v___x_4632_; size_t v_sz_4633_; size_t v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4639_; 
v___x_4632_ = lean_box(0);
v_sz_4633_ = lean_array_size(v_fvars_4620_);
v___x_4634_ = ((size_t)0ULL);
v___x_4635_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4633_, v___x_4634_, v_fvars_4620_);
v___x_4636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4636_, 0, v___x_4635_);
lean_ctor_set(v___x_4636_, 1, v_a_4628_);
v___x_4637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4637_, 0, v___x_4632_);
lean_ctor_set(v___x_4637_, 1, v___x_4636_);
if (v_isShared_4631_ == 0)
{
lean_ctor_set(v___x_4630_, 0, v___x_4637_);
v___x_4639_ = v___x_4630_;
goto v_reusejp_4638_;
}
else
{
lean_object* v_reuseFailAlloc_4640_; 
v_reuseFailAlloc_4640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4640_, 0, v___x_4637_);
v___x_4639_ = v_reuseFailAlloc_4640_;
goto v_reusejp_4638_;
}
v_reusejp_4638_:
{
return v___x_4639_;
}
}
}
else
{
lean_object* v_a_4642_; lean_object* v___x_4644_; uint8_t v_isShared_4645_; uint8_t v_isSharedCheck_4649_; 
lean_dec_ref(v_fvars_4620_);
v_a_4642_ = lean_ctor_get(v___x_4627_, 0);
v_isSharedCheck_4649_ = !lean_is_exclusive(v___x_4627_);
if (v_isSharedCheck_4649_ == 0)
{
v___x_4644_ = v___x_4627_;
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
else
{
lean_inc(v_a_4642_);
lean_dec(v___x_4627_);
v___x_4644_ = lean_box(0);
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
v_resetjp_4643_:
{
lean_object* v___x_4647_; 
if (v_isShared_4645_ == 0)
{
v___x_4647_ = v___x_4644_;
goto v_reusejp_4646_;
}
else
{
lean_object* v_reuseFailAlloc_4648_; 
v_reuseFailAlloc_4648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4648_, 0, v_a_4642_);
v___x_4647_ = v_reuseFailAlloc_4648_;
goto v_reusejp_4646_;
}
v_reusejp_4646_:
{
return v___x_4647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4650_, lean_object* v_fvars_4651_, lean_object* v_targetNew_4652_, lean_object* v___y_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_){
_start:
{
lean_object* v_res_4658_; 
v_res_4658_ = l_Lean_MVarId_liftLetsLocalDecl___lam__0(v_mvarId_4650_, v_fvars_4651_, v_targetNew_4652_, v___y_4653_, v___y_4654_, v___y_4655_, v___y_4656_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v___y_4654_);
lean_dec_ref(v___y_4653_);
return v_res_4658_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1(lean_object* v_mvarId_4659_, lean_object* v_config_4660_, lean_object* v___f_4661_, lean_object* v___x_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_, lean_object* v___y_4665_, lean_object* v___y_4666_){
_start:
{
lean_object* v___x_4668_; 
lean_inc(v_mvarId_4659_);
v___x_4668_ = l_Lean_MVarId_getType(v_mvarId_4659_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_);
if (lean_obj_tag(v___x_4668_) == 0)
{
lean_object* v_a_4669_; 
v_a_4669_ = lean_ctor_get(v___x_4668_, 0);
lean_inc(v_a_4669_);
lean_dec_ref_known(v___x_4668_, 1);
switch(lean_obj_tag(v_a_4669_))
{
case 7:
{
lean_object* v_binderName_4670_; lean_object* v_binderType_4671_; lean_object* v_body_4672_; uint8_t v_binderInfo_4673_; lean_object* v___x_4674_; 
v_binderName_4670_ = lean_ctor_get(v_a_4669_, 0);
lean_inc(v_binderName_4670_);
v_binderType_4671_ = lean_ctor_get(v_a_4669_, 1);
lean_inc_ref_n(v_binderType_4671_, 2);
v_body_4672_ = lean_ctor_get(v_a_4669_, 2);
lean_inc_ref(v_body_4672_);
v_binderInfo_4673_ = lean_ctor_get_uint8(v_a_4669_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4669_, 3);
v___x_4674_ = l_Lean_Meta_liftLets(v_binderType_4671_, v_config_4660_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_);
if (lean_obj_tag(v___x_4674_) == 0)
{
lean_object* v_a_4675_; lean_object* v___y_4677_; lean_object* v___y_4678_; lean_object* v___y_4679_; lean_object* v___y_4680_; uint8_t v___x_4683_; 
v_a_4675_ = lean_ctor_get(v___x_4674_, 0);
lean_inc(v_a_4675_);
lean_dec_ref_known(v___x_4674_, 1);
v___x_4683_ = lean_expr_eqv(v_binderType_4671_, v_a_4675_);
lean_dec_ref(v_binderType_4671_);
if (v___x_4683_ == 0)
{
lean_dec(v___x_4662_);
lean_dec(v_mvarId_4659_);
v___y_4677_ = v___y_4663_;
v___y_4678_ = v___y_4664_;
v___y_4679_ = v___y_4665_;
v___y_4680_ = v___y_4666_;
goto v___jp_4676_;
}
else
{
lean_object* v___x_4684_; 
v___x_4684_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4662_, v_mvarId_4659_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_);
if (lean_obj_tag(v___x_4684_) == 0)
{
lean_dec_ref_known(v___x_4684_, 1);
v___y_4677_ = v___y_4663_;
v___y_4678_ = v___y_4664_;
v___y_4679_ = v___y_4665_;
v___y_4680_ = v___y_4666_;
goto v___jp_4676_;
}
else
{
lean_object* v_a_4685_; lean_object* v___x_4687_; uint8_t v_isShared_4688_; uint8_t v_isSharedCheck_4692_; 
lean_dec(v_a_4675_);
lean_dec_ref(v_body_4672_);
lean_dec(v_binderName_4670_);
lean_dec(v___y_4666_);
lean_dec_ref(v___y_4665_);
lean_dec(v___y_4664_);
lean_dec_ref(v___y_4663_);
lean_dec_ref(v___f_4661_);
v_a_4685_ = lean_ctor_get(v___x_4684_, 0);
v_isSharedCheck_4692_ = !lean_is_exclusive(v___x_4684_);
if (v_isSharedCheck_4692_ == 0)
{
v___x_4687_ = v___x_4684_;
v_isShared_4688_ = v_isSharedCheck_4692_;
goto v_resetjp_4686_;
}
else
{
lean_inc(v_a_4685_);
lean_dec(v___x_4684_);
v___x_4687_ = lean_box(0);
v_isShared_4688_ = v_isSharedCheck_4692_;
goto v_resetjp_4686_;
}
v_resetjp_4686_:
{
lean_object* v___x_4690_; 
if (v_isShared_4688_ == 0)
{
v___x_4690_ = v___x_4687_;
goto v_reusejp_4689_;
}
else
{
lean_object* v_reuseFailAlloc_4691_; 
v_reuseFailAlloc_4691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4691_, 0, v_a_4685_);
v___x_4690_ = v_reuseFailAlloc_4691_;
goto v_reusejp_4689_;
}
v_reusejp_4689_:
{
return v___x_4690_;
}
}
}
}
v___jp_4676_:
{
lean_object* v___x_4681_; lean_object* v___x_4682_; 
v___x_4681_ = l_Lean_Expr_forallE___override(v_binderName_4670_, v_a_4675_, v_body_4672_, v_binderInfo_4673_);
v___x_4682_ = lean_apply_6(v___f_4661_, v___x_4681_, v___y_4677_, v___y_4678_, v___y_4679_, v___y_4680_, lean_box(0));
return v___x_4682_;
}
}
else
{
lean_object* v_a_4693_; lean_object* v___x_4695_; uint8_t v_isShared_4696_; uint8_t v_isSharedCheck_4700_; 
lean_dec_ref(v_body_4672_);
lean_dec_ref(v_binderType_4671_);
lean_dec(v_binderName_4670_);
lean_dec(v___y_4666_);
lean_dec_ref(v___y_4665_);
lean_dec(v___y_4664_);
lean_dec_ref(v___y_4663_);
lean_dec(v___x_4662_);
lean_dec_ref(v___f_4661_);
lean_dec(v_mvarId_4659_);
v_a_4693_ = lean_ctor_get(v___x_4674_, 0);
v_isSharedCheck_4700_ = !lean_is_exclusive(v___x_4674_);
if (v_isSharedCheck_4700_ == 0)
{
v___x_4695_ = v___x_4674_;
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
else
{
lean_inc(v_a_4693_);
lean_dec(v___x_4674_);
v___x_4695_ = lean_box(0);
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
v_resetjp_4694_:
{
lean_object* v___x_4698_; 
if (v_isShared_4696_ == 0)
{
v___x_4698_ = v___x_4695_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4699_; 
v_reuseFailAlloc_4699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4699_, 0, v_a_4693_);
v___x_4698_ = v_reuseFailAlloc_4699_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
return v___x_4698_;
}
}
}
}
case 8:
{
lean_object* v_declName_4701_; lean_object* v_type_4702_; lean_object* v_value_4703_; lean_object* v_body_4704_; uint8_t v_nondep_4705_; lean_object* v___x_4706_; 
v_declName_4701_ = lean_ctor_get(v_a_4669_, 0);
lean_inc(v_declName_4701_);
v_type_4702_ = lean_ctor_get(v_a_4669_, 1);
lean_inc_ref_n(v_type_4702_, 2);
v_value_4703_ = lean_ctor_get(v_a_4669_, 2);
lean_inc_ref(v_value_4703_);
v_body_4704_ = lean_ctor_get(v_a_4669_, 3);
lean_inc_ref(v_body_4704_);
v_nondep_4705_ = lean_ctor_get_uint8(v_a_4669_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_a_4669_, 4);
lean_inc_ref(v_config_4660_);
v___x_4706_ = l_Lean_Meta_liftLets(v_type_4702_, v_config_4660_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_);
if (lean_obj_tag(v___x_4706_) == 0)
{
lean_object* v_a_4707_; lean_object* v___x_4708_; 
v_a_4707_ = lean_ctor_get(v___x_4706_, 0);
lean_inc(v_a_4707_);
lean_dec_ref_known(v___x_4706_, 1);
lean_inc_ref(v_value_4703_);
v___x_4708_ = l_Lean_Meta_liftLets(v_value_4703_, v_config_4660_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_);
if (lean_obj_tag(v___x_4708_) == 0)
{
lean_object* v_a_4709_; lean_object* v___y_4711_; lean_object* v___y_4712_; lean_object* v___y_4713_; lean_object* v___y_4714_; uint8_t v___x_4717_; 
v_a_4709_ = lean_ctor_get(v___x_4708_, 0);
lean_inc(v_a_4709_);
lean_dec_ref_known(v___x_4708_, 1);
v___x_4717_ = lean_expr_eqv(v_type_4702_, v_a_4707_);
lean_dec_ref(v_type_4702_);
if (v___x_4717_ == 0)
{
lean_dec_ref(v_value_4703_);
lean_dec(v___x_4662_);
lean_dec(v_mvarId_4659_);
v___y_4711_ = v___y_4663_;
v___y_4712_ = v___y_4664_;
v___y_4713_ = v___y_4665_;
v___y_4714_ = v___y_4666_;
goto v___jp_4710_;
}
else
{
uint8_t v___x_4718_; 
v___x_4718_ = lean_expr_eqv(v_value_4703_, v_a_4709_);
lean_dec_ref(v_value_4703_);
if (v___x_4718_ == 0)
{
lean_dec(v___x_4662_);
lean_dec(v_mvarId_4659_);
v___y_4711_ = v___y_4663_;
v___y_4712_ = v___y_4664_;
v___y_4713_ = v___y_4665_;
v___y_4714_ = v___y_4666_;
goto v___jp_4710_;
}
else
{
lean_object* v___x_4719_; 
v___x_4719_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4662_, v_mvarId_4659_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_);
if (lean_obj_tag(v___x_4719_) == 0)
{
lean_dec_ref_known(v___x_4719_, 1);
v___y_4711_ = v___y_4663_;
v___y_4712_ = v___y_4664_;
v___y_4713_ = v___y_4665_;
v___y_4714_ = v___y_4666_;
goto v___jp_4710_;
}
else
{
lean_object* v_a_4720_; lean_object* v___x_4722_; uint8_t v_isShared_4723_; uint8_t v_isSharedCheck_4727_; 
lean_dec(v_a_4709_);
lean_dec(v_a_4707_);
lean_dec_ref(v_body_4704_);
lean_dec(v_declName_4701_);
lean_dec(v___y_4666_);
lean_dec_ref(v___y_4665_);
lean_dec(v___y_4664_);
lean_dec_ref(v___y_4663_);
lean_dec_ref(v___f_4661_);
v_a_4720_ = lean_ctor_get(v___x_4719_, 0);
v_isSharedCheck_4727_ = !lean_is_exclusive(v___x_4719_);
if (v_isSharedCheck_4727_ == 0)
{
v___x_4722_ = v___x_4719_;
v_isShared_4723_ = v_isSharedCheck_4727_;
goto v_resetjp_4721_;
}
else
{
lean_inc(v_a_4720_);
lean_dec(v___x_4719_);
v___x_4722_ = lean_box(0);
v_isShared_4723_ = v_isSharedCheck_4727_;
goto v_resetjp_4721_;
}
v_resetjp_4721_:
{
lean_object* v___x_4725_; 
if (v_isShared_4723_ == 0)
{
v___x_4725_ = v___x_4722_;
goto v_reusejp_4724_;
}
else
{
lean_object* v_reuseFailAlloc_4726_; 
v_reuseFailAlloc_4726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4726_, 0, v_a_4720_);
v___x_4725_ = v_reuseFailAlloc_4726_;
goto v_reusejp_4724_;
}
v_reusejp_4724_:
{
return v___x_4725_;
}
}
}
}
}
v___jp_4710_:
{
lean_object* v___x_4715_; lean_object* v___x_4716_; 
v___x_4715_ = l_Lean_Expr_letE___override(v_declName_4701_, v_a_4707_, v_a_4709_, v_body_4704_, v_nondep_4705_);
v___x_4716_ = lean_apply_6(v___f_4661_, v___x_4715_, v___y_4711_, v___y_4712_, v___y_4713_, v___y_4714_, lean_box(0));
return v___x_4716_;
}
}
else
{
lean_object* v_a_4728_; lean_object* v___x_4730_; uint8_t v_isShared_4731_; uint8_t v_isSharedCheck_4735_; 
lean_dec(v_a_4707_);
lean_dec_ref(v_body_4704_);
lean_dec_ref(v_value_4703_);
lean_dec_ref(v_type_4702_);
lean_dec(v_declName_4701_);
lean_dec(v___y_4666_);
lean_dec_ref(v___y_4665_);
lean_dec(v___y_4664_);
lean_dec_ref(v___y_4663_);
lean_dec(v___x_4662_);
lean_dec_ref(v___f_4661_);
lean_dec(v_mvarId_4659_);
v_a_4728_ = lean_ctor_get(v___x_4708_, 0);
v_isSharedCheck_4735_ = !lean_is_exclusive(v___x_4708_);
if (v_isSharedCheck_4735_ == 0)
{
v___x_4730_ = v___x_4708_;
v_isShared_4731_ = v_isSharedCheck_4735_;
goto v_resetjp_4729_;
}
else
{
lean_inc(v_a_4728_);
lean_dec(v___x_4708_);
v___x_4730_ = lean_box(0);
v_isShared_4731_ = v_isSharedCheck_4735_;
goto v_resetjp_4729_;
}
v_resetjp_4729_:
{
lean_object* v___x_4733_; 
if (v_isShared_4731_ == 0)
{
v___x_4733_ = v___x_4730_;
goto v_reusejp_4732_;
}
else
{
lean_object* v_reuseFailAlloc_4734_; 
v_reuseFailAlloc_4734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4734_, 0, v_a_4728_);
v___x_4733_ = v_reuseFailAlloc_4734_;
goto v_reusejp_4732_;
}
v_reusejp_4732_:
{
return v___x_4733_;
}
}
}
}
else
{
lean_object* v_a_4736_; lean_object* v___x_4738_; uint8_t v_isShared_4739_; uint8_t v_isSharedCheck_4743_; 
lean_dec_ref(v_body_4704_);
lean_dec_ref(v_value_4703_);
lean_dec_ref(v_type_4702_);
lean_dec(v_declName_4701_);
lean_dec(v___y_4666_);
lean_dec_ref(v___y_4665_);
lean_dec(v___y_4664_);
lean_dec_ref(v___y_4663_);
lean_dec(v___x_4662_);
lean_dec_ref(v___f_4661_);
lean_dec_ref(v_config_4660_);
lean_dec(v_mvarId_4659_);
v_a_4736_ = lean_ctor_get(v___x_4706_, 0);
v_isSharedCheck_4743_ = !lean_is_exclusive(v___x_4706_);
if (v_isSharedCheck_4743_ == 0)
{
v___x_4738_ = v___x_4706_;
v_isShared_4739_ = v_isSharedCheck_4743_;
goto v_resetjp_4737_;
}
else
{
lean_inc(v_a_4736_);
lean_dec(v___x_4706_);
v___x_4738_ = lean_box(0);
v_isShared_4739_ = v_isSharedCheck_4743_;
goto v_resetjp_4737_;
}
v_resetjp_4737_:
{
lean_object* v___x_4741_; 
if (v_isShared_4739_ == 0)
{
v___x_4741_ = v___x_4738_;
goto v_reusejp_4740_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v_a_4736_);
v___x_4741_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4740_;
}
v_reusejp_4740_:
{
return v___x_4741_;
}
}
}
}
default: 
{
lean_object* v___x_4744_; lean_object* v___x_4745_; 
lean_dec(v_a_4669_);
lean_dec_ref(v___f_4661_);
lean_dec_ref(v_config_4660_);
v___x_4744_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4745_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4662_, v_mvarId_4659_, v___x_4744_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_);
lean_dec(v___y_4666_);
lean_dec_ref(v___y_4665_);
lean_dec(v___y_4664_);
lean_dec_ref(v___y_4663_);
return v___x_4745_;
}
}
}
else
{
lean_object* v_a_4746_; lean_object* v___x_4748_; uint8_t v_isShared_4749_; uint8_t v_isSharedCheck_4753_; 
lean_dec(v___y_4666_);
lean_dec_ref(v___y_4665_);
lean_dec(v___y_4664_);
lean_dec_ref(v___y_4663_);
lean_dec(v___x_4662_);
lean_dec_ref(v___f_4661_);
lean_dec_ref(v_config_4660_);
lean_dec(v_mvarId_4659_);
v_a_4746_ = lean_ctor_get(v___x_4668_, 0);
v_isSharedCheck_4753_ = !lean_is_exclusive(v___x_4668_);
if (v_isSharedCheck_4753_ == 0)
{
v___x_4748_ = v___x_4668_;
v_isShared_4749_ = v_isSharedCheck_4753_;
goto v_resetjp_4747_;
}
else
{
lean_inc(v_a_4746_);
lean_dec(v___x_4668_);
v___x_4748_ = lean_box(0);
v_isShared_4749_ = v_isSharedCheck_4753_;
goto v_resetjp_4747_;
}
v_resetjp_4747_:
{
lean_object* v___x_4751_; 
if (v_isShared_4749_ == 0)
{
v___x_4751_ = v___x_4748_;
goto v_reusejp_4750_;
}
else
{
lean_object* v_reuseFailAlloc_4752_; 
v_reuseFailAlloc_4752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4752_, 0, v_a_4746_);
v___x_4751_ = v_reuseFailAlloc_4752_;
goto v_reusejp_4750_;
}
v_reusejp_4750_:
{
return v___x_4751_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed(lean_object* v_mvarId_4754_, lean_object* v_config_4755_, lean_object* v___f_4756_, lean_object* v___x_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_){
_start:
{
lean_object* v_res_4763_; 
v_res_4763_ = l_Lean_MVarId_liftLetsLocalDecl___lam__1(v_mvarId_4754_, v_config_4755_, v___f_4756_, v___x_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_);
return v_res_4763_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2(lean_object* v_config_4764_, lean_object* v___x_4765_, lean_object* v_mvarId_4766_, lean_object* v_fvars_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_){
_start:
{
lean_object* v___f_4773_; lean_object* v___f_4774_; lean_object* v___x_4775_; 
lean_inc_n(v_mvarId_4766_, 2);
v___f_4773_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4773_, 0, v_mvarId_4766_);
lean_closure_set(v___f_4773_, 1, v_fvars_4767_);
v___f_4774_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4774_, 0, v_mvarId_4766_);
lean_closure_set(v___f_4774_, 1, v_config_4764_);
lean_closure_set(v___f_4774_, 2, v___f_4773_);
lean_closure_set(v___f_4774_, 3, v___x_4765_);
v___x_4775_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4766_, v___f_4774_, v___y_4768_, v___y_4769_, v___y_4770_, v___y_4771_);
return v___x_4775_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed(lean_object* v_config_4776_, lean_object* v___x_4777_, lean_object* v_mvarId_4778_, lean_object* v_fvars_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_){
_start:
{
lean_object* v_res_4785_; 
v_res_4785_ = l_Lean_MVarId_liftLetsLocalDecl___lam__2(v_config_4776_, v___x_4777_, v_mvarId_4778_, v_fvars_4779_, v___y_4780_, v___y_4781_, v___y_4782_, v___y_4783_);
lean_dec(v___y_4783_);
lean_dec_ref(v___y_4782_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
return v_res_4785_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl(lean_object* v_mvarId_4786_, lean_object* v_fvarId_4787_, lean_object* v_config_4788_, lean_object* v_a_4789_, lean_object* v_a_4790_, lean_object* v_a_4791_, lean_object* v_a_4792_){
_start:
{
lean_object* v___x_4794_; lean_object* v___f_4795_; lean_object* v___x_4796_; 
v___x_4794_ = ((lean_object*)(l_Lean_MVarId_liftLets___closed__1));
v___f_4795_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed), 9, 2);
lean_closure_set(v___f_4795_, 0, v_config_4788_);
lean_closure_set(v___f_4795_, 1, v___x_4794_);
lean_inc(v_mvarId_4786_);
v___x_4796_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4786_, v___x_4794_, v_a_4789_, v_a_4790_, v_a_4791_, v_a_4792_);
if (lean_obj_tag(v___x_4796_) == 0)
{
lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; uint8_t v___x_4800_; lean_object* v___x_4801_; 
lean_dec_ref_known(v___x_4796_, 1);
v___x_4797_ = lean_unsigned_to_nat(1u);
v___x_4798_ = lean_mk_empty_array_with_capacity(v___x_4797_);
v___x_4799_ = lean_array_push(v___x_4798_, v_fvarId_4787_);
v___x_4800_ = 0;
v___x_4801_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4786_, v___x_4799_, v___f_4795_, v___x_4800_, v_a_4789_, v_a_4790_, v_a_4791_, v_a_4792_);
if (lean_obj_tag(v___x_4801_) == 0)
{
lean_object* v_a_4802_; lean_object* v___x_4804_; uint8_t v_isShared_4805_; uint8_t v_isSharedCheck_4810_; 
v_a_4802_ = lean_ctor_get(v___x_4801_, 0);
v_isSharedCheck_4810_ = !lean_is_exclusive(v___x_4801_);
if (v_isSharedCheck_4810_ == 0)
{
v___x_4804_ = v___x_4801_;
v_isShared_4805_ = v_isSharedCheck_4810_;
goto v_resetjp_4803_;
}
else
{
lean_inc(v_a_4802_);
lean_dec(v___x_4801_);
v___x_4804_ = lean_box(0);
v_isShared_4805_ = v_isSharedCheck_4810_;
goto v_resetjp_4803_;
}
v_resetjp_4803_:
{
lean_object* v_snd_4806_; lean_object* v___x_4808_; 
v_snd_4806_ = lean_ctor_get(v_a_4802_, 1);
lean_inc(v_snd_4806_);
lean_dec(v_a_4802_);
if (v_isShared_4805_ == 0)
{
lean_ctor_set(v___x_4804_, 0, v_snd_4806_);
v___x_4808_ = v___x_4804_;
goto v_reusejp_4807_;
}
else
{
lean_object* v_reuseFailAlloc_4809_; 
v_reuseFailAlloc_4809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4809_, 0, v_snd_4806_);
v___x_4808_ = v_reuseFailAlloc_4809_;
goto v_reusejp_4807_;
}
v_reusejp_4807_:
{
return v___x_4808_;
}
}
}
else
{
lean_object* v_a_4811_; lean_object* v___x_4813_; uint8_t v_isShared_4814_; uint8_t v_isSharedCheck_4818_; 
v_a_4811_ = lean_ctor_get(v___x_4801_, 0);
v_isSharedCheck_4818_ = !lean_is_exclusive(v___x_4801_);
if (v_isSharedCheck_4818_ == 0)
{
v___x_4813_ = v___x_4801_;
v_isShared_4814_ = v_isSharedCheck_4818_;
goto v_resetjp_4812_;
}
else
{
lean_inc(v_a_4811_);
lean_dec(v___x_4801_);
v___x_4813_ = lean_box(0);
v_isShared_4814_ = v_isSharedCheck_4818_;
goto v_resetjp_4812_;
}
v_resetjp_4812_:
{
lean_object* v___x_4816_; 
if (v_isShared_4814_ == 0)
{
v___x_4816_ = v___x_4813_;
goto v_reusejp_4815_;
}
else
{
lean_object* v_reuseFailAlloc_4817_; 
v_reuseFailAlloc_4817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4817_, 0, v_a_4811_);
v___x_4816_ = v_reuseFailAlloc_4817_;
goto v_reusejp_4815_;
}
v_reusejp_4815_:
{
return v___x_4816_;
}
}
}
}
else
{
lean_object* v_a_4819_; lean_object* v___x_4821_; uint8_t v_isShared_4822_; uint8_t v_isSharedCheck_4826_; 
lean_dec_ref(v___f_4795_);
lean_dec(v_fvarId_4787_);
lean_dec(v_mvarId_4786_);
v_a_4819_ = lean_ctor_get(v___x_4796_, 0);
v_isSharedCheck_4826_ = !lean_is_exclusive(v___x_4796_);
if (v_isSharedCheck_4826_ == 0)
{
v___x_4821_ = v___x_4796_;
v_isShared_4822_ = v_isSharedCheck_4826_;
goto v_resetjp_4820_;
}
else
{
lean_inc(v_a_4819_);
lean_dec(v___x_4796_);
v___x_4821_ = lean_box(0);
v_isShared_4822_ = v_isSharedCheck_4826_;
goto v_resetjp_4820_;
}
v_resetjp_4820_:
{
lean_object* v___x_4824_; 
if (v_isShared_4822_ == 0)
{
v___x_4824_ = v___x_4821_;
goto v_reusejp_4823_;
}
else
{
lean_object* v_reuseFailAlloc_4825_; 
v_reuseFailAlloc_4825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4825_, 0, v_a_4819_);
v___x_4824_ = v_reuseFailAlloc_4825_;
goto v_reusejp_4823_;
}
v_reusejp_4823_:
{
return v___x_4824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___boxed(lean_object* v_mvarId_4827_, lean_object* v_fvarId_4828_, lean_object* v_config_4829_, lean_object* v_a_4830_, lean_object* v_a_4831_, lean_object* v_a_4832_, lean_object* v_a_4833_, lean_object* v_a_4834_){
_start:
{
lean_object* v_res_4835_; 
v_res_4835_ = l_Lean_MVarId_liftLetsLocalDecl(v_mvarId_4827_, v_fvarId_4828_, v_config_4829_, v_a_4830_, v_a_4831_, v_a_4832_, v_a_4833_);
lean_dec(v_a_4833_);
lean_dec_ref(v_a_4832_);
lean_dec(v_a_4831_);
lean_dec_ref(v_a_4830_);
return v_res_4835_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0(lean_object* v_mvarId_4836_, lean_object* v___x_4837_, uint8_t v_failIfUnchanged_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_){
_start:
{
lean_object* v___x_4844_; 
lean_inc(v___x_4837_);
lean_inc(v_mvarId_4836_);
v___x_4844_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4836_, v___x_4837_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_);
if (lean_obj_tag(v___x_4844_) == 0)
{
lean_object* v___x_4845_; 
lean_dec_ref_known(v___x_4844_, 1);
lean_inc(v_mvarId_4836_);
v___x_4845_ = l_Lean_MVarId_getType(v_mvarId_4836_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_);
if (lean_obj_tag(v___x_4845_) == 0)
{
lean_object* v_a_4846_; lean_object* v___x_4847_; 
v_a_4846_ = lean_ctor_get(v___x_4845_, 0);
lean_inc_n(v_a_4846_, 2);
lean_dec_ref_known(v___x_4845_, 1);
v___x_4847_ = l_Lean_Meta_letToHave(v_a_4846_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_);
if (lean_obj_tag(v___x_4847_) == 0)
{
if (v_failIfUnchanged_4838_ == 0)
{
lean_object* v_a_4848_; lean_object* v___x_4849_; 
lean_dec(v_a_4846_);
lean_dec(v___x_4837_);
v_a_4848_ = lean_ctor_get(v___x_4847_, 0);
lean_inc(v_a_4848_);
lean_dec_ref_known(v___x_4847_, 1);
v___x_4849_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4836_, v_a_4848_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_);
return v___x_4849_;
}
else
{
lean_object* v_a_4850_; uint8_t v___x_4851_; 
v_a_4850_ = lean_ctor_get(v___x_4847_, 0);
lean_inc(v_a_4850_);
lean_dec_ref_known(v___x_4847_, 1);
v___x_4851_ = lean_expr_eqv(v_a_4846_, v_a_4850_);
lean_dec(v_a_4846_);
if (v___x_4851_ == 0)
{
lean_object* v___x_4852_; 
lean_dec(v___x_4837_);
v___x_4852_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4836_, v_a_4850_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_);
return v___x_4852_;
}
else
{
lean_object* v___x_4853_; 
lean_inc(v_mvarId_4836_);
v___x_4853_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4837_, v_mvarId_4836_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_);
if (lean_obj_tag(v___x_4853_) == 0)
{
lean_object* v___x_4854_; 
lean_dec_ref_known(v___x_4853_, 1);
v___x_4854_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4836_, v_a_4850_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_);
return v___x_4854_;
}
else
{
lean_object* v_a_4855_; lean_object* v___x_4857_; uint8_t v_isShared_4858_; uint8_t v_isSharedCheck_4862_; 
lean_dec(v_a_4850_);
lean_dec(v_mvarId_4836_);
v_a_4855_ = lean_ctor_get(v___x_4853_, 0);
v_isSharedCheck_4862_ = !lean_is_exclusive(v___x_4853_);
if (v_isSharedCheck_4862_ == 0)
{
v___x_4857_ = v___x_4853_;
v_isShared_4858_ = v_isSharedCheck_4862_;
goto v_resetjp_4856_;
}
else
{
lean_inc(v_a_4855_);
lean_dec(v___x_4853_);
v___x_4857_ = lean_box(0);
v_isShared_4858_ = v_isSharedCheck_4862_;
goto v_resetjp_4856_;
}
v_resetjp_4856_:
{
lean_object* v___x_4860_; 
if (v_isShared_4858_ == 0)
{
v___x_4860_ = v___x_4857_;
goto v_reusejp_4859_;
}
else
{
lean_object* v_reuseFailAlloc_4861_; 
v_reuseFailAlloc_4861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4861_, 0, v_a_4855_);
v___x_4860_ = v_reuseFailAlloc_4861_;
goto v_reusejp_4859_;
}
v_reusejp_4859_:
{
return v___x_4860_;
}
}
}
}
}
}
else
{
lean_object* v_a_4863_; lean_object* v___x_4865_; uint8_t v_isShared_4866_; uint8_t v_isSharedCheck_4870_; 
lean_dec(v_a_4846_);
lean_dec(v___x_4837_);
lean_dec(v_mvarId_4836_);
v_a_4863_ = lean_ctor_get(v___x_4847_, 0);
v_isSharedCheck_4870_ = !lean_is_exclusive(v___x_4847_);
if (v_isSharedCheck_4870_ == 0)
{
v___x_4865_ = v___x_4847_;
v_isShared_4866_ = v_isSharedCheck_4870_;
goto v_resetjp_4864_;
}
else
{
lean_inc(v_a_4863_);
lean_dec(v___x_4847_);
v___x_4865_ = lean_box(0);
v_isShared_4866_ = v_isSharedCheck_4870_;
goto v_resetjp_4864_;
}
v_resetjp_4864_:
{
lean_object* v___x_4868_; 
if (v_isShared_4866_ == 0)
{
v___x_4868_ = v___x_4865_;
goto v_reusejp_4867_;
}
else
{
lean_object* v_reuseFailAlloc_4869_; 
v_reuseFailAlloc_4869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4869_, 0, v_a_4863_);
v___x_4868_ = v_reuseFailAlloc_4869_;
goto v_reusejp_4867_;
}
v_reusejp_4867_:
{
return v___x_4868_;
}
}
}
}
else
{
lean_object* v_a_4871_; lean_object* v___x_4873_; uint8_t v_isShared_4874_; uint8_t v_isSharedCheck_4878_; 
lean_dec(v___x_4837_);
lean_dec(v_mvarId_4836_);
v_a_4871_ = lean_ctor_get(v___x_4845_, 0);
v_isSharedCheck_4878_ = !lean_is_exclusive(v___x_4845_);
if (v_isSharedCheck_4878_ == 0)
{
v___x_4873_ = v___x_4845_;
v_isShared_4874_ = v_isSharedCheck_4878_;
goto v_resetjp_4872_;
}
else
{
lean_inc(v_a_4871_);
lean_dec(v___x_4845_);
v___x_4873_ = lean_box(0);
v_isShared_4874_ = v_isSharedCheck_4878_;
goto v_resetjp_4872_;
}
v_resetjp_4872_:
{
lean_object* v___x_4876_; 
if (v_isShared_4874_ == 0)
{
v___x_4876_ = v___x_4873_;
goto v_reusejp_4875_;
}
else
{
lean_object* v_reuseFailAlloc_4877_; 
v_reuseFailAlloc_4877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4877_, 0, v_a_4871_);
v___x_4876_ = v_reuseFailAlloc_4877_;
goto v_reusejp_4875_;
}
v_reusejp_4875_:
{
return v___x_4876_;
}
}
}
}
else
{
lean_object* v_a_4879_; lean_object* v___x_4881_; uint8_t v_isShared_4882_; uint8_t v_isSharedCheck_4886_; 
lean_dec(v___x_4837_);
lean_dec(v_mvarId_4836_);
v_a_4879_ = lean_ctor_get(v___x_4844_, 0);
v_isSharedCheck_4886_ = !lean_is_exclusive(v___x_4844_);
if (v_isSharedCheck_4886_ == 0)
{
v___x_4881_ = v___x_4844_;
v_isShared_4882_ = v_isSharedCheck_4886_;
goto v_resetjp_4880_;
}
else
{
lean_inc(v_a_4879_);
lean_dec(v___x_4844_);
v___x_4881_ = lean_box(0);
v_isShared_4882_ = v_isSharedCheck_4886_;
goto v_resetjp_4880_;
}
v_resetjp_4880_:
{
lean_object* v___x_4884_; 
if (v_isShared_4882_ == 0)
{
v___x_4884_ = v___x_4881_;
goto v_reusejp_4883_;
}
else
{
lean_object* v_reuseFailAlloc_4885_; 
v_reuseFailAlloc_4885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4885_, 0, v_a_4879_);
v___x_4884_ = v_reuseFailAlloc_4885_;
goto v_reusejp_4883_;
}
v_reusejp_4883_:
{
return v___x_4884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0___boxed(lean_object* v_mvarId_4887_, lean_object* v___x_4888_, lean_object* v_failIfUnchanged_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_, lean_object* v___y_4892_, lean_object* v___y_4893_, lean_object* v___y_4894_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4895_; lean_object* v_res_4896_; 
v_failIfUnchanged_boxed_4895_ = lean_unbox(v_failIfUnchanged_4889_);
v_res_4896_ = l_Lean_MVarId_letToHave___lam__0(v_mvarId_4887_, v___x_4888_, v_failIfUnchanged_boxed_4895_, v___y_4890_, v___y_4891_, v___y_4892_, v___y_4893_);
lean_dec(v___y_4893_);
lean_dec_ref(v___y_4892_);
lean_dec(v___y_4891_);
lean_dec_ref(v___y_4890_);
return v_res_4896_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave(lean_object* v_mvarId_4900_, uint8_t v_failIfUnchanged_4901_, lean_object* v_a_4902_, lean_object* v_a_4903_, lean_object* v_a_4904_, lean_object* v_a_4905_){
_start:
{
lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___f_4909_; lean_object* v___x_4910_; 
v___x_4907_ = ((lean_object*)(l_Lean_MVarId_letToHave___closed__1));
v___x_4908_ = lean_box(v_failIfUnchanged_4901_);
lean_inc(v_mvarId_4900_);
v___f_4909_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHave___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4909_, 0, v_mvarId_4900_);
lean_closure_set(v___f_4909_, 1, v___x_4907_);
lean_closure_set(v___f_4909_, 2, v___x_4908_);
v___x_4910_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4900_, v___f_4909_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_);
return v___x_4910_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___boxed(lean_object* v_mvarId_4911_, lean_object* v_failIfUnchanged_4912_, lean_object* v_a_4913_, lean_object* v_a_4914_, lean_object* v_a_4915_, lean_object* v_a_4916_, lean_object* v_a_4917_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4918_; lean_object* v_res_4919_; 
v_failIfUnchanged_boxed_4918_ = lean_unbox(v_failIfUnchanged_4912_);
v_res_4919_ = l_Lean_MVarId_letToHave(v_mvarId_4911_, v_failIfUnchanged_boxed_4918_, v_a_4913_, v_a_4914_, v_a_4915_, v_a_4916_);
lean_dec(v_a_4916_);
lean_dec_ref(v_a_4915_);
lean_dec(v_a_4914_);
lean_dec_ref(v_a_4913_);
return v_res_4919_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0(lean_object* v_mvarId_4920_, lean_object* v___x_4921_, lean_object* v_fvarId_4922_, uint8_t v_failIfUnchanged_4923_, lean_object* v___y_4924_, lean_object* v___y_4925_, lean_object* v___y_4926_, lean_object* v___y_4927_){
_start:
{
lean_object* v___x_4929_; 
lean_inc(v___x_4921_);
lean_inc(v_mvarId_4920_);
v___x_4929_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4920_, v___x_4921_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_);
if (lean_obj_tag(v___x_4929_) == 0)
{
lean_object* v___x_4930_; 
lean_dec_ref_known(v___x_4929_, 1);
lean_inc(v_fvarId_4922_);
v___x_4930_ = l_Lean_FVarId_getType___redArg(v_fvarId_4922_, v___y_4924_, v___y_4926_, v___y_4927_);
if (lean_obj_tag(v___x_4930_) == 0)
{
lean_object* v_a_4931_; lean_object* v___x_4932_; 
v_a_4931_ = lean_ctor_get(v___x_4930_, 0);
lean_inc_n(v_a_4931_, 2);
lean_dec_ref_known(v___x_4930_, 1);
v___x_4932_ = l_Lean_Meta_letToHave(v_a_4931_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_);
if (lean_obj_tag(v___x_4932_) == 0)
{
if (v_failIfUnchanged_4923_ == 0)
{
lean_object* v_a_4933_; lean_object* v___x_4934_; 
lean_dec(v_a_4931_);
lean_dec(v___x_4921_);
v_a_4933_ = lean_ctor_get(v___x_4932_, 0);
lean_inc(v_a_4933_);
lean_dec_ref_known(v___x_4932_, 1);
v___x_4934_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4920_, v_fvarId_4922_, v_a_4933_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_);
return v___x_4934_;
}
else
{
lean_object* v_a_4935_; uint8_t v___x_4936_; 
v_a_4935_ = lean_ctor_get(v___x_4932_, 0);
lean_inc(v_a_4935_);
lean_dec_ref_known(v___x_4932_, 1);
v___x_4936_ = lean_expr_eqv(v_a_4931_, v_a_4935_);
lean_dec(v_a_4931_);
if (v___x_4936_ == 0)
{
lean_object* v___x_4937_; 
lean_dec(v___x_4921_);
v___x_4937_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4920_, v_fvarId_4922_, v_a_4935_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_);
return v___x_4937_;
}
else
{
lean_object* v___x_4938_; 
lean_inc(v_mvarId_4920_);
v___x_4938_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4921_, v_mvarId_4920_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_);
if (lean_obj_tag(v___x_4938_) == 0)
{
lean_object* v___x_4939_; 
lean_dec_ref_known(v___x_4938_, 1);
v___x_4939_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4920_, v_fvarId_4922_, v_a_4935_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_);
return v___x_4939_;
}
else
{
lean_object* v_a_4940_; lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_4947_; 
lean_dec(v_a_4935_);
lean_dec(v_fvarId_4922_);
lean_dec(v_mvarId_4920_);
v_a_4940_ = lean_ctor_get(v___x_4938_, 0);
v_isSharedCheck_4947_ = !lean_is_exclusive(v___x_4938_);
if (v_isSharedCheck_4947_ == 0)
{
v___x_4942_ = v___x_4938_;
v_isShared_4943_ = v_isSharedCheck_4947_;
goto v_resetjp_4941_;
}
else
{
lean_inc(v_a_4940_);
lean_dec(v___x_4938_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_4947_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
lean_object* v___x_4945_; 
if (v_isShared_4943_ == 0)
{
v___x_4945_ = v___x_4942_;
goto v_reusejp_4944_;
}
else
{
lean_object* v_reuseFailAlloc_4946_; 
v_reuseFailAlloc_4946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4946_, 0, v_a_4940_);
v___x_4945_ = v_reuseFailAlloc_4946_;
goto v_reusejp_4944_;
}
v_reusejp_4944_:
{
return v___x_4945_;
}
}
}
}
}
}
else
{
lean_object* v_a_4948_; lean_object* v___x_4950_; uint8_t v_isShared_4951_; uint8_t v_isSharedCheck_4955_; 
lean_dec(v_a_4931_);
lean_dec(v_fvarId_4922_);
lean_dec(v___x_4921_);
lean_dec(v_mvarId_4920_);
v_a_4948_ = lean_ctor_get(v___x_4932_, 0);
v_isSharedCheck_4955_ = !lean_is_exclusive(v___x_4932_);
if (v_isSharedCheck_4955_ == 0)
{
v___x_4950_ = v___x_4932_;
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
else
{
lean_inc(v_a_4948_);
lean_dec(v___x_4932_);
v___x_4950_ = lean_box(0);
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
v_resetjp_4949_:
{
lean_object* v___x_4953_; 
if (v_isShared_4951_ == 0)
{
v___x_4953_ = v___x_4950_;
goto v_reusejp_4952_;
}
else
{
lean_object* v_reuseFailAlloc_4954_; 
v_reuseFailAlloc_4954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4954_, 0, v_a_4948_);
v___x_4953_ = v_reuseFailAlloc_4954_;
goto v_reusejp_4952_;
}
v_reusejp_4952_:
{
return v___x_4953_;
}
}
}
}
else
{
lean_object* v_a_4956_; lean_object* v___x_4958_; uint8_t v_isShared_4959_; uint8_t v_isSharedCheck_4963_; 
lean_dec(v_fvarId_4922_);
lean_dec(v___x_4921_);
lean_dec(v_mvarId_4920_);
v_a_4956_ = lean_ctor_get(v___x_4930_, 0);
v_isSharedCheck_4963_ = !lean_is_exclusive(v___x_4930_);
if (v_isSharedCheck_4963_ == 0)
{
v___x_4958_ = v___x_4930_;
v_isShared_4959_ = v_isSharedCheck_4963_;
goto v_resetjp_4957_;
}
else
{
lean_inc(v_a_4956_);
lean_dec(v___x_4930_);
v___x_4958_ = lean_box(0);
v_isShared_4959_ = v_isSharedCheck_4963_;
goto v_resetjp_4957_;
}
v_resetjp_4957_:
{
lean_object* v___x_4961_; 
if (v_isShared_4959_ == 0)
{
v___x_4961_ = v___x_4958_;
goto v_reusejp_4960_;
}
else
{
lean_object* v_reuseFailAlloc_4962_; 
v_reuseFailAlloc_4962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4962_, 0, v_a_4956_);
v___x_4961_ = v_reuseFailAlloc_4962_;
goto v_reusejp_4960_;
}
v_reusejp_4960_:
{
return v___x_4961_;
}
}
}
}
else
{
lean_object* v_a_4964_; lean_object* v___x_4966_; uint8_t v_isShared_4967_; uint8_t v_isSharedCheck_4971_; 
lean_dec(v_fvarId_4922_);
lean_dec(v___x_4921_);
lean_dec(v_mvarId_4920_);
v_a_4964_ = lean_ctor_get(v___x_4929_, 0);
v_isSharedCheck_4971_ = !lean_is_exclusive(v___x_4929_);
if (v_isSharedCheck_4971_ == 0)
{
v___x_4966_ = v___x_4929_;
v_isShared_4967_ = v_isSharedCheck_4971_;
goto v_resetjp_4965_;
}
else
{
lean_inc(v_a_4964_);
lean_dec(v___x_4929_);
v___x_4966_ = lean_box(0);
v_isShared_4967_ = v_isSharedCheck_4971_;
goto v_resetjp_4965_;
}
v_resetjp_4965_:
{
lean_object* v___x_4969_; 
if (v_isShared_4967_ == 0)
{
v___x_4969_ = v___x_4966_;
goto v_reusejp_4968_;
}
else
{
lean_object* v_reuseFailAlloc_4970_; 
v_reuseFailAlloc_4970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4970_, 0, v_a_4964_);
v___x_4969_ = v_reuseFailAlloc_4970_;
goto v_reusejp_4968_;
}
v_reusejp_4968_:
{
return v___x_4969_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed(lean_object* v_mvarId_4972_, lean_object* v___x_4973_, lean_object* v_fvarId_4974_, lean_object* v_failIfUnchanged_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4981_; lean_object* v_res_4982_; 
v_failIfUnchanged_boxed_4981_ = lean_unbox(v_failIfUnchanged_4975_);
v_res_4982_ = l_Lean_MVarId_letToHaveLocalDecl___lam__0(v_mvarId_4972_, v___x_4973_, v_fvarId_4974_, v_failIfUnchanged_boxed_4981_, v___y_4976_, v___y_4977_, v___y_4978_, v___y_4979_);
lean_dec(v___y_4979_);
lean_dec_ref(v___y_4978_);
lean_dec(v___y_4977_);
lean_dec_ref(v___y_4976_);
return v_res_4982_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl(lean_object* v_mvarId_4983_, lean_object* v_fvarId_4984_, uint8_t v_failIfUnchanged_4985_, lean_object* v_a_4986_, lean_object* v_a_4987_, lean_object* v_a_4988_, lean_object* v_a_4989_){
_start:
{
lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___f_4993_; lean_object* v___x_4994_; 
v___x_4991_ = ((lean_object*)(l_Lean_MVarId_letToHave___closed__1));
v___x_4992_ = lean_box(v_failIfUnchanged_4985_);
lean_inc(v_mvarId_4983_);
v___f_4993_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed), 9, 4);
lean_closure_set(v___f_4993_, 0, v_mvarId_4983_);
lean_closure_set(v___f_4993_, 1, v___x_4991_);
lean_closure_set(v___f_4993_, 2, v_fvarId_4984_);
lean_closure_set(v___f_4993_, 3, v___x_4992_);
v___x_4994_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4983_, v___f_4993_, v_a_4986_, v_a_4987_, v_a_4988_, v_a_4989_);
return v___x_4994_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___boxed(lean_object* v_mvarId_4995_, lean_object* v_fvarId_4996_, lean_object* v_failIfUnchanged_4997_, lean_object* v_a_4998_, lean_object* v_a_4999_, lean_object* v_a_5000_, lean_object* v_a_5001_, lean_object* v_a_5002_){
_start:
{
uint8_t v_failIfUnchanged_boxed_5003_; lean_object* v_res_5004_; 
v_failIfUnchanged_boxed_5003_ = lean_unbox(v_failIfUnchanged_4997_);
v_res_5004_ = l_Lean_MVarId_letToHaveLocalDecl(v_mvarId_4995_, v_fvarId_4996_, v_failIfUnchanged_boxed_5003_, v_a_4998_, v_a_4999_, v_a_5000_, v_a_5001_);
lean_dec(v_a_5001_);
lean_dec_ref(v_a_5000_);
lean_dec(v_a_4999_);
lean_dec_ref(v_a_4998_);
return v_res_5004_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LetToHave(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_ExtractLets_instInhabitedState_default = _init_l_Lean_Meta_ExtractLets_instInhabitedState_default();
lean_mark_persistent(l_Lean_Meta_ExtractLets_instInhabitedState_default);
l_Lean_Meta_ExtractLets_instInhabitedState = _init_l_Lean_Meta_ExtractLets_instInhabitedState();
lean_mark_persistent(l_Lean_Meta_ExtractLets_instInhabitedState);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* initialize_Lean_Meta_LetToHave(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Lets(builtin);
}
#ifdef __cplusplus
}
#endif
