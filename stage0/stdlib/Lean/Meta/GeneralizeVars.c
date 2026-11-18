// Lean compiler output
// Module: Lean.Meta.GeneralizeVars
// Imports: public import Lean.Meta.Basic public import Lean.Util.CollectFVars
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
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_sortFVarIds___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1;
static const lean_array_object l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2 = (const lean_object*)&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v_rewriteFires_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_25_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_rewriteFires_16_ = lean_ctor_get(v___x_11_, 5);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_25_ == 0)
{
lean_object* v_unused_26_; 
v_unused_26_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_26_);
v___x_18_ = v___x_11_;
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_rewriteFires_16_);
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v___x_21_; 
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 0, v_snd_10_);
v___x_21_ = v___x_18_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_24_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_24_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_24_, 4, v_diag_15_);
lean_ctor_set(v_reuseFailAlloc_24_, 5, v_rewriteFires_16_);
v___x_21_ = v_reuseFailAlloc_24_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_st_ref_put(v___y_2_, v___x_21_);
v___x_23_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_23_, 0, v_fst_9_);
return v___x_23_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg___boxed(lean_object* v_e_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_e_27_, v___y_28_);
lean_dec(v___y_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2(lean_object* v_e_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_e_31_, v___y_33_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___boxed(lean_object* v_e_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2(v_e_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_);
lean_dec(v___y_42_);
lean_dec_ref(v___y_41_);
lean_dec(v___y_40_);
lean_dec_ref(v___y_39_);
return v_res_44_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(lean_object* v_k_45_, lean_object* v_t_46_){
_start:
{
if (lean_obj_tag(v_t_46_) == 0)
{
lean_object* v_k_47_; lean_object* v_l_48_; lean_object* v_r_49_; uint8_t v___x_50_; 
v_k_47_ = lean_ctor_get(v_t_46_, 1);
v_l_48_ = lean_ctor_get(v_t_46_, 3);
v_r_49_ = lean_ctor_get(v_t_46_, 4);
v___x_50_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_45_, v_k_47_);
switch(v___x_50_)
{
case 0:
{
v_t_46_ = v_l_48_;
goto _start;
}
case 1:
{
uint8_t v___x_52_; 
v___x_52_ = 1;
return v___x_52_;
}
default: 
{
v_t_46_ = v_r_49_;
goto _start;
}
}
}
else
{
uint8_t v___x_54_; 
v___x_54_ = 0;
return v___x_54_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg___boxed(lean_object* v_k_55_, lean_object* v_t_56_){
_start:
{
uint8_t v_res_57_; lean_object* v_r_58_; 
v_res_57_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_k_55_, v_t_56_);
lean_dec(v_t_56_);
lean_dec(v_k_55_);
v_r_58_ = lean_box(v_res_57_);
return v_r_58_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(lean_object* v_init_59_, lean_object* v_x_60_){
_start:
{
if (lean_obj_tag(v_x_60_) == 0)
{
lean_object* v_k_62_; lean_object* v_l_63_; lean_object* v_r_64_; lean_object* v___x_65_; lean_object* v_a_66_; lean_object* v_a_67_; lean_object* v_fst_68_; lean_object* v_snd_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_84_; 
v_k_62_ = lean_ctor_get(v_x_60_, 1);
lean_inc(v_k_62_);
v_l_63_ = lean_ctor_get(v_x_60_, 3);
lean_inc(v_l_63_);
v_r_64_ = lean_ctor_get(v_x_60_, 4);
lean_inc(v_r_64_);
lean_dec_ref_known(v_x_60_, 5);
v___x_65_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_init_59_, v_l_63_);
v_a_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_a_66_);
lean_dec_ref(v___x_65_);
v_a_67_ = lean_ctor_get(v_a_66_, 0);
lean_inc(v_a_67_);
lean_dec(v_a_66_);
v_fst_68_ = lean_ctor_get(v_a_67_, 0);
v_snd_69_ = lean_ctor_get(v_a_67_, 1);
v_isSharedCheck_84_ = !lean_is_exclusive(v_a_67_);
if (v_isSharedCheck_84_ == 0)
{
v___x_71_ = v_a_67_;
v_isShared_72_ = v_isSharedCheck_84_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_snd_69_);
lean_inc(v_fst_68_);
lean_dec(v_a_67_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_84_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
uint8_t v___x_73_; 
v___x_73_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_k_62_, v_snd_69_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_77_; 
lean_inc(v_k_62_);
v___x_74_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_74_, 0, v_k_62_);
lean_ctor_set(v___x_74_, 1, v_fst_68_);
v___x_75_ = l_Lean_FVarIdSet_insert(v_snd_69_, v_k_62_);
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 1, v___x_75_);
lean_ctor_set(v___x_71_, 0, v___x_74_);
v___x_77_ = v___x_71_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_74_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v___x_75_);
v___x_77_ = v_reuseFailAlloc_79_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
v_init_59_ = v___x_77_;
v_x_60_ = v_r_64_;
goto _start;
}
}
else
{
lean_object* v___x_81_; 
lean_dec(v_k_62_);
if (v_isShared_72_ == 0)
{
v___x_81_ = v___x_71_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_fst_68_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v_snd_69_);
v___x_81_ = v_reuseFailAlloc_83_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
v_init_59_ = v___x_81_;
v_x_60_ = v_r_64_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_85_, 0, v_init_59_);
v___x_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg___boxed(lean_object* v_init_87_, lean_object* v_x_88_, lean_object* v___y_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_init_87_, v_x_88_);
return v_res_90_;
}
}
static lean_object* _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_91_ = lean_box(0);
v___x_92_ = lean_unsigned_to_nat(16u);
v___x_93_ = lean_mk_array(v___x_92_, v___x_91_);
return v___x_93_;
}
}
static lean_object* _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__0);
v___x_95_ = lean_unsigned_to_nat(0u);
v___x_96_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_99_ = ((lean_object*)(l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2));
v___x_100_ = lean_box(1);
v___x_101_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_102_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v___x_100_);
lean_ctor_set(v___x_102_, 2, v___x_99_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(lean_object* v_fvarId_103_, lean_object* v_todo_104_, lean_object* v_s_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_){
_start:
{
lean_object* v_a_112_; lean_object* v_s_x27_124_; lean_object* v___y_125_; lean_object* v___y_126_; lean_object* v___y_127_; lean_object* v___y_128_; lean_object* v___x_134_; 
v___x_134_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_103_, v_a_106_, v_a_108_, v_a_109_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v_a_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v_a_138_; lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; lean_object* v___x_142_; 
v_a_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_a_135_);
lean_dec_ref_known(v___x_134_, 1);
v___x_136_ = l_Lean_LocalDecl_type(v_a_135_);
v___x_137_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v___x_136_, v_a_107_);
v_a_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_a_138_);
lean_dec_ref(v___x_137_);
v___x_139_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__3);
v___x_140_ = l_Lean_collectFVars(v___x_139_, v_a_138_);
v___x_141_ = 0;
v___x_142_ = l_Lean_LocalDecl_value_x3f(v_a_135_, v___x_141_);
lean_dec(v_a_135_);
if (lean_obj_tag(v___x_142_) == 1)
{
lean_object* v_val_143_; lean_object* v___x_144_; lean_object* v_a_145_; lean_object* v___x_146_; 
v_val_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_val_143_);
lean_dec_ref_known(v___x_142_, 1);
v___x_144_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_val_143_, v_a_107_);
v_a_145_ = lean_ctor_get(v___x_144_, 0);
lean_inc(v_a_145_);
lean_dec_ref(v___x_144_);
v___x_146_ = l_Lean_collectFVars(v___x_140_, v_a_145_);
v_s_x27_124_ = v___x_146_;
v___y_125_ = v_a_106_;
v___y_126_ = v_a_107_;
v___y_127_ = v_a_108_;
v___y_128_ = v_a_109_;
goto v___jp_123_;
}
else
{
lean_dec(v___x_142_);
v_s_x27_124_ = v___x_140_;
v___y_125_ = v_a_106_;
v___y_126_ = v_a_107_;
v___y_127_ = v_a_108_;
v___y_128_ = v_a_109_;
goto v___jp_123_;
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
lean_dec(v_s_105_);
lean_dec(v_todo_104_);
v_a_147_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v___x_134_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_134_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
v___jp_111_:
{
lean_object* v_fst_113_; lean_object* v_snd_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_122_; 
v_fst_113_ = lean_ctor_get(v_a_112_, 0);
v_snd_114_ = lean_ctor_get(v_a_112_, 1);
v_isSharedCheck_122_ = !lean_is_exclusive(v_a_112_);
if (v_isSharedCheck_122_ == 0)
{
v___x_116_ = v_a_112_;
v_isShared_117_ = v_isSharedCheck_122_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_snd_114_);
lean_inc(v_fst_113_);
lean_dec(v_a_112_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_122_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_fst_113_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_snd_114_);
v___x_119_ = v_reuseFailAlloc_121_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; 
v___x_120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
return v___x_120_;
}
}
}
v___jp_123_:
{
lean_object* v_fvarSet_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v_a_132_; lean_object* v_a_133_; 
v_fvarSet_129_ = lean_ctor_get(v_s_x27_124_, 1);
lean_inc(v_fvarSet_129_);
lean_dec_ref(v_s_x27_124_);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v_todo_104_);
lean_ctor_set(v___x_130_, 1, v_s_105_);
v___x_131_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v___x_130_, v_fvarSet_129_);
v_a_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_132_);
lean_dec_ref(v___x_131_);
v_a_133_ = lean_ctor_get(v_a_132_, 0);
lean_inc(v_a_133_);
lean_dec(v_a_132_);
v_a_112_ = v_a_133_;
goto v___jp_111_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___boxed(lean_object* v_fvarId_155_, lean_object* v_todo_156_, lean_object* v_s_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(v_fvarId_155_, v_todo_156_, v_s_157_, v_a_158_, v_a_159_, v_a_160_, v_a_161_);
lean_dec(v_a_161_);
lean_dec_ref(v_a_160_);
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
return v_res_163_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(lean_object* v_00_u03b2_164_, lean_object* v_k_165_, lean_object* v_t_166_){
_start:
{
uint8_t v___x_167_; 
v___x_167_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_k_165_, v_t_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___boxed(lean_object* v_00_u03b2_168_, lean_object* v_k_169_, lean_object* v_t_170_){
_start:
{
uint8_t v_res_171_; lean_object* v_r_172_; 
v_res_171_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0(v_00_u03b2_168_, v_k_169_, v_t_170_);
lean_dec(v_t_170_);
lean_dec(v_k_169_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(lean_object* v_init_173_, lean_object* v_x_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___redArg(v_init_173_, v_x_174_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1___boxed(lean_object* v_init_181_, lean_object* v_x_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__1(v_init_181_, v_x_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(lean_object* v_todo_189_, lean_object* v_s_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_){
_start:
{
if (lean_obj_tag(v_todo_189_) == 0)
{
lean_object* v___x_196_; 
v___x_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_196_, 0, v_s_190_);
return v___x_196_;
}
else
{
lean_object* v_head_197_; lean_object* v_tail_198_; uint8_t v___x_199_; 
v_head_197_ = lean_ctor_get(v_todo_189_, 0);
lean_inc(v_head_197_);
v_tail_198_ = lean_ctor_get(v_todo_189_, 1);
lean_inc(v_tail_198_);
lean_dec_ref_known(v_todo_189_, 2);
v___x_199_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_head_197_, v_s_190_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; 
lean_inc(v_head_197_);
v___x_200_ = l_Lean_FVarIdSet_insert(v_s_190_, v_head_197_);
v___x_201_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit(v_head_197_, v_tail_198_, v___x_200_, v_a_191_, v_a_192_, v_a_193_, v_a_194_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; lean_object* v_fst_203_; lean_object* v_snd_204_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_a_202_);
lean_dec_ref_known(v___x_201_, 1);
v_fst_203_ = lean_ctor_get(v_a_202_, 0);
lean_inc(v_fst_203_);
v_snd_204_ = lean_ctor_get(v_a_202_, 1);
lean_inc(v_snd_204_);
lean_dec(v_a_202_);
v_todo_189_ = v_fst_203_;
v_s_190_ = v_snd_204_;
goto _start;
}
else
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_213_; 
v_a_206_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_213_ == 0)
{
v___x_208_ = v___x_201_;
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_201_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_211_; 
if (v_isShared_209_ == 0)
{
v___x_211_ = v___x_208_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_a_206_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
else
{
lean_dec(v_head_197_);
v_todo_189_ = v_tail_198_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop___boxed(lean_object* v_todo_215_, lean_object* v_s_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(v_todo_215_, v_s_216_, v_a_217_, v_a_218_, v_a_219_, v_a_220_);
lean_dec(v_a_220_);
lean_dec_ref(v_a_219_);
lean_dec(v_a_218_);
lean_dec_ref(v_a_217_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(lean_object* v_as_223_, size_t v_sz_224_, size_t v_i_225_, lean_object* v_b_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
lean_object* v_a_233_; uint8_t v___x_237_; 
v___x_237_ = lean_usize_dec_lt(v_i_225_, v_sz_224_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; 
v___x_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_238_, 0, v_b_226_);
return v___x_238_;
}
else
{
lean_object* v_fst_239_; lean_object* v_snd_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_275_; 
v_fst_239_ = lean_ctor_get(v_b_226_, 0);
v_snd_240_ = lean_ctor_get(v_b_226_, 1);
v_isSharedCheck_275_ = !lean_is_exclusive(v_b_226_);
if (v_isSharedCheck_275_ == 0)
{
v___x_242_ = v_b_226_;
v_isShared_243_ = v_isSharedCheck_275_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_snd_240_);
lean_inc(v_fst_239_);
lean_dec(v_b_226_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_275_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v_a_244_; uint8_t v___x_245_; 
v_a_244_ = lean_array_uget_borrowed(v_as_223_, v_i_225_);
v___x_245_ = l_Lean_Expr_isFVar(v_a_244_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; 
lean_inc(v___y_230_);
lean_inc_ref(v___y_229_);
lean_inc(v___y_228_);
lean_inc_ref(v___y_227_);
lean_inc(v_a_244_);
v___x_246_ = lean_infer_type(v_a_244_, v___y_227_, v___y_228_, v___y_229_, v___y_230_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_a_247_; lean_object* v___x_248_; 
v_a_247_ = lean_ctor_get(v___x_246_, 0);
lean_inc(v_a_247_);
lean_dec_ref_known(v___x_246_, 1);
v___x_248_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__2___redArg(v_a_247_, v___y_228_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_250_; lean_object* v___x_252_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
lean_inc(v_a_249_);
lean_dec_ref_known(v___x_248_, 1);
v___x_250_ = l_Lean_collectFVars(v_fst_239_, v_a_249_);
if (v_isShared_243_ == 0)
{
lean_ctor_set(v___x_242_, 0, v___x_250_);
v___x_252_ = v___x_242_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_250_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v_snd_240_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
v_a_233_ = v___x_252_;
goto v___jp_232_;
}
}
else
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
lean_del_object(v___x_242_);
lean_dec(v_snd_240_);
lean_dec(v_fst_239_);
v_a_254_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_248_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_248_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
else
{
lean_object* v_a_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_269_; 
lean_del_object(v___x_242_);
lean_dec(v_snd_240_);
lean_dec(v_fst_239_);
v_a_262_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_269_ == 0)
{
v___x_264_ = v___x_246_;
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_a_262_);
lean_dec(v___x_246_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_267_; 
if (v_isShared_265_ == 0)
{
v___x_267_ = v___x_264_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_a_262_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
else
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_273_; 
v___x_270_ = l_Lean_Expr_fvarId_x21(v_a_244_);
v___x_271_ = lean_array_push(v_snd_240_, v___x_270_);
if (v_isShared_243_ == 0)
{
lean_ctor_set(v___x_242_, 1, v___x_271_);
v___x_273_ = v___x_242_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_fst_239_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v___x_271_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
v_a_233_ = v___x_273_;
goto v___jp_232_;
}
}
}
}
v___jp_232_:
{
size_t v___x_234_; size_t v___x_235_; 
v___x_234_ = ((size_t)1ULL);
v___x_235_ = lean_usize_add(v_i_225_, v___x_234_);
v_i_225_ = v___x_235_;
v_b_226_ = v_a_233_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0___boxed(lean_object* v_as_276_, lean_object* v_sz_277_, lean_object* v_i_278_, lean_object* v_b_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
size_t v_sz_boxed_285_; size_t v_i_boxed_286_; lean_object* v_res_287_; 
v_sz_boxed_285_ = lean_unbox_usize(v_sz_277_);
lean_dec(v_sz_277_);
v_i_boxed_286_ = lean_unbox_usize(v_i_278_);
lean_dec(v_i_278_);
v_res_287_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(v_as_276_, v_sz_boxed_285_, v_i_boxed_286_, v_b_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec_ref(v_as_276_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet(lean_object* v_targets_288_, lean_object* v_forbidden_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_){
_start:
{
lean_object* v___x_295_; lean_object* v_todo_296_; lean_object* v_s_297_; lean_object* v___x_298_; size_t v_sz_299_; size_t v___x_300_; lean_object* v___x_301_; 
v___x_295_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v_todo_296_ = ((lean_object*)(l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__2));
v_s_297_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_s_297_, 0, v___x_295_);
lean_ctor_set(v_s_297_, 1, v_forbidden_289_);
lean_ctor_set(v_s_297_, 2, v_todo_296_);
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v_s_297_);
lean_ctor_set(v___x_298_, 1, v_todo_296_);
v_sz_299_ = lean_array_size(v_targets_288_);
v___x_300_ = ((size_t)0ULL);
v___x_301_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkGeneralizationForbiddenSet_spec__0(v_targets_288_, v_sz_299_, v___x_300_, v___x_298_, v_a_290_, v_a_291_, v_a_292_, v_a_293_);
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v_a_302_; lean_object* v_fst_303_; lean_object* v_snd_304_; lean_object* v_fvarSet_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_a_302_ = lean_ctor_get(v___x_301_, 0);
lean_inc(v_a_302_);
lean_dec_ref_known(v___x_301_, 1);
v_fst_303_ = lean_ctor_get(v_a_302_, 0);
lean_inc(v_fst_303_);
v_snd_304_ = lean_ctor_get(v_a_302_, 1);
lean_inc(v_snd_304_);
lean_dec(v_a_302_);
v_fvarSet_305_ = lean_ctor_get(v_fst_303_, 1);
lean_inc(v_fvarSet_305_);
lean_dec(v_fst_303_);
v___x_306_ = lean_array_to_list(v_snd_304_);
v___x_307_ = l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_loop(v___x_306_, v_fvarSet_305_, v_a_290_, v_a_291_, v_a_292_, v_a_293_);
return v___x_307_;
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
v_a_308_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_301_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_301_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGeneralizationForbiddenSet___boxed(lean_object* v_targets_316_, lean_object* v_forbidden_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_Meta_mkGeneralizationForbiddenSet(v_targets_316_, v_forbidden_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_);
lean_dec(v_a_321_);
lean_dec_ref(v_a_320_);
lean_dec(v_a_319_);
lean_dec_ref(v_a_318_);
lean_dec_ref(v_targets_316_);
return v_res_323_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(uint8_t v___y_324_, lean_object* v_x_325_){
_start:
{
return v___y_324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed(lean_object* v___y_326_, lean_object* v_x_327_){
_start:
{
uint8_t v___y_8989__boxed_328_; uint8_t v_res_329_; lean_object* v_r_330_; 
v___y_8989__boxed_328_ = lean_unbox(v___y_326_);
v_res_329_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1(v___y_8989__boxed_328_, v_x_327_);
lean_dec(v_x_327_);
v_r_330_ = lean_box(v_res_329_);
return v_r_330_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(lean_object* v_fst_331_, lean_object* v_x_332_){
_start:
{
uint8_t v___x_333_; 
v___x_333_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v_x_332_, v_fst_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed(lean_object* v_fst_334_, lean_object* v_x_335_){
_start:
{
uint8_t v_res_336_; lean_object* v_r_337_; 
v_res_336_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0(v_fst_334_, v_x_335_);
lean_dec(v_x_335_);
lean_dec(v_fst_334_);
v_r_337_ = lean_box(v_res_336_);
return v_r_337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(lean_object* v_forbidden_338_, uint8_t v_ignoreLetDecls_339_, lean_object* v_as_340_, size_t v_sz_341_, size_t v_i_342_, lean_object* v_b_343_, lean_object* v___y_344_){
_start:
{
uint8_t v___x_346_; 
v___x_346_ = lean_usize_dec_lt(v_i_342_, v_sz_341_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; 
v___x_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_347_, 0, v_b_343_);
return v___x_347_;
}
else
{
lean_object* v_snd_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_509_; 
v_snd_348_ = lean_ctor_get(v_b_343_, 1);
v_isSharedCheck_509_ = !lean_is_exclusive(v_b_343_);
if (v_isSharedCheck_509_ == 0)
{
lean_object* v_unused_510_; 
v_unused_510_ = lean_ctor_get(v_b_343_, 0);
lean_dec(v_unused_510_);
v___x_350_ = v_b_343_;
v_isShared_351_ = v_isSharedCheck_509_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_snd_348_);
lean_dec(v_b_343_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_509_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_352_; lean_object* v_a_354_; lean_object* v_a_361_; 
v___x_352_ = lean_box(0);
v_a_361_ = lean_array_uget_borrowed(v_as_340_, v_i_342_);
if (lean_obj_tag(v_a_361_) == 0)
{
v_a_354_ = v_snd_348_;
goto v___jp_353_;
}
else
{
lean_object* v_val_362_; lean_object* v_fst_363_; lean_object* v_snd_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_508_; 
v_val_362_ = lean_ctor_get(v_a_361_, 0);
v_fst_363_ = lean_ctor_get(v_snd_348_, 0);
v_snd_364_ = lean_ctor_get(v_snd_348_, 1);
v_isSharedCheck_508_ = !lean_is_exclusive(v_snd_348_);
if (v_isSharedCheck_508_ == 0)
{
v___x_366_ = v_snd_348_;
v_isShared_367_ = v_isSharedCheck_508_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_snd_364_);
lean_inc(v_fst_363_);
lean_dec(v_snd_348_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_508_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_372_; uint8_t v_a_374_; uint8_t v_fst_380_; lean_object* v_mctx_381_; lean_object* v___y_398_; uint8_t v_fst_404_; lean_object* v_snd_405_; lean_object* v___y_423_; uint8_t v_fst_428_; lean_object* v_mctx_429_; lean_object* v___y_446_; uint8_t v___x_451_; 
v___x_372_ = l_Lean_LocalDecl_fvarId(v_val_362_);
v___x_451_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_372_, v_forbidden_338_);
if (v___x_451_ == 0)
{
uint8_t v___x_452_; 
v___x_452_ = l_Lean_LocalDecl_isAuxDecl(v_val_362_);
if (v___x_452_ == 0)
{
uint8_t v___x_453_; uint8_t v___x_454_; 
v___x_453_ = l_Lean_LocalDecl_binderInfo(v_val_362_);
v___x_454_ = l_Lean_BinderInfo_isInstImplicit(v___x_453_);
if (v___x_454_ == 0)
{
lean_object* v___f_455_; lean_object* v___y_457_; lean_object* v___y_458_; lean_object* v_snd_459_; lean_object* v___y_465_; lean_object* v___y_466_; lean_object* v___y_467_; uint8_t v___y_474_; 
lean_inc(v_fst_363_);
v___f_455_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_455_, 0, v_fst_363_);
if (v_ignoreLetDecls_339_ == 0)
{
lean_del_object(v___x_366_);
v___y_474_ = v___x_451_;
goto v___jp_473_;
}
else
{
uint8_t v___x_506_; 
v___x_506_ = l_Lean_LocalDecl_isLet(v_val_362_, v___x_451_);
if (v___x_506_ == 0)
{
lean_del_object(v___x_366_);
v___y_474_ = v___x_506_;
goto v___jp_473_;
}
else
{
lean_dec_ref(v___f_455_);
lean_dec(v___x_372_);
goto v___jp_368_;
}
}
v___jp_456_:
{
uint8_t v___x_460_; 
v___x_460_ = l_Lean_Expr_hasFVar(v___y_458_);
if (v___x_460_ == 0)
{
uint8_t v___x_461_; 
v___x_461_ = l_Lean_Expr_hasMVar(v___y_458_);
if (v___x_461_ == 0)
{
lean_dec_ref(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec_ref(v___f_455_);
v_fst_404_ = v___x_461_;
v_snd_405_ = v_snd_459_;
goto v___jp_403_;
}
else
{
lean_object* v___x_462_; 
v___x_462_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_455_, v___y_457_, v___y_458_, v_snd_459_);
v___y_423_ = v___x_462_;
goto v___jp_422_;
}
}
else
{
lean_object* v___x_463_; 
v___x_463_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_455_, v___y_457_, v___y_458_, v_snd_459_);
v___y_423_ = v___x_463_;
goto v___jp_422_;
}
}
v___jp_464_:
{
lean_object* v_fst_468_; uint8_t v___x_469_; 
v_fst_468_ = lean_ctor_get(v___y_467_, 0);
v___x_469_ = lean_unbox(v_fst_468_);
if (v___x_469_ == 0)
{
lean_object* v_snd_470_; 
v_snd_470_ = lean_ctor_get(v___y_467_, 1);
lean_inc(v_snd_470_);
lean_dec_ref(v___y_467_);
v___y_457_ = v___y_465_;
v___y_458_ = v___y_466_;
v_snd_459_ = v_snd_470_;
goto v___jp_456_;
}
else
{
lean_object* v_snd_471_; uint8_t v___x_472_; 
lean_inc(v_fst_468_);
lean_dec_ref(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec_ref(v___f_455_);
v_snd_471_ = lean_ctor_get(v___y_467_, 1);
lean_inc(v_snd_471_);
lean_dec_ref(v___y_467_);
v___x_472_ = lean_unbox(v_fst_468_);
lean_dec(v_fst_468_);
v_fst_404_ = v___x_472_;
v_snd_405_ = v_snd_471_;
goto v___jp_403_;
}
}
v___jp_473_:
{
lean_object* v___x_475_; lean_object* v___f_476_; 
v___x_475_ = lean_box(v___y_474_);
v___f_476_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_476_, 0, v___x_475_);
if (lean_obj_tag(v_val_362_) == 0)
{
lean_object* v_type_477_; lean_object* v___x_478_; lean_object* v_mctx_479_; lean_object* v___x_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v_type_477_ = lean_ctor_get(v_val_362_, 3);
v___x_478_ = lean_st_ref_get(v___y_344_);
v_mctx_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc_ref_n(v_mctx_479_, 2);
lean_dec(v___x_478_);
v___x_480_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
lean_ctor_set(v___x_481_, 1, v_mctx_479_);
v___x_482_ = l_Lean_Expr_hasFVar(v_type_477_);
if (v___x_482_ == 0)
{
uint8_t v___x_483_; 
v___x_483_ = l_Lean_Expr_hasMVar(v_type_477_);
if (v___x_483_ == 0)
{
lean_dec_ref_known(v___x_481_, 2);
lean_dec_ref(v___f_476_);
lean_dec_ref(v___f_455_);
v_fst_428_ = v___x_483_;
v_mctx_429_ = v_mctx_479_;
goto v___jp_427_;
}
else
{
lean_object* v___x_484_; 
lean_dec_ref(v_mctx_479_);
lean_inc_ref(v_type_477_);
v___x_484_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_455_, v___f_476_, v_type_477_, v___x_481_);
v___y_446_ = v___x_484_;
goto v___jp_445_;
}
}
else
{
lean_object* v___x_485_; 
lean_dec_ref(v_mctx_479_);
lean_inc_ref(v_type_477_);
v___x_485_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_455_, v___f_476_, v_type_477_, v___x_481_);
v___y_446_ = v___x_485_;
goto v___jp_445_;
}
}
else
{
uint8_t v_nondep_486_; 
v_nondep_486_ = lean_ctor_get_uint8(v_val_362_, sizeof(void*)*5);
if (v_nondep_486_ == 0)
{
lean_object* v_type_487_; lean_object* v_value_488_; lean_object* v___x_489_; lean_object* v_mctx_490_; lean_object* v___x_491_; lean_object* v___x_492_; uint8_t v___x_493_; 
v_type_487_ = lean_ctor_get(v_val_362_, 3);
v_value_488_ = lean_ctor_get(v_val_362_, 4);
v___x_489_ = lean_st_ref_get(v___y_344_);
v_mctx_490_ = lean_ctor_get(v___x_489_, 0);
lean_inc_ref(v_mctx_490_);
lean_dec(v___x_489_);
v___x_491_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
lean_ctor_set(v___x_492_, 1, v_mctx_490_);
v___x_493_ = l_Lean_Expr_hasFVar(v_type_487_);
if (v___x_493_ == 0)
{
uint8_t v___x_494_; 
v___x_494_ = l_Lean_Expr_hasMVar(v_type_487_);
if (v___x_494_ == 0)
{
lean_inc_ref(v_value_488_);
v___y_457_ = v___f_476_;
v___y_458_ = v_value_488_;
v_snd_459_ = v___x_492_;
goto v___jp_456_;
}
else
{
lean_object* v___x_495_; 
lean_inc_ref(v_type_487_);
lean_inc_ref(v___f_476_);
lean_inc_ref(v___f_455_);
v___x_495_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_455_, v___f_476_, v_type_487_, v___x_492_);
lean_inc_ref(v_value_488_);
v___y_465_ = v___f_476_;
v___y_466_ = v_value_488_;
v___y_467_ = v___x_495_;
goto v___jp_464_;
}
}
else
{
lean_object* v___x_496_; 
lean_inc_ref(v_type_487_);
lean_inc_ref(v___f_476_);
lean_inc_ref(v___f_455_);
v___x_496_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_455_, v___f_476_, v_type_487_, v___x_492_);
lean_inc_ref(v_value_488_);
v___y_465_ = v___f_476_;
v___y_466_ = v_value_488_;
v___y_467_ = v___x_496_;
goto v___jp_464_;
}
}
else
{
lean_object* v_type_497_; lean_object* v___x_498_; lean_object* v_mctx_499_; lean_object* v___x_500_; lean_object* v___x_501_; uint8_t v___x_502_; 
v_type_497_ = lean_ctor_get(v_val_362_, 3);
v___x_498_ = lean_st_ref_get(v___y_344_);
v_mctx_499_ = lean_ctor_get(v___x_498_, 0);
lean_inc_ref_n(v_mctx_499_, 2);
lean_dec(v___x_498_);
v___x_500_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
lean_ctor_set(v___x_501_, 1, v_mctx_499_);
v___x_502_ = l_Lean_Expr_hasFVar(v_type_497_);
if (v___x_502_ == 0)
{
uint8_t v___x_503_; 
v___x_503_ = l_Lean_Expr_hasMVar(v_type_497_);
if (v___x_503_ == 0)
{
lean_dec_ref_known(v___x_501_, 2);
lean_dec_ref(v___f_476_);
lean_dec_ref(v___f_455_);
v_fst_380_ = v___x_503_;
v_mctx_381_ = v_mctx_499_;
goto v___jp_379_;
}
else
{
lean_object* v___x_504_; 
lean_dec_ref(v_mctx_499_);
lean_inc_ref(v_type_497_);
v___x_504_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_455_, v___f_476_, v_type_497_, v___x_501_);
v___y_398_ = v___x_504_;
goto v___jp_397_;
}
}
else
{
lean_object* v___x_505_; 
lean_dec_ref(v_mctx_499_);
lean_inc_ref(v_type_497_);
v___x_505_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_455_, v___f_476_, v_type_497_, v___x_501_);
v___y_398_ = v___x_505_;
goto v___jp_397_;
}
}
}
}
}
else
{
lean_dec(v___x_372_);
goto v___jp_368_;
}
}
else
{
lean_dec(v___x_372_);
goto v___jp_368_;
}
}
else
{
lean_object* v___x_507_; 
lean_dec(v___x_372_);
lean_del_object(v___x_366_);
v___x_507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_507_, 0, v_fst_363_);
lean_ctor_set(v___x_507_, 1, v_snd_364_);
v_a_354_ = v___x_507_;
goto v___jp_353_;
}
v___jp_368_:
{
lean_object* v___x_370_; 
if (v_isShared_367_ == 0)
{
v___x_370_ = v___x_366_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_fst_363_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v_snd_364_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
v_a_354_ = v___x_370_;
goto v___jp_353_;
}
}
v___jp_373_:
{
if (v_a_374_ == 0)
{
lean_object* v___x_375_; 
lean_dec(v___x_372_);
v___x_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_375_, 0, v_fst_363_);
lean_ctor_set(v___x_375_, 1, v_snd_364_);
v_a_354_ = v___x_375_;
goto v___jp_353_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
lean_inc(v___x_372_);
v___x_376_ = l_Lean_FVarIdSet_insert(v_snd_364_, v___x_372_);
v___x_377_ = l_Lean_FVarIdSet_insert(v_fst_363_, v___x_372_);
v___x_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
lean_ctor_set(v___x_378_, 1, v___x_376_);
v_a_354_ = v___x_378_;
goto v___jp_353_;
}
}
v___jp_379_:
{
lean_object* v___x_382_; lean_object* v_cache_383_; lean_object* v_zetaDeltaFVarIds_384_; lean_object* v_postponed_385_; lean_object* v_diag_386_; lean_object* v_rewriteFires_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_395_; 
v___x_382_ = lean_st_ref_take(v___y_344_);
v_cache_383_ = lean_ctor_get(v___x_382_, 1);
v_zetaDeltaFVarIds_384_ = lean_ctor_get(v___x_382_, 2);
v_postponed_385_ = lean_ctor_get(v___x_382_, 3);
v_diag_386_ = lean_ctor_get(v___x_382_, 4);
v_rewriteFires_387_ = lean_ctor_get(v___x_382_, 5);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_395_ == 0)
{
lean_object* v_unused_396_; 
v_unused_396_ = lean_ctor_get(v___x_382_, 0);
lean_dec(v_unused_396_);
v___x_389_ = v___x_382_;
v_isShared_390_ = v_isSharedCheck_395_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_rewriteFires_387_);
lean_inc(v_diag_386_);
lean_inc(v_postponed_385_);
lean_inc(v_zetaDeltaFVarIds_384_);
lean_inc(v_cache_383_);
lean_dec(v___x_382_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_395_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_392_; 
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 0, v_mctx_381_);
v___x_392_ = v___x_389_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_mctx_381_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_cache_383_);
lean_ctor_set(v_reuseFailAlloc_394_, 2, v_zetaDeltaFVarIds_384_);
lean_ctor_set(v_reuseFailAlloc_394_, 3, v_postponed_385_);
lean_ctor_set(v_reuseFailAlloc_394_, 4, v_diag_386_);
lean_ctor_set(v_reuseFailAlloc_394_, 5, v_rewriteFires_387_);
v___x_392_ = v_reuseFailAlloc_394_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
lean_object* v___x_393_; 
v___x_393_ = lean_st_ref_put(v___y_344_, v___x_392_);
v_a_374_ = v_fst_380_;
goto v___jp_373_;
}
}
}
v___jp_397_:
{
lean_object* v_snd_399_; lean_object* v_fst_400_; lean_object* v_mctx_401_; uint8_t v___x_402_; 
v_snd_399_ = lean_ctor_get(v___y_398_, 1);
lean_inc(v_snd_399_);
v_fst_400_ = lean_ctor_get(v___y_398_, 0);
lean_inc(v_fst_400_);
lean_dec_ref(v___y_398_);
v_mctx_401_ = lean_ctor_get(v_snd_399_, 1);
lean_inc_ref(v_mctx_401_);
lean_dec(v_snd_399_);
v___x_402_ = lean_unbox(v_fst_400_);
lean_dec(v_fst_400_);
v_fst_380_ = v___x_402_;
v_mctx_381_ = v_mctx_401_;
goto v___jp_379_;
}
v___jp_403_:
{
lean_object* v_mctx_406_; lean_object* v___x_407_; lean_object* v_cache_408_; lean_object* v_zetaDeltaFVarIds_409_; lean_object* v_postponed_410_; lean_object* v_diag_411_; lean_object* v_rewriteFires_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_420_; 
v_mctx_406_ = lean_ctor_get(v_snd_405_, 1);
lean_inc_ref(v_mctx_406_);
lean_dec_ref(v_snd_405_);
v___x_407_ = lean_st_ref_take(v___y_344_);
v_cache_408_ = lean_ctor_get(v___x_407_, 1);
v_zetaDeltaFVarIds_409_ = lean_ctor_get(v___x_407_, 2);
v_postponed_410_ = lean_ctor_get(v___x_407_, 3);
v_diag_411_ = lean_ctor_get(v___x_407_, 4);
v_rewriteFires_412_ = lean_ctor_get(v___x_407_, 5);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_420_ == 0)
{
lean_object* v_unused_421_; 
v_unused_421_ = lean_ctor_get(v___x_407_, 0);
lean_dec(v_unused_421_);
v___x_414_ = v___x_407_;
v_isShared_415_ = v_isSharedCheck_420_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_rewriteFires_412_);
lean_inc(v_diag_411_);
lean_inc(v_postponed_410_);
lean_inc(v_zetaDeltaFVarIds_409_);
lean_inc(v_cache_408_);
lean_dec(v___x_407_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_420_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 0, v_mctx_406_);
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_mctx_406_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v_cache_408_);
lean_ctor_set(v_reuseFailAlloc_419_, 2, v_zetaDeltaFVarIds_409_);
lean_ctor_set(v_reuseFailAlloc_419_, 3, v_postponed_410_);
lean_ctor_set(v_reuseFailAlloc_419_, 4, v_diag_411_);
lean_ctor_set(v_reuseFailAlloc_419_, 5, v_rewriteFires_412_);
v___x_417_ = v_reuseFailAlloc_419_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
lean_object* v___x_418_; 
v___x_418_ = lean_st_ref_put(v___y_344_, v___x_417_);
v_a_374_ = v_fst_404_;
goto v___jp_373_;
}
}
}
v___jp_422_:
{
lean_object* v_fst_424_; lean_object* v_snd_425_; uint8_t v___x_426_; 
v_fst_424_ = lean_ctor_get(v___y_423_, 0);
lean_inc(v_fst_424_);
v_snd_425_ = lean_ctor_get(v___y_423_, 1);
lean_inc(v_snd_425_);
lean_dec_ref(v___y_423_);
v___x_426_ = lean_unbox(v_fst_424_);
lean_dec(v_fst_424_);
v_fst_404_ = v___x_426_;
v_snd_405_ = v_snd_425_;
goto v___jp_403_;
}
v___jp_427_:
{
lean_object* v___x_430_; lean_object* v_cache_431_; lean_object* v_zetaDeltaFVarIds_432_; lean_object* v_postponed_433_; lean_object* v_diag_434_; lean_object* v_rewriteFires_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_443_; 
v___x_430_ = lean_st_ref_take(v___y_344_);
v_cache_431_ = lean_ctor_get(v___x_430_, 1);
v_zetaDeltaFVarIds_432_ = lean_ctor_get(v___x_430_, 2);
v_postponed_433_ = lean_ctor_get(v___x_430_, 3);
v_diag_434_ = lean_ctor_get(v___x_430_, 4);
v_rewriteFires_435_ = lean_ctor_get(v___x_430_, 5);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_443_ == 0)
{
lean_object* v_unused_444_; 
v_unused_444_ = lean_ctor_get(v___x_430_, 0);
lean_dec(v_unused_444_);
v___x_437_ = v___x_430_;
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_rewriteFires_435_);
lean_inc(v_diag_434_);
lean_inc(v_postponed_433_);
lean_inc(v_zetaDeltaFVarIds_432_);
lean_inc(v_cache_431_);
lean_dec(v___x_430_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v_mctx_429_);
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_mctx_429_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v_cache_431_);
lean_ctor_set(v_reuseFailAlloc_442_, 2, v_zetaDeltaFVarIds_432_);
lean_ctor_set(v_reuseFailAlloc_442_, 3, v_postponed_433_);
lean_ctor_set(v_reuseFailAlloc_442_, 4, v_diag_434_);
lean_ctor_set(v_reuseFailAlloc_442_, 5, v_rewriteFires_435_);
v___x_440_ = v_reuseFailAlloc_442_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
lean_object* v___x_441_; 
v___x_441_ = lean_st_ref_put(v___y_344_, v___x_440_);
v_a_374_ = v_fst_428_;
goto v___jp_373_;
}
}
}
v___jp_445_:
{
lean_object* v_snd_447_; lean_object* v_fst_448_; lean_object* v_mctx_449_; uint8_t v___x_450_; 
v_snd_447_ = lean_ctor_get(v___y_446_, 1);
lean_inc(v_snd_447_);
v_fst_448_ = lean_ctor_get(v___y_446_, 0);
lean_inc(v_fst_448_);
lean_dec_ref(v___y_446_);
v_mctx_449_ = lean_ctor_get(v_snd_447_, 1);
lean_inc_ref(v_mctx_449_);
lean_dec(v_snd_447_);
v___x_450_ = lean_unbox(v_fst_448_);
lean_dec(v_fst_448_);
v_fst_428_ = v___x_450_;
v_mctx_429_ = v_mctx_449_;
goto v___jp_427_;
}
}
}
v___jp_353_:
{
lean_object* v___x_356_; 
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 1, v_a_354_);
lean_ctor_set(v___x_350_, 0, v___x_352_);
v___x_356_ = v___x_350_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_352_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_a_354_);
v___x_356_ = v_reuseFailAlloc_360_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
size_t v___x_357_; size_t v___x_358_; 
v___x_357_ = ((size_t)1ULL);
v___x_358_ = lean_usize_add(v_i_342_, v___x_357_);
v_i_342_ = v___x_358_;
v_b_343_ = v___x_356_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_forbidden_511_, lean_object* v_ignoreLetDecls_512_, lean_object* v_as_513_, lean_object* v_sz_514_, lean_object* v_i_515_, lean_object* v_b_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_519_; size_t v_sz_boxed_520_; size_t v_i_boxed_521_; lean_object* v_res_522_; 
v_ignoreLetDecls_boxed_519_ = lean_unbox(v_ignoreLetDecls_512_);
v_sz_boxed_520_ = lean_unbox_usize(v_sz_514_);
lean_dec(v_sz_514_);
v_i_boxed_521_ = lean_unbox_usize(v_i_515_);
lean_dec(v_i_515_);
v_res_522_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_forbidden_511_, v_ignoreLetDecls_boxed_519_, v_as_513_, v_sz_boxed_520_, v_i_boxed_521_, v_b_516_, v___y_517_);
lean_dec(v___y_517_);
lean_dec_ref(v_as_513_);
lean_dec(v_forbidden_511_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(lean_object* v_forbidden_523_, uint8_t v_ignoreLetDecls_524_, lean_object* v_as_525_, size_t v_sz_526_, size_t v_i_527_, lean_object* v_b_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
uint8_t v___x_534_; 
v___x_534_ = lean_usize_dec_lt(v_i_527_, v_sz_526_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; 
v___x_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_535_, 0, v_b_528_);
return v___x_535_;
}
else
{
lean_object* v_snd_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_697_; 
v_snd_536_ = lean_ctor_get(v_b_528_, 1);
v_isSharedCheck_697_ = !lean_is_exclusive(v_b_528_);
if (v_isSharedCheck_697_ == 0)
{
lean_object* v_unused_698_; 
v_unused_698_ = lean_ctor_get(v_b_528_, 0);
lean_dec(v_unused_698_);
v___x_538_ = v_b_528_;
v_isShared_539_ = v_isSharedCheck_697_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_snd_536_);
lean_dec(v_b_528_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_697_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v_a_542_; lean_object* v_a_549_; 
v___x_540_ = lean_box(0);
v_a_549_ = lean_array_uget_borrowed(v_as_525_, v_i_527_);
if (lean_obj_tag(v_a_549_) == 0)
{
v_a_542_ = v_snd_536_;
goto v___jp_541_;
}
else
{
lean_object* v_val_550_; lean_object* v_fst_551_; lean_object* v_snd_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_696_; 
v_val_550_ = lean_ctor_get(v_a_549_, 0);
v_fst_551_ = lean_ctor_get(v_snd_536_, 0);
v_snd_552_ = lean_ctor_get(v_snd_536_, 1);
v_isSharedCheck_696_ = !lean_is_exclusive(v_snd_536_);
if (v_isSharedCheck_696_ == 0)
{
v___x_554_ = v_snd_536_;
v_isShared_555_ = v_isSharedCheck_696_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_snd_552_);
lean_inc(v_fst_551_);
lean_dec(v_snd_536_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_696_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_560_; uint8_t v_a_562_; uint8_t v_fst_568_; lean_object* v_mctx_569_; lean_object* v___y_586_; uint8_t v_fst_592_; lean_object* v_snd_593_; lean_object* v___y_611_; uint8_t v_fst_616_; lean_object* v_mctx_617_; lean_object* v___y_634_; uint8_t v___x_639_; 
v___x_560_ = l_Lean_LocalDecl_fvarId(v_val_550_);
v___x_639_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_560_, v_forbidden_523_);
if (v___x_639_ == 0)
{
uint8_t v___x_640_; 
v___x_640_ = l_Lean_LocalDecl_isAuxDecl(v_val_550_);
if (v___x_640_ == 0)
{
uint8_t v___x_641_; uint8_t v___x_642_; 
v___x_641_ = l_Lean_LocalDecl_binderInfo(v_val_550_);
v___x_642_ = l_Lean_BinderInfo_isInstImplicit(v___x_641_);
if (v___x_642_ == 0)
{
lean_object* v___f_643_; lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v_snd_647_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; uint8_t v___y_662_; 
lean_inc(v_fst_551_);
v___f_643_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_643_, 0, v_fst_551_);
if (v_ignoreLetDecls_524_ == 0)
{
lean_del_object(v___x_554_);
v___y_662_ = v___x_639_;
goto v___jp_661_;
}
else
{
uint8_t v___x_694_; 
v___x_694_ = l_Lean_LocalDecl_isLet(v_val_550_, v___x_639_);
if (v___x_694_ == 0)
{
lean_del_object(v___x_554_);
v___y_662_ = v___x_694_;
goto v___jp_661_;
}
else
{
lean_dec_ref(v___f_643_);
lean_dec(v___x_560_);
goto v___jp_556_;
}
}
v___jp_644_:
{
uint8_t v___x_648_; 
v___x_648_ = l_Lean_Expr_hasFVar(v___y_646_);
if (v___x_648_ == 0)
{
uint8_t v___x_649_; 
v___x_649_ = l_Lean_Expr_hasMVar(v___y_646_);
if (v___x_649_ == 0)
{
lean_dec_ref(v___y_646_);
lean_dec_ref(v___y_645_);
lean_dec_ref(v___f_643_);
v_fst_592_ = v___x_649_;
v_snd_593_ = v_snd_647_;
goto v___jp_591_;
}
else
{
lean_object* v___x_650_; 
v___x_650_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_643_, v___y_645_, v___y_646_, v_snd_647_);
v___y_611_ = v___x_650_;
goto v___jp_610_;
}
}
else
{
lean_object* v___x_651_; 
v___x_651_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_643_, v___y_645_, v___y_646_, v_snd_647_);
v___y_611_ = v___x_651_;
goto v___jp_610_;
}
}
v___jp_652_:
{
lean_object* v_fst_656_; uint8_t v___x_657_; 
v_fst_656_ = lean_ctor_get(v___y_655_, 0);
v___x_657_ = lean_unbox(v_fst_656_);
if (v___x_657_ == 0)
{
lean_object* v_snd_658_; 
v_snd_658_ = lean_ctor_get(v___y_655_, 1);
lean_inc(v_snd_658_);
lean_dec_ref(v___y_655_);
v___y_645_ = v___y_653_;
v___y_646_ = v___y_654_;
v_snd_647_ = v_snd_658_;
goto v___jp_644_;
}
else
{
lean_object* v_snd_659_; uint8_t v___x_660_; 
lean_inc(v_fst_656_);
lean_dec_ref(v___y_654_);
lean_dec_ref(v___y_653_);
lean_dec_ref(v___f_643_);
v_snd_659_ = lean_ctor_get(v___y_655_, 1);
lean_inc(v_snd_659_);
lean_dec_ref(v___y_655_);
v___x_660_ = lean_unbox(v_fst_656_);
lean_dec(v_fst_656_);
v_fst_592_ = v___x_660_;
v_snd_593_ = v_snd_659_;
goto v___jp_591_;
}
}
v___jp_661_:
{
lean_object* v___x_663_; lean_object* v___f_664_; 
v___x_663_ = lean_box(v___y_662_);
v___f_664_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_664_, 0, v___x_663_);
if (lean_obj_tag(v_val_550_) == 0)
{
lean_object* v_type_665_; lean_object* v___x_666_; lean_object* v_mctx_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v_type_665_ = lean_ctor_get(v_val_550_, 3);
v___x_666_ = lean_st_ref_get(v___y_530_);
v_mctx_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc_ref_n(v_mctx_667_, 2);
lean_dec(v___x_666_);
v___x_668_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_668_);
lean_ctor_set(v___x_669_, 1, v_mctx_667_);
v___x_670_ = l_Lean_Expr_hasFVar(v_type_665_);
if (v___x_670_ == 0)
{
uint8_t v___x_671_; 
v___x_671_ = l_Lean_Expr_hasMVar(v_type_665_);
if (v___x_671_ == 0)
{
lean_dec_ref_known(v___x_669_, 2);
lean_dec_ref(v___f_664_);
lean_dec_ref(v___f_643_);
v_fst_616_ = v___x_671_;
v_mctx_617_ = v_mctx_667_;
goto v___jp_615_;
}
else
{
lean_object* v___x_672_; 
lean_dec_ref(v_mctx_667_);
lean_inc_ref(v_type_665_);
v___x_672_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_643_, v___f_664_, v_type_665_, v___x_669_);
v___y_634_ = v___x_672_;
goto v___jp_633_;
}
}
else
{
lean_object* v___x_673_; 
lean_dec_ref(v_mctx_667_);
lean_inc_ref(v_type_665_);
v___x_673_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_643_, v___f_664_, v_type_665_, v___x_669_);
v___y_634_ = v___x_673_;
goto v___jp_633_;
}
}
else
{
uint8_t v_nondep_674_; 
v_nondep_674_ = lean_ctor_get_uint8(v_val_550_, sizeof(void*)*5);
if (v_nondep_674_ == 0)
{
lean_object* v_type_675_; lean_object* v_value_676_; lean_object* v___x_677_; lean_object* v_mctx_678_; lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
v_type_675_ = lean_ctor_get(v_val_550_, 3);
v_value_676_ = lean_ctor_get(v_val_550_, 4);
v___x_677_ = lean_st_ref_get(v___y_530_);
v_mctx_678_ = lean_ctor_get(v___x_677_, 0);
lean_inc_ref(v_mctx_678_);
lean_dec(v___x_677_);
v___x_679_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
lean_ctor_set(v___x_680_, 1, v_mctx_678_);
v___x_681_ = l_Lean_Expr_hasFVar(v_type_675_);
if (v___x_681_ == 0)
{
uint8_t v___x_682_; 
v___x_682_ = l_Lean_Expr_hasMVar(v_type_675_);
if (v___x_682_ == 0)
{
lean_inc_ref(v_value_676_);
v___y_645_ = v___f_664_;
v___y_646_ = v_value_676_;
v_snd_647_ = v___x_680_;
goto v___jp_644_;
}
else
{
lean_object* v___x_683_; 
lean_inc_ref(v_type_675_);
lean_inc_ref(v___f_664_);
lean_inc_ref(v___f_643_);
v___x_683_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_643_, v___f_664_, v_type_675_, v___x_680_);
lean_inc_ref(v_value_676_);
v___y_653_ = v___f_664_;
v___y_654_ = v_value_676_;
v___y_655_ = v___x_683_;
goto v___jp_652_;
}
}
else
{
lean_object* v___x_684_; 
lean_inc_ref(v_type_675_);
lean_inc_ref(v___f_664_);
lean_inc_ref(v___f_643_);
v___x_684_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_643_, v___f_664_, v_type_675_, v___x_680_);
lean_inc_ref(v_value_676_);
v___y_653_ = v___f_664_;
v___y_654_ = v_value_676_;
v___y_655_ = v___x_684_;
goto v___jp_652_;
}
}
else
{
lean_object* v_type_685_; lean_object* v___x_686_; lean_object* v_mctx_687_; lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v_type_685_ = lean_ctor_get(v_val_550_, 3);
v___x_686_ = lean_st_ref_get(v___y_530_);
v_mctx_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc_ref_n(v_mctx_687_, 2);
lean_dec(v___x_686_);
v___x_688_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v_mctx_687_);
v___x_690_ = l_Lean_Expr_hasFVar(v_type_685_);
if (v___x_690_ == 0)
{
uint8_t v___x_691_; 
v___x_691_ = l_Lean_Expr_hasMVar(v_type_685_);
if (v___x_691_ == 0)
{
lean_dec_ref_known(v___x_689_, 2);
lean_dec_ref(v___f_664_);
lean_dec_ref(v___f_643_);
v_fst_568_ = v___x_691_;
v_mctx_569_ = v_mctx_687_;
goto v___jp_567_;
}
else
{
lean_object* v___x_692_; 
lean_dec_ref(v_mctx_687_);
lean_inc_ref(v_type_685_);
v___x_692_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_643_, v___f_664_, v_type_685_, v___x_689_);
v___y_586_ = v___x_692_;
goto v___jp_585_;
}
}
else
{
lean_object* v___x_693_; 
lean_dec_ref(v_mctx_687_);
lean_inc_ref(v_type_685_);
v___x_693_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_643_, v___f_664_, v_type_685_, v___x_689_);
v___y_586_ = v___x_693_;
goto v___jp_585_;
}
}
}
}
}
else
{
lean_dec(v___x_560_);
goto v___jp_556_;
}
}
else
{
lean_dec(v___x_560_);
goto v___jp_556_;
}
}
else
{
lean_object* v___x_695_; 
lean_dec(v___x_560_);
lean_del_object(v___x_554_);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v_fst_551_);
lean_ctor_set(v___x_695_, 1, v_snd_552_);
v_a_542_ = v___x_695_;
goto v___jp_541_;
}
v___jp_556_:
{
lean_object* v___x_558_; 
if (v_isShared_555_ == 0)
{
v___x_558_ = v___x_554_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_fst_551_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_snd_552_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
v_a_542_ = v___x_558_;
goto v___jp_541_;
}
}
v___jp_561_:
{
if (v_a_562_ == 0)
{
lean_object* v___x_563_; 
lean_dec(v___x_560_);
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v_fst_551_);
lean_ctor_set(v___x_563_, 1, v_snd_552_);
v_a_542_ = v___x_563_;
goto v___jp_541_;
}
else
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
lean_inc(v___x_560_);
v___x_564_ = l_Lean_FVarIdSet_insert(v_snd_552_, v___x_560_);
v___x_565_ = l_Lean_FVarIdSet_insert(v_fst_551_, v___x_560_);
v___x_566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
lean_ctor_set(v___x_566_, 1, v___x_564_);
v_a_542_ = v___x_566_;
goto v___jp_541_;
}
}
v___jp_567_:
{
lean_object* v___x_570_; lean_object* v_cache_571_; lean_object* v_zetaDeltaFVarIds_572_; lean_object* v_postponed_573_; lean_object* v_diag_574_; lean_object* v_rewriteFires_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_583_; 
v___x_570_ = lean_st_ref_take(v___y_530_);
v_cache_571_ = lean_ctor_get(v___x_570_, 1);
v_zetaDeltaFVarIds_572_ = lean_ctor_get(v___x_570_, 2);
v_postponed_573_ = lean_ctor_get(v___x_570_, 3);
v_diag_574_ = lean_ctor_get(v___x_570_, 4);
v_rewriteFires_575_ = lean_ctor_get(v___x_570_, 5);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_583_ == 0)
{
lean_object* v_unused_584_; 
v_unused_584_ = lean_ctor_get(v___x_570_, 0);
lean_dec(v_unused_584_);
v___x_577_ = v___x_570_;
v_isShared_578_ = v_isSharedCheck_583_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_rewriteFires_575_);
lean_inc(v_diag_574_);
lean_inc(v_postponed_573_);
lean_inc(v_zetaDeltaFVarIds_572_);
lean_inc(v_cache_571_);
lean_dec(v___x_570_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_583_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v_mctx_569_);
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_mctx_569_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_cache_571_);
lean_ctor_set(v_reuseFailAlloc_582_, 2, v_zetaDeltaFVarIds_572_);
lean_ctor_set(v_reuseFailAlloc_582_, 3, v_postponed_573_);
lean_ctor_set(v_reuseFailAlloc_582_, 4, v_diag_574_);
lean_ctor_set(v_reuseFailAlloc_582_, 5, v_rewriteFires_575_);
v___x_580_ = v_reuseFailAlloc_582_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_581_; 
v___x_581_ = lean_st_ref_put(v___y_530_, v___x_580_);
v_a_562_ = v_fst_568_;
goto v___jp_561_;
}
}
}
v___jp_585_:
{
lean_object* v_snd_587_; lean_object* v_fst_588_; lean_object* v_mctx_589_; uint8_t v___x_590_; 
v_snd_587_ = lean_ctor_get(v___y_586_, 1);
lean_inc(v_snd_587_);
v_fst_588_ = lean_ctor_get(v___y_586_, 0);
lean_inc(v_fst_588_);
lean_dec_ref(v___y_586_);
v_mctx_589_ = lean_ctor_get(v_snd_587_, 1);
lean_inc_ref(v_mctx_589_);
lean_dec(v_snd_587_);
v___x_590_ = lean_unbox(v_fst_588_);
lean_dec(v_fst_588_);
v_fst_568_ = v___x_590_;
v_mctx_569_ = v_mctx_589_;
goto v___jp_567_;
}
v___jp_591_:
{
lean_object* v_mctx_594_; lean_object* v___x_595_; lean_object* v_cache_596_; lean_object* v_zetaDeltaFVarIds_597_; lean_object* v_postponed_598_; lean_object* v_diag_599_; lean_object* v_rewriteFires_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_608_; 
v_mctx_594_ = lean_ctor_get(v_snd_593_, 1);
lean_inc_ref(v_mctx_594_);
lean_dec_ref(v_snd_593_);
v___x_595_ = lean_st_ref_take(v___y_530_);
v_cache_596_ = lean_ctor_get(v___x_595_, 1);
v_zetaDeltaFVarIds_597_ = lean_ctor_get(v___x_595_, 2);
v_postponed_598_ = lean_ctor_get(v___x_595_, 3);
v_diag_599_ = lean_ctor_get(v___x_595_, 4);
v_rewriteFires_600_ = lean_ctor_get(v___x_595_, 5);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_608_ == 0)
{
lean_object* v_unused_609_; 
v_unused_609_ = lean_ctor_get(v___x_595_, 0);
lean_dec(v_unused_609_);
v___x_602_ = v___x_595_;
v_isShared_603_ = v_isSharedCheck_608_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_rewriteFires_600_);
lean_inc(v_diag_599_);
lean_inc(v_postponed_598_);
lean_inc(v_zetaDeltaFVarIds_597_);
lean_inc(v_cache_596_);
lean_dec(v___x_595_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_608_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
lean_ctor_set(v___x_602_, 0, v_mctx_594_);
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_mctx_594_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_cache_596_);
lean_ctor_set(v_reuseFailAlloc_607_, 2, v_zetaDeltaFVarIds_597_);
lean_ctor_set(v_reuseFailAlloc_607_, 3, v_postponed_598_);
lean_ctor_set(v_reuseFailAlloc_607_, 4, v_diag_599_);
lean_ctor_set(v_reuseFailAlloc_607_, 5, v_rewriteFires_600_);
v___x_605_ = v_reuseFailAlloc_607_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
lean_object* v___x_606_; 
v___x_606_ = lean_st_ref_put(v___y_530_, v___x_605_);
v_a_562_ = v_fst_592_;
goto v___jp_561_;
}
}
}
v___jp_610_:
{
lean_object* v_fst_612_; lean_object* v_snd_613_; uint8_t v___x_614_; 
v_fst_612_ = lean_ctor_get(v___y_611_, 0);
lean_inc(v_fst_612_);
v_snd_613_ = lean_ctor_get(v___y_611_, 1);
lean_inc(v_snd_613_);
lean_dec_ref(v___y_611_);
v___x_614_ = lean_unbox(v_fst_612_);
lean_dec(v_fst_612_);
v_fst_592_ = v___x_614_;
v_snd_593_ = v_snd_613_;
goto v___jp_591_;
}
v___jp_615_:
{
lean_object* v___x_618_; lean_object* v_cache_619_; lean_object* v_zetaDeltaFVarIds_620_; lean_object* v_postponed_621_; lean_object* v_diag_622_; lean_object* v_rewriteFires_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_631_; 
v___x_618_ = lean_st_ref_take(v___y_530_);
v_cache_619_ = lean_ctor_get(v___x_618_, 1);
v_zetaDeltaFVarIds_620_ = lean_ctor_get(v___x_618_, 2);
v_postponed_621_ = lean_ctor_get(v___x_618_, 3);
v_diag_622_ = lean_ctor_get(v___x_618_, 4);
v_rewriteFires_623_ = lean_ctor_get(v___x_618_, 5);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_631_ == 0)
{
lean_object* v_unused_632_; 
v_unused_632_ = lean_ctor_get(v___x_618_, 0);
lean_dec(v_unused_632_);
v___x_625_ = v___x_618_;
v_isShared_626_ = v_isSharedCheck_631_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_rewriteFires_623_);
lean_inc(v_diag_622_);
lean_inc(v_postponed_621_);
lean_inc(v_zetaDeltaFVarIds_620_);
lean_inc(v_cache_619_);
lean_dec(v___x_618_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_631_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 0, v_mctx_617_);
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_mctx_617_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_cache_619_);
lean_ctor_set(v_reuseFailAlloc_630_, 2, v_zetaDeltaFVarIds_620_);
lean_ctor_set(v_reuseFailAlloc_630_, 3, v_postponed_621_);
lean_ctor_set(v_reuseFailAlloc_630_, 4, v_diag_622_);
lean_ctor_set(v_reuseFailAlloc_630_, 5, v_rewriteFires_623_);
v___x_628_ = v_reuseFailAlloc_630_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_629_; 
v___x_629_ = lean_st_ref_put(v___y_530_, v___x_628_);
v_a_562_ = v_fst_616_;
goto v___jp_561_;
}
}
}
v___jp_633_:
{
lean_object* v_snd_635_; lean_object* v_fst_636_; lean_object* v_mctx_637_; uint8_t v___x_638_; 
v_snd_635_ = lean_ctor_get(v___y_634_, 1);
lean_inc(v_snd_635_);
v_fst_636_ = lean_ctor_get(v___y_634_, 0);
lean_inc(v_fst_636_);
lean_dec_ref(v___y_634_);
v_mctx_637_ = lean_ctor_get(v_snd_635_, 1);
lean_inc_ref(v_mctx_637_);
lean_dec(v_snd_635_);
v___x_638_ = lean_unbox(v_fst_636_);
lean_dec(v_fst_636_);
v_fst_616_ = v___x_638_;
v_mctx_617_ = v_mctx_637_;
goto v___jp_615_;
}
}
}
v___jp_541_:
{
lean_object* v___x_544_; 
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 1, v_a_542_);
lean_ctor_set(v___x_538_, 0, v___x_540_);
v___x_544_ = v___x_538_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_540_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v_a_542_);
v___x_544_ = v_reuseFailAlloc_548_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
size_t v___x_545_; size_t v___x_546_; lean_object* v___x_547_; 
v___x_545_ = ((size_t)1ULL);
v___x_546_ = lean_usize_add(v_i_527_, v___x_545_);
v___x_547_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_forbidden_523_, v_ignoreLetDecls_524_, v_as_525_, v_sz_526_, v___x_546_, v___x_544_, v___y_530_);
return v___x_547_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___boxed(lean_object* v_forbidden_699_, lean_object* v_ignoreLetDecls_700_, lean_object* v_as_701_, lean_object* v_sz_702_, lean_object* v_i_703_, lean_object* v_b_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_710_; size_t v_sz_boxed_711_; size_t v_i_boxed_712_; lean_object* v_res_713_; 
v_ignoreLetDecls_boxed_710_ = lean_unbox(v_ignoreLetDecls_700_);
v_sz_boxed_711_ = lean_unbox_usize(v_sz_702_);
lean_dec(v_sz_702_);
v_i_boxed_712_ = lean_unbox_usize(v_i_703_);
lean_dec(v_i_703_);
v_res_713_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(v_forbidden_699_, v_ignoreLetDecls_boxed_710_, v_as_701_, v_sz_boxed_711_, v_i_boxed_712_, v_b_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
lean_dec(v___y_706_);
lean_dec_ref(v___y_705_);
lean_dec_ref(v_as_701_);
lean_dec(v_forbidden_699_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_forbidden_714_, uint8_t v_ignoreLetDecls_715_, lean_object* v_as_716_, size_t v_sz_717_, size_t v_i_718_, lean_object* v_b_719_, lean_object* v___y_720_){
_start:
{
uint8_t v___x_722_; 
v___x_722_ = lean_usize_dec_lt(v_i_718_, v_sz_717_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; 
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v_b_719_);
return v___x_723_;
}
else
{
lean_object* v_snd_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_885_; 
v_snd_724_ = lean_ctor_get(v_b_719_, 1);
v_isSharedCheck_885_ = !lean_is_exclusive(v_b_719_);
if (v_isSharedCheck_885_ == 0)
{
lean_object* v_unused_886_; 
v_unused_886_ = lean_ctor_get(v_b_719_, 0);
lean_dec(v_unused_886_);
v___x_726_ = v_b_719_;
v_isShared_727_ = v_isSharedCheck_885_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_snd_724_);
lean_dec(v_b_719_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_885_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_728_; lean_object* v_a_730_; lean_object* v_a_737_; 
v___x_728_ = lean_box(0);
v_a_737_ = lean_array_uget_borrowed(v_as_716_, v_i_718_);
if (lean_obj_tag(v_a_737_) == 0)
{
v_a_730_ = v_snd_724_;
goto v___jp_729_;
}
else
{
lean_object* v_val_738_; lean_object* v_fst_739_; lean_object* v_snd_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_884_; 
v_val_738_ = lean_ctor_get(v_a_737_, 0);
v_fst_739_ = lean_ctor_get(v_snd_724_, 0);
v_snd_740_ = lean_ctor_get(v_snd_724_, 1);
v_isSharedCheck_884_ = !lean_is_exclusive(v_snd_724_);
if (v_isSharedCheck_884_ == 0)
{
v___x_742_ = v_snd_724_;
v_isShared_743_ = v_isSharedCheck_884_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_snd_740_);
lean_inc(v_fst_739_);
lean_dec(v_snd_724_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_884_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_748_; uint8_t v_a_750_; uint8_t v_fst_756_; lean_object* v_mctx_757_; lean_object* v___y_774_; uint8_t v_fst_780_; lean_object* v_snd_781_; lean_object* v___y_799_; uint8_t v_fst_804_; lean_object* v_mctx_805_; lean_object* v___y_822_; uint8_t v___x_827_; 
v___x_748_ = l_Lean_LocalDecl_fvarId(v_val_738_);
v___x_827_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_748_, v_forbidden_714_);
if (v___x_827_ == 0)
{
uint8_t v___x_828_; 
v___x_828_ = l_Lean_LocalDecl_isAuxDecl(v_val_738_);
if (v___x_828_ == 0)
{
uint8_t v___x_829_; uint8_t v___x_830_; 
v___x_829_ = l_Lean_LocalDecl_binderInfo(v_val_738_);
v___x_830_ = l_Lean_BinderInfo_isInstImplicit(v___x_829_);
if (v___x_830_ == 0)
{
lean_object* v___f_831_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v_snd_835_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; uint8_t v___y_850_; 
lean_inc(v_fst_739_);
v___f_831_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_831_, 0, v_fst_739_);
if (v_ignoreLetDecls_715_ == 0)
{
lean_del_object(v___x_742_);
v___y_850_ = v___x_827_;
goto v___jp_849_;
}
else
{
uint8_t v___x_882_; 
v___x_882_ = l_Lean_LocalDecl_isLet(v_val_738_, v___x_827_);
if (v___x_882_ == 0)
{
lean_del_object(v___x_742_);
v___y_850_ = v___x_882_;
goto v___jp_849_;
}
else
{
lean_dec_ref(v___f_831_);
lean_dec(v___x_748_);
goto v___jp_744_;
}
}
v___jp_832_:
{
uint8_t v___x_836_; 
v___x_836_ = l_Lean_Expr_hasFVar(v___y_833_);
if (v___x_836_ == 0)
{
uint8_t v___x_837_; 
v___x_837_ = l_Lean_Expr_hasMVar(v___y_833_);
if (v___x_837_ == 0)
{
lean_dec_ref(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec_ref(v___f_831_);
v_fst_780_ = v___x_837_;
v_snd_781_ = v_snd_835_;
goto v___jp_779_;
}
else
{
lean_object* v___x_838_; 
v___x_838_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_831_, v___y_834_, v___y_833_, v_snd_835_);
v___y_799_ = v___x_838_;
goto v___jp_798_;
}
}
else
{
lean_object* v___x_839_; 
v___x_839_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_831_, v___y_834_, v___y_833_, v_snd_835_);
v___y_799_ = v___x_839_;
goto v___jp_798_;
}
}
v___jp_840_:
{
lean_object* v_fst_844_; uint8_t v___x_845_; 
v_fst_844_ = lean_ctor_get(v___y_843_, 0);
v___x_845_ = lean_unbox(v_fst_844_);
if (v___x_845_ == 0)
{
lean_object* v_snd_846_; 
v_snd_846_ = lean_ctor_get(v___y_843_, 1);
lean_inc(v_snd_846_);
lean_dec_ref(v___y_843_);
v___y_833_ = v___y_841_;
v___y_834_ = v___y_842_;
v_snd_835_ = v_snd_846_;
goto v___jp_832_;
}
else
{
lean_object* v_snd_847_; uint8_t v___x_848_; 
lean_inc(v_fst_844_);
lean_dec_ref(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec_ref(v___f_831_);
v_snd_847_ = lean_ctor_get(v___y_843_, 1);
lean_inc(v_snd_847_);
lean_dec_ref(v___y_843_);
v___x_848_ = lean_unbox(v_fst_844_);
lean_dec(v_fst_844_);
v_fst_780_ = v___x_848_;
v_snd_781_ = v_snd_847_;
goto v___jp_779_;
}
}
v___jp_849_:
{
lean_object* v___x_851_; lean_object* v___f_852_; 
v___x_851_ = lean_box(v___y_850_);
v___f_852_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_852_, 0, v___x_851_);
if (lean_obj_tag(v_val_738_) == 0)
{
lean_object* v_type_853_; lean_object* v___x_854_; lean_object* v_mctx_855_; lean_object* v___x_856_; lean_object* v___x_857_; uint8_t v___x_858_; 
v_type_853_ = lean_ctor_get(v_val_738_, 3);
v___x_854_ = lean_st_ref_get(v___y_720_);
v_mctx_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc_ref_n(v_mctx_855_, 2);
lean_dec(v___x_854_);
v___x_856_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
lean_ctor_set(v___x_857_, 1, v_mctx_855_);
v___x_858_ = l_Lean_Expr_hasFVar(v_type_853_);
if (v___x_858_ == 0)
{
uint8_t v___x_859_; 
v___x_859_ = l_Lean_Expr_hasMVar(v_type_853_);
if (v___x_859_ == 0)
{
lean_dec_ref_known(v___x_857_, 2);
lean_dec_ref(v___f_852_);
lean_dec_ref(v___f_831_);
v_fst_804_ = v___x_859_;
v_mctx_805_ = v_mctx_855_;
goto v___jp_803_;
}
else
{
lean_object* v___x_860_; 
lean_dec_ref(v_mctx_855_);
lean_inc_ref(v_type_853_);
v___x_860_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_831_, v___f_852_, v_type_853_, v___x_857_);
v___y_822_ = v___x_860_;
goto v___jp_821_;
}
}
else
{
lean_object* v___x_861_; 
lean_dec_ref(v_mctx_855_);
lean_inc_ref(v_type_853_);
v___x_861_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_831_, v___f_852_, v_type_853_, v___x_857_);
v___y_822_ = v___x_861_;
goto v___jp_821_;
}
}
else
{
uint8_t v_nondep_862_; 
v_nondep_862_ = lean_ctor_get_uint8(v_val_738_, sizeof(void*)*5);
if (v_nondep_862_ == 0)
{
lean_object* v_type_863_; lean_object* v_value_864_; lean_object* v___x_865_; lean_object* v_mctx_866_; lean_object* v___x_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v_type_863_ = lean_ctor_get(v_val_738_, 3);
v_value_864_ = lean_ctor_get(v_val_738_, 4);
v___x_865_ = lean_st_ref_get(v___y_720_);
v_mctx_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc_ref(v_mctx_866_);
lean_dec(v___x_865_);
v___x_867_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
lean_ctor_set(v___x_868_, 1, v_mctx_866_);
v___x_869_ = l_Lean_Expr_hasFVar(v_type_863_);
if (v___x_869_ == 0)
{
uint8_t v___x_870_; 
v___x_870_ = l_Lean_Expr_hasMVar(v_type_863_);
if (v___x_870_ == 0)
{
lean_inc_ref(v_value_864_);
v___y_833_ = v_value_864_;
v___y_834_ = v___f_852_;
v_snd_835_ = v___x_868_;
goto v___jp_832_;
}
else
{
lean_object* v___x_871_; 
lean_inc_ref(v_type_863_);
lean_inc_ref(v___f_852_);
lean_inc_ref(v___f_831_);
v___x_871_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_831_, v___f_852_, v_type_863_, v___x_868_);
lean_inc_ref(v_value_864_);
v___y_841_ = v_value_864_;
v___y_842_ = v___f_852_;
v___y_843_ = v___x_871_;
goto v___jp_840_;
}
}
else
{
lean_object* v___x_872_; 
lean_inc_ref(v_type_863_);
lean_inc_ref(v___f_852_);
lean_inc_ref(v___f_831_);
v___x_872_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_831_, v___f_852_, v_type_863_, v___x_868_);
lean_inc_ref(v_value_864_);
v___y_841_ = v_value_864_;
v___y_842_ = v___f_852_;
v___y_843_ = v___x_872_;
goto v___jp_840_;
}
}
else
{
lean_object* v_type_873_; lean_object* v___x_874_; lean_object* v_mctx_875_; lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v_type_873_ = lean_ctor_get(v_val_738_, 3);
v___x_874_ = lean_st_ref_get(v___y_720_);
v_mctx_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc_ref_n(v_mctx_875_, 2);
lean_dec(v___x_874_);
v___x_876_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_876_);
lean_ctor_set(v___x_877_, 1, v_mctx_875_);
v___x_878_ = l_Lean_Expr_hasFVar(v_type_873_);
if (v___x_878_ == 0)
{
uint8_t v___x_879_; 
v___x_879_ = l_Lean_Expr_hasMVar(v_type_873_);
if (v___x_879_ == 0)
{
lean_dec_ref_known(v___x_877_, 2);
lean_dec_ref(v___f_852_);
lean_dec_ref(v___f_831_);
v_fst_756_ = v___x_879_;
v_mctx_757_ = v_mctx_875_;
goto v___jp_755_;
}
else
{
lean_object* v___x_880_; 
lean_dec_ref(v_mctx_875_);
lean_inc_ref(v_type_873_);
v___x_880_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_831_, v___f_852_, v_type_873_, v___x_877_);
v___y_774_ = v___x_880_;
goto v___jp_773_;
}
}
else
{
lean_object* v___x_881_; 
lean_dec_ref(v_mctx_875_);
lean_inc_ref(v_type_873_);
v___x_881_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_831_, v___f_852_, v_type_873_, v___x_877_);
v___y_774_ = v___x_881_;
goto v___jp_773_;
}
}
}
}
}
else
{
lean_dec(v___x_748_);
goto v___jp_744_;
}
}
else
{
lean_dec(v___x_748_);
goto v___jp_744_;
}
}
else
{
lean_object* v___x_883_; 
lean_dec(v___x_748_);
lean_del_object(v___x_742_);
v___x_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_883_, 0, v_fst_739_);
lean_ctor_set(v___x_883_, 1, v_snd_740_);
v_a_730_ = v___x_883_;
goto v___jp_729_;
}
v___jp_744_:
{
lean_object* v___x_746_; 
if (v_isShared_743_ == 0)
{
v___x_746_ = v___x_742_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_fst_739_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_snd_740_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
v_a_730_ = v___x_746_;
goto v___jp_729_;
}
}
v___jp_749_:
{
if (v_a_750_ == 0)
{
lean_object* v___x_751_; 
lean_dec(v___x_748_);
v___x_751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_751_, 0, v_fst_739_);
lean_ctor_set(v___x_751_, 1, v_snd_740_);
v_a_730_ = v___x_751_;
goto v___jp_729_;
}
else
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
lean_inc(v___x_748_);
v___x_752_ = l_Lean_FVarIdSet_insert(v_snd_740_, v___x_748_);
v___x_753_ = l_Lean_FVarIdSet_insert(v_fst_739_, v___x_748_);
v___x_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
lean_ctor_set(v___x_754_, 1, v___x_752_);
v_a_730_ = v___x_754_;
goto v___jp_729_;
}
}
v___jp_755_:
{
lean_object* v___x_758_; lean_object* v_cache_759_; lean_object* v_zetaDeltaFVarIds_760_; lean_object* v_postponed_761_; lean_object* v_diag_762_; lean_object* v_rewriteFires_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_771_; 
v___x_758_ = lean_st_ref_take(v___y_720_);
v_cache_759_ = lean_ctor_get(v___x_758_, 1);
v_zetaDeltaFVarIds_760_ = lean_ctor_get(v___x_758_, 2);
v_postponed_761_ = lean_ctor_get(v___x_758_, 3);
v_diag_762_ = lean_ctor_get(v___x_758_, 4);
v_rewriteFires_763_ = lean_ctor_get(v___x_758_, 5);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_771_ == 0)
{
lean_object* v_unused_772_; 
v_unused_772_ = lean_ctor_get(v___x_758_, 0);
lean_dec(v_unused_772_);
v___x_765_ = v___x_758_;
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_rewriteFires_763_);
lean_inc(v_diag_762_);
lean_inc(v_postponed_761_);
lean_inc(v_zetaDeltaFVarIds_760_);
lean_inc(v_cache_759_);
lean_dec(v___x_758_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 0, v_mctx_757_);
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_mctx_757_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v_cache_759_);
lean_ctor_set(v_reuseFailAlloc_770_, 2, v_zetaDeltaFVarIds_760_);
lean_ctor_set(v_reuseFailAlloc_770_, 3, v_postponed_761_);
lean_ctor_set(v_reuseFailAlloc_770_, 4, v_diag_762_);
lean_ctor_set(v_reuseFailAlloc_770_, 5, v_rewriteFires_763_);
v___x_768_ = v_reuseFailAlloc_770_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
lean_object* v___x_769_; 
v___x_769_ = lean_st_ref_put(v___y_720_, v___x_768_);
v_a_750_ = v_fst_756_;
goto v___jp_749_;
}
}
}
v___jp_773_:
{
lean_object* v_snd_775_; lean_object* v_fst_776_; lean_object* v_mctx_777_; uint8_t v___x_778_; 
v_snd_775_ = lean_ctor_get(v___y_774_, 1);
lean_inc(v_snd_775_);
v_fst_776_ = lean_ctor_get(v___y_774_, 0);
lean_inc(v_fst_776_);
lean_dec_ref(v___y_774_);
v_mctx_777_ = lean_ctor_get(v_snd_775_, 1);
lean_inc_ref(v_mctx_777_);
lean_dec(v_snd_775_);
v___x_778_ = lean_unbox(v_fst_776_);
lean_dec(v_fst_776_);
v_fst_756_ = v___x_778_;
v_mctx_757_ = v_mctx_777_;
goto v___jp_755_;
}
v___jp_779_:
{
lean_object* v_mctx_782_; lean_object* v___x_783_; lean_object* v_cache_784_; lean_object* v_zetaDeltaFVarIds_785_; lean_object* v_postponed_786_; lean_object* v_diag_787_; lean_object* v_rewriteFires_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_796_; 
v_mctx_782_ = lean_ctor_get(v_snd_781_, 1);
lean_inc_ref(v_mctx_782_);
lean_dec_ref(v_snd_781_);
v___x_783_ = lean_st_ref_take(v___y_720_);
v_cache_784_ = lean_ctor_get(v___x_783_, 1);
v_zetaDeltaFVarIds_785_ = lean_ctor_get(v___x_783_, 2);
v_postponed_786_ = lean_ctor_get(v___x_783_, 3);
v_diag_787_ = lean_ctor_get(v___x_783_, 4);
v_rewriteFires_788_ = lean_ctor_get(v___x_783_, 5);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_796_ == 0)
{
lean_object* v_unused_797_; 
v_unused_797_ = lean_ctor_get(v___x_783_, 0);
lean_dec(v_unused_797_);
v___x_790_ = v___x_783_;
v_isShared_791_ = v_isSharedCheck_796_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_rewriteFires_788_);
lean_inc(v_diag_787_);
lean_inc(v_postponed_786_);
lean_inc(v_zetaDeltaFVarIds_785_);
lean_inc(v_cache_784_);
lean_dec(v___x_783_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_796_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 0, v_mctx_782_);
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_mctx_782_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_cache_784_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v_zetaDeltaFVarIds_785_);
lean_ctor_set(v_reuseFailAlloc_795_, 3, v_postponed_786_);
lean_ctor_set(v_reuseFailAlloc_795_, 4, v_diag_787_);
lean_ctor_set(v_reuseFailAlloc_795_, 5, v_rewriteFires_788_);
v___x_793_ = v_reuseFailAlloc_795_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_794_; 
v___x_794_ = lean_st_ref_put(v___y_720_, v___x_793_);
v_a_750_ = v_fst_780_;
goto v___jp_749_;
}
}
}
v___jp_798_:
{
lean_object* v_fst_800_; lean_object* v_snd_801_; uint8_t v___x_802_; 
v_fst_800_ = lean_ctor_get(v___y_799_, 0);
lean_inc(v_fst_800_);
v_snd_801_ = lean_ctor_get(v___y_799_, 1);
lean_inc(v_snd_801_);
lean_dec_ref(v___y_799_);
v___x_802_ = lean_unbox(v_fst_800_);
lean_dec(v_fst_800_);
v_fst_780_ = v___x_802_;
v_snd_781_ = v_snd_801_;
goto v___jp_779_;
}
v___jp_803_:
{
lean_object* v___x_806_; lean_object* v_cache_807_; lean_object* v_zetaDeltaFVarIds_808_; lean_object* v_postponed_809_; lean_object* v_diag_810_; lean_object* v_rewriteFires_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_819_; 
v___x_806_ = lean_st_ref_take(v___y_720_);
v_cache_807_ = lean_ctor_get(v___x_806_, 1);
v_zetaDeltaFVarIds_808_ = lean_ctor_get(v___x_806_, 2);
v_postponed_809_ = lean_ctor_get(v___x_806_, 3);
v_diag_810_ = lean_ctor_get(v___x_806_, 4);
v_rewriteFires_811_ = lean_ctor_get(v___x_806_, 5);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_819_ == 0)
{
lean_object* v_unused_820_; 
v_unused_820_ = lean_ctor_get(v___x_806_, 0);
lean_dec(v_unused_820_);
v___x_813_ = v___x_806_;
v_isShared_814_ = v_isSharedCheck_819_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_rewriteFires_811_);
lean_inc(v_diag_810_);
lean_inc(v_postponed_809_);
lean_inc(v_zetaDeltaFVarIds_808_);
lean_inc(v_cache_807_);
lean_dec(v___x_806_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_819_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v_mctx_805_);
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_mctx_805_);
lean_ctor_set(v_reuseFailAlloc_818_, 1, v_cache_807_);
lean_ctor_set(v_reuseFailAlloc_818_, 2, v_zetaDeltaFVarIds_808_);
lean_ctor_set(v_reuseFailAlloc_818_, 3, v_postponed_809_);
lean_ctor_set(v_reuseFailAlloc_818_, 4, v_diag_810_);
lean_ctor_set(v_reuseFailAlloc_818_, 5, v_rewriteFires_811_);
v___x_816_ = v_reuseFailAlloc_818_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
lean_object* v___x_817_; 
v___x_817_ = lean_st_ref_put(v___y_720_, v___x_816_);
v_a_750_ = v_fst_804_;
goto v___jp_749_;
}
}
}
v___jp_821_:
{
lean_object* v_snd_823_; lean_object* v_fst_824_; lean_object* v_mctx_825_; uint8_t v___x_826_; 
v_snd_823_ = lean_ctor_get(v___y_822_, 1);
lean_inc(v_snd_823_);
v_fst_824_ = lean_ctor_get(v___y_822_, 0);
lean_inc(v_fst_824_);
lean_dec_ref(v___y_822_);
v_mctx_825_ = lean_ctor_get(v_snd_823_, 1);
lean_inc_ref(v_mctx_825_);
lean_dec(v_snd_823_);
v___x_826_ = lean_unbox(v_fst_824_);
lean_dec(v_fst_824_);
v_fst_804_ = v___x_826_;
v_mctx_805_ = v_mctx_825_;
goto v___jp_803_;
}
}
}
v___jp_729_:
{
lean_object* v___x_732_; 
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 1, v_a_730_);
lean_ctor_set(v___x_726_, 0, v___x_728_);
v___x_732_ = v___x_726_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_728_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_a_730_);
v___x_732_ = v_reuseFailAlloc_736_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
size_t v___x_733_; size_t v___x_734_; 
v___x_733_ = ((size_t)1ULL);
v___x_734_ = lean_usize_add(v_i_718_, v___x_733_);
v_i_718_ = v___x_734_;
v_b_719_ = v___x_732_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_forbidden_887_, lean_object* v_ignoreLetDecls_888_, lean_object* v_as_889_, lean_object* v_sz_890_, lean_object* v_i_891_, lean_object* v_b_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_895_; size_t v_sz_boxed_896_; size_t v_i_boxed_897_; lean_object* v_res_898_; 
v_ignoreLetDecls_boxed_895_ = lean_unbox(v_ignoreLetDecls_888_);
v_sz_boxed_896_ = lean_unbox_usize(v_sz_890_);
lean_dec(v_sz_890_);
v_i_boxed_897_ = lean_unbox_usize(v_i_891_);
lean_dec(v_i_891_);
v_res_898_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_forbidden_887_, v_ignoreLetDecls_boxed_895_, v_as_889_, v_sz_boxed_896_, v_i_boxed_897_, v_b_892_, v___y_893_);
lean_dec(v___y_893_);
lean_dec_ref(v_as_889_);
lean_dec(v_forbidden_887_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(lean_object* v_forbidden_899_, uint8_t v_ignoreLetDecls_900_, lean_object* v_as_901_, size_t v_sz_902_, size_t v_i_903_, lean_object* v_b_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
uint8_t v___x_910_; 
v___x_910_ = lean_usize_dec_lt(v_i_903_, v_sz_902_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; 
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v_b_904_);
return v___x_911_;
}
else
{
lean_object* v_snd_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_1073_; 
v_snd_912_ = lean_ctor_get(v_b_904_, 1);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_b_904_);
if (v_isSharedCheck_1073_ == 0)
{
lean_object* v_unused_1074_; 
v_unused_1074_ = lean_ctor_get(v_b_904_, 0);
lean_dec(v_unused_1074_);
v___x_914_ = v_b_904_;
v_isShared_915_ = v_isSharedCheck_1073_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_snd_912_);
lean_dec(v_b_904_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_1073_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_916_; lean_object* v_a_918_; lean_object* v_a_925_; 
v___x_916_ = lean_box(0);
v_a_925_ = lean_array_uget_borrowed(v_as_901_, v_i_903_);
if (lean_obj_tag(v_a_925_) == 0)
{
v_a_918_ = v_snd_912_;
goto v___jp_917_;
}
else
{
lean_object* v_val_926_; lean_object* v_fst_927_; lean_object* v_snd_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_1072_; 
v_val_926_ = lean_ctor_get(v_a_925_, 0);
v_fst_927_ = lean_ctor_get(v_snd_912_, 0);
v_snd_928_ = lean_ctor_get(v_snd_912_, 1);
v_isSharedCheck_1072_ = !lean_is_exclusive(v_snd_912_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_930_ = v_snd_912_;
v_isShared_931_ = v_isSharedCheck_1072_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_snd_928_);
lean_inc(v_fst_927_);
lean_dec(v_snd_912_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_1072_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_936_; uint8_t v_a_938_; uint8_t v_fst_944_; lean_object* v_mctx_945_; lean_object* v___y_962_; uint8_t v_fst_968_; lean_object* v_snd_969_; lean_object* v___y_987_; uint8_t v_fst_992_; lean_object* v_mctx_993_; lean_object* v___y_1010_; uint8_t v___x_1015_; 
v___x_936_ = l_Lean_LocalDecl_fvarId(v_val_926_);
v___x_1015_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit_spec__0___redArg(v___x_936_, v_forbidden_899_);
if (v___x_1015_ == 0)
{
uint8_t v___x_1016_; 
v___x_1016_ = l_Lean_LocalDecl_isAuxDecl(v_val_926_);
if (v___x_1016_ == 0)
{
uint8_t v___x_1017_; uint8_t v___x_1018_; 
v___x_1017_ = l_Lean_LocalDecl_binderInfo(v_val_926_);
v___x_1018_ = l_Lean_BinderInfo_isInstImplicit(v___x_1017_);
if (v___x_1018_ == 0)
{
lean_object* v___f_1019_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v_snd_1023_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; uint8_t v___y_1038_; 
lean_inc(v_fst_927_);
v___f_1019_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1019_, 0, v_fst_927_);
if (v_ignoreLetDecls_900_ == 0)
{
lean_del_object(v___x_930_);
v___y_1038_ = v___x_1015_;
goto v___jp_1037_;
}
else
{
uint8_t v___x_1070_; 
v___x_1070_ = l_Lean_LocalDecl_isLet(v_val_926_, v___x_1015_);
if (v___x_1070_ == 0)
{
lean_del_object(v___x_930_);
v___y_1038_ = v___x_1070_;
goto v___jp_1037_;
}
else
{
lean_dec_ref(v___f_1019_);
lean_dec(v___x_936_);
goto v___jp_932_;
}
}
v___jp_1020_:
{
uint8_t v___x_1024_; 
v___x_1024_ = l_Lean_Expr_hasFVar(v___y_1022_);
if (v___x_1024_ == 0)
{
uint8_t v___x_1025_; 
v___x_1025_ = l_Lean_Expr_hasMVar(v___y_1022_);
if (v___x_1025_ == 0)
{
lean_dec_ref(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec_ref(v___f_1019_);
v_fst_968_ = v___x_1025_;
v_snd_969_ = v_snd_1023_;
goto v___jp_967_;
}
else
{
lean_object* v___x_1026_; 
v___x_1026_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1019_, v___y_1021_, v___y_1022_, v_snd_1023_);
v___y_987_ = v___x_1026_;
goto v___jp_986_;
}
}
else
{
lean_object* v___x_1027_; 
v___x_1027_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1019_, v___y_1021_, v___y_1022_, v_snd_1023_);
v___y_987_ = v___x_1027_;
goto v___jp_986_;
}
}
v___jp_1028_:
{
lean_object* v_fst_1032_; uint8_t v___x_1033_; 
v_fst_1032_ = lean_ctor_get(v___y_1031_, 0);
v___x_1033_ = lean_unbox(v_fst_1032_);
if (v___x_1033_ == 0)
{
lean_object* v_snd_1034_; 
v_snd_1034_ = lean_ctor_get(v___y_1031_, 1);
lean_inc(v_snd_1034_);
lean_dec_ref(v___y_1031_);
v___y_1021_ = v___y_1029_;
v___y_1022_ = v___y_1030_;
v_snd_1023_ = v_snd_1034_;
goto v___jp_1020_;
}
else
{
lean_object* v_snd_1035_; uint8_t v___x_1036_; 
lean_inc(v_fst_1032_);
lean_dec_ref(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec_ref(v___f_1019_);
v_snd_1035_ = lean_ctor_get(v___y_1031_, 1);
lean_inc(v_snd_1035_);
lean_dec_ref(v___y_1031_);
v___x_1036_ = lean_unbox(v_fst_1032_);
lean_dec(v_fst_1032_);
v_fst_968_ = v___x_1036_;
v_snd_969_ = v_snd_1035_;
goto v___jp_967_;
}
}
v___jp_1037_:
{
lean_object* v___x_1039_; lean_object* v___f_1040_; 
v___x_1039_ = lean_box(v___y_1038_);
v___f_1040_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1040_, 0, v___x_1039_);
if (lean_obj_tag(v_val_926_) == 0)
{
lean_object* v_type_1041_; lean_object* v___x_1042_; lean_object* v_mctx_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; uint8_t v___x_1046_; 
v_type_1041_ = lean_ctor_get(v_val_926_, 3);
v___x_1042_ = lean_st_ref_get(v___y_906_);
v_mctx_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc_ref_n(v_mctx_1043_, 2);
lean_dec(v___x_1042_);
v___x_1044_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
lean_ctor_set(v___x_1045_, 1, v_mctx_1043_);
v___x_1046_ = l_Lean_Expr_hasFVar(v_type_1041_);
if (v___x_1046_ == 0)
{
uint8_t v___x_1047_; 
v___x_1047_ = l_Lean_Expr_hasMVar(v_type_1041_);
if (v___x_1047_ == 0)
{
lean_dec_ref_known(v___x_1045_, 2);
lean_dec_ref(v___f_1040_);
lean_dec_ref(v___f_1019_);
v_fst_992_ = v___x_1047_;
v_mctx_993_ = v_mctx_1043_;
goto v___jp_991_;
}
else
{
lean_object* v___x_1048_; 
lean_dec_ref(v_mctx_1043_);
lean_inc_ref(v_type_1041_);
v___x_1048_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1019_, v___f_1040_, v_type_1041_, v___x_1045_);
v___y_1010_ = v___x_1048_;
goto v___jp_1009_;
}
}
else
{
lean_object* v___x_1049_; 
lean_dec_ref(v_mctx_1043_);
lean_inc_ref(v_type_1041_);
v___x_1049_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1019_, v___f_1040_, v_type_1041_, v___x_1045_);
v___y_1010_ = v___x_1049_;
goto v___jp_1009_;
}
}
else
{
uint8_t v_nondep_1050_; 
v_nondep_1050_ = lean_ctor_get_uint8(v_val_926_, sizeof(void*)*5);
if (v_nondep_1050_ == 0)
{
lean_object* v_type_1051_; lean_object* v_value_1052_; lean_object* v___x_1053_; lean_object* v_mctx_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; uint8_t v___x_1057_; 
v_type_1051_ = lean_ctor_get(v_val_926_, 3);
v_value_1052_ = lean_ctor_get(v_val_926_, 4);
v___x_1053_ = lean_st_ref_get(v___y_906_);
v_mctx_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc_ref(v_mctx_1054_);
lean_dec(v___x_1053_);
v___x_1055_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1055_);
lean_ctor_set(v___x_1056_, 1, v_mctx_1054_);
v___x_1057_ = l_Lean_Expr_hasFVar(v_type_1051_);
if (v___x_1057_ == 0)
{
uint8_t v___x_1058_; 
v___x_1058_ = l_Lean_Expr_hasMVar(v_type_1051_);
if (v___x_1058_ == 0)
{
lean_inc_ref(v_value_1052_);
v___y_1021_ = v___f_1040_;
v___y_1022_ = v_value_1052_;
v_snd_1023_ = v___x_1056_;
goto v___jp_1020_;
}
else
{
lean_object* v___x_1059_; 
lean_inc_ref(v_type_1051_);
lean_inc_ref(v___f_1040_);
lean_inc_ref(v___f_1019_);
v___x_1059_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1019_, v___f_1040_, v_type_1051_, v___x_1056_);
lean_inc_ref(v_value_1052_);
v___y_1029_ = v___f_1040_;
v___y_1030_ = v_value_1052_;
v___y_1031_ = v___x_1059_;
goto v___jp_1028_;
}
}
else
{
lean_object* v___x_1060_; 
lean_inc_ref(v_type_1051_);
lean_inc_ref(v___f_1040_);
lean_inc_ref(v___f_1019_);
v___x_1060_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1019_, v___f_1040_, v_type_1051_, v___x_1056_);
lean_inc_ref(v_value_1052_);
v___y_1029_ = v___f_1040_;
v___y_1030_ = v_value_1052_;
v___y_1031_ = v___x_1060_;
goto v___jp_1028_;
}
}
else
{
lean_object* v_type_1061_; lean_object* v___x_1062_; lean_object* v_mctx_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
v_type_1061_ = lean_ctor_get(v_val_926_, 3);
v___x_1062_ = lean_st_ref_get(v___y_906_);
v_mctx_1063_ = lean_ctor_get(v___x_1062_, 0);
lean_inc_ref_n(v_mctx_1063_, 2);
lean_dec(v___x_1062_);
v___x_1064_ = lean_obj_once(&l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1, &l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1_once, _init_l___private_Lean_Meta_GeneralizeVars_0__Lean_Meta_mkGeneralizationForbiddenSet_visit___closed__1);
v___x_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
lean_ctor_set(v___x_1065_, 1, v_mctx_1063_);
v___x_1066_ = l_Lean_Expr_hasFVar(v_type_1061_);
if (v___x_1066_ == 0)
{
uint8_t v___x_1067_; 
v___x_1067_ = l_Lean_Expr_hasMVar(v_type_1061_);
if (v___x_1067_ == 0)
{
lean_dec_ref_known(v___x_1065_, 2);
lean_dec_ref(v___f_1040_);
lean_dec_ref(v___f_1019_);
v_fst_944_ = v___x_1067_;
v_mctx_945_ = v_mctx_1063_;
goto v___jp_943_;
}
else
{
lean_object* v___x_1068_; 
lean_dec_ref(v_mctx_1063_);
lean_inc_ref(v_type_1061_);
v___x_1068_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1019_, v___f_1040_, v_type_1061_, v___x_1065_);
v___y_962_ = v___x_1068_;
goto v___jp_961_;
}
}
else
{
lean_object* v___x_1069_; 
lean_dec_ref(v_mctx_1063_);
lean_inc_ref(v_type_1061_);
v___x_1069_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1019_, v___f_1040_, v_type_1061_, v___x_1065_);
v___y_962_ = v___x_1069_;
goto v___jp_961_;
}
}
}
}
}
else
{
lean_dec(v___x_936_);
goto v___jp_932_;
}
}
else
{
lean_dec(v___x_936_);
goto v___jp_932_;
}
}
else
{
lean_object* v___x_1071_; 
lean_dec(v___x_936_);
lean_del_object(v___x_930_);
v___x_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1071_, 0, v_fst_927_);
lean_ctor_set(v___x_1071_, 1, v_snd_928_);
v_a_918_ = v___x_1071_;
goto v___jp_917_;
}
v___jp_932_:
{
lean_object* v___x_934_; 
if (v_isShared_931_ == 0)
{
v___x_934_ = v___x_930_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_fst_927_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v_snd_928_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
v_a_918_ = v___x_934_;
goto v___jp_917_;
}
}
v___jp_937_:
{
if (v_a_938_ == 0)
{
lean_object* v___x_939_; 
lean_dec(v___x_936_);
v___x_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_939_, 0, v_fst_927_);
lean_ctor_set(v___x_939_, 1, v_snd_928_);
v_a_918_ = v___x_939_;
goto v___jp_917_;
}
else
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
lean_inc(v___x_936_);
v___x_940_ = l_Lean_FVarIdSet_insert(v_snd_928_, v___x_936_);
v___x_941_ = l_Lean_FVarIdSet_insert(v_fst_927_, v___x_936_);
v___x_942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_941_);
lean_ctor_set(v___x_942_, 1, v___x_940_);
v_a_918_ = v___x_942_;
goto v___jp_917_;
}
}
v___jp_943_:
{
lean_object* v___x_946_; lean_object* v_cache_947_; lean_object* v_zetaDeltaFVarIds_948_; lean_object* v_postponed_949_; lean_object* v_diag_950_; lean_object* v_rewriteFires_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_959_; 
v___x_946_ = lean_st_ref_take(v___y_906_);
v_cache_947_ = lean_ctor_get(v___x_946_, 1);
v_zetaDeltaFVarIds_948_ = lean_ctor_get(v___x_946_, 2);
v_postponed_949_ = lean_ctor_get(v___x_946_, 3);
v_diag_950_ = lean_ctor_get(v___x_946_, 4);
v_rewriteFires_951_ = lean_ctor_get(v___x_946_, 5);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_959_ == 0)
{
lean_object* v_unused_960_; 
v_unused_960_ = lean_ctor_get(v___x_946_, 0);
lean_dec(v_unused_960_);
v___x_953_ = v___x_946_;
v_isShared_954_ = v_isSharedCheck_959_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_rewriteFires_951_);
lean_inc(v_diag_950_);
lean_inc(v_postponed_949_);
lean_inc(v_zetaDeltaFVarIds_948_);
lean_inc(v_cache_947_);
lean_dec(v___x_946_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_959_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v_mctx_945_);
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_mctx_945_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v_cache_947_);
lean_ctor_set(v_reuseFailAlloc_958_, 2, v_zetaDeltaFVarIds_948_);
lean_ctor_set(v_reuseFailAlloc_958_, 3, v_postponed_949_);
lean_ctor_set(v_reuseFailAlloc_958_, 4, v_diag_950_);
lean_ctor_set(v_reuseFailAlloc_958_, 5, v_rewriteFires_951_);
v___x_956_ = v_reuseFailAlloc_958_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_957_; 
v___x_957_ = lean_st_ref_put(v___y_906_, v___x_956_);
v_a_938_ = v_fst_944_;
goto v___jp_937_;
}
}
}
v___jp_961_:
{
lean_object* v_snd_963_; lean_object* v_fst_964_; lean_object* v_mctx_965_; uint8_t v___x_966_; 
v_snd_963_ = lean_ctor_get(v___y_962_, 1);
lean_inc(v_snd_963_);
v_fst_964_ = lean_ctor_get(v___y_962_, 0);
lean_inc(v_fst_964_);
lean_dec_ref(v___y_962_);
v_mctx_965_ = lean_ctor_get(v_snd_963_, 1);
lean_inc_ref(v_mctx_965_);
lean_dec(v_snd_963_);
v___x_966_ = lean_unbox(v_fst_964_);
lean_dec(v_fst_964_);
v_fst_944_ = v___x_966_;
v_mctx_945_ = v_mctx_965_;
goto v___jp_943_;
}
v___jp_967_:
{
lean_object* v_mctx_970_; lean_object* v___x_971_; lean_object* v_cache_972_; lean_object* v_zetaDeltaFVarIds_973_; lean_object* v_postponed_974_; lean_object* v_diag_975_; lean_object* v_rewriteFires_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_984_; 
v_mctx_970_ = lean_ctor_get(v_snd_969_, 1);
lean_inc_ref(v_mctx_970_);
lean_dec_ref(v_snd_969_);
v___x_971_ = lean_st_ref_take(v___y_906_);
v_cache_972_ = lean_ctor_get(v___x_971_, 1);
v_zetaDeltaFVarIds_973_ = lean_ctor_get(v___x_971_, 2);
v_postponed_974_ = lean_ctor_get(v___x_971_, 3);
v_diag_975_ = lean_ctor_get(v___x_971_, 4);
v_rewriteFires_976_ = lean_ctor_get(v___x_971_, 5);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_984_ == 0)
{
lean_object* v_unused_985_; 
v_unused_985_ = lean_ctor_get(v___x_971_, 0);
lean_dec(v_unused_985_);
v___x_978_ = v___x_971_;
v_isShared_979_ = v_isSharedCheck_984_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_rewriteFires_976_);
lean_inc(v_diag_975_);
lean_inc(v_postponed_974_);
lean_inc(v_zetaDeltaFVarIds_973_);
lean_inc(v_cache_972_);
lean_dec(v___x_971_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_984_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v_mctx_970_);
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_mctx_970_);
lean_ctor_set(v_reuseFailAlloc_983_, 1, v_cache_972_);
lean_ctor_set(v_reuseFailAlloc_983_, 2, v_zetaDeltaFVarIds_973_);
lean_ctor_set(v_reuseFailAlloc_983_, 3, v_postponed_974_);
lean_ctor_set(v_reuseFailAlloc_983_, 4, v_diag_975_);
lean_ctor_set(v_reuseFailAlloc_983_, 5, v_rewriteFires_976_);
v___x_981_ = v_reuseFailAlloc_983_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
lean_object* v___x_982_; 
v___x_982_ = lean_st_ref_put(v___y_906_, v___x_981_);
v_a_938_ = v_fst_968_;
goto v___jp_937_;
}
}
}
v___jp_986_:
{
lean_object* v_fst_988_; lean_object* v_snd_989_; uint8_t v___x_990_; 
v_fst_988_ = lean_ctor_get(v___y_987_, 0);
lean_inc(v_fst_988_);
v_snd_989_ = lean_ctor_get(v___y_987_, 1);
lean_inc(v_snd_989_);
lean_dec_ref(v___y_987_);
v___x_990_ = lean_unbox(v_fst_988_);
lean_dec(v_fst_988_);
v_fst_968_ = v___x_990_;
v_snd_969_ = v_snd_989_;
goto v___jp_967_;
}
v___jp_991_:
{
lean_object* v___x_994_; lean_object* v_cache_995_; lean_object* v_zetaDeltaFVarIds_996_; lean_object* v_postponed_997_; lean_object* v_diag_998_; lean_object* v_rewriteFires_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1007_; 
v___x_994_ = lean_st_ref_take(v___y_906_);
v_cache_995_ = lean_ctor_get(v___x_994_, 1);
v_zetaDeltaFVarIds_996_ = lean_ctor_get(v___x_994_, 2);
v_postponed_997_ = lean_ctor_get(v___x_994_, 3);
v_diag_998_ = lean_ctor_get(v___x_994_, 4);
v_rewriteFires_999_ = lean_ctor_get(v___x_994_, 5);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1007_ == 0)
{
lean_object* v_unused_1008_; 
v_unused_1008_ = lean_ctor_get(v___x_994_, 0);
lean_dec(v_unused_1008_);
v___x_1001_ = v___x_994_;
v_isShared_1002_ = v_isSharedCheck_1007_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_rewriteFires_999_);
lean_inc(v_diag_998_);
lean_inc(v_postponed_997_);
lean_inc(v_zetaDeltaFVarIds_996_);
lean_inc(v_cache_995_);
lean_dec(v___x_994_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1007_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v_mctx_993_);
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_mctx_993_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_cache_995_);
lean_ctor_set(v_reuseFailAlloc_1006_, 2, v_zetaDeltaFVarIds_996_);
lean_ctor_set(v_reuseFailAlloc_1006_, 3, v_postponed_997_);
lean_ctor_set(v_reuseFailAlloc_1006_, 4, v_diag_998_);
lean_ctor_set(v_reuseFailAlloc_1006_, 5, v_rewriteFires_999_);
v___x_1004_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
lean_object* v___x_1005_; 
v___x_1005_ = lean_st_ref_put(v___y_906_, v___x_1004_);
v_a_938_ = v_fst_992_;
goto v___jp_937_;
}
}
}
v___jp_1009_:
{
lean_object* v_snd_1011_; lean_object* v_fst_1012_; lean_object* v_mctx_1013_; uint8_t v___x_1014_; 
v_snd_1011_ = lean_ctor_get(v___y_1010_, 1);
lean_inc(v_snd_1011_);
v_fst_1012_ = lean_ctor_get(v___y_1010_, 0);
lean_inc(v_fst_1012_);
lean_dec_ref(v___y_1010_);
v_mctx_1013_ = lean_ctor_get(v_snd_1011_, 1);
lean_inc_ref(v_mctx_1013_);
lean_dec(v_snd_1011_);
v___x_1014_ = lean_unbox(v_fst_1012_);
lean_dec(v_fst_1012_);
v_fst_992_ = v___x_1014_;
v_mctx_993_ = v_mctx_1013_;
goto v___jp_991_;
}
}
}
v___jp_917_:
{
lean_object* v___x_920_; 
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 1, v_a_918_);
lean_ctor_set(v___x_914_, 0, v___x_916_);
v___x_920_ = v___x_914_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_916_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v_a_918_);
v___x_920_ = v_reuseFailAlloc_924_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
size_t v___x_921_; size_t v___x_922_; lean_object* v___x_923_; 
v___x_921_ = ((size_t)1ULL);
v___x_922_ = lean_usize_add(v_i_903_, v___x_921_);
v___x_923_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_forbidden_899_, v_ignoreLetDecls_900_, v_as_901_, v_sz_902_, v___x_922_, v___x_920_, v___y_906_);
return v___x_923_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2___boxed(lean_object* v_forbidden_1075_, lean_object* v_ignoreLetDecls_1076_, lean_object* v_as_1077_, lean_object* v_sz_1078_, lean_object* v_i_1079_, lean_object* v_b_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1086_; size_t v_sz_boxed_1087_; size_t v_i_boxed_1088_; lean_object* v_res_1089_; 
v_ignoreLetDecls_boxed_1086_ = lean_unbox(v_ignoreLetDecls_1076_);
v_sz_boxed_1087_ = lean_unbox_usize(v_sz_1078_);
lean_dec(v_sz_1078_);
v_i_boxed_1088_ = lean_unbox_usize(v_i_1079_);
lean_dec(v_i_1079_);
v_res_1089_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(v_forbidden_1075_, v_ignoreLetDecls_boxed_1086_, v_as_1077_, v_sz_boxed_1087_, v_i_boxed_1088_, v_b_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec_ref(v_as_1077_);
lean_dec(v_forbidden_1075_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(lean_object* v_init_1090_, lean_object* v_forbidden_1091_, uint8_t v_ignoreLetDecls_1092_, lean_object* v_n_1093_, lean_object* v_b_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
if (lean_obj_tag(v_n_1093_) == 0)
{
lean_object* v_cs_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; size_t v_sz_1103_; size_t v___x_1104_; lean_object* v___x_1105_; 
v_cs_1100_ = lean_ctor_get(v_n_1093_, 0);
v___x_1101_ = lean_box(0);
v___x_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
lean_ctor_set(v___x_1102_, 1, v_b_1094_);
v_sz_1103_ = lean_array_size(v_cs_1100_);
v___x_1104_ = ((size_t)0ULL);
v___x_1105_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(v_init_1090_, v_forbidden_1091_, v_ignoreLetDecls_1092_, v_cs_1100_, v_sz_1103_, v___x_1104_, v___x_1102_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1120_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1108_ = v___x_1105_;
v_isShared_1109_ = v_isSharedCheck_1120_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1105_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1120_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v_fst_1110_; 
v_fst_1110_ = lean_ctor_get(v_a_1106_, 0);
if (lean_obj_tag(v_fst_1110_) == 0)
{
lean_object* v_snd_1111_; lean_object* v___x_1112_; lean_object* v___x_1114_; 
v_snd_1111_ = lean_ctor_get(v_a_1106_, 1);
lean_inc(v_snd_1111_);
lean_dec(v_a_1106_);
v___x_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1112_, 0, v_snd_1111_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v___x_1112_);
v___x_1114_ = v___x_1108_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1112_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
else
{
lean_object* v_val_1116_; lean_object* v___x_1118_; 
lean_inc_ref(v_fst_1110_);
lean_dec(v_a_1106_);
v_val_1116_ = lean_ctor_get(v_fst_1110_, 0);
lean_inc(v_val_1116_);
lean_dec_ref_known(v_fst_1110_, 1);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v_val_1116_);
v___x_1118_ = v___x_1108_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_val_1116_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
v_a_1121_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1105_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1105_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
else
{
lean_object* v_vs_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; size_t v_sz_1132_; size_t v___x_1133_; lean_object* v___x_1134_; 
v_vs_1129_ = lean_ctor_get(v_n_1093_, 0);
v___x_1130_ = lean_box(0);
v___x_1131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
lean_ctor_set(v___x_1131_, 1, v_b_1094_);
v_sz_1132_ = lean_array_size(v_vs_1129_);
v___x_1133_ = ((size_t)0ULL);
v___x_1134_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2(v_forbidden_1091_, v_ignoreLetDecls_1092_, v_vs_1129_, v_sz_1132_, v___x_1133_, v___x_1131_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1149_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1137_ = v___x_1134_;
v_isShared_1138_ = v_isSharedCheck_1149_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1134_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1149_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v_fst_1139_; 
v_fst_1139_ = lean_ctor_get(v_a_1135_, 0);
if (lean_obj_tag(v_fst_1139_) == 0)
{
lean_object* v_snd_1140_; lean_object* v___x_1141_; lean_object* v___x_1143_; 
v_snd_1140_ = lean_ctor_get(v_a_1135_, 1);
lean_inc(v_snd_1140_);
lean_dec(v_a_1135_);
v___x_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1141_, 0, v_snd_1140_);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 0, v___x_1141_);
v___x_1143_ = v___x_1137_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v___x_1141_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
else
{
lean_object* v_val_1145_; lean_object* v___x_1147_; 
lean_inc_ref(v_fst_1139_);
lean_dec(v_a_1135_);
v_val_1145_ = lean_ctor_get(v_fst_1139_, 0);
lean_inc(v_val_1145_);
lean_dec_ref_known(v_fst_1139_, 1);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 0, v_val_1145_);
v___x_1147_ = v___x_1137_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_val_1145_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
v_a_1150_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1134_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1134_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(lean_object* v_init_1158_, lean_object* v_forbidden_1159_, uint8_t v_ignoreLetDecls_1160_, lean_object* v_as_1161_, size_t v_sz_1162_, size_t v_i_1163_, lean_object* v_b_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_){
_start:
{
uint8_t v___x_1170_; 
v___x_1170_ = lean_usize_dec_lt(v_i_1163_, v_sz_1162_);
if (v___x_1170_ == 0)
{
lean_object* v___x_1171_; 
v___x_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1171_, 0, v_b_1164_);
return v___x_1171_;
}
else
{
lean_object* v_snd_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1206_; 
v_snd_1172_ = lean_ctor_get(v_b_1164_, 1);
v_isSharedCheck_1206_ = !lean_is_exclusive(v_b_1164_);
if (v_isSharedCheck_1206_ == 0)
{
lean_object* v_unused_1207_; 
v_unused_1207_ = lean_ctor_get(v_b_1164_, 0);
lean_dec(v_unused_1207_);
v___x_1174_ = v_b_1164_;
v_isShared_1175_ = v_isSharedCheck_1206_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_snd_1172_);
lean_dec(v_b_1164_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1206_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1176_; lean_object* v_a_1177_; lean_object* v___x_1178_; 
v___x_1176_ = lean_box(0);
v_a_1177_ = lean_array_uget_borrowed(v_as_1161_, v_i_1163_);
lean_inc(v_snd_1172_);
v___x_1178_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_1158_, v_forbidden_1159_, v_ignoreLetDecls_1160_, v_a_1177_, v_snd_1172_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1197_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1181_ = v___x_1178_;
v_isShared_1182_ = v_isSharedCheck_1197_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1178_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1197_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
if (lean_obj_tag(v_a_1179_) == 0)
{
lean_object* v___x_1183_; lean_object* v___x_1185_; 
v___x_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1183_, 0, v_a_1179_);
if (v_isShared_1175_ == 0)
{
lean_ctor_set(v___x_1174_, 0, v___x_1183_);
v___x_1185_ = v___x_1174_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1183_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v_snd_1172_);
v___x_1185_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
lean_object* v___x_1187_; 
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 0, v___x_1185_);
v___x_1187_ = v___x_1181_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1192_; 
lean_del_object(v___x_1181_);
lean_dec(v_snd_1172_);
v_a_1190_ = lean_ctor_get(v_a_1179_, 0);
lean_inc(v_a_1190_);
lean_dec_ref_known(v_a_1179_, 1);
if (v_isShared_1175_ == 0)
{
lean_ctor_set(v___x_1174_, 1, v_a_1190_);
lean_ctor_set(v___x_1174_, 0, v___x_1176_);
v___x_1192_ = v___x_1174_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v___x_1176_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v_a_1190_);
v___x_1192_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
size_t v___x_1193_; size_t v___x_1194_; 
v___x_1193_ = ((size_t)1ULL);
v___x_1194_ = lean_usize_add(v_i_1163_, v___x_1193_);
v_i_1163_ = v___x_1194_;
v_b_1164_ = v___x_1192_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_del_object(v___x_1174_);
lean_dec(v_snd_1172_);
v_a_1198_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1178_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1178_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1___boxed(lean_object* v_init_1208_, lean_object* v_forbidden_1209_, lean_object* v_ignoreLetDecls_1210_, lean_object* v_as_1211_, lean_object* v_sz_1212_, lean_object* v_i_1213_, lean_object* v_b_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1220_; size_t v_sz_boxed_1221_; size_t v_i_boxed_1222_; lean_object* v_res_1223_; 
v_ignoreLetDecls_boxed_1220_ = lean_unbox(v_ignoreLetDecls_1210_);
v_sz_boxed_1221_ = lean_unbox_usize(v_sz_1212_);
lean_dec(v_sz_1212_);
v_i_boxed_1222_ = lean_unbox_usize(v_i_1213_);
lean_dec(v_i_1213_);
v_res_1223_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__1(v_init_1208_, v_forbidden_1209_, v_ignoreLetDecls_boxed_1220_, v_as_1211_, v_sz_boxed_1221_, v_i_boxed_1222_, v_b_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec_ref(v_as_1211_);
lean_dec(v_forbidden_1209_);
lean_dec_ref(v_init_1208_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0___boxed(lean_object* v_init_1224_, lean_object* v_forbidden_1225_, lean_object* v_ignoreLetDecls_1226_, lean_object* v_n_1227_, lean_object* v_b_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1234_; lean_object* v_res_1235_; 
v_ignoreLetDecls_boxed_1234_ = lean_unbox(v_ignoreLetDecls_1226_);
v_res_1235_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_1224_, v_forbidden_1225_, v_ignoreLetDecls_boxed_1234_, v_n_1227_, v_b_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec_ref(v_n_1227_);
lean_dec(v_forbidden_1225_);
lean_dec_ref(v_init_1224_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(lean_object* v_forbidden_1236_, uint8_t v_ignoreLetDecls_1237_, lean_object* v_t_1238_, lean_object* v_init_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v_root_1245_; lean_object* v_tail_1246_; lean_object* v___x_1247_; 
v_root_1245_ = lean_ctor_get(v_t_1238_, 0);
v_tail_1246_ = lean_ctor_get(v_t_1238_, 1);
lean_inc_ref(v_init_1239_);
v___x_1247_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0(v_init_1239_, v_forbidden_1236_, v_ignoreLetDecls_1237_, v_root_1245_, v_init_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
lean_dec_ref(v_init_1239_);
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1284_; 
v_a_1248_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1250_ = v___x_1247_;
v_isShared_1251_ = v_isSharedCheck_1284_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1247_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1284_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
if (lean_obj_tag(v_a_1248_) == 0)
{
lean_object* v_a_1252_; lean_object* v___x_1254_; 
v_a_1252_ = lean_ctor_get(v_a_1248_, 0);
lean_inc(v_a_1252_);
lean_dec_ref_known(v_a_1248_, 1);
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 0, v_a_1252_);
v___x_1254_ = v___x_1250_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_a_1252_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; size_t v_sz_1259_; size_t v___x_1260_; lean_object* v___x_1261_; 
lean_del_object(v___x_1250_);
v_a_1256_ = lean_ctor_get(v_a_1248_, 0);
lean_inc(v_a_1256_);
lean_dec_ref_known(v_a_1248_, 1);
v___x_1257_ = lean_box(0);
v___x_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
lean_ctor_set(v___x_1258_, 1, v_a_1256_);
v_sz_1259_ = lean_array_size(v_tail_1246_);
v___x_1260_ = ((size_t)0ULL);
v___x_1261_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1(v_forbidden_1236_, v_ignoreLetDecls_1237_, v_tail_1246_, v_sz_1259_, v___x_1260_, v___x_1258_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1275_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1264_ = v___x_1261_;
v_isShared_1265_ = v_isSharedCheck_1275_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v___x_1261_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1275_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v_fst_1266_; 
v_fst_1266_ = lean_ctor_get(v_a_1262_, 0);
if (lean_obj_tag(v_fst_1266_) == 0)
{
lean_object* v_snd_1267_; lean_object* v___x_1269_; 
v_snd_1267_ = lean_ctor_get(v_a_1262_, 1);
lean_inc(v_snd_1267_);
lean_dec(v_a_1262_);
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 0, v_snd_1267_);
v___x_1269_ = v___x_1264_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_snd_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
else
{
lean_object* v_val_1271_; lean_object* v___x_1273_; 
lean_inc_ref(v_fst_1266_);
lean_dec(v_a_1262_);
v_val_1271_ = lean_ctor_get(v_fst_1266_, 0);
lean_inc(v_val_1271_);
lean_dec_ref_known(v_fst_1266_, 1);
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 0, v_val_1271_);
v___x_1273_ = v___x_1264_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_val_1271_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
v_a_1276_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1261_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1261_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
}
}
else
{
lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1292_; 
v_a_1285_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1287_ = v___x_1247_;
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_dec(v___x_1247_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1290_; 
if (v_isShared_1288_ == 0)
{
v___x_1290_ = v___x_1287_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_a_1285_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0___boxed(lean_object* v_forbidden_1293_, lean_object* v_ignoreLetDecls_1294_, lean_object* v_t_1295_, lean_object* v_init_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1302_; lean_object* v_res_1303_; 
v_ignoreLetDecls_boxed_1302_ = lean_unbox(v_ignoreLetDecls_1294_);
v_res_1303_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(v_forbidden_1293_, v_ignoreLetDecls_boxed_1302_, v_t_1295_, v_init_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec_ref(v_t_1295_);
lean_dec(v_forbidden_1293_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(lean_object* v_as_1304_, size_t v_i_1305_, size_t v_stop_1306_, lean_object* v_b_1307_){
_start:
{
lean_object* v___y_1309_; uint8_t v___x_1313_; 
v___x_1313_ = lean_usize_dec_eq(v_i_1305_, v_stop_1306_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; uint8_t v___x_1315_; 
v___x_1314_ = lean_array_uget_borrowed(v_as_1304_, v_i_1305_);
v___x_1315_ = l_Lean_Expr_isFVar(v___x_1314_);
if (v___x_1315_ == 0)
{
v___y_1309_ = v_b_1307_;
goto v___jp_1308_;
}
else
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1316_ = l_Lean_Expr_fvarId_x21(v___x_1314_);
v___x_1317_ = l_Lean_FVarIdSet_insert(v_b_1307_, v___x_1316_);
v___y_1309_ = v___x_1317_;
goto v___jp_1308_;
}
}
else
{
return v_b_1307_;
}
v___jp_1308_:
{
size_t v___x_1310_; size_t v___x_1311_; 
v___x_1310_ = ((size_t)1ULL);
v___x_1311_ = lean_usize_add(v_i_1305_, v___x_1310_);
v_i_1305_ = v___x_1311_;
v_b_1307_ = v___y_1309_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1___boxed(lean_object* v_as_1318_, lean_object* v_i_1319_, lean_object* v_stop_1320_, lean_object* v_b_1321_){
_start:
{
size_t v_i_boxed_1322_; size_t v_stop_boxed_1323_; lean_object* v_res_1324_; 
v_i_boxed_1322_ = lean_unbox_usize(v_i_1319_);
lean_dec(v_i_1319_);
v_stop_boxed_1323_ = lean_unbox_usize(v_stop_1320_);
lean_dec(v_stop_1320_);
v_res_1324_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(v_as_1318_, v_i_boxed_1322_, v_stop_boxed_1323_, v_b_1321_);
lean_dec_ref(v_as_1318_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize(lean_object* v_targets_1325_, lean_object* v_forbidden_1326_, uint8_t v_ignoreLetDecls_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v_r_1333_; lean_object* v___y_1335_; lean_object* v___x_1357_; lean_object* v___x_1358_; uint8_t v___x_1359_; 
v_r_1333_ = lean_box(1);
v___x_1357_ = lean_unsigned_to_nat(0u);
v___x_1358_ = lean_array_get_size(v_targets_1325_);
v___x_1359_ = lean_nat_dec_lt(v___x_1357_, v___x_1358_);
if (v___x_1359_ == 0)
{
v___y_1335_ = v_r_1333_;
goto v___jp_1334_;
}
else
{
size_t v___x_1360_; size_t v___x_1361_; lean_object* v___x_1362_; 
v___x_1360_ = ((size_t)0ULL);
v___x_1361_ = lean_usize_of_nat(v___x_1358_);
v___x_1362_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_getFVarSetToGeneralize_spec__1(v_targets_1325_, v___x_1360_, v___x_1361_, v_r_1333_);
v___y_1335_ = v___x_1362_;
goto v___jp_1334_;
}
v___jp_1334_:
{
lean_object* v_lctx_1336_; lean_object* v_decls_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v_lctx_1336_ = lean_ctor_get(v_a_1328_, 2);
v_decls_1337_ = lean_ctor_get(v_lctx_1336_, 1);
v___x_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___y_1335_);
lean_ctor_set(v___x_1338_, 1, v_r_1333_);
v___x_1339_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0(v_forbidden_1326_, v_ignoreLetDecls_1327_, v_decls_1337_, v___x_1338_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1348_; 
v_a_1340_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1342_ = v___x_1339_;
v_isShared_1343_ = v_isSharedCheck_1348_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1339_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1348_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v_snd_1344_; lean_object* v___x_1346_; 
v_snd_1344_ = lean_ctor_get(v_a_1340_, 1);
lean_inc(v_snd_1344_);
lean_dec(v_a_1340_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 0, v_snd_1344_);
v___x_1346_ = v___x_1342_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_snd_1344_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
else
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1356_; 
v_a_1349_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1351_ = v___x_1339_;
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1339_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1354_; 
if (v_isShared_1352_ == 0)
{
v___x_1354_ = v___x_1351_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_a_1349_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarSetToGeneralize___boxed(lean_object* v_targets_1363_, lean_object* v_forbidden_1364_, lean_object* v_ignoreLetDecls_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1371_; lean_object* v_res_1372_; 
v_ignoreLetDecls_boxed_1371_ = lean_unbox(v_ignoreLetDecls_1365_);
v_res_1372_ = l_Lean_Meta_getFVarSetToGeneralize(v_targets_1363_, v_forbidden_1364_, v_ignoreLetDecls_boxed_1371_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
lean_dec(v_a_1369_);
lean_dec_ref(v_a_1368_);
lean_dec(v_a_1367_);
lean_dec_ref(v_a_1366_);
lean_dec(v_forbidden_1364_);
lean_dec_ref(v_targets_1363_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(lean_object* v_forbidden_1373_, uint8_t v_ignoreLetDecls_1374_, lean_object* v_as_1375_, size_t v_sz_1376_, size_t v_i_1377_, lean_object* v_b_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v___x_1384_; 
v___x_1384_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___redArg(v_forbidden_1373_, v_ignoreLetDecls_1374_, v_as_1375_, v_sz_1376_, v_i_1377_, v_b_1378_, v___y_1380_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4___boxed(lean_object* v_forbidden_1385_, lean_object* v_ignoreLetDecls_1386_, lean_object* v_as_1387_, lean_object* v_sz_1388_, lean_object* v_i_1389_, lean_object* v_b_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1396_; size_t v_sz_boxed_1397_; size_t v_i_boxed_1398_; lean_object* v_res_1399_; 
v_ignoreLetDecls_boxed_1396_ = lean_unbox(v_ignoreLetDecls_1386_);
v_sz_boxed_1397_ = lean_unbox_usize(v_sz_1388_);
lean_dec(v_sz_1388_);
v_i_boxed_1398_ = lean_unbox_usize(v_i_1389_);
lean_dec(v_i_1389_);
v_res_1399_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__1_spec__4(v_forbidden_1385_, v_ignoreLetDecls_boxed_1396_, v_as_1387_, v_sz_boxed_1397_, v_i_boxed_1398_, v_b_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
lean_dec_ref(v_as_1387_);
lean_dec(v_forbidden_1385_);
return v_res_1399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(lean_object* v_forbidden_1400_, uint8_t v_ignoreLetDecls_1401_, lean_object* v_as_1402_, size_t v_sz_1403_, size_t v_i_1404_, lean_object* v_b_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v___x_1411_; 
v___x_1411_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___redArg(v_forbidden_1400_, v_ignoreLetDecls_1401_, v_as_1402_, v_sz_1403_, v_i_1404_, v_b_1405_, v___y_1407_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_forbidden_1412_, lean_object* v_ignoreLetDecls_1413_, lean_object* v_as_1414_, lean_object* v_sz_1415_, lean_object* v_i_1416_, lean_object* v_b_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1423_; size_t v_sz_boxed_1424_; size_t v_i_boxed_1425_; lean_object* v_res_1426_; 
v_ignoreLetDecls_boxed_1423_ = lean_unbox(v_ignoreLetDecls_1413_);
v_sz_boxed_1424_ = lean_unbox_usize(v_sz_1415_);
lean_dec(v_sz_1415_);
v_i_boxed_1425_ = lean_unbox_usize(v_i_1416_);
lean_dec(v_i_1416_);
v_res_1426_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getFVarSetToGeneralize_spec__0_spec__0_spec__2_spec__4(v_forbidden_1412_, v_ignoreLetDecls_boxed_1423_, v_as_1414_, v_sz_boxed_1424_, v_i_boxed_1425_, v_b_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
lean_dec(v___y_1421_);
lean_dec_ref(v___y_1420_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
lean_dec_ref(v_as_1414_);
lean_dec(v_forbidden_1412_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(lean_object* v_init_1427_, lean_object* v_x_1428_){
_start:
{
if (lean_obj_tag(v_x_1428_) == 0)
{
lean_object* v_k_1429_; lean_object* v_l_1430_; lean_object* v_r_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v_k_1429_ = lean_ctor_get(v_x_1428_, 1);
lean_inc(v_k_1429_);
v_l_1430_ = lean_ctor_get(v_x_1428_, 3);
lean_inc(v_l_1430_);
v_r_1431_ = lean_ctor_get(v_x_1428_, 4);
lean_inc(v_r_1431_);
lean_dec_ref_known(v_x_1428_, 5);
v___x_1432_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(v_init_1427_, v_l_1430_);
v___x_1433_ = lean_array_push(v___x_1432_, v_k_1429_);
v_init_1427_ = v___x_1433_;
v_x_1428_ = v_r_1431_;
goto _start;
}
else
{
return v_init_1427_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize(lean_object* v_targets_1435_, lean_object* v_forbidden_1436_, uint8_t v_ignoreLetDecls_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_){
_start:
{
lean_object* v___x_1443_; 
v___x_1443_ = l_Lean_Meta_mkGeneralizationForbiddenSet(v_targets_1435_, v_forbidden_1436_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; lean_object* v___x_1445_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1444_);
lean_dec_ref_known(v___x_1443_, 1);
v___x_1445_ = l_Lean_Meta_getFVarSetToGeneralize(v_targets_1435_, v_a_1444_, v_ignoreLetDecls_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_);
lean_dec(v_a_1444_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_a_1446_; lean_object* v___y_1448_; 
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
lean_inc(v_a_1446_);
lean_dec_ref_known(v___x_1445_, 1);
if (lean_obj_tag(v_a_1446_) == 0)
{
lean_object* v_size_1452_; 
v_size_1452_ = lean_ctor_get(v_a_1446_, 0);
lean_inc(v_size_1452_);
v___y_1448_ = v_size_1452_;
goto v___jp_1447_;
}
else
{
lean_object* v___x_1453_; 
v___x_1453_ = lean_unsigned_to_nat(0u);
v___y_1448_ = v___x_1453_;
goto v___jp_1447_;
}
v___jp_1447_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1449_ = lean_mk_empty_array_with_capacity(v___y_1448_);
lean_dec(v___y_1448_);
v___x_1450_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(v___x_1449_, v_a_1446_);
v___x_1451_ = l_Lean_Meta_sortFVarIds___redArg(v___x_1450_, v_a_1438_);
return v___x_1451_;
}
}
else
{
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
v_a_1454_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1445_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1445_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1459_; 
if (v_isShared_1457_ == 0)
{
v___x_1459_ = v___x_1456_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_a_1454_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
v_a_1462_ = lean_ctor_get(v___x_1443_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1443_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1443_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFVarsToGeneralize___boxed(lean_object* v_targets_1470_, lean_object* v_forbidden_1471_, lean_object* v_ignoreLetDecls_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_){
_start:
{
uint8_t v_ignoreLetDecls_boxed_1478_; lean_object* v_res_1479_; 
v_ignoreLetDecls_boxed_1478_ = lean_unbox(v_ignoreLetDecls_1472_);
v_res_1479_ = l_Lean_Meta_getFVarsToGeneralize(v_targets_1470_, v_forbidden_1471_, v_ignoreLetDecls_boxed_1478_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_);
lean_dec(v_a_1476_);
lean_dec_ref(v_a_1475_);
lean_dec(v_a_1474_);
lean_dec_ref(v_a_1473_);
lean_dec_ref(v_targets_1470_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0(lean_object* v_init_1480_, lean_object* v_t_1481_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Meta_getFVarsToGeneralize_spec__0_spec__0(v_init_1480_, v_t_1481_);
return v___x_1482_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_GeneralizeVars(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_GeneralizeVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_GeneralizeVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_GeneralizeVars(builtin);
}
#ifdef __cplusplus
}
#endif
