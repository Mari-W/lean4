// Lean compiler output
// Module: Lean.Meta.Sym.InferType
// Imports: public import Lean.Meta.Sym.SymM
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
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_mkEqRefl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Sym_mkEqRefl___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_mkEqRefl___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_mkEqRefl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Meta_Sym_mkEqRefl___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_mkEqRefl___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_mkEqRefl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_mkEqRefl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Sym_mkEqRefl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_mkEqRefl___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_mkEqRefl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l_Lean_Meta_Sym_mkEqRefl___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_mkEqRefl___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache(lean_object* v_e_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v_keyedConfig_7_; uint8_t v_trackZetaDelta_8_; lean_object* v_zetaDeltaSet_9_; lean_object* v_lctx_10_; lean_object* v_localInstances_11_; lean_object* v_defEqCtx_x3f_12_; lean_object* v_synthPendingDepth_13_; lean_object* v_customCanUnfoldPredicate_x3f_14_; uint8_t v_univApprox_15_; uint8_t v_inTypeClassResolution_16_; lean_object* v_rewriteSet_x3f_17_; uint8_t v_rewriteFuelScope_18_; uint8_t v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v_keyedConfig_7_ = lean_ctor_get(v_a_2_, 0);
v_trackZetaDelta_8_ = lean_ctor_get_uint8(v_a_2_, sizeof(void*)*8);
v_zetaDeltaSet_9_ = lean_ctor_get(v_a_2_, 1);
v_lctx_10_ = lean_ctor_get(v_a_2_, 2);
v_localInstances_11_ = lean_ctor_get(v_a_2_, 3);
v_defEqCtx_x3f_12_ = lean_ctor_get(v_a_2_, 4);
v_synthPendingDepth_13_ = lean_ctor_get(v_a_2_, 5);
v_customCanUnfoldPredicate_x3f_14_ = lean_ctor_get(v_a_2_, 6);
v_univApprox_15_ = lean_ctor_get_uint8(v_a_2_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_16_ = lean_ctor_get_uint8(v_a_2_, sizeof(void*)*8 + 2);
v_rewriteSet_x3f_17_ = lean_ctor_get(v_a_2_, 7);
v_rewriteFuelScope_18_ = lean_ctor_get_uint8(v_a_2_, sizeof(void*)*8 + 4);
v___x_19_ = 0;
lean_inc(v_rewriteSet_x3f_17_);
lean_inc(v_customCanUnfoldPredicate_x3f_14_);
lean_inc(v_synthPendingDepth_13_);
lean_inc(v_defEqCtx_x3f_12_);
lean_inc_ref(v_localInstances_11_);
lean_inc_ref(v_lctx_10_);
lean_inc(v_zetaDeltaSet_9_);
lean_inc_ref(v_keyedConfig_7_);
v___x_20_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_20_, 0, v_keyedConfig_7_);
lean_ctor_set(v___x_20_, 1, v_zetaDeltaSet_9_);
lean_ctor_set(v___x_20_, 2, v_lctx_10_);
lean_ctor_set(v___x_20_, 3, v_localInstances_11_);
lean_ctor_set(v___x_20_, 4, v_defEqCtx_x3f_12_);
lean_ctor_set(v___x_20_, 5, v_synthPendingDepth_13_);
lean_ctor_set(v___x_20_, 6, v_customCanUnfoldPredicate_x3f_14_);
lean_ctor_set(v___x_20_, 7, v_rewriteSet_x3f_17_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*8, v_trackZetaDelta_8_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*8 + 1, v_univApprox_15_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*8 + 2, v_inTypeClassResolution_16_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*8 + 3, v___x_19_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*8 + 4, v_rewriteFuelScope_18_);
lean_inc(v_a_5_);
lean_inc_ref(v_a_4_);
lean_inc(v_a_3_);
v___x_21_ = lean_infer_type(v_e_1_, v___x_20_, v_a_3_, v_a_4_, v_a_5_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache___boxed(lean_object* v_e_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache(v_e_22_, v_a_23_, v_a_24_, v_a_25_, v_a_26_);
lean_dec(v_a_26_);
lean_dec_ref(v_a_25_);
lean_dec(v_a_24_);
lean_dec_ref(v_a_23_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache(lean_object* v_type_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_){
_start:
{
lean_object* v_keyedConfig_35_; uint8_t v_trackZetaDelta_36_; lean_object* v_zetaDeltaSet_37_; lean_object* v_lctx_38_; lean_object* v_localInstances_39_; lean_object* v_defEqCtx_x3f_40_; lean_object* v_synthPendingDepth_41_; lean_object* v_customCanUnfoldPredicate_x3f_42_; uint8_t v_univApprox_43_; uint8_t v_inTypeClassResolution_44_; lean_object* v_rewriteSet_x3f_45_; uint8_t v_rewriteFuelScope_46_; uint8_t v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v_keyedConfig_35_ = lean_ctor_get(v_a_30_, 0);
v_trackZetaDelta_36_ = lean_ctor_get_uint8(v_a_30_, sizeof(void*)*8);
v_zetaDeltaSet_37_ = lean_ctor_get(v_a_30_, 1);
v_lctx_38_ = lean_ctor_get(v_a_30_, 2);
v_localInstances_39_ = lean_ctor_get(v_a_30_, 3);
v_defEqCtx_x3f_40_ = lean_ctor_get(v_a_30_, 4);
v_synthPendingDepth_41_ = lean_ctor_get(v_a_30_, 5);
v_customCanUnfoldPredicate_x3f_42_ = lean_ctor_get(v_a_30_, 6);
v_univApprox_43_ = lean_ctor_get_uint8(v_a_30_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_44_ = lean_ctor_get_uint8(v_a_30_, sizeof(void*)*8 + 2);
v_rewriteSet_x3f_45_ = lean_ctor_get(v_a_30_, 7);
v_rewriteFuelScope_46_ = lean_ctor_get_uint8(v_a_30_, sizeof(void*)*8 + 4);
v___x_47_ = 0;
lean_inc(v_rewriteSet_x3f_45_);
lean_inc(v_customCanUnfoldPredicate_x3f_42_);
lean_inc(v_synthPendingDepth_41_);
lean_inc(v_defEqCtx_x3f_40_);
lean_inc_ref(v_localInstances_39_);
lean_inc_ref(v_lctx_38_);
lean_inc(v_zetaDeltaSet_37_);
lean_inc_ref(v_keyedConfig_35_);
v___x_48_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_48_, 0, v_keyedConfig_35_);
lean_ctor_set(v___x_48_, 1, v_zetaDeltaSet_37_);
lean_ctor_set(v___x_48_, 2, v_lctx_38_);
lean_ctor_set(v___x_48_, 3, v_localInstances_39_);
lean_ctor_set(v___x_48_, 4, v_defEqCtx_x3f_40_);
lean_ctor_set(v___x_48_, 5, v_synthPendingDepth_41_);
lean_ctor_set(v___x_48_, 6, v_customCanUnfoldPredicate_x3f_42_);
lean_ctor_set(v___x_48_, 7, v_rewriteSet_x3f_45_);
lean_ctor_set_uint8(v___x_48_, sizeof(void*)*8, v_trackZetaDelta_36_);
lean_ctor_set_uint8(v___x_48_, sizeof(void*)*8 + 1, v_univApprox_43_);
lean_ctor_set_uint8(v___x_48_, sizeof(void*)*8 + 2, v_inTypeClassResolution_44_);
lean_ctor_set_uint8(v___x_48_, sizeof(void*)*8 + 3, v___x_47_);
lean_ctor_set_uint8(v___x_48_, sizeof(void*)*8 + 4, v_rewriteFuelScope_46_);
v___x_49_ = l_Lean_Meta_getLevel(v_type_29_, v___x_48_, v_a_31_, v_a_32_, v_a_33_);
lean_dec_ref_known(v___x_48_, 8);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache___boxed(lean_object* v_type_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache(v_type_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_57_, lean_object* v_vals_58_, lean_object* v_i_59_, lean_object* v_k_60_){
_start:
{
lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_61_ = lean_array_get_size(v_keys_57_);
v___x_62_ = lean_nat_dec_lt(v_i_59_, v___x_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; 
lean_dec(v_i_59_);
v___x_63_ = lean_box(0);
return v___x_63_;
}
else
{
lean_object* v_k_x27_64_; size_t v___x_65_; size_t v___x_66_; uint8_t v___x_67_; 
v_k_x27_64_ = lean_array_fget_borrowed(v_keys_57_, v_i_59_);
v___x_65_ = lean_ptr_addr(v_k_60_);
v___x_66_ = lean_ptr_addr(v_k_x27_64_);
v___x_67_ = lean_usize_dec_eq(v___x_65_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = lean_nat_add(v_i_59_, v___x_68_);
lean_dec(v_i_59_);
v_i_59_ = v___x_69_;
goto _start;
}
else
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_array_fget_borrowed(v_vals_58_, v_i_59_);
lean_dec(v_i_59_);
lean_inc(v___x_71_);
v___x_72_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_73_, lean_object* v_vals_74_, lean_object* v_i_75_, lean_object* v_k_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg(v_keys_73_, v_vals_74_, v_i_75_, v_k_76_);
lean_dec_ref(v_k_76_);
lean_dec_ref(v_vals_74_);
lean_dec_ref(v_keys_73_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg(lean_object* v_x_78_, size_t v_x_79_, lean_object* v_x_80_){
_start:
{
if (lean_obj_tag(v_x_78_) == 0)
{
lean_object* v_es_81_; lean_object* v___x_82_; size_t v___x_83_; size_t v___x_84_; lean_object* v_j_85_; lean_object* v___x_86_; 
v_es_81_ = lean_ctor_get(v_x_78_, 0);
v___x_82_ = lean_box(2);
v___x_83_ = ((size_t)31ULL);
v___x_84_ = lean_usize_land(v_x_79_, v___x_83_);
v_j_85_ = lean_usize_to_nat(v___x_84_);
v___x_86_ = lean_array_get_borrowed(v___x_82_, v_es_81_, v_j_85_);
lean_dec(v_j_85_);
switch(lean_obj_tag(v___x_86_))
{
case 0:
{
lean_object* v_key_87_; lean_object* v_val_88_; size_t v___x_89_; size_t v___x_90_; uint8_t v___x_91_; 
v_key_87_ = lean_ctor_get(v___x_86_, 0);
v_val_88_ = lean_ctor_get(v___x_86_, 1);
v___x_89_ = lean_ptr_addr(v_x_80_);
v___x_90_ = lean_ptr_addr(v_key_87_);
v___x_91_ = lean_usize_dec_eq(v___x_89_, v___x_90_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; 
v___x_92_ = lean_box(0);
return v___x_92_;
}
else
{
lean_object* v___x_93_; 
lean_inc(v_val_88_);
v___x_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_93_, 0, v_val_88_);
return v___x_93_;
}
}
case 1:
{
lean_object* v_node_94_; size_t v___x_95_; size_t v___x_96_; 
v_node_94_ = lean_ctor_get(v___x_86_, 0);
v___x_95_ = ((size_t)5ULL);
v___x_96_ = lean_usize_shift_right(v_x_79_, v___x_95_);
v_x_78_ = v_node_94_;
v_x_79_ = v___x_96_;
goto _start;
}
default: 
{
lean_object* v___x_98_; 
v___x_98_ = lean_box(0);
return v___x_98_;
}
}
}
else
{
lean_object* v_ks_99_; lean_object* v_vs_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v_ks_99_ = lean_ctor_get(v_x_78_, 0);
v_vs_100_ = lean_ctor_get(v_x_78_, 1);
v___x_101_ = lean_unsigned_to_nat(0u);
v___x_102_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg(v_ks_99_, v_vs_100_, v___x_101_, v_x_80_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg___boxed(lean_object* v_x_103_, lean_object* v_x_104_, lean_object* v_x_105_){
_start:
{
size_t v_x_3005__boxed_106_; lean_object* v_res_107_; 
v_x_3005__boxed_106_ = lean_unbox_usize(v_x_104_);
lean_dec(v_x_104_);
v_res_107_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg(v_x_103_, v_x_3005__boxed_106_, v_x_105_);
lean_dec_ref(v_x_105_);
lean_dec_ref(v_x_103_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(lean_object* v_x_108_, lean_object* v_x_109_){
_start:
{
size_t v___x_110_; size_t v___x_111_; size_t v___x_112_; uint64_t v___x_113_; size_t v___x_114_; lean_object* v___x_115_; 
v___x_110_ = lean_ptr_addr(v_x_109_);
v___x_111_ = ((size_t)3ULL);
v___x_112_ = lean_usize_shift_right(v___x_110_, v___x_111_);
v___x_113_ = lean_usize_to_uint64(v___x_112_);
v___x_114_ = lean_uint64_to_usize(v___x_113_);
v___x_115_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg(v_x_108_, v___x_114_, v_x_109_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg___boxed(lean_object* v_x_116_, lean_object* v_x_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(v_x_116_, v_x_117_);
lean_dec_ref(v_x_117_);
lean_dec_ref(v_x_116_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_119_, lean_object* v_x_120_, lean_object* v_x_121_, lean_object* v_x_122_){
_start:
{
lean_object* v_ks_123_; lean_object* v_vs_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_150_; 
v_ks_123_ = lean_ctor_get(v_x_119_, 0);
v_vs_124_ = lean_ctor_get(v_x_119_, 1);
v_isSharedCheck_150_ = !lean_is_exclusive(v_x_119_);
if (v_isSharedCheck_150_ == 0)
{
v___x_126_ = v_x_119_;
v_isShared_127_ = v_isSharedCheck_150_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_vs_124_);
lean_inc(v_ks_123_);
lean_dec(v_x_119_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_150_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_array_get_size(v_ks_123_);
v___x_129_ = lean_nat_dec_lt(v_x_120_, v___x_128_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_133_; 
lean_dec(v_x_120_);
v___x_130_ = lean_array_push(v_ks_123_, v_x_121_);
v___x_131_ = lean_array_push(v_vs_124_, v_x_122_);
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 1, v___x_131_);
lean_ctor_set(v___x_126_, 0, v___x_130_);
v___x_133_ = v___x_126_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_130_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v___x_131_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
else
{
lean_object* v_k_x27_135_; size_t v___x_136_; size_t v___x_137_; uint8_t v___x_138_; 
v_k_x27_135_ = lean_array_fget_borrowed(v_ks_123_, v_x_120_);
v___x_136_ = lean_ptr_addr(v_x_121_);
v___x_137_ = lean_ptr_addr(v_k_x27_135_);
v___x_138_ = lean_usize_dec_eq(v___x_136_, v___x_137_);
if (v___x_138_ == 0)
{
lean_object* v___x_140_; 
if (v_isShared_127_ == 0)
{
v___x_140_ = v___x_126_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_ks_123_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v_vs_124_);
v___x_140_ = v_reuseFailAlloc_144_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = lean_nat_add(v_x_120_, v___x_141_);
lean_dec(v_x_120_);
v_x_119_ = v___x_140_;
v_x_120_ = v___x_142_;
goto _start;
}
}
else
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_148_; 
v___x_145_ = lean_array_fset(v_ks_123_, v_x_120_, v_x_121_);
v___x_146_ = lean_array_fset(v_vs_124_, v_x_120_, v_x_122_);
lean_dec(v_x_120_);
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 1, v___x_146_);
lean_ctor_set(v___x_126_, 0, v___x_145_);
v___x_148_ = v___x_126_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___x_145_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v___x_146_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4___redArg(lean_object* v_n_151_, lean_object* v_k_152_, lean_object* v_v_153_){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_unsigned_to_nat(0u);
v___x_155_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5___redArg(v_n_151_, v___x_154_, v_k_152_, v_v_153_);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(lean_object* v_x_157_, size_t v_x_158_, size_t v_x_159_, lean_object* v_x_160_, lean_object* v_x_161_){
_start:
{
if (lean_obj_tag(v_x_157_) == 0)
{
lean_object* v_es_162_; size_t v___x_163_; size_t v___x_164_; lean_object* v_j_165_; lean_object* v___x_166_; uint8_t v___x_167_; 
v_es_162_ = lean_ctor_get(v_x_157_, 0);
v___x_163_ = ((size_t)31ULL);
v___x_164_ = lean_usize_land(v_x_158_, v___x_163_);
v_j_165_ = lean_usize_to_nat(v___x_164_);
v___x_166_ = lean_array_get_size(v_es_162_);
v___x_167_ = lean_nat_dec_lt(v_j_165_, v___x_166_);
if (v___x_167_ == 0)
{
lean_dec(v_j_165_);
lean_dec(v_x_161_);
lean_dec_ref(v_x_160_);
return v_x_157_;
}
else
{
lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_208_; 
lean_inc_ref(v_es_162_);
v_isSharedCheck_208_ = !lean_is_exclusive(v_x_157_);
if (v_isSharedCheck_208_ == 0)
{
lean_object* v_unused_209_; 
v_unused_209_ = lean_ctor_get(v_x_157_, 0);
lean_dec(v_unused_209_);
v___x_169_ = v_x_157_;
v_isShared_170_ = v_isSharedCheck_208_;
goto v_resetjp_168_;
}
else
{
lean_dec(v_x_157_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_208_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v_v_171_; lean_object* v___x_172_; lean_object* v_xs_x27_173_; lean_object* v___y_175_; 
v_v_171_ = lean_array_fget(v_es_162_, v_j_165_);
v___x_172_ = lean_box(0);
v_xs_x27_173_ = lean_array_fset(v_es_162_, v_j_165_, v___x_172_);
switch(lean_obj_tag(v_v_171_))
{
case 0:
{
lean_object* v_key_180_; lean_object* v_val_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_193_; 
v_key_180_ = lean_ctor_get(v_v_171_, 0);
v_val_181_ = lean_ctor_get(v_v_171_, 1);
v_isSharedCheck_193_ = !lean_is_exclusive(v_v_171_);
if (v_isSharedCheck_193_ == 0)
{
v___x_183_ = v_v_171_;
v_isShared_184_ = v_isSharedCheck_193_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_val_181_);
lean_inc(v_key_180_);
lean_dec(v_v_171_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_193_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
size_t v___x_185_; size_t v___x_186_; uint8_t v___x_187_; 
v___x_185_ = lean_ptr_addr(v_x_160_);
v___x_186_ = lean_ptr_addr(v_key_180_);
v___x_187_ = lean_usize_dec_eq(v___x_185_, v___x_186_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; lean_object* v___x_189_; 
lean_del_object(v___x_183_);
v___x_188_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_180_, v_val_181_, v_x_160_, v_x_161_);
v___x_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
v___y_175_ = v___x_189_;
goto v___jp_174_;
}
else
{
lean_object* v___x_191_; 
lean_dec(v_val_181_);
lean_dec(v_key_180_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 1, v_x_161_);
lean_ctor_set(v___x_183_, 0, v_x_160_);
v___x_191_ = v___x_183_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_x_160_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v_x_161_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
v___y_175_ = v___x_191_;
goto v___jp_174_;
}
}
}
}
case 1:
{
lean_object* v_node_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_206_; 
v_node_194_ = lean_ctor_get(v_v_171_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v_v_171_);
if (v_isSharedCheck_206_ == 0)
{
v___x_196_ = v_v_171_;
v_isShared_197_ = v_isSharedCheck_206_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_node_194_);
lean_dec(v_v_171_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_206_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
size_t v___x_198_; size_t v___x_199_; size_t v___x_200_; size_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_204_; 
v___x_198_ = ((size_t)5ULL);
v___x_199_ = lean_usize_shift_right(v_x_158_, v___x_198_);
v___x_200_ = ((size_t)1ULL);
v___x_201_ = lean_usize_add(v_x_159_, v___x_200_);
v___x_202_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(v_node_194_, v___x_199_, v___x_201_, v_x_160_, v_x_161_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 0, v___x_202_);
v___x_204_ = v___x_196_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_202_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
v___y_175_ = v___x_204_;
goto v___jp_174_;
}
}
}
default: 
{
lean_object* v___x_207_; 
v___x_207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_207_, 0, v_x_160_);
lean_ctor_set(v___x_207_, 1, v_x_161_);
v___y_175_ = v___x_207_;
goto v___jp_174_;
}
}
v___jp_174_:
{
lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_176_ = lean_array_fset(v_xs_x27_173_, v_j_165_, v___y_175_);
lean_dec(v_j_165_);
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 0, v___x_176_);
v___x_178_ = v___x_169_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_176_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
}
else
{
lean_object* v_ks_210_; lean_object* v_vs_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_229_; 
v_ks_210_ = lean_ctor_get(v_x_157_, 0);
v_vs_211_ = lean_ctor_get(v_x_157_, 1);
v_isSharedCheck_229_ = !lean_is_exclusive(v_x_157_);
if (v_isSharedCheck_229_ == 0)
{
v___x_213_ = v_x_157_;
v_isShared_214_ = v_isSharedCheck_229_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_vs_211_);
lean_inc(v_ks_210_);
lean_dec(v_x_157_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_229_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_ks_210_);
lean_ctor_set(v_reuseFailAlloc_228_, 1, v_vs_211_);
v___x_216_ = v_reuseFailAlloc_228_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
lean_object* v_newNode_217_; size_t v___x_218_; uint8_t v___x_219_; 
v_newNode_217_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4___redArg(v___x_216_, v_x_160_, v_x_161_);
v___x_218_ = ((size_t)7ULL);
v___x_219_ = lean_usize_dec_le(v___x_218_, v_x_159_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_220_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_217_);
v___x_221_ = lean_unsigned_to_nat(4u);
v___x_222_ = lean_nat_dec_lt(v___x_220_, v___x_221_);
lean_dec(v___x_220_);
if (v___x_222_ == 0)
{
lean_object* v_ks_223_; lean_object* v_vs_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v_ks_223_ = lean_ctor_get(v_newNode_217_, 0);
lean_inc_ref(v_ks_223_);
v_vs_224_ = lean_ctor_get(v_newNode_217_, 1);
lean_inc_ref(v_vs_224_);
lean_dec_ref(v_newNode_217_);
v___x_225_ = lean_unsigned_to_nat(0u);
v___x_226_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___closed__0);
v___x_227_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg(v_x_159_, v_ks_223_, v_vs_224_, v___x_225_, v___x_226_);
lean_dec_ref(v_vs_224_);
lean_dec_ref(v_ks_223_);
return v___x_227_;
}
else
{
return v_newNode_217_;
}
}
else
{
return v_newNode_217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg(size_t v_depth_230_, lean_object* v_keys_231_, lean_object* v_vals_232_, lean_object* v_i_233_, lean_object* v_entries_234_){
_start:
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = lean_array_get_size(v_keys_231_);
v___x_236_ = lean_nat_dec_lt(v_i_233_, v___x_235_);
if (v___x_236_ == 0)
{
lean_dec(v_i_233_);
return v_entries_234_;
}
else
{
lean_object* v_k_237_; lean_object* v_v_238_; size_t v___x_239_; size_t v___x_240_; size_t v___x_241_; uint64_t v___x_242_; size_t v_h_243_; size_t v___x_244_; lean_object* v___x_245_; size_t v___x_246_; size_t v___x_247_; size_t v___x_248_; size_t v_h_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v_k_237_ = lean_array_fget_borrowed(v_keys_231_, v_i_233_);
v_v_238_ = lean_array_fget_borrowed(v_vals_232_, v_i_233_);
v___x_239_ = lean_ptr_addr(v_k_237_);
v___x_240_ = ((size_t)3ULL);
v___x_241_ = lean_usize_shift_right(v___x_239_, v___x_240_);
v___x_242_ = lean_usize_to_uint64(v___x_241_);
v_h_243_ = lean_uint64_to_usize(v___x_242_);
v___x_244_ = ((size_t)5ULL);
v___x_245_ = lean_unsigned_to_nat(1u);
v___x_246_ = ((size_t)1ULL);
v___x_247_ = lean_usize_sub(v_depth_230_, v___x_246_);
v___x_248_ = lean_usize_mul(v___x_244_, v___x_247_);
v_h_249_ = lean_usize_shift_right(v_h_243_, v___x_248_);
v___x_250_ = lean_nat_add(v_i_233_, v___x_245_);
lean_dec(v_i_233_);
lean_inc(v_v_238_);
lean_inc(v_k_237_);
v___x_251_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(v_entries_234_, v_h_249_, v_depth_230_, v_k_237_, v_v_238_);
v_i_233_ = v___x_250_;
v_entries_234_ = v___x_251_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_253_, lean_object* v_keys_254_, lean_object* v_vals_255_, lean_object* v_i_256_, lean_object* v_entries_257_){
_start:
{
size_t v_depth_boxed_258_; lean_object* v_res_259_; 
v_depth_boxed_258_ = lean_unbox_usize(v_depth_253_);
lean_dec(v_depth_253_);
v_res_259_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg(v_depth_boxed_258_, v_keys_254_, v_vals_255_, v_i_256_, v_entries_257_);
lean_dec_ref(v_vals_255_);
lean_dec_ref(v_keys_254_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg___boxed(lean_object* v_x_260_, lean_object* v_x_261_, lean_object* v_x_262_, lean_object* v_x_263_, lean_object* v_x_264_){
_start:
{
size_t v_x_3157__boxed_265_; size_t v_x_3158__boxed_266_; lean_object* v_res_267_; 
v_x_3157__boxed_265_ = lean_unbox_usize(v_x_261_);
lean_dec(v_x_261_);
v_x_3158__boxed_266_ = lean_unbox_usize(v_x_262_);
lean_dec(v_x_262_);
v_res_267_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(v_x_260_, v_x_3157__boxed_265_, v_x_3158__boxed_266_, v_x_263_, v_x_264_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1___redArg(lean_object* v_x_268_, lean_object* v_x_269_, lean_object* v_x_270_){
_start:
{
size_t v___x_271_; size_t v___x_272_; size_t v___x_273_; uint64_t v___x_274_; size_t v___x_275_; size_t v___x_276_; lean_object* v___x_277_; 
v___x_271_ = lean_ptr_addr(v_x_269_);
v___x_272_ = ((size_t)3ULL);
v___x_273_ = lean_usize_shift_right(v___x_271_, v___x_272_);
v___x_274_ = lean_usize_to_uint64(v___x_273_);
v___x_275_ = lean_uint64_to_usize(v___x_274_);
v___x_276_ = ((size_t)1ULL);
v___x_277_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(v_x_268_, v___x_275_, v___x_276_, v_x_269_, v_x_270_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType(lean_object* v_e_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v___x_286_; lean_object* v_inferType_287_; lean_object* v___x_288_; 
v___x_286_ = lean_st_ref_get(v_a_280_);
v_inferType_287_ = lean_ctor_get(v___x_286_, 4);
lean_inc_ref(v_inferType_287_);
lean_dec(v___x_286_);
v___x_288_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(v_inferType_287_, v_e_278_);
lean_dec_ref(v_inferType_287_);
if (lean_obj_tag(v___x_288_) == 1)
{
lean_object* v_val_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec_ref(v_e_278_);
v_val_289_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_288_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_val_289_);
lean_dec(v___x_288_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
lean_ctor_set_tag(v___x_291_, 0);
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_val_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
else
{
lean_object* v___x_297_; 
lean_dec(v___x_288_);
lean_inc_ref(v_e_278_);
v___x_297_ = l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_inferTypeWithoutCache(v_e_278_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_299_; 
v_a_298_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_a_298_);
lean_dec_ref_known(v___x_297_, 1);
v___x_299_ = l_Lean_Meta_Sym_shareCommonInc(v_a_298_, v_a_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_330_; 
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_330_ == 0)
{
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_330_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_330_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; lean_object* v_share_305_; lean_object* v_maxFVar_306_; lean_object* v_proofInstInfo_307_; lean_object* v_proofInstInfoFVar_308_; lean_object* v_inferType_309_; lean_object* v_getLevel_310_; lean_object* v_congrInfo_311_; lean_object* v_defEqI_312_; lean_object* v_extensions_313_; lean_object* v_issues_314_; lean_object* v_canon_315_; lean_object* v_instanceOverrides_316_; uint8_t v_debug_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_329_; 
v___x_304_ = lean_st_ref_take(v_a_280_);
v_share_305_ = lean_ctor_get(v___x_304_, 0);
v_maxFVar_306_ = lean_ctor_get(v___x_304_, 1);
v_proofInstInfo_307_ = lean_ctor_get(v___x_304_, 2);
v_proofInstInfoFVar_308_ = lean_ctor_get(v___x_304_, 3);
v_inferType_309_ = lean_ctor_get(v___x_304_, 4);
v_getLevel_310_ = lean_ctor_get(v___x_304_, 5);
v_congrInfo_311_ = lean_ctor_get(v___x_304_, 6);
v_defEqI_312_ = lean_ctor_get(v___x_304_, 7);
v_extensions_313_ = lean_ctor_get(v___x_304_, 8);
v_issues_314_ = lean_ctor_get(v___x_304_, 9);
v_canon_315_ = lean_ctor_get(v___x_304_, 10);
v_instanceOverrides_316_ = lean_ctor_get(v___x_304_, 11);
v_debug_317_ = lean_ctor_get_uint8(v___x_304_, sizeof(void*)*12);
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_329_ == 0)
{
v___x_319_ = v___x_304_;
v_isShared_320_ = v_isSharedCheck_329_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_instanceOverrides_316_);
lean_inc(v_canon_315_);
lean_inc(v_issues_314_);
lean_inc(v_extensions_313_);
lean_inc(v_defEqI_312_);
lean_inc(v_congrInfo_311_);
lean_inc(v_getLevel_310_);
lean_inc(v_inferType_309_);
lean_inc(v_proofInstInfoFVar_308_);
lean_inc(v_proofInstInfo_307_);
lean_inc(v_maxFVar_306_);
lean_inc(v_share_305_);
lean_dec(v___x_304_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_329_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_321_; lean_object* v___x_323_; 
lean_inc(v_a_300_);
v___x_321_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1___redArg(v_inferType_309_, v_e_278_, v_a_300_);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 4, v___x_321_);
v___x_323_ = v___x_319_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 12, 1);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_share_305_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v_maxFVar_306_);
lean_ctor_set(v_reuseFailAlloc_328_, 2, v_proofInstInfo_307_);
lean_ctor_set(v_reuseFailAlloc_328_, 3, v_proofInstInfoFVar_308_);
lean_ctor_set(v_reuseFailAlloc_328_, 4, v___x_321_);
lean_ctor_set(v_reuseFailAlloc_328_, 5, v_getLevel_310_);
lean_ctor_set(v_reuseFailAlloc_328_, 6, v_congrInfo_311_);
lean_ctor_set(v_reuseFailAlloc_328_, 7, v_defEqI_312_);
lean_ctor_set(v_reuseFailAlloc_328_, 8, v_extensions_313_);
lean_ctor_set(v_reuseFailAlloc_328_, 9, v_issues_314_);
lean_ctor_set(v_reuseFailAlloc_328_, 10, v_canon_315_);
lean_ctor_set(v_reuseFailAlloc_328_, 11, v_instanceOverrides_316_);
lean_ctor_set_uint8(v_reuseFailAlloc_328_, sizeof(void*)*12, v_debug_317_);
v___x_323_ = v_reuseFailAlloc_328_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v___x_324_; lean_object* v___x_326_; 
v___x_324_ = lean_st_ref_put(v_a_280_, v___x_323_);
if (v_isShared_303_ == 0)
{
v___x_326_ = v___x_302_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_a_300_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_278_);
return v___x_299_;
}
}
else
{
lean_dec_ref(v_e_278_);
return v___x_297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_inferType___boxed(lean_object* v_e_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lean_Meta_Sym_inferType(v_e_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_);
lean_dec(v_a_337_);
lean_dec_ref(v_a_336_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0(lean_object* v_00_u03b2_340_, lean_object* v_x_341_, lean_object* v_x_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(v_x_341_, v_x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___boxed(lean_object* v_00_u03b2_344_, lean_object* v_x_345_, lean_object* v_x_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0(v_00_u03b2_344_, v_x_345_, v_x_346_);
lean_dec_ref(v_x_346_);
lean_dec_ref(v_x_345_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1(lean_object* v_00_u03b2_348_, lean_object* v_x_349_, lean_object* v_x_350_, lean_object* v_x_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1___redArg(v_x_349_, v_x_350_, v_x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0(lean_object* v_00_u03b2_353_, lean_object* v_x_354_, size_t v_x_355_, lean_object* v_x_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___redArg(v_x_354_, v_x_355_, v_x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0___boxed(lean_object* v_00_u03b2_358_, lean_object* v_x_359_, lean_object* v_x_360_, lean_object* v_x_361_){
_start:
{
size_t v_x_3419__boxed_362_; lean_object* v_res_363_; 
v_x_3419__boxed_362_ = lean_unbox_usize(v_x_360_);
lean_dec(v_x_360_);
v_res_363_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0(v_00_u03b2_358_, v_x_359_, v_x_3419__boxed_362_, v_x_361_);
lean_dec_ref(v_x_361_);
lean_dec_ref(v_x_359_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2(lean_object* v_00_u03b2_364_, lean_object* v_x_365_, size_t v_x_366_, size_t v_x_367_, lean_object* v_x_368_, lean_object* v_x_369_){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___redArg(v_x_365_, v_x_366_, v_x_367_, v_x_368_, v_x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2___boxed(lean_object* v_00_u03b2_371_, lean_object* v_x_372_, lean_object* v_x_373_, lean_object* v_x_374_, lean_object* v_x_375_, lean_object* v_x_376_){
_start:
{
size_t v_x_3430__boxed_377_; size_t v_x_3431__boxed_378_; lean_object* v_res_379_; 
v_x_3430__boxed_377_ = lean_unbox_usize(v_x_373_);
lean_dec(v_x_373_);
v_x_3431__boxed_378_ = lean_unbox_usize(v_x_374_);
lean_dec(v_x_374_);
v_res_379_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2(v_00_u03b2_371_, v_x_372_, v_x_3430__boxed_377_, v_x_3431__boxed_378_, v_x_375_, v_x_376_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_380_, lean_object* v_keys_381_, lean_object* v_vals_382_, lean_object* v_heq_383_, lean_object* v_i_384_, lean_object* v_k_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___redArg(v_keys_381_, v_vals_382_, v_i_384_, v_k_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_387_, lean_object* v_keys_388_, lean_object* v_vals_389_, lean_object* v_heq_390_, lean_object* v_i_391_, lean_object* v_k_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0_spec__0_spec__1(v_00_u03b2_387_, v_keys_388_, v_vals_389_, v_heq_390_, v_i_391_, v_k_392_);
lean_dec_ref(v_k_392_);
lean_dec_ref(v_vals_389_);
lean_dec_ref(v_keys_388_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_394_, lean_object* v_n_395_, lean_object* v_k_396_, lean_object* v_v_397_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4___redArg(v_n_395_, v_k_396_, v_v_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_399_, size_t v_depth_400_, lean_object* v_keys_401_, lean_object* v_vals_402_, lean_object* v_heq_403_, lean_object* v_i_404_, lean_object* v_entries_405_){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___redArg(v_depth_400_, v_keys_401_, v_vals_402_, v_i_404_, v_entries_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_407_, lean_object* v_depth_408_, lean_object* v_keys_409_, lean_object* v_vals_410_, lean_object* v_heq_411_, lean_object* v_i_412_, lean_object* v_entries_413_){
_start:
{
size_t v_depth_boxed_414_; lean_object* v_res_415_; 
v_depth_boxed_414_ = lean_unbox_usize(v_depth_408_);
lean_dec(v_depth_408_);
v_res_415_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__5(v_00_u03b2_407_, v_depth_boxed_414_, v_keys_409_, v_vals_410_, v_heq_411_, v_i_412_, v_entries_413_);
lean_dec_ref(v_vals_410_);
lean_dec_ref(v_keys_409_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_416_, lean_object* v_x_417_, lean_object* v_x_418_, lean_object* v_x_419_, lean_object* v_x_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1_spec__2_spec__4_spec__5___redArg(v_x_417_, v_x_418_, v_x_419_, v_x_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object* v_type_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v___x_429_; lean_object* v_getLevel_430_; lean_object* v___x_431_; 
v___x_429_ = lean_st_ref_get(v_a_423_);
v_getLevel_430_ = lean_ctor_get(v___x_429_, 5);
lean_inc_ref(v_getLevel_430_);
lean_dec(v___x_429_);
v___x_431_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_inferType_spec__0___redArg(v_getLevel_430_, v_type_422_);
lean_dec_ref(v_getLevel_430_);
if (lean_obj_tag(v___x_431_) == 1)
{
lean_object* v_val_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
lean_dec_ref(v_type_422_);
v_val_432_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_431_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_val_432_);
lean_dec(v___x_431_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
lean_ctor_set_tag(v___x_434_, 0);
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_val_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
else
{
lean_object* v___x_440_; 
lean_dec(v___x_431_);
lean_inc_ref(v_type_422_);
v___x_440_ = l___private_Lean_Meta_Sym_InferType_0__Lean_Meta_Sym_getLevelWithoutCache(v_type_422_, v_a_424_, v_a_425_, v_a_426_, v_a_427_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_471_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_471_ == 0)
{
v___x_443_ = v___x_440_;
v_isShared_444_ = v_isSharedCheck_471_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_471_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_445_; lean_object* v_share_446_; lean_object* v_maxFVar_447_; lean_object* v_proofInstInfo_448_; lean_object* v_proofInstInfoFVar_449_; lean_object* v_inferType_450_; lean_object* v_getLevel_451_; lean_object* v_congrInfo_452_; lean_object* v_defEqI_453_; lean_object* v_extensions_454_; lean_object* v_issues_455_; lean_object* v_canon_456_; lean_object* v_instanceOverrides_457_; uint8_t v_debug_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_470_; 
v___x_445_ = lean_st_ref_take(v_a_423_);
v_share_446_ = lean_ctor_get(v___x_445_, 0);
v_maxFVar_447_ = lean_ctor_get(v___x_445_, 1);
v_proofInstInfo_448_ = lean_ctor_get(v___x_445_, 2);
v_proofInstInfoFVar_449_ = lean_ctor_get(v___x_445_, 3);
v_inferType_450_ = lean_ctor_get(v___x_445_, 4);
v_getLevel_451_ = lean_ctor_get(v___x_445_, 5);
v_congrInfo_452_ = lean_ctor_get(v___x_445_, 6);
v_defEqI_453_ = lean_ctor_get(v___x_445_, 7);
v_extensions_454_ = lean_ctor_get(v___x_445_, 8);
v_issues_455_ = lean_ctor_get(v___x_445_, 9);
v_canon_456_ = lean_ctor_get(v___x_445_, 10);
v_instanceOverrides_457_ = lean_ctor_get(v___x_445_, 11);
v_debug_458_ = lean_ctor_get_uint8(v___x_445_, sizeof(void*)*12);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_470_ == 0)
{
v___x_460_ = v___x_445_;
v_isShared_461_ = v_isSharedCheck_470_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_instanceOverrides_457_);
lean_inc(v_canon_456_);
lean_inc(v_issues_455_);
lean_inc(v_extensions_454_);
lean_inc(v_defEqI_453_);
lean_inc(v_congrInfo_452_);
lean_inc(v_getLevel_451_);
lean_inc(v_inferType_450_);
lean_inc(v_proofInstInfoFVar_449_);
lean_inc(v_proofInstInfo_448_);
lean_inc(v_maxFVar_447_);
lean_inc(v_share_446_);
lean_dec(v___x_445_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_470_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___x_464_; 
lean_inc(v_a_441_);
v___x_462_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_inferType_spec__1___redArg(v_getLevel_451_, v_type_422_, v_a_441_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 5, v___x_462_);
v___x_464_ = v___x_460_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 12, 1);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_share_446_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_maxFVar_447_);
lean_ctor_set(v_reuseFailAlloc_469_, 2, v_proofInstInfo_448_);
lean_ctor_set(v_reuseFailAlloc_469_, 3, v_proofInstInfoFVar_449_);
lean_ctor_set(v_reuseFailAlloc_469_, 4, v_inferType_450_);
lean_ctor_set(v_reuseFailAlloc_469_, 5, v___x_462_);
lean_ctor_set(v_reuseFailAlloc_469_, 6, v_congrInfo_452_);
lean_ctor_set(v_reuseFailAlloc_469_, 7, v_defEqI_453_);
lean_ctor_set(v_reuseFailAlloc_469_, 8, v_extensions_454_);
lean_ctor_set(v_reuseFailAlloc_469_, 9, v_issues_455_);
lean_ctor_set(v_reuseFailAlloc_469_, 10, v_canon_456_);
lean_ctor_set(v_reuseFailAlloc_469_, 11, v_instanceOverrides_457_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, sizeof(void*)*12, v_debug_458_);
v___x_464_ = v_reuseFailAlloc_469_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
lean_object* v___x_465_; lean_object* v___x_467_; 
v___x_465_ = lean_st_ref_put(v_a_423_, v___x_464_);
if (v_isShared_444_ == 0)
{
v___x_467_ = v___x_443_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_441_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
}
else
{
lean_dec_ref(v_type_422_);
return v___x_440_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___redArg___boxed(lean_object* v_type_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Lean_Meta_Sym_getLevel___redArg(v_type_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_);
lean_dec(v_a_477_);
lean_dec_ref(v_a_476_);
lean_dec(v_a_475_);
lean_dec_ref(v_a_474_);
lean_dec(v_a_473_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel(lean_object* v_type_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Lean_Meta_Sym_getLevel___redArg(v_type_480_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLevel___boxed(lean_object* v_type_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lean_Meta_Sym_getLevel(v_type_489_, v_a_490_, v_a_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_);
lean_dec(v_a_495_);
lean_dec_ref(v_a_494_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
lean_dec(v_a_491_);
lean_dec_ref(v_a_490_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl(lean_object* v_e_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
lean_object* v___x_511_; 
lean_inc_ref(v_e_503_);
v___x_511_ = l_Lean_Meta_Sym_inferType(v_e_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_513_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc_n(v_a_512_, 2);
lean_dec_ref_known(v___x_511_, 1);
v___x_513_ = l_Lean_Meta_Sym_getLevel___redArg(v_a_512_, v_a_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_526_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_526_ == 0)
{
v___x_516_ = v___x_513_;
v_isShared_517_ = v_isSharedCheck_526_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_513_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_526_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_524_; 
v___x_518_ = ((lean_object*)(l_Lean_Meta_Sym_mkEqRefl___closed__2));
v___x_519_ = lean_box(0);
v___x_520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_520_, 0, v_a_514_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
v___x_521_ = l_Lean_mkConst(v___x_518_, v___x_520_);
v___x_522_ = l_Lean_mkAppB(v___x_521_, v_a_512_, v_e_503_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_522_);
v___x_524_ = v___x_516_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_522_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_dec(v_a_512_);
lean_dec_ref(v_e_503_);
v_a_527_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_513_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_513_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
else
{
lean_dec_ref(v_e_503_);
return v___x_511_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkEqRefl___boxed(lean_object* v_e_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Lean_Meta_Sym_mkEqRefl(v_e_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_, v_a_541_);
lean_dec(v_a_541_);
lean_dec_ref(v_a_540_);
lean_dec(v_a_539_);
lean_dec_ref(v_a_538_);
lean_dec(v_a_537_);
lean_dec_ref(v_a_536_);
return v_res_543_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_InferType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_InferType(builtin);
}
#ifdef __cplusplus
}
#endif
