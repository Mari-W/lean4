// Lean compiler output
// Module: Lean.Meta.Tactic.Clear
// Imports: public import Lean.Meta.Tactic.Util import Init.Data.Nat.Order import Init.Data.Order.Lemmas
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
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_erase(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_sortFVarsByContextOrder(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MVarId_clear___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "clear"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 138, 223, 238, 58, 192, 25, 14)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "variable '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "' depends on '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_clear___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "target depends on '"};
static const lean_object* l_Lean_MVarId_clear___lam__1___closed__0 = (const lean_object*)&l_Lean_MVarId_clear___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_clear___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_clear___lam__1___closed__1;
static const lean_string_object l_Lean_MVarId_clear___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unknown variable '"};
static const lean_object* l_Lean_MVarId_clear___lam__1___closed__2 = (const lean_object*)&l_Lean_MVarId_clear___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_MVarId_clear___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_clear___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClear___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0(lean_object* v_fvarId_1_, lean_object* v_x_2_){
_start:
{
uint8_t v___x_3_; 
v___x_3_ = l_Lean_instBEqFVarId_beq(v_fvarId_1_, v_x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0___boxed(lean_object* v_fvarId_4_, lean_object* v_x_5_){
_start:
{
uint8_t v_res_6_; lean_object* v_r_7_; 
v_res_6_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0(v_fvarId_4_, v_x_5_);
lean_dec(v_x_5_);
lean_dec(v_fvarId_4_);
v_r_7_ = lean_box(v_res_6_);
return v_r_7_;
}
}
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1(lean_object* v_x_8_){
_start:
{
uint8_t v___x_9_; 
v___x_9_ = 0;
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1___boxed(lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1(v_x_10_);
lean_dec(v_x_10_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
static lean_object* _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = lean_box(0);
v___x_15_ = lean_unsigned_to_nat(16u);
v___x_16_ = lean_mk_array(v___x_15_, v___x_14_);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1);
v___x_18_ = lean_unsigned_to_nat(0u);
v___x_19_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_17_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(lean_object* v_localDecl_20_, lean_object* v_fvarId_21_, uint8_t v_generalizeNondepLet_22_, lean_object* v___y_23_){
_start:
{
uint8_t v_fst_26_; lean_object* v_snd_27_; lean_object* v___y_47_; lean_object* v___f_51_; lean_object* v___f_52_; 
v___f_51_ = lean_alloc_closure((void*)(l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_51_, 0, v_fvarId_21_);
v___f_52_ = ((lean_object*)(l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0));
if (lean_obj_tag(v_localDecl_20_) == 0)
{
lean_object* v_type_53_; lean_object* v___x_54_; uint8_t v_fst_56_; lean_object* v_mctx_57_; lean_object* v___y_76_; lean_object* v_mctx_81_; lean_object* v___x_82_; lean_object* v___x_83_; uint8_t v___x_84_; 
v_type_53_ = lean_ctor_get(v_localDecl_20_, 3);
lean_inc_ref(v_type_53_);
lean_dec_ref_known(v_localDecl_20_, 4);
v___x_54_ = lean_st_ref_get(v___y_23_);
v_mctx_81_ = lean_ctor_get(v___x_54_, 0);
lean_inc_ref_n(v_mctx_81_, 2);
lean_dec(v___x_54_);
v___x_82_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v_mctx_81_);
v___x_84_ = l_Lean_Expr_hasFVar(v_type_53_);
if (v___x_84_ == 0)
{
uint8_t v___x_85_; 
v___x_85_ = l_Lean_Expr_hasMVar(v_type_53_);
if (v___x_85_ == 0)
{
lean_dec_ref_known(v___x_83_, 2);
lean_dec_ref(v_type_53_);
lean_dec_ref(v___f_51_);
v_fst_56_ = v___x_85_;
v_mctx_57_ = v_mctx_81_;
goto v___jp_55_;
}
else
{
lean_object* v___x_86_; 
lean_dec_ref(v_mctx_81_);
v___x_86_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_51_, v___f_52_, v_type_53_, v___x_83_);
v___y_76_ = v___x_86_;
goto v___jp_75_;
}
}
else
{
lean_object* v___x_87_; 
lean_dec_ref(v_mctx_81_);
v___x_87_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_51_, v___f_52_, v_type_53_, v___x_83_);
v___y_76_ = v___x_87_;
goto v___jp_75_;
}
v___jp_55_:
{
lean_object* v___x_58_; lean_object* v_cache_59_; lean_object* v_zetaDeltaFVarIds_60_; lean_object* v_postponed_61_; lean_object* v_diag_62_; lean_object* v_rewriteFires_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_73_; 
v___x_58_ = lean_st_ref_take(v___y_23_);
v_cache_59_ = lean_ctor_get(v___x_58_, 1);
v_zetaDeltaFVarIds_60_ = lean_ctor_get(v___x_58_, 2);
v_postponed_61_ = lean_ctor_get(v___x_58_, 3);
v_diag_62_ = lean_ctor_get(v___x_58_, 4);
v_rewriteFires_63_ = lean_ctor_get(v___x_58_, 5);
v_isSharedCheck_73_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_73_ == 0)
{
lean_object* v_unused_74_; 
v_unused_74_ = lean_ctor_get(v___x_58_, 0);
lean_dec(v_unused_74_);
v___x_65_ = v___x_58_;
v_isShared_66_ = v_isSharedCheck_73_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_rewriteFires_63_);
lean_inc(v_diag_62_);
lean_inc(v_postponed_61_);
lean_inc(v_zetaDeltaFVarIds_60_);
lean_inc(v_cache_59_);
lean_dec(v___x_58_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_73_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_68_; 
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 0, v_mctx_57_);
v___x_68_ = v___x_65_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v_mctx_57_);
lean_ctor_set(v_reuseFailAlloc_72_, 1, v_cache_59_);
lean_ctor_set(v_reuseFailAlloc_72_, 2, v_zetaDeltaFVarIds_60_);
lean_ctor_set(v_reuseFailAlloc_72_, 3, v_postponed_61_);
lean_ctor_set(v_reuseFailAlloc_72_, 4, v_diag_62_);
lean_ctor_set(v_reuseFailAlloc_72_, 5, v_rewriteFires_63_);
v___x_68_ = v_reuseFailAlloc_72_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = lean_st_ref_put(v___y_23_, v___x_68_);
v___x_70_ = lean_box(v_fst_56_);
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
return v___x_71_;
}
}
}
v___jp_75_:
{
lean_object* v_snd_77_; lean_object* v_fst_78_; lean_object* v_mctx_79_; uint8_t v___x_80_; 
v_snd_77_ = lean_ctor_get(v___y_76_, 1);
lean_inc(v_snd_77_);
v_fst_78_ = lean_ctor_get(v___y_76_, 0);
lean_inc(v_fst_78_);
lean_dec_ref(v___y_76_);
v_mctx_79_ = lean_ctor_get(v_snd_77_, 1);
lean_inc_ref(v_mctx_79_);
lean_dec(v_snd_77_);
v___x_80_ = lean_unbox(v_fst_78_);
lean_dec(v_fst_78_);
v_fst_56_ = v___x_80_;
v_mctx_57_ = v_mctx_79_;
goto v___jp_55_;
}
}
else
{
lean_object* v_type_88_; lean_object* v_value_89_; uint8_t v_nondep_90_; lean_object* v_snd_92_; lean_object* v___y_98_; 
v_type_88_ = lean_ctor_get(v_localDecl_20_, 3);
lean_inc_ref(v_type_88_);
v_value_89_ = lean_ctor_get(v_localDecl_20_, 4);
lean_inc_ref(v_value_89_);
v_nondep_90_ = lean_ctor_get_uint8(v_localDecl_20_, sizeof(void*)*5);
lean_dec_ref_known(v_localDecl_20_, 5);
if (v_generalizeNondepLet_22_ == 0)
{
goto v___jp_104_;
}
else
{
if (v_nondep_90_ == 0)
{
goto v___jp_104_;
}
else
{
lean_object* v___x_113_; uint8_t v_fst_115_; lean_object* v_mctx_116_; lean_object* v___y_135_; lean_object* v_mctx_140_; lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
lean_dec_ref(v_value_89_);
v___x_113_ = lean_st_ref_get(v___y_23_);
v_mctx_140_ = lean_ctor_get(v___x_113_, 0);
lean_inc_ref_n(v_mctx_140_, 2);
lean_dec(v___x_113_);
v___x_141_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2);
v___x_142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v_mctx_140_);
v___x_143_ = l_Lean_Expr_hasFVar(v_type_88_);
if (v___x_143_ == 0)
{
uint8_t v___x_144_; 
v___x_144_ = l_Lean_Expr_hasMVar(v_type_88_);
if (v___x_144_ == 0)
{
lean_dec_ref_known(v___x_142_, 2);
lean_dec_ref(v_type_88_);
lean_dec_ref(v___f_51_);
v_fst_115_ = v___x_144_;
v_mctx_116_ = v_mctx_140_;
goto v___jp_114_;
}
else
{
lean_object* v___x_145_; 
lean_dec_ref(v_mctx_140_);
v___x_145_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_51_, v___f_52_, v_type_88_, v___x_142_);
v___y_135_ = v___x_145_;
goto v___jp_134_;
}
}
else
{
lean_object* v___x_146_; 
lean_dec_ref(v_mctx_140_);
v___x_146_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_51_, v___f_52_, v_type_88_, v___x_142_);
v___y_135_ = v___x_146_;
goto v___jp_134_;
}
v___jp_114_:
{
lean_object* v___x_117_; lean_object* v_cache_118_; lean_object* v_zetaDeltaFVarIds_119_; lean_object* v_postponed_120_; lean_object* v_diag_121_; lean_object* v_rewriteFires_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_132_; 
v___x_117_ = lean_st_ref_take(v___y_23_);
v_cache_118_ = lean_ctor_get(v___x_117_, 1);
v_zetaDeltaFVarIds_119_ = lean_ctor_get(v___x_117_, 2);
v_postponed_120_ = lean_ctor_get(v___x_117_, 3);
v_diag_121_ = lean_ctor_get(v___x_117_, 4);
v_rewriteFires_122_ = lean_ctor_get(v___x_117_, 5);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_132_ == 0)
{
lean_object* v_unused_133_; 
v_unused_133_ = lean_ctor_get(v___x_117_, 0);
lean_dec(v_unused_133_);
v___x_124_ = v___x_117_;
v_isShared_125_ = v_isSharedCheck_132_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_rewriteFires_122_);
lean_inc(v_diag_121_);
lean_inc(v_postponed_120_);
lean_inc(v_zetaDeltaFVarIds_119_);
lean_inc(v_cache_118_);
lean_dec(v___x_117_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_132_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v_mctx_116_);
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_mctx_116_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v_cache_118_);
lean_ctor_set(v_reuseFailAlloc_131_, 2, v_zetaDeltaFVarIds_119_);
lean_ctor_set(v_reuseFailAlloc_131_, 3, v_postponed_120_);
lean_ctor_set(v_reuseFailAlloc_131_, 4, v_diag_121_);
lean_ctor_set(v_reuseFailAlloc_131_, 5, v_rewriteFires_122_);
v___x_127_ = v_reuseFailAlloc_131_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_128_ = lean_st_ref_put(v___y_23_, v___x_127_);
v___x_129_ = lean_box(v_fst_115_);
v___x_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
return v___x_130_;
}
}
}
v___jp_134_:
{
lean_object* v_snd_136_; lean_object* v_fst_137_; lean_object* v_mctx_138_; uint8_t v___x_139_; 
v_snd_136_ = lean_ctor_get(v___y_135_, 1);
lean_inc(v_snd_136_);
v_fst_137_ = lean_ctor_get(v___y_135_, 0);
lean_inc(v_fst_137_);
lean_dec_ref(v___y_135_);
v_mctx_138_ = lean_ctor_get(v_snd_136_, 1);
lean_inc_ref(v_mctx_138_);
lean_dec(v_snd_136_);
v___x_139_ = lean_unbox(v_fst_137_);
lean_dec(v_fst_137_);
v_fst_115_ = v___x_139_;
v_mctx_116_ = v_mctx_138_;
goto v___jp_114_;
}
}
}
v___jp_91_:
{
uint8_t v___x_93_; 
v___x_93_ = l_Lean_Expr_hasFVar(v_value_89_);
if (v___x_93_ == 0)
{
uint8_t v___x_94_; 
v___x_94_ = l_Lean_Expr_hasMVar(v_value_89_);
if (v___x_94_ == 0)
{
lean_dec_ref(v_value_89_);
lean_dec_ref(v___f_51_);
v_fst_26_ = v___x_94_;
v_snd_27_ = v_snd_92_;
goto v___jp_25_;
}
else
{
lean_object* v___x_95_; 
v___x_95_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_51_, v___f_52_, v_value_89_, v_snd_92_);
v___y_47_ = v___x_95_;
goto v___jp_46_;
}
}
else
{
lean_object* v___x_96_; 
v___x_96_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_51_, v___f_52_, v_value_89_, v_snd_92_);
v___y_47_ = v___x_96_;
goto v___jp_46_;
}
}
v___jp_97_:
{
lean_object* v_fst_99_; uint8_t v___x_100_; 
v_fst_99_ = lean_ctor_get(v___y_98_, 0);
v___x_100_ = lean_unbox(v_fst_99_);
if (v___x_100_ == 0)
{
lean_object* v_snd_101_; 
v_snd_101_ = lean_ctor_get(v___y_98_, 1);
lean_inc(v_snd_101_);
lean_dec_ref(v___y_98_);
v_snd_92_ = v_snd_101_;
goto v___jp_91_;
}
else
{
lean_object* v_snd_102_; uint8_t v___x_103_; 
lean_inc(v_fst_99_);
lean_dec_ref(v_value_89_);
lean_dec_ref(v___f_51_);
v_snd_102_ = lean_ctor_get(v___y_98_, 1);
lean_inc(v_snd_102_);
lean_dec_ref(v___y_98_);
v___x_103_ = lean_unbox(v_fst_99_);
lean_dec(v_fst_99_);
v_fst_26_ = v___x_103_;
v_snd_27_ = v_snd_102_;
goto v___jp_25_;
}
}
v___jp_104_:
{
lean_object* v___x_105_; lean_object* v_mctx_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_105_ = lean_st_ref_get(v___y_23_);
v_mctx_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc_ref(v_mctx_106_);
lean_dec(v___x_105_);
v___x_107_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v_mctx_106_);
v___x_109_ = l_Lean_Expr_hasFVar(v_type_88_);
if (v___x_109_ == 0)
{
uint8_t v___x_110_; 
v___x_110_ = l_Lean_Expr_hasMVar(v_type_88_);
if (v___x_110_ == 0)
{
lean_dec_ref(v_type_88_);
v_snd_92_ = v___x_108_;
goto v___jp_91_;
}
else
{
lean_object* v___x_111_; 
lean_inc_ref(v___f_51_);
v___x_111_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_51_, v___f_52_, v_type_88_, v___x_108_);
v___y_98_ = v___x_111_;
goto v___jp_97_;
}
}
else
{
lean_object* v___x_112_; 
lean_inc_ref(v___f_51_);
v___x_112_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_51_, v___f_52_, v_type_88_, v___x_108_);
v___y_98_ = v___x_112_;
goto v___jp_97_;
}
}
}
v___jp_25_:
{
lean_object* v_mctx_28_; lean_object* v___x_29_; lean_object* v_cache_30_; lean_object* v_zetaDeltaFVarIds_31_; lean_object* v_postponed_32_; lean_object* v_diag_33_; lean_object* v_rewriteFires_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_44_; 
v_mctx_28_ = lean_ctor_get(v_snd_27_, 1);
lean_inc_ref(v_mctx_28_);
lean_dec_ref(v_snd_27_);
v___x_29_ = lean_st_ref_take(v___y_23_);
v_cache_30_ = lean_ctor_get(v___x_29_, 1);
v_zetaDeltaFVarIds_31_ = lean_ctor_get(v___x_29_, 2);
v_postponed_32_ = lean_ctor_get(v___x_29_, 3);
v_diag_33_ = lean_ctor_get(v___x_29_, 4);
v_rewriteFires_34_ = lean_ctor_get(v___x_29_, 5);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_44_ == 0)
{
lean_object* v_unused_45_; 
v_unused_45_ = lean_ctor_get(v___x_29_, 0);
lean_dec(v_unused_45_);
v___x_36_ = v___x_29_;
v_isShared_37_ = v_isSharedCheck_44_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_rewriteFires_34_);
lean_inc(v_diag_33_);
lean_inc(v_postponed_32_);
lean_inc(v_zetaDeltaFVarIds_31_);
lean_inc(v_cache_30_);
lean_dec(v___x_29_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_44_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_39_; 
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 0, v_mctx_28_);
v___x_39_ = v___x_36_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_mctx_28_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v_cache_30_);
lean_ctor_set(v_reuseFailAlloc_43_, 2, v_zetaDeltaFVarIds_31_);
lean_ctor_set(v_reuseFailAlloc_43_, 3, v_postponed_32_);
lean_ctor_set(v_reuseFailAlloc_43_, 4, v_diag_33_);
lean_ctor_set(v_reuseFailAlloc_43_, 5, v_rewriteFires_34_);
v___x_39_ = v_reuseFailAlloc_43_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_40_ = lean_st_ref_put(v___y_23_, v___x_39_);
v___x_41_ = lean_box(v_fst_26_);
v___x_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
return v___x_42_;
}
}
}
v___jp_46_:
{
lean_object* v_fst_48_; lean_object* v_snd_49_; uint8_t v___x_50_; 
v_fst_48_ = lean_ctor_get(v___y_47_, 0);
lean_inc(v_fst_48_);
v_snd_49_ = lean_ctor_get(v___y_47_, 1);
lean_inc(v_snd_49_);
lean_dec_ref(v___y_47_);
v___x_50_ = lean_unbox(v_fst_48_);
lean_dec(v_fst_48_);
v_fst_26_ = v___x_50_;
v_snd_27_ = v_snd_49_;
goto v___jp_25_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___boxed(lean_object* v_localDecl_147_, lean_object* v_fvarId_148_, lean_object* v_generalizeNondepLet_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
uint8_t v_generalizeNondepLet_boxed_152_; lean_object* v_res_153_; 
v_generalizeNondepLet_boxed_152_ = lean_unbox(v_generalizeNondepLet_149_);
v_res_153_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(v_localDecl_147_, v_fvarId_148_, v_generalizeNondepLet_boxed_152_, v___y_150_);
lean_dec(v___y_150_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0(lean_object* v_localDecl_154_, lean_object* v_fvarId_155_, uint8_t v_generalizeNondepLet_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(v_localDecl_154_, v_fvarId_155_, v_generalizeNondepLet_156_, v___y_158_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___boxed(lean_object* v_localDecl_163_, lean_object* v_fvarId_164_, lean_object* v_generalizeNondepLet_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
uint8_t v_generalizeNondepLet_boxed_171_; lean_object* v_res_172_; 
v_generalizeNondepLet_boxed_171_ = lean_unbox(v_generalizeNondepLet_165_);
v_res_172_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0(v_localDecl_163_, v_fvarId_164_, v_generalizeNondepLet_boxed_171_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg(lean_object* v_e_173_, lean_object* v_fvarId_174_, lean_object* v___y_175_){
_start:
{
lean_object* v___f_177_; lean_object* v___f_178_; lean_object* v___x_179_; uint8_t v_fst_181_; lean_object* v_mctx_182_; lean_object* v___y_201_; lean_object* v_mctx_206_; lean_object* v___x_207_; lean_object* v___x_208_; uint8_t v___x_209_; 
v___f_177_ = ((lean_object*)(l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0));
v___f_178_ = lean_alloc_closure((void*)(l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_178_, 0, v_fvarId_174_);
v___x_179_ = lean_st_ref_get(v___y_175_);
v_mctx_206_ = lean_ctor_get(v___x_179_, 0);
lean_inc_ref_n(v_mctx_206_, 2);
lean_dec(v___x_179_);
v___x_207_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2);
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
lean_ctor_set(v___x_208_, 1, v_mctx_206_);
v___x_209_ = l_Lean_Expr_hasFVar(v_e_173_);
if (v___x_209_ == 0)
{
uint8_t v___x_210_; 
v___x_210_ = l_Lean_Expr_hasMVar(v_e_173_);
if (v___x_210_ == 0)
{
lean_dec_ref_known(v___x_208_, 2);
lean_dec_ref(v___f_178_);
lean_dec_ref(v_e_173_);
v_fst_181_ = v___x_210_;
v_mctx_182_ = v_mctx_206_;
goto v___jp_180_;
}
else
{
lean_object* v___x_211_; 
lean_dec_ref(v_mctx_206_);
v___x_211_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_178_, v___f_177_, v_e_173_, v___x_208_);
v___y_201_ = v___x_211_;
goto v___jp_200_;
}
}
else
{
lean_object* v___x_212_; 
lean_dec_ref(v_mctx_206_);
v___x_212_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_178_, v___f_177_, v_e_173_, v___x_208_);
v___y_201_ = v___x_212_;
goto v___jp_200_;
}
v___jp_180_:
{
lean_object* v___x_183_; lean_object* v_cache_184_; lean_object* v_zetaDeltaFVarIds_185_; lean_object* v_postponed_186_; lean_object* v_diag_187_; lean_object* v_rewriteFires_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_198_; 
v___x_183_ = lean_st_ref_take(v___y_175_);
v_cache_184_ = lean_ctor_get(v___x_183_, 1);
v_zetaDeltaFVarIds_185_ = lean_ctor_get(v___x_183_, 2);
v_postponed_186_ = lean_ctor_get(v___x_183_, 3);
v_diag_187_ = lean_ctor_get(v___x_183_, 4);
v_rewriteFires_188_ = lean_ctor_get(v___x_183_, 5);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_198_ == 0)
{
lean_object* v_unused_199_; 
v_unused_199_ = lean_ctor_get(v___x_183_, 0);
lean_dec(v_unused_199_);
v___x_190_ = v___x_183_;
v_isShared_191_ = v_isSharedCheck_198_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_rewriteFires_188_);
lean_inc(v_diag_187_);
lean_inc(v_postponed_186_);
lean_inc(v_zetaDeltaFVarIds_185_);
lean_inc(v_cache_184_);
lean_dec(v___x_183_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_198_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v_mctx_182_);
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_mctx_182_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v_cache_184_);
lean_ctor_set(v_reuseFailAlloc_197_, 2, v_zetaDeltaFVarIds_185_);
lean_ctor_set(v_reuseFailAlloc_197_, 3, v_postponed_186_);
lean_ctor_set(v_reuseFailAlloc_197_, 4, v_diag_187_);
lean_ctor_set(v_reuseFailAlloc_197_, 5, v_rewriteFires_188_);
v___x_193_ = v_reuseFailAlloc_197_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_st_ref_put(v___y_175_, v___x_193_);
v___x_195_ = lean_box(v_fst_181_);
v___x_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
return v___x_196_;
}
}
}
v___jp_200_:
{
lean_object* v_snd_202_; lean_object* v_fst_203_; lean_object* v_mctx_204_; uint8_t v___x_205_; 
v_snd_202_ = lean_ctor_get(v___y_201_, 1);
lean_inc(v_snd_202_);
v_fst_203_ = lean_ctor_get(v___y_201_, 0);
lean_inc(v_fst_203_);
lean_dec_ref(v___y_201_);
v_mctx_204_ = lean_ctor_get(v_snd_202_, 1);
lean_inc_ref(v_mctx_204_);
lean_dec(v_snd_202_);
v___x_205_ = lean_unbox(v_fst_203_);
lean_dec(v_fst_203_);
v_fst_181_ = v___x_205_;
v_mctx_182_ = v_mctx_204_;
goto v___jp_180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg___boxed(lean_object* v_e_213_, lean_object* v_fvarId_214_, lean_object* v___y_215_, lean_object* v___y_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg(v_e_213_, v_fvarId_214_, v___y_215_);
lean_dec(v___y_215_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3(lean_object* v_e_218_, lean_object* v_fvarId_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg(v_e_218_, v_fvarId_219_, v___y_221_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___boxed(lean_object* v_e_226_, lean_object* v_fvarId_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3(v_e_226_, v_fvarId_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(lean_object* v_mvarId_234_, lean_object* v_x_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_234_, v_x_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
v_a_242_ = lean_ctor_get(v___x_241_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v___x_241_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_241_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_a_242_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
v_a_250_ = lean_ctor_get(v___x_241_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_241_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_241_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg___boxed(lean_object* v_mvarId_258_, lean_object* v_x_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(v_mvarId_258_, v_x_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4(lean_object* v_00_u03b1_266_, lean_object* v_mvarId_267_, lean_object* v_x_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(v_mvarId_267_, v_x_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___boxed(lean_object* v_00_u03b1_275_, lean_object* v_mvarId_276_, lean_object* v_x_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4(v_00_u03b1_275_, v_mvarId_276_, v_x_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
return v_res_283_;
}
}
LEAN_EXPORT uint8_t l_Lean_MVarId_clear___lam__0(lean_object* v_fvarId_284_, lean_object* v_localInst_285_){
_start:
{
lean_object* v_fvar_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v_fvar_286_ = lean_ctor_get(v_localInst_285_, 1);
v___x_287_ = l_Lean_Expr_fvarId_x21(v_fvar_286_);
v___x_288_ = l_Lean_instBEqFVarId_beq(v___x_287_, v_fvarId_284_);
lean_dec(v___x_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__0___boxed(lean_object* v_fvarId_289_, lean_object* v_localInst_290_){
_start:
{
uint8_t v_res_291_; lean_object* v_r_292_; 
v_res_291_ = l_Lean_MVarId_clear___lam__0(v_fvarId_289_, v_localInst_290_);
lean_dec_ref(v_localInst_290_);
lean_dec(v_fvarId_289_);
v_r_292_ = lean_box(v_res_291_);
return v_r_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14___redArg(lean_object* v_x_293_, lean_object* v_x_294_, lean_object* v_x_295_, lean_object* v_x_296_){
_start:
{
lean_object* v_ks_297_; lean_object* v_vs_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_322_; 
v_ks_297_ = lean_ctor_get(v_x_293_, 0);
v_vs_298_ = lean_ctor_get(v_x_293_, 1);
v_isSharedCheck_322_ = !lean_is_exclusive(v_x_293_);
if (v_isSharedCheck_322_ == 0)
{
v___x_300_ = v_x_293_;
v_isShared_301_ = v_isSharedCheck_322_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_vs_298_);
lean_inc(v_ks_297_);
lean_dec(v_x_293_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_322_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_302_ = lean_array_get_size(v_ks_297_);
v___x_303_ = lean_nat_dec_lt(v_x_294_, v___x_302_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_307_; 
lean_dec(v_x_294_);
v___x_304_ = lean_array_push(v_ks_297_, v_x_295_);
v___x_305_ = lean_array_push(v_vs_298_, v_x_296_);
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 1, v___x_305_);
lean_ctor_set(v___x_300_, 0, v___x_304_);
v___x_307_ = v___x_300_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_304_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
else
{
lean_object* v_k_x27_309_; uint8_t v___x_310_; 
v_k_x27_309_ = lean_array_fget_borrowed(v_ks_297_, v_x_294_);
v___x_310_ = l_Lean_instBEqMVarId_beq(v_x_295_, v_k_x27_309_);
if (v___x_310_ == 0)
{
lean_object* v___x_312_; 
if (v_isShared_301_ == 0)
{
v___x_312_ = v___x_300_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_ks_297_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_vs_298_);
v___x_312_ = v_reuseFailAlloc_316_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_unsigned_to_nat(1u);
v___x_314_ = lean_nat_add(v_x_294_, v___x_313_);
lean_dec(v_x_294_);
v_x_293_ = v___x_312_;
v_x_294_ = v___x_314_;
goto _start;
}
}
else
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_317_ = lean_array_fset(v_ks_297_, v_x_294_, v_x_295_);
v___x_318_ = lean_array_fset(v_vs_298_, v_x_294_, v_x_296_);
lean_dec(v_x_294_);
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 1, v___x_318_);
lean_ctor_set(v___x_300_, 0, v___x_317_);
v___x_320_ = v___x_300_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v___x_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13___redArg(lean_object* v_n_323_, lean_object* v_k_324_, lean_object* v_v_325_){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14___redArg(v_n_323_, v___x_326_, v_k_324_, v_v_325_);
return v___x_327_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(lean_object* v_x_329_, size_t v_x_330_, size_t v_x_331_, lean_object* v_x_332_, lean_object* v_x_333_){
_start:
{
if (lean_obj_tag(v_x_329_) == 0)
{
lean_object* v_es_334_; size_t v___x_335_; size_t v___x_336_; lean_object* v_j_337_; lean_object* v___x_338_; uint8_t v___x_339_; 
v_es_334_ = lean_ctor_get(v_x_329_, 0);
v___x_335_ = ((size_t)31ULL);
v___x_336_ = lean_usize_land(v_x_330_, v___x_335_);
v_j_337_ = lean_usize_to_nat(v___x_336_);
v___x_338_ = lean_array_get_size(v_es_334_);
v___x_339_ = lean_nat_dec_lt(v_j_337_, v___x_338_);
if (v___x_339_ == 0)
{
lean_dec(v_j_337_);
lean_dec(v_x_333_);
lean_dec(v_x_332_);
return v_x_329_;
}
else
{
lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_378_; 
lean_inc_ref(v_es_334_);
v_isSharedCheck_378_ = !lean_is_exclusive(v_x_329_);
if (v_isSharedCheck_378_ == 0)
{
lean_object* v_unused_379_; 
v_unused_379_ = lean_ctor_get(v_x_329_, 0);
lean_dec(v_unused_379_);
v___x_341_ = v_x_329_;
v_isShared_342_ = v_isSharedCheck_378_;
goto v_resetjp_340_;
}
else
{
lean_dec(v_x_329_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_378_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v_v_343_; lean_object* v___x_344_; lean_object* v_xs_x27_345_; lean_object* v___y_347_; 
v_v_343_ = lean_array_fget(v_es_334_, v_j_337_);
v___x_344_ = lean_box(0);
v_xs_x27_345_ = lean_array_fset(v_es_334_, v_j_337_, v___x_344_);
switch(lean_obj_tag(v_v_343_))
{
case 0:
{
lean_object* v_key_352_; lean_object* v_val_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_363_; 
v_key_352_ = lean_ctor_get(v_v_343_, 0);
v_val_353_ = lean_ctor_get(v_v_343_, 1);
v_isSharedCheck_363_ = !lean_is_exclusive(v_v_343_);
if (v_isSharedCheck_363_ == 0)
{
v___x_355_ = v_v_343_;
v_isShared_356_ = v_isSharedCheck_363_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_val_353_);
lean_inc(v_key_352_);
lean_dec(v_v_343_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_363_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
uint8_t v___x_357_; 
v___x_357_ = l_Lean_instBEqMVarId_beq(v_x_332_, v_key_352_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; lean_object* v___x_359_; 
lean_del_object(v___x_355_);
v___x_358_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_352_, v_val_353_, v_x_332_, v_x_333_);
v___x_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
v___y_347_ = v___x_359_;
goto v___jp_346_;
}
else
{
lean_object* v___x_361_; 
lean_dec(v_val_353_);
lean_dec(v_key_352_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 1, v_x_333_);
lean_ctor_set(v___x_355_, 0, v_x_332_);
v___x_361_ = v___x_355_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_x_332_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v_x_333_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
v___y_347_ = v___x_361_;
goto v___jp_346_;
}
}
}
}
case 1:
{
lean_object* v_node_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_376_; 
v_node_364_ = lean_ctor_get(v_v_343_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v_v_343_);
if (v_isSharedCheck_376_ == 0)
{
v___x_366_ = v_v_343_;
v_isShared_367_ = v_isSharedCheck_376_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_node_364_);
lean_dec(v_v_343_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_376_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
size_t v___x_368_; size_t v___x_369_; size_t v___x_370_; size_t v___x_371_; lean_object* v___x_372_; lean_object* v___x_374_; 
v___x_368_ = ((size_t)5ULL);
v___x_369_ = lean_usize_shift_right(v_x_330_, v___x_368_);
v___x_370_ = ((size_t)1ULL);
v___x_371_ = lean_usize_add(v_x_331_, v___x_370_);
v___x_372_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(v_node_364_, v___x_369_, v___x_371_, v_x_332_, v_x_333_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 0, v___x_372_);
v___x_374_ = v___x_366_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
v___y_347_ = v___x_374_;
goto v___jp_346_;
}
}
}
default: 
{
lean_object* v___x_377_; 
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v_x_332_);
lean_ctor_set(v___x_377_, 1, v_x_333_);
v___y_347_ = v___x_377_;
goto v___jp_346_;
}
}
v___jp_346_:
{
lean_object* v___x_348_; lean_object* v___x_350_; 
v___x_348_ = lean_array_fset(v_xs_x27_345_, v_j_337_, v___y_347_);
lean_dec(v_j_337_);
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 0, v___x_348_);
v___x_350_ = v___x_341_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v___x_348_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
else
{
lean_object* v_ks_380_; lean_object* v_vs_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_399_; 
v_ks_380_ = lean_ctor_get(v_x_329_, 0);
v_vs_381_ = lean_ctor_get(v_x_329_, 1);
v_isSharedCheck_399_ = !lean_is_exclusive(v_x_329_);
if (v_isSharedCheck_399_ == 0)
{
v___x_383_ = v_x_329_;
v_isShared_384_ = v_isSharedCheck_399_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_vs_381_);
lean_inc(v_ks_380_);
lean_dec(v_x_329_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_399_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_ks_380_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v_vs_381_);
v___x_386_ = v_reuseFailAlloc_398_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
lean_object* v_newNode_387_; size_t v___x_388_; uint8_t v___x_389_; 
v_newNode_387_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13___redArg(v___x_386_, v_x_332_, v_x_333_);
v___x_388_ = ((size_t)7ULL);
v___x_389_ = lean_usize_dec_le(v___x_388_, v_x_331_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_390_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_387_);
v___x_391_ = lean_unsigned_to_nat(4u);
v___x_392_ = lean_nat_dec_lt(v___x_390_, v___x_391_);
lean_dec(v___x_390_);
if (v___x_392_ == 0)
{
lean_object* v_ks_393_; lean_object* v_vs_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v_ks_393_ = lean_ctor_get(v_newNode_387_, 0);
lean_inc_ref(v_ks_393_);
v_vs_394_ = lean_ctor_get(v_newNode_387_, 1);
lean_inc_ref(v_vs_394_);
lean_dec_ref(v_newNode_387_);
v___x_395_ = lean_unsigned_to_nat(0u);
v___x_396_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0);
v___x_397_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg(v_x_331_, v_ks_393_, v_vs_394_, v___x_395_, v___x_396_);
lean_dec_ref(v_vs_394_);
lean_dec_ref(v_ks_393_);
return v___x_397_;
}
else
{
return v_newNode_387_;
}
}
else
{
return v_newNode_387_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg(size_t v_depth_400_, lean_object* v_keys_401_, lean_object* v_vals_402_, lean_object* v_i_403_, lean_object* v_entries_404_){
_start:
{
lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_405_ = lean_array_get_size(v_keys_401_);
v___x_406_ = lean_nat_dec_lt(v_i_403_, v___x_405_);
if (v___x_406_ == 0)
{
lean_dec(v_i_403_);
return v_entries_404_;
}
else
{
lean_object* v_k_407_; lean_object* v_v_408_; uint64_t v___x_409_; size_t v_h_410_; size_t v___x_411_; lean_object* v___x_412_; size_t v___x_413_; size_t v___x_414_; size_t v___x_415_; size_t v_h_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v_k_407_ = lean_array_fget_borrowed(v_keys_401_, v_i_403_);
v_v_408_ = lean_array_fget_borrowed(v_vals_402_, v_i_403_);
v___x_409_ = l_Lean_instHashableMVarId_hash(v_k_407_);
v_h_410_ = lean_uint64_to_usize(v___x_409_);
v___x_411_ = ((size_t)5ULL);
v___x_412_ = lean_unsigned_to_nat(1u);
v___x_413_ = ((size_t)1ULL);
v___x_414_ = lean_usize_sub(v_depth_400_, v___x_413_);
v___x_415_ = lean_usize_mul(v___x_411_, v___x_414_);
v_h_416_ = lean_usize_shift_right(v_h_410_, v___x_415_);
v___x_417_ = lean_nat_add(v_i_403_, v___x_412_);
lean_dec(v_i_403_);
lean_inc(v_v_408_);
lean_inc(v_k_407_);
v___x_418_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(v_entries_404_, v_h_416_, v_depth_400_, v_k_407_, v_v_408_);
v_i_403_ = v___x_417_;
v_entries_404_ = v___x_418_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg___boxed(lean_object* v_depth_420_, lean_object* v_keys_421_, lean_object* v_vals_422_, lean_object* v_i_423_, lean_object* v_entries_424_){
_start:
{
size_t v_depth_boxed_425_; lean_object* v_res_426_; 
v_depth_boxed_425_ = lean_unbox_usize(v_depth_420_);
lean_dec(v_depth_420_);
v_res_426_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg(v_depth_boxed_425_, v_keys_421_, v_vals_422_, v_i_423_, v_entries_424_);
lean_dec_ref(v_vals_422_);
lean_dec_ref(v_keys_421_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___boxed(lean_object* v_x_427_, lean_object* v_x_428_, lean_object* v_x_429_, lean_object* v_x_430_, lean_object* v_x_431_){
_start:
{
size_t v_x_7947__boxed_432_; size_t v_x_7948__boxed_433_; lean_object* v_res_434_; 
v_x_7947__boxed_432_ = lean_unbox_usize(v_x_428_);
lean_dec(v_x_428_);
v_x_7948__boxed_433_ = lean_unbox_usize(v_x_429_);
lean_dec(v_x_429_);
v_res_434_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(v_x_427_, v_x_7947__boxed_432_, v_x_7948__boxed_433_, v_x_430_, v_x_431_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3___redArg(lean_object* v_x_435_, lean_object* v_x_436_, lean_object* v_x_437_){
_start:
{
uint64_t v___x_438_; size_t v___x_439_; size_t v___x_440_; lean_object* v___x_441_; 
v___x_438_ = l_Lean_instHashableMVarId_hash(v_x_436_);
v___x_439_ = lean_uint64_to_usize(v___x_438_);
v___x_440_ = ((size_t)1ULL);
v___x_441_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(v_x_435_, v___x_439_, v___x_440_, v_x_436_, v_x_437_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg(lean_object* v_mvarId_442_, lean_object* v_val_443_, lean_object* v___y_444_){
_start:
{
lean_object* v___x_446_; lean_object* v_mctx_447_; lean_object* v_cache_448_; lean_object* v_zetaDeltaFVarIds_449_; lean_object* v_postponed_450_; lean_object* v_diag_451_; lean_object* v_rewriteFires_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_482_; 
v___x_446_ = lean_st_ref_take(v___y_444_);
v_mctx_447_ = lean_ctor_get(v___x_446_, 0);
v_cache_448_ = lean_ctor_get(v___x_446_, 1);
v_zetaDeltaFVarIds_449_ = lean_ctor_get(v___x_446_, 2);
v_postponed_450_ = lean_ctor_get(v___x_446_, 3);
v_diag_451_ = lean_ctor_get(v___x_446_, 4);
v_rewriteFires_452_ = lean_ctor_get(v___x_446_, 5);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_482_ == 0)
{
v___x_454_ = v___x_446_;
v_isShared_455_ = v_isSharedCheck_482_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_rewriteFires_452_);
lean_inc(v_diag_451_);
lean_inc(v_postponed_450_);
lean_inc(v_zetaDeltaFVarIds_449_);
lean_inc(v_cache_448_);
lean_inc(v_mctx_447_);
lean_dec(v___x_446_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_482_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v_depth_456_; lean_object* v_levelAssignDepth_457_; lean_object* v_lmvarCounter_458_; lean_object* v_mvarCounter_459_; lean_object* v_lDecls_460_; lean_object* v_decls_461_; lean_object* v_userNames_462_; lean_object* v_lAssignment_463_; lean_object* v_eAssignment_464_; lean_object* v_dAssignment_465_; lean_object* v_instanceTypedMVars_466_; lean_object* v_synthNormMemo_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_481_; 
v_depth_456_ = lean_ctor_get(v_mctx_447_, 0);
v_levelAssignDepth_457_ = lean_ctor_get(v_mctx_447_, 1);
v_lmvarCounter_458_ = lean_ctor_get(v_mctx_447_, 2);
v_mvarCounter_459_ = lean_ctor_get(v_mctx_447_, 3);
v_lDecls_460_ = lean_ctor_get(v_mctx_447_, 4);
v_decls_461_ = lean_ctor_get(v_mctx_447_, 5);
v_userNames_462_ = lean_ctor_get(v_mctx_447_, 6);
v_lAssignment_463_ = lean_ctor_get(v_mctx_447_, 7);
v_eAssignment_464_ = lean_ctor_get(v_mctx_447_, 8);
v_dAssignment_465_ = lean_ctor_get(v_mctx_447_, 9);
v_instanceTypedMVars_466_ = lean_ctor_get(v_mctx_447_, 10);
v_synthNormMemo_467_ = lean_ctor_get(v_mctx_447_, 11);
v_isSharedCheck_481_ = !lean_is_exclusive(v_mctx_447_);
if (v_isSharedCheck_481_ == 0)
{
v___x_469_ = v_mctx_447_;
v_isShared_470_ = v_isSharedCheck_481_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_synthNormMemo_467_);
lean_inc(v_instanceTypedMVars_466_);
lean_inc(v_dAssignment_465_);
lean_inc(v_eAssignment_464_);
lean_inc(v_lAssignment_463_);
lean_inc(v_userNames_462_);
lean_inc(v_decls_461_);
lean_inc(v_lDecls_460_);
lean_inc(v_mvarCounter_459_);
lean_inc(v_lmvarCounter_458_);
lean_inc(v_levelAssignDepth_457_);
lean_inc(v_depth_456_);
lean_dec(v_mctx_447_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_481_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_474_; 
v___x_471_ = lean_box(0);
v___x_472_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3___redArg(v_eAssignment_464_, v_mvarId_442_, v_val_443_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 8, v___x_472_);
v___x_474_ = v___x_469_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_depth_456_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v_levelAssignDepth_457_);
lean_ctor_set(v_reuseFailAlloc_480_, 2, v_lmvarCounter_458_);
lean_ctor_set(v_reuseFailAlloc_480_, 3, v_mvarCounter_459_);
lean_ctor_set(v_reuseFailAlloc_480_, 4, v_lDecls_460_);
lean_ctor_set(v_reuseFailAlloc_480_, 5, v_decls_461_);
lean_ctor_set(v_reuseFailAlloc_480_, 6, v_userNames_462_);
lean_ctor_set(v_reuseFailAlloc_480_, 7, v_lAssignment_463_);
lean_ctor_set(v_reuseFailAlloc_480_, 8, v___x_472_);
lean_ctor_set(v_reuseFailAlloc_480_, 9, v_dAssignment_465_);
lean_ctor_set(v_reuseFailAlloc_480_, 10, v_instanceTypedMVars_466_);
lean_ctor_set(v_reuseFailAlloc_480_, 11, v_synthNormMemo_467_);
v___x_474_ = v_reuseFailAlloc_480_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
lean_object* v___x_476_; 
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v___x_474_);
v___x_476_ = v___x_454_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v_cache_448_);
lean_ctor_set(v_reuseFailAlloc_479_, 2, v_zetaDeltaFVarIds_449_);
lean_ctor_set(v_reuseFailAlloc_479_, 3, v_postponed_450_);
lean_ctor_set(v_reuseFailAlloc_479_, 4, v_diag_451_);
lean_ctor_set(v_reuseFailAlloc_479_, 5, v_rewriteFires_452_);
v___x_476_ = v_reuseFailAlloc_479_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = lean_st_ref_put(v___y_444_, v___x_476_);
v___x_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_478_, 0, v___x_471_);
return v___x_478_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg___boxed(lean_object* v_mvarId_483_, lean_object* v_val_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg(v_mvarId_483_, v_val_484_, v___y_485_);
lean_dec(v___y_485_);
return v_res_487_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__2));
v___x_493_ = l_Lean_stringToMessageData(v___x_492_);
return v___x_493_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__4));
v___x_496_ = l_Lean_stringToMessageData(v___x_495_);
return v___x_496_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__6));
v___x_499_ = l_Lean_stringToMessageData(v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9(lean_object* v_fvarId_500_, lean_object* v_mvarId_501_, lean_object* v_as_502_, size_t v_i_503_, size_t v_stop_504_, lean_object* v_b_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
lean_object* v_a_512_; uint8_t v___x_516_; 
v___x_516_ = lean_usize_dec_eq(v_i_503_, v_stop_504_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; 
v___x_517_ = lean_array_uget(v_as_502_, v_i_503_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v___x_518_; 
v___x_518_ = lean_box(0);
v_a_512_ = v___x_518_;
goto v___jp_511_;
}
else
{
lean_object* v_val_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_556_; 
v_val_519_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_556_ == 0)
{
v___x_521_ = v___x_517_;
v_isShared_522_ = v_isSharedCheck_556_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_val_519_);
lean_dec(v___x_517_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_556_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_523_ = l_Lean_LocalDecl_fvarId(v_val_519_);
v___x_524_ = l_Lean_instBEqFVarId_beq(v___x_523_, v_fvarId_500_);
lean_dec(v___x_523_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; uint8_t v___x_526_; lean_object* v___x_527_; 
v___x_525_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1));
v___x_526_ = 1;
lean_inc(v_fvarId_500_);
lean_inc(v_val_519_);
v___x_527_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(v_val_519_, v_fvarId_500_, v___x_526_, v___y_507_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; uint8_t v___x_529_; 
v_a_528_ = lean_ctor_get(v___x_527_, 0);
lean_inc(v_a_528_);
lean_dec_ref_known(v___x_527_, 1);
v___x_529_ = lean_unbox(v_a_528_);
lean_dec(v_a_528_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; 
lean_del_object(v___x_521_);
lean_dec(v_val_519_);
v___x_530_ = lean_box(0);
v_a_512_ = v___x_530_;
goto v___jp_511_;
}
else
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_531_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3);
v___x_532_ = l_Lean_LocalDecl_toExpr(v_val_519_);
v___x_533_ = l_Lean_MessageData_ofExpr(v___x_532_);
v___x_534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_531_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
v___x_535_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5);
v___x_536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_536_, 0, v___x_534_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
lean_inc(v_fvarId_500_);
v___x_537_ = l_Lean_mkFVar(v_fvarId_500_);
v___x_538_ = l_Lean_MessageData_ofExpr(v___x_537_);
v___x_539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_536_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7);
v___x_541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_539_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v___x_541_);
v___x_543_ = v___x_521_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_546_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
lean_object* v___x_544_; 
lean_inc(v_mvarId_501_);
v___x_544_ = l_Lean_Meta_throwTacticEx___redArg(v___x_525_, v_mvarId_501_, v___x_543_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_544_, 1);
v_a_512_ = v_a_545_;
goto v___jp_511_;
}
else
{
lean_dec(v_mvarId_501_);
lean_dec(v_fvarId_500_);
return v___x_544_;
}
}
}
}
else
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_554_; 
lean_del_object(v___x_521_);
lean_dec(v_val_519_);
lean_dec(v_mvarId_501_);
lean_dec(v_fvarId_500_);
v_a_547_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_554_ == 0)
{
v___x_549_ = v___x_527_;
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_527_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_a_547_);
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
lean_object* v___x_555_; 
lean_del_object(v___x_521_);
lean_dec(v_val_519_);
v___x_555_ = lean_box(0);
v_a_512_ = v___x_555_;
goto v___jp_511_;
}
}
}
}
else
{
lean_object* v___x_557_; 
lean_dec(v_mvarId_501_);
lean_dec(v_fvarId_500_);
v___x_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_557_, 0, v_b_505_);
return v___x_557_;
}
v___jp_511_:
{
size_t v___x_513_; size_t v___x_514_; 
v___x_513_ = ((size_t)1ULL);
v___x_514_ = lean_usize_add(v_i_503_, v___x_513_);
v_i_503_ = v___x_514_;
v_b_505_ = v_a_512_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___boxed(lean_object* v_fvarId_558_, lean_object* v_mvarId_559_, lean_object* v_as_560_, lean_object* v_i_561_, lean_object* v_stop_562_, lean_object* v_b_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
size_t v_i_boxed_569_; size_t v_stop_boxed_570_; lean_object* v_res_571_; 
v_i_boxed_569_ = lean_unbox_usize(v_i_561_);
lean_dec(v_i_561_);
v_stop_boxed_570_ = lean_unbox_usize(v_stop_562_);
lean_dec(v_stop_562_);
v_res_571_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9(v_fvarId_558_, v_mvarId_559_, v_as_560_, v_i_boxed_569_, v_stop_boxed_570_, v_b_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec_ref(v_as_560_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(lean_object* v_fvarId_572_, lean_object* v_mvarId_573_, lean_object* v_as_574_, size_t v_i_575_, size_t v_stop_576_, lean_object* v_b_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
lean_object* v_a_584_; uint8_t v___x_588_; 
v___x_588_ = lean_usize_dec_eq(v_i_575_, v_stop_576_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; 
v___x_589_ = lean_array_uget(v_as_574_, v_i_575_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v___x_590_; 
v___x_590_ = lean_box(0);
v_a_584_ = v___x_590_;
goto v___jp_583_;
}
else
{
lean_object* v_val_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_628_; 
v_val_591_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_628_ == 0)
{
v___x_593_ = v___x_589_;
v_isShared_594_ = v_isSharedCheck_628_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_val_591_);
lean_dec(v___x_589_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_628_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; uint8_t v___x_596_; 
v___x_595_ = l_Lean_LocalDecl_fvarId(v_val_591_);
v___x_596_ = l_Lean_instBEqFVarId_beq(v___x_595_, v_fvarId_572_);
lean_dec(v___x_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; uint8_t v___x_598_; lean_object* v___x_599_; 
v___x_597_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1));
v___x_598_ = 1;
lean_inc(v_fvarId_572_);
lean_inc(v_val_591_);
v___x_599_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(v_val_591_, v_fvarId_572_, v___x_598_, v___y_579_);
if (lean_obj_tag(v___x_599_) == 0)
{
lean_object* v_a_600_; uint8_t v___x_601_; 
v_a_600_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_a_600_);
lean_dec_ref_known(v___x_599_, 1);
v___x_601_ = lean_unbox(v_a_600_);
lean_dec(v_a_600_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; 
lean_del_object(v___x_593_);
lean_dec(v_val_591_);
v___x_602_ = lean_box(0);
v_a_584_ = v___x_602_;
goto v___jp_583_;
}
else
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_615_; 
v___x_603_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3);
v___x_604_ = l_Lean_LocalDecl_toExpr(v_val_591_);
v___x_605_ = l_Lean_MessageData_ofExpr(v___x_604_);
v___x_606_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_603_);
lean_ctor_set(v___x_606_, 1, v___x_605_);
v___x_607_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5);
v___x_608_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_606_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
lean_inc(v_fvarId_572_);
v___x_609_ = l_Lean_mkFVar(v_fvarId_572_);
v___x_610_ = l_Lean_MessageData_ofExpr(v___x_609_);
v___x_611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_608_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7);
v___x_613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_611_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v___x_613_);
v___x_615_ = v___x_593_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_613_);
v___x_615_ = v_reuseFailAlloc_618_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
lean_object* v___x_616_; 
lean_inc(v_mvarId_573_);
v___x_616_ = l_Lean_Meta_throwTacticEx___redArg(v___x_597_, v_mvarId_573_, v___x_615_, v___y_578_, v___y_579_, v___y_580_, v___y_581_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_a_617_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_a_617_);
lean_dec_ref_known(v___x_616_, 1);
v_a_584_ = v_a_617_;
goto v___jp_583_;
}
else
{
lean_dec(v_mvarId_573_);
lean_dec(v_fvarId_572_);
return v___x_616_;
}
}
}
}
else
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
lean_del_object(v___x_593_);
lean_dec(v_val_591_);
lean_dec(v_mvarId_573_);
lean_dec(v_fvarId_572_);
v_a_619_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v___x_599_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_599_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
}
else
{
lean_object* v___x_627_; 
lean_del_object(v___x_593_);
lean_dec(v_val_591_);
v___x_627_ = lean_box(0);
v_a_584_ = v___x_627_;
goto v___jp_583_;
}
}
}
}
else
{
lean_object* v___x_629_; 
lean_dec(v_mvarId_573_);
lean_dec(v_fvarId_572_);
v___x_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_629_, 0, v_b_577_);
return v___x_629_;
}
v___jp_583_:
{
size_t v___x_585_; size_t v___x_586_; lean_object* v___x_587_; 
v___x_585_ = ((size_t)1ULL);
v___x_586_ = lean_usize_add(v_i_575_, v___x_585_);
v___x_587_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9(v_fvarId_572_, v_mvarId_573_, v_as_574_, v___x_586_, v_stop_576_, v_a_584_, v___y_578_, v___y_579_, v___y_580_, v___y_581_);
return v___x_587_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5___boxed(lean_object* v_fvarId_630_, lean_object* v_mvarId_631_, lean_object* v_as_632_, lean_object* v_i_633_, lean_object* v_stop_634_, lean_object* v_b_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
size_t v_i_boxed_641_; size_t v_stop_boxed_642_; lean_object* v_res_643_; 
v_i_boxed_641_ = lean_unbox_usize(v_i_633_);
lean_dec(v_i_633_);
v_stop_boxed_642_ = lean_unbox_usize(v_stop_634_);
lean_dec(v_stop_634_);
v_res_643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_630_, v_mvarId_631_, v_as_632_, v_i_boxed_641_, v_stop_boxed_642_, v_b_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v___y_637_);
lean_dec_ref(v___y_636_);
lean_dec_ref(v_as_632_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6(lean_object* v_fvarId_644_, lean_object* v_mvarId_645_, lean_object* v_x_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_){
_start:
{
if (lean_obj_tag(v_x_646_) == 0)
{
lean_object* v_cs_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_666_; 
v_cs_652_ = lean_ctor_get(v_x_646_, 0);
v_isSharedCheck_666_ = !lean_is_exclusive(v_x_646_);
if (v_isSharedCheck_666_ == 0)
{
v___x_654_ = v_x_646_;
v_isShared_655_ = v_isSharedCheck_666_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_cs_652_);
lean_dec(v_x_646_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_666_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; uint8_t v___x_659_; 
v___x_656_ = lean_unsigned_to_nat(0u);
v___x_657_ = lean_array_get_size(v_cs_652_);
v___x_658_ = lean_box(0);
v___x_659_ = lean_nat_dec_lt(v___x_656_, v___x_657_);
if (v___x_659_ == 0)
{
lean_object* v___x_661_; 
lean_dec_ref(v_cs_652_);
lean_dec(v_mvarId_645_);
lean_dec(v_fvarId_644_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 0, v___x_658_);
v___x_661_ = v___x_654_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_658_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
else
{
size_t v___x_663_; size_t v___x_664_; lean_object* v___x_665_; 
lean_del_object(v___x_654_);
v___x_663_ = ((size_t)0ULL);
v___x_664_ = lean_usize_of_nat(v___x_657_);
v___x_665_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(v_fvarId_644_, v_mvarId_645_, v_cs_652_, v___x_663_, v___x_664_, v___x_658_, v___y_647_, v___y_648_, v___y_649_, v___y_650_);
lean_dec_ref(v_cs_652_);
return v___x_665_;
}
}
}
else
{
lean_object* v_vs_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_681_; 
v_vs_667_ = lean_ctor_get(v_x_646_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v_x_646_);
if (v_isSharedCheck_681_ == 0)
{
v___x_669_ = v_x_646_;
v_isShared_670_ = v_isSharedCheck_681_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_vs_667_);
lean_dec(v_x_646_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_681_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_671_ = lean_unsigned_to_nat(0u);
v___x_672_ = lean_array_get_size(v_vs_667_);
v___x_673_ = lean_box(0);
v___x_674_ = lean_nat_dec_lt(v___x_671_, v___x_672_);
if (v___x_674_ == 0)
{
lean_object* v___x_676_; 
lean_dec_ref(v_vs_667_);
lean_dec(v_mvarId_645_);
lean_dec(v_fvarId_644_);
if (v_isShared_670_ == 0)
{
lean_ctor_set_tag(v___x_669_, 0);
lean_ctor_set(v___x_669_, 0, v___x_673_);
v___x_676_ = v___x_669_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_673_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
else
{
size_t v___x_678_; size_t v___x_679_; lean_object* v___x_680_; 
lean_del_object(v___x_669_);
v___x_678_ = ((size_t)0ULL);
v___x_679_ = lean_usize_of_nat(v___x_672_);
v___x_680_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_644_, v_mvarId_645_, v_vs_667_, v___x_678_, v___x_679_, v___x_673_, v___y_647_, v___y_648_, v___y_649_, v___y_650_);
lean_dec_ref(v_vs_667_);
return v___x_680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(lean_object* v_fvarId_682_, lean_object* v_mvarId_683_, lean_object* v_as_684_, size_t v_i_685_, size_t v_stop_686_, lean_object* v_b_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
uint8_t v___x_693_; 
v___x_693_ = lean_usize_dec_eq(v_i_685_, v_stop_686_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_array_uget_borrowed(v_as_684_, v_i_685_);
lean_inc(v___x_694_);
lean_inc(v_mvarId_683_);
lean_inc(v_fvarId_682_);
v___x_695_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6(v_fvarId_682_, v_mvarId_683_, v___x_694_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_object* v_a_696_; size_t v___x_697_; size_t v___x_698_; 
v_a_696_ = lean_ctor_get(v___x_695_, 0);
lean_inc(v_a_696_);
lean_dec_ref_known(v___x_695_, 1);
v___x_697_ = ((size_t)1ULL);
v___x_698_ = lean_usize_add(v_i_685_, v___x_697_);
v_i_685_ = v___x_698_;
v_b_687_ = v_a_696_;
goto _start;
}
else
{
lean_dec(v_mvarId_683_);
lean_dec(v_fvarId_682_);
return v___x_695_;
}
}
else
{
lean_object* v___x_700_; 
lean_dec(v_mvarId_683_);
lean_dec(v_fvarId_682_);
v___x_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_700_, 0, v_b_687_);
return v___x_700_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7___boxed(lean_object* v_fvarId_701_, lean_object* v_mvarId_702_, lean_object* v_as_703_, lean_object* v_i_704_, lean_object* v_stop_705_, lean_object* v_b_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
size_t v_i_boxed_712_; size_t v_stop_boxed_713_; lean_object* v_res_714_; 
v_i_boxed_712_ = lean_unbox_usize(v_i_704_);
lean_dec(v_i_704_);
v_stop_boxed_713_ = lean_unbox_usize(v_stop_705_);
lean_dec(v_stop_705_);
v_res_714_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(v_fvarId_701_, v_mvarId_702_, v_as_703_, v_i_boxed_712_, v_stop_boxed_713_, v_b_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
lean_dec_ref(v_as_703_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6___boxed(lean_object* v_fvarId_715_, lean_object* v_mvarId_716_, lean_object* v_x_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6(v_fvarId_715_, v_mvarId_716_, v_x_717_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_718_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6(lean_object* v_fvarId_724_, lean_object* v_mvarId_725_, lean_object* v_t_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_root_732_; lean_object* v_tail_733_; lean_object* v___x_734_; 
v_root_732_ = lean_ctor_get(v_t_726_, 0);
lean_inc_ref(v_root_732_);
v_tail_733_ = lean_ctor_get(v_t_726_, 1);
lean_inc_ref(v_tail_733_);
lean_dec_ref(v_t_726_);
lean_inc(v_mvarId_725_);
lean_inc(v_fvarId_724_);
v___x_734_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6(v_fvarId_724_, v_mvarId_725_, v_root_732_, v___y_727_, v___y_728_, v___y_729_, v___y_730_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_748_; 
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_748_ == 0)
{
lean_object* v_unused_749_; 
v_unused_749_ = lean_ctor_get(v___x_734_, 0);
lean_dec(v_unused_749_);
v___x_736_ = v___x_734_;
v_isShared_737_ = v_isSharedCheck_748_;
goto v_resetjp_735_;
}
else
{
lean_dec(v___x_734_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_748_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_738_ = lean_unsigned_to_nat(0u);
v___x_739_ = lean_array_get_size(v_tail_733_);
v___x_740_ = lean_box(0);
v___x_741_ = lean_nat_dec_lt(v___x_738_, v___x_739_);
if (v___x_741_ == 0)
{
lean_object* v___x_743_; 
lean_dec_ref(v_tail_733_);
lean_dec(v_mvarId_725_);
lean_dec(v_fvarId_724_);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v___x_740_);
v___x_743_ = v___x_736_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_740_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
else
{
size_t v___x_745_; size_t v___x_746_; lean_object* v___x_747_; 
lean_del_object(v___x_736_);
v___x_745_ = ((size_t)0ULL);
v___x_746_ = lean_usize_of_nat(v___x_739_);
v___x_747_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_724_, v_mvarId_725_, v_tail_733_, v___x_745_, v___x_746_, v___x_740_, v___y_727_, v___y_728_, v___y_729_, v___y_730_);
lean_dec_ref(v_tail_733_);
return v___x_747_;
}
}
}
else
{
lean_dec_ref(v_tail_733_);
lean_dec(v_mvarId_725_);
lean_dec(v_fvarId_724_);
return v___x_734_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6___boxed(lean_object* v_fvarId_750_, lean_object* v_mvarId_751_, lean_object* v_t_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6(v_fvarId_750_, v_mvarId_751_, v_t_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
lean_dec(v___y_756_);
lean_dec_ref(v___y_755_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
return v_res_758_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4(lean_object* v_fvarId_760_, lean_object* v_mvarId_761_, lean_object* v_x_762_, size_t v_x_763_, size_t v_x_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
if (lean_obj_tag(v_x_762_) == 0)
{
lean_object* v_cs_770_; lean_object* v___x_771_; size_t v___x_772_; lean_object* v_j_773_; lean_object* v___x_774_; size_t v___x_775_; size_t v___x_776_; size_t v___x_777_; size_t v___x_778_; size_t v___x_779_; size_t v___x_780_; lean_object* v___x_781_; 
v_cs_770_ = lean_ctor_get(v_x_762_, 0);
lean_inc_ref(v_cs_770_);
lean_dec_ref_known(v_x_762_, 1);
v___x_771_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0);
v___x_772_ = lean_usize_shift_right(v_x_763_, v_x_764_);
v_j_773_ = lean_usize_to_nat(v___x_772_);
v___x_774_ = lean_array_get_borrowed(v___x_771_, v_cs_770_, v_j_773_);
v___x_775_ = ((size_t)1ULL);
v___x_776_ = lean_usize_shift_left(v___x_775_, v_x_764_);
v___x_777_ = lean_usize_sub(v___x_776_, v___x_775_);
v___x_778_ = lean_usize_land(v_x_763_, v___x_777_);
v___x_779_ = ((size_t)5ULL);
v___x_780_ = lean_usize_sub(v_x_764_, v___x_779_);
lean_inc(v___x_774_);
lean_inc(v_mvarId_761_);
lean_inc(v_fvarId_760_);
v___x_781_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4(v_fvarId_760_, v_mvarId_761_, v___x_774_, v___x_778_, v___x_780_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_796_; 
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_796_ == 0)
{
lean_object* v_unused_797_; 
v_unused_797_ = lean_ctor_get(v___x_781_, 0);
lean_dec(v_unused_797_);
v___x_783_ = v___x_781_;
v_isShared_784_ = v_isSharedCheck_796_;
goto v_resetjp_782_;
}
else
{
lean_dec(v___x_781_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_796_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_785_ = lean_unsigned_to_nat(1u);
v___x_786_ = lean_nat_add(v_j_773_, v___x_785_);
lean_dec(v_j_773_);
v___x_787_ = lean_array_get_size(v_cs_770_);
v___x_788_ = lean_box(0);
v___x_789_ = lean_nat_dec_lt(v___x_786_, v___x_787_);
if (v___x_789_ == 0)
{
lean_object* v___x_791_; 
lean_dec(v___x_786_);
lean_dec_ref(v_cs_770_);
lean_dec(v_mvarId_761_);
lean_dec(v_fvarId_760_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 0, v___x_788_);
v___x_791_ = v___x_783_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_788_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
else
{
size_t v___x_793_; size_t v___x_794_; lean_object* v___x_795_; 
lean_del_object(v___x_783_);
v___x_793_ = lean_usize_of_nat(v___x_786_);
lean_dec(v___x_786_);
v___x_794_ = lean_usize_of_nat(v___x_787_);
v___x_795_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(v_fvarId_760_, v_mvarId_761_, v_cs_770_, v___x_793_, v___x_794_, v___x_788_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec_ref(v_cs_770_);
return v___x_795_;
}
}
}
else
{
lean_dec(v_j_773_);
lean_dec_ref(v_cs_770_);
lean_dec(v_mvarId_761_);
lean_dec(v_fvarId_760_);
return v___x_781_;
}
}
else
{
lean_object* v_vs_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_812_; 
v_vs_798_ = lean_ctor_get(v_x_762_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v_x_762_);
if (v_isSharedCheck_812_ == 0)
{
v___x_800_ = v_x_762_;
v_isShared_801_ = v_isSharedCheck_812_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_vs_798_);
lean_dec(v_x_762_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_812_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_802_ = lean_usize_to_nat(v_x_763_);
v___x_803_ = lean_array_get_size(v_vs_798_);
v___x_804_ = lean_box(0);
v___x_805_ = lean_nat_dec_lt(v___x_802_, v___x_803_);
if (v___x_805_ == 0)
{
lean_object* v___x_807_; 
lean_dec(v___x_802_);
lean_dec_ref(v_vs_798_);
lean_dec(v_mvarId_761_);
lean_dec(v_fvarId_760_);
if (v_isShared_801_ == 0)
{
lean_ctor_set_tag(v___x_800_, 0);
lean_ctor_set(v___x_800_, 0, v___x_804_);
v___x_807_ = v___x_800_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_804_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
else
{
size_t v___x_809_; size_t v___x_810_; lean_object* v___x_811_; 
lean_del_object(v___x_800_);
v___x_809_ = lean_usize_of_nat(v___x_802_);
lean_dec(v___x_802_);
v___x_810_ = lean_usize_of_nat(v___x_803_);
v___x_811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_760_, v_mvarId_761_, v_vs_798_, v___x_809_, v___x_810_, v___x_804_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec_ref(v_vs_798_);
return v___x_811_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___boxed(lean_object* v_fvarId_813_, lean_object* v_mvarId_814_, lean_object* v_x_815_, lean_object* v_x_816_, lean_object* v_x_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
size_t v_x_8590__boxed_823_; size_t v_x_8591__boxed_824_; lean_object* v_res_825_; 
v_x_8590__boxed_823_ = lean_unbox_usize(v_x_816_);
lean_dec(v_x_816_);
v_x_8591__boxed_824_ = lean_unbox_usize(v_x_817_);
lean_dec(v_x_817_);
v_res_825_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4(v_fvarId_813_, v_mvarId_814_, v_x_815_, v_x_8590__boxed_823_, v_x_8591__boxed_824_, v___y_818_, v___y_819_, v___y_820_, v___y_821_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1(lean_object* v_fvarId_826_, lean_object* v_mvarId_827_, lean_object* v_t_828_, lean_object* v_start_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v___x_835_; uint8_t v___x_836_; 
v___x_835_ = lean_unsigned_to_nat(0u);
v___x_836_ = lean_nat_dec_eq(v_start_829_, v___x_835_);
if (v___x_836_ == 0)
{
lean_object* v_root_837_; lean_object* v_tail_838_; size_t v_shift_839_; lean_object* v_tailOff_840_; uint8_t v___x_841_; 
v_root_837_ = lean_ctor_get(v_t_828_, 0);
lean_inc_ref(v_root_837_);
v_tail_838_ = lean_ctor_get(v_t_828_, 1);
lean_inc_ref(v_tail_838_);
v_shift_839_ = lean_ctor_get_usize(v_t_828_, 4);
v_tailOff_840_ = lean_ctor_get(v_t_828_, 3);
lean_inc(v_tailOff_840_);
lean_dec_ref(v_t_828_);
v___x_841_ = lean_nat_dec_le(v_tailOff_840_, v_start_829_);
if (v___x_841_ == 0)
{
size_t v___x_842_; lean_object* v___x_843_; 
lean_dec(v_tailOff_840_);
v___x_842_ = lean_usize_of_nat(v_start_829_);
lean_inc(v_mvarId_827_);
lean_inc(v_fvarId_826_);
v___x_843_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4(v_fvarId_826_, v_mvarId_827_, v_root_837_, v___x_842_, v_shift_839_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_843_) == 0)
{
lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_856_; 
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_856_ == 0)
{
lean_object* v_unused_857_; 
v_unused_857_ = lean_ctor_get(v___x_843_, 0);
lean_dec(v_unused_857_);
v___x_845_ = v___x_843_;
v_isShared_846_ = v_isSharedCheck_856_;
goto v_resetjp_844_;
}
else
{
lean_dec(v___x_843_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_856_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_847_; lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_847_ = lean_array_get_size(v_tail_838_);
v___x_848_ = lean_box(0);
v___x_849_ = lean_nat_dec_lt(v___x_835_, v___x_847_);
if (v___x_849_ == 0)
{
lean_object* v___x_851_; 
lean_dec_ref(v_tail_838_);
lean_dec(v_mvarId_827_);
lean_dec(v_fvarId_826_);
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_848_);
v___x_851_ = v___x_845_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v___x_848_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
else
{
size_t v___x_853_; size_t v___x_854_; lean_object* v___x_855_; 
lean_del_object(v___x_845_);
v___x_853_ = ((size_t)0ULL);
v___x_854_ = lean_usize_of_nat(v___x_847_);
v___x_855_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_826_, v_mvarId_827_, v_tail_838_, v___x_853_, v___x_854_, v___x_848_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
lean_dec_ref(v_tail_838_);
return v___x_855_;
}
}
}
else
{
lean_dec_ref(v_tail_838_);
lean_dec(v_mvarId_827_);
lean_dec(v_fvarId_826_);
return v___x_843_;
}
}
else
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
lean_dec_ref(v_root_837_);
v___x_858_ = lean_nat_sub(v_start_829_, v_tailOff_840_);
lean_dec(v_tailOff_840_);
v___x_859_ = lean_array_get_size(v_tail_838_);
v___x_860_ = lean_box(0);
v___x_861_ = lean_nat_dec_lt(v___x_858_, v___x_859_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; 
lean_dec(v___x_858_);
lean_dec_ref(v_tail_838_);
lean_dec(v_mvarId_827_);
lean_dec(v_fvarId_826_);
v___x_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_860_);
return v___x_862_;
}
else
{
size_t v___x_863_; size_t v___x_864_; lean_object* v___x_865_; 
v___x_863_ = lean_usize_of_nat(v___x_858_);
lean_dec(v___x_858_);
v___x_864_ = lean_usize_of_nat(v___x_859_);
v___x_865_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_826_, v_mvarId_827_, v_tail_838_, v___x_863_, v___x_864_, v___x_860_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
lean_dec_ref(v_tail_838_);
return v___x_865_;
}
}
}
else
{
lean_object* v___x_866_; 
v___x_866_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6(v_fvarId_826_, v_mvarId_827_, v_t_828_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
return v___x_866_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1___boxed(lean_object* v_fvarId_867_, lean_object* v_mvarId_868_, lean_object* v_t_869_, lean_object* v_start_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1(v_fvarId_867_, v_mvarId_868_, v_t_869_, v_start_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v_start_870_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1(lean_object* v_fvarId_877_, lean_object* v_mvarId_878_, lean_object* v_lctx_879_, lean_object* v_start_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
lean_object* v_decls_886_; lean_object* v___x_887_; 
v_decls_886_ = lean_ctor_get(v_lctx_879_, 1);
lean_inc_ref(v_decls_886_);
lean_dec_ref(v_lctx_879_);
v___x_887_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1(v_fvarId_877_, v_mvarId_878_, v_decls_886_, v_start_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1___boxed(lean_object* v_fvarId_888_, lean_object* v_mvarId_889_, lean_object* v_lctx_890_, lean_object* v_start_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1(v_fvarId_888_, v_mvarId_889_, v_lctx_890_, v_start_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v_start_891_);
return v_res_897_;
}
}
static lean_object* _init_l_Lean_MVarId_clear___lam__1___closed__1(void){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_899_ = ((lean_object*)(l_Lean_MVarId_clear___lam__1___closed__0));
v___x_900_ = l_Lean_stringToMessageData(v___x_899_);
return v___x_900_;
}
}
static lean_object* _init_l_Lean_MVarId_clear___lam__1___closed__3(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = ((lean_object*)(l_Lean_MVarId_clear___lam__1___closed__2));
v___x_903_ = l_Lean_stringToMessageData(v___x_902_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__1(lean_object* v_mvarId_904_, lean_object* v___x_905_, lean_object* v_fvarId_906_, lean_object* v___f_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v___y_916_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___x_944_; 
lean_inc(v___x_905_);
lean_inc(v_mvarId_904_);
v___x_944_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_904_, v___x_905_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_lctx_945_; lean_object* v___y_947_; lean_object* v___y_948_; lean_object* v___y_949_; lean_object* v___y_950_; lean_object* v___y_951_; lean_object* v___y_952_; lean_object* v___y_953_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; uint8_t v___x_1020_; 
lean_dec_ref_known(v___x_944_, 1);
v_lctx_945_ = lean_ctor_get(v___y_908_, 2);
lean_inc_ref(v_lctx_945_);
v___x_1020_ = l_Lean_LocalContext_contains(v_lctx_945_, v_fvarId_906_);
if (v___x_1020_ == 0)
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1021_ = lean_obj_once(&l_Lean_MVarId_clear___lam__1___closed__3, &l_Lean_MVarId_clear___lam__1___closed__3_once, _init_l_Lean_MVarId_clear___lam__1___closed__3);
lean_inc(v_fvarId_906_);
v___x_1022_ = l_Lean_mkFVar(v_fvarId_906_);
v___x_1023_ = l_Lean_MessageData_ofExpr(v___x_1022_);
v___x_1024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1021_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v___x_1025_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7);
v___x_1026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
lean_inc(v_mvarId_904_);
lean_inc(v___x_905_);
v___x_1028_ = l_Lean_Meta_throwTacticEx___redArg(v___x_905_, v_mvarId_904_, v___x_1027_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_dec_ref_known(v___x_1028_, 1);
v___y_960_ = v___y_908_;
v___y_961_ = v___y_909_;
v___y_962_ = v___y_910_;
v___y_963_ = v___y_911_;
goto v___jp_959_;
}
else
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1036_; 
lean_dec_ref(v_lctx_945_);
lean_dec_ref(v___y_908_);
lean_dec_ref(v___f_907_);
lean_dec(v_fvarId_906_);
lean_dec(v___x_905_);
lean_dec(v_mvarId_904_);
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1031_ = v___x_1028_;
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1028_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1034_; 
if (v_isShared_1032_ == 0)
{
v___x_1034_ = v___x_1031_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v_a_1029_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
else
{
v___y_960_ = v___y_908_;
v___y_961_ = v___y_909_;
v___y_962_ = v___y_910_;
v___y_963_ = v___y_911_;
goto v___jp_959_;
}
v___jp_946_:
{
lean_object* v_localInstances_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v_localInstances_954_ = lean_ctor_get(v___y_950_, 3);
v___x_955_ = l_Lean_LocalContext_erase(v_lctx_945_, v_fvarId_906_);
lean_dec(v_fvarId_906_);
lean_inc(v___y_949_);
v___x_956_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_907_, v_localInstances_954_, v___y_949_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_inc_ref(v_localInstances_954_);
v___y_914_ = v___y_947_;
v___y_915_ = v___y_953_;
v___y_916_ = v___y_951_;
v___y_917_ = v___y_950_;
v___y_918_ = v___x_955_;
v___y_919_ = v___y_952_;
v___y_920_ = v___y_949_;
v___y_921_ = v___y_948_;
v___y_922_ = v_localInstances_954_;
goto v___jp_913_;
}
else
{
lean_object* v_val_957_; lean_object* v___x_958_; 
v_val_957_ = lean_ctor_get(v___x_956_, 0);
lean_inc(v_val_957_);
lean_dec_ref_known(v___x_956_, 1);
lean_inc_ref(v_localInstances_954_);
v___x_958_ = l_Array_eraseIdx___redArg(v_localInstances_954_, v_val_957_);
v___y_914_ = v___y_947_;
v___y_915_ = v___y_953_;
v___y_916_ = v___y_951_;
v___y_917_ = v___y_950_;
v___y_918_ = v___x_955_;
v___y_919_ = v___y_952_;
v___y_920_ = v___y_949_;
v___y_921_ = v___y_948_;
v___y_922_ = v___x_958_;
goto v___jp_913_;
}
}
v___jp_959_:
{
lean_object* v___x_964_; 
lean_inc(v_mvarId_904_);
v___x_964_ = l_Lean_MVarId_getTag(v_mvarId_904_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_964_, 1);
v___x_966_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_lctx_945_);
lean_inc(v_mvarId_904_);
lean_inc(v_fvarId_906_);
v___x_967_ = l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1(v_fvarId_906_, v_mvarId_904_, v_lctx_945_, v___x_966_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v___x_968_; 
lean_dec_ref_known(v___x_967_, 1);
lean_inc(v_mvarId_904_);
v___x_968_ = l_Lean_MVarId_getDecl(v_mvarId_904_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v_type_970_; lean_object* v___x_971_; lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_995_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 1);
v_type_970_ = lean_ctor_get(v_a_969_, 2);
lean_inc_ref_n(v_type_970_, 2);
lean_dec(v_a_969_);
lean_inc(v_fvarId_906_);
v___x_971_ = l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg(v_type_970_, v_fvarId_906_, v___y_961_);
v_a_972_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_995_ == 0)
{
v___x_974_ = v___x_971_;
v_isShared_975_ = v_isSharedCheck_995_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_971_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_995_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
uint8_t v___x_976_; 
v___x_976_ = lean_unbox(v_a_972_);
lean_dec(v_a_972_);
if (v___x_976_ == 0)
{
lean_del_object(v___x_974_);
lean_dec(v___x_905_);
v___y_947_ = v_a_965_;
v___y_948_ = v_type_970_;
v___y_949_ = v___x_966_;
v___y_950_ = v___y_960_;
v___y_951_ = v___y_961_;
v___y_952_ = v___y_962_;
v___y_953_ = v___y_963_;
goto v___jp_946_;
}
else
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_977_ = lean_obj_once(&l_Lean_MVarId_clear___lam__1___closed__1, &l_Lean_MVarId_clear___lam__1___closed__1_once, _init_l_Lean_MVarId_clear___lam__1___closed__1);
lean_inc(v_fvarId_906_);
v___x_978_ = l_Lean_mkFVar(v_fvarId_906_);
v___x_979_ = l_Lean_MessageData_ofExpr(v___x_978_);
v___x_980_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_977_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7);
v___x_982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_980_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
if (v_isShared_975_ == 0)
{
lean_ctor_set_tag(v___x_974_, 1);
lean_ctor_set(v___x_974_, 0, v___x_982_);
v___x_984_ = v___x_974_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_982_);
v___x_984_ = v_reuseFailAlloc_994_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_985_; 
lean_inc(v_mvarId_904_);
v___x_985_ = l_Lean_Meta_throwTacticEx___redArg(v___x_905_, v_mvarId_904_, v___x_984_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_dec_ref_known(v___x_985_, 1);
v___y_947_ = v_a_965_;
v___y_948_ = v_type_970_;
v___y_949_ = v___x_966_;
v___y_950_ = v___y_960_;
v___y_951_ = v___y_961_;
v___y_952_ = v___y_962_;
v___y_953_ = v___y_963_;
goto v___jp_946_;
}
else
{
lean_object* v_a_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_993_; 
lean_dec_ref(v_type_970_);
lean_dec(v_a_965_);
lean_dec_ref(v___y_960_);
lean_dec_ref(v_lctx_945_);
lean_dec_ref(v___f_907_);
lean_dec(v_fvarId_906_);
lean_dec(v_mvarId_904_);
v_a_986_ = lean_ctor_get(v___x_985_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_993_ == 0)
{
v___x_988_ = v___x_985_;
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_a_986_);
lean_dec(v___x_985_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_a_986_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
lean_dec(v_a_965_);
lean_dec_ref(v___y_960_);
lean_dec_ref(v_lctx_945_);
lean_dec_ref(v___f_907_);
lean_dec(v_fvarId_906_);
lean_dec(v___x_905_);
lean_dec(v_mvarId_904_);
v_a_996_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_968_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_968_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec(v_a_965_);
lean_dec_ref(v___y_960_);
lean_dec_ref(v_lctx_945_);
lean_dec_ref(v___f_907_);
lean_dec(v_fvarId_906_);
lean_dec(v___x_905_);
lean_dec(v_mvarId_904_);
v_a_1004_ = lean_ctor_get(v___x_967_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_967_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_967_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_967_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1019_; 
lean_dec_ref(v___y_960_);
lean_dec_ref(v_lctx_945_);
lean_dec_ref(v___f_907_);
lean_dec(v_fvarId_906_);
lean_dec(v___x_905_);
lean_dec(v_mvarId_904_);
v_a_1012_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1014_ = v___x_964_;
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v___x_964_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1017_; 
if (v_isShared_1015_ == 0)
{
v___x_1017_ = v___x_1014_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1012_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
}
}
else
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
lean_dec_ref(v___y_908_);
lean_dec_ref(v___f_907_);
lean_dec(v_fvarId_906_);
lean_dec(v___x_905_);
lean_dec(v_mvarId_904_);
v_a_1037_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_944_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_944_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
v___jp_913_:
{
uint8_t v___x_923_; lean_object* v___x_924_; 
v___x_923_ = 2;
v___x_924_ = l_Lean_Meta_mkFreshExprMVarAt(v___y_918_, v___y_922_, v___y_921_, v___x_923_, v___y_914_, v___y_920_, v___y_917_, v___y_916_, v___y_919_, v___y_915_);
lean_dec_ref(v___y_917_);
if (lean_obj_tag(v___x_924_) == 0)
{
lean_object* v_a_925_; lean_object* v___x_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_934_; 
v_a_925_ = lean_ctor_get(v___x_924_, 0);
lean_inc_n(v_a_925_, 2);
lean_dec_ref_known(v___x_924_, 1);
v___x_926_ = l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg(v_mvarId_904_, v_a_925_, v___y_916_);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_934_ == 0)
{
lean_object* v_unused_935_; 
v_unused_935_ = lean_ctor_get(v___x_926_, 0);
lean_dec(v_unused_935_);
v___x_928_ = v___x_926_;
v_isShared_929_ = v_isSharedCheck_934_;
goto v_resetjp_927_;
}
else
{
lean_dec(v___x_926_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_934_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_930_; lean_object* v___x_932_; 
v___x_930_ = l_Lean_Expr_mvarId_x21(v_a_925_);
lean_dec(v_a_925_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v___x_930_);
v___x_932_ = v___x_928_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_930_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
lean_dec(v_mvarId_904_);
v_a_936_ = lean_ctor_get(v___x_924_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_924_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_924_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__1___boxed(lean_object* v_mvarId_1045_, lean_object* v___x_1046_, lean_object* v_fvarId_1047_, lean_object* v___f_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lean_MVarId_clear___lam__1(v_mvarId_1045_, v___x_1046_, v_fvarId_1047_, v___f_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec(v___y_1050_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clear(lean_object* v_mvarId_1055_, lean_object* v_fvarId_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v___f_1062_; lean_object* v___x_1063_; lean_object* v___f_1064_; lean_object* v___x_1065_; 
lean_inc(v_fvarId_1056_);
v___f_1062_ = lean_alloc_closure((void*)(l_Lean_MVarId_clear___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1062_, 0, v_fvarId_1056_);
v___x_1063_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1));
lean_inc(v_mvarId_1055_);
v___f_1064_ = lean_alloc_closure((void*)(l_Lean_MVarId_clear___lam__1___boxed), 9, 4);
lean_closure_set(v___f_1064_, 0, v_mvarId_1055_);
lean_closure_set(v___f_1064_, 1, v___x_1063_);
lean_closure_set(v___f_1064_, 2, v_fvarId_1056_);
lean_closure_set(v___f_1064_, 3, v___f_1062_);
v___x_1065_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(v_mvarId_1055_, v___f_1064_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___boxed(lean_object* v_mvarId_1066_, lean_object* v_fvarId_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lean_MVarId_clear(v_mvarId_1066_, v_fvarId_1067_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_);
lean_dec(v_a_1071_);
lean_dec_ref(v_a_1070_);
lean_dec(v_a_1069_);
lean_dec_ref(v_a_1068_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2(lean_object* v_mvarId_1074_, lean_object* v_val_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg(v_mvarId_1074_, v_val_1075_, v___y_1077_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___boxed(lean_object* v_mvarId_1082_, lean_object* v_val_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2(v_mvarId_1082_, v_val_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3(lean_object* v_00_u03b2_1090_, lean_object* v_x_1091_, lean_object* v_x_1092_, lean_object* v_x_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3___redArg(v_x_1091_, v_x_1092_, v_x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9(lean_object* v_00_u03b2_1095_, lean_object* v_x_1096_, size_t v_x_1097_, size_t v_x_1098_, lean_object* v_x_1099_, lean_object* v_x_1100_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(v_x_1096_, v_x_1097_, v_x_1098_, v_x_1099_, v_x_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___boxed(lean_object* v_00_u03b2_1102_, lean_object* v_x_1103_, lean_object* v_x_1104_, lean_object* v_x_1105_, lean_object* v_x_1106_, lean_object* v_x_1107_){
_start:
{
size_t v_x_9140__boxed_1108_; size_t v_x_9141__boxed_1109_; lean_object* v_res_1110_; 
v_x_9140__boxed_1108_ = lean_unbox_usize(v_x_1104_);
lean_dec(v_x_1104_);
v_x_9141__boxed_1109_ = lean_unbox_usize(v_x_1105_);
lean_dec(v_x_1105_);
v_res_1110_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9(v_00_u03b2_1102_, v_x_1103_, v_x_9140__boxed_1108_, v_x_9141__boxed_1109_, v_x_1106_, v_x_1107_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13(lean_object* v_00_u03b2_1111_, lean_object* v_n_1112_, lean_object* v_k_1113_, lean_object* v_v_1114_){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13___redArg(v_n_1112_, v_k_1113_, v_v_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14(lean_object* v_00_u03b2_1116_, size_t v_depth_1117_, lean_object* v_keys_1118_, lean_object* v_vals_1119_, lean_object* v_heq_1120_, lean_object* v_i_1121_, lean_object* v_entries_1122_){
_start:
{
lean_object* v___x_1123_; 
v___x_1123_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg(v_depth_1117_, v_keys_1118_, v_vals_1119_, v_i_1121_, v_entries_1122_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___boxed(lean_object* v_00_u03b2_1124_, lean_object* v_depth_1125_, lean_object* v_keys_1126_, lean_object* v_vals_1127_, lean_object* v_heq_1128_, lean_object* v_i_1129_, lean_object* v_entries_1130_){
_start:
{
size_t v_depth_boxed_1131_; lean_object* v_res_1132_; 
v_depth_boxed_1131_ = lean_unbox_usize(v_depth_1125_);
lean_dec(v_depth_1125_);
v_res_1132_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14(v_00_u03b2_1124_, v_depth_boxed_1131_, v_keys_1126_, v_vals_1127_, v_heq_1128_, v_i_1129_, v_entries_1130_);
lean_dec_ref(v_vals_1127_);
lean_dec_ref(v_keys_1126_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14(lean_object* v_00_u03b2_1133_, lean_object* v_x_1134_, lean_object* v_x_1135_, lean_object* v_x_1136_, lean_object* v_x_1137_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14___redArg(v_x_1134_, v_x_1135_, v_x_1136_, v_x_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClear(lean_object* v_mvarId_1139_, lean_object* v_fvarId_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = l_Lean_Meta_saveState___redArg(v_a_1142_, v_a_1144_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1148_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref_known(v___x_1146_, 1);
lean_inc(v_mvarId_1139_);
v___x_1148_ = l_Lean_MVarId_clear(v_mvarId_1139_, v_fvarId_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_dec(v_a_1147_);
lean_dec(v_mvarId_1139_);
return v___x_1148_;
}
else
{
lean_object* v_a_1149_; uint8_t v___x_1150_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
v___x_1150_ = l_Lean_Exception_isInterrupt(v_a_1149_);
if (v___x_1150_ == 0)
{
uint8_t v___x_1151_; 
lean_inc(v_a_1149_);
v___x_1151_ = l_Lean_Exception_isRuntime(v_a_1149_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; 
lean_dec_ref_known(v___x_1148_, 1);
v___x_1152_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1147_, v_a_1142_, v_a_1144_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1159_ == 0)
{
lean_object* v_unused_1160_; 
v_unused_1160_ = lean_ctor_get(v___x_1152_, 0);
lean_dec(v_unused_1160_);
v___x_1154_ = v___x_1152_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_dec(v___x_1152_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v_mvarId_1139_);
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_mvarId_1139_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1168_; 
lean_dec(v_mvarId_1139_);
v_a_1161_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1163_ = v___x_1152_;
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1152_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1166_; 
if (v_isShared_1164_ == 0)
{
v___x_1166_ = v___x_1163_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_a_1161_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
}
}
else
{
lean_dec(v_a_1147_);
lean_dec(v_mvarId_1139_);
return v___x_1148_;
}
}
else
{
lean_dec(v_a_1147_);
lean_dec(v_mvarId_1139_);
return v___x_1148_;
}
}
}
else
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
lean_dec(v_fvarId_1140_);
lean_dec(v_mvarId_1139_);
v_a_1169_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1146_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1146_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_a_1169_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClear___boxed(lean_object* v_mvarId_1177_, lean_object* v_fvarId_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Lean_MVarId_tryClear(v_mvarId_1177_, v_fvarId_1178_, v_a_1179_, v_a_1180_, v_a_1181_, v_a_1182_);
lean_dec(v_a_1182_);
lean_dec_ref(v_a_1181_);
lean_dec(v_a_1180_);
lean_dec_ref(v_a_1179_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0(lean_object* v_as_1185_, size_t v_i_1186_, size_t v_stop_1187_, lean_object* v_b_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
uint8_t v___x_1194_; 
v___x_1194_ = lean_usize_dec_eq(v_i_1186_, v_stop_1187_);
if (v___x_1194_ == 0)
{
size_t v___x_1195_; size_t v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1195_ = ((size_t)1ULL);
v___x_1196_ = lean_usize_sub(v_i_1186_, v___x_1195_);
v___x_1197_ = lean_array_uget_borrowed(v_as_1185_, v___x_1196_);
lean_inc(v___x_1197_);
v___x_1198_ = l_Lean_MVarId_tryClear(v_b_1188_, v___x_1197_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_a_1199_; 
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_a_1199_);
lean_dec_ref_known(v___x_1198_, 1);
v_i_1186_ = v___x_1196_;
v_b_1188_ = v_a_1199_;
goto _start;
}
else
{
return v___x_1198_;
}
}
else
{
lean_object* v___x_1201_; 
v___x_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1201_, 0, v_b_1188_);
return v___x_1201_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0___boxed(lean_object* v_as_1202_, lean_object* v_i_1203_, lean_object* v_stop_1204_, lean_object* v_b_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
size_t v_i_boxed_1211_; size_t v_stop_boxed_1212_; lean_object* v_res_1213_; 
v_i_boxed_1211_ = lean_unbox_usize(v_i_1203_);
lean_dec(v_i_1203_);
v_stop_boxed_1212_ = lean_unbox_usize(v_stop_1204_);
lean_dec(v_stop_1204_);
v_res_1213_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0(v_as_1202_, v_i_boxed_1211_, v_stop_boxed_1212_, v_b_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec_ref(v_as_1202_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany(lean_object* v_mvarId_1214_, lean_object* v_fvarIds_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; uint8_t v___x_1223_; 
v___x_1221_ = lean_array_get_size(v_fvarIds_1215_);
v___x_1222_ = lean_unsigned_to_nat(0u);
v___x_1223_ = lean_nat_dec_lt(v___x_1222_, v___x_1221_);
if (v___x_1223_ == 0)
{
lean_object* v___x_1224_; 
v___x_1224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1224_, 0, v_mvarId_1214_);
return v___x_1224_;
}
else
{
size_t v___x_1225_; size_t v___x_1226_; lean_object* v___x_1227_; 
v___x_1225_ = lean_usize_of_nat(v___x_1221_);
v___x_1226_ = ((size_t)0ULL);
v___x_1227_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0(v_fvarIds_1215_, v___x_1225_, v___x_1226_, v_mvarId_1214_, v_a_1216_, v_a_1217_, v_a_1218_, v_a_1219_);
return v___x_1227_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany___boxed(lean_object* v_mvarId_1228_, lean_object* v_fvarIds_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Lean_MVarId_tryClearMany(v_mvarId_1228_, v_fvarIds_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_);
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1232_);
lean_dec(v_a_1231_);
lean_dec_ref(v_a_1230_);
lean_dec_ref(v_fvarIds_1229_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0(lean_object* v_as_1236_, size_t v_i_1237_, size_t v_stop_1238_, lean_object* v_b_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
uint8_t v___x_1245_; 
v___x_1245_ = lean_usize_dec_eq(v_i_1237_, v_stop_1238_);
if (v___x_1245_ == 0)
{
lean_object* v_fst_1246_; lean_object* v_snd_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1272_; 
v_fst_1246_ = lean_ctor_get(v_b_1239_, 0);
v_snd_1247_ = lean_ctor_get(v_b_1239_, 1);
v_isSharedCheck_1272_ = !lean_is_exclusive(v_b_1239_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1249_ = v_b_1239_;
v_isShared_1250_ = v_isSharedCheck_1272_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_snd_1247_);
lean_inc(v_fst_1246_);
lean_dec(v_b_1239_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1272_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
size_t v___x_1251_; size_t v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1251_ = ((size_t)1ULL);
v___x_1252_ = lean_usize_sub(v_i_1237_, v___x_1251_);
v___x_1253_ = lean_array_uget_borrowed(v_as_1236_, v___x_1252_);
lean_inc(v___x_1253_);
lean_inc(v_fst_1246_);
v___x_1254_ = l_Lean_MVarId_tryClear(v_fst_1246_, v___x_1253_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
if (lean_obj_tag(v___x_1254_) == 0)
{
lean_object* v_a_1255_; lean_object* v___y_1257_; uint8_t v___x_1262_; 
v_a_1255_ = lean_ctor_get(v___x_1254_, 0);
lean_inc(v_a_1255_);
lean_dec_ref_known(v___x_1254_, 1);
v___x_1262_ = l_Lean_instBEqMVarId_beq(v_fst_1246_, v_a_1255_);
lean_dec(v_fst_1246_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; 
lean_inc(v___x_1253_);
v___x_1263_ = lean_array_push(v_snd_1247_, v___x_1253_);
v___y_1257_ = v___x_1263_;
goto v___jp_1256_;
}
else
{
v___y_1257_ = v_snd_1247_;
goto v___jp_1256_;
}
v___jp_1256_:
{
lean_object* v___x_1259_; 
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 1, v___y_1257_);
lean_ctor_set(v___x_1249_, 0, v_a_1255_);
v___x_1259_ = v___x_1249_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1255_);
lean_ctor_set(v_reuseFailAlloc_1261_, 1, v___y_1257_);
v___x_1259_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
v_i_1237_ = v___x_1252_;
v_b_1239_ = v___x_1259_;
goto _start;
}
}
}
else
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_del_object(v___x_1249_);
lean_dec(v_snd_1247_);
lean_dec(v_fst_1246_);
v_a_1264_ = lean_ctor_get(v___x_1254_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1254_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1254_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
else
{
lean_object* v___x_1273_; 
v___x_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1273_, 0, v_b_1239_);
return v___x_1273_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0___boxed(lean_object* v_as_1274_, lean_object* v_i_1275_, lean_object* v_stop_1276_, lean_object* v_b_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
size_t v_i_boxed_1283_; size_t v_stop_boxed_1284_; lean_object* v_res_1285_; 
v_i_boxed_1283_ = lean_unbox_usize(v_i_1275_);
lean_dec(v_i_1275_);
v_stop_boxed_1284_ = lean_unbox_usize(v_stop_1276_);
lean_dec(v_stop_1276_);
v_res_1285_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0(v_as_1274_, v_i_boxed_1283_, v_stop_boxed_1284_, v_b_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec_ref(v_as_1274_);
return v_res_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___lam__0(lean_object* v_fvarIds_1286_, lean_object* v_goal_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
lean_object* v_lctx_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; uint8_t v___x_1299_; 
v_lctx_1293_ = lean_ctor_get(v___y_1288_, 2);
v___x_1294_ = l_Lean_LocalContext_sortFVarsByContextOrder(v_lctx_1293_, v_fvarIds_1286_);
v___x_1295_ = lean_array_get_size(v___x_1294_);
v___x_1296_ = lean_mk_empty_array_with_capacity(v___x_1295_);
v___x_1297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1297_, 0, v_goal_1287_);
lean_ctor_set(v___x_1297_, 1, v___x_1296_);
v___x_1298_ = lean_unsigned_to_nat(0u);
v___x_1299_ = lean_nat_dec_lt(v___x_1298_, v___x_1295_);
if (v___x_1299_ == 0)
{
lean_object* v___x_1300_; 
lean_dec_ref(v___x_1294_);
v___x_1300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1297_);
return v___x_1300_;
}
else
{
size_t v___x_1301_; size_t v___x_1302_; lean_object* v___x_1303_; 
v___x_1301_ = lean_usize_of_nat(v___x_1295_);
v___x_1302_ = ((size_t)0ULL);
v___x_1303_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0(v___x_1294_, v___x_1301_, v___x_1302_, v___x_1297_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_);
lean_dec_ref(v___x_1294_);
return v___x_1303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___lam__0___boxed(lean_object* v_fvarIds_1304_, lean_object* v_goal_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = l_Lean_MVarId_tryClearMany_x27___lam__0(v_fvarIds_1304_, v_goal_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27(lean_object* v_goal_1312_, lean_object* v_fvarIds_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_){
_start:
{
lean_object* v___f_1319_; lean_object* v___x_1320_; 
lean_inc(v_goal_1312_);
v___f_1319_ = lean_alloc_closure((void*)(l_Lean_MVarId_tryClearMany_x27___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1319_, 0, v_fvarIds_1313_);
lean_closure_set(v___f_1319_, 1, v_goal_1312_);
v___x_1320_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(v_goal_1312_, v___f_1319_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___boxed(lean_object* v_goal_1321_, lean_object* v_fvarIds_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Lean_MVarId_tryClearMany_x27(v_goal_1321_, v_fvarIds_1322_, v_a_1323_, v_a_1324_, v_a_1325_, v_a_1326_);
lean_dec(v_a_1326_);
lean_dec_ref(v_a_1325_);
lean_dec(v_a_1324_);
lean_dec_ref(v_a_1323_);
return v_res_1328_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Clear(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Clear(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* initialize_Init_Data_Order_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Clear(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Clear(builtin);
}
#ifdef __cplusplus
}
#endif
