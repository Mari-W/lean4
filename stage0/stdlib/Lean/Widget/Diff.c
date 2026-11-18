// Lean compiler output
// Module: Lean.Widget.Diff
// Imports: public import Lean.Widget.InteractiveGoal
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
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushNaryArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_SubExpr_Pos_pushNthBindingDomain(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Expr_getForallBodyMaxDepth(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_getFVarFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushNthBindingBody(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getForallBinderNames(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushBindingBody(lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushBindingDomain(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushProj(lean_object*);
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_LocalContext_sanitizeNames(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldl___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_SubExpr_Pos_root;
lean_object* l_Lean_Widget_SubexprInfo_withDiffTag(uint8_t, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarIdSet_ofArray(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "showTacticDiff"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(169, 112, 244, 47, 27, 57, 231, 91)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "When true, interactive goals for tactics will be decorated with diffing information. "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Widget"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(238, 115, 46, 200, 151, 151, 185, 65)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Diff"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(236, 91, 159, 25, 73, 43, 233, 107)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(109, 1, 7, 240, 141, 39, 57, 92)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(216, 146, 105, 179, 45, 202, 141, 145)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(68, 86, 104, 123, 239, 160, 152, 136)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 44, 177, 75, 219, 90, 236, 185)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "change"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "insert"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__5, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1_value)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5_value)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6_value)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "before: "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\nafter: "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "should not happen"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "internal error: empty fvar list!"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Unknown goal "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Failed to find decl for "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unknown goal "};
static const lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(lean_object*, uint8_t, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7(uint8_t, lean_object*, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_72_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_73_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_74_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_75_ = l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(v___x_72_, v___x_73_, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4____boxed(lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_();
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___impl(uint8_t v_x_78_){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = lean_box(v_x_78_);
v___x_80_ = lean_obj_tag_nat(v___x_79_);
lean_dec(v___x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___impl___boxed(lean_object* v_x_81_){
_start:
{
uint8_t v_x_4__boxed_82_; lean_object* v_res_83_; 
v_x_4__boxed_82_ = lean_unbox(v_x_81_);
v_res_83_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___impl(v_x_4__boxed_82_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg(lean_object* v_k_84_){
_start:
{
lean_inc(v_k_84_);
return v_k_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg___boxed(lean_object* v_k_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg(v_k_85_);
lean_dec(v_k_85_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim(lean_object* v_motive_87_, lean_object* v_ctorIdx_88_, uint8_t v_t_89_, lean_object* v_h_90_, lean_object* v_k_91_){
_start:
{
lean_inc(v_k_91_);
return v_k_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___boxed(lean_object* v_motive_92_, lean_object* v_ctorIdx_93_, lean_object* v_t_94_, lean_object* v_h_95_, lean_object* v_k_96_){
_start:
{
uint8_t v_t_boxed_97_; lean_object* v_res_98_; 
v_t_boxed_97_ = lean_unbox(v_t_94_);
v_res_98_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim(v_motive_92_, v_ctorIdx_93_, v_t_boxed_97_, v_h_95_, v_k_96_);
lean_dec(v_k_96_);
lean_dec(v_ctorIdx_93_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg(lean_object* v_change_99_){
_start:
{
lean_inc(v_change_99_);
return v_change_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg___boxed(lean_object* v_change_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg(v_change_100_);
lean_dec(v_change_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim(lean_object* v_motive_102_, uint8_t v_t_103_, lean_object* v_h_104_, lean_object* v_change_105_){
_start:
{
lean_inc(v_change_105_);
return v_change_105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___boxed(lean_object* v_motive_106_, lean_object* v_t_107_, lean_object* v_h_108_, lean_object* v_change_109_){
_start:
{
uint8_t v_t_boxed_110_; lean_object* v_res_111_; 
v_t_boxed_110_ = lean_unbox(v_t_107_);
v_res_111_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim(v_motive_106_, v_t_boxed_110_, v_h_108_, v_change_109_);
lean_dec(v_change_109_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg(lean_object* v_delete_112_){
_start:
{
lean_inc(v_delete_112_);
return v_delete_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg___boxed(lean_object* v_delete_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg(v_delete_113_);
lean_dec(v_delete_113_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim(lean_object* v_motive_115_, uint8_t v_t_116_, lean_object* v_h_117_, lean_object* v_delete_118_){
_start:
{
lean_inc(v_delete_118_);
return v_delete_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___boxed(lean_object* v_motive_119_, lean_object* v_t_120_, lean_object* v_h_121_, lean_object* v_delete_122_){
_start:
{
uint8_t v_t_boxed_123_; lean_object* v_res_124_; 
v_t_boxed_123_ = lean_unbox(v_t_120_);
v_res_124_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim(v_motive_119_, v_t_boxed_123_, v_h_121_, v_delete_122_);
lean_dec(v_delete_122_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg(lean_object* v_insert_125_){
_start:
{
lean_inc(v_insert_125_);
return v_insert_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg___boxed(lean_object* v_insert_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg(v_insert_126_);
lean_dec(v_insert_126_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim(lean_object* v_motive_128_, uint8_t v_t_129_, lean_object* v_h_130_, lean_object* v_insert_131_){
_start:
{
lean_inc(v_insert_131_);
return v_insert_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___boxed(lean_object* v_motive_132_, lean_object* v_t_133_, lean_object* v_h_134_, lean_object* v_insert_135_){
_start:
{
uint8_t v_t_boxed_136_; lean_object* v_res_137_; 
v_t_boxed_136_ = lean_unbox(v_t_133_);
v_res_137_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim(v_motive_132_, v_t_boxed_136_, v_h_134_, v_insert_135_);
lean_dec(v_insert_135_);
return v_res_137_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(uint8_t v_x_138_, uint8_t v_x_139_){
_start:
{
if (v_x_138_ == 0)
{
switch(v_x_139_)
{
case 0:
{
uint8_t v___x_140_; 
v___x_140_ = 1;
return v___x_140_;
}
case 1:
{
uint8_t v___x_141_; 
v___x_141_ = 3;
return v___x_141_;
}
default: 
{
uint8_t v___x_142_; 
v___x_142_ = 5;
return v___x_142_;
}
}
}
else
{
switch(v_x_139_)
{
case 0:
{
uint8_t v___x_143_; 
v___x_143_ = 0;
return v___x_143_;
}
case 1:
{
uint8_t v___x_144_; 
v___x_144_ = 2;
return v___x_144_;
}
default: 
{
uint8_t v___x_145_; 
v___x_145_ = 4;
return v___x_145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag___boxed(lean_object* v_x_146_, lean_object* v_x_147_){
_start:
{
uint8_t v_x_49__boxed_148_; uint8_t v_x_50__boxed_149_; uint8_t v_res_150_; lean_object* v_r_151_; 
v_x_49__boxed_148_ = lean_unbox(v_x_146_);
v_x_50__boxed_149_ = lean_unbox(v_x_147_);
v_res_150_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(v_x_49__boxed_148_, v_x_50__boxed_149_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(uint8_t v_x_155_){
_start:
{
switch(v_x_155_)
{
case 0:
{
lean_object* v___x_156_; 
v___x_156_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0));
return v___x_156_;
}
case 1:
{
lean_object* v___x_157_; 
v___x_157_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1));
return v___x_157_;
}
default: 
{
lean_object* v___x_158_; 
v___x_158_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2));
return v___x_158_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___boxed(lean_object* v_x_159_){
_start:
{
uint8_t v_x_31__boxed_160_; lean_object* v_res_161_; 
v_x_31__boxed_160_ = lean_unbox(v_x_159_);
v_res_161_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(v_x_31__boxed_160_);
return v_res_161_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0(lean_object* v_x_167_, lean_object* v_y_168_){
_start:
{
uint8_t v___x_169_; 
v___x_169_ = lean_nat_dec_lt(v_x_167_, v_y_168_);
if (v___x_169_ == 0)
{
uint8_t v___x_170_; 
v___x_170_ = lean_nat_dec_eq(v_x_167_, v_y_168_);
if (v___x_170_ == 0)
{
uint8_t v___x_171_; 
v___x_171_ = 2;
return v___x_171_;
}
else
{
uint8_t v___x_172_; 
v___x_172_ = 1;
return v___x_172_;
}
}
else
{
uint8_t v___x_173_; 
v___x_173_ = 0;
return v___x_173_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0___boxed(lean_object* v_x_174_, lean_object* v_y_175_){
_start:
{
uint8_t v_res_176_; lean_object* v_r_177_; 
v_res_176_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0(v_x_174_, v_y_175_);
lean_dec(v_y_175_);
lean_dec(v_x_174_);
v_r_177_ = lean_box(v_res_176_);
return v_r_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1(uint8_t v_b_u2082_178_, lean_object* v_x_179_){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_box(v_b_u2082_178_);
v___x_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1___boxed(lean_object* v_b_u2082_182_, lean_object* v_x_183_){
_start:
{
uint8_t v_b_u2082_boxed_184_; lean_object* v_res_185_; 
v_b_u2082_boxed_184_ = lean_unbox(v_b_u2082_182_);
v_res_185_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1(v_b_u2082_boxed_184_, v_x_183_);
lean_dec(v_x_183_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2(lean_object* v___f_186_, lean_object* v_t_187_, lean_object* v_a_188_, uint8_t v_b_u2082_189_){
_start:
{
lean_object* v___x_190_; lean_object* v___f_191_; lean_object* v___x_192_; 
v___x_190_ = lean_box(v_b_u2082_189_);
v___f_191_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1___boxed), 2, 1);
lean_closure_set(v___f_191_, 0, v___x_190_);
v___x_192_ = l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(v___f_186_, v_a_188_, v___f_191_, v_t_187_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2___boxed(lean_object* v___f_193_, lean_object* v_t_194_, lean_object* v_a_195_, lean_object* v_b_u2082_196_){
_start:
{
uint8_t v_b_u2082_boxed_197_; lean_object* v_res_198_; 
v_b_u2082_boxed_197_ = lean_unbox(v_b_u2082_196_);
v_res_198_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2(v___f_193_, v_t_194_, v_a_195_, v_b_u2082_boxed_197_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__5(lean_object* v___f_199_, lean_object* v___f_200_, lean_object* v_a_201_, lean_object* v_b_202_){
_start:
{
lean_object* v_changesBefore_203_; lean_object* v_changesAfter_204_; lean_object* v_changesBefore_205_; lean_object* v_changesAfter_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_215_; 
v_changesBefore_203_ = lean_ctor_get(v_a_201_, 0);
lean_inc(v_changesBefore_203_);
v_changesAfter_204_ = lean_ctor_get(v_a_201_, 1);
lean_inc(v_changesAfter_204_);
lean_dec_ref(v_a_201_);
v_changesBefore_205_ = lean_ctor_get(v_b_202_, 0);
v_changesAfter_206_ = lean_ctor_get(v_b_202_, 1);
v_isSharedCheck_215_ = !lean_is_exclusive(v_b_202_);
if (v_isSharedCheck_215_ == 0)
{
v___x_208_ = v_b_202_;
v_isShared_209_ = v_isSharedCheck_215_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_changesAfter_206_);
lean_inc(v_changesBefore_205_);
lean_dec(v_b_202_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_215_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_213_; 
v___x_210_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_199_, v_changesBefore_203_, v_changesBefore_205_);
v___x_211_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_200_, v_changesAfter_204_, v_changesAfter_206_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 1, v___x_211_);
lean_ctor_set(v___x_208_, 0, v___x_210_);
v___x_213_ = v___x_208_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v___x_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0(lean_object* v_x_225_){
_start:
{
lean_object* v_fst_226_; lean_object* v_snd_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v_fst_226_ = lean_ctor_get(v_x_225_, 0);
v_snd_227_ = lean_ctor_get(v_x_225_, 1);
v___x_228_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0));
v___x_229_ = l_Lean_SubExpr_Pos_toString(v_fst_226_);
v___x_230_ = lean_string_append(v___x_228_, v___x_229_);
lean_dec_ref(v___x_229_);
v___x_231_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1));
v___x_232_ = lean_string_append(v___x_230_, v___x_231_);
v___x_233_ = lean_unbox(v_snd_227_);
v___x_234_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(v___x_233_);
v___x_235_ = lean_string_append(v___x_232_, v___x_234_);
lean_dec_ref(v___x_234_);
v___x_236_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2));
v___x_237_ = lean_string_append(v___x_235_, v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___boxed(lean_object* v_x_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0(v_x_238_);
lean_dec_ref(v_x_238_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1(lean_object* v_x1_240_, uint8_t v_x2_241_, lean_object* v_x3_242_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_243_ = lean_box(v_x2_241_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v_x1_240_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set(v___x_245_, 1, v_x3_242_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1___boxed(lean_object* v_x1_246_, lean_object* v_x2_247_, lean_object* v_x3_248_){
_start:
{
uint8_t v_x2_245__boxed_249_; lean_object* v_res_250_; 
v_x2_245__boxed_249_ = lean_unbox(v_x2_247_);
v_res_250_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1(v_x1_246_, v_x2_245__boxed_249_, v_x3_248_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2(lean_object* v___f_270_, lean_object* v___f_271_, lean_object* v_p_272_){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_273_ = lean_box(0);
v___x_274_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9));
v___x_275_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_274_, v___f_270_, v___x_273_, v_p_272_);
v___x_276_ = l_List_mapTR_loop___redArg(v___f_271_, v___x_275_, v___x_273_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3(lean_object* v_f_279_, lean_object* v___f_280_, lean_object* v_x_281_){
_start:
{
lean_object* v_changesBefore_282_; lean_object* v_changesAfter_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v_changesBefore_282_ = lean_ctor_get(v_x_281_, 0);
lean_inc(v_changesBefore_282_);
v_changesAfter_283_ = lean_ctor_get(v_x_281_, 1);
lean_inc(v_changesAfter_283_);
lean_dec_ref(v_x_281_);
v___x_284_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0));
lean_inc_ref(v_f_279_);
v___x_285_ = lean_apply_1(v_f_279_, v_changesBefore_282_);
lean_inc_ref(v___f_280_);
v___x_286_ = l_List_toString___redArg(v___f_280_, v___x_285_);
v___x_287_ = lean_string_append(v___x_284_, v___x_286_);
lean_dec_ref(v___x_286_);
v___x_288_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1));
v___x_289_ = lean_string_append(v___x_287_, v___x_288_);
v___x_290_ = lean_apply_1(v_f_279_, v_changesAfter_283_);
v___x_291_ = l_List_toString___redArg(v___f_280_, v___x_290_);
v___x_292_ = lean_string_append(v___x_289_, v___x_291_);
lean_dec_ref(v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(lean_object* v_k_303_, lean_object* v_v_304_, lean_object* v_t_305_){
_start:
{
if (lean_obj_tag(v_t_305_) == 0)
{
lean_object* v_size_306_; lean_object* v_k_307_; lean_object* v_v_308_; lean_object* v_l_309_; lean_object* v_r_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_591_; 
v_size_306_ = lean_ctor_get(v_t_305_, 0);
v_k_307_ = lean_ctor_get(v_t_305_, 1);
v_v_308_ = lean_ctor_get(v_t_305_, 2);
v_l_309_ = lean_ctor_get(v_t_305_, 3);
v_r_310_ = lean_ctor_get(v_t_305_, 4);
v_isSharedCheck_591_ = !lean_is_exclusive(v_t_305_);
if (v_isSharedCheck_591_ == 0)
{
v___x_312_ = v_t_305_;
v_isShared_313_ = v_isSharedCheck_591_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_r_310_);
lean_inc(v_l_309_);
lean_inc(v_v_308_);
lean_inc(v_k_307_);
lean_inc(v_size_306_);
lean_dec(v_t_305_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_591_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
uint8_t v___x_314_; 
v___x_314_ = lean_nat_dec_lt(v_k_303_, v_k_307_);
if (v___x_314_ == 0)
{
uint8_t v___x_315_; 
v___x_315_ = lean_nat_dec_eq(v_k_303_, v_k_307_);
if (v___x_315_ == 0)
{
lean_object* v_impl_316_; lean_object* v___x_317_; 
lean_dec(v_size_306_);
v_impl_316_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_303_, v_v_304_, v_r_310_);
v___x_317_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_309_) == 0)
{
lean_object* v_size_318_; lean_object* v_size_319_; lean_object* v_k_320_; lean_object* v_v_321_; lean_object* v_l_322_; lean_object* v_r_323_; lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v_size_318_ = lean_ctor_get(v_l_309_, 0);
v_size_319_ = lean_ctor_get(v_impl_316_, 0);
v_k_320_ = lean_ctor_get(v_impl_316_, 1);
v_v_321_ = lean_ctor_get(v_impl_316_, 2);
v_l_322_ = lean_ctor_get(v_impl_316_, 3);
lean_inc(v_l_322_);
v_r_323_ = lean_ctor_get(v_impl_316_, 4);
v___x_324_ = lean_unsigned_to_nat(3u);
v___x_325_ = lean_nat_mul(v___x_324_, v_size_318_);
v___x_326_ = lean_nat_dec_lt(v___x_325_, v_size_319_);
lean_dec(v___x_325_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_330_; 
lean_dec(v_l_322_);
v___x_327_ = lean_nat_add(v___x_317_, v_size_318_);
v___x_328_ = lean_nat_add(v___x_327_, v_size_319_);
lean_dec(v___x_327_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_impl_316_);
lean_ctor_set(v___x_312_, 0, v___x_328_);
v___x_330_ = v___x_312_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_328_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_331_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_331_, 3, v_l_309_);
lean_ctor_set(v_reuseFailAlloc_331_, 4, v_impl_316_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
else
{
lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_395_; 
lean_inc(v_r_323_);
lean_inc(v_v_321_);
lean_inc(v_k_320_);
lean_inc(v_size_319_);
v_isSharedCheck_395_ = !lean_is_exclusive(v_impl_316_);
if (v_isSharedCheck_395_ == 0)
{
lean_object* v_unused_396_; lean_object* v_unused_397_; lean_object* v_unused_398_; lean_object* v_unused_399_; lean_object* v_unused_400_; 
v_unused_396_ = lean_ctor_get(v_impl_316_, 4);
lean_dec(v_unused_396_);
v_unused_397_ = lean_ctor_get(v_impl_316_, 3);
lean_dec(v_unused_397_);
v_unused_398_ = lean_ctor_get(v_impl_316_, 2);
lean_dec(v_unused_398_);
v_unused_399_ = lean_ctor_get(v_impl_316_, 1);
lean_dec(v_unused_399_);
v_unused_400_ = lean_ctor_get(v_impl_316_, 0);
lean_dec(v_unused_400_);
v___x_333_ = v_impl_316_;
v_isShared_334_ = v_isSharedCheck_395_;
goto v_resetjp_332_;
}
else
{
lean_dec(v_impl_316_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_395_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v_size_335_; lean_object* v_k_336_; lean_object* v_v_337_; lean_object* v_l_338_; lean_object* v_r_339_; lean_object* v_size_340_; lean_object* v___x_341_; lean_object* v___x_342_; uint8_t v___x_343_; 
v_size_335_ = lean_ctor_get(v_l_322_, 0);
v_k_336_ = lean_ctor_get(v_l_322_, 1);
v_v_337_ = lean_ctor_get(v_l_322_, 2);
v_l_338_ = lean_ctor_get(v_l_322_, 3);
v_r_339_ = lean_ctor_get(v_l_322_, 4);
v_size_340_ = lean_ctor_get(v_r_323_, 0);
v___x_341_ = lean_unsigned_to_nat(2u);
v___x_342_ = lean_nat_mul(v___x_341_, v_size_340_);
v___x_343_ = lean_nat_dec_lt(v_size_335_, v___x_342_);
lean_dec(v___x_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_371_; 
lean_inc(v_r_339_);
lean_inc(v_l_338_);
lean_inc(v_v_337_);
lean_inc(v_k_336_);
v_isSharedCheck_371_ = !lean_is_exclusive(v_l_322_);
if (v_isSharedCheck_371_ == 0)
{
lean_object* v_unused_372_; lean_object* v_unused_373_; lean_object* v_unused_374_; lean_object* v_unused_375_; lean_object* v_unused_376_; 
v_unused_372_ = lean_ctor_get(v_l_322_, 4);
lean_dec(v_unused_372_);
v_unused_373_ = lean_ctor_get(v_l_322_, 3);
lean_dec(v_unused_373_);
v_unused_374_ = lean_ctor_get(v_l_322_, 2);
lean_dec(v_unused_374_);
v_unused_375_ = lean_ctor_get(v_l_322_, 1);
lean_dec(v_unused_375_);
v_unused_376_ = lean_ctor_get(v_l_322_, 0);
lean_dec(v_unused_376_);
v___x_345_ = v_l_322_;
v_isShared_346_ = v_isSharedCheck_371_;
goto v_resetjp_344_;
}
else
{
lean_dec(v_l_322_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_371_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___y_350_; lean_object* v___y_351_; lean_object* v___y_352_; lean_object* v___y_361_; 
v___x_347_ = lean_nat_add(v___x_317_, v_size_318_);
v___x_348_ = lean_nat_add(v___x_347_, v_size_319_);
lean_dec(v_size_319_);
if (lean_obj_tag(v_l_338_) == 0)
{
lean_object* v_size_369_; 
v_size_369_ = lean_ctor_get(v_l_338_, 0);
lean_inc(v_size_369_);
v___y_361_ = v_size_369_;
goto v___jp_360_;
}
else
{
lean_object* v___x_370_; 
v___x_370_ = lean_unsigned_to_nat(0u);
v___y_361_ = v___x_370_;
goto v___jp_360_;
}
v___jp_349_:
{
lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_353_ = lean_nat_add(v___y_350_, v___y_352_);
lean_dec(v___y_352_);
lean_dec(v___y_350_);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 4, v_r_323_);
lean_ctor_set(v___x_345_, 3, v_r_339_);
lean_ctor_set(v___x_345_, 2, v_v_321_);
lean_ctor_set(v___x_345_, 1, v_k_320_);
lean_ctor_set(v___x_345_, 0, v___x_353_);
v___x_355_ = v___x_345_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v___x_353_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_k_320_);
lean_ctor_set(v_reuseFailAlloc_359_, 2, v_v_321_);
lean_ctor_set(v_reuseFailAlloc_359_, 3, v_r_339_);
lean_ctor_set(v_reuseFailAlloc_359_, 4, v_r_323_);
v___x_355_ = v_reuseFailAlloc_359_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
lean_object* v___x_357_; 
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 4, v___x_355_);
lean_ctor_set(v___x_333_, 3, v___y_351_);
lean_ctor_set(v___x_333_, 2, v_v_337_);
lean_ctor_set(v___x_333_, 1, v_k_336_);
lean_ctor_set(v___x_333_, 0, v___x_348_);
v___x_357_ = v___x_333_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_348_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_k_336_);
lean_ctor_set(v_reuseFailAlloc_358_, 2, v_v_337_);
lean_ctor_set(v_reuseFailAlloc_358_, 3, v___y_351_);
lean_ctor_set(v_reuseFailAlloc_358_, 4, v___x_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
v___jp_360_:
{
lean_object* v___x_362_; lean_object* v___x_364_; 
v___x_362_ = lean_nat_add(v___x_347_, v___y_361_);
lean_dec(v___y_361_);
lean_dec(v___x_347_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_l_338_);
lean_ctor_set(v___x_312_, 0, v___x_362_);
v___x_364_ = v___x_312_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_362_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_368_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_368_, 3, v_l_309_);
lean_ctor_set(v_reuseFailAlloc_368_, 4, v_l_338_);
v___x_364_ = v_reuseFailAlloc_368_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
lean_object* v___x_365_; 
v___x_365_ = lean_nat_add(v___x_317_, v_size_340_);
if (lean_obj_tag(v_r_339_) == 0)
{
lean_object* v_size_366_; 
v_size_366_ = lean_ctor_get(v_r_339_, 0);
lean_inc(v_size_366_);
v___y_350_ = v___x_365_;
v___y_351_ = v___x_364_;
v___y_352_ = v_size_366_;
goto v___jp_349_;
}
else
{
lean_object* v___x_367_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___y_350_ = v___x_365_;
v___y_351_ = v___x_364_;
v___y_352_ = v___x_367_;
goto v___jp_349_;
}
}
}
}
}
else
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_381_; 
lean_del_object(v___x_312_);
v___x_377_ = lean_nat_add(v___x_317_, v_size_318_);
v___x_378_ = lean_nat_add(v___x_377_, v_size_319_);
lean_dec(v_size_319_);
v___x_379_ = lean_nat_add(v___x_377_, v_size_335_);
lean_dec(v___x_377_);
lean_inc_ref(v_l_309_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 4, v_l_322_);
lean_ctor_set(v___x_333_, 3, v_l_309_);
lean_ctor_set(v___x_333_, 2, v_v_308_);
lean_ctor_set(v___x_333_, 1, v_k_307_);
lean_ctor_set(v___x_333_, 0, v___x_379_);
v___x_381_ = v___x_333_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_379_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_394_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_394_, 3, v_l_309_);
lean_ctor_set(v_reuseFailAlloc_394_, 4, v_l_322_);
v___x_381_ = v_reuseFailAlloc_394_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
v_isSharedCheck_388_ = !lean_is_exclusive(v_l_309_);
if (v_isSharedCheck_388_ == 0)
{
lean_object* v_unused_389_; lean_object* v_unused_390_; lean_object* v_unused_391_; lean_object* v_unused_392_; lean_object* v_unused_393_; 
v_unused_389_ = lean_ctor_get(v_l_309_, 4);
lean_dec(v_unused_389_);
v_unused_390_ = lean_ctor_get(v_l_309_, 3);
lean_dec(v_unused_390_);
v_unused_391_ = lean_ctor_get(v_l_309_, 2);
lean_dec(v_unused_391_);
v_unused_392_ = lean_ctor_get(v_l_309_, 1);
lean_dec(v_unused_392_);
v_unused_393_ = lean_ctor_get(v_l_309_, 0);
lean_dec(v_unused_393_);
v___x_383_ = v_l_309_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_dec(v_l_309_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 4, v_r_323_);
lean_ctor_set(v___x_383_, 3, v___x_381_);
lean_ctor_set(v___x_383_, 2, v_v_321_);
lean_ctor_set(v___x_383_, 1, v_k_320_);
lean_ctor_set(v___x_383_, 0, v___x_378_);
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v___x_378_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v_k_320_);
lean_ctor_set(v_reuseFailAlloc_387_, 2, v_v_321_);
lean_ctor_set(v_reuseFailAlloc_387_, 3, v___x_381_);
lean_ctor_set(v_reuseFailAlloc_387_, 4, v_r_323_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_401_; 
v_l_401_ = lean_ctor_get(v_impl_316_, 3);
lean_inc(v_l_401_);
if (lean_obj_tag(v_l_401_) == 0)
{
lean_object* v_r_402_; lean_object* v_k_403_; lean_object* v_v_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_427_; 
v_r_402_ = lean_ctor_get(v_impl_316_, 4);
v_k_403_ = lean_ctor_get(v_impl_316_, 1);
v_v_404_ = lean_ctor_get(v_impl_316_, 2);
v_isSharedCheck_427_ = !lean_is_exclusive(v_impl_316_);
if (v_isSharedCheck_427_ == 0)
{
lean_object* v_unused_428_; lean_object* v_unused_429_; 
v_unused_428_ = lean_ctor_get(v_impl_316_, 3);
lean_dec(v_unused_428_);
v_unused_429_ = lean_ctor_get(v_impl_316_, 0);
lean_dec(v_unused_429_);
v___x_406_ = v_impl_316_;
v_isShared_407_ = v_isSharedCheck_427_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_r_402_);
lean_inc(v_v_404_);
lean_inc(v_k_403_);
lean_dec(v_impl_316_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_427_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v_k_408_; lean_object* v_v_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_423_; 
v_k_408_ = lean_ctor_get(v_l_401_, 1);
v_v_409_ = lean_ctor_get(v_l_401_, 2);
v_isSharedCheck_423_ = !lean_is_exclusive(v_l_401_);
if (v_isSharedCheck_423_ == 0)
{
lean_object* v_unused_424_; lean_object* v_unused_425_; lean_object* v_unused_426_; 
v_unused_424_ = lean_ctor_get(v_l_401_, 4);
lean_dec(v_unused_424_);
v_unused_425_ = lean_ctor_get(v_l_401_, 3);
lean_dec(v_unused_425_);
v_unused_426_ = lean_ctor_get(v_l_401_, 0);
lean_dec(v_unused_426_);
v___x_411_ = v_l_401_;
v_isShared_412_ = v_isSharedCheck_423_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_v_409_);
lean_inc(v_k_408_);
lean_dec(v_l_401_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_423_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; lean_object* v___x_415_; 
v___x_413_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_402_, 2);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 4, v_r_402_);
lean_ctor_set(v___x_411_, 3, v_r_402_);
lean_ctor_set(v___x_411_, 2, v_v_308_);
lean_ctor_set(v___x_411_, 1, v_k_307_);
lean_ctor_set(v___x_411_, 0, v___x_317_);
v___x_415_ = v___x_411_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_422_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_422_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_422_, 3, v_r_402_);
lean_ctor_set(v_reuseFailAlloc_422_, 4, v_r_402_);
v___x_415_ = v_reuseFailAlloc_422_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_417_; 
lean_inc(v_r_402_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 3, v_r_402_);
lean_ctor_set(v___x_406_, 0, v___x_317_);
v___x_417_ = v___x_406_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v_k_403_);
lean_ctor_set(v_reuseFailAlloc_421_, 2, v_v_404_);
lean_ctor_set(v_reuseFailAlloc_421_, 3, v_r_402_);
lean_ctor_set(v_reuseFailAlloc_421_, 4, v_r_402_);
v___x_417_ = v_reuseFailAlloc_421_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
lean_object* v___x_419_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v___x_417_);
lean_ctor_set(v___x_312_, 3, v___x_415_);
lean_ctor_set(v___x_312_, 2, v_v_409_);
lean_ctor_set(v___x_312_, 1, v_k_408_);
lean_ctor_set(v___x_312_, 0, v___x_413_);
v___x_419_ = v___x_312_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_413_);
lean_ctor_set(v_reuseFailAlloc_420_, 1, v_k_408_);
lean_ctor_set(v_reuseFailAlloc_420_, 2, v_v_409_);
lean_ctor_set(v_reuseFailAlloc_420_, 3, v___x_415_);
lean_ctor_set(v_reuseFailAlloc_420_, 4, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
}
}
else
{
lean_object* v_r_430_; 
v_r_430_ = lean_ctor_get(v_impl_316_, 4);
lean_inc(v_r_430_);
if (lean_obj_tag(v_r_430_) == 0)
{
lean_object* v_k_431_; lean_object* v_v_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_443_; 
v_k_431_ = lean_ctor_get(v_impl_316_, 1);
v_v_432_ = lean_ctor_get(v_impl_316_, 2);
v_isSharedCheck_443_ = !lean_is_exclusive(v_impl_316_);
if (v_isSharedCheck_443_ == 0)
{
lean_object* v_unused_444_; lean_object* v_unused_445_; lean_object* v_unused_446_; 
v_unused_444_ = lean_ctor_get(v_impl_316_, 4);
lean_dec(v_unused_444_);
v_unused_445_ = lean_ctor_get(v_impl_316_, 3);
lean_dec(v_unused_445_);
v_unused_446_ = lean_ctor_get(v_impl_316_, 0);
lean_dec(v_unused_446_);
v___x_434_ = v_impl_316_;
v_isShared_435_ = v_isSharedCheck_443_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_v_432_);
lean_inc(v_k_431_);
lean_dec(v_impl_316_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_443_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_436_ = lean_unsigned_to_nat(3u);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 4, v_l_401_);
lean_ctor_set(v___x_434_, 2, v_v_308_);
lean_ctor_set(v___x_434_, 1, v_k_307_);
lean_ctor_set(v___x_434_, 0, v___x_317_);
v___x_438_ = v___x_434_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_442_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_442_, 3, v_l_401_);
lean_ctor_set(v_reuseFailAlloc_442_, 4, v_l_401_);
v___x_438_ = v_reuseFailAlloc_442_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
lean_object* v___x_440_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_r_430_);
lean_ctor_set(v___x_312_, 3, v___x_438_);
lean_ctor_set(v___x_312_, 2, v_v_432_);
lean_ctor_set(v___x_312_, 1, v_k_431_);
lean_ctor_set(v___x_312_, 0, v___x_436_);
v___x_440_ = v___x_312_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_436_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_k_431_);
lean_ctor_set(v_reuseFailAlloc_441_, 2, v_v_432_);
lean_ctor_set(v_reuseFailAlloc_441_, 3, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_441_, 4, v_r_430_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
else
{
lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_447_ = lean_unsigned_to_nat(2u);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_impl_316_);
lean_ctor_set(v___x_312_, 3, v_r_430_);
lean_ctor_set(v___x_312_, 0, v___x_447_);
v___x_449_ = v___x_312_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_447_);
lean_ctor_set(v_reuseFailAlloc_450_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_450_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_450_, 3, v_r_430_);
lean_ctor_set(v_reuseFailAlloc_450_, 4, v_impl_316_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
}
}
else
{
lean_object* v___x_452_; 
lean_dec(v_v_308_);
lean_dec(v_k_307_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 2, v_v_304_);
lean_ctor_set(v___x_312_, 1, v_k_303_);
v___x_452_ = v___x_312_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_size_306_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_k_303_);
lean_ctor_set(v_reuseFailAlloc_453_, 2, v_v_304_);
lean_ctor_set(v_reuseFailAlloc_453_, 3, v_l_309_);
lean_ctor_set(v_reuseFailAlloc_453_, 4, v_r_310_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
else
{
lean_object* v_impl_454_; lean_object* v___x_455_; 
lean_dec(v_size_306_);
v_impl_454_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_303_, v_v_304_, v_l_309_);
v___x_455_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_310_) == 0)
{
lean_object* v_size_456_; lean_object* v_size_457_; lean_object* v_k_458_; lean_object* v_v_459_; lean_object* v_l_460_; lean_object* v_r_461_; lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v_size_456_ = lean_ctor_get(v_r_310_, 0);
v_size_457_ = lean_ctor_get(v_impl_454_, 0);
v_k_458_ = lean_ctor_get(v_impl_454_, 1);
v_v_459_ = lean_ctor_get(v_impl_454_, 2);
v_l_460_ = lean_ctor_get(v_impl_454_, 3);
v_r_461_ = lean_ctor_get(v_impl_454_, 4);
lean_inc(v_r_461_);
v___x_462_ = lean_unsigned_to_nat(3u);
v___x_463_ = lean_nat_mul(v___x_462_, v_size_456_);
v___x_464_ = lean_nat_dec_lt(v___x_463_, v_size_457_);
lean_dec(v___x_463_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_468_; 
lean_dec(v_r_461_);
v___x_465_ = lean_nat_add(v___x_455_, v_size_457_);
v___x_466_ = lean_nat_add(v___x_465_, v_size_456_);
lean_dec(v___x_465_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 3, v_impl_454_);
lean_ctor_set(v___x_312_, 0, v___x_466_);
v___x_468_ = v___x_312_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_466_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_469_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_469_, 3, v_impl_454_);
lean_ctor_set(v_reuseFailAlloc_469_, 4, v_r_310_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
else
{
lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_535_; 
lean_inc(v_l_460_);
lean_inc(v_v_459_);
lean_inc(v_k_458_);
lean_inc(v_size_457_);
v_isSharedCheck_535_ = !lean_is_exclusive(v_impl_454_);
if (v_isSharedCheck_535_ == 0)
{
lean_object* v_unused_536_; lean_object* v_unused_537_; lean_object* v_unused_538_; lean_object* v_unused_539_; lean_object* v_unused_540_; 
v_unused_536_ = lean_ctor_get(v_impl_454_, 4);
lean_dec(v_unused_536_);
v_unused_537_ = lean_ctor_get(v_impl_454_, 3);
lean_dec(v_unused_537_);
v_unused_538_ = lean_ctor_get(v_impl_454_, 2);
lean_dec(v_unused_538_);
v_unused_539_ = lean_ctor_get(v_impl_454_, 1);
lean_dec(v_unused_539_);
v_unused_540_ = lean_ctor_get(v_impl_454_, 0);
lean_dec(v_unused_540_);
v___x_471_ = v_impl_454_;
v_isShared_472_ = v_isSharedCheck_535_;
goto v_resetjp_470_;
}
else
{
lean_dec(v_impl_454_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_535_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v_size_473_; lean_object* v_size_474_; lean_object* v_k_475_; lean_object* v_v_476_; lean_object* v_l_477_; lean_object* v_r_478_; lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v_size_473_ = lean_ctor_get(v_l_460_, 0);
v_size_474_ = lean_ctor_get(v_r_461_, 0);
v_k_475_ = lean_ctor_get(v_r_461_, 1);
v_v_476_ = lean_ctor_get(v_r_461_, 2);
v_l_477_ = lean_ctor_get(v_r_461_, 3);
v_r_478_ = lean_ctor_get(v_r_461_, 4);
v___x_479_ = lean_unsigned_to_nat(2u);
v___x_480_ = lean_nat_mul(v___x_479_, v_size_473_);
v___x_481_ = lean_nat_dec_lt(v_size_474_, v___x_480_);
lean_dec(v___x_480_);
if (v___x_481_ == 0)
{
lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_510_; 
lean_inc(v_r_478_);
lean_inc(v_l_477_);
lean_inc(v_v_476_);
lean_inc(v_k_475_);
v_isSharedCheck_510_ = !lean_is_exclusive(v_r_461_);
if (v_isSharedCheck_510_ == 0)
{
lean_object* v_unused_511_; lean_object* v_unused_512_; lean_object* v_unused_513_; lean_object* v_unused_514_; lean_object* v_unused_515_; 
v_unused_511_ = lean_ctor_get(v_r_461_, 4);
lean_dec(v_unused_511_);
v_unused_512_ = lean_ctor_get(v_r_461_, 3);
lean_dec(v_unused_512_);
v_unused_513_ = lean_ctor_get(v_r_461_, 2);
lean_dec(v_unused_513_);
v_unused_514_ = lean_ctor_get(v_r_461_, 1);
lean_dec(v_unused_514_);
v_unused_515_ = lean_ctor_get(v_r_461_, 0);
lean_dec(v_unused_515_);
v___x_483_ = v_r_461_;
v_isShared_484_ = v_isSharedCheck_510_;
goto v_resetjp_482_;
}
else
{
lean_dec(v_r_461_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_510_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___y_488_; lean_object* v___y_489_; lean_object* v___y_490_; lean_object* v___x_498_; lean_object* v___y_500_; 
v___x_485_ = lean_nat_add(v___x_455_, v_size_457_);
lean_dec(v_size_457_);
v___x_486_ = lean_nat_add(v___x_485_, v_size_456_);
lean_dec(v___x_485_);
v___x_498_ = lean_nat_add(v___x_455_, v_size_473_);
if (lean_obj_tag(v_l_477_) == 0)
{
lean_object* v_size_508_; 
v_size_508_ = lean_ctor_get(v_l_477_, 0);
lean_inc(v_size_508_);
v___y_500_ = v_size_508_;
goto v___jp_499_;
}
else
{
lean_object* v___x_509_; 
v___x_509_ = lean_unsigned_to_nat(0u);
v___y_500_ = v___x_509_;
goto v___jp_499_;
}
v___jp_487_:
{
lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_491_ = lean_nat_add(v___y_488_, v___y_490_);
lean_dec(v___y_490_);
lean_dec(v___y_488_);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 4, v_r_310_);
lean_ctor_set(v___x_483_, 3, v_r_478_);
lean_ctor_set(v___x_483_, 2, v_v_308_);
lean_ctor_set(v___x_483_, 1, v_k_307_);
lean_ctor_set(v___x_483_, 0, v___x_491_);
v___x_493_ = v___x_483_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_491_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_497_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_497_, 3, v_r_478_);
lean_ctor_set(v_reuseFailAlloc_497_, 4, v_r_310_);
v___x_493_ = v_reuseFailAlloc_497_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v___x_495_; 
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 4, v___x_493_);
lean_ctor_set(v___x_471_, 3, v___y_489_);
lean_ctor_set(v___x_471_, 2, v_v_476_);
lean_ctor_set(v___x_471_, 1, v_k_475_);
lean_ctor_set(v___x_471_, 0, v___x_486_);
v___x_495_ = v___x_471_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_k_475_);
lean_ctor_set(v_reuseFailAlloc_496_, 2, v_v_476_);
lean_ctor_set(v_reuseFailAlloc_496_, 3, v___y_489_);
lean_ctor_set(v_reuseFailAlloc_496_, 4, v___x_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
v___jp_499_:
{
lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_501_ = lean_nat_add(v___x_498_, v___y_500_);
lean_dec(v___y_500_);
lean_dec(v___x_498_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_l_477_);
lean_ctor_set(v___x_312_, 3, v_l_460_);
lean_ctor_set(v___x_312_, 2, v_v_459_);
lean_ctor_set(v___x_312_, 1, v_k_458_);
lean_ctor_set(v___x_312_, 0, v___x_501_);
v___x_503_ = v___x_312_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_501_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v_k_458_);
lean_ctor_set(v_reuseFailAlloc_507_, 2, v_v_459_);
lean_ctor_set(v_reuseFailAlloc_507_, 3, v_l_460_);
lean_ctor_set(v_reuseFailAlloc_507_, 4, v_l_477_);
v___x_503_ = v_reuseFailAlloc_507_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
lean_object* v___x_504_; 
v___x_504_ = lean_nat_add(v___x_455_, v_size_456_);
if (lean_obj_tag(v_r_478_) == 0)
{
lean_object* v_size_505_; 
v_size_505_ = lean_ctor_get(v_r_478_, 0);
lean_inc(v_size_505_);
v___y_488_ = v___x_504_;
v___y_489_ = v___x_503_;
v___y_490_ = v_size_505_;
goto v___jp_487_;
}
else
{
lean_object* v___x_506_; 
v___x_506_ = lean_unsigned_to_nat(0u);
v___y_488_ = v___x_504_;
v___y_489_ = v___x_503_;
v___y_490_ = v___x_506_;
goto v___jp_487_;
}
}
}
}
}
else
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_521_; 
lean_del_object(v___x_312_);
v___x_516_ = lean_nat_add(v___x_455_, v_size_457_);
lean_dec(v_size_457_);
v___x_517_ = lean_nat_add(v___x_516_, v_size_456_);
lean_dec(v___x_516_);
v___x_518_ = lean_nat_add(v___x_455_, v_size_456_);
v___x_519_ = lean_nat_add(v___x_518_, v_size_474_);
lean_dec(v___x_518_);
lean_inc_ref(v_r_310_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 4, v_r_310_);
lean_ctor_set(v___x_471_, 3, v_r_461_);
lean_ctor_set(v___x_471_, 2, v_v_308_);
lean_ctor_set(v___x_471_, 1, v_k_307_);
lean_ctor_set(v___x_471_, 0, v___x_519_);
v___x_521_ = v___x_471_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_534_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_534_, 3, v_r_461_);
lean_ctor_set(v_reuseFailAlloc_534_, 4, v_r_310_);
v___x_521_ = v_reuseFailAlloc_534_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
v_isSharedCheck_528_ = !lean_is_exclusive(v_r_310_);
if (v_isSharedCheck_528_ == 0)
{
lean_object* v_unused_529_; lean_object* v_unused_530_; lean_object* v_unused_531_; lean_object* v_unused_532_; lean_object* v_unused_533_; 
v_unused_529_ = lean_ctor_get(v_r_310_, 4);
lean_dec(v_unused_529_);
v_unused_530_ = lean_ctor_get(v_r_310_, 3);
lean_dec(v_unused_530_);
v_unused_531_ = lean_ctor_get(v_r_310_, 2);
lean_dec(v_unused_531_);
v_unused_532_ = lean_ctor_get(v_r_310_, 1);
lean_dec(v_unused_532_);
v_unused_533_ = lean_ctor_get(v_r_310_, 0);
lean_dec(v_unused_533_);
v___x_523_ = v_r_310_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_dec(v_r_310_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 4, v___x_521_);
lean_ctor_set(v___x_523_, 3, v_l_460_);
lean_ctor_set(v___x_523_, 2, v_v_459_);
lean_ctor_set(v___x_523_, 1, v_k_458_);
lean_ctor_set(v___x_523_, 0, v___x_517_);
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___x_517_);
lean_ctor_set(v_reuseFailAlloc_527_, 1, v_k_458_);
lean_ctor_set(v_reuseFailAlloc_527_, 2, v_v_459_);
lean_ctor_set(v_reuseFailAlloc_527_, 3, v_l_460_);
lean_ctor_set(v_reuseFailAlloc_527_, 4, v___x_521_);
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
}
}
else
{
lean_object* v_l_541_; 
v_l_541_ = lean_ctor_get(v_impl_454_, 3);
if (lean_obj_tag(v_l_541_) == 0)
{
lean_object* v_r_542_; lean_object* v_k_543_; lean_object* v_v_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_555_; 
lean_inc_ref(v_l_541_);
v_r_542_ = lean_ctor_get(v_impl_454_, 4);
v_k_543_ = lean_ctor_get(v_impl_454_, 1);
v_v_544_ = lean_ctor_get(v_impl_454_, 2);
v_isSharedCheck_555_ = !lean_is_exclusive(v_impl_454_);
if (v_isSharedCheck_555_ == 0)
{
lean_object* v_unused_556_; lean_object* v_unused_557_; 
v_unused_556_ = lean_ctor_get(v_impl_454_, 3);
lean_dec(v_unused_556_);
v_unused_557_ = lean_ctor_get(v_impl_454_, 0);
lean_dec(v_unused_557_);
v___x_546_ = v_impl_454_;
v_isShared_547_ = v_isSharedCheck_555_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_r_542_);
lean_inc(v_v_544_);
lean_inc(v_k_543_);
lean_dec(v_impl_454_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_555_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_550_; 
v___x_548_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_542_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 3, v_r_542_);
lean_ctor_set(v___x_546_, 2, v_v_308_);
lean_ctor_set(v___x_546_, 1, v_k_307_);
lean_ctor_set(v___x_546_, 0, v___x_455_);
v___x_550_ = v___x_546_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_554_, 3, v_r_542_);
lean_ctor_set(v_reuseFailAlloc_554_, 4, v_r_542_);
v___x_550_ = v_reuseFailAlloc_554_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_object* v___x_552_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v___x_550_);
lean_ctor_set(v___x_312_, 3, v_l_541_);
lean_ctor_set(v___x_312_, 2, v_v_544_);
lean_ctor_set(v___x_312_, 1, v_k_543_);
lean_ctor_set(v___x_312_, 0, v___x_548_);
v___x_552_ = v___x_312_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_548_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v_k_543_);
lean_ctor_set(v_reuseFailAlloc_553_, 2, v_v_544_);
lean_ctor_set(v_reuseFailAlloc_553_, 3, v_l_541_);
lean_ctor_set(v_reuseFailAlloc_553_, 4, v___x_550_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
}
else
{
lean_object* v_r_558_; 
v_r_558_ = lean_ctor_get(v_impl_454_, 4);
lean_inc(v_r_558_);
if (lean_obj_tag(v_r_558_) == 0)
{
lean_object* v_k_559_; lean_object* v_v_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_583_; 
lean_inc(v_l_541_);
v_k_559_ = lean_ctor_get(v_impl_454_, 1);
v_v_560_ = lean_ctor_get(v_impl_454_, 2);
v_isSharedCheck_583_ = !lean_is_exclusive(v_impl_454_);
if (v_isSharedCheck_583_ == 0)
{
lean_object* v_unused_584_; lean_object* v_unused_585_; lean_object* v_unused_586_; 
v_unused_584_ = lean_ctor_get(v_impl_454_, 4);
lean_dec(v_unused_584_);
v_unused_585_ = lean_ctor_get(v_impl_454_, 3);
lean_dec(v_unused_585_);
v_unused_586_ = lean_ctor_get(v_impl_454_, 0);
lean_dec(v_unused_586_);
v___x_562_ = v_impl_454_;
v_isShared_563_ = v_isSharedCheck_583_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_v_560_);
lean_inc(v_k_559_);
lean_dec(v_impl_454_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_583_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v_k_564_; lean_object* v_v_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_579_; 
v_k_564_ = lean_ctor_get(v_r_558_, 1);
v_v_565_ = lean_ctor_get(v_r_558_, 2);
v_isSharedCheck_579_ = !lean_is_exclusive(v_r_558_);
if (v_isSharedCheck_579_ == 0)
{
lean_object* v_unused_580_; lean_object* v_unused_581_; lean_object* v_unused_582_; 
v_unused_580_ = lean_ctor_get(v_r_558_, 4);
lean_dec(v_unused_580_);
v_unused_581_ = lean_ctor_get(v_r_558_, 3);
lean_dec(v_unused_581_);
v_unused_582_ = lean_ctor_get(v_r_558_, 0);
lean_dec(v_unused_582_);
v___x_567_ = v_r_558_;
v_isShared_568_ = v_isSharedCheck_579_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_v_565_);
lean_inc(v_k_564_);
lean_dec(v_r_558_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_579_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_569_ = lean_unsigned_to_nat(3u);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 4, v_l_541_);
lean_ctor_set(v___x_567_, 3, v_l_541_);
lean_ctor_set(v___x_567_, 2, v_v_560_);
lean_ctor_set(v___x_567_, 1, v_k_559_);
lean_ctor_set(v___x_567_, 0, v___x_455_);
v___x_571_ = v___x_567_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_k_559_);
lean_ctor_set(v_reuseFailAlloc_578_, 2, v_v_560_);
lean_ctor_set(v_reuseFailAlloc_578_, 3, v_l_541_);
lean_ctor_set(v_reuseFailAlloc_578_, 4, v_l_541_);
v___x_571_ = v_reuseFailAlloc_578_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_573_; 
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 4, v_l_541_);
lean_ctor_set(v___x_562_, 2, v_v_308_);
lean_ctor_set(v___x_562_, 1, v_k_307_);
lean_ctor_set(v___x_562_, 0, v___x_455_);
v___x_573_ = v___x_562_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_577_, 3, v_l_541_);
lean_ctor_set(v_reuseFailAlloc_577_, 4, v_l_541_);
v___x_573_ = v_reuseFailAlloc_577_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_575_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v___x_573_);
lean_ctor_set(v___x_312_, 3, v___x_571_);
lean_ctor_set(v___x_312_, 2, v_v_565_);
lean_ctor_set(v___x_312_, 1, v_k_564_);
lean_ctor_set(v___x_312_, 0, v___x_569_);
v___x_575_ = v___x_312_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_569_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v_k_564_);
lean_ctor_set(v_reuseFailAlloc_576_, 2, v_v_565_);
lean_ctor_set(v_reuseFailAlloc_576_, 3, v___x_571_);
lean_ctor_set(v_reuseFailAlloc_576_, 4, v___x_573_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
}
}
else
{
lean_object* v___x_587_; lean_object* v___x_589_; 
v___x_587_ = lean_unsigned_to_nat(2u);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_r_558_);
lean_ctor_set(v___x_312_, 3, v_impl_454_);
lean_ctor_set(v___x_312_, 0, v___x_587_);
v___x_589_ = v___x_312_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_587_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_590_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_590_, 3, v_impl_454_);
lean_ctor_set(v_reuseFailAlloc_590_, 4, v_r_558_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = lean_unsigned_to_nat(1u);
v___x_593_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
lean_ctor_set(v___x_593_, 1, v_k_303_);
lean_ctor_set(v___x_593_, 2, v_v_304_);
lean_ctor_set(v___x_593_, 3, v_t_305_);
lean_ctor_set(v___x_593_, 4, v_t_305_);
return v___x_593_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(lean_object* v_p_594_, uint8_t v_d_595_, lean_object* v_00_u03b4_596_){
_start:
{
lean_object* v_changesBefore_597_; lean_object* v_changesAfter_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_607_; 
v_changesBefore_597_ = lean_ctor_get(v_00_u03b4_596_, 0);
v_changesAfter_598_ = lean_ctor_get(v_00_u03b4_596_, 1);
v_isSharedCheck_607_ = !lean_is_exclusive(v_00_u03b4_596_);
if (v_isSharedCheck_607_ == 0)
{
v___x_600_ = v_00_u03b4_596_;
v_isShared_601_ = v_isSharedCheck_607_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_changesAfter_598_);
lean_inc(v_changesBefore_597_);
lean_dec(v_00_u03b4_596_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_607_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_605_; 
v___x_602_ = lean_box(v_d_595_);
v___x_603_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_p_594_, v___x_602_, v_changesBefore_597_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_603_);
v___x_605_ = v___x_600_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_603_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_changesAfter_598_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange___boxed(lean_object* v_p_608_, lean_object* v_d_609_, lean_object* v_00_u03b4_610_){
_start:
{
uint8_t v_d_boxed_611_; lean_object* v_res_612_; 
v_d_boxed_611_ = lean_unbox(v_d_609_);
v_res_612_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(v_p_608_, v_d_boxed_611_, v_00_u03b4_610_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0(lean_object* v_00_u03b2_613_, lean_object* v_k_614_, lean_object* v_v_615_, lean_object* v_t_616_, lean_object* v_hl_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_614_, v_v_615_, v_t_616_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange(lean_object* v_p_619_, uint8_t v_d_620_, lean_object* v_00_u03b4_621_){
_start:
{
lean_object* v_changesBefore_622_; lean_object* v_changesAfter_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_632_; 
v_changesBefore_622_ = lean_ctor_get(v_00_u03b4_621_, 0);
v_changesAfter_623_ = lean_ctor_get(v_00_u03b4_621_, 1);
v_isSharedCheck_632_ = !lean_is_exclusive(v_00_u03b4_621_);
if (v_isSharedCheck_632_ == 0)
{
v___x_625_ = v_00_u03b4_621_;
v_isShared_626_ = v_isSharedCheck_632_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_changesAfter_623_);
lean_inc(v_changesBefore_622_);
lean_dec(v_00_u03b4_621_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_632_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_630_; 
v___x_627_ = lean_box(v_d_620_);
v___x_628_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_p_619_, v___x_627_, v_changesAfter_623_);
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 1, v___x_628_);
v___x_630_ = v___x_625_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_changesBefore_622_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v___x_628_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange___boxed(lean_object* v_p_633_, lean_object* v_d_634_, lean_object* v_00_u03b4_635_){
_start:
{
uint8_t v_d_boxed_636_; lean_object* v_res_637_; 
v_d_boxed_636_ = lean_unbox(v_d_634_);
v_res_637_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange(v_p_633_, v_d_boxed_636_, v_00_u03b4_635_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(lean_object* v_before_638_, lean_object* v_after_639_, uint8_t v_d_640_){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_641_ = lean_box(1);
v___x_642_ = lean_box(v_d_640_);
v___x_643_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_before_638_, v___x_642_, v___x_641_);
v___x_644_ = lean_box(v_d_640_);
v___x_645_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_after_639_, v___x_644_, v___x_641_);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_643_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos___boxed(lean_object* v_before_647_, lean_object* v_after_648_, lean_object* v_d_649_){
_start:
{
uint8_t v_d_boxed_650_; lean_object* v_res_651_; 
v_d_boxed_650_ = lean_unbox(v_d_649_);
v_res_651_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v_before_647_, v_after_648_, v_d_boxed_650_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(lean_object* v_before_652_, lean_object* v_after_653_, uint8_t v_d_654_){
_start:
{
lean_object* v_pos_655_; lean_object* v_pos_656_; lean_object* v___x_657_; 
v_pos_655_ = lean_ctor_get(v_before_652_, 1);
lean_inc(v_pos_655_);
lean_dec_ref(v_before_652_);
v_pos_656_ = lean_ctor_get(v_after_653_, 1);
lean_inc(v_pos_656_);
lean_dec_ref(v_after_653_);
v___x_657_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v_pos_655_, v_pos_656_, v_d_654_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange___boxed(lean_object* v_before_658_, lean_object* v_after_659_, lean_object* v_d_660_){
_start:
{
uint8_t v_d_boxed_661_; lean_object* v_res_662_; 
v_d_boxed_661_ = lean_unbox(v_d_660_);
v_res_662_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_658_, v_after_659_, v_d_boxed_661_);
return v_res_662_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(lean_object* v_d_663_){
_start:
{
lean_object* v_changesAfter_664_; 
v_changesAfter_664_ = lean_ctor_get(v_d_663_, 1);
if (lean_obj_tag(v_changesAfter_664_) == 0)
{
uint8_t v___x_665_; 
v___x_665_ = 0;
return v___x_665_;
}
else
{
lean_object* v_changesBefore_666_; 
v_changesBefore_666_ = lean_ctor_get(v_d_663_, 0);
if (lean_obj_tag(v_changesBefore_666_) == 0)
{
uint8_t v___x_667_; 
v___x_667_ = 0;
return v___x_667_;
}
else
{
uint8_t v___x_668_; 
v___x_668_ = 1;
return v___x_668_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty___boxed(lean_object* v_d_669_){
_start:
{
uint8_t v_res_670_; lean_object* v_r_671_; 
v_res_670_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_d_669_);
lean_dec_ref(v_d_669_);
v_r_671_ = lean_box(v_res_670_);
return v_r_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0(lean_object* v_k_672_, lean_object* v_b_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v___x_679_; 
lean_inc(v___y_677_);
lean_inc_ref(v___y_676_);
lean_inc(v___y_675_);
lean_inc_ref(v___y_674_);
v___x_679_ = lean_apply_6(v_k_672_, v_b_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, lean_box(0));
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0___boxed(lean_object* v_k_680_, lean_object* v_b_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0(v_k_680_, v_b_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(lean_object* v_name_688_, uint8_t v_bi_689_, lean_object* v_type_690_, lean_object* v_k_691_, uint8_t v_kind_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
lean_object* v___f_698_; lean_object* v___x_699_; 
v___f_698_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_698_, 0, v_k_691_);
v___x_699_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_688_, v_bi_689_, v_type_690_, v___f_698_, v_kind_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_707_ == 0)
{
v___x_702_ = v___x_699_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_699_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_a_700_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
else
{
lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
v_a_708_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___x_699_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___x_699_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___boxed(lean_object* v_name_716_, lean_object* v_bi_717_, lean_object* v_type_718_, lean_object* v_k_719_, lean_object* v_kind_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
uint8_t v_bi_boxed_726_; uint8_t v_kind_boxed_727_; lean_object* v_res_728_; 
v_bi_boxed_726_ = lean_unbox(v_bi_717_);
v_kind_boxed_727_ = lean_unbox(v_kind_720_);
v_res_728_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_name_716_, v_bi_boxed_726_, v_type_718_, v_k_719_, v_kind_boxed_727_, v___y_721_, v___y_722_, v___y_723_, v___y_724_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6(lean_object* v_00_u03b1_729_, lean_object* v_name_730_, uint8_t v_bi_731_, lean_object* v_type_732_, lean_object* v_k_733_, uint8_t v_kind_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_name_730_, v_bi_731_, v_type_732_, v_k_733_, v_kind_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___boxed(lean_object* v_00_u03b1_741_, lean_object* v_name_742_, lean_object* v_bi_743_, lean_object* v_type_744_, lean_object* v_k_745_, lean_object* v_kind_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
uint8_t v_bi_boxed_752_; uint8_t v_kind_boxed_753_; lean_object* v_res_754_; 
v_bi_boxed_752_ = lean_unbox(v_bi_743_);
v_kind_boxed_753_ = lean_unbox(v_kind_746_);
v_res_754_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6(v_00_u03b1_741_, v_name_742_, v_bi_boxed_752_, v_type_744_, v_k_745_, v_kind_boxed_753_, v___y_747_, v___y_748_, v___y_749_, v___y_750_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(lean_object* v_msgData_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v___x_761_; lean_object* v_env_762_; uint8_t v___x_763_; lean_object* v_env_764_; lean_object* v___x_765_; lean_object* v_toCold_766_; lean_object* v_mctx_767_; lean_object* v_lctx_768_; lean_object* v_options_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_761_ = lean_st_ref_get(v___y_759_);
v_env_762_ = lean_ctor_get(v___x_761_, 0);
lean_inc_ref(v_env_762_);
lean_dec(v___x_761_);
v___x_763_ = 0;
v_env_764_ = l_Lean_Environment_setRecordingDeps(v_env_762_, v___x_763_);
v___x_765_ = lean_st_ref_get(v___y_757_);
v_toCold_766_ = lean_ctor_get(v___y_758_, 0);
v_mctx_767_ = lean_ctor_get(v___x_765_, 0);
lean_inc_ref(v_mctx_767_);
lean_dec(v___x_765_);
v_lctx_768_ = lean_ctor_get(v___y_756_, 2);
v_options_769_ = lean_ctor_get(v_toCold_766_, 2);
lean_inc_ref(v_options_769_);
lean_inc_ref(v_lctx_768_);
v___x_770_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_770_, 0, v_env_764_);
lean_ctor_set(v___x_770_, 1, v_mctx_767_);
lean_ctor_set(v___x_770_, 2, v_lctx_768_);
lean_ctor_set(v___x_770_, 3, v_options_769_);
v___x_771_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
lean_ctor_set(v___x_771_, 1, v_msgData_755_);
v___x_772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4___boxed(lean_object* v_msgData_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(v_msgData_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(lean_object* v_msg_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v_ref_786_; lean_object* v___x_787_; lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_796_; 
v_ref_786_ = lean_ctor_get(v___y_783_, 2);
v___x_787_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(v_msg_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_);
v_a_788_ = lean_ctor_get(v___x_787_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_787_);
if (v_isSharedCheck_796_ == 0)
{
v___x_790_ = v___x_787_;
v_isShared_791_ = v_isSharedCheck_796_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_787_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_796_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_792_; lean_object* v___x_794_; 
lean_inc(v_ref_786_);
v___x_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_792_, 0, v_ref_786_);
lean_ctor_set(v___x_792_, 1, v_a_788_);
if (v_isShared_791_ == 0)
{
lean_ctor_set_tag(v___x_790_, 1);
lean_ctor_set(v___x_790_, 0, v___x_792_);
v___x_794_ = v___x_790_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg___boxed(lean_object* v_msg_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v_msg_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(lean_object* v_x_804_, lean_object* v_x_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
if (lean_obj_tag(v_x_804_) == 0)
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = l_List_reverse___redArg(v_x_805_);
v___x_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
return v___x_812_;
}
else
{
lean_object* v_head_813_; lean_object* v_tail_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_832_; 
v_head_813_ = lean_ctor_get(v_x_804_, 0);
v_tail_814_ = lean_ctor_get(v_x_804_, 1);
v_isSharedCheck_832_ = !lean_is_exclusive(v_x_804_);
if (v_isSharedCheck_832_ == 0)
{
v___x_816_ = v_x_804_;
v_isShared_817_ = v_isSharedCheck_832_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_tail_814_);
lean_inc(v_head_813_);
lean_dec(v_x_804_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_832_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_Meta_getFVarFromUserName(v_head_813_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_821_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
lean_inc(v_a_819_);
lean_dec_ref_known(v___x_818_, 1);
if (v_isShared_817_ == 0)
{
lean_ctor_set(v___x_816_, 1, v_x_805_);
lean_ctor_set(v___x_816_, 0, v_a_819_);
v___x_821_ = v___x_816_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_a_819_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v_x_805_);
v___x_821_ = v_reuseFailAlloc_823_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
v_x_804_ = v_tail_814_;
v_x_805_ = v___x_821_;
goto _start;
}
}
else
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
lean_del_object(v___x_816_);
lean_dec(v_tail_814_);
lean_dec(v_x_805_);
v_a_824_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_818_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_818_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2___boxed(lean_object* v_x_833_, lean_object* v_x_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(v_x_833_, v_x_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(lean_object* v_upperBound_841_, lean_object* v_before_842_, lean_object* v_a_843_, lean_object* v_b_844_){
_start:
{
uint8_t v___x_846_; 
v___x_846_ = lean_nat_dec_lt(v_a_843_, v_upperBound_841_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; 
lean_dec(v_a_843_);
lean_dec_ref(v_before_842_);
v___x_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_847_, 0, v_b_844_);
return v___x_847_;
}
else
{
lean_object* v_pos_848_; lean_object* v___x_849_; uint8_t v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v_pos_848_ = lean_ctor_get(v_before_842_, 1);
lean_inc(v_pos_848_);
lean_inc(v_a_843_);
v___x_849_ = l_Lean_SubExpr_Pos_pushNthBindingDomain(v_a_843_, v_pos_848_);
v___x_850_ = 1;
v___x_851_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(v___x_849_, v___x_850_, v_b_844_);
v___x_852_ = lean_unsigned_to_nat(1u);
v___x_853_ = lean_nat_add(v_a_843_, v___x_852_);
lean_dec(v_a_843_);
v_a_843_ = v___x_853_;
v_b_844_ = v___x_851_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg___boxed(lean_object* v_upperBound_855_, lean_object* v_before_856_, lean_object* v_a_857_, lean_object* v_b_858_, lean_object* v___y_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v_upperBound_855_, v_before_856_, v_a_857_, v_b_858_);
lean_dec(v_upperBound_855_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(lean_object* v_x_861_, lean_object* v_x_862_){
_start:
{
if (lean_obj_tag(v_x_861_) == 0)
{
lean_object* v___x_863_; 
v___x_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_863_, 0, v_x_862_);
return v___x_863_;
}
else
{
if (lean_obj_tag(v_x_862_) == 0)
{
lean_object* v___x_864_; 
v___x_864_ = lean_box(0);
return v___x_864_;
}
else
{
lean_object* v_head_865_; lean_object* v_tail_866_; lean_object* v_head_867_; lean_object* v_tail_868_; uint8_t v___x_869_; 
v_head_865_ = lean_ctor_get(v_x_861_, 0);
v_tail_866_ = lean_ctor_get(v_x_861_, 1);
v_head_867_ = lean_ctor_get(v_x_862_, 0);
lean_inc(v_head_867_);
v_tail_868_ = lean_ctor_get(v_x_862_, 1);
lean_inc(v_tail_868_);
lean_dec_ref_known(v_x_862_, 2);
v___x_869_ = lean_name_eq(v_head_865_, v_head_867_);
lean_dec(v_head_867_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; 
lean_dec(v_tail_868_);
v___x_870_ = lean_box(0);
return v___x_870_;
}
else
{
v_x_861_ = v_tail_866_;
v_x_862_ = v_tail_868_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0___boxed(lean_object* v_x_872_, lean_object* v_x_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(v_x_872_, v_x_873_);
lean_dec(v_x_872_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0(lean_object* v_l_u2081_875_, lean_object* v_l_u2082_876_){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_877_ = l_List_reverse___redArg(v_l_u2081_875_);
v___x_878_ = l_List_reverse___redArg(v_l_u2082_876_);
v___x_879_ = l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(v___x_877_, v___x_878_);
lean_dec(v___x_877_);
if (lean_obj_tag(v___x_879_) == 0)
{
return v___x_879_;
}
else
{
lean_object* v_val_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_888_; 
v_val_880_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_888_ == 0)
{
v___x_882_ = v___x_879_;
v_isShared_883_ = v_isSharedCheck_888_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_val_880_);
lean_dec(v___x_879_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_888_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_884_; lean_object* v___x_886_; 
v___x_884_ = l_List_reverse___redArg(v_val_880_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 0, v___x_884_);
v___x_886_ = v___x_882_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_884_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(uint8_t v_b_u2082_889_, lean_object* v_k_890_, lean_object* v_t_891_){
_start:
{
if (lean_obj_tag(v_t_891_) == 0)
{
lean_object* v_size_892_; lean_object* v_k_893_; lean_object* v_v_894_; lean_object* v_l_895_; lean_object* v_r_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_910_; 
v_size_892_ = lean_ctor_get(v_t_891_, 0);
v_k_893_ = lean_ctor_get(v_t_891_, 1);
v_v_894_ = lean_ctor_get(v_t_891_, 2);
v_l_895_ = lean_ctor_get(v_t_891_, 3);
v_r_896_ = lean_ctor_get(v_t_891_, 4);
v_isSharedCheck_910_ = !lean_is_exclusive(v_t_891_);
if (v_isSharedCheck_910_ == 0)
{
v___x_898_ = v_t_891_;
v_isShared_899_ = v_isSharedCheck_910_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_r_896_);
lean_inc(v_l_895_);
lean_inc(v_v_894_);
lean_inc(v_k_893_);
lean_inc(v_size_892_);
lean_dec(v_t_891_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_910_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
uint8_t v___x_900_; 
v___x_900_ = lean_nat_dec_lt(v_k_890_, v_k_893_);
if (v___x_900_ == 0)
{
uint8_t v___x_901_; 
v___x_901_ = lean_nat_dec_eq(v_k_890_, v_k_893_);
if (v___x_901_ == 0)
{
lean_object* v_impl_902_; lean_object* v___x_903_; 
lean_del_object(v___x_898_);
lean_dec(v_size_892_);
v_impl_902_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_889_, v_k_890_, v_r_896_);
v___x_903_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_893_, v_v_894_, v_l_895_, v_impl_902_);
return v___x_903_;
}
else
{
lean_object* v___x_904_; lean_object* v___x_906_; 
lean_dec(v_v_894_);
lean_dec(v_k_893_);
v___x_904_ = lean_box(v_b_u2082_889_);
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 2, v___x_904_);
lean_ctor_set(v___x_898_, 1, v_k_890_);
v___x_906_ = v___x_898_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_size_892_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v_k_890_);
lean_ctor_set(v_reuseFailAlloc_907_, 2, v___x_904_);
lean_ctor_set(v_reuseFailAlloc_907_, 3, v_l_895_);
lean_ctor_set(v_reuseFailAlloc_907_, 4, v_r_896_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
else
{
lean_object* v_impl_908_; lean_object* v___x_909_; 
lean_del_object(v___x_898_);
lean_dec(v_size_892_);
v_impl_908_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_889_, v_k_890_, v_l_895_);
v___x_909_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_893_, v_v_894_, v_impl_908_, v_r_896_);
return v___x_909_;
}
}
}
else
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_911_ = lean_unsigned_to_nat(1u);
v___x_912_ = lean_box(v_b_u2082_889_);
v___x_913_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_913_, 0, v___x_911_);
lean_ctor_set(v___x_913_, 1, v_k_890_);
lean_ctor_set(v___x_913_, 2, v___x_912_);
lean_ctor_set(v___x_913_, 3, v_t_891_);
lean_ctor_set(v___x_913_, 4, v_t_891_);
return v___x_913_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg___boxed(lean_object* v_b_u2082_914_, lean_object* v_k_915_, lean_object* v_t_916_){
_start:
{
uint8_t v_b_u2082_boxed_917_; lean_object* v_res_918_; 
v_b_u2082_boxed_917_ = lean_unbox(v_b_u2082_914_);
v_res_918_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_boxed_917_, v_k_915_, v_t_916_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(lean_object* v_init_919_, lean_object* v_x_920_){
_start:
{
if (lean_obj_tag(v_x_920_) == 0)
{
lean_object* v_k_921_; lean_object* v_v_922_; lean_object* v_l_923_; lean_object* v_r_924_; lean_object* v___x_925_; uint8_t v___x_926_; lean_object* v___x_927_; 
v_k_921_ = lean_ctor_get(v_x_920_, 1);
lean_inc(v_k_921_);
v_v_922_ = lean_ctor_get(v_x_920_, 2);
lean_inc(v_v_922_);
v_l_923_ = lean_ctor_get(v_x_920_, 3);
lean_inc(v_l_923_);
v_r_924_ = lean_ctor_get(v_x_920_, 4);
lean_inc(v_r_924_);
lean_dec_ref_known(v_x_920_, 5);
v___x_925_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_init_919_, v_l_923_);
v___x_926_ = lean_unbox(v_v_922_);
lean_dec(v_v_922_);
v___x_927_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v___x_926_, v_k_921_, v___x_925_);
v_init_919_ = v___x_927_;
v_x_920_ = v_r_924_;
goto _start;
}
else
{
return v_init_919_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(lean_object* v_as_929_, size_t v_i_930_, size_t v_stop_931_, lean_object* v_b_932_){
_start:
{
uint8_t v___x_933_; 
v___x_933_ = lean_usize_dec_eq(v_i_930_, v_stop_931_);
if (v___x_933_ == 0)
{
lean_object* v_changesBefore_934_; lean_object* v_changesAfter_935_; lean_object* v___x_936_; lean_object* v_changesBefore_937_; lean_object* v_changesAfter_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_950_; 
v_changesBefore_934_ = lean_ctor_get(v_b_932_, 0);
lean_inc(v_changesBefore_934_);
v_changesAfter_935_ = lean_ctor_get(v_b_932_, 1);
lean_inc(v_changesAfter_935_);
lean_dec_ref(v_b_932_);
v___x_936_ = lean_array_uget(v_as_929_, v_i_930_);
v_changesBefore_937_ = lean_ctor_get(v___x_936_, 0);
v_changesAfter_938_ = lean_ctor_get(v___x_936_, 1);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_950_ == 0)
{
v___x_940_ = v___x_936_;
v_isShared_941_ = v_isSharedCheck_950_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_changesAfter_938_);
lean_inc(v_changesBefore_937_);
lean_dec(v___x_936_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_950_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_945_; 
v___x_942_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_934_, v_changesBefore_937_);
v___x_943_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_935_, v_changesAfter_938_);
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 1, v___x_943_);
lean_ctor_set(v___x_940_, 0, v___x_942_);
v___x_945_ = v___x_940_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_942_);
lean_ctor_set(v_reuseFailAlloc_949_, 1, v___x_943_);
v___x_945_ = v_reuseFailAlloc_949_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
size_t v___x_946_; size_t v___x_947_; 
v___x_946_ = ((size_t)1ULL);
v___x_947_ = lean_usize_add(v_i_930_, v___x_946_);
v_i_930_ = v___x_947_;
v_b_932_ = v___x_945_;
goto _start;
}
}
}
else
{
return v_b_932_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10___boxed(lean_object* v_as_951_, lean_object* v_i_952_, lean_object* v_stop_953_, lean_object* v_b_954_){
_start:
{
size_t v_i_boxed_955_; size_t v_stop_boxed_956_; lean_object* v_res_957_; 
v_i_boxed_955_ = lean_unbox_usize(v_i_952_);
lean_dec(v_i_952_);
v_stop_boxed_956_ = lean_unbox_usize(v_stop_953_);
lean_dec(v_stop_953_);
v_res_957_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(v_as_951_, v_i_boxed_955_, v_stop_boxed_956_, v_b_954_);
lean_dec_ref(v_as_951_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(lean_object* v_x_958_, lean_object* v_x_959_, lean_object* v_x_960_){
_start:
{
if (lean_obj_tag(v_x_958_) == 5)
{
lean_object* v_fn_961_; lean_object* v_arg_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v_fn_961_ = lean_ctor_get(v_x_958_, 0);
lean_inc_ref(v_fn_961_);
v_arg_962_ = lean_ctor_get(v_x_958_, 1);
lean_inc_ref(v_arg_962_);
lean_dec_ref_known(v_x_958_, 2);
v___x_963_ = lean_array_set(v_x_959_, v_x_960_, v_arg_962_);
v___x_964_ = lean_unsigned_to_nat(1u);
v___x_965_ = lean_nat_sub(v_x_960_, v___x_964_);
lean_dec(v_x_960_);
v_x_958_ = v_fn_961_;
v_x_959_ = v___x_963_;
v_x_960_ = v___x_965_;
goto _start;
}
else
{
lean_object* v___x_967_; 
lean_dec(v_x_960_);
v___x_967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_967_, 0, v_x_958_);
lean_ctor_set(v___x_967_, 1, v_x_959_);
return v___x_967_;
}
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0(void){
_start:
{
lean_object* v___x_968_; lean_object* v_dummy_969_; 
v___x_968_ = lean_box(0);
v_dummy_969_ = l_Lean_Expr_sort___override(v___x_968_);
return v_dummy_969_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(lean_object* v_snd_970_, lean_object* v_before_971_, lean_object* v_after_972_, size_t v_sz_973_, size_t v_i_974_, lean_object* v_bs_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
uint8_t v___x_981_; 
v___x_981_ = lean_usize_dec_lt(v_i_974_, v_sz_973_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; 
v___x_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_982_, 0, v_bs_975_);
return v___x_982_;
}
else
{
lean_object* v_v_983_; lean_object* v_fst_984_; lean_object* v_snd_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_1015_; 
v_v_983_ = lean_array_uget(v_bs_975_, v_i_974_);
v_fst_984_ = lean_ctor_get(v_v_983_, 0);
v_snd_985_ = lean_ctor_get(v_v_983_, 1);
v_isSharedCheck_1015_ = !lean_is_exclusive(v_v_983_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_987_ = v_v_983_;
v_isShared_988_ = v_isSharedCheck_1015_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_snd_985_);
lean_inc(v_fst_984_);
lean_dec(v_v_983_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_1015_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v_pos_989_; lean_object* v_pos_990_; lean_object* v___x_991_; lean_object* v_bs_x27_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_997_; 
v_pos_989_ = lean_ctor_get(v_before_971_, 1);
v_pos_990_ = lean_ctor_get(v_after_972_, 1);
v___x_991_ = lean_unsigned_to_nat(0u);
v_bs_x27_992_ = lean_array_uset(v_bs_975_, v_i_974_, v___x_991_);
v___x_993_ = lean_usize_to_nat(v_i_974_);
v___x_994_ = lean_array_get_size(v_snd_970_);
v___x_995_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_994_, v___x_993_, v_pos_989_);
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 1, v___x_995_);
v___x_997_ = v___x_987_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_fst_984_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v___x_995_);
v___x_997_ = v_reuseFailAlloc_1014_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_998_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_994_, v___x_993_, v_pos_990_);
lean_dec(v___x_993_);
v___x_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_999_, 0, v_snd_985_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
v___x_1000_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_997_, v___x_999_, v___y_976_, v___y_977_, v___y_978_, v___y_979_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v_a_1001_; size_t v___x_1002_; size_t v___x_1003_; lean_object* v___x_1004_; 
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
lean_inc(v_a_1001_);
lean_dec_ref_known(v___x_1000_, 1);
v___x_1002_ = ((size_t)1ULL);
v___x_1003_ = lean_usize_add(v_i_974_, v___x_1002_);
v___x_1004_ = lean_array_uset(v_bs_x27_992_, v_i_974_, v_a_1001_);
v_i_974_ = v___x_1003_;
v_bs_975_ = v___x_1004_;
goto _start;
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1013_; 
lean_dec_ref(v_bs_x27_992_);
v_a_1006_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1008_ = v___x_1000_;
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_1000_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1(void){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0));
v___x_1018_ = l_Lean_stringToMessageData(v___x_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0___boxed(lean_object* v_body_1019_, lean_object* v_pos_1020_, lean_object* v_body_1021_, lean_object* v_pos_1022_, lean_object* v_x_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0(v_body_1019_, v_pos_1020_, v_body_1021_, v_pos_1022_, v_x_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec_ref(v_x_1023_);
lean_dec(v_pos_1022_);
lean_dec_ref(v_body_1021_);
lean_dec(v_pos_1020_);
lean_dec_ref(v_body_1019_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(lean_object* v_before_1030_, lean_object* v_after_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v___y_1038_; lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v_a_1043_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1053_; lean_object* v_a_1054_; lean_object* v___y_1068_; lean_object* v___y_1069_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1072_; lean_object* v___y_1073_; lean_object* v___y_1074_; lean_object* v_expr_1105_; 
v_expr_1105_ = lean_ctor_get(v_before_1030_, 0);
if (lean_obj_tag(v_expr_1105_) == 7)
{
lean_object* v_pos_1106_; lean_object* v_binderName_1107_; lean_object* v_binderType_1108_; lean_object* v_body_1109_; uint8_t v_binderInfo_1110_; lean_object* v_expr_1111_; lean_object* v_pos_1112_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1117_; 
v_pos_1106_ = lean_ctor_get(v_before_1030_, 1);
v_binderName_1107_ = lean_ctor_get(v_expr_1105_, 0);
v_binderType_1108_ = lean_ctor_get(v_expr_1105_, 1);
v_body_1109_ = lean_ctor_get(v_expr_1105_, 2);
v_binderInfo_1110_ = lean_ctor_get_uint8(v_expr_1105_, sizeof(void*)*3 + 8);
v_expr_1111_ = lean_ctor_get(v_after_1031_, 0);
v_pos_1112_ = lean_ctor_get(v_after_1031_, 1);
if (lean_obj_tag(v_expr_1111_) == 7)
{
lean_object* v_binderName_1138_; lean_object* v_binderType_1139_; lean_object* v_body_1140_; uint8_t v_binderInfo_1141_; uint8_t v___x_1142_; 
v_binderName_1138_ = lean_ctor_get(v_expr_1111_, 0);
v_binderType_1139_ = lean_ctor_get(v_expr_1111_, 1);
v_body_1140_ = lean_ctor_get(v_expr_1111_, 2);
v_binderInfo_1141_ = lean_ctor_get_uint8(v_expr_1111_, sizeof(void*)*3 + 8);
v___x_1142_ = lean_name_eq(v_binderName_1107_, v_binderName_1138_);
if (v___x_1142_ == 0)
{
v___y_1114_ = v_a_1032_;
v___y_1115_ = v_a_1033_;
v___y_1116_ = v_a_1034_;
v___y_1117_ = v_a_1035_;
goto v___jp_1113_;
}
else
{
uint8_t v___x_1143_; 
v___x_1143_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1110_, v_binderInfo_1141_);
if (v___x_1143_ == 0)
{
v___y_1114_ = v_a_1032_;
v___y_1115_ = v_a_1033_;
v___y_1116_ = v_a_1034_;
v___y_1117_ = v_a_1035_;
goto v___jp_1113_;
}
else
{
lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1191_; 
lean_inc_ref(v_body_1140_);
lean_inc_ref(v_binderType_1139_);
lean_inc(v_pos_1112_);
lean_inc_ref(v_body_1109_);
lean_inc_ref(v_binderType_1108_);
lean_inc(v_binderName_1107_);
lean_inc(v_pos_1106_);
v_isSharedCheck_1191_ = !lean_is_exclusive(v_before_1030_);
if (v_isSharedCheck_1191_ == 0)
{
lean_object* v_unused_1192_; lean_object* v_unused_1193_; 
v_unused_1192_ = lean_ctor_get(v_before_1030_, 1);
lean_dec(v_unused_1192_);
v_unused_1193_ = lean_ctor_get(v_before_1030_, 0);
lean_dec(v_unused_1193_);
v___x_1145_ = v_before_1030_;
v_isShared_1146_ = v_isSharedCheck_1191_;
goto v_resetjp_1144_;
}
else
{
lean_dec(v_before_1030_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1191_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1188_; 
v_isSharedCheck_1188_ = !lean_is_exclusive(v_after_1031_);
if (v_isSharedCheck_1188_ == 0)
{
lean_object* v_unused_1189_; lean_object* v_unused_1190_; 
v_unused_1189_ = lean_ctor_get(v_after_1031_, 1);
lean_dec(v_unused_1189_);
v_unused_1190_ = lean_ctor_get(v_after_1031_, 0);
lean_dec(v_unused_1190_);
v___x_1148_ = v_after_1031_;
v_isShared_1149_ = v_isSharedCheck_1188_;
goto v_resetjp_1147_;
}
else
{
lean_dec(v_after_1031_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1188_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___f_1150_; lean_object* v___x_1151_; lean_object* v___x_1153_; 
lean_inc(v_pos_1112_);
lean_inc(v_pos_1106_);
v___f_1150_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1150_, 0, v_body_1109_);
lean_closure_set(v___f_1150_, 1, v_pos_1106_);
lean_closure_set(v___f_1150_, 2, v_body_1140_);
lean_closure_set(v___f_1150_, 3, v_pos_1112_);
v___x_1151_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1106_);
lean_inc_ref(v_binderType_1108_);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 1, v___x_1151_);
lean_ctor_set(v___x_1148_, 0, v_binderType_1108_);
v___x_1153_ = v___x_1148_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_binderType_1108_);
lean_ctor_set(v_reuseFailAlloc_1187_, 1, v___x_1151_);
v___x_1153_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
lean_object* v___x_1154_; lean_object* v___x_1156_; 
v___x_1154_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1112_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 1, v___x_1154_);
lean_ctor_set(v___x_1145_, 0, v_binderType_1139_);
v___x_1156_ = v___x_1145_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_binderType_1139_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v___x_1154_);
v___x_1156_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
lean_object* v___x_1157_; 
v___x_1157_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1153_, v___x_1156_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1185_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1160_ = v___x_1157_;
v_isShared_1161_ = v_isSharedCheck_1185_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1185_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
uint8_t v___x_1162_; 
v___x_1162_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_a_1158_);
if (v___x_1162_ == 0)
{
lean_object* v_changesBefore_1163_; lean_object* v_changesAfter_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; uint8_t v___x_1167_; lean_object* v___x_1168_; lean_object* v_changesBefore_1169_; lean_object* v_changesAfter_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1182_; 
lean_dec_ref(v___f_1150_);
lean_dec_ref(v_binderType_1108_);
lean_dec(v_binderName_1107_);
v_changesBefore_1163_ = lean_ctor_get(v_a_1158_, 0);
lean_inc(v_changesBefore_1163_);
v_changesAfter_1164_ = lean_ctor_get(v_a_1158_, 1);
lean_inc(v_changesAfter_1164_);
lean_dec(v_a_1158_);
v___x_1165_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1106_);
lean_dec(v_pos_1106_);
v___x_1166_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1112_);
lean_dec(v_pos_1112_);
v___x_1167_ = 0;
v___x_1168_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v___x_1165_, v___x_1166_, v___x_1167_);
v_changesBefore_1169_ = lean_ctor_get(v___x_1168_, 0);
v_changesAfter_1170_ = lean_ctor_get(v___x_1168_, 1);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1172_ = v___x_1168_;
v_isShared_1173_ = v_isSharedCheck_1182_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_changesAfter_1170_);
lean_inc(v_changesBefore_1169_);
lean_dec(v___x_1168_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1182_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1174_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_1163_, v_changesBefore_1169_);
v___x_1175_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_1164_, v_changesAfter_1170_);
if (v_isShared_1173_ == 0)
{
lean_ctor_set(v___x_1172_, 1, v___x_1175_);
lean_ctor_set(v___x_1172_, 0, v___x_1174_);
v___x_1177_ = v___x_1172_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1174_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
lean_object* v___x_1179_; 
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v___x_1177_);
v___x_1179_ = v___x_1160_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1177_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
else
{
uint8_t v___x_1183_; lean_object* v___x_1184_; 
lean_del_object(v___x_1160_);
lean_dec(v_a_1158_);
lean_dec(v_pos_1112_);
lean_dec(v_pos_1106_);
v___x_1183_ = 0;
v___x_1184_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_binderName_1107_, v_binderInfo_1110_, v_binderType_1108_, v___f_1150_, v___x_1183_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_);
return v___x_1184_;
}
}
}
else
{
lean_dec_ref(v___f_1150_);
lean_dec(v_pos_1112_);
lean_dec_ref(v_binderType_1108_);
lean_dec(v_binderName_1107_);
lean_dec(v_pos_1106_);
return v___x_1157_;
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
v___y_1114_ = v_a_1032_;
v___y_1115_ = v_a_1033_;
v___y_1116_ = v_a_1034_;
v___y_1117_ = v_a_1035_;
goto v___jp_1113_;
}
v___jp_1113_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1118_ = l_Lean_Expr_getForallBinderNames(v_expr_1111_);
v___x_1119_ = l_Lean_Expr_getForallBinderNames(v_expr_1105_);
v___x_1120_ = l_List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0(v___x_1118_, v___x_1119_);
if (lean_obj_tag(v___x_1120_) == 1)
{
lean_object* v_val_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; 
v_val_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_val_1121_);
lean_dec_ref_known(v___x_1120_, 1);
v___x_1122_ = l_List_lengthTR___redArg(v_val_1121_);
v___x_1123_ = lean_unsigned_to_nat(0u);
v___x_1124_ = lean_nat_dec_eq(v___x_1122_, v___x_1123_);
lean_dec(v___x_1122_);
if (v___x_1124_ == 0)
{
lean_inc_ref(v_expr_1105_);
lean_inc(v_pos_1106_);
v___y_1068_ = v_pos_1106_;
v___y_1069_ = v_val_1121_;
v___y_1070_ = v_expr_1105_;
v___y_1071_ = v___y_1114_;
v___y_1072_ = v___y_1115_;
v___y_1073_ = v___y_1116_;
v___y_1074_ = v___y_1117_;
goto v___jp_1067_;
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1, &l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1);
v___x_1126_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_1125_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_dec_ref_known(v___x_1126_, 1);
lean_inc_ref(v_expr_1105_);
lean_inc(v_pos_1106_);
v___y_1068_ = v_pos_1106_;
v___y_1069_ = v_val_1121_;
v___y_1070_ = v_expr_1105_;
v___y_1071_ = v___y_1114_;
v___y_1072_ = v___y_1115_;
v___y_1073_ = v___y_1116_;
v___y_1074_ = v___y_1117_;
goto v___jp_1067_;
}
else
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
lean_dec(v_val_1121_);
lean_dec_ref(v_after_1031_);
lean_dec_ref(v_before_1030_);
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_1126_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1126_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
}
else
{
uint8_t v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
lean_dec(v___x_1120_);
v___x_1135_ = 0;
v___x_1136_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1030_, v_after_1031_, v___x_1135_);
v___x_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
return v___x_1137_;
}
}
}
else
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
lean_dec_ref(v_after_1031_);
lean_dec_ref(v_before_1030_);
v___x_1194_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1194_);
return v___x_1195_;
}
v___jp_1037_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(0u);
v___x_1045_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v___y_1042_, v_before_1030_, v___x_1044_, v_a_1043_);
lean_dec(v___y_1042_);
return v___x_1045_;
}
v___jp_1046_:
{
uint8_t v___x_1055_; 
v___x_1055_ = l_Lean_Exception_isInterrupt(v_a_1054_);
if (v___x_1055_ == 0)
{
uint8_t v___x_1056_; 
v___x_1056_ = l_Lean_Exception_isRuntime(v_a_1054_);
if (v___x_1056_ == 0)
{
lean_object* v___x_1057_; 
lean_dec_ref(v___y_1053_);
v___x_1057_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1049_, v___y_1048_, v___y_1051_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v___x_1058_; 
lean_dec_ref_known(v___x_1057_, 1);
v___x_1058_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___y_1038_ = v___y_1047_;
v___y_1039_ = v___y_1048_;
v___y_1040_ = v___y_1050_;
v___y_1041_ = v___y_1051_;
v___y_1042_ = v___y_1052_;
v_a_1043_ = v___x_1058_;
goto v___jp_1037_;
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
lean_dec(v___y_1052_);
lean_dec_ref(v_before_1030_);
v_a_1059_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1057_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1057_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
else
{
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1049_);
lean_dec_ref(v_before_1030_);
return v___y_1053_;
}
}
else
{
lean_dec_ref(v_a_1054_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1049_);
lean_dec_ref(v_before_1030_);
return v___y_1053_;
}
}
v___jp_1067_:
{
lean_object* v___x_1075_; lean_object* v_body_u2080_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1075_ = l_List_lengthTR___redArg(v___y_1069_);
lean_inc(v___x_1075_);
v_body_u2080_1076_ = l_Lean_Expr_getForallBodyMaxDepth(v___x_1075_, v___y_1070_);
lean_dec_ref(v___y_1070_);
v___x_1077_ = lean_box(0);
v___x_1078_ = l_Lean_Meta_saveState___redArg(v___y_1072_, v___y_1074_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1080_; 
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
lean_inc(v_a_1079_);
lean_dec_ref_known(v___x_1078_, 1);
v___x_1080_ = l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(v___y_1069_, v___x_1077_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1081_);
lean_dec_ref_known(v___x_1080_, 1);
v___x_1082_ = lean_array_mk(v_a_1081_);
v___x_1083_ = lean_expr_instantiate_rev(v_body_u2080_1076_, v___x_1082_);
lean_dec_ref(v___x_1082_);
lean_dec_ref(v_body_u2080_1076_);
lean_inc(v___x_1075_);
v___x_1084_ = l_Lean_SubExpr_Pos_pushNthBindingBody(v___x_1075_, v___y_1068_);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1083_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1085_, v_after_1031_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; 
lean_dec(v_a_1079_);
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1087_);
lean_dec_ref_known(v___x_1086_, 1);
v___y_1038_ = v___y_1073_;
v___y_1039_ = v___y_1072_;
v___y_1040_ = v___y_1071_;
v___y_1041_ = v___y_1074_;
v___y_1042_ = v___x_1075_;
v_a_1043_ = v_a_1087_;
goto v___jp_1037_;
}
else
{
lean_object* v_a_1088_; 
v_a_1088_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1088_);
v___y_1047_ = v___y_1073_;
v___y_1048_ = v___y_1072_;
v___y_1049_ = v_a_1079_;
v___y_1050_ = v___y_1071_;
v___y_1051_ = v___y_1074_;
v___y_1052_ = v___x_1075_;
v___y_1053_ = v___x_1086_;
v_a_1054_ = v_a_1088_;
goto v___jp_1046_;
}
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_dec_ref(v_body_u2080_1076_);
lean_dec(v___y_1068_);
lean_dec_ref(v_after_1031_);
v_a_1089_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1080_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1080_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
lean_inc(v_a_1089_);
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
v___y_1047_ = v___y_1073_;
v___y_1048_ = v___y_1072_;
v___y_1049_ = v_a_1079_;
v___y_1050_ = v___y_1071_;
v___y_1051_ = v___y_1074_;
v___y_1052_ = v___x_1075_;
v___y_1053_ = v___x_1094_;
v_a_1054_ = v_a_1089_;
goto v___jp_1046_;
}
}
}
}
else
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1104_; 
lean_dec_ref(v_body_u2080_1076_);
lean_dec(v___x_1075_);
lean_dec(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v_after_1031_);
lean_dec_ref(v_before_1030_);
v_a_1097_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1099_ = v___x_1078_;
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v___x_1078_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1104_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1102_; 
if (v_isShared_1100_ == 0)
{
v___x_1102_ = v___x_1099_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_a_1097_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(lean_object* v_before_1196_, lean_object* v_after_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_){
_start:
{
lean_object* v_expr_1219_; lean_object* v_pos_1220_; lean_object* v_expr_1221_; lean_object* v_pos_1222_; lean_object* v_e_u2081_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; uint8_t v___x_1231_; 
v_expr_1219_ = lean_ctor_get(v_before_1196_, 0);
v_pos_1220_ = lean_ctor_get(v_before_1196_, 1);
v_expr_1221_ = lean_ctor_get(v_after_1197_, 0);
v_pos_1222_ = lean_ctor_get(v_after_1197_, 1);
v___x_1231_ = lean_expr_eqv(v_expr_1219_, v_expr_1221_);
if (v___x_1231_ == 0)
{
switch(lean_obj_tag(v_expr_1219_))
{
case 10:
{
lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1240_; 
lean_inc_ref(v_expr_1219_);
lean_inc(v_pos_1220_);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_before_1196_);
if (v_isSharedCheck_1240_ == 0)
{
lean_object* v_unused_1241_; lean_object* v_unused_1242_; 
v_unused_1241_ = lean_ctor_get(v_before_1196_, 1);
lean_dec(v_unused_1241_);
v_unused_1242_ = lean_ctor_get(v_before_1196_, 0);
lean_dec(v_unused_1242_);
v___x_1233_ = v_before_1196_;
v_isShared_1234_ = v_isSharedCheck_1240_;
goto v_resetjp_1232_;
}
else
{
lean_dec(v_before_1196_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1240_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v_expr_1235_; lean_object* v___x_1237_; 
v_expr_1235_ = lean_ctor_get(v_expr_1219_, 1);
lean_inc_ref(v_expr_1235_);
lean_dec_ref_known(v_expr_1219_, 2);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 0, v_expr_1235_);
v___x_1237_ = v___x_1233_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_expr_1235_);
lean_ctor_set(v_reuseFailAlloc_1239_, 1, v_pos_1220_);
v___x_1237_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
v_before_1196_ = v___x_1237_;
goto _start;
}
}
}
case 5:
{
switch(lean_obj_tag(v_expr_1221_))
{
case 10:
{
lean_object* v_expr_1243_; 
lean_inc_ref(v_expr_1221_);
lean_inc(v_pos_1222_);
lean_dec_ref(v_after_1197_);
v_expr_1243_ = lean_ctor_get(v_expr_1221_, 1);
lean_inc_ref(v_expr_1243_);
lean_dec_ref_known(v_expr_1221_, 2);
v_e_u2081_1224_ = v_expr_1243_;
v___y_1225_ = v_a_1198_;
v___y_1226_ = v_a_1199_;
v___y_1227_ = v_a_1200_;
v___y_1228_ = v_a_1201_;
goto v___jp_1223_;
}
case 5:
{
lean_object* v_dummy_1244_; lean_object* v_nargs_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v_fst_1250_; lean_object* v_snd_1251_; lean_object* v_nargs_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v_fst_1256_; lean_object* v_snd_1257_; uint8_t v___x_1258_; 
v_dummy_1244_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0, &l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0);
v_nargs_1245_ = l_Lean_Expr_getAppNumArgs(v_expr_1221_);
lean_inc(v_nargs_1245_);
v___x_1246_ = lean_mk_array(v_nargs_1245_, v_dummy_1244_);
v___x_1247_ = lean_unsigned_to_nat(1u);
v___x_1248_ = lean_nat_sub(v_nargs_1245_, v___x_1247_);
lean_dec(v_nargs_1245_);
lean_inc_ref(v_expr_1221_);
v___x_1249_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(v_expr_1221_, v___x_1246_, v___x_1248_);
v_fst_1250_ = lean_ctor_get(v___x_1249_, 0);
lean_inc(v_fst_1250_);
v_snd_1251_ = lean_ctor_get(v___x_1249_, 1);
lean_inc(v_snd_1251_);
lean_dec_ref(v___x_1249_);
v_nargs_1252_ = l_Lean_Expr_getAppNumArgs(v_expr_1219_);
lean_inc(v_nargs_1252_);
v___x_1253_ = lean_mk_array(v_nargs_1252_, v_dummy_1244_);
v___x_1254_ = lean_nat_sub(v_nargs_1252_, v___x_1247_);
lean_dec(v_nargs_1252_);
lean_inc_ref(v_expr_1219_);
v___x_1255_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(v_expr_1219_, v___x_1253_, v___x_1254_);
v_fst_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_fst_1256_);
v_snd_1257_ = lean_ctor_get(v___x_1255_, 1);
lean_inc(v_snd_1257_);
lean_dec_ref(v___x_1255_);
v___x_1258_ = lean_expr_eqv(v_fst_1250_, v_fst_1256_);
lean_dec(v_fst_1256_);
lean_dec(v_fst_1250_);
if (v___x_1258_ == 0)
{
lean_dec(v_snd_1257_);
lean_dec(v_snd_1251_);
goto v___jp_1211_;
}
else
{
lean_object* v___x_1259_; lean_object* v___x_1260_; uint8_t v___x_1261_; 
v___x_1259_ = lean_array_get_size(v_snd_1251_);
v___x_1260_ = lean_array_get_size(v_snd_1257_);
v___x_1261_ = lean_nat_dec_eq(v___x_1259_, v___x_1260_);
if (v___x_1261_ == 0)
{
lean_dec(v_snd_1257_);
lean_dec(v_snd_1251_);
goto v___jp_1211_;
}
else
{
lean_object* v_args_1262_; size_t v_sz_1263_; size_t v___x_1264_; lean_object* v___x_1265_; 
v_args_1262_ = l_Array_zip___redArg(v_snd_1251_, v_snd_1257_);
lean_dec(v_snd_1257_);
v_sz_1263_ = lean_array_size(v_args_1262_);
v___x_1264_ = ((size_t)0ULL);
v___x_1265_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(v_snd_1251_, v_before_1196_, v_after_1197_, v_sz_1263_, v___x_1264_, v_args_1262_, v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_);
lean_dec_ref(v_after_1197_);
lean_dec_ref(v_before_1196_);
lean_dec(v_snd_1251_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1282_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1268_ = v___x_1265_;
v_isShared_1269_ = v_isSharedCheck_1282_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1265_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1282_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; uint8_t v___x_1273_; 
v___x_1270_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1271_ = lean_unsigned_to_nat(0u);
v___x_1272_ = lean_array_get_size(v_a_1266_);
v___x_1273_ = lean_nat_dec_lt(v___x_1271_, v___x_1272_);
if (v___x_1273_ == 0)
{
lean_object* v___x_1275_; 
lean_dec(v_a_1266_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v___x_1270_);
v___x_1275_ = v___x_1268_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v___x_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
else
{
size_t v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1280_; 
v___x_1277_ = lean_usize_of_nat(v___x_1272_);
v___x_1278_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(v_a_1266_, v___x_1264_, v___x_1277_, v___x_1270_);
lean_dec(v_a_1266_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v___x_1278_);
v___x_1280_ = v___x_1268_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
v_a_1283_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1265_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1265_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
}
default: 
{
goto v___jp_1215_;
}
}
}
case 7:
{
if (lean_obj_tag(v_expr_1221_) == 10)
{
lean_object* v_expr_1291_; 
lean_inc_ref(v_expr_1221_);
lean_inc(v_pos_1222_);
lean_dec_ref(v_after_1197_);
v_expr_1291_ = lean_ctor_get(v_expr_1221_, 1);
lean_inc_ref(v_expr_1291_);
lean_dec_ref_known(v_expr_1221_, 2);
v_e_u2081_1224_ = v_expr_1291_;
v___y_1225_ = v_a_1198_;
v___y_1226_ = v_a_1199_;
v___y_1227_ = v_a_1200_;
v___y_1228_ = v_a_1201_;
goto v___jp_1223_;
}
else
{
lean_object* v___x_1292_; 
v___x_1292_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(v_before_1196_, v_after_1197_, v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_);
return v___x_1292_;
}
}
case 6:
{
switch(lean_obj_tag(v_expr_1221_))
{
case 10:
{
lean_object* v_expr_1293_; 
lean_inc_ref(v_expr_1221_);
lean_inc(v_pos_1222_);
lean_dec_ref(v_after_1197_);
v_expr_1293_ = lean_ctor_get(v_expr_1221_, 1);
lean_inc_ref(v_expr_1293_);
lean_dec_ref_known(v_expr_1221_, 2);
v_e_u2081_1224_ = v_expr_1293_;
v___y_1225_ = v_a_1198_;
v___y_1226_ = v_a_1199_;
v___y_1227_ = v_a_1200_;
v___y_1228_ = v_a_1201_;
goto v___jp_1223_;
}
case 6:
{
lean_object* v_binderName_1294_; lean_object* v_binderType_1295_; lean_object* v_body_1296_; uint8_t v_binderInfo_1297_; lean_object* v_binderName_1298_; lean_object* v_binderType_1299_; lean_object* v_body_1300_; uint8_t v_binderInfo_1301_; uint8_t v___x_1302_; 
v_binderName_1294_ = lean_ctor_get(v_expr_1219_, 0);
v_binderType_1295_ = lean_ctor_get(v_expr_1219_, 1);
v_body_1296_ = lean_ctor_get(v_expr_1219_, 2);
v_binderInfo_1297_ = lean_ctor_get_uint8(v_expr_1219_, sizeof(void*)*3 + 8);
v_binderName_1298_ = lean_ctor_get(v_expr_1221_, 0);
v_binderType_1299_ = lean_ctor_get(v_expr_1221_, 1);
v_body_1300_ = lean_ctor_get(v_expr_1221_, 2);
v_binderInfo_1301_ = lean_ctor_get_uint8(v_expr_1221_, sizeof(void*)*3 + 8);
v___x_1302_ = lean_name_eq(v_binderName_1294_, v_binderName_1298_);
if (v___x_1302_ == 0)
{
goto v___jp_1207_;
}
else
{
uint8_t v___x_1303_; 
v___x_1303_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1297_, v_binderInfo_1301_);
if (v___x_1303_ == 0)
{
goto v___jp_1207_;
}
else
{
lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1353_; 
lean_inc_ref(v_body_1300_);
lean_inc_ref(v_binderType_1299_);
lean_inc_ref(v_body_1296_);
lean_inc_ref(v_binderType_1295_);
lean_inc(v_pos_1222_);
lean_inc(v_pos_1220_);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_before_1196_);
if (v_isSharedCheck_1353_ == 0)
{
lean_object* v_unused_1354_; lean_object* v_unused_1355_; 
v_unused_1354_ = lean_ctor_get(v_before_1196_, 1);
lean_dec(v_unused_1354_);
v_unused_1355_ = lean_ctor_get(v_before_1196_, 0);
lean_dec(v_unused_1355_);
v___x_1305_ = v_before_1196_;
v_isShared_1306_ = v_isSharedCheck_1353_;
goto v_resetjp_1304_;
}
else
{
lean_dec(v_before_1196_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1353_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1350_; 
v_isSharedCheck_1350_ = !lean_is_exclusive(v_after_1197_);
if (v_isSharedCheck_1350_ == 0)
{
lean_object* v_unused_1351_; lean_object* v_unused_1352_; 
v_unused_1351_ = lean_ctor_get(v_after_1197_, 1);
lean_dec(v_unused_1351_);
v_unused_1352_ = lean_ctor_get(v_after_1197_, 0);
lean_dec(v_unused_1352_);
v___x_1308_ = v_after_1197_;
v_isShared_1309_ = v_isSharedCheck_1350_;
goto v_resetjp_1307_;
}
else
{
lean_dec(v_after_1197_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1350_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1312_; 
v___x_1310_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1220_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 1, v___x_1310_);
lean_ctor_set(v___x_1308_, 0, v_binderType_1295_);
v___x_1312_ = v___x_1308_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_binderType_1295_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v___x_1310_);
v___x_1312_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
lean_object* v___x_1313_; lean_object* v___x_1315_; 
v___x_1313_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1222_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 1, v___x_1313_);
lean_ctor_set(v___x_1305_, 0, v_binderType_1299_);
v___x_1315_ = v___x_1305_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_binderType_1299_);
lean_ctor_set(v_reuseFailAlloc_1348_, 1, v___x_1313_);
v___x_1315_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
lean_object* v___x_1316_; 
v___x_1316_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1312_, v___x_1315_, v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1347_; 
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1319_ = v___x_1316_;
v_isShared_1320_ = v_isSharedCheck_1347_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1316_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1347_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
uint8_t v___x_1321_; 
v___x_1321_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_a_1317_);
if (v___x_1321_ == 0)
{
lean_object* v_changesBefore_1322_; lean_object* v_changesAfter_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; uint8_t v___x_1326_; lean_object* v___x_1327_; lean_object* v_changesBefore_1328_; lean_object* v_changesAfter_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1341_; 
lean_dec_ref(v_body_1300_);
lean_dec_ref(v_body_1296_);
v_changesBefore_1322_ = lean_ctor_get(v_a_1317_, 0);
lean_inc(v_changesBefore_1322_);
v_changesAfter_1323_ = lean_ctor_get(v_a_1317_, 1);
lean_inc(v_changesAfter_1323_);
lean_dec(v_a_1317_);
v___x_1324_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1220_);
lean_dec(v_pos_1220_);
v___x_1325_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1222_);
lean_dec(v_pos_1222_);
v___x_1326_ = 0;
v___x_1327_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v___x_1324_, v___x_1325_, v___x_1326_);
v_changesBefore_1328_ = lean_ctor_get(v___x_1327_, 0);
v_changesAfter_1329_ = lean_ctor_get(v___x_1327_, 1);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1327_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1331_ = v___x_1327_;
v_isShared_1332_ = v_isSharedCheck_1341_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_changesAfter_1329_);
lean_inc(v_changesBefore_1328_);
lean_dec(v___x_1327_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1341_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1336_; 
v___x_1333_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_1322_, v_changesBefore_1328_);
v___x_1334_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_1323_, v_changesAfter_1329_);
if (v_isShared_1332_ == 0)
{
lean_ctor_set(v___x_1331_, 1, v___x_1334_);
lean_ctor_set(v___x_1331_, 0, v___x_1333_);
v___x_1336_ = v___x_1331_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v___x_1333_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
lean_object* v___x_1338_; 
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 0, v___x_1336_);
v___x_1338_ = v___x_1319_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v___x_1336_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
else
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
lean_del_object(v___x_1319_);
lean_dec(v_a_1317_);
v___x_1342_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1220_);
lean_dec(v_pos_1220_);
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v_body_1296_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1222_);
lean_dec(v_pos_1222_);
v___x_1345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1345_, 0, v_body_1300_);
lean_ctor_set(v___x_1345_, 1, v___x_1344_);
v_before_1196_ = v___x_1343_;
v_after_1197_ = v___x_1345_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_body_1300_);
lean_dec_ref(v_body_1296_);
lean_dec(v_pos_1222_);
lean_dec(v_pos_1220_);
return v___x_1316_;
}
}
}
}
}
}
}
}
default: 
{
goto v___jp_1215_;
}
}
}
case 11:
{
switch(lean_obj_tag(v_expr_1221_))
{
case 10:
{
lean_object* v_expr_1356_; 
lean_inc_ref(v_expr_1221_);
lean_inc(v_pos_1222_);
lean_dec_ref(v_after_1197_);
v_expr_1356_ = lean_ctor_get(v_expr_1221_, 1);
lean_inc_ref(v_expr_1356_);
lean_dec_ref_known(v_expr_1221_, 2);
v_e_u2081_1224_ = v_expr_1356_;
v___y_1225_ = v_a_1198_;
v___y_1226_ = v_a_1199_;
v___y_1227_ = v_a_1200_;
v___y_1228_ = v_a_1201_;
goto v___jp_1223_;
}
case 11:
{
lean_object* v_typeName_1357_; lean_object* v_idx_1358_; lean_object* v_struct_1359_; lean_object* v_typeName_1360_; lean_object* v_idx_1361_; lean_object* v_struct_1362_; uint8_t v___x_1363_; 
v_typeName_1357_ = lean_ctor_get(v_expr_1219_, 0);
v_idx_1358_ = lean_ctor_get(v_expr_1219_, 1);
v_struct_1359_ = lean_ctor_get(v_expr_1219_, 2);
v_typeName_1360_ = lean_ctor_get(v_expr_1221_, 0);
v_idx_1361_ = lean_ctor_get(v_expr_1221_, 1);
v_struct_1362_ = lean_ctor_get(v_expr_1221_, 2);
v___x_1363_ = lean_name_eq(v_typeName_1357_, v_typeName_1360_);
if (v___x_1363_ == 0)
{
goto v___jp_1203_;
}
else
{
uint8_t v___x_1364_; 
v___x_1364_ = lean_nat_dec_eq(v_idx_1358_, v_idx_1361_);
if (v___x_1364_ == 0)
{
goto v___jp_1203_;
}
else
{
lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1383_; 
lean_inc_ref(v_struct_1362_);
lean_inc_ref(v_struct_1359_);
lean_inc(v_pos_1222_);
lean_inc(v_pos_1220_);
v_isSharedCheck_1383_ = !lean_is_exclusive(v_before_1196_);
if (v_isSharedCheck_1383_ == 0)
{
lean_object* v_unused_1384_; lean_object* v_unused_1385_; 
v_unused_1384_ = lean_ctor_get(v_before_1196_, 1);
lean_dec(v_unused_1384_);
v_unused_1385_ = lean_ctor_get(v_before_1196_, 0);
lean_dec(v_unused_1385_);
v___x_1366_ = v_before_1196_;
v_isShared_1367_ = v_isSharedCheck_1383_;
goto v_resetjp_1365_;
}
else
{
lean_dec(v_before_1196_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1383_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1380_; 
v_isSharedCheck_1380_ = !lean_is_exclusive(v_after_1197_);
if (v_isSharedCheck_1380_ == 0)
{
lean_object* v_unused_1381_; lean_object* v_unused_1382_; 
v_unused_1381_ = lean_ctor_get(v_after_1197_, 1);
lean_dec(v_unused_1381_);
v_unused_1382_ = lean_ctor_get(v_after_1197_, 0);
lean_dec(v_unused_1382_);
v___x_1369_ = v_after_1197_;
v_isShared_1370_ = v_isSharedCheck_1380_;
goto v_resetjp_1368_;
}
else
{
lean_dec(v_after_1197_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1380_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1371_; lean_object* v___x_1373_; 
v___x_1371_ = l_Lean_SubExpr_Pos_pushProj(v_pos_1220_);
lean_dec(v_pos_1220_);
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 1, v___x_1371_);
lean_ctor_set(v___x_1369_, 0, v_struct_1359_);
v___x_1373_ = v___x_1369_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_struct_1359_);
lean_ctor_set(v_reuseFailAlloc_1379_, 1, v___x_1371_);
v___x_1373_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_object* v___x_1374_; lean_object* v___x_1376_; 
v___x_1374_ = l_Lean_SubExpr_Pos_pushProj(v_pos_1222_);
lean_dec(v_pos_1222_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 1, v___x_1374_);
lean_ctor_set(v___x_1366_, 0, v_struct_1362_);
v___x_1376_ = v___x_1366_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_struct_1362_);
lean_ctor_set(v_reuseFailAlloc_1378_, 1, v___x_1374_);
v___x_1376_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
v_before_1196_ = v___x_1373_;
v_after_1197_ = v___x_1376_;
goto _start;
}
}
}
}
}
}
}
default: 
{
goto v___jp_1215_;
}
}
}
default: 
{
if (lean_obj_tag(v_expr_1221_) == 10)
{
lean_object* v_expr_1386_; 
lean_inc_ref(v_expr_1221_);
lean_inc(v_pos_1222_);
lean_dec_ref(v_after_1197_);
v_expr_1386_ = lean_ctor_get(v_expr_1221_, 1);
lean_inc_ref(v_expr_1386_);
lean_dec_ref_known(v_expr_1221_, 2);
v_e_u2081_1224_ = v_expr_1386_;
v___y_1225_ = v_a_1198_;
v___y_1226_ = v_a_1199_;
v___y_1227_ = v_a_1200_;
v___y_1228_ = v_a_1201_;
goto v___jp_1223_;
}
else
{
goto v___jp_1215_;
}
}
}
}
else
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
lean_dec_ref(v_after_1197_);
lean_dec_ref(v_before_1196_);
v___x_1387_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
return v___x_1388_;
}
v___jp_1203_:
{
uint8_t v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1204_ = 0;
v___x_1205_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1196_, v_after_1197_, v___x_1204_);
v___x_1206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1205_);
return v___x_1206_;
}
v___jp_1207_:
{
uint8_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1208_ = 0;
v___x_1209_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1196_, v_after_1197_, v___x_1208_);
v___x_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
return v___x_1210_;
}
v___jp_1211_:
{
uint8_t v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1212_ = 0;
v___x_1213_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1196_, v_after_1197_, v___x_1212_);
v___x_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
return v___x_1214_;
}
v___jp_1215_:
{
uint8_t v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1216_ = 0;
v___x_1217_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1196_, v_after_1197_, v___x_1216_);
v___x_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
return v___x_1218_;
}
v___jp_1223_:
{
lean_object* v___x_1229_; 
v___x_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1229_, 0, v_e_u2081_1224_);
lean_ctor_set(v___x_1229_, 1, v_pos_1222_);
v_after_1197_ = v___x_1229_;
v_a_1198_ = v___y_1225_;
v_a_1199_ = v___y_1226_;
v_a_1200_ = v___y_1227_;
v_a_1201_ = v___y_1228_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0(lean_object* v_body_1389_, lean_object* v_pos_1390_, lean_object* v_body_1391_, lean_object* v_pos_1392_, lean_object* v_x_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1399_ = lean_expr_instantiate1(v_body_1389_, v_x_1393_);
v___x_1400_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1390_);
v___x_1401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1399_);
lean_ctor_set(v___x_1401_, 1, v___x_1400_);
v___x_1402_ = lean_expr_instantiate1(v_body_1391_, v_x_1393_);
v___x_1403_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1392_);
v___x_1404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1402_);
lean_ctor_set(v___x_1404_, 1, v___x_1403_);
v___x_1405_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1401_, v___x_1404_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg___boxed(lean_object* v_snd_1406_, lean_object* v_before_1407_, lean_object* v_after_1408_, lean_object* v_sz_1409_, lean_object* v_i_1410_, lean_object* v_bs_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
size_t v_sz_boxed_1417_; size_t v_i_boxed_1418_; lean_object* v_res_1419_; 
v_sz_boxed_1417_ = lean_unbox_usize(v_sz_1409_);
lean_dec(v_sz_1409_);
v_i_boxed_1418_ = lean_unbox_usize(v_i_1410_);
lean_dec(v_i_1410_);
v_res_1419_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(v_snd_1406_, v_before_1407_, v_after_1408_, v_sz_boxed_1417_, v_i_boxed_1418_, v_bs_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_);
lean_dec(v___y_1415_);
lean_dec_ref(v___y_1414_);
lean_dec(v___y_1413_);
lean_dec_ref(v___y_1412_);
lean_dec_ref(v_after_1408_);
lean_dec_ref(v_before_1407_);
lean_dec_ref(v_snd_1406_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___boxed(lean_object* v_before_1420_, lean_object* v_after_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(v_before_1420_, v_after_1421_, v_a_1422_, v_a_1423_, v_a_1424_, v_a_1425_);
lean_dec(v_a_1425_);
lean_dec_ref(v_a_1424_);
lean_dec(v_a_1423_);
lean_dec_ref(v_a_1422_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed(lean_object* v_before_1428_, lean_object* v_after_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_before_1428_, v_after_1429_, v_a_1430_, v_a_1431_, v_a_1432_, v_a_1433_);
lean_dec(v_a_1433_);
lean_dec_ref(v_a_1432_);
lean_dec(v_a_1431_);
lean_dec_ref(v_a_1430_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1(lean_object* v_upperBound_1436_, lean_object* v_before_1437_, lean_object* v_inst_1438_, lean_object* v_R_1439_, lean_object* v_a_1440_, lean_object* v_b_1441_, lean_object* v_c_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v___x_1448_; 
v___x_1448_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v_upperBound_1436_, v_before_1437_, v_a_1440_, v_b_1441_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___boxed(lean_object* v_upperBound_1449_, lean_object* v_before_1450_, lean_object* v_inst_1451_, lean_object* v_R_1452_, lean_object* v_a_1453_, lean_object* v_b_1454_, lean_object* v_c_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1(v_upperBound_1449_, v_before_1450_, v_inst_1451_, v_R_1452_, v_a_1453_, v_b_1454_, v_c_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec(v_upperBound_1449_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3(lean_object* v_00_u03b1_1462_, lean_object* v_msg_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v___x_1469_; 
v___x_1469_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v_msg_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___boxed(lean_object* v_00_u03b1_1470_, lean_object* v_msg_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3(v_00_u03b1_1470_, v_msg_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
lean_dec(v___y_1475_);
lean_dec_ref(v___y_1474_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1472_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4(uint8_t v_b_u2082_1478_, lean_object* v_k_1479_, lean_object* v_t_1480_, lean_object* v_hl_1481_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_1478_, v_k_1479_, v_t_1480_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___boxed(lean_object* v_b_u2082_1483_, lean_object* v_k_1484_, lean_object* v_t_1485_, lean_object* v_hl_1486_){
_start:
{
uint8_t v_b_u2082_boxed_1487_; lean_object* v_res_1488_; 
v_b_u2082_boxed_1487_ = lean_unbox(v_b_u2082_1483_);
v_res_1488_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4(v_b_u2082_boxed_1487_, v_k_1484_, v_t_1485_, v_hl_1486_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5(lean_object* v_init_1489_, lean_object* v_t_1490_){
_start:
{
lean_object* v___x_1491_; 
v___x_1491_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_init_1489_, v_t_1490_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9(lean_object* v_snd_1492_, lean_object* v_before_1493_, lean_object* v_after_1494_, lean_object* v_as_1495_, size_t v_sz_1496_, size_t v_i_1497_, lean_object* v_bs_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(v_snd_1492_, v_before_1493_, v_after_1494_, v_sz_1496_, v_i_1497_, v_bs_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___boxed(lean_object* v_snd_1505_, lean_object* v_before_1506_, lean_object* v_after_1507_, lean_object* v_as_1508_, lean_object* v_sz_1509_, lean_object* v_i_1510_, lean_object* v_bs_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
size_t v_sz_boxed_1517_; size_t v_i_boxed_1518_; lean_object* v_res_1519_; 
v_sz_boxed_1517_ = lean_unbox_usize(v_sz_1509_);
lean_dec(v_sz_1509_);
v_i_boxed_1518_ = lean_unbox_usize(v_i_1510_);
lean_dec(v_i_1510_);
v_res_1519_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9(v_snd_1505_, v_before_1506_, v_after_1507_, v_as_1508_, v_sz_boxed_1517_, v_i_boxed_1518_, v_bs_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
lean_dec_ref(v_as_1508_);
lean_dec_ref(v_after_1507_);
lean_dec_ref(v_before_1506_);
lean_dec_ref(v_snd_1505_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(lean_object* v_e_u2080_1520_, lean_object* v_e_u2081_1521_, uint8_t v_useAfter_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_){
_start:
{
lean_object* v___x_1528_; lean_object* v_s_u2080_1529_; lean_object* v_s_u2081_1530_; 
v___x_1528_ = l_Lean_SubExpr_Pos_root;
v_s_u2080_1529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_u2080_1529_, 0, v_e_u2080_1520_);
lean_ctor_set(v_s_u2080_1529_, 1, v___x_1528_);
v_s_u2081_1530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_u2081_1530_, 0, v_e_u2081_1521_);
lean_ctor_set(v_s_u2081_1530_, 1, v___x_1528_);
if (v_useAfter_1522_ == 0)
{
lean_object* v___x_1531_; 
v___x_1531_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_s_u2081_1530_, v_s_u2080_1529_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_);
return v___x_1531_;
}
else
{
lean_object* v___x_1532_; 
v___x_1532_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_s_u2080_1529_, v_s_u2081_1530_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_);
return v___x_1532_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff___boxed(lean_object* v_e_u2080_1533_, lean_object* v_e_u2081_1534_, lean_object* v_useAfter_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_){
_start:
{
uint8_t v_useAfter_boxed_1541_; lean_object* v_res_1542_; 
v_useAfter_boxed_1541_ = lean_unbox(v_useAfter_1535_);
v_res_1542_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_e_u2080_1533_, v_e_u2081_1534_, v_useAfter_boxed_1541_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_);
lean_dec(v_a_1539_);
lean_dec_ref(v_a_1538_);
lean_dec(v_a_1537_);
lean_dec_ref(v_a_1536_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0(uint8_t v_useAfter_1543_, lean_object* v_info_1544_, uint8_t v_d_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
uint8_t v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1551_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(v_useAfter_1543_, v_d_1545_);
v___x_1552_ = l_Lean_Widget_SubexprInfo_withDiffTag(v___x_1551_, v_info_1544_);
v___x_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0___boxed(lean_object* v_useAfter_1554_, lean_object* v_info_1555_, lean_object* v_d_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_){
_start:
{
uint8_t v_useAfter_boxed_1562_; uint8_t v_d_boxed_1563_; lean_object* v_res_1564_; 
v_useAfter_boxed_1562_ = lean_unbox(v_useAfter_1554_);
v_d_boxed_1563_ = lean_unbox(v_d_1556_);
v_res_1564_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0(v_useAfter_boxed_1562_, v_info_1555_, v_d_boxed_1563_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(lean_object* v_f_1565_, lean_object* v_x_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
switch(lean_obj_tag(v_x_1566_))
{
case 0:
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1580_; 
lean_dec_ref(v_f_1565_);
v_a_1572_ = lean_ctor_get(v_x_1566_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v_x_1566_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1574_ = v_x_1566_;
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v_x_1566_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1572_);
v___x_1577_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1577_);
return v___x_1578_;
}
}
}
case 1:
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1607_; 
v_a_1581_ = lean_ctor_get(v_x_1566_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v_x_1566_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1583_ = v_x_1566_;
v_isShared_1584_ = v_isSharedCheck_1607_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v_x_1566_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1607_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
size_t v_sz_1585_; size_t v___x_1586_; lean_object* v___x_1587_; 
v_sz_1585_ = lean_array_size(v_a_1581_);
v___x_1586_ = ((size_t)0ULL);
v___x_1587_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(v_f_1565_, v_sz_1585_, v___x_1586_, v_a_1581_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1598_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1590_ = v___x_1587_;
v_isShared_1591_ = v_isSharedCheck_1598_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_a_1588_);
lean_dec(v___x_1587_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1598_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1593_; 
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 0, v_a_1588_);
v___x_1593_ = v___x_1583_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1588_);
v___x_1593_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1595_; 
if (v_isShared_1591_ == 0)
{
lean_ctor_set(v___x_1590_, 0, v___x_1593_);
v___x_1595_ = v___x_1590_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v___x_1593_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
lean_del_object(v___x_1583_);
v_a_1599_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1601_ = v___x_1587_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___x_1587_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1599_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
}
}
default: 
{
lean_object* v_a_1608_; lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1635_; 
v_a_1608_ = lean_ctor_get(v_x_1566_, 0);
v_a_1609_ = lean_ctor_get(v_x_1566_, 1);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_x_1566_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1611_ = v_x_1566_;
v_isShared_1612_ = v_isSharedCheck_1635_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_inc(v_a_1608_);
lean_dec(v_x_1566_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1635_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1613_; 
lean_inc_ref(v_f_1565_);
lean_inc(v___y_1570_);
lean_inc_ref(v___y_1569_);
lean_inc(v___y_1568_);
lean_inc_ref(v___y_1567_);
v___x_1613_ = lean_apply_6(v_f_1565_, v_a_1608_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_, lean_box(0));
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; lean_object* v___x_1615_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_a_1614_);
lean_dec_ref_known(v___x_1613_, 1);
v___x_1615_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1565_, v_a_1609_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1626_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1618_ = v___x_1615_;
v_isShared_1619_ = v_isSharedCheck_1626_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1615_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1626_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 1, v_a_1616_);
lean_ctor_set(v___x_1611_, 0, v_a_1614_);
v___x_1621_ = v___x_1611_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_a_1614_);
lean_ctor_set(v_reuseFailAlloc_1625_, 1, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
lean_object* v___x_1623_; 
if (v_isShared_1619_ == 0)
{
lean_ctor_set(v___x_1618_, 0, v___x_1621_);
v___x_1623_ = v___x_1618_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v___x_1621_);
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
else
{
lean_dec(v_a_1614_);
lean_del_object(v___x_1611_);
return v___x_1615_;
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_del_object(v___x_1611_);
lean_dec_ref(v_a_1609_);
lean_dec_ref(v_f_1565_);
v_a_1627_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1613_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1613_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(lean_object* v_f_1636_, size_t v_sz_1637_, size_t v_i_1638_, lean_object* v_bs_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
uint8_t v___x_1645_; 
v___x_1645_ = lean_usize_dec_lt(v_i_1638_, v_sz_1637_);
if (v___x_1645_ == 0)
{
lean_object* v___x_1646_; 
lean_dec_ref(v_f_1636_);
v___x_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1646_, 0, v_bs_1639_);
return v___x_1646_;
}
else
{
lean_object* v_v_1647_; lean_object* v___x_1648_; lean_object* v_bs_x27_1649_; lean_object* v___x_1650_; 
v_v_1647_ = lean_array_uget(v_bs_1639_, v_i_1638_);
v___x_1648_ = lean_unsigned_to_nat(0u);
v_bs_x27_1649_ = lean_array_uset(v_bs_1639_, v_i_1638_, v___x_1648_);
lean_inc_ref(v_f_1636_);
v___x_1650_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1636_, v_v_1647_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v_a_1651_; size_t v___x_1652_; size_t v___x_1653_; lean_object* v___x_1654_; 
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1651_);
lean_dec_ref_known(v___x_1650_, 1);
v___x_1652_ = ((size_t)1ULL);
v___x_1653_ = lean_usize_add(v_i_1638_, v___x_1652_);
v___x_1654_ = lean_array_uset(v_bs_x27_1649_, v_i_1638_, v_a_1651_);
v_i_1638_ = v___x_1653_;
v_bs_1639_ = v___x_1654_;
goto _start;
}
else
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
lean_dec_ref(v_bs_x27_1649_);
lean_dec_ref(v_f_1636_);
v_a_1656_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1650_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1650_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_1664_, lean_object* v_sz_1665_, lean_object* v_i_1666_, lean_object* v_bs_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
size_t v_sz_boxed_1673_; size_t v_i_boxed_1674_; lean_object* v_res_1675_; 
v_sz_boxed_1673_ = lean_unbox_usize(v_sz_1665_);
lean_dec(v_sz_1665_);
v_i_boxed_1674_ = lean_unbox_usize(v_i_1666_);
lean_dec(v_i_1666_);
v_res_1675_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(v_f_1664_, v_sz_boxed_1673_, v_i_boxed_1674_, v_bs_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec_ref(v___y_1668_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg___boxed(lean_object* v_f_1676_, lean_object* v_x_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1676_, v_x_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
lean_dec(v___y_1679_);
lean_dec_ref(v___y_1678_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(lean_object* v_t_1684_, lean_object* v_k_1685_){
_start:
{
if (lean_obj_tag(v_t_1684_) == 0)
{
lean_object* v_k_1686_; lean_object* v_v_1687_; lean_object* v_l_1688_; lean_object* v_r_1689_; uint8_t v___x_1690_; 
v_k_1686_ = lean_ctor_get(v_t_1684_, 1);
v_v_1687_ = lean_ctor_get(v_t_1684_, 2);
v_l_1688_ = lean_ctor_get(v_t_1684_, 3);
v_r_1689_ = lean_ctor_get(v_t_1684_, 4);
v___x_1690_ = lean_nat_dec_lt(v_k_1685_, v_k_1686_);
if (v___x_1690_ == 0)
{
uint8_t v___x_1691_; 
v___x_1691_ = lean_nat_dec_eq(v_k_1685_, v_k_1686_);
if (v___x_1691_ == 0)
{
v_t_1684_ = v_r_1689_;
goto _start;
}
else
{
lean_object* v___x_1693_; 
lean_inc(v_v_1687_);
v___x_1693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1693_, 0, v_v_1687_);
return v___x_1693_;
}
}
else
{
v_t_1684_ = v_l_1688_;
goto _start;
}
}
else
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_box(0);
return v___x_1695_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg___boxed(lean_object* v_t_1696_, lean_object* v_k_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_t_1696_, v_k_1697_);
lean_dec(v_k_1697_);
lean_dec(v_t_1696_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0(lean_object* v_pm_1699_, lean_object* v_merger_1700_, lean_object* v_info_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v_subexprPos_1707_; lean_object* v___x_1708_; 
v_subexprPos_1707_ = lean_ctor_get(v_info_1701_, 1);
v___x_1708_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_pm_1699_, v_subexprPos_1707_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v___x_1709_; 
lean_dec_ref(v_merger_1700_);
v___x_1709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1709_, 0, v_info_1701_);
return v___x_1709_;
}
else
{
lean_object* v_val_1710_; lean_object* v___x_1711_; 
v_val_1710_ = lean_ctor_get(v___x_1708_, 0);
lean_inc(v_val_1710_);
lean_dec_ref_known(v___x_1708_, 1);
lean_inc(v___y_1705_);
lean_inc_ref(v___y_1704_);
lean_inc(v___y_1703_);
lean_inc_ref(v___y_1702_);
v___x_1711_ = lean_apply_7(v_merger_1700_, v_info_1701_, v_val_1710_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, lean_box(0));
return v___x_1711_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0___boxed(lean_object* v_pm_1712_, lean_object* v_merger_1713_, lean_object* v_info_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0(v_pm_1712_, v_merger_1713_, v_info_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec(v_pm_1712_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(lean_object* v_merger_1721_, lean_object* v_pm_1722_, lean_object* v_tt_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_){
_start:
{
if (lean_obj_tag(v_pm_1722_) == 0)
{
lean_object* v___f_1729_; lean_object* v___x_1730_; 
v___f_1729_ = lean_alloc_closure((void*)(l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1729_, 0, v_pm_1722_);
lean_closure_set(v___f_1729_, 1, v_merger_1721_);
v___x_1730_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v___f_1729_, v_tt_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
return v___x_1730_;
}
else
{
lean_object* v___x_1731_; 
lean_dec_ref(v_merger_1721_);
v___x_1731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1731_, 0, v_tt_1723_);
return v___x_1731_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___boxed(lean_object* v_merger_1732_, lean_object* v_pm_1733_, lean_object* v_tt_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v_merger_1732_, v_pm_1733_, v_tt_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(uint8_t v_useAfter_1741_, lean_object* v_diff_1742_, lean_object* v_info_u2081_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_){
_start:
{
lean_object* v___x_1749_; lean_object* v___f_1750_; 
v___x_1749_ = lean_box(v_useAfter_1741_);
v___f_1750_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1750_, 0, v___x_1749_);
if (v_useAfter_1741_ == 0)
{
lean_object* v_changesBefore_1751_; lean_object* v___x_1752_; 
v_changesBefore_1751_ = lean_ctor_get(v_diff_1742_, 0);
lean_inc(v_changesBefore_1751_);
lean_dec_ref(v_diff_1742_);
v___x_1752_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v___f_1750_, v_changesBefore_1751_, v_info_u2081_1743_, v_a_1744_, v_a_1745_, v_a_1746_, v_a_1747_);
return v___x_1752_;
}
else
{
lean_object* v_changesAfter_1753_; lean_object* v___x_1754_; 
v_changesAfter_1753_ = lean_ctor_get(v_diff_1742_, 1);
lean_inc(v_changesAfter_1753_);
lean_dec_ref(v_diff_1742_);
v___x_1754_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v___f_1750_, v_changesAfter_1753_, v_info_u2081_1743_, v_a_1744_, v_a_1745_, v_a_1746_, v_a_1747_);
return v___x_1754_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___boxed(lean_object* v_useAfter_1755_, lean_object* v_diff_1756_, lean_object* v_info_u2081_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_){
_start:
{
uint8_t v_useAfter_boxed_1763_; lean_object* v_res_1764_; 
v_useAfter_boxed_1763_ = lean_unbox(v_useAfter_1755_);
v_res_1764_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_boxed_1763_, v_diff_1756_, v_info_u2081_1757_, v_a_1758_, v_a_1759_, v_a_1760_, v_a_1761_);
lean_dec(v_a_1761_);
lean_dec_ref(v_a_1760_);
lean_dec(v_a_1759_);
lean_dec_ref(v_a_1758_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0(lean_object* v_00_u03b1_1765_, lean_object* v_merger_1766_, lean_object* v_pm_1767_, lean_object* v_tt_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
lean_object* v___x_1774_; 
v___x_1774_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v_merger_1766_, v_pm_1767_, v_tt_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___boxed(lean_object* v_00_u03b1_1775_, lean_object* v_merger_1776_, lean_object* v_pm_1777_, lean_object* v_tt_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0(v_00_u03b1_1775_, v_merger_1776_, v_pm_1777_, v_tt_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v___y_1780_);
lean_dec_ref(v___y_1779_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0(lean_object* v_00_u03b4_1785_, lean_object* v_t_1786_, lean_object* v_k_1787_){
_start:
{
lean_object* v___x_1788_; 
v___x_1788_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_t_1786_, v_k_1787_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___boxed(lean_object* v_00_u03b4_1789_, lean_object* v_t_1790_, lean_object* v_k_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0(v_00_u03b4_1789_, v_t_1790_, v_k_1791_);
lean_dec(v_k_1791_);
lean_dec(v_t_1790_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1(lean_object* v_00_u03b1_1793_, lean_object* v_00_u03b2_1794_, lean_object* v_f_1795_, lean_object* v_x_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
lean_object* v___x_1802_; 
v___x_1802_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1795_, v_x_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1803_, lean_object* v_00_u03b2_1804_, lean_object* v_f_1805_, lean_object* v_x_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1(v_00_u03b1_1803_, v_00_u03b2_1804_, v_f_1805_, v_x_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1813_, lean_object* v_00_u03b2_1814_, lean_object* v_f_1815_, size_t v_sz_1816_, size_t v_i_1817_, lean_object* v_bs_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v___x_1824_; 
v___x_1824_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(v_f_1815_, v_sz_1816_, v_i_1817_, v_bs_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1825_, lean_object* v_00_u03b2_1826_, lean_object* v_f_1827_, lean_object* v_sz_1828_, lean_object* v_i_1829_, lean_object* v_bs_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
size_t v_sz_boxed_1836_; size_t v_i_boxed_1837_; lean_object* v_res_1838_; 
v_sz_boxed_1836_ = lean_unbox_usize(v_sz_1828_);
lean_dec(v_sz_1828_);
v_i_boxed_1837_ = lean_unbox_usize(v_i_1829_);
lean_dec(v_i_1829_);
v_res_1838_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2(v_00_u03b1_1825_, v_00_u03b2_1826_, v_f_1827_, v_sz_boxed_1836_, v_i_boxed_1837_, v_bs_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec(v___y_1832_);
lean_dec_ref(v___y_1831_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(lean_object* v_e_1839_, lean_object* v___y_1840_){
_start:
{
uint8_t v___x_1842_; 
v___x_1842_ = l_Lean_Expr_hasMVar(v_e_1839_);
if (v___x_1842_ == 0)
{
lean_object* v___x_1843_; 
v___x_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1843_, 0, v_e_1839_);
return v___x_1843_;
}
else
{
lean_object* v___x_1844_; lean_object* v_mctx_1845_; lean_object* v___x_1846_; lean_object* v_fst_1847_; lean_object* v_snd_1848_; lean_object* v___x_1849_; lean_object* v_cache_1850_; lean_object* v_zetaDeltaFVarIds_1851_; lean_object* v_postponed_1852_; lean_object* v_diag_1853_; lean_object* v_rewriteFires_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1863_; 
v___x_1844_ = lean_st_ref_get(v___y_1840_);
v_mctx_1845_ = lean_ctor_get(v___x_1844_, 0);
lean_inc_ref(v_mctx_1845_);
lean_dec(v___x_1844_);
v___x_1846_ = l_Lean_instantiateMVarsCore(v_mctx_1845_, v_e_1839_);
v_fst_1847_ = lean_ctor_get(v___x_1846_, 0);
lean_inc(v_fst_1847_);
v_snd_1848_ = lean_ctor_get(v___x_1846_, 1);
lean_inc(v_snd_1848_);
lean_dec_ref(v___x_1846_);
v___x_1849_ = lean_st_ref_take(v___y_1840_);
v_cache_1850_ = lean_ctor_get(v___x_1849_, 1);
v_zetaDeltaFVarIds_1851_ = lean_ctor_get(v___x_1849_, 2);
v_postponed_1852_ = lean_ctor_get(v___x_1849_, 3);
v_diag_1853_ = lean_ctor_get(v___x_1849_, 4);
v_rewriteFires_1854_ = lean_ctor_get(v___x_1849_, 5);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1863_ == 0)
{
lean_object* v_unused_1864_; 
v_unused_1864_ = lean_ctor_get(v___x_1849_, 0);
lean_dec(v_unused_1864_);
v___x_1856_ = v___x_1849_;
v_isShared_1857_ = v_isSharedCheck_1863_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_rewriteFires_1854_);
lean_inc(v_diag_1853_);
lean_inc(v_postponed_1852_);
lean_inc(v_zetaDeltaFVarIds_1851_);
lean_inc(v_cache_1850_);
lean_dec(v___x_1849_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1863_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
lean_ctor_set(v___x_1856_, 0, v_snd_1848_);
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_snd_1848_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v_cache_1850_);
lean_ctor_set(v_reuseFailAlloc_1862_, 2, v_zetaDeltaFVarIds_1851_);
lean_ctor_set(v_reuseFailAlloc_1862_, 3, v_postponed_1852_);
lean_ctor_set(v_reuseFailAlloc_1862_, 4, v_diag_1853_);
lean_ctor_set(v_reuseFailAlloc_1862_, 5, v_rewriteFires_1854_);
v___x_1859_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1860_ = lean_st_ref_put(v___y_1840_, v___x_1859_);
v___x_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1861_, 0, v_fst_1847_);
return v___x_1861_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg___boxed(lean_object* v_e_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v_res_1868_; 
v_res_1868_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_e_1865_, v___y_1866_);
lean_dec(v___y_1866_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0(lean_object* v_e_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v___x_1875_; 
v___x_1875_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_e_1869_, v___y_1871_);
return v___x_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___boxed(lean_object* v_e_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0(v_e_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_);
lean_dec(v___y_1880_);
lean_dec_ref(v___y_1879_);
lean_dec(v___y_1878_);
lean_dec_ref(v___y_1877_);
return v_res_1882_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1(void){
_start:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1884_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0));
v___x_1885_ = l_Lean_stringToMessageData(v___x_1884_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(uint8_t v_useAfter_1886_, lean_object* v_t_u2080_1887_, lean_object* v_h_u2081_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_){
_start:
{
lean_object* v_names_1894_; lean_object* v_fvarIds_1895_; lean_object* v_type_1896_; lean_object* v_val_x3f_1897_; lean_object* v_isInstance_x3f_1898_; lean_object* v_isType_x3f_1899_; lean_object* v_isInserted_x3f_1900_; lean_object* v_isRemoved_x3f_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1954_; 
v_names_1894_ = lean_ctor_get(v_h_u2081_1888_, 0);
v_fvarIds_1895_ = lean_ctor_get(v_h_u2081_1888_, 1);
v_type_1896_ = lean_ctor_get(v_h_u2081_1888_, 2);
v_val_x3f_1897_ = lean_ctor_get(v_h_u2081_1888_, 3);
v_isInstance_x3f_1898_ = lean_ctor_get(v_h_u2081_1888_, 4);
v_isType_x3f_1899_ = lean_ctor_get(v_h_u2081_1888_, 5);
v_isInserted_x3f_1900_ = lean_ctor_get(v_h_u2081_1888_, 6);
v_isRemoved_x3f_1901_ = lean_ctor_get(v_h_u2081_1888_, 7);
v_isSharedCheck_1954_ = !lean_is_exclusive(v_h_u2081_1888_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1903_ = v_h_u2081_1888_;
v_isShared_1904_ = v_isSharedCheck_1954_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_isRemoved_x3f_1901_);
lean_inc(v_isInserted_x3f_1900_);
lean_inc(v_isType_x3f_1899_);
lean_inc(v_isInstance_x3f_1898_);
lean_inc(v_val_x3f_1897_);
lean_inc(v_type_1896_);
lean_inc(v_fvarIds_1895_);
lean_inc(v_names_1894_);
lean_dec(v_h_u2081_1888_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1954_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; uint8_t v___x_1907_; 
v___x_1905_ = lean_unsigned_to_nat(0u);
v___x_1906_ = lean_array_get_size(v_fvarIds_1895_);
v___x_1907_ = lean_nat_dec_lt(v___x_1905_, v___x_1906_);
if (v___x_1907_ == 0)
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
lean_del_object(v___x_1903_);
lean_dec(v_isRemoved_x3f_1901_);
lean_dec(v_isInserted_x3f_1900_);
lean_dec(v_isType_x3f_1899_);
lean_dec(v_isInstance_x3f_1898_);
lean_dec(v_val_x3f_1897_);
lean_dec_ref(v_type_1896_);
lean_dec_ref(v_fvarIds_1895_);
lean_dec_ref(v_names_1894_);
lean_dec_ref(v_t_u2080_1887_);
v___x_1908_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1);
v___x_1909_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_1908_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_);
return v___x_1909_;
}
else
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1910_ = lean_array_fget_borrowed(v_fvarIds_1895_, v___x_1905_);
lean_inc(v___x_1910_);
v___x_1911_ = l_Lean_Expr_fvar___override(v___x_1910_);
lean_inc(v_a_1892_);
lean_inc_ref(v_a_1891_);
lean_inc(v_a_1890_);
lean_inc_ref(v_a_1889_);
v___x_1912_ = lean_infer_type(v___x_1911_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1914_; lean_object* v_a_1915_; lean_object* v___x_1916_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1912_, 1);
v___x_1914_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_a_1913_, v_a_1890_);
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref(v___x_1914_);
v___x_1916_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_t_u2080_1887_, v_a_1915_, v_useAfter_1886_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v___x_1918_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref_known(v___x_1916_, 1);
v___x_1918_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_1886_, v_a_1917_, v_type_1896_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1929_; 
v_a_1919_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1921_ = v___x_1918_;
v_isShared_1922_ = v_isSharedCheck_1929_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1918_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1929_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 2, v_a_1919_);
v___x_1924_ = v___x_1903_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_names_1894_);
lean_ctor_set(v_reuseFailAlloc_1928_, 1, v_fvarIds_1895_);
lean_ctor_set(v_reuseFailAlloc_1928_, 2, v_a_1919_);
lean_ctor_set(v_reuseFailAlloc_1928_, 3, v_val_x3f_1897_);
lean_ctor_set(v_reuseFailAlloc_1928_, 4, v_isInstance_x3f_1898_);
lean_ctor_set(v_reuseFailAlloc_1928_, 5, v_isType_x3f_1899_);
lean_ctor_set(v_reuseFailAlloc_1928_, 6, v_isInserted_x3f_1900_);
lean_ctor_set(v_reuseFailAlloc_1928_, 7, v_isRemoved_x3f_1901_);
v___x_1924_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
lean_object* v___x_1926_; 
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 0, v___x_1924_);
v___x_1926_ = v___x_1921_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v___x_1924_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
else
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
lean_del_object(v___x_1903_);
lean_dec(v_isRemoved_x3f_1901_);
lean_dec(v_isInserted_x3f_1900_);
lean_dec(v_isType_x3f_1899_);
lean_dec(v_isInstance_x3f_1898_);
lean_dec(v_val_x3f_1897_);
lean_dec_ref(v_fvarIds_1895_);
lean_dec_ref(v_names_1894_);
v_a_1930_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1918_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1918_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
else
{
lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1945_; 
lean_del_object(v___x_1903_);
lean_dec(v_isRemoved_x3f_1901_);
lean_dec(v_isInserted_x3f_1900_);
lean_dec(v_isType_x3f_1899_);
lean_dec(v_isInstance_x3f_1898_);
lean_dec(v_val_x3f_1897_);
lean_dec_ref(v_type_1896_);
lean_dec_ref(v_fvarIds_1895_);
lean_dec_ref(v_names_1894_);
v_a_1938_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1940_ = v___x_1916_;
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1916_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1943_; 
if (v_isShared_1941_ == 0)
{
v___x_1943_ = v___x_1940_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1938_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
}
else
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1953_; 
lean_del_object(v___x_1903_);
lean_dec(v_isRemoved_x3f_1901_);
lean_dec(v_isInserted_x3f_1900_);
lean_dec(v_isType_x3f_1899_);
lean_dec(v_isInstance_x3f_1898_);
lean_dec(v_val_x3f_1897_);
lean_dec_ref(v_type_1896_);
lean_dec_ref(v_fvarIds_1895_);
lean_dec_ref(v_names_1894_);
lean_dec_ref(v_t_u2080_1887_);
v_a_1946_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1948_ = v___x_1912_;
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1912_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1951_; 
if (v_isShared_1949_ == 0)
{
v___x_1951_ = v___x_1948_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1946_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___boxed(lean_object* v_useAfter_1955_, lean_object* v_t_u2080_1956_, lean_object* v_h_u2081_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_){
_start:
{
uint8_t v_useAfter_boxed_1963_; lean_object* v_res_1964_; 
v_useAfter_boxed_1963_ = lean_unbox(v_useAfter_1955_);
v_res_1964_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(v_useAfter_boxed_1963_, v_t_u2080_1956_, v_h_u2081_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_);
lean_dec(v_a_1961_);
lean_dec_ref(v_a_1960_);
lean_dec(v_a_1959_);
lean_dec_ref(v_a_1958_);
return v_res_1964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(lean_object* v_ctx_u2080_1968_, uint8_t v_useAfter_1969_, lean_object* v_h_u2081_1970_, lean_object* v___x_1971_, lean_object* v___x_1972_, lean_object* v_as_1973_, size_t v_sz_1974_, size_t v_i_1975_, lean_object* v_b_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
uint8_t v___x_1982_; 
v___x_1982_ = lean_usize_dec_lt(v_i_1975_, v_sz_1974_);
if (v___x_1982_ == 0)
{
lean_object* v___x_1983_; 
lean_dec_ref(v___x_1972_);
lean_dec_ref(v___x_1971_);
lean_dec_ref(v_h_u2081_1970_);
v___x_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1983_, 0, v_b_1976_);
return v___x_1983_;
}
else
{
lean_object* v_a_1984_; lean_object* v_fst_1985_; lean_object* v_snd_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2082_; 
lean_dec_ref(v_b_1976_);
v_a_1984_ = lean_array_uget(v_as_1973_, v_i_1975_);
v_fst_1985_ = lean_ctor_get(v_a_1984_, 0);
v_snd_1986_ = lean_ctor_get(v_a_1984_, 1);
v_isSharedCheck_2082_ = !lean_is_exclusive(v_a_1984_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_1988_ = v_a_1984_;
v_isShared_1989_ = v_isSharedCheck_2082_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_snd_1986_);
lean_inc(v_fst_1985_);
lean_dec(v_a_1984_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2082_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1990_; uint8_t v___x_1991_; 
v___x_1990_ = lean_box(0);
v___x_1991_ = l_Lean_LocalContext_contains(v_ctx_u2080_1968_, v_snd_1986_);
lean_dec(v_snd_1986_);
if (v___x_1991_ == 0)
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1992_ = lean_box(0);
v___x_1993_ = l_Lean_Name_str___override(v___x_1992_, v_fst_1985_);
v___x_1994_ = l_Lean_LocalContext_findFromUserName_x3f(v_ctx_u2080_1968_, v___x_1993_);
lean_dec(v___x_1993_);
if (lean_obj_tag(v___x_1994_) == 1)
{
lean_object* v_val_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2033_; 
lean_dec_ref(v___x_1972_);
lean_dec_ref(v___x_1971_);
v_val_1995_ = lean_ctor_get(v___x_1994_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_1997_ = v___x_1994_;
v_isShared_1998_ = v_isSharedCheck_2033_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_val_1995_);
lean_dec(v___x_1994_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2033_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1999_ = l_Lean_LocalDecl_type(v_val_1995_);
lean_dec(v_val_1995_);
v___x_2000_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v___x_1999_, v___y_1978_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; lean_object* v___x_2002_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
lean_inc(v_a_2001_);
lean_dec_ref_known(v___x_2000_, 1);
v___x_2002_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(v_useAfter_1969_, v_a_2001_, v_h_u2081_1970_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_);
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2016_; 
v_a_2003_ = lean_ctor_get(v___x_2002_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2005_ = v___x_2002_;
v_isShared_2006_ = v_isSharedCheck_2016_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v___x_2002_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2016_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2008_; 
if (v_isShared_1998_ == 0)
{
lean_ctor_set(v___x_1997_, 0, v_a_2003_);
v___x_2008_ = v___x_1997_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_a_2003_);
v___x_2008_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
lean_object* v___x_2010_; 
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 1, v___x_1990_);
lean_ctor_set(v___x_1988_, 0, v___x_2008_);
v___x_2010_ = v___x_1988_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v___x_2008_);
lean_ctor_set(v_reuseFailAlloc_2014_, 1, v___x_1990_);
v___x_2010_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2012_; 
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 0, v___x_2010_);
v___x_2012_ = v___x_2005_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2010_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
}
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
lean_del_object(v___x_1997_);
lean_del_object(v___x_1988_);
v_a_2017_ = lean_ctor_get(v___x_2002_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_2002_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2002_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
lean_del_object(v___x_1997_);
lean_del_object(v___x_1988_);
lean_dec_ref(v_h_u2081_1970_);
v_a_2025_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_2000_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2000_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
}
}
else
{
lean_dec(v___x_1994_);
if (v_useAfter_1969_ == 0)
{
lean_object* v_type_2034_; lean_object* v_val_x3f_2035_; lean_object* v_isInstance_x3f_2036_; lean_object* v_isType_x3f_2037_; lean_object* v_isInserted_x3f_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2052_; 
v_type_2034_ = lean_ctor_get(v_h_u2081_1970_, 2);
v_val_x3f_2035_ = lean_ctor_get(v_h_u2081_1970_, 3);
v_isInstance_x3f_2036_ = lean_ctor_get(v_h_u2081_1970_, 4);
v_isType_x3f_2037_ = lean_ctor_get(v_h_u2081_1970_, 5);
v_isInserted_x3f_2038_ = lean_ctor_get(v_h_u2081_1970_, 6);
v_isSharedCheck_2052_ = !lean_is_exclusive(v_h_u2081_1970_);
if (v_isSharedCheck_2052_ == 0)
{
lean_object* v_unused_2053_; lean_object* v_unused_2054_; lean_object* v_unused_2055_; 
v_unused_2053_ = lean_ctor_get(v_h_u2081_1970_, 7);
lean_dec(v_unused_2053_);
v_unused_2054_ = lean_ctor_get(v_h_u2081_1970_, 1);
lean_dec(v_unused_2054_);
v_unused_2055_ = lean_ctor_get(v_h_u2081_1970_, 0);
lean_dec(v_unused_2055_);
v___x_2040_ = v_h_u2081_1970_;
v_isShared_2041_ = v_isSharedCheck_2052_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_isInserted_x3f_2038_);
lean_inc(v_isType_x3f_2037_);
lean_inc(v_isInstance_x3f_2036_);
lean_inc(v_val_x3f_2035_);
lean_inc(v_type_2034_);
lean_dec(v_h_u2081_1970_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2052_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2045_; 
v___x_2042_ = lean_box(v___x_1982_);
v___x_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 7, v___x_2043_);
lean_ctor_set(v___x_2040_, 1, v___x_1972_);
lean_ctor_set(v___x_2040_, 0, v___x_1971_);
v___x_2045_ = v___x_2040_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_1971_);
lean_ctor_set(v_reuseFailAlloc_2051_, 1, v___x_1972_);
lean_ctor_set(v_reuseFailAlloc_2051_, 2, v_type_2034_);
lean_ctor_set(v_reuseFailAlloc_2051_, 3, v_val_x3f_2035_);
lean_ctor_set(v_reuseFailAlloc_2051_, 4, v_isInstance_x3f_2036_);
lean_ctor_set(v_reuseFailAlloc_2051_, 5, v_isType_x3f_2037_);
lean_ctor_set(v_reuseFailAlloc_2051_, 6, v_isInserted_x3f_2038_);
lean_ctor_set(v_reuseFailAlloc_2051_, 7, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
lean_object* v___x_2046_; lean_object* v___x_2048_; 
v___x_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2045_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 1, v___x_1990_);
lean_ctor_set(v___x_1988_, 0, v___x_2046_);
v___x_2048_ = v___x_1988_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v___x_2046_);
lean_ctor_set(v_reuseFailAlloc_2050_, 1, v___x_1990_);
v___x_2048_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
lean_object* v___x_2049_; 
v___x_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2048_);
return v___x_2049_;
}
}
}
}
else
{
lean_object* v_type_2056_; lean_object* v_val_x3f_2057_; lean_object* v_isInstance_x3f_2058_; lean_object* v_isType_x3f_2059_; lean_object* v_isRemoved_x3f_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2074_; 
v_type_2056_ = lean_ctor_get(v_h_u2081_1970_, 2);
v_val_x3f_2057_ = lean_ctor_get(v_h_u2081_1970_, 3);
v_isInstance_x3f_2058_ = lean_ctor_get(v_h_u2081_1970_, 4);
v_isType_x3f_2059_ = lean_ctor_get(v_h_u2081_1970_, 5);
v_isRemoved_x3f_2060_ = lean_ctor_get(v_h_u2081_1970_, 7);
v_isSharedCheck_2074_ = !lean_is_exclusive(v_h_u2081_1970_);
if (v_isSharedCheck_2074_ == 0)
{
lean_object* v_unused_2075_; lean_object* v_unused_2076_; lean_object* v_unused_2077_; 
v_unused_2075_ = lean_ctor_get(v_h_u2081_1970_, 6);
lean_dec(v_unused_2075_);
v_unused_2076_ = lean_ctor_get(v_h_u2081_1970_, 1);
lean_dec(v_unused_2076_);
v_unused_2077_ = lean_ctor_get(v_h_u2081_1970_, 0);
lean_dec(v_unused_2077_);
v___x_2062_ = v_h_u2081_1970_;
v_isShared_2063_ = v_isSharedCheck_2074_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_isRemoved_x3f_2060_);
lean_inc(v_isType_x3f_2059_);
lean_inc(v_isInstance_x3f_2058_);
lean_inc(v_val_x3f_2057_);
lean_inc(v_type_2056_);
lean_dec(v_h_u2081_1970_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2074_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2067_; 
v___x_2064_ = lean_box(v___x_1982_);
v___x_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2064_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 6, v___x_2065_);
lean_ctor_set(v___x_2062_, 1, v___x_1972_);
lean_ctor_set(v___x_2062_, 0, v___x_1971_);
v___x_2067_ = v___x_2062_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v___x_1971_);
lean_ctor_set(v_reuseFailAlloc_2073_, 1, v___x_1972_);
lean_ctor_set(v_reuseFailAlloc_2073_, 2, v_type_2056_);
lean_ctor_set(v_reuseFailAlloc_2073_, 3, v_val_x3f_2057_);
lean_ctor_set(v_reuseFailAlloc_2073_, 4, v_isInstance_x3f_2058_);
lean_ctor_set(v_reuseFailAlloc_2073_, 5, v_isType_x3f_2059_);
lean_ctor_set(v_reuseFailAlloc_2073_, 6, v___x_2065_);
lean_ctor_set(v_reuseFailAlloc_2073_, 7, v_isRemoved_x3f_2060_);
v___x_2067_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
lean_object* v___x_2068_; lean_object* v___x_2070_; 
v___x_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2067_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 1, v___x_1990_);
lean_ctor_set(v___x_1988_, 0, v___x_2068_);
v___x_2070_ = v___x_1988_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v___x_2068_);
lean_ctor_set(v_reuseFailAlloc_2072_, 1, v___x_1990_);
v___x_2070_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v___x_2071_; 
v___x_2071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
return v___x_2071_;
}
}
}
}
}
}
else
{
lean_object* v___x_2078_; size_t v___x_2079_; size_t v___x_2080_; 
lean_del_object(v___x_1988_);
lean_dec(v_fst_1985_);
v___x_2078_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0));
v___x_2079_ = ((size_t)1ULL);
v___x_2080_ = lean_usize_add(v_i_1975_, v___x_2079_);
v_i_1975_ = v___x_2080_;
v_b_1976_ = v___x_2078_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___boxed(lean_object* v_ctx_u2080_2083_, lean_object* v_useAfter_2084_, lean_object* v_h_u2081_2085_, lean_object* v___x_2086_, lean_object* v___x_2087_, lean_object* v_as_2088_, lean_object* v_sz_2089_, lean_object* v_i_2090_, lean_object* v_b_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_){
_start:
{
uint8_t v_useAfter_boxed_2097_; size_t v_sz_boxed_2098_; size_t v_i_boxed_2099_; lean_object* v_res_2100_; 
v_useAfter_boxed_2097_ = lean_unbox(v_useAfter_2084_);
v_sz_boxed_2098_ = lean_unbox_usize(v_sz_2089_);
lean_dec(v_sz_2089_);
v_i_boxed_2099_ = lean_unbox_usize(v_i_2090_);
lean_dec(v_i_2090_);
v_res_2100_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(v_ctx_u2080_2083_, v_useAfter_boxed_2097_, v_h_u2081_2085_, v___x_2086_, v___x_2087_, v_as_2088_, v_sz_boxed_2098_, v_i_boxed_2099_, v_b_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_);
lean_dec(v___y_2095_);
lean_dec_ref(v___y_2094_);
lean_dec(v___y_2093_);
lean_dec_ref(v___y_2092_);
lean_dec_ref(v_as_2088_);
lean_dec_ref(v_ctx_u2080_2083_);
return v_res_2100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(uint8_t v_useAfter_2101_, lean_object* v_ctx_u2080_2102_, lean_object* v_h_u2081_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_){
_start:
{
lean_object* v_names_2109_; lean_object* v_fvarIds_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; size_t v_sz_2113_; size_t v___x_2114_; lean_object* v___x_2115_; 
v_names_2109_ = lean_ctor_get(v_h_u2081_2103_, 0);
v_fvarIds_2110_ = lean_ctor_get(v_h_u2081_2103_, 1);
v___x_2111_ = l_Array_zip___redArg(v_names_2109_, v_fvarIds_2110_);
v___x_2112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0));
v_sz_2113_ = lean_array_size(v___x_2111_);
v___x_2114_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_2110_);
lean_inc_ref(v_names_2109_);
lean_inc_ref(v_h_u2081_2103_);
v___x_2115_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(v_ctx_u2080_2102_, v_useAfter_2101_, v_h_u2081_2103_, v_names_2109_, v_fvarIds_2110_, v___x_2111_, v_sz_2113_, v___x_2114_, v___x_2112_, v_a_2104_, v_a_2105_, v_a_2106_, v_a_2107_);
lean_dec_ref(v___x_2111_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2128_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2118_ = v___x_2115_;
v_isShared_2119_ = v_isSharedCheck_2128_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_a_2116_);
lean_dec(v___x_2115_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2128_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v_fst_2120_; 
v_fst_2120_ = lean_ctor_get(v_a_2116_, 0);
lean_inc(v_fst_2120_);
lean_dec(v_a_2116_);
if (lean_obj_tag(v_fst_2120_) == 0)
{
lean_object* v___x_2122_; 
if (v_isShared_2119_ == 0)
{
lean_ctor_set(v___x_2118_, 0, v_h_u2081_2103_);
v___x_2122_ = v___x_2118_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_h_u2081_2103_);
v___x_2122_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
return v___x_2122_;
}
}
else
{
lean_object* v_val_2124_; lean_object* v___x_2126_; 
lean_dec_ref(v_h_u2081_2103_);
v_val_2124_ = lean_ctor_get(v_fst_2120_, 0);
lean_inc(v_val_2124_);
lean_dec_ref_known(v_fst_2120_, 1);
if (v_isShared_2119_ == 0)
{
lean_ctor_set(v___x_2118_, 0, v_val_2124_);
v___x_2126_ = v___x_2118_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_val_2124_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2136_; 
lean_dec_ref(v_h_u2081_2103_);
v_a_2129_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2131_ = v___x_2115_;
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2115_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_a_2129_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle___boxed(lean_object* v_useAfter_2137_, lean_object* v_ctx_u2080_2138_, lean_object* v_h_u2081_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_){
_start:
{
uint8_t v_useAfter_boxed_2145_; lean_object* v_res_2146_; 
v_useAfter_boxed_2145_ = lean_unbox(v_useAfter_2137_);
v_res_2146_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(v_useAfter_boxed_2145_, v_ctx_u2080_2138_, v_h_u2081_2139_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
lean_dec(v_a_2143_);
lean_dec_ref(v_a_2142_);
lean_dec(v_a_2141_);
lean_dec_ref(v_a_2140_);
lean_dec_ref(v_ctx_u2080_2138_);
return v_res_2146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(uint8_t v_useAfter_2147_, lean_object* v_lctx_u2080_2148_, size_t v_sz_2149_, size_t v_i_2150_, lean_object* v_bs_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
uint8_t v___x_2157_; 
v___x_2157_ = lean_usize_dec_lt(v_i_2150_, v_sz_2149_);
if (v___x_2157_ == 0)
{
lean_object* v___x_2158_; 
v___x_2158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2158_, 0, v_bs_2151_);
return v___x_2158_;
}
else
{
lean_object* v_v_2159_; lean_object* v___x_2160_; lean_object* v_bs_x27_2161_; lean_object* v___x_2162_; 
v_v_2159_ = lean_array_uget(v_bs_2151_, v_i_2150_);
v___x_2160_ = lean_unsigned_to_nat(0u);
v_bs_x27_2161_ = lean_array_uset(v_bs_2151_, v_i_2150_, v___x_2160_);
v___x_2162_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(v_useAfter_2147_, v_lctx_u2080_2148_, v_v_2159_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; size_t v___x_2164_; size_t v___x_2165_; lean_object* v___x_2166_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
lean_inc(v_a_2163_);
lean_dec_ref_known(v___x_2162_, 1);
v___x_2164_ = ((size_t)1ULL);
v___x_2165_ = lean_usize_add(v_i_2150_, v___x_2164_);
v___x_2166_ = lean_array_uset(v_bs_x27_2161_, v_i_2150_, v_a_2163_);
v_i_2150_ = v___x_2165_;
v_bs_2151_ = v___x_2166_;
goto _start;
}
else
{
lean_object* v_a_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2175_; 
lean_dec_ref(v_bs_x27_2161_);
v_a_2168_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2170_ = v___x_2162_;
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_a_2168_);
lean_dec(v___x_2162_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v___x_2173_; 
if (v_isShared_2171_ == 0)
{
v___x_2173_ = v___x_2170_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_a_2168_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
return v___x_2173_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0___boxed(lean_object* v_useAfter_2176_, lean_object* v_lctx_u2080_2177_, lean_object* v_sz_2178_, lean_object* v_i_2179_, lean_object* v_bs_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_){
_start:
{
uint8_t v_useAfter_boxed_2186_; size_t v_sz_boxed_2187_; size_t v_i_boxed_2188_; lean_object* v_res_2189_; 
v_useAfter_boxed_2186_ = lean_unbox(v_useAfter_2176_);
v_sz_boxed_2187_ = lean_unbox_usize(v_sz_2178_);
lean_dec(v_sz_2178_);
v_i_boxed_2188_ = lean_unbox_usize(v_i_2179_);
lean_dec(v_i_2179_);
v_res_2189_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(v_useAfter_boxed_2186_, v_lctx_u2080_2177_, v_sz_boxed_2187_, v_i_boxed_2188_, v_bs_2180_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec(v___y_2182_);
lean_dec_ref(v___y_2181_);
lean_dec_ref(v_lctx_u2080_2177_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(uint8_t v_useAfter_2190_, lean_object* v_lctx_u2080_2191_, lean_object* v_hs_u2081_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_){
_start:
{
size_t v_sz_2198_; size_t v___x_2199_; lean_object* v___x_2200_; 
v_sz_2198_ = lean_array_size(v_hs_u2081_2192_);
v___x_2199_ = ((size_t)0ULL);
v___x_2200_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(v_useAfter_2190_, v_lctx_u2080_2191_, v_sz_2198_, v___x_2199_, v_hs_u2081_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses___boxed(lean_object* v_useAfter_2201_, lean_object* v_lctx_u2080_2202_, lean_object* v_hs_u2081_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_){
_start:
{
uint8_t v_useAfter_boxed_2209_; lean_object* v_res_2210_; 
v_useAfter_boxed_2209_ = lean_unbox(v_useAfter_2201_);
v_res_2210_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(v_useAfter_boxed_2209_, v_lctx_u2080_2202_, v_hs_u2081_2203_, v_a_2204_, v_a_2205_, v_a_2206_, v_a_2207_);
lean_dec(v_a_2207_);
lean_dec_ref(v_a_2206_);
lean_dec(v_a_2205_);
lean_dec_ref(v_a_2204_);
lean_dec_ref(v_lctx_u2080_2202_);
return v_res_2210_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2(void){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1));
v___x_2216_ = l_Lean_stringToMessageData(v___x_2215_);
return v___x_2216_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4(void){
_start:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2218_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3));
v___x_2219_ = l_Lean_stringToMessageData(v___x_2218_);
return v___x_2219_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6(void){
_start:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2221_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5));
v___x_2222_ = l_Lean_stringToMessageData(v___x_2221_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(uint8_t v_useAfter_2223_, lean_object* v_g_u2080_2224_, lean_object* v_i_u2081_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_){
_start:
{
lean_object* v___x_2231_; lean_object* v_mctx_2232_; lean_object* v___x_2233_; 
v___x_2231_ = lean_st_ref_get(v_a_2227_);
v_mctx_2232_ = lean_ctor_get(v___x_2231_, 0);
lean_inc_ref(v_mctx_2232_);
lean_dec(v___x_2231_);
v___x_2233_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2232_, v_g_u2080_2224_);
lean_dec_ref(v_mctx_2232_);
if (lean_obj_tag(v___x_2233_) == 1)
{
lean_object* v_val_2234_; lean_object* v_lctx_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v_toInteractiveGoalCore_2240_; lean_object* v_fst_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2338_; 
v_val_2234_ = lean_ctor_get(v___x_2233_, 0);
lean_inc(v_val_2234_);
lean_dec_ref_known(v___x_2233_, 1);
v_lctx_2235_ = lean_ctor_get(v_val_2234_, 1);
lean_inc_ref(v_lctx_2235_);
lean_dec(v_val_2234_);
v___x_2236_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2228_);
v___x_2237_ = lean_box(1);
v___x_2238_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2238_, 0, v___x_2236_);
lean_ctor_set(v___x_2238_, 1, v___x_2237_);
lean_ctor_set(v___x_2238_, 2, v___x_2237_);
v___x_2239_ = l_Lean_LocalContext_sanitizeNames(v_lctx_2235_, v___x_2238_);
v_toInteractiveGoalCore_2240_ = lean_ctor_get(v_i_u2081_2225_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2240_);
v_fst_2241_ = lean_ctor_get(v___x_2239_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2338_ == 0)
{
lean_object* v_unused_2339_; 
v_unused_2339_ = lean_ctor_get(v___x_2239_, 1);
lean_dec(v_unused_2339_);
v___x_2243_ = v___x_2239_;
v_isShared_2244_ = v_isSharedCheck_2338_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_fst_2241_);
lean_dec(v___x_2239_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2338_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v_userName_x3f_2245_; lean_object* v_goalPrefix_2246_; lean_object* v_mvarId_2247_; lean_object* v_isRemoved_x3f_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2335_; 
v_userName_x3f_2245_ = lean_ctor_get(v_i_u2081_2225_, 1);
v_goalPrefix_2246_ = lean_ctor_get(v_i_u2081_2225_, 2);
v_mvarId_2247_ = lean_ctor_get(v_i_u2081_2225_, 3);
v_isRemoved_x3f_2248_ = lean_ctor_get(v_i_u2081_2225_, 5);
v_isSharedCheck_2335_ = !lean_is_exclusive(v_i_u2081_2225_);
if (v_isSharedCheck_2335_ == 0)
{
lean_object* v_unused_2336_; lean_object* v_unused_2337_; 
v_unused_2336_ = lean_ctor_get(v_i_u2081_2225_, 4);
lean_dec(v_unused_2336_);
v_unused_2337_ = lean_ctor_get(v_i_u2081_2225_, 0);
lean_dec(v_unused_2337_);
v___x_2250_ = v_i_u2081_2225_;
v_isShared_2251_ = v_isSharedCheck_2335_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_isRemoved_x3f_2248_);
lean_inc(v_mvarId_2247_);
lean_inc(v_goalPrefix_2246_);
lean_inc(v_userName_x3f_2245_);
lean_dec(v_i_u2081_2225_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2335_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v_hyps_2252_; lean_object* v_type_2253_; lean_object* v_ctx_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2334_; 
v_hyps_2252_ = lean_ctor_get(v_toInteractiveGoalCore_2240_, 0);
v_type_2253_ = lean_ctor_get(v_toInteractiveGoalCore_2240_, 1);
v_ctx_2254_ = lean_ctor_get(v_toInteractiveGoalCore_2240_, 2);
v_isSharedCheck_2334_ = !lean_is_exclusive(v_toInteractiveGoalCore_2240_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2256_ = v_toInteractiveGoalCore_2240_;
v_isShared_2257_ = v_isSharedCheck_2334_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_ctx_2254_);
lean_inc(v_type_2253_);
lean_inc(v_hyps_2252_);
lean_dec(v_toInteractiveGoalCore_2240_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2334_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2258_; 
v___x_2258_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(v_useAfter_2223_, v_fst_2241_, v_hyps_2252_, v_a_2226_, v_a_2227_, v_a_2228_, v_a_2229_);
lean_dec(v_fst_2241_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_a_2259_);
lean_dec_ref_known(v___x_2258_, 1);
v___x_2260_ = l_Lean_Expr_mvar___override(v_g_u2080_2224_);
lean_inc(v_a_2229_);
lean_inc_ref(v_a_2228_);
lean_inc(v_a_2227_);
lean_inc_ref(v_a_2226_);
v___x_2261_ = lean_infer_type(v___x_2260_, v_a_2226_, v_a_2227_, v_a_2228_, v_a_2229_);
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_object* v_a_2262_; lean_object* v___x_2263_; lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2317_; 
v_a_2262_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_a_2262_);
lean_dec_ref_known(v___x_2261_, 1);
v___x_2263_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_a_2262_, v_a_2227_);
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2266_ = v___x_2263_;
v_isShared_2267_ = v_isSharedCheck_2317_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2263_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2317_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2268_; lean_object* v_mctx_2269_; lean_object* v___x_2270_; 
v___x_2268_ = lean_st_ref_get(v_a_2227_);
v_mctx_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc_ref(v_mctx_2269_);
lean_dec(v___x_2268_);
v___x_2270_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2269_, v_mvarId_2247_);
lean_dec_ref(v_mctx_2269_);
if (lean_obj_tag(v___x_2270_) == 1)
{
lean_object* v_val_2271_; lean_object* v_type_2272_; lean_object* v___x_2273_; lean_object* v_a_2274_; lean_object* v___x_2275_; 
lean_del_object(v___x_2266_);
lean_del_object(v___x_2243_);
v_val_2271_ = lean_ctor_get(v___x_2270_, 0);
lean_inc(v_val_2271_);
lean_dec_ref_known(v___x_2270_, 1);
v_type_2272_ = lean_ctor_get(v_val_2271_, 2);
lean_inc_ref(v_type_2272_);
lean_dec(v_val_2271_);
v___x_2273_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_type_2272_, v_a_2227_);
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_a_2274_);
lean_dec_ref(v___x_2273_);
v___x_2275_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_a_2264_, v_a_2274_, v_useAfter_2223_, v_a_2226_, v_a_2227_, v_a_2228_, v_a_2229_);
if (lean_obj_tag(v___x_2275_) == 0)
{
lean_object* v_a_2276_; lean_object* v___x_2277_; 
v_a_2276_ = lean_ctor_get(v___x_2275_, 0);
lean_inc(v_a_2276_);
lean_dec_ref_known(v___x_2275_, 1);
v___x_2277_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_2223_, v_a_2276_, v_type_2253_, v_a_2226_, v_a_2227_, v_a_2228_, v_a_2229_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2292_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2280_ = v___x_2277_;
v_isShared_2281_ = v_isSharedCheck_2292_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2277_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2292_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2283_; 
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 1, v_a_2278_);
lean_ctor_set(v___x_2256_, 0, v_a_2259_);
v___x_2283_ = v___x_2256_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2259_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v_a_2278_);
lean_ctor_set(v_reuseFailAlloc_2291_, 2, v_ctx_2254_);
v___x_2283_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
lean_object* v___x_2284_; lean_object* v___x_2286_; 
v___x_2284_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0));
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 4, v___x_2284_);
lean_ctor_set(v___x_2250_, 0, v___x_2283_);
v___x_2286_ = v___x_2250_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v___x_2283_);
lean_ctor_set(v_reuseFailAlloc_2290_, 1, v_userName_x3f_2245_);
lean_ctor_set(v_reuseFailAlloc_2290_, 2, v_goalPrefix_2246_);
lean_ctor_set(v_reuseFailAlloc_2290_, 3, v_mvarId_2247_);
lean_ctor_set(v_reuseFailAlloc_2290_, 4, v___x_2284_);
lean_ctor_set(v_reuseFailAlloc_2290_, 5, v_isRemoved_x3f_2248_);
v___x_2286_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
lean_object* v___x_2288_; 
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 0, v___x_2286_);
v___x_2288_ = v___x_2280_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v___x_2286_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
lean_dec(v_a_2259_);
lean_del_object(v___x_2256_);
lean_dec_ref(v_ctx_2254_);
lean_del_object(v___x_2250_);
lean_dec(v_isRemoved_x3f_2248_);
lean_dec(v_mvarId_2247_);
lean_dec_ref(v_goalPrefix_2246_);
lean_dec(v_userName_x3f_2245_);
v_a_2293_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2277_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2277_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
}
else
{
lean_object* v_a_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2308_; 
lean_dec(v_a_2259_);
lean_del_object(v___x_2256_);
lean_dec_ref(v_ctx_2254_);
lean_dec_ref(v_type_2253_);
lean_del_object(v___x_2250_);
lean_dec(v_isRemoved_x3f_2248_);
lean_dec(v_mvarId_2247_);
lean_dec_ref(v_goalPrefix_2246_);
lean_dec(v_userName_x3f_2245_);
v_a_2301_ = lean_ctor_get(v___x_2275_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2275_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2303_ = v___x_2275_;
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_a_2301_);
lean_dec(v___x_2275_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2306_; 
if (v_isShared_2304_ == 0)
{
v___x_2306_ = v___x_2303_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_a_2301_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
}
else
{
lean_object* v___x_2309_; lean_object* v___x_2311_; 
lean_dec(v___x_2270_);
lean_dec(v_a_2264_);
lean_dec(v_a_2259_);
lean_del_object(v___x_2256_);
lean_dec_ref(v_ctx_2254_);
lean_dec_ref(v_type_2253_);
lean_del_object(v___x_2250_);
lean_dec(v_isRemoved_x3f_2248_);
lean_dec_ref(v_goalPrefix_2246_);
lean_dec(v_userName_x3f_2245_);
v___x_2309_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2);
if (v_isShared_2267_ == 0)
{
lean_ctor_set_tag(v___x_2266_, 1);
lean_ctor_set(v___x_2266_, 0, v_mvarId_2247_);
v___x_2311_ = v___x_2266_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_mvarId_2247_);
v___x_2311_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
lean_object* v___x_2313_; 
if (v_isShared_2244_ == 0)
{
lean_ctor_set_tag(v___x_2243_, 7);
lean_ctor_set(v___x_2243_, 1, v___x_2311_);
lean_ctor_set(v___x_2243_, 0, v___x_2309_);
v___x_2313_ = v___x_2243_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v___x_2309_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v___x_2311_);
v___x_2313_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
lean_object* v___x_2314_; 
v___x_2314_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2313_, v_a_2226_, v_a_2227_, v_a_2228_, v_a_2229_);
return v___x_2314_;
}
}
}
}
}
else
{
lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2325_; 
lean_dec(v_a_2259_);
lean_del_object(v___x_2256_);
lean_dec_ref(v_ctx_2254_);
lean_dec_ref(v_type_2253_);
lean_del_object(v___x_2250_);
lean_dec(v_isRemoved_x3f_2248_);
lean_dec(v_mvarId_2247_);
lean_dec_ref(v_goalPrefix_2246_);
lean_dec(v_userName_x3f_2245_);
lean_del_object(v___x_2243_);
v_a_2318_ = lean_ctor_get(v___x_2261_, 0);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2320_ = v___x_2261_;
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v___x_2261_);
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
else
{
lean_object* v_a_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2333_; 
lean_del_object(v___x_2256_);
lean_dec_ref(v_ctx_2254_);
lean_dec_ref(v_type_2253_);
lean_del_object(v___x_2250_);
lean_dec(v_isRemoved_x3f_2248_);
lean_dec(v_mvarId_2247_);
lean_dec_ref(v_goalPrefix_2246_);
lean_dec(v_userName_x3f_2245_);
lean_del_object(v___x_2243_);
lean_dec(v_g_u2080_2224_);
v_a_2326_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2328_ = v___x_2258_;
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_a_2326_);
lean_dec(v___x_2258_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2331_; 
if (v_isShared_2329_ == 0)
{
v___x_2331_ = v___x_2328_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_a_2326_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; 
lean_dec(v___x_2233_);
lean_dec_ref(v_i_u2081_2225_);
v___x_2340_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4);
v___x_2341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2341_, 0, v_g_u2080_2224_);
v___x_2342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2340_);
lean_ctor_set(v___x_2342_, 1, v___x_2341_);
v___x_2343_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6);
v___x_2344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2342_);
lean_ctor_set(v___x_2344_, 1, v___x_2343_);
v___x_2345_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2344_, v_a_2226_, v_a_2227_, v_a_2228_, v_a_2229_);
return v___x_2345_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___boxed(lean_object* v_useAfter_2346_, lean_object* v_g_u2080_2347_, lean_object* v_i_u2081_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_){
_start:
{
uint8_t v_useAfter_boxed_2354_; lean_object* v_res_2355_; 
v_useAfter_boxed_2354_ = lean_unbox(v_useAfter_2346_);
v_res_2355_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(v_useAfter_boxed_2354_, v_g_u2080_2347_, v_i_u2081_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_);
lean_dec(v_a_2352_);
lean_dec_ref(v_a_2351_);
lean_dec(v_a_2350_);
lean_dec_ref(v_a_2349_);
return v_res_2355_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(lean_object* v_opts_2356_, lean_object* v_opt_2357_){
_start:
{
lean_object* v_name_2358_; lean_object* v_defValue_2359_; lean_object* v_map_2360_; lean_object* v___x_2361_; 
v_name_2358_ = lean_ctor_get(v_opt_2357_, 0);
v_defValue_2359_ = lean_ctor_get(v_opt_2357_, 1);
v_map_2360_ = lean_ctor_get(v_opts_2356_, 0);
v___x_2361_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2360_, v_name_2358_);
if (lean_obj_tag(v___x_2361_) == 0)
{
uint8_t v___x_2362_; 
v___x_2362_ = lean_unbox(v_defValue_2359_);
return v___x_2362_;
}
else
{
lean_object* v_val_2363_; 
v_val_2363_ = lean_ctor_get(v___x_2361_, 0);
lean_inc(v_val_2363_);
lean_dec_ref_known(v___x_2361_, 1);
if (lean_obj_tag(v_val_2363_) == 1)
{
uint8_t v_v_2364_; 
v_v_2364_ = lean_ctor_get_uint8(v_val_2363_, 0);
lean_dec_ref_known(v_val_2363_, 0);
return v_v_2364_;
}
else
{
uint8_t v___x_2365_; 
lean_dec(v_val_2363_);
v___x_2365_ = lean_unbox(v_defValue_2359_);
return v___x_2365_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0___boxed(lean_object* v_opts_2366_, lean_object* v_opt_2367_){
_start:
{
uint8_t v_res_2368_; lean_object* v_r_2369_; 
v_res_2368_ = l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(v_opts_2366_, v_opt_2367_);
lean_dec_ref(v_opt_2367_);
lean_dec_ref(v_opts_2366_);
v_r_2369_ = lean_box(v_res_2368_);
return v_r_2369_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(lean_object* v_x_2370_, lean_object* v_x_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_){
_start:
{
if (lean_obj_tag(v_x_2371_) == 0)
{
lean_object* v___x_2377_; 
v___x_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2377_, 0, v_x_2370_);
return v___x_2377_;
}
else
{
lean_object* v_head_2378_; lean_object* v_tail_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v_head_2378_ = lean_ctor_get(v_x_2371_, 0);
lean_inc_n(v_head_2378_, 2);
v_tail_2379_ = lean_ctor_get(v_x_2371_, 1);
lean_inc(v_tail_2379_);
lean_dec_ref_known(v_x_2371_, 2);
v___x_2380_ = l_Lean_Expr_mvar___override(v_head_2378_);
v___x_2381_ = l_Lean_Meta_getMVars(v___x_2380_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v_a_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; 
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
lean_inc(v_a_2382_);
lean_dec_ref_known(v___x_2381_, 1);
v___x_2383_ = l_Lean_MVarIdSet_ofArray(v_a_2382_);
lean_dec(v_a_2382_);
v___x_2384_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(v_head_2378_, v___x_2383_, v_x_2370_);
v_x_2370_ = v___x_2384_;
v_x_2371_ = v_tail_2379_;
goto _start;
}
else
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
lean_dec(v_tail_2379_);
lean_dec(v_head_2378_);
lean_dec(v_x_2370_);
v_a_2386_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___x_2381_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2381_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1___boxed(lean_object* v_x_2394_, lean_object* v_x_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(v_x_2394_, v_x_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
lean_dec(v___y_2397_);
lean_dec_ref(v___y_2396_);
return v_res_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(lean_object* v_lctx_2402_, lean_object* v_localInsts_2403_, lean_object* v_x_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v___x_2410_; 
v___x_2410_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2402_, v_localInsts_2403_, v_x_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2410_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2410_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
v_a_2419_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v___x_2410_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2410_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2419_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg___boxed(lean_object* v_lctx_2427_, lean_object* v_localInsts_2428_, lean_object* v_x_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(v_lctx_2427_, v_localInsts_2428_, v_x_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
return v_res_2435_;
}
}
static lean_object* _init_l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2437_ = ((lean_object*)(l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0));
v___x_2438_ = l_Lean_stringToMessageData(v___x_2437_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(lean_object* v_goal_2439_, lean_object* v_action_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v___x_2446_; lean_object* v_mctx_2447_; lean_object* v___x_2448_; 
v___x_2446_ = lean_st_ref_get(v___y_2442_);
v_mctx_2447_ = lean_ctor_get(v___x_2446_, 0);
lean_inc_ref(v_mctx_2447_);
lean_dec(v___x_2446_);
v___x_2448_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2447_, v_goal_2439_);
lean_dec_ref(v_mctx_2447_);
if (lean_obj_tag(v___x_2448_) == 1)
{
lean_object* v_val_2449_; lean_object* v_lctx_2450_; lean_object* v_localInstances_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v_fst_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
lean_dec(v_goal_2439_);
v_val_2449_ = lean_ctor_get(v___x_2448_, 0);
lean_inc(v_val_2449_);
lean_dec_ref_known(v___x_2448_, 1);
v_lctx_2450_ = lean_ctor_get(v_val_2449_, 1);
v_localInstances_2451_ = lean_ctor_get(v_val_2449_, 4);
lean_inc_ref(v_localInstances_2451_);
v___x_2452_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2443_);
v___x_2453_ = lean_box(1);
v___x_2454_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2452_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
lean_ctor_set(v___x_2454_, 2, v___x_2453_);
lean_inc_ref(v_lctx_2450_);
v___x_2455_ = l_Lean_LocalContext_sanitizeNames(v_lctx_2450_, v___x_2454_);
v_fst_2456_ = lean_ctor_get(v___x_2455_, 0);
lean_inc_n(v_fst_2456_, 2);
lean_dec_ref(v___x_2455_);
v___x_2457_ = lean_apply_2(v_action_2440_, v_fst_2456_, v_val_2449_);
v___x_2458_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(v_fst_2456_, v_localInstances_2451_, v___x_2457_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_);
return v___x_2458_;
}
else
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; 
lean_dec(v___x_2448_);
lean_dec_ref(v_action_2440_);
v___x_2459_ = lean_obj_once(&l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1, &l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1_once, _init_l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1);
v___x_2460_ = l_Lean_MessageData_ofName(v_goal_2439_);
v___x_2461_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2461_, 0, v___x_2459_);
lean_ctor_set(v___x_2461_, 1, v___x_2460_);
v___x_2462_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2461_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_);
return v___x_2462_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___boxed(lean_object* v_goal_2463_, lean_object* v_action_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_goal_2463_, v_action_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
lean_dec(v___y_2466_);
lean_dec_ref(v___y_2465_);
return v_res_2470_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(lean_object* v___x_2471_, lean_object* v_x_2472_){
_start:
{
if (lean_obj_tag(v_x_2472_) == 0)
{
uint8_t v___x_2473_; 
v___x_2473_ = 0;
return v___x_2473_;
}
else
{
lean_object* v_head_2474_; lean_object* v_tail_2475_; uint8_t v___x_2476_; 
v_head_2474_ = lean_ctor_get(v_x_2472_, 0);
v_tail_2475_ = lean_ctor_get(v_x_2472_, 1);
v___x_2476_ = l_Lean_instBEqMVarId_beq(v_head_2474_, v___x_2471_);
if (v___x_2476_ == 0)
{
v_x_2472_ = v_tail_2475_;
goto _start;
}
else
{
return v___x_2476_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4___boxed(lean_object* v___x_2478_, lean_object* v_x_2479_){
_start:
{
uint8_t v_res_2480_; lean_object* v_r_2481_; 
v_res_2480_ = l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(v___x_2478_, v_x_2479_);
lean_dec(v_x_2479_);
lean_dec(v___x_2478_);
v_r_2481_ = lean_box(v_res_2480_);
return v_r_2481_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(lean_object* v_t_2482_, lean_object* v_k_2483_){
_start:
{
if (lean_obj_tag(v_t_2482_) == 0)
{
lean_object* v_k_2484_; lean_object* v_v_2485_; lean_object* v_l_2486_; lean_object* v_r_2487_; uint8_t v___x_2488_; 
v_k_2484_ = lean_ctor_get(v_t_2482_, 1);
v_v_2485_ = lean_ctor_get(v_t_2482_, 2);
v_l_2486_ = lean_ctor_get(v_t_2482_, 3);
v_r_2487_ = lean_ctor_get(v_t_2482_, 4);
v___x_2488_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2483_, v_k_2484_);
switch(v___x_2488_)
{
case 0:
{
v_t_2482_ = v_l_2486_;
goto _start;
}
case 1:
{
lean_object* v___x_2490_; 
lean_inc(v_v_2485_);
v___x_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2490_, 0, v_v_2485_);
return v___x_2490_;
}
default: 
{
v_t_2482_ = v_r_2487_;
goto _start;
}
}
}
else
{
lean_object* v___x_2492_; 
v___x_2492_ = lean_box(0);
return v___x_2492_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg___boxed(lean_object* v_t_2493_, lean_object* v_k_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(v_t_2493_, v_k_2494_);
lean_dec(v_k_2494_);
lean_dec(v_t_2493_);
return v_res_2495_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(lean_object* v_k_2496_, lean_object* v_t_2497_){
_start:
{
if (lean_obj_tag(v_t_2497_) == 0)
{
lean_object* v_k_2498_; lean_object* v_l_2499_; lean_object* v_r_2500_; uint8_t v___x_2501_; 
v_k_2498_ = lean_ctor_get(v_t_2497_, 1);
v_l_2499_ = lean_ctor_get(v_t_2497_, 3);
v_r_2500_ = lean_ctor_get(v_t_2497_, 4);
v___x_2501_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2496_, v_k_2498_);
switch(v___x_2501_)
{
case 0:
{
v_t_2497_ = v_l_2499_;
goto _start;
}
case 1:
{
uint8_t v___x_2503_; 
v___x_2503_ = 1;
return v___x_2503_;
}
default: 
{
v_t_2497_ = v_r_2500_;
goto _start;
}
}
}
else
{
uint8_t v___x_2505_; 
v___x_2505_ = 0;
return v___x_2505_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg___boxed(lean_object* v_k_2506_, lean_object* v_t_2507_){
_start:
{
uint8_t v_res_2508_; lean_object* v_r_2509_; 
v_res_2508_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(v_k_2506_, v_t_2507_);
lean_dec(v_t_2507_);
lean_dec(v_k_2506_);
v_r_2509_ = lean_box(v_res_2508_);
return v_r_2509_;
}
}
LEAN_EXPORT uint8_t l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(lean_object* v_a_2510_, uint8_t v___x_2511_, lean_object* v_before_2512_, lean_object* v_after_2513_){
_start:
{
lean_object* v___x_2514_; 
v___x_2514_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(v_a_2510_, v_before_2512_);
if (lean_obj_tag(v___x_2514_) == 0)
{
return v___x_2511_;
}
else
{
lean_object* v_val_2515_; uint8_t v___x_2516_; 
v_val_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_val_2515_);
lean_dec_ref_known(v___x_2514_, 1);
v___x_2516_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(v_after_2513_, v_val_2515_);
lean_dec(v_val_2515_);
return v___x_2516_;
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0___boxed(lean_object* v_a_2517_, lean_object* v___x_2518_, lean_object* v_before_2519_, lean_object* v_after_2520_){
_start:
{
uint8_t v___x_3275__boxed_2521_; uint8_t v_res_2522_; lean_object* v_r_2523_; 
v___x_3275__boxed_2521_ = lean_unbox(v___x_2518_);
v_res_2522_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(v_a_2517_, v___x_3275__boxed_2521_, v_before_2519_, v_after_2520_);
lean_dec(v_after_2520_);
lean_dec(v_before_2519_);
lean_dec(v_a_2517_);
v_r_2523_ = lean_box(v_res_2522_);
return v_r_2523_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(uint8_t v_useAfter_2524_, lean_object* v_a_2525_, lean_object* v___x_2526_, lean_object* v_x_2527_){
_start:
{
if (lean_obj_tag(v_x_2527_) == 0)
{
lean_object* v___x_2528_; 
v___x_2528_ = lean_box(0);
return v___x_2528_;
}
else
{
lean_object* v_head_2529_; lean_object* v_tail_2530_; uint8_t v___y_2532_; uint8_t v___x_2535_; 
v_head_2529_ = lean_ctor_get(v_x_2527_, 0);
v_tail_2530_ = lean_ctor_get(v_x_2527_, 1);
v___x_2535_ = 0;
if (v_useAfter_2524_ == 0)
{
uint8_t v___x_2536_; 
v___x_2536_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(v_a_2525_, v___x_2535_, v___x_2526_, v_head_2529_);
v___y_2532_ = v___x_2536_;
goto v___jp_2531_;
}
else
{
uint8_t v___x_2537_; 
v___x_2537_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(v_a_2525_, v___x_2535_, v_head_2529_, v___x_2526_);
v___y_2532_ = v___x_2537_;
goto v___jp_2531_;
}
v___jp_2531_:
{
if (v___y_2532_ == 0)
{
v_x_2527_ = v_tail_2530_;
goto _start;
}
else
{
lean_object* v___x_2534_; 
lean_inc(v_head_2529_);
v___x_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2534_, 0, v_head_2529_);
return v___x_2534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___boxed(lean_object* v_useAfter_2538_, lean_object* v_a_2539_, lean_object* v___x_2540_, lean_object* v_x_2541_){
_start:
{
uint8_t v_useAfter_boxed_2542_; lean_object* v_res_2543_; 
v_useAfter_boxed_2542_ = lean_unbox(v_useAfter_2538_);
v_res_2543_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(v_useAfter_boxed_2542_, v_a_2539_, v___x_2540_, v_x_2541_);
lean_dec(v_x_2541_);
lean_dec(v___x_2540_);
lean_dec(v_a_2539_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0(lean_object* v_mvarId_2544_, lean_object* v___y_2545_, uint8_t v_useAfter_2546_, lean_object* v_a_2547_, lean_object* v_v_2548_, uint8_t v___x_2549_, lean_object* v_toInteractiveGoalCore_2550_, lean_object* v_userName_x3f_2551_, lean_object* v_goalPrefix_2552_, lean_object* v_isInserted_x3f_2553_, lean_object* v_isRemoved_x3f_2554_, lean_object* v___lctx_u2081_2555_, lean_object* v___md_u2081_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_){
_start:
{
uint8_t v___x_2562_; 
v___x_2562_ = l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(v_mvarId_2544_, v___y_2545_);
if (v___x_2562_ == 0)
{
lean_object* v___x_2563_; 
v___x_2563_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(v_useAfter_2546_, v_a_2547_, v_mvarId_2544_, v___y_2545_);
if (lean_obj_tag(v___x_2563_) == 1)
{
lean_object* v_val_2564_; lean_object* v___x_2565_; 
lean_dec(v_isRemoved_x3f_2554_);
lean_dec(v_isInserted_x3f_2553_);
lean_dec_ref(v_goalPrefix_2552_);
lean_dec(v_userName_x3f_2551_);
lean_dec_ref(v_toInteractiveGoalCore_2550_);
lean_dec(v_mvarId_2544_);
v_val_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_val_2564_);
lean_dec_ref_known(v___x_2563_, 1);
v___x_2565_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(v_useAfter_2546_, v_val_2564_, v_v_2548_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_);
return v___x_2565_;
}
else
{
lean_dec(v___x_2563_);
lean_dec(v_v_2548_);
if (v_useAfter_2546_ == 0)
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; 
lean_dec(v_isRemoved_x3f_2554_);
v___x_2566_ = lean_box(v___x_2549_);
v___x_2567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
v___x_2568_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2568_, 0, v_toInteractiveGoalCore_2550_);
lean_ctor_set(v___x_2568_, 1, v_userName_x3f_2551_);
lean_ctor_set(v___x_2568_, 2, v_goalPrefix_2552_);
lean_ctor_set(v___x_2568_, 3, v_mvarId_2544_);
lean_ctor_set(v___x_2568_, 4, v_isInserted_x3f_2553_);
lean_ctor_set(v___x_2568_, 5, v___x_2567_);
v___x_2569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
return v___x_2569_;
}
else
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
lean_dec(v_isInserted_x3f_2553_);
v___x_2570_ = lean_box(v___x_2549_);
v___x_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2570_);
v___x_2572_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2572_, 0, v_toInteractiveGoalCore_2550_);
lean_ctor_set(v___x_2572_, 1, v_userName_x3f_2551_);
lean_ctor_set(v___x_2572_, 2, v_goalPrefix_2552_);
lean_ctor_set(v___x_2572_, 3, v_mvarId_2544_);
lean_ctor_set(v___x_2572_, 4, v___x_2571_);
lean_ctor_set(v___x_2572_, 5, v_isRemoved_x3f_2554_);
v___x_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2573_, 0, v___x_2572_);
return v___x_2573_;
}
}
}
else
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
lean_dec(v_isInserted_x3f_2553_);
lean_dec(v_v_2548_);
v___x_2574_ = lean_box(0);
v___x_2575_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2575_, 0, v_toInteractiveGoalCore_2550_);
lean_ctor_set(v___x_2575_, 1, v_userName_x3f_2551_);
lean_ctor_set(v___x_2575_, 2, v_goalPrefix_2552_);
lean_ctor_set(v___x_2575_, 3, v_mvarId_2544_);
lean_ctor_set(v___x_2575_, 4, v___x_2574_);
lean_ctor_set(v___x_2575_, 5, v_isRemoved_x3f_2554_);
v___x_2576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
return v___x_2576_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed(lean_object** _args){
lean_object* v_mvarId_2577_ = _args[0];
lean_object* v___y_2578_ = _args[1];
lean_object* v_useAfter_2579_ = _args[2];
lean_object* v_a_2580_ = _args[3];
lean_object* v_v_2581_ = _args[4];
lean_object* v___x_2582_ = _args[5];
lean_object* v_toInteractiveGoalCore_2583_ = _args[6];
lean_object* v_userName_x3f_2584_ = _args[7];
lean_object* v_goalPrefix_2585_ = _args[8];
lean_object* v_isInserted_x3f_2586_ = _args[9];
lean_object* v_isRemoved_x3f_2587_ = _args[10];
lean_object* v___lctx_u2081_2588_ = _args[11];
lean_object* v___md_u2081_2589_ = _args[12];
lean_object* v___y_2590_ = _args[13];
lean_object* v___y_2591_ = _args[14];
lean_object* v___y_2592_ = _args[15];
lean_object* v___y_2593_ = _args[16];
lean_object* v___y_2594_ = _args[17];
_start:
{
uint8_t v_useAfter_boxed_2595_; uint8_t v___x_3317__boxed_2596_; lean_object* v_res_2597_; 
v_useAfter_boxed_2595_ = lean_unbox(v_useAfter_2579_);
v___x_3317__boxed_2596_ = lean_unbox(v___x_2582_);
v_res_2597_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0(v_mvarId_2577_, v___y_2578_, v_useAfter_boxed_2595_, v_a_2580_, v_v_2581_, v___x_3317__boxed_2596_, v_toInteractiveGoalCore_2583_, v_userName_x3f_2584_, v_goalPrefix_2585_, v_isInserted_x3f_2586_, v_isRemoved_x3f_2587_, v___lctx_u2081_2588_, v___md_u2081_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec_ref(v___md_u2081_2589_);
lean_dec_ref(v___lctx_u2081_2588_);
lean_dec(v_a_2580_);
lean_dec(v___y_2578_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(lean_object* v___y_2598_, uint8_t v_useAfter_2599_, lean_object* v_a_2600_, uint8_t v___x_2601_, size_t v_sz_2602_, size_t v_i_2603_, lean_object* v_bs_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_){
_start:
{
uint8_t v___x_2610_; 
v___x_2610_ = lean_usize_dec_lt(v_i_2603_, v_sz_2602_);
if (v___x_2610_ == 0)
{
lean_object* v___x_2611_; 
lean_dec(v_a_2600_);
lean_dec(v___y_2598_);
v___x_2611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2611_, 0, v_bs_2604_);
return v___x_2611_;
}
else
{
lean_object* v_v_2612_; lean_object* v_toInteractiveGoalCore_2613_; lean_object* v_userName_x3f_2614_; lean_object* v_goalPrefix_2615_; lean_object* v_mvarId_2616_; lean_object* v_isInserted_x3f_2617_; lean_object* v_isRemoved_x3f_2618_; lean_object* v___x_2619_; lean_object* v_bs_x27_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___f_2623_; lean_object* v___x_2624_; 
v_v_2612_ = lean_array_uget(v_bs_2604_, v_i_2603_);
v_toInteractiveGoalCore_2613_ = lean_ctor_get(v_v_2612_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2613_);
v_userName_x3f_2614_ = lean_ctor_get(v_v_2612_, 1);
lean_inc(v_userName_x3f_2614_);
v_goalPrefix_2615_ = lean_ctor_get(v_v_2612_, 2);
lean_inc_ref(v_goalPrefix_2615_);
v_mvarId_2616_ = lean_ctor_get(v_v_2612_, 3);
lean_inc_n(v_mvarId_2616_, 2);
v_isInserted_x3f_2617_ = lean_ctor_get(v_v_2612_, 4);
lean_inc(v_isInserted_x3f_2617_);
v_isRemoved_x3f_2618_ = lean_ctor_get(v_v_2612_, 5);
lean_inc(v_isRemoved_x3f_2618_);
v___x_2619_ = lean_unsigned_to_nat(0u);
v_bs_x27_2620_ = lean_array_uset(v_bs_2604_, v_i_2603_, v___x_2619_);
v___x_2621_ = lean_box(v_useAfter_2599_);
v___x_2622_ = lean_box(v___x_2601_);
lean_inc(v_a_2600_);
lean_inc(v___y_2598_);
v___f_2623_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed), 18, 11);
lean_closure_set(v___f_2623_, 0, v_mvarId_2616_);
lean_closure_set(v___f_2623_, 1, v___y_2598_);
lean_closure_set(v___f_2623_, 2, v___x_2621_);
lean_closure_set(v___f_2623_, 3, v_a_2600_);
lean_closure_set(v___f_2623_, 4, v_v_2612_);
lean_closure_set(v___f_2623_, 5, v___x_2622_);
lean_closure_set(v___f_2623_, 6, v_toInteractiveGoalCore_2613_);
lean_closure_set(v___f_2623_, 7, v_userName_x3f_2614_);
lean_closure_set(v___f_2623_, 8, v_goalPrefix_2615_);
lean_closure_set(v___f_2623_, 9, v_isInserted_x3f_2617_);
lean_closure_set(v___f_2623_, 10, v_isRemoved_x3f_2618_);
v___x_2624_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_mvarId_2616_, v___f_2623_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v_a_2625_; size_t v___x_2626_; size_t v___x_2627_; lean_object* v___x_2628_; 
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
lean_inc(v_a_2625_);
lean_dec_ref_known(v___x_2624_, 1);
v___x_2626_ = ((size_t)1ULL);
v___x_2627_ = lean_usize_add(v_i_2603_, v___x_2626_);
v___x_2628_ = lean_array_uset(v_bs_x27_2620_, v_i_2603_, v_a_2625_);
v_i_2603_ = v___x_2627_;
v_bs_2604_ = v___x_2628_;
goto _start;
}
else
{
lean_object* v_a_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2637_; 
lean_dec_ref(v_bs_x27_2620_);
lean_dec(v_a_2600_);
lean_dec(v___y_2598_);
v_a_2630_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2632_ = v___x_2624_;
v_isShared_2633_ = v_isSharedCheck_2637_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_a_2630_);
lean_dec(v___x_2624_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2637_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2635_; 
if (v_isShared_2633_ == 0)
{
v___x_2635_ = v___x_2632_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_a_2630_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
return v___x_2635_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8___boxed(lean_object* v___y_2638_, lean_object* v_useAfter_2639_, lean_object* v_a_2640_, lean_object* v___x_2641_, lean_object* v_sz_2642_, lean_object* v_i_2643_, lean_object* v_bs_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_){
_start:
{
uint8_t v_useAfter_boxed_2650_; uint8_t v___x_3371__boxed_2651_; size_t v_sz_boxed_2652_; size_t v_i_boxed_2653_; lean_object* v_res_2654_; 
v_useAfter_boxed_2650_ = lean_unbox(v_useAfter_2639_);
v___x_3371__boxed_2651_ = lean_unbox(v___x_2641_);
v_sz_boxed_2652_ = lean_unbox_usize(v_sz_2642_);
lean_dec(v_sz_2642_);
v_i_boxed_2653_ = lean_unbox_usize(v_i_2643_);
lean_dec(v_i_2643_);
v_res_2654_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(v___y_2638_, v_useAfter_boxed_2650_, v_a_2640_, v___x_3371__boxed_2651_, v_sz_boxed_2652_, v_i_boxed_2653_, v_bs_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7(uint8_t v_useAfter_2655_, lean_object* v_a_2656_, lean_object* v___y_2657_, uint8_t v___x_2658_, size_t v_sz_2659_, size_t v_i_2660_, lean_object* v_bs_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_){
_start:
{
uint8_t v___x_2667_; 
v___x_2667_ = lean_usize_dec_lt(v_i_2660_, v_sz_2659_);
if (v___x_2667_ == 0)
{
lean_object* v___x_2668_; 
lean_dec(v___y_2657_);
lean_dec(v_a_2656_);
v___x_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2668_, 0, v_bs_2661_);
return v___x_2668_;
}
else
{
lean_object* v_v_2669_; lean_object* v_toInteractiveGoalCore_2670_; lean_object* v_userName_x3f_2671_; lean_object* v_goalPrefix_2672_; lean_object* v_mvarId_2673_; lean_object* v_isInserted_x3f_2674_; lean_object* v_isRemoved_x3f_2675_; lean_object* v___x_2676_; lean_object* v_bs_x27_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___f_2680_; lean_object* v___x_2681_; 
v_v_2669_ = lean_array_uget(v_bs_2661_, v_i_2660_);
v_toInteractiveGoalCore_2670_ = lean_ctor_get(v_v_2669_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2670_);
v_userName_x3f_2671_ = lean_ctor_get(v_v_2669_, 1);
lean_inc(v_userName_x3f_2671_);
v_goalPrefix_2672_ = lean_ctor_get(v_v_2669_, 2);
lean_inc_ref(v_goalPrefix_2672_);
v_mvarId_2673_ = lean_ctor_get(v_v_2669_, 3);
lean_inc_n(v_mvarId_2673_, 2);
v_isInserted_x3f_2674_ = lean_ctor_get(v_v_2669_, 4);
lean_inc(v_isInserted_x3f_2674_);
v_isRemoved_x3f_2675_ = lean_ctor_get(v_v_2669_, 5);
lean_inc(v_isRemoved_x3f_2675_);
v___x_2676_ = lean_unsigned_to_nat(0u);
v_bs_x27_2677_ = lean_array_uset(v_bs_2661_, v_i_2660_, v___x_2676_);
v___x_2678_ = lean_box(v_useAfter_2655_);
v___x_2679_ = lean_box(v___x_2658_);
lean_inc(v_a_2656_);
lean_inc(v___y_2657_);
v___f_2680_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed), 18, 11);
lean_closure_set(v___f_2680_, 0, v_mvarId_2673_);
lean_closure_set(v___f_2680_, 1, v___y_2657_);
lean_closure_set(v___f_2680_, 2, v___x_2678_);
lean_closure_set(v___f_2680_, 3, v_a_2656_);
lean_closure_set(v___f_2680_, 4, v_v_2669_);
lean_closure_set(v___f_2680_, 5, v___x_2679_);
lean_closure_set(v___f_2680_, 6, v_toInteractiveGoalCore_2670_);
lean_closure_set(v___f_2680_, 7, v_userName_x3f_2671_);
lean_closure_set(v___f_2680_, 8, v_goalPrefix_2672_);
lean_closure_set(v___f_2680_, 9, v_isInserted_x3f_2674_);
lean_closure_set(v___f_2680_, 10, v_isRemoved_x3f_2675_);
v___x_2681_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_mvarId_2673_, v___f_2680_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_);
if (lean_obj_tag(v___x_2681_) == 0)
{
lean_object* v_a_2682_; size_t v___x_2683_; size_t v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; 
v_a_2682_ = lean_ctor_get(v___x_2681_, 0);
lean_inc(v_a_2682_);
lean_dec_ref_known(v___x_2681_, 1);
v___x_2683_ = ((size_t)1ULL);
v___x_2684_ = lean_usize_add(v_i_2660_, v___x_2683_);
v___x_2685_ = lean_array_uset(v_bs_x27_2677_, v_i_2660_, v_a_2682_);
v___x_2686_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(v___y_2657_, v_useAfter_2655_, v_a_2656_, v___x_2658_, v_sz_2659_, v___x_2684_, v___x_2685_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_);
return v___x_2686_;
}
else
{
lean_object* v_a_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2694_; 
lean_dec_ref(v_bs_x27_2677_);
lean_dec(v___y_2657_);
lean_dec(v_a_2656_);
v_a_2687_ = lean_ctor_get(v___x_2681_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v___x_2681_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2689_ = v___x_2681_;
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_a_2687_);
lean_dec(v___x_2681_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v___x_2692_; 
if (v_isShared_2690_ == 0)
{
v___x_2692_ = v___x_2689_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v_a_2687_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
return v___x_2692_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___boxed(lean_object* v_useAfter_2695_, lean_object* v_a_2696_, lean_object* v___y_2697_, lean_object* v___x_2698_, lean_object* v_sz_2699_, lean_object* v_i_2700_, lean_object* v_bs_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
uint8_t v_useAfter_boxed_2707_; uint8_t v___x_3435__boxed_2708_; size_t v_sz_boxed_2709_; size_t v_i_boxed_2710_; lean_object* v_res_2711_; 
v_useAfter_boxed_2707_ = lean_unbox(v_useAfter_2695_);
v___x_3435__boxed_2708_ = lean_unbox(v___x_2698_);
v_sz_boxed_2709_ = lean_unbox_usize(v_sz_2699_);
lean_dec(v_sz_2699_);
v_i_boxed_2710_ = lean_unbox_usize(v_i_2700_);
lean_dec(v_i_2700_);
v_res_2711_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7(v_useAfter_boxed_2707_, v_a_2696_, v___y_2697_, v___x_3435__boxed_2708_, v_sz_boxed_2709_, v_i_boxed_2710_, v_bs_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals(uint8_t v_useAfter_2712_, lean_object* v_info_2713_, lean_object* v_igs_u2081_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_){
_start:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; uint8_t v___x_2722_; lean_object* v___y_2724_; 
v___x_2720_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2717_);
v___x_2721_ = l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff;
v___x_2722_ = l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(v___x_2720_, v___x_2721_);
lean_dec_ref(v___x_2720_);
if (v___x_2722_ == 0)
{
lean_object* v___x_2756_; 
lean_dec_ref(v_info_2713_);
v___x_2756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2756_, 0, v_igs_u2081_2714_);
return v___x_2756_;
}
else
{
if (v_useAfter_2712_ == 0)
{
lean_object* v_goalsAfter_2757_; 
v_goalsAfter_2757_ = lean_ctor_get(v_info_2713_, 4);
lean_inc(v_goalsAfter_2757_);
v___y_2724_ = v_goalsAfter_2757_;
goto v___jp_2723_;
}
else
{
lean_object* v_goalsBefore_2758_; 
v_goalsBefore_2758_ = lean_ctor_get(v_info_2713_, 2);
lean_inc(v_goalsBefore_2758_);
v___y_2724_ = v_goalsBefore_2758_;
goto v___jp_2723_;
}
}
v___jp_2723_:
{
lean_object* v_goalsBefore_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v_goalsBefore_2725_ = lean_ctor_get(v_info_2713_, 2);
lean_inc(v_goalsBefore_2725_);
lean_dec_ref(v_info_2713_);
v___x_2726_ = lean_box(1);
v___x_2727_ = l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(v___x_2726_, v_goalsBefore_2725_, v_a_2715_, v_a_2716_, v_a_2717_, v_a_2718_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2728_; size_t v_sz_2729_; size_t v___x_2730_; lean_object* v___x_2731_; 
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_a_2728_);
lean_dec_ref_known(v___x_2727_, 1);
v_sz_2729_ = lean_array_size(v_igs_u2081_2714_);
v___x_2730_ = ((size_t)0ULL);
v___x_2731_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7(v_useAfter_2712_, v_a_2728_, v___y_2724_, v___x_2722_, v_sz_2729_, v___x_2730_, v_igs_u2081_2714_, v_a_2715_, v_a_2716_, v_a_2717_, v_a_2718_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2739_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2739_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2734_ = v___x_2731_;
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2731_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___x_2737_; 
if (v_isShared_2735_ == 0)
{
v___x_2737_ = v___x_2734_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v_a_2732_);
v___x_2737_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
return v___x_2737_;
}
}
}
else
{
lean_object* v_a_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2747_; 
v_a_2740_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2742_ = v___x_2731_;
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_a_2740_);
lean_dec(v___x_2731_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2745_; 
if (v_isShared_2743_ == 0)
{
v___x_2745_ = v___x_2742_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_a_2740_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
}
}
else
{
lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2755_; 
lean_dec(v___y_2724_);
lean_dec_ref(v_igs_u2081_2714_);
v_a_2748_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2750_ = v___x_2727_;
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v___x_2727_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2753_; 
if (v_isShared_2751_ == 0)
{
v___x_2753_ = v___x_2750_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_a_2748_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals___boxed(lean_object* v_useAfter_2759_, lean_object* v_info_2760_, lean_object* v_igs_u2081_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_){
_start:
{
uint8_t v_useAfter_boxed_2767_; lean_object* v_res_2768_; 
v_useAfter_boxed_2767_ = lean_unbox(v_useAfter_2759_);
v_res_2768_ = l_Lean_Widget_diffInteractiveGoals(v_useAfter_boxed_2767_, v_info_2760_, v_igs_u2081_2761_, v_a_2762_, v_a_2763_, v_a_2764_, v_a_2765_);
lean_dec(v_a_2765_);
lean_dec_ref(v_a_2764_);
lean_dec(v_a_2763_);
lean_dec_ref(v_a_2762_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2(lean_object* v_00_u03b4_2769_, lean_object* v_t_2770_, lean_object* v_k_2771_){
_start:
{
lean_object* v___x_2772_; 
v___x_2772_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(v_t_2770_, v_k_2771_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___boxed(lean_object* v_00_u03b4_2773_, lean_object* v_t_2774_, lean_object* v_k_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2(v_00_u03b4_2773_, v_t_2774_, v_k_2775_);
lean_dec(v_k_2775_);
lean_dec(v_t_2774_);
return v_res_2776_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3(lean_object* v_00_u03b2_2777_, lean_object* v_k_2778_, lean_object* v_t_2779_){
_start:
{
uint8_t v___x_2780_; 
v___x_2780_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(v_k_2778_, v_t_2779_);
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___boxed(lean_object* v_00_u03b2_2781_, lean_object* v_k_2782_, lean_object* v_t_2783_){
_start:
{
uint8_t v_res_2784_; lean_object* v_r_2785_; 
v_res_2784_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3(v_00_u03b2_2781_, v_k_2782_, v_t_2783_);
lean_dec(v_t_2783_);
lean_dec(v_k_2782_);
v_r_2785_ = lean_box(v_res_2784_);
return v_r_2785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6(lean_object* v_00_u03b1_2786_, lean_object* v_lctx_2787_, lean_object* v_localInsts_2788_, lean_object* v_x_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_){
_start:
{
lean_object* v___x_2795_; 
v___x_2795_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(v_lctx_2787_, v_localInsts_2788_, v_x_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_);
return v___x_2795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___boxed(lean_object* v_00_u03b1_2796_, lean_object* v_lctx_2797_, lean_object* v_localInsts_2798_, lean_object* v_x_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6(v_00_u03b1_2796_, v_lctx_2797_, v_localInsts_2798_, v_x_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6(lean_object* v_00_u03b1_2806_, lean_object* v_goal_2807_, lean_object* v_action_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_){
_start:
{
lean_object* v___x_2814_; 
v___x_2814_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_goal_2807_, v_action_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___boxed(lean_object* v_00_u03b1_2815_, lean_object* v_goal_2816_, lean_object* v_action_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v_res_2823_; 
v_res_2823_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6(v_00_u03b1_2815_, v_goal_2816_, v_action_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_);
lean_dec(v___y_2821_);
lean_dec_ref(v___y_2820_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
return v_res_2823_;
}
}
lean_object* runtime_initialize_Lean_Widget_InteractiveGoal(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Widget_Diff(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Widget_InteractiveGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Widget_Diff(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Widget_InteractiveGoal(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Widget_Diff(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Widget_InteractiveGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Widget_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Widget_Diff(builtin);
}
#ifdef __cplusplus
}
#endif
