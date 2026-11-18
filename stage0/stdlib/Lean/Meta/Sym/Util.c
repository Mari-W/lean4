// Lean compiler output
// Module: Lean.Meta.Sym.Util
// Imports: public import Lean.Meta.Sym.SymM public import Lean.Meta.Transform import Lean.Util.ForEachExpr public import Lean.Meta.Sym.AlphaShareBuilder
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
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object*);
extern lean_object* l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM;
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Level_isAlreadyNormalizedCheap(lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Level_normalize(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_ptrEqList___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLetDeclS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLetDeclS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLetDeclS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLetDeclS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_preprocessExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Meta.Sym.Util"};
static const lean_object* l_Lean_Meta_Sym_preprocessExpr___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_preprocessExpr___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_preprocessExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Meta.Sym.preprocessExpr"};
static const lean_object* l_Lean_Meta_Sym_preprocessExpr___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_preprocessExpr___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_preprocessExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 110, .m_capacity = 110, .m_length = 109, .m_data = "assertion violation: ( __do_lift._@.Lean.Meta.Sym.Util.949373316._hygCtx._hyg.9.0 ).enforceUnfoldReducible\n  "};
static const lean_object* l_Lean_Meta_Sym_preprocessExpr___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_preprocessExpr___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Sym_preprocessExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_preprocessExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_preprocessExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_preprocessExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_preprocessMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_preprocessMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "term is not in the maximally shared table"};
static const lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__1;
static const lean_string_object l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "] "};
static const lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_checkMaxShared___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_checkMaxShared___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_checkMaxShared___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_checkMaxShared___closed__0;
static lean_once_cell_t l_Lean_Expr_checkMaxShared___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_checkMaxShared___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_checkMaxShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_checkMaxShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_checkMaxShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_checkMaxShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_normalizeLevels_spec__0(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_normalizeLevels___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_normalizeLevels___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_normalizeLevels___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_normalizeLevels___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_normalizeLevels___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_normalizeLevels___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_normalizeLevels___closed__0_value;
static const lean_closure_object l_Lean_Meta_Sym_normalizeLevels___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_normalizeLevels___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_normalizeLevels___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_normalizeLevels___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___redArg___lam__0(lean_object* v_k_1_, lean_object* v_____do__lift_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_apply_1(v_k_1_, v_____do__lift_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___redArg___lam__1(lean_object* v___x_4_, lean_object* v_inst_5_, lean_object* v_toBind_6_, lean_object* v___f_7_, lean_object* v_x_8_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_9_ = l_Lean_Expr_fvarId_x21(v_x_8_);
v___x_10_ = l_Lean_Meta_Sym_Internal_mkFVarS___redArg(v___x_4_, v___x_9_);
v___x_11_ = lean_apply_2(v_inst_5_, lean_box(0), v___x_10_);
v___x_12_ = lean_apply_4(v_toBind_6_, lean_box(0), lean_box(0), v___x_11_, v___f_7_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___redArg___lam__1___boxed(lean_object* v___x_13_, lean_object* v_inst_14_, lean_object* v_toBind_15_, lean_object* v___f_16_, lean_object* v_x_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_Sym_withLocalDeclS___redArg___lam__1(v___x_13_, v_inst_14_, v_toBind_15_, v___f_16_, v_x_17_);
lean_dec_ref(v_x_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___redArg(lean_object* v_inst_19_, lean_object* v_inst_20_, lean_object* v_inst_21_, lean_object* v_name_22_, uint8_t v_bi_23_, lean_object* v_type_24_, lean_object* v_k_25_){
_start:
{
lean_object* v___x_26_; lean_object* v_toBind_27_; lean_object* v___f_28_; lean_object* v___f_29_; uint8_t v___x_30_; lean_object* v___x_31_; 
v___x_26_ = l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM;
v_toBind_27_ = lean_ctor_get(v_inst_19_, 1);
v___f_28_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_withLocalDeclS___redArg___lam__0), 2, 1);
lean_closure_set(v___f_28_, 0, v_k_25_);
lean_inc(v_toBind_27_);
v___f_29_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_withLocalDeclS___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_29_, 0, v___x_26_);
lean_closure_set(v___f_29_, 1, v_inst_21_);
lean_closure_set(v___f_29_, 2, v_toBind_27_);
lean_closure_set(v___f_29_, 3, v___f_28_);
v___x_30_ = 0;
v___x_31_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_20_, v_inst_19_, v_name_22_, v_bi_23_, v_type_24_, v___f_29_, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___redArg___boxed(lean_object* v_inst_32_, lean_object* v_inst_33_, lean_object* v_inst_34_, lean_object* v_name_35_, lean_object* v_bi_36_, lean_object* v_type_37_, lean_object* v_k_38_){
_start:
{
uint8_t v_bi_boxed_39_; lean_object* v_res_40_; 
v_bi_boxed_39_ = lean_unbox(v_bi_36_);
v_res_40_ = l_Lean_Meta_Sym_withLocalDeclS___redArg(v_inst_32_, v_inst_33_, v_inst_34_, v_name_35_, v_bi_boxed_39_, v_type_37_, v_k_38_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS(lean_object* v_n_41_, lean_object* v_00_u03b1_42_, lean_object* v_inst_43_, lean_object* v_inst_44_, lean_object* v_inst_45_, lean_object* v_name_46_, uint8_t v_bi_47_, lean_object* v_type_48_, lean_object* v_k_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Meta_Sym_withLocalDeclS___redArg(v_inst_43_, v_inst_44_, v_inst_45_, v_name_46_, v_bi_47_, v_type_48_, v_k_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___boxed(lean_object* v_n_51_, lean_object* v_00_u03b1_52_, lean_object* v_inst_53_, lean_object* v_inst_54_, lean_object* v_inst_55_, lean_object* v_name_56_, lean_object* v_bi_57_, lean_object* v_type_58_, lean_object* v_k_59_){
_start:
{
uint8_t v_bi_boxed_60_; lean_object* v_res_61_; 
v_bi_boxed_60_ = lean_unbox(v_bi_57_);
v_res_61_ = l_Lean_Meta_Sym_withLocalDeclS(v_n_51_, v_00_u03b1_52_, v_inst_53_, v_inst_54_, v_inst_55_, v_name_56_, v_bi_boxed_60_, v_type_58_, v_k_59_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLetDeclS___redArg(lean_object* v_inst_62_, lean_object* v_inst_63_, lean_object* v_inst_64_, lean_object* v_name_65_, lean_object* v_type_66_, lean_object* v_val_67_, lean_object* v_k_68_, uint8_t v_nondep_69_){
_start:
{
lean_object* v___x_70_; lean_object* v_toBind_71_; lean_object* v___f_72_; lean_object* v___f_73_; uint8_t v___x_74_; lean_object* v___x_75_; 
v___x_70_ = l_Lean_Meta_Sym_Internal_instMonadShareCommonSymM;
v_toBind_71_ = lean_ctor_get(v_inst_62_, 1);
v___f_72_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_withLocalDeclS___redArg___lam__0), 2, 1);
lean_closure_set(v___f_72_, 0, v_k_68_);
lean_inc(v_toBind_71_);
v___f_73_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_withLocalDeclS___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_73_, 0, v___x_70_);
lean_closure_set(v___f_73_, 1, v_inst_64_);
lean_closure_set(v___f_73_, 2, v_toBind_71_);
lean_closure_set(v___f_73_, 3, v___f_72_);
v___x_74_ = 0;
v___x_75_ = l_Lean_Meta_withLetDecl___redArg(v_inst_63_, v_inst_62_, v_name_65_, v_type_66_, v_val_67_, v___f_73_, v_nondep_69_, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLetDeclS___redArg___boxed(lean_object* v_inst_76_, lean_object* v_inst_77_, lean_object* v_inst_78_, lean_object* v_name_79_, lean_object* v_type_80_, lean_object* v_val_81_, lean_object* v_k_82_, lean_object* v_nondep_83_){
_start:
{
uint8_t v_nondep_boxed_84_; lean_object* v_res_85_; 
v_nondep_boxed_84_ = lean_unbox(v_nondep_83_);
v_res_85_ = l_Lean_Meta_Sym_withLetDeclS___redArg(v_inst_76_, v_inst_77_, v_inst_78_, v_name_79_, v_type_80_, v_val_81_, v_k_82_, v_nondep_boxed_84_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLetDeclS(lean_object* v_n_86_, lean_object* v_00_u03b1_87_, lean_object* v_inst_88_, lean_object* v_inst_89_, lean_object* v_inst_90_, lean_object* v_name_91_, lean_object* v_type_92_, lean_object* v_val_93_, lean_object* v_k_94_, uint8_t v_nondep_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = l_Lean_Meta_Sym_withLetDeclS___redArg(v_inst_88_, v_inst_89_, v_inst_90_, v_name_91_, v_type_92_, v_val_93_, v_k_94_, v_nondep_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLetDeclS___boxed(lean_object* v_n_97_, lean_object* v_00_u03b1_98_, lean_object* v_inst_99_, lean_object* v_inst_100_, lean_object* v_inst_101_, lean_object* v_name_102_, lean_object* v_type_103_, lean_object* v_val_104_, lean_object* v_k_105_, lean_object* v_nondep_106_){
_start:
{
uint8_t v_nondep_boxed_107_; lean_object* v_res_108_; 
v_nondep_boxed_107_ = lean_unbox(v_nondep_106_);
v_res_108_ = l_Lean_Meta_Sym_withLetDeclS(v_n_97_, v_00_u03b1_98_, v_inst_99_, v_inst_100_, v_inst_101_, v_name_102_, v_type_103_, v_val_104_, v_k_105_, v_nondep_boxed_107_);
return v_res_108_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0___closed__0(void){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l_Lean_Meta_Sym_instInhabitedSymM___redArg();
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0(lean_object* v_msg_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v___x_118_; lean_object* v___x_452__overap_119_; lean_object* v___x_120_; 
v___x_118_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0___closed__0, &l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0___closed__0);
v___x_452__overap_119_ = lean_panic_fn_borrowed(v___x_118_, v_msg_110_);
lean_inc(v___y_116_);
lean_inc_ref(v___y_115_);
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
lean_inc(v___y_112_);
lean_inc_ref(v___y_111_);
v___x_120_ = lean_apply_7(v___x_452__overap_119_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, lean_box(0));
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0___boxed(lean_object* v_msg_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0(v_msg_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_, v___y_127_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1___redArg(lean_object* v_e_130_, lean_object* v___y_131_){
_start:
{
uint8_t v___x_133_; 
v___x_133_ = l_Lean_Expr_hasMVar(v_e_130_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; 
v___x_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_134_, 0, v_e_130_);
return v___x_134_;
}
else
{
lean_object* v___x_135_; lean_object* v_mctx_136_; lean_object* v___x_137_; lean_object* v_fst_138_; lean_object* v_snd_139_; lean_object* v___x_140_; lean_object* v_cache_141_; lean_object* v_zetaDeltaFVarIds_142_; lean_object* v_postponed_143_; lean_object* v_diag_144_; lean_object* v_rewriteFires_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_154_; 
v___x_135_ = lean_st_ref_get(v___y_131_);
v_mctx_136_ = lean_ctor_get(v___x_135_, 0);
lean_inc_ref(v_mctx_136_);
lean_dec(v___x_135_);
v___x_137_ = l_Lean_instantiateMVarsCore(v_mctx_136_, v_e_130_);
v_fst_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_fst_138_);
v_snd_139_ = lean_ctor_get(v___x_137_, 1);
lean_inc(v_snd_139_);
lean_dec_ref(v___x_137_);
v___x_140_ = lean_st_ref_take(v___y_131_);
v_cache_141_ = lean_ctor_get(v___x_140_, 1);
v_zetaDeltaFVarIds_142_ = lean_ctor_get(v___x_140_, 2);
v_postponed_143_ = lean_ctor_get(v___x_140_, 3);
v_diag_144_ = lean_ctor_get(v___x_140_, 4);
v_rewriteFires_145_ = lean_ctor_get(v___x_140_, 5);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_154_ == 0)
{
lean_object* v_unused_155_; 
v_unused_155_ = lean_ctor_get(v___x_140_, 0);
lean_dec(v_unused_155_);
v___x_147_ = v___x_140_;
v_isShared_148_ = v_isSharedCheck_154_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_rewriteFires_145_);
lean_inc(v_diag_144_);
lean_inc(v_postponed_143_);
lean_inc(v_zetaDeltaFVarIds_142_);
lean_inc(v_cache_141_);
lean_dec(v___x_140_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_154_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v_snd_139_);
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_snd_139_);
lean_ctor_set(v_reuseFailAlloc_153_, 1, v_cache_141_);
lean_ctor_set(v_reuseFailAlloc_153_, 2, v_zetaDeltaFVarIds_142_);
lean_ctor_set(v_reuseFailAlloc_153_, 3, v_postponed_143_);
lean_ctor_set(v_reuseFailAlloc_153_, 4, v_diag_144_);
lean_ctor_set(v_reuseFailAlloc_153_, 5, v_rewriteFires_145_);
v___x_150_ = v_reuseFailAlloc_153_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_st_ref_put(v___y_131_, v___x_150_);
v___x_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_152_, 0, v_fst_138_);
return v___x_152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1___redArg___boxed(lean_object* v_e_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1___redArg(v_e_156_, v___y_157_);
lean_dec(v___y_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1(lean_object* v_e_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1___redArg(v_e_160_, v___y_164_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1___boxed(lean_object* v_e_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1(v_e_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
return v_res_177_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_preprocessExpr___closed__3(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_181_ = ((lean_object*)(l_Lean_Meta_Sym_preprocessExpr___closed__2));
v___x_182_ = lean_unsigned_to_nat(2u);
v___x_183_ = lean_unsigned_to_nat(36u);
v___x_184_ = ((lean_object*)(l_Lean_Meta_Sym_preprocessExpr___closed__1));
v___x_185_ = ((lean_object*)(l_Lean_Meta_Sym_preprocessExpr___closed__0));
v___x_186_ = l_mkPanicMessageWithDecl(v___x_185_, v___x_184_, v___x_183_, v___x_182_, v___x_181_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_preprocessExpr(lean_object* v_e_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_188_);
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v_a_196_; uint8_t v_enforceUnfoldReducible_197_; 
v_a_196_ = lean_ctor_get(v___x_195_, 0);
lean_inc(v_a_196_);
lean_dec_ref_known(v___x_195_, 1);
v_enforceUnfoldReducible_197_ = lean_ctor_get_uint8(v_a_196_, 1);
lean_dec(v_a_196_);
if (v_enforceUnfoldReducible_197_ == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
lean_dec_ref(v_e_187_);
v___x_198_ = lean_obj_once(&l_Lean_Meta_Sym_preprocessExpr___closed__3, &l_Lean_Meta_Sym_preprocessExpr___closed__3_once, _init_l_Lean_Meta_Sym_preprocessExpr___closed__3);
v___x_199_ = l_panic___at___00Lean_Meta_Sym_preprocessExpr_spec__0(v___x_198_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_);
return v___x_199_;
}
else
{
lean_object* v___x_200_; lean_object* v_a_201_; lean_object* v___x_202_; 
v___x_200_ = l_Lean_instantiateMVars___at___00Lean_Meta_Sym_preprocessExpr_spec__1___redArg(v_e_187_, v_a_191_);
v_a_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc(v_a_201_);
lean_dec_ref(v___x_200_);
v___x_202_ = l_Lean_Meta_Sym_shareCommon(v_a_201_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_);
return v___x_202_;
}
}
else
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_210_; 
lean_dec_ref(v_e_187_);
v_a_203_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_210_ == 0)
{
v___x_205_ = v___x_195_;
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_195_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_206_ == 0)
{
v___x_208_ = v___x_205_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_a_203_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_preprocessExpr___boxed(lean_object* v_e_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Meta_Sym_preprocessExpr(v_e_211_, v_a_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_, v_a_217_);
lean_dec(v_a_217_);
lean_dec_ref(v_a_216_);
lean_dec(v_a_215_);
lean_dec_ref(v_a_214_);
lean_dec(v_a_213_);
lean_dec_ref(v_a_212_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_220_, lean_object* v_x_221_, lean_object* v_x_222_, lean_object* v_x_223_){
_start:
{
lean_object* v_ks_224_; lean_object* v_vs_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_249_; 
v_ks_224_ = lean_ctor_get(v_x_220_, 0);
v_vs_225_ = lean_ctor_get(v_x_220_, 1);
v_isSharedCheck_249_ = !lean_is_exclusive(v_x_220_);
if (v_isSharedCheck_249_ == 0)
{
v___x_227_ = v_x_220_;
v_isShared_228_ = v_isSharedCheck_249_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_vs_225_);
lean_inc(v_ks_224_);
lean_dec(v_x_220_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_249_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_229_ = lean_array_get_size(v_ks_224_);
v___x_230_ = lean_nat_dec_lt(v_x_221_, v___x_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
lean_dec(v_x_221_);
v___x_231_ = lean_array_push(v_ks_224_, v_x_222_);
v___x_232_ = lean_array_push(v_vs_225_, v_x_223_);
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 1, v___x_232_);
lean_ctor_set(v___x_227_, 0, v___x_231_);
v___x_234_ = v___x_227_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_231_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v___x_232_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
else
{
lean_object* v_k_x27_236_; uint8_t v___x_237_; 
v_k_x27_236_ = lean_array_fget_borrowed(v_ks_224_, v_x_221_);
v___x_237_ = l_Lean_instBEqFVarId_beq(v_x_222_, v_k_x27_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_239_; 
if (v_isShared_228_ == 0)
{
v___x_239_ = v___x_227_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_ks_224_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v_vs_225_);
v___x_239_ = v_reuseFailAlloc_243_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = lean_unsigned_to_nat(1u);
v___x_241_ = lean_nat_add(v_x_221_, v___x_240_);
lean_dec(v_x_221_);
v_x_220_ = v___x_239_;
v_x_221_ = v___x_241_;
goto _start;
}
}
else
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_247_; 
v___x_244_ = lean_array_fset(v_ks_224_, v_x_221_, v_x_222_);
v___x_245_ = lean_array_fset(v_vs_225_, v_x_221_, v_x_223_);
lean_dec(v_x_221_);
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 1, v___x_245_);
lean_ctor_set(v___x_227_, 0, v___x_244_);
v___x_247_ = v___x_227_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v___x_245_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1___redArg(lean_object* v_n_250_, lean_object* v_k_251_, lean_object* v_v_252_){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1_spec__3___redArg(v_n_250_, v___x_253_, v_k_251_, v_v_252_);
return v___x_254_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg(lean_object* v_x_256_, size_t v_x_257_, size_t v_x_258_, lean_object* v_x_259_, lean_object* v_x_260_){
_start:
{
if (lean_obj_tag(v_x_256_) == 0)
{
lean_object* v_es_261_; size_t v___x_262_; size_t v___x_263_; lean_object* v_j_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
v_es_261_ = lean_ctor_get(v_x_256_, 0);
v___x_262_ = ((size_t)31ULL);
v___x_263_ = lean_usize_land(v_x_257_, v___x_262_);
v_j_264_ = lean_usize_to_nat(v___x_263_);
v___x_265_ = lean_array_get_size(v_es_261_);
v___x_266_ = lean_nat_dec_lt(v_j_264_, v___x_265_);
if (v___x_266_ == 0)
{
lean_dec(v_j_264_);
lean_dec(v_x_260_);
lean_dec(v_x_259_);
return v_x_256_;
}
else
{
lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_305_; 
lean_inc_ref(v_es_261_);
v_isSharedCheck_305_ = !lean_is_exclusive(v_x_256_);
if (v_isSharedCheck_305_ == 0)
{
lean_object* v_unused_306_; 
v_unused_306_ = lean_ctor_get(v_x_256_, 0);
lean_dec(v_unused_306_);
v___x_268_ = v_x_256_;
v_isShared_269_ = v_isSharedCheck_305_;
goto v_resetjp_267_;
}
else
{
lean_dec(v_x_256_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_305_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v_v_270_; lean_object* v___x_271_; lean_object* v_xs_x27_272_; lean_object* v___y_274_; 
v_v_270_ = lean_array_fget(v_es_261_, v_j_264_);
v___x_271_ = lean_box(0);
v_xs_x27_272_ = lean_array_fset(v_es_261_, v_j_264_, v___x_271_);
switch(lean_obj_tag(v_v_270_))
{
case 0:
{
lean_object* v_key_279_; lean_object* v_val_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_290_; 
v_key_279_ = lean_ctor_get(v_v_270_, 0);
v_val_280_ = lean_ctor_get(v_v_270_, 1);
v_isSharedCheck_290_ = !lean_is_exclusive(v_v_270_);
if (v_isSharedCheck_290_ == 0)
{
v___x_282_ = v_v_270_;
v_isShared_283_ = v_isSharedCheck_290_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_val_280_);
lean_inc(v_key_279_);
lean_dec(v_v_270_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_290_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
uint8_t v___x_284_; 
v___x_284_ = l_Lean_instBEqFVarId_beq(v_x_259_, v_key_279_);
if (v___x_284_ == 0)
{
lean_object* v___x_285_; lean_object* v___x_286_; 
lean_del_object(v___x_282_);
v___x_285_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_279_, v_val_280_, v_x_259_, v_x_260_);
v___x_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
v___y_274_ = v___x_286_;
goto v___jp_273_;
}
else
{
lean_object* v___x_288_; 
lean_dec(v_val_280_);
lean_dec(v_key_279_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 1, v_x_260_);
lean_ctor_set(v___x_282_, 0, v_x_259_);
v___x_288_ = v___x_282_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_x_259_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_x_260_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
v___y_274_ = v___x_288_;
goto v___jp_273_;
}
}
}
}
case 1:
{
lean_object* v_node_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_303_; 
v_node_291_ = lean_ctor_get(v_v_270_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v_v_270_);
if (v_isSharedCheck_303_ == 0)
{
v___x_293_ = v_v_270_;
v_isShared_294_ = v_isSharedCheck_303_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_node_291_);
lean_dec(v_v_270_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_303_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
size_t v___x_295_; size_t v___x_296_; size_t v___x_297_; size_t v___x_298_; lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_295_ = ((size_t)5ULL);
v___x_296_ = lean_usize_shift_right(v_x_257_, v___x_295_);
v___x_297_ = ((size_t)1ULL);
v___x_298_ = lean_usize_add(v_x_258_, v___x_297_);
v___x_299_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg(v_node_291_, v___x_296_, v___x_298_, v_x_259_, v_x_260_);
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 0, v___x_299_);
v___x_301_ = v___x_293_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v___x_299_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
v___y_274_ = v___x_301_;
goto v___jp_273_;
}
}
}
default: 
{
lean_object* v___x_304_; 
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v_x_259_);
lean_ctor_set(v___x_304_, 1, v_x_260_);
v___y_274_ = v___x_304_;
goto v___jp_273_;
}
}
v___jp_273_:
{
lean_object* v___x_275_; lean_object* v___x_277_; 
v___x_275_ = lean_array_fset(v_xs_x27_272_, v_j_264_, v___y_274_);
lean_dec(v_j_264_);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 0, v___x_275_);
v___x_277_ = v___x_268_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_275_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
}
else
{
lean_object* v_ks_307_; lean_object* v_vs_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_326_; 
v_ks_307_ = lean_ctor_get(v_x_256_, 0);
v_vs_308_ = lean_ctor_get(v_x_256_, 1);
v_isSharedCheck_326_ = !lean_is_exclusive(v_x_256_);
if (v_isSharedCheck_326_ == 0)
{
v___x_310_ = v_x_256_;
v_isShared_311_ = v_isSharedCheck_326_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_vs_308_);
lean_inc(v_ks_307_);
lean_dec(v_x_256_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_326_;
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
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_ks_307_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_vs_308_);
v___x_313_ = v_reuseFailAlloc_325_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
lean_object* v_newNode_314_; size_t v___x_315_; uint8_t v___x_316_; 
v_newNode_314_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1___redArg(v___x_313_, v_x_259_, v_x_260_);
v___x_315_ = ((size_t)7ULL);
v___x_316_ = lean_usize_dec_le(v___x_315_, v_x_258_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; lean_object* v___x_318_; uint8_t v___x_319_; 
v___x_317_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_314_);
v___x_318_ = lean_unsigned_to_nat(4u);
v___x_319_ = lean_nat_dec_lt(v___x_317_, v___x_318_);
lean_dec(v___x_317_);
if (v___x_319_ == 0)
{
lean_object* v_ks_320_; lean_object* v_vs_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_ks_320_ = lean_ctor_get(v_newNode_314_, 0);
lean_inc_ref(v_ks_320_);
v_vs_321_ = lean_ctor_get(v_newNode_314_, 1);
lean_inc_ref(v_vs_321_);
lean_dec_ref(v_newNode_314_);
v___x_322_ = lean_unsigned_to_nat(0u);
v___x_323_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg___closed__0);
v___x_324_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2___redArg(v_x_258_, v_ks_320_, v_vs_321_, v___x_322_, v___x_323_);
lean_dec_ref(v_vs_321_);
lean_dec_ref(v_ks_320_);
return v___x_324_;
}
else
{
return v_newNode_314_;
}
}
else
{
return v_newNode_314_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2___redArg(size_t v_depth_327_, lean_object* v_keys_328_, lean_object* v_vals_329_, lean_object* v_i_330_, lean_object* v_entries_331_){
_start:
{
lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_332_ = lean_array_get_size(v_keys_328_);
v___x_333_ = lean_nat_dec_lt(v_i_330_, v___x_332_);
if (v___x_333_ == 0)
{
lean_dec(v_i_330_);
return v_entries_331_;
}
else
{
lean_object* v_k_334_; lean_object* v_v_335_; uint64_t v___x_336_; size_t v_h_337_; size_t v___x_338_; lean_object* v___x_339_; size_t v___x_340_; size_t v___x_341_; size_t v___x_342_; size_t v_h_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_k_334_ = lean_array_fget_borrowed(v_keys_328_, v_i_330_);
v_v_335_ = lean_array_fget_borrowed(v_vals_329_, v_i_330_);
v___x_336_ = l_Lean_instHashableFVarId_hash(v_k_334_);
v_h_337_ = lean_uint64_to_usize(v___x_336_);
v___x_338_ = ((size_t)5ULL);
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = ((size_t)1ULL);
v___x_341_ = lean_usize_sub(v_depth_327_, v___x_340_);
v___x_342_ = lean_usize_mul(v___x_338_, v___x_341_);
v_h_343_ = lean_usize_shift_right(v_h_337_, v___x_342_);
v___x_344_ = lean_nat_add(v_i_330_, v___x_339_);
lean_dec(v_i_330_);
lean_inc(v_v_335_);
lean_inc(v_k_334_);
v___x_345_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg(v_entries_331_, v_h_343_, v_depth_327_, v_k_334_, v_v_335_);
v_i_330_ = v___x_344_;
v_entries_331_ = v___x_345_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_347_, lean_object* v_keys_348_, lean_object* v_vals_349_, lean_object* v_i_350_, lean_object* v_entries_351_){
_start:
{
size_t v_depth_boxed_352_; lean_object* v_res_353_; 
v_depth_boxed_352_ = lean_unbox_usize(v_depth_347_);
lean_dec(v_depth_347_);
v_res_353_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2___redArg(v_depth_boxed_352_, v_keys_348_, v_vals_349_, v_i_350_, v_entries_351_);
lean_dec_ref(v_vals_349_);
lean_dec_ref(v_keys_348_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg___boxed(lean_object* v_x_354_, lean_object* v_x_355_, lean_object* v_x_356_, lean_object* v_x_357_, lean_object* v_x_358_){
_start:
{
size_t v_x_9203__boxed_359_; size_t v_x_9204__boxed_360_; lean_object* v_res_361_; 
v_x_9203__boxed_359_ = lean_unbox_usize(v_x_355_);
lean_dec(v_x_355_);
v_x_9204__boxed_360_ = lean_unbox_usize(v_x_356_);
lean_dec(v_x_356_);
v_res_361_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg(v_x_354_, v_x_9203__boxed_359_, v_x_9204__boxed_360_, v_x_357_, v_x_358_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0___redArg(lean_object* v_x_362_, lean_object* v_x_363_, lean_object* v_x_364_){
_start:
{
uint64_t v___x_365_; size_t v___x_366_; size_t v___x_367_; lean_object* v___x_368_; 
v___x_365_ = l_Lean_instHashableFVarId_hash(v_x_363_);
v___x_366_ = lean_uint64_to_usize(v___x_365_);
v___x_367_ = ((size_t)1ULL);
v___x_368_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg(v_x_362_, v___x_366_, v___x_367_, v_x_363_, v_x_364_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6_spec__8(lean_object* v_as_369_, size_t v_sz_370_, size_t v_i_371_, lean_object* v_b_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
uint8_t v___x_380_; 
v___x_380_ = lean_usize_dec_lt(v_i_371_, v_sz_370_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; 
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v_b_372_);
return v___x_381_;
}
else
{
lean_object* v_snd_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_487_; 
v_snd_382_ = lean_ctor_get(v_b_372_, 1);
v_isSharedCheck_487_ = !lean_is_exclusive(v_b_372_);
if (v_isSharedCheck_487_ == 0)
{
lean_object* v_unused_488_; 
v_unused_488_ = lean_ctor_get(v_b_372_, 0);
lean_dec(v_unused_488_);
v___x_384_ = v_b_372_;
v_isShared_385_ = v_isSharedCheck_487_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_snd_382_);
lean_dec(v_b_372_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_487_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_386_; lean_object* v_a_388_; lean_object* v_a_395_; 
v___x_386_ = lean_box(0);
v_a_395_ = lean_array_uget(v_as_369_, v_i_371_);
if (lean_obj_tag(v_a_395_) == 0)
{
v_a_388_ = v_snd_382_;
goto v___jp_387_;
}
else
{
lean_object* v_snd_396_; lean_object* v_val_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_486_; 
v_snd_396_ = lean_ctor_get(v_snd_382_, 1);
lean_inc(v_snd_396_);
v_val_397_ = lean_ctor_get(v_a_395_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v_a_395_);
if (v_isSharedCheck_486_ == 0)
{
v___x_399_ = v_a_395_;
v_isShared_400_ = v_isSharedCheck_486_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_val_397_);
lean_dec(v_a_395_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_486_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v_fst_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_484_; 
v_fst_401_ = lean_ctor_get(v_snd_382_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v_snd_382_);
if (v_isSharedCheck_484_ == 0)
{
lean_object* v_unused_485_; 
v_unused_485_ = lean_ctor_get(v_snd_382_, 1);
lean_dec(v_unused_485_);
v___x_403_ = v_snd_382_;
v_isShared_404_ = v_isSharedCheck_484_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_fst_401_);
lean_dec(v_snd_382_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_484_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v_fst_405_; lean_object* v_snd_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_483_; 
v_fst_405_ = lean_ctor_get(v_snd_396_, 0);
v_snd_406_ = lean_ctor_get(v_snd_396_, 1);
v_isSharedCheck_483_ = !lean_is_exclusive(v_snd_396_);
if (v_isSharedCheck_483_ == 0)
{
v___x_408_ = v_snd_396_;
v_isShared_409_ = v_isSharedCheck_483_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_snd_406_);
lean_inc(v_fst_405_);
lean_dec(v_snd_396_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_483_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v_decl_411_; 
if (lean_obj_tag(v_val_397_) == 0)
{
lean_object* v_fvarId_426_; lean_object* v_userName_427_; lean_object* v_type_428_; uint8_t v_bi_429_; uint8_t v_kind_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_447_; 
v_fvarId_426_ = lean_ctor_get(v_val_397_, 1);
v_userName_427_ = lean_ctor_get(v_val_397_, 2);
v_type_428_ = lean_ctor_get(v_val_397_, 3);
v_bi_429_ = lean_ctor_get_uint8(v_val_397_, sizeof(void*)*4);
v_kind_430_ = lean_ctor_get_uint8(v_val_397_, sizeof(void*)*4 + 1);
v_isSharedCheck_447_ = !lean_is_exclusive(v_val_397_);
if (v_isSharedCheck_447_ == 0)
{
lean_object* v_unused_448_; 
v_unused_448_ = lean_ctor_get(v_val_397_, 0);
lean_dec(v_unused_448_);
v___x_432_ = v_val_397_;
v_isShared_433_ = v_isSharedCheck_447_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_type_428_);
lean_inc(v_userName_427_);
lean_inc(v_fvarId_426_);
lean_dec(v_val_397_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_447_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lean_Meta_Sym_preprocessExpr(v_type_428_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; lean_object* v___x_437_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_a_435_);
lean_dec_ref_known(v___x_434_, 1);
lean_inc(v_snd_406_);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 3, v_a_435_);
lean_ctor_set(v___x_432_, 0, v_snd_406_);
v___x_437_ = v___x_432_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_snd_406_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v_fvarId_426_);
lean_ctor_set(v_reuseFailAlloc_438_, 2, v_userName_427_);
lean_ctor_set(v_reuseFailAlloc_438_, 3, v_a_435_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, sizeof(void*)*4, v_bi_429_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, sizeof(void*)*4 + 1, v_kind_430_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
v_decl_411_ = v___x_437_;
goto v___jp_410_;
}
}
else
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
lean_del_object(v___x_432_);
lean_dec(v_userName_427_);
lean_dec(v_fvarId_426_);
lean_del_object(v___x_408_);
lean_dec(v_snd_406_);
lean_dec(v_fst_405_);
lean_del_object(v___x_403_);
lean_dec(v_fst_401_);
lean_del_object(v___x_399_);
lean_del_object(v___x_384_);
v_a_439_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___x_434_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_434_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_439_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
}
else
{
lean_object* v_fvarId_449_; lean_object* v_userName_450_; lean_object* v_type_451_; lean_object* v_value_452_; uint8_t v_nondep_453_; uint8_t v_kind_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_481_; 
v_fvarId_449_ = lean_ctor_get(v_val_397_, 1);
v_userName_450_ = lean_ctor_get(v_val_397_, 2);
v_type_451_ = lean_ctor_get(v_val_397_, 3);
v_value_452_ = lean_ctor_get(v_val_397_, 4);
v_nondep_453_ = lean_ctor_get_uint8(v_val_397_, sizeof(void*)*5);
v_kind_454_ = lean_ctor_get_uint8(v_val_397_, sizeof(void*)*5 + 1);
v_isSharedCheck_481_ = !lean_is_exclusive(v_val_397_);
if (v_isSharedCheck_481_ == 0)
{
lean_object* v_unused_482_; 
v_unused_482_ = lean_ctor_get(v_val_397_, 0);
lean_dec(v_unused_482_);
v___x_456_ = v_val_397_;
v_isShared_457_ = v_isSharedCheck_481_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_value_452_);
lean_inc(v_type_451_);
lean_inc(v_userName_450_);
lean_inc(v_fvarId_449_);
lean_dec(v_val_397_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_481_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_Meta_Sym_preprocessExpr(v_type_451_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_460_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v___x_460_ = l_Lean_Meta_Sym_preprocessExpr(v_value_452_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_463_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_460_, 1);
lean_inc(v_snd_406_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 4, v_a_461_);
lean_ctor_set(v___x_456_, 3, v_a_459_);
lean_ctor_set(v___x_456_, 0, v_snd_406_);
v___x_463_ = v___x_456_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_snd_406_);
lean_ctor_set(v_reuseFailAlloc_464_, 1, v_fvarId_449_);
lean_ctor_set(v_reuseFailAlloc_464_, 2, v_userName_450_);
lean_ctor_set(v_reuseFailAlloc_464_, 3, v_a_459_);
lean_ctor_set(v_reuseFailAlloc_464_, 4, v_a_461_);
lean_ctor_set_uint8(v_reuseFailAlloc_464_, sizeof(void*)*5, v_nondep_453_);
lean_ctor_set_uint8(v_reuseFailAlloc_464_, sizeof(void*)*5 + 1, v_kind_454_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
v_decl_411_ = v___x_463_;
goto v___jp_410_;
}
}
else
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
lean_dec(v_a_459_);
lean_del_object(v___x_456_);
lean_dec(v_userName_450_);
lean_dec(v_fvarId_449_);
lean_del_object(v___x_408_);
lean_dec(v_snd_406_);
lean_dec(v_fst_405_);
lean_del_object(v___x_403_);
lean_dec(v_fst_401_);
lean_del_object(v___x_399_);
lean_del_object(v___x_384_);
v_a_465_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_472_ == 0)
{
v___x_467_ = v___x_460_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_460_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_del_object(v___x_456_);
lean_dec_ref(v_value_452_);
lean_dec(v_userName_450_);
lean_dec(v_fvarId_449_);
lean_del_object(v___x_408_);
lean_dec(v_snd_406_);
lean_dec(v_fst_405_);
lean_del_object(v___x_403_);
lean_dec(v_fst_401_);
lean_del_object(v___x_399_);
lean_del_object(v___x_384_);
v_a_473_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_458_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_458_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
}
v___jp_410_:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_415_; 
v___x_412_ = lean_unsigned_to_nat(1u);
v___x_413_ = lean_nat_add(v_snd_406_, v___x_412_);
lean_dec(v_snd_406_);
lean_inc_ref(v_decl_411_);
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 0, v_decl_411_);
v___x_415_ = v___x_399_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_decl_411_);
v___x_415_ = v_reuseFailAlloc_425_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_420_; 
v___x_416_ = l_Lean_PersistentArray_push___redArg(v_fst_405_, v___x_415_);
v___x_417_ = l_Lean_LocalDecl_fvarId(v_decl_411_);
v___x_418_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0___redArg(v_fst_401_, v___x_417_, v_decl_411_);
if (v_isShared_409_ == 0)
{
lean_ctor_set(v___x_408_, 1, v___x_413_);
lean_ctor_set(v___x_408_, 0, v___x_416_);
v___x_420_ = v___x_408_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_416_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v___x_413_);
v___x_420_ = v_reuseFailAlloc_424_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
lean_object* v___x_422_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 1, v___x_420_);
lean_ctor_set(v___x_403_, 0, v___x_418_);
v___x_422_ = v___x_403_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v___x_420_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
v_a_388_ = v___x_422_;
goto v___jp_387_;
}
}
}
}
}
}
}
}
v___jp_387_:
{
lean_object* v___x_390_; 
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 1, v_a_388_);
lean_ctor_set(v___x_384_, 0, v___x_386_);
v___x_390_ = v___x_384_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_386_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_a_388_);
v___x_390_ = v_reuseFailAlloc_394_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
size_t v___x_391_; size_t v___x_392_; 
v___x_391_ = ((size_t)1ULL);
v___x_392_ = lean_usize_add(v_i_371_, v___x_391_);
v_i_371_ = v___x_392_;
v_b_372_ = v___x_390_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6_spec__8___boxed(lean_object* v_as_489_, lean_object* v_sz_490_, lean_object* v_i_491_, lean_object* v_b_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_){
_start:
{
size_t v_sz_boxed_500_; size_t v_i_boxed_501_; lean_object* v_res_502_; 
v_sz_boxed_500_ = lean_unbox_usize(v_sz_490_);
lean_dec(v_sz_490_);
v_i_boxed_501_ = lean_unbox_usize(v_i_491_);
lean_dec(v_i_491_);
v_res_502_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6_spec__8(v_as_489_, v_sz_boxed_500_, v_i_boxed_501_, v_b_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec_ref(v_as_489_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6(lean_object* v_as_503_, size_t v_sz_504_, size_t v_i_505_, lean_object* v_b_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
uint8_t v___x_514_; 
v___x_514_ = lean_usize_dec_lt(v_i_505_, v_sz_504_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; 
v___x_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_515_, 0, v_b_506_);
return v___x_515_;
}
else
{
lean_object* v_snd_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_621_; 
v_snd_516_ = lean_ctor_get(v_b_506_, 1);
v_isSharedCheck_621_ = !lean_is_exclusive(v_b_506_);
if (v_isSharedCheck_621_ == 0)
{
lean_object* v_unused_622_; 
v_unused_622_ = lean_ctor_get(v_b_506_, 0);
lean_dec(v_unused_622_);
v___x_518_ = v_b_506_;
v_isShared_519_ = v_isSharedCheck_621_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_snd_516_);
lean_dec(v_b_506_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_621_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; lean_object* v_a_522_; lean_object* v_a_529_; 
v___x_520_ = lean_box(0);
v_a_529_ = lean_array_uget(v_as_503_, v_i_505_);
if (lean_obj_tag(v_a_529_) == 0)
{
v_a_522_ = v_snd_516_;
goto v___jp_521_;
}
else
{
lean_object* v_snd_530_; lean_object* v_val_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_620_; 
v_snd_530_ = lean_ctor_get(v_snd_516_, 1);
lean_inc(v_snd_530_);
v_val_531_ = lean_ctor_get(v_a_529_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v_a_529_);
if (v_isSharedCheck_620_ == 0)
{
v___x_533_ = v_a_529_;
v_isShared_534_ = v_isSharedCheck_620_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_val_531_);
lean_dec(v_a_529_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_620_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v_fst_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_618_; 
v_fst_535_ = lean_ctor_get(v_snd_516_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v_snd_516_);
if (v_isSharedCheck_618_ == 0)
{
lean_object* v_unused_619_; 
v_unused_619_ = lean_ctor_get(v_snd_516_, 1);
lean_dec(v_unused_619_);
v___x_537_ = v_snd_516_;
v_isShared_538_ = v_isSharedCheck_618_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_fst_535_);
lean_dec(v_snd_516_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_618_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v_fst_539_; lean_object* v_snd_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_617_; 
v_fst_539_ = lean_ctor_get(v_snd_530_, 0);
v_snd_540_ = lean_ctor_get(v_snd_530_, 1);
v_isSharedCheck_617_ = !lean_is_exclusive(v_snd_530_);
if (v_isSharedCheck_617_ == 0)
{
v___x_542_ = v_snd_530_;
v_isShared_543_ = v_isSharedCheck_617_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_snd_540_);
lean_inc(v_fst_539_);
lean_dec(v_snd_530_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_617_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v_decl_545_; 
if (lean_obj_tag(v_val_531_) == 0)
{
lean_object* v_fvarId_560_; lean_object* v_userName_561_; lean_object* v_type_562_; uint8_t v_bi_563_; uint8_t v_kind_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_581_; 
v_fvarId_560_ = lean_ctor_get(v_val_531_, 1);
v_userName_561_ = lean_ctor_get(v_val_531_, 2);
v_type_562_ = lean_ctor_get(v_val_531_, 3);
v_bi_563_ = lean_ctor_get_uint8(v_val_531_, sizeof(void*)*4);
v_kind_564_ = lean_ctor_get_uint8(v_val_531_, sizeof(void*)*4 + 1);
v_isSharedCheck_581_ = !lean_is_exclusive(v_val_531_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; 
v_unused_582_ = lean_ctor_get(v_val_531_, 0);
lean_dec(v_unused_582_);
v___x_566_ = v_val_531_;
v_isShared_567_ = v_isSharedCheck_581_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_type_562_);
lean_inc(v_userName_561_);
lean_inc(v_fvarId_560_);
lean_dec(v_val_531_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_581_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_568_; 
v___x_568_ = l_Lean_Meta_Sym_preprocessExpr(v_type_562_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; lean_object* v___x_571_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_568_, 1);
lean_inc(v_snd_540_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 3, v_a_569_);
lean_ctor_set(v___x_566_, 0, v_snd_540_);
v___x_571_ = v___x_566_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_snd_540_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_fvarId_560_);
lean_ctor_set(v_reuseFailAlloc_572_, 2, v_userName_561_);
lean_ctor_set(v_reuseFailAlloc_572_, 3, v_a_569_);
lean_ctor_set_uint8(v_reuseFailAlloc_572_, sizeof(void*)*4, v_bi_563_);
lean_ctor_set_uint8(v_reuseFailAlloc_572_, sizeof(void*)*4 + 1, v_kind_564_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
v_decl_545_ = v___x_571_;
goto v___jp_544_;
}
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
lean_del_object(v___x_566_);
lean_dec(v_userName_561_);
lean_dec(v_fvarId_560_);
lean_del_object(v___x_542_);
lean_dec(v_snd_540_);
lean_dec(v_fst_539_);
lean_del_object(v___x_537_);
lean_dec(v_fst_535_);
lean_del_object(v___x_533_);
lean_del_object(v___x_518_);
v_a_573_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_568_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_568_);
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
else
{
lean_object* v_fvarId_583_; lean_object* v_userName_584_; lean_object* v_type_585_; lean_object* v_value_586_; uint8_t v_nondep_587_; uint8_t v_kind_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_615_; 
v_fvarId_583_ = lean_ctor_get(v_val_531_, 1);
v_userName_584_ = lean_ctor_get(v_val_531_, 2);
v_type_585_ = lean_ctor_get(v_val_531_, 3);
v_value_586_ = lean_ctor_get(v_val_531_, 4);
v_nondep_587_ = lean_ctor_get_uint8(v_val_531_, sizeof(void*)*5);
v_kind_588_ = lean_ctor_get_uint8(v_val_531_, sizeof(void*)*5 + 1);
v_isSharedCheck_615_ = !lean_is_exclusive(v_val_531_);
if (v_isSharedCheck_615_ == 0)
{
lean_object* v_unused_616_; 
v_unused_616_ = lean_ctor_get(v_val_531_, 0);
lean_dec(v_unused_616_);
v___x_590_ = v_val_531_;
v_isShared_591_ = v_isSharedCheck_615_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_value_586_);
lean_inc(v_type_585_);
lean_inc(v_userName_584_);
lean_inc(v_fvarId_583_);
lean_dec(v_val_531_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_615_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_592_; 
v___x_592_ = l_Lean_Meta_Sym_preprocessExpr(v_type_585_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_594_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_593_);
lean_dec_ref_known(v___x_592_, 1);
v___x_594_ = l_Lean_Meta_Sym_preprocessExpr(v_value_586_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_595_; lean_object* v___x_597_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
lean_inc(v_a_595_);
lean_dec_ref_known(v___x_594_, 1);
lean_inc(v_snd_540_);
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 4, v_a_595_);
lean_ctor_set(v___x_590_, 3, v_a_593_);
lean_ctor_set(v___x_590_, 0, v_snd_540_);
v___x_597_ = v___x_590_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_snd_540_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_fvarId_583_);
lean_ctor_set(v_reuseFailAlloc_598_, 2, v_userName_584_);
lean_ctor_set(v_reuseFailAlloc_598_, 3, v_a_593_);
lean_ctor_set(v_reuseFailAlloc_598_, 4, v_a_595_);
lean_ctor_set_uint8(v_reuseFailAlloc_598_, sizeof(void*)*5, v_nondep_587_);
lean_ctor_set_uint8(v_reuseFailAlloc_598_, sizeof(void*)*5 + 1, v_kind_588_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
v_decl_545_ = v___x_597_;
goto v___jp_544_;
}
}
else
{
lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_606_; 
lean_dec(v_a_593_);
lean_del_object(v___x_590_);
lean_dec(v_userName_584_);
lean_dec(v_fvarId_583_);
lean_del_object(v___x_542_);
lean_dec(v_snd_540_);
lean_dec(v_fst_539_);
lean_del_object(v___x_537_);
lean_dec(v_fst_535_);
lean_del_object(v___x_533_);
lean_del_object(v___x_518_);
v_a_599_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_606_ == 0)
{
v___x_601_ = v___x_594_;
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___x_594_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_604_; 
if (v_isShared_602_ == 0)
{
v___x_604_ = v___x_601_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_a_599_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
}
else
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
lean_del_object(v___x_590_);
lean_dec_ref(v_value_586_);
lean_dec(v_userName_584_);
lean_dec(v_fvarId_583_);
lean_del_object(v___x_542_);
lean_dec(v_snd_540_);
lean_dec(v_fst_539_);
lean_del_object(v___x_537_);
lean_dec(v_fst_535_);
lean_del_object(v___x_533_);
lean_del_object(v___x_518_);
v_a_607_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_592_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_592_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
}
v___jp_544_:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_546_ = lean_unsigned_to_nat(1u);
v___x_547_ = lean_nat_add(v_snd_540_, v___x_546_);
lean_dec(v_snd_540_);
lean_inc_ref(v_decl_545_);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v_decl_545_);
v___x_549_ = v___x_533_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_decl_545_);
v___x_549_ = v_reuseFailAlloc_559_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_554_; 
v___x_550_ = l_Lean_PersistentArray_push___redArg(v_fst_539_, v___x_549_);
v___x_551_ = l_Lean_LocalDecl_fvarId(v_decl_545_);
v___x_552_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0___redArg(v_fst_535_, v___x_551_, v_decl_545_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 1, v___x_547_);
lean_ctor_set(v___x_542_, 0, v___x_550_);
v___x_554_ = v___x_542_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v___x_550_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v___x_547_);
v___x_554_ = v_reuseFailAlloc_558_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
lean_object* v___x_556_; 
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 1, v___x_554_);
lean_ctor_set(v___x_537_, 0, v___x_552_);
v___x_556_ = v___x_537_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v___x_552_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v___x_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
v_a_522_ = v___x_556_;
goto v___jp_521_;
}
}
}
}
}
}
}
}
v___jp_521_:
{
lean_object* v___x_524_; 
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 1, v_a_522_);
lean_ctor_set(v___x_518_, 0, v___x_520_);
v___x_524_ = v___x_518_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_520_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v_a_522_);
v___x_524_ = v_reuseFailAlloc_528_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
size_t v___x_525_; size_t v___x_526_; lean_object* v___x_527_; 
v___x_525_ = ((size_t)1ULL);
v___x_526_ = lean_usize_add(v_i_505_, v___x_525_);
v___x_527_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6_spec__8(v_as_503_, v_sz_504_, v___x_526_, v___x_524_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
return v___x_527_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6___boxed(lean_object* v_as_623_, lean_object* v_sz_624_, lean_object* v_i_625_, lean_object* v_b_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_){
_start:
{
size_t v_sz_boxed_634_; size_t v_i_boxed_635_; lean_object* v_res_636_; 
v_sz_boxed_634_ = lean_unbox_usize(v_sz_624_);
lean_dec(v_sz_624_);
v_i_boxed_635_ = lean_unbox_usize(v_i_625_);
lean_dec(v_i_625_);
v_res_636_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6(v_as_623_, v_sz_boxed_634_, v_i_boxed_635_, v_b_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
lean_dec_ref(v_as_623_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2(lean_object* v_init_637_, lean_object* v_n_638_, lean_object* v_b_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
if (lean_obj_tag(v_n_638_) == 0)
{
lean_object* v_cs_647_; lean_object* v___x_648_; lean_object* v___x_649_; size_t v_sz_650_; size_t v___x_651_; lean_object* v___x_652_; 
v_cs_647_ = lean_ctor_get(v_n_638_, 0);
v___x_648_ = lean_box(0);
v___x_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
lean_ctor_set(v___x_649_, 1, v_b_639_);
v_sz_650_ = lean_array_size(v_cs_647_);
v___x_651_ = ((size_t)0ULL);
v___x_652_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__5(v_init_637_, v_cs_647_, v_sz_650_, v___x_651_, v___x_649_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_667_; 
v_a_653_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_667_ == 0)
{
v___x_655_ = v___x_652_;
v_isShared_656_ = v_isSharedCheck_667_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_652_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_667_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v_fst_657_; 
v_fst_657_ = lean_ctor_get(v_a_653_, 0);
if (lean_obj_tag(v_fst_657_) == 0)
{
lean_object* v_snd_658_; lean_object* v___x_659_; lean_object* v___x_661_; 
v_snd_658_ = lean_ctor_get(v_a_653_, 1);
lean_inc(v_snd_658_);
lean_dec(v_a_653_);
v___x_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_659_, 0, v_snd_658_);
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
else
{
lean_object* v_val_663_; lean_object* v___x_665_; 
lean_inc_ref(v_fst_657_);
lean_dec(v_a_653_);
v_val_663_ = lean_ctor_get(v_fst_657_, 0);
lean_inc(v_val_663_);
lean_dec_ref_known(v_fst_657_, 1);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 0, v_val_663_);
v___x_665_ = v___x_655_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_val_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
else
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
v_a_668_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___x_652_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___x_652_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
else
{
lean_object* v_vs_676_; lean_object* v___x_677_; lean_object* v___x_678_; size_t v_sz_679_; size_t v___x_680_; lean_object* v___x_681_; 
v_vs_676_ = lean_ctor_get(v_n_638_, 0);
v___x_677_ = lean_box(0);
v___x_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
lean_ctor_set(v___x_678_, 1, v_b_639_);
v_sz_679_ = lean_array_size(v_vs_676_);
v___x_680_ = ((size_t)0ULL);
v___x_681_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__6(v_vs_676_, v_sz_679_, v___x_680_, v___x_678_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_696_; 
v_a_682_ = lean_ctor_get(v___x_681_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_696_ == 0)
{
v___x_684_ = v___x_681_;
v_isShared_685_ = v_isSharedCheck_696_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_681_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_696_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v_fst_686_; 
v_fst_686_ = lean_ctor_get(v_a_682_, 0);
if (lean_obj_tag(v_fst_686_) == 0)
{
lean_object* v_snd_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v_snd_687_ = lean_ctor_get(v_a_682_, 1);
lean_inc(v_snd_687_);
lean_dec(v_a_682_);
v___x_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_688_, 0, v_snd_687_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 0, v___x_688_);
v___x_690_ = v___x_684_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
else
{
lean_object* v_val_692_; lean_object* v___x_694_; 
lean_inc_ref(v_fst_686_);
lean_dec(v_a_682_);
v_val_692_ = lean_ctor_get(v_fst_686_, 0);
lean_inc(v_val_692_);
lean_dec_ref_known(v_fst_686_, 1);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 0, v_val_692_);
v___x_694_ = v___x_684_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_val_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
else
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_704_; 
v_a_697_ = lean_ctor_get(v___x_681_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_704_ == 0)
{
v___x_699_ = v___x_681_;
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_681_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_a_697_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__5(lean_object* v_init_705_, lean_object* v_as_706_, size_t v_sz_707_, size_t v_i_708_, lean_object* v_b_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
uint8_t v___x_717_; 
v___x_717_ = lean_usize_dec_lt(v_i_708_, v_sz_707_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; 
v___x_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_718_, 0, v_b_709_);
return v___x_718_;
}
else
{
lean_object* v_snd_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_753_; 
v_snd_719_ = lean_ctor_get(v_b_709_, 1);
v_isSharedCheck_753_ = !lean_is_exclusive(v_b_709_);
if (v_isSharedCheck_753_ == 0)
{
lean_object* v_unused_754_; 
v_unused_754_ = lean_ctor_get(v_b_709_, 0);
lean_dec(v_unused_754_);
v___x_721_ = v_b_709_;
v_isShared_722_ = v_isSharedCheck_753_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_snd_719_);
lean_dec(v_b_709_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_753_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_723_; lean_object* v_a_724_; lean_object* v___x_725_; 
v___x_723_ = lean_box(0);
v_a_724_ = lean_array_uget_borrowed(v_as_706_, v_i_708_);
lean_inc(v_snd_719_);
v___x_725_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2(v_init_705_, v_a_724_, v_snd_719_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_744_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_744_ == 0)
{
v___x_728_ = v___x_725_;
v_isShared_729_ = v_isSharedCheck_744_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_725_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_744_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
if (lean_obj_tag(v_a_726_) == 0)
{
lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_730_, 0, v_a_726_);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v___x_730_);
v___x_732_ = v___x_721_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_snd_719_);
v___x_732_ = v_reuseFailAlloc_736_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
lean_object* v___x_734_; 
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v___x_732_);
v___x_734_ = v___x_728_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v___x_732_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
else
{
lean_object* v_a_737_; lean_object* v___x_739_; 
lean_del_object(v___x_728_);
lean_dec(v_snd_719_);
v_a_737_ = lean_ctor_get(v_a_726_, 0);
lean_inc(v_a_737_);
lean_dec_ref_known(v_a_726_, 1);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 1, v_a_737_);
lean_ctor_set(v___x_721_, 0, v___x_723_);
v___x_739_ = v___x_721_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v___x_723_);
lean_ctor_set(v_reuseFailAlloc_743_, 1, v_a_737_);
v___x_739_ = v_reuseFailAlloc_743_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
size_t v___x_740_; size_t v___x_741_; 
v___x_740_ = ((size_t)1ULL);
v___x_741_ = lean_usize_add(v_i_708_, v___x_740_);
v_i_708_ = v___x_741_;
v_b_709_ = v___x_739_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
lean_del_object(v___x_721_);
lean_dec(v_snd_719_);
v_a_745_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_725_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_725_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__5___boxed(lean_object* v_init_755_, lean_object* v_as_756_, lean_object* v_sz_757_, lean_object* v_i_758_, lean_object* v_b_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
size_t v_sz_boxed_767_; size_t v_i_boxed_768_; lean_object* v_res_769_; 
v_sz_boxed_767_ = lean_unbox_usize(v_sz_757_);
lean_dec(v_sz_757_);
v_i_boxed_768_ = lean_unbox_usize(v_i_758_);
lean_dec(v_i_758_);
v_res_769_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2_spec__5(v_init_755_, v_as_756_, v_sz_boxed_767_, v_i_boxed_768_, v_b_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
lean_dec_ref(v_as_756_);
lean_dec_ref(v_init_755_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2___boxed(lean_object* v_init_770_, lean_object* v_n_771_, lean_object* v_b_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2(v_init_770_, v_n_771_, v_b_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec_ref(v_n_771_);
lean_dec_ref(v_init_770_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3_spec__8(lean_object* v_as_781_, size_t v_sz_782_, size_t v_i_783_, lean_object* v_b_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
uint8_t v___x_792_; 
v___x_792_ = lean_usize_dec_lt(v_i_783_, v_sz_782_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; 
v___x_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_793_, 0, v_b_784_);
return v___x_793_;
}
else
{
lean_object* v_snd_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_899_; 
v_snd_794_ = lean_ctor_get(v_b_784_, 1);
v_isSharedCheck_899_ = !lean_is_exclusive(v_b_784_);
if (v_isSharedCheck_899_ == 0)
{
lean_object* v_unused_900_; 
v_unused_900_ = lean_ctor_get(v_b_784_, 0);
lean_dec(v_unused_900_);
v___x_796_ = v_b_784_;
v_isShared_797_ = v_isSharedCheck_899_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_snd_794_);
lean_dec(v_b_784_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_899_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_798_; lean_object* v_a_800_; lean_object* v_a_807_; 
v___x_798_ = lean_box(0);
v_a_807_ = lean_array_uget(v_as_781_, v_i_783_);
if (lean_obj_tag(v_a_807_) == 0)
{
v_a_800_ = v_snd_794_;
goto v___jp_799_;
}
else
{
lean_object* v_snd_808_; lean_object* v_val_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_898_; 
v_snd_808_ = lean_ctor_get(v_snd_794_, 1);
lean_inc(v_snd_808_);
v_val_809_ = lean_ctor_get(v_a_807_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v_a_807_);
if (v_isSharedCheck_898_ == 0)
{
v___x_811_ = v_a_807_;
v_isShared_812_ = v_isSharedCheck_898_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_val_809_);
lean_dec(v_a_807_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_898_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v_fst_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_896_; 
v_fst_813_ = lean_ctor_get(v_snd_794_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v_snd_794_);
if (v_isSharedCheck_896_ == 0)
{
lean_object* v_unused_897_; 
v_unused_897_ = lean_ctor_get(v_snd_794_, 1);
lean_dec(v_unused_897_);
v___x_815_ = v_snd_794_;
v_isShared_816_ = v_isSharedCheck_896_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_fst_813_);
lean_dec(v_snd_794_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_896_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v_fst_817_; lean_object* v_snd_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_895_; 
v_fst_817_ = lean_ctor_get(v_snd_808_, 0);
v_snd_818_ = lean_ctor_get(v_snd_808_, 1);
v_isSharedCheck_895_ = !lean_is_exclusive(v_snd_808_);
if (v_isSharedCheck_895_ == 0)
{
v___x_820_ = v_snd_808_;
v_isShared_821_ = v_isSharedCheck_895_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_snd_818_);
lean_inc(v_fst_817_);
lean_dec(v_snd_808_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_895_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v_decl_823_; 
if (lean_obj_tag(v_val_809_) == 0)
{
lean_object* v_fvarId_838_; lean_object* v_userName_839_; lean_object* v_type_840_; uint8_t v_bi_841_; uint8_t v_kind_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_859_; 
v_fvarId_838_ = lean_ctor_get(v_val_809_, 1);
v_userName_839_ = lean_ctor_get(v_val_809_, 2);
v_type_840_ = lean_ctor_get(v_val_809_, 3);
v_bi_841_ = lean_ctor_get_uint8(v_val_809_, sizeof(void*)*4);
v_kind_842_ = lean_ctor_get_uint8(v_val_809_, sizeof(void*)*4 + 1);
v_isSharedCheck_859_ = !lean_is_exclusive(v_val_809_);
if (v_isSharedCheck_859_ == 0)
{
lean_object* v_unused_860_; 
v_unused_860_ = lean_ctor_get(v_val_809_, 0);
lean_dec(v_unused_860_);
v___x_844_ = v_val_809_;
v_isShared_845_ = v_isSharedCheck_859_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_type_840_);
lean_inc(v_userName_839_);
lean_inc(v_fvarId_838_);
lean_dec(v_val_809_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_859_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_846_; 
v___x_846_ = l_Lean_Meta_Sym_preprocessExpr(v_type_840_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v_a_847_; lean_object* v___x_849_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_a_847_);
lean_dec_ref_known(v___x_846_, 1);
lean_inc(v_snd_818_);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 3, v_a_847_);
lean_ctor_set(v___x_844_, 0, v_snd_818_);
v___x_849_ = v___x_844_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_snd_818_);
lean_ctor_set(v_reuseFailAlloc_850_, 1, v_fvarId_838_);
lean_ctor_set(v_reuseFailAlloc_850_, 2, v_userName_839_);
lean_ctor_set(v_reuseFailAlloc_850_, 3, v_a_847_);
lean_ctor_set_uint8(v_reuseFailAlloc_850_, sizeof(void*)*4, v_bi_841_);
lean_ctor_set_uint8(v_reuseFailAlloc_850_, sizeof(void*)*4 + 1, v_kind_842_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
v_decl_823_ = v___x_849_;
goto v___jp_822_;
}
}
else
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
lean_del_object(v___x_844_);
lean_dec(v_userName_839_);
lean_dec(v_fvarId_838_);
lean_del_object(v___x_820_);
lean_dec(v_snd_818_);
lean_dec(v_fst_817_);
lean_del_object(v___x_815_);
lean_dec(v_fst_813_);
lean_del_object(v___x_811_);
lean_del_object(v___x_796_);
v_a_851_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_858_ == 0)
{
v___x_853_ = v___x_846_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_846_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_851_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
}
else
{
lean_object* v_fvarId_861_; lean_object* v_userName_862_; lean_object* v_type_863_; lean_object* v_value_864_; uint8_t v_nondep_865_; uint8_t v_kind_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_893_; 
v_fvarId_861_ = lean_ctor_get(v_val_809_, 1);
v_userName_862_ = lean_ctor_get(v_val_809_, 2);
v_type_863_ = lean_ctor_get(v_val_809_, 3);
v_value_864_ = lean_ctor_get(v_val_809_, 4);
v_nondep_865_ = lean_ctor_get_uint8(v_val_809_, sizeof(void*)*5);
v_kind_866_ = lean_ctor_get_uint8(v_val_809_, sizeof(void*)*5 + 1);
v_isSharedCheck_893_ = !lean_is_exclusive(v_val_809_);
if (v_isSharedCheck_893_ == 0)
{
lean_object* v_unused_894_; 
v_unused_894_ = lean_ctor_get(v_val_809_, 0);
lean_dec(v_unused_894_);
v___x_868_ = v_val_809_;
v_isShared_869_ = v_isSharedCheck_893_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_value_864_);
lean_inc(v_type_863_);
lean_inc(v_userName_862_);
lean_inc(v_fvarId_861_);
lean_dec(v_val_809_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_893_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_Meta_Sym_preprocessExpr(v_type_863_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_872_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_a_871_);
lean_dec_ref_known(v___x_870_, 1);
v___x_872_ = l_Lean_Meta_Sym_preprocessExpr(v_value_864_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_a_873_);
lean_dec_ref_known(v___x_872_, 1);
lean_inc(v_snd_818_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 4, v_a_873_);
lean_ctor_set(v___x_868_, 3, v_a_871_);
lean_ctor_set(v___x_868_, 0, v_snd_818_);
v___x_875_ = v___x_868_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_snd_818_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v_fvarId_861_);
lean_ctor_set(v_reuseFailAlloc_876_, 2, v_userName_862_);
lean_ctor_set(v_reuseFailAlloc_876_, 3, v_a_871_);
lean_ctor_set(v_reuseFailAlloc_876_, 4, v_a_873_);
lean_ctor_set_uint8(v_reuseFailAlloc_876_, sizeof(void*)*5, v_nondep_865_);
lean_ctor_set_uint8(v_reuseFailAlloc_876_, sizeof(void*)*5 + 1, v_kind_866_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
v_decl_823_ = v___x_875_;
goto v___jp_822_;
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_dec(v_a_871_);
lean_del_object(v___x_868_);
lean_dec(v_userName_862_);
lean_dec(v_fvarId_861_);
lean_del_object(v___x_820_);
lean_dec(v_snd_818_);
lean_dec(v_fst_817_);
lean_del_object(v___x_815_);
lean_dec(v_fst_813_);
lean_del_object(v___x_811_);
lean_del_object(v___x_796_);
v_a_877_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_872_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_872_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_892_; 
lean_del_object(v___x_868_);
lean_dec_ref(v_value_864_);
lean_dec(v_userName_862_);
lean_dec(v_fvarId_861_);
lean_del_object(v___x_820_);
lean_dec(v_snd_818_);
lean_dec(v_fst_817_);
lean_del_object(v___x_815_);
lean_dec(v_fst_813_);
lean_del_object(v___x_811_);
lean_del_object(v___x_796_);
v_a_885_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_892_ == 0)
{
v___x_887_ = v___x_870_;
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_870_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_890_; 
if (v_isShared_888_ == 0)
{
v___x_890_ = v___x_887_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_a_885_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
}
v___jp_822_:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_827_; 
v___x_824_ = lean_unsigned_to_nat(1u);
v___x_825_ = lean_nat_add(v_snd_818_, v___x_824_);
lean_dec(v_snd_818_);
lean_inc_ref(v_decl_823_);
if (v_isShared_812_ == 0)
{
lean_ctor_set(v___x_811_, 0, v_decl_823_);
v___x_827_ = v___x_811_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_decl_823_);
v___x_827_ = v_reuseFailAlloc_837_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_832_; 
v___x_828_ = l_Lean_PersistentArray_push___redArg(v_fst_817_, v___x_827_);
v___x_829_ = l_Lean_LocalDecl_fvarId(v_decl_823_);
v___x_830_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0___redArg(v_fst_813_, v___x_829_, v_decl_823_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 1, v___x_825_);
lean_ctor_set(v___x_820_, 0, v___x_828_);
v___x_832_ = v___x_820_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_828_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v___x_825_);
v___x_832_ = v_reuseFailAlloc_836_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
lean_object* v___x_834_; 
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 1, v___x_832_);
lean_ctor_set(v___x_815_, 0, v___x_830_);
v___x_834_ = v___x_815_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_830_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v___x_832_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
v_a_800_ = v___x_834_;
goto v___jp_799_;
}
}
}
}
}
}
}
}
v___jp_799_:
{
lean_object* v___x_802_; 
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 1, v_a_800_);
lean_ctor_set(v___x_796_, 0, v___x_798_);
v___x_802_ = v___x_796_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v___x_798_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v_a_800_);
v___x_802_ = v_reuseFailAlloc_806_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
size_t v___x_803_; size_t v___x_804_; 
v___x_803_ = ((size_t)1ULL);
v___x_804_ = lean_usize_add(v_i_783_, v___x_803_);
v_i_783_ = v___x_804_;
v_b_784_ = v___x_802_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3_spec__8___boxed(lean_object* v_as_901_, lean_object* v_sz_902_, lean_object* v_i_903_, lean_object* v_b_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
size_t v_sz_boxed_912_; size_t v_i_boxed_913_; lean_object* v_res_914_; 
v_sz_boxed_912_ = lean_unbox_usize(v_sz_902_);
lean_dec(v_sz_902_);
v_i_boxed_913_ = lean_unbox_usize(v_i_903_);
lean_dec(v_i_903_);
v_res_914_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3_spec__8(v_as_901_, v_sz_boxed_912_, v_i_boxed_913_, v_b_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
lean_dec_ref(v_as_901_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3(lean_object* v_as_915_, size_t v_sz_916_, size_t v_i_917_, lean_object* v_b_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
uint8_t v___x_926_; 
v___x_926_ = lean_usize_dec_lt(v_i_917_, v_sz_916_);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; 
v___x_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_927_, 0, v_b_918_);
return v___x_927_;
}
else
{
lean_object* v_snd_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_1033_; 
v_snd_928_ = lean_ctor_get(v_b_918_, 1);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_b_918_);
if (v_isSharedCheck_1033_ == 0)
{
lean_object* v_unused_1034_; 
v_unused_1034_ = lean_ctor_get(v_b_918_, 0);
lean_dec(v_unused_1034_);
v___x_930_ = v_b_918_;
v_isShared_931_ = v_isSharedCheck_1033_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_snd_928_);
lean_dec(v_b_918_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_1033_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; lean_object* v_a_934_; lean_object* v_a_941_; 
v___x_932_ = lean_box(0);
v_a_941_ = lean_array_uget(v_as_915_, v_i_917_);
if (lean_obj_tag(v_a_941_) == 0)
{
v_a_934_ = v_snd_928_;
goto v___jp_933_;
}
else
{
lean_object* v_snd_942_; lean_object* v_val_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_1032_; 
v_snd_942_ = lean_ctor_get(v_snd_928_, 1);
lean_inc(v_snd_942_);
v_val_943_ = lean_ctor_get(v_a_941_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v_a_941_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_945_ = v_a_941_;
v_isShared_946_ = v_isSharedCheck_1032_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_val_943_);
lean_dec(v_a_941_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_1032_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v_fst_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_1030_; 
v_fst_947_ = lean_ctor_get(v_snd_928_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v_snd_928_);
if (v_isSharedCheck_1030_ == 0)
{
lean_object* v_unused_1031_; 
v_unused_1031_ = lean_ctor_get(v_snd_928_, 1);
lean_dec(v_unused_1031_);
v___x_949_ = v_snd_928_;
v_isShared_950_ = v_isSharedCheck_1030_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_fst_947_);
lean_dec(v_snd_928_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_1030_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v_fst_951_; lean_object* v_snd_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_1029_; 
v_fst_951_ = lean_ctor_get(v_snd_942_, 0);
v_snd_952_ = lean_ctor_get(v_snd_942_, 1);
v_isSharedCheck_1029_ = !lean_is_exclusive(v_snd_942_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_954_ = v_snd_942_;
v_isShared_955_ = v_isSharedCheck_1029_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_snd_952_);
lean_inc(v_fst_951_);
lean_dec(v_snd_942_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_1029_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v_decl_957_; 
if (lean_obj_tag(v_val_943_) == 0)
{
lean_object* v_fvarId_972_; lean_object* v_userName_973_; lean_object* v_type_974_; uint8_t v_bi_975_; uint8_t v_kind_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_993_; 
v_fvarId_972_ = lean_ctor_get(v_val_943_, 1);
v_userName_973_ = lean_ctor_get(v_val_943_, 2);
v_type_974_ = lean_ctor_get(v_val_943_, 3);
v_bi_975_ = lean_ctor_get_uint8(v_val_943_, sizeof(void*)*4);
v_kind_976_ = lean_ctor_get_uint8(v_val_943_, sizeof(void*)*4 + 1);
v_isSharedCheck_993_ = !lean_is_exclusive(v_val_943_);
if (v_isSharedCheck_993_ == 0)
{
lean_object* v_unused_994_; 
v_unused_994_ = lean_ctor_get(v_val_943_, 0);
lean_dec(v_unused_994_);
v___x_978_ = v_val_943_;
v_isShared_979_ = v_isSharedCheck_993_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_type_974_);
lean_inc(v_userName_973_);
lean_inc(v_fvarId_972_);
lean_dec(v_val_943_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_993_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_980_; 
v___x_980_ = l_Lean_Meta_Sym_preprocessExpr(v_type_974_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_983_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_980_, 1);
lean_inc(v_snd_952_);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 3, v_a_981_);
lean_ctor_set(v___x_978_, 0, v_snd_952_);
v___x_983_ = v___x_978_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_snd_952_);
lean_ctor_set(v_reuseFailAlloc_984_, 1, v_fvarId_972_);
lean_ctor_set(v_reuseFailAlloc_984_, 2, v_userName_973_);
lean_ctor_set(v_reuseFailAlloc_984_, 3, v_a_981_);
lean_ctor_set_uint8(v_reuseFailAlloc_984_, sizeof(void*)*4, v_bi_975_);
lean_ctor_set_uint8(v_reuseFailAlloc_984_, sizeof(void*)*4 + 1, v_kind_976_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
v_decl_957_ = v___x_983_;
goto v___jp_956_;
}
}
else
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_del_object(v___x_978_);
lean_dec(v_userName_973_);
lean_dec(v_fvarId_972_);
lean_del_object(v___x_954_);
lean_dec(v_snd_952_);
lean_dec(v_fst_951_);
lean_del_object(v___x_949_);
lean_dec(v_fst_947_);
lean_del_object(v___x_945_);
lean_del_object(v___x_930_);
v_a_985_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_980_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_980_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
}
else
{
lean_object* v_fvarId_995_; lean_object* v_userName_996_; lean_object* v_type_997_; lean_object* v_value_998_; uint8_t v_nondep_999_; uint8_t v_kind_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1027_; 
v_fvarId_995_ = lean_ctor_get(v_val_943_, 1);
v_userName_996_ = lean_ctor_get(v_val_943_, 2);
v_type_997_ = lean_ctor_get(v_val_943_, 3);
v_value_998_ = lean_ctor_get(v_val_943_, 4);
v_nondep_999_ = lean_ctor_get_uint8(v_val_943_, sizeof(void*)*5);
v_kind_1000_ = lean_ctor_get_uint8(v_val_943_, sizeof(void*)*5 + 1);
v_isSharedCheck_1027_ = !lean_is_exclusive(v_val_943_);
if (v_isSharedCheck_1027_ == 0)
{
lean_object* v_unused_1028_; 
v_unused_1028_ = lean_ctor_get(v_val_943_, 0);
lean_dec(v_unused_1028_);
v___x_1002_ = v_val_943_;
v_isShared_1003_ = v_isSharedCheck_1027_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_value_998_);
lean_inc(v_type_997_);
lean_inc(v_userName_996_);
lean_inc(v_fvarId_995_);
lean_dec(v_val_943_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1027_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1004_; 
v___x_1004_ = l_Lean_Meta_Sym_preprocessExpr(v_type_997_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1006_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_1004_, 1);
v___x_1006_ = l_Lean_Meta_Sym_preprocessExpr(v_value_998_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1009_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref_known(v___x_1006_, 1);
lean_inc(v_snd_952_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 4, v_a_1007_);
lean_ctor_set(v___x_1002_, 3, v_a_1005_);
lean_ctor_set(v___x_1002_, 0, v_snd_952_);
v___x_1009_ = v___x_1002_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_snd_952_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_fvarId_995_);
lean_ctor_set(v_reuseFailAlloc_1010_, 2, v_userName_996_);
lean_ctor_set(v_reuseFailAlloc_1010_, 3, v_a_1005_);
lean_ctor_set(v_reuseFailAlloc_1010_, 4, v_a_1007_);
lean_ctor_set_uint8(v_reuseFailAlloc_1010_, sizeof(void*)*5, v_nondep_999_);
lean_ctor_set_uint8(v_reuseFailAlloc_1010_, sizeof(void*)*5 + 1, v_kind_1000_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
v_decl_957_ = v___x_1009_;
goto v___jp_956_;
}
}
else
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
lean_dec(v_a_1005_);
lean_del_object(v___x_1002_);
lean_dec(v_userName_996_);
lean_dec(v_fvarId_995_);
lean_del_object(v___x_954_);
lean_dec(v_snd_952_);
lean_dec(v_fst_951_);
lean_del_object(v___x_949_);
lean_dec(v_fst_947_);
lean_del_object(v___x_945_);
lean_del_object(v___x_930_);
v_a_1011_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v___x_1006_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_1006_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
lean_del_object(v___x_1002_);
lean_dec_ref(v_value_998_);
lean_dec(v_userName_996_);
lean_dec(v_fvarId_995_);
lean_del_object(v___x_954_);
lean_dec(v_snd_952_);
lean_dec(v_fst_951_);
lean_del_object(v___x_949_);
lean_dec(v_fst_947_);
lean_del_object(v___x_945_);
lean_del_object(v___x_930_);
v_a_1019_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___x_1004_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1004_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
}
v___jp_956_:
{
lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_961_; 
v___x_958_ = lean_unsigned_to_nat(1u);
v___x_959_ = lean_nat_add(v_snd_952_, v___x_958_);
lean_dec(v_snd_952_);
lean_inc_ref(v_decl_957_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v_decl_957_);
v___x_961_ = v___x_945_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_decl_957_);
v___x_961_ = v_reuseFailAlloc_971_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_966_; 
v___x_962_ = l_Lean_PersistentArray_push___redArg(v_fst_951_, v___x_961_);
v___x_963_ = l_Lean_LocalDecl_fvarId(v_decl_957_);
v___x_964_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0___redArg(v_fst_947_, v___x_963_, v_decl_957_);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 1, v___x_959_);
lean_ctor_set(v___x_954_, 0, v___x_962_);
v___x_966_ = v___x_954_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_962_);
lean_ctor_set(v_reuseFailAlloc_970_, 1, v___x_959_);
v___x_966_ = v_reuseFailAlloc_970_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
lean_object* v___x_968_; 
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 1, v___x_966_);
lean_ctor_set(v___x_949_, 0, v___x_964_);
v___x_968_ = v___x_949_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___x_964_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v___x_966_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
v_a_934_ = v___x_968_;
goto v___jp_933_;
}
}
}
}
}
}
}
}
v___jp_933_:
{
lean_object* v___x_936_; 
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 1, v_a_934_);
lean_ctor_set(v___x_930_, 0, v___x_932_);
v___x_936_ = v___x_930_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_932_);
lean_ctor_set(v_reuseFailAlloc_940_, 1, v_a_934_);
v___x_936_ = v_reuseFailAlloc_940_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
size_t v___x_937_; size_t v___x_938_; lean_object* v___x_939_; 
v___x_937_ = ((size_t)1ULL);
v___x_938_ = lean_usize_add(v_i_917_, v___x_937_);
v___x_939_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3_spec__8(v_as_915_, v_sz_916_, v___x_938_, v___x_936_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
return v___x_939_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3___boxed(lean_object* v_as_1035_, lean_object* v_sz_1036_, lean_object* v_i_1037_, lean_object* v_b_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
size_t v_sz_boxed_1046_; size_t v_i_boxed_1047_; lean_object* v_res_1048_; 
v_sz_boxed_1046_ = lean_unbox_usize(v_sz_1036_);
lean_dec(v_sz_1036_);
v_i_boxed_1047_ = lean_unbox_usize(v_i_1037_);
lean_dec(v_i_1037_);
v_res_1048_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3(v_as_1035_, v_sz_boxed_1046_, v_i_boxed_1047_, v_b_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1042_);
lean_dec_ref(v___y_1041_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec_ref(v_as_1035_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1(lean_object* v_t_1049_, lean_object* v_init_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v_root_1058_; lean_object* v_tail_1059_; lean_object* v___x_1060_; 
v_root_1058_ = lean_ctor_get(v_t_1049_, 0);
v_tail_1059_ = lean_ctor_get(v_t_1049_, 1);
lean_inc_ref(v_init_1050_);
v___x_1060_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__2(v_init_1050_, v_root_1058_, v_init_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
lean_dec_ref(v_init_1050_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1097_; 
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1063_ = v___x_1060_;
v_isShared_1064_ = v_isSharedCheck_1097_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1060_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1097_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
if (lean_obj_tag(v_a_1061_) == 0)
{
lean_object* v_a_1065_; lean_object* v___x_1067_; 
v_a_1065_ = lean_ctor_get(v_a_1061_, 0);
lean_inc(v_a_1065_);
lean_dec_ref_known(v_a_1061_, 1);
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 0, v_a_1065_);
v___x_1067_ = v___x_1063_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1065_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; size_t v_sz_1072_; size_t v___x_1073_; lean_object* v___x_1074_; 
lean_del_object(v___x_1063_);
v_a_1069_ = lean_ctor_get(v_a_1061_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v_a_1061_, 1);
v___x_1070_ = lean_box(0);
v___x_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
lean_ctor_set(v___x_1071_, 1, v_a_1069_);
v_sz_1072_ = lean_array_size(v_tail_1059_);
v___x_1073_ = ((size_t)0ULL);
v___x_1074_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1_spec__3(v_tail_1059_, v_sz_1072_, v___x_1073_, v___x_1071_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1088_; 
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1077_ = v___x_1074_;
v_isShared_1078_ = v_isSharedCheck_1088_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1074_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1088_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v_fst_1079_; 
v_fst_1079_ = lean_ctor_get(v_a_1075_, 0);
if (lean_obj_tag(v_fst_1079_) == 0)
{
lean_object* v_snd_1080_; lean_object* v___x_1082_; 
v_snd_1080_ = lean_ctor_get(v_a_1075_, 1);
lean_inc(v_snd_1080_);
lean_dec(v_a_1075_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v_snd_1080_);
v___x_1082_ = v___x_1077_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_snd_1080_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
else
{
lean_object* v_val_1084_; lean_object* v___x_1086_; 
lean_inc_ref(v_fst_1079_);
lean_dec(v_a_1075_);
v_val_1084_ = lean_ctor_get(v_fst_1079_, 0);
lean_inc(v_val_1084_);
lean_dec_ref_known(v_fst_1079_, 1);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v_val_1084_);
v___x_1086_ = v___x_1077_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_val_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
v_a_1089_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1074_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1074_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
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
return v___x_1094_;
}
}
}
}
}
}
else
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1105_; 
v_a_1098_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1100_ = v___x_1060_;
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1060_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
if (v_isShared_1101_ == 0)
{
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_a_1098_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
return v___x_1103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1___boxed(lean_object* v_t_1106_, lean_object* v_init_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1(v_t_1106_, v_init_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_);
lean_dec(v___y_1113_);
lean_dec_ref(v___y_1112_);
lean_dec(v___y_1111_);
lean_dec_ref(v___y_1110_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec_ref(v_t_1106_);
return v_res_1115_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__0(void){
_start:
{
lean_object* v___x_1116_; 
v___x_1116_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1116_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__1(void){
_start:
{
lean_object* v___x_1117_; lean_object* v_fvarIdToDecl_1118_; 
v___x_1117_ = lean_obj_once(&l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__0, &l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__0_once, _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__0);
v_fvarIdToDecl_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_fvarIdToDecl_1118_, 0, v___x_1117_);
return v_fvarIdToDecl_1118_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__2(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1119_ = lean_unsigned_to_nat(32u);
v___x_1120_ = lean_mk_empty_array_with_capacity(v___x_1119_);
v___x_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
return v___x_1121_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__3(void){
_start:
{
size_t v___x_1122_; lean_object* v_index_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v_decls_1127_; 
v___x_1122_ = ((size_t)5ULL);
v_index_1123_ = lean_unsigned_to_nat(0u);
v___x_1124_ = lean_unsigned_to_nat(32u);
v___x_1125_ = lean_mk_empty_array_with_capacity(v___x_1124_);
v___x_1126_ = lean_obj_once(&l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__2, &l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__2_once, _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__2);
v_decls_1127_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_decls_1127_, 0, v___x_1126_);
lean_ctor_set(v_decls_1127_, 1, v___x_1125_);
lean_ctor_set(v_decls_1127_, 2, v_index_1123_);
lean_ctor_set(v_decls_1127_, 3, v_index_1123_);
lean_ctor_set_usize(v_decls_1127_, 4, v___x_1122_);
return v_decls_1127_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__4(void){
_start:
{
lean_object* v_index_1128_; lean_object* v_decls_1129_; lean_object* v___x_1130_; 
v_index_1128_ = lean_unsigned_to_nat(0u);
v_decls_1129_ = lean_obj_once(&l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__3, &l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__3_once, _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__3);
v___x_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1130_, 0, v_decls_1129_);
lean_ctor_set(v___x_1130_, 1, v_index_1128_);
return v___x_1130_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__5(void){
_start:
{
lean_object* v___x_1131_; lean_object* v_fvarIdToDecl_1132_; lean_object* v___x_1133_; 
v___x_1131_ = lean_obj_once(&l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__4, &l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__4_once, _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__4);
v_fvarIdToDecl_1132_ = lean_obj_once(&l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__1, &l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__1_once, _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__1);
v___x_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1133_, 0, v_fvarIdToDecl_1132_);
lean_ctor_set(v___x_1133_, 1, v___x_1131_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx(lean_object* v_lctx_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_){
_start:
{
lean_object* v_decls_1142_; lean_object* v_auxDeclToFullName_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1171_; 
v_decls_1142_ = lean_ctor_get(v_lctx_1134_, 1);
v_auxDeclToFullName_1143_ = lean_ctor_get(v_lctx_1134_, 2);
v_isSharedCheck_1171_ = !lean_is_exclusive(v_lctx_1134_);
if (v_isSharedCheck_1171_ == 0)
{
lean_object* v_unused_1172_; 
v_unused_1172_ = lean_ctor_get(v_lctx_1134_, 0);
lean_dec(v_unused_1172_);
v___x_1145_ = v_lctx_1134_;
v_isShared_1146_ = v_isSharedCheck_1171_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_auxDeclToFullName_1143_);
lean_inc(v_decls_1142_);
lean_dec(v_lctx_1134_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1171_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = lean_obj_once(&l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__5, &l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__5_once, _init_l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___closed__5);
v___x_1148_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__1(v_decls_1142_, v___x_1147_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_);
lean_dec_ref(v_decls_1142_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1162_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1151_ = v___x_1148_;
v_isShared_1152_ = v_isSharedCheck_1162_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___x_1148_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1162_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v_snd_1153_; lean_object* v_fst_1154_; lean_object* v_fst_1155_; lean_object* v___x_1157_; 
v_snd_1153_ = lean_ctor_get(v_a_1149_, 1);
lean_inc(v_snd_1153_);
v_fst_1154_ = lean_ctor_get(v_a_1149_, 0);
lean_inc(v_fst_1154_);
lean_dec(v_a_1149_);
v_fst_1155_ = lean_ctor_get(v_snd_1153_, 0);
lean_inc(v_fst_1155_);
lean_dec(v_snd_1153_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 1, v_fst_1155_);
lean_ctor_set(v___x_1145_, 0, v_fst_1154_);
v___x_1157_ = v___x_1145_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_fst_1154_);
lean_ctor_set(v_reuseFailAlloc_1161_, 1, v_fst_1155_);
lean_ctor_set(v_reuseFailAlloc_1161_, 2, v_auxDeclToFullName_1143_);
v___x_1157_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1159_; 
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 0, v___x_1157_);
v___x_1159_ = v___x_1151_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1157_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
else
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1170_; 
lean_del_object(v___x_1145_);
lean_dec(v_auxDeclToFullName_1143_);
v_a_1163_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1165_ = v___x_1148_;
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1148_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1168_; 
if (v_isShared_1166_ == 0)
{
v___x_1168_ = v___x_1165_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_a_1163_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx___boxed(lean_object* v_lctx_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx(v_lctx_1173_, v_a_1174_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_);
lean_dec(v_a_1179_);
lean_dec_ref(v_a_1178_);
lean_dec(v_a_1177_);
lean_dec_ref(v_a_1176_);
lean_dec(v_a_1175_);
lean_dec_ref(v_a_1174_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0(lean_object* v_00_u03b2_1182_, lean_object* v_x_1183_, lean_object* v_x_1184_, lean_object* v_x_1185_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0___redArg(v_x_1183_, v_x_1184_, v_x_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0(lean_object* v_00_u03b2_1187_, lean_object* v_x_1188_, size_t v_x_1189_, size_t v_x_1190_, lean_object* v_x_1191_, lean_object* v_x_1192_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg(v_x_1188_, v_x_1189_, v_x_1190_, v_x_1191_, v_x_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1194_, lean_object* v_x_1195_, lean_object* v_x_1196_, lean_object* v_x_1197_, lean_object* v_x_1198_, lean_object* v_x_1199_){
_start:
{
size_t v_x_10702__boxed_1200_; size_t v_x_10703__boxed_1201_; lean_object* v_res_1202_; 
v_x_10702__boxed_1200_ = lean_unbox_usize(v_x_1196_);
lean_dec(v_x_1196_);
v_x_10703__boxed_1201_ = lean_unbox_usize(v_x_1197_);
lean_dec(v_x_1197_);
v_res_1202_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0(v_00_u03b2_1194_, v_x_1195_, v_x_10702__boxed_1200_, v_x_10703__boxed_1201_, v_x_1198_, v_x_1199_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1203_, lean_object* v_n_1204_, lean_object* v_k_1205_, lean_object* v_v_1206_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1___redArg(v_n_1204_, v_k_1205_, v_v_1206_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1208_, size_t v_depth_1209_, lean_object* v_keys_1210_, lean_object* v_vals_1211_, lean_object* v_heq_1212_, lean_object* v_i_1213_, lean_object* v_entries_1214_){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2___redArg(v_depth_1209_, v_keys_1210_, v_vals_1211_, v_i_1213_, v_entries_1214_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1216_, lean_object* v_depth_1217_, lean_object* v_keys_1218_, lean_object* v_vals_1219_, lean_object* v_heq_1220_, lean_object* v_i_1221_, lean_object* v_entries_1222_){
_start:
{
size_t v_depth_boxed_1223_; lean_object* v_res_1224_; 
v_depth_boxed_1223_ = lean_unbox_usize(v_depth_1217_);
lean_dec(v_depth_1217_);
v_res_1224_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__2(v_00_u03b2_1216_, v_depth_boxed_1223_, v_keys_1218_, v_vals_1219_, v_heq_1220_, v_i_1221_, v_entries_1222_);
lean_dec_ref(v_vals_1219_);
lean_dec_ref(v_keys_1218_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1225_, lean_object* v_x_1226_, lean_object* v_x_1227_, lean_object* v_x_1228_, lean_object* v_x_1229_){
_start:
{
lean_object* v___x_1230_; 
v___x_1230_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1226_, v_x_1227_, v_x_1228_, v_x_1229_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1231_, lean_object* v_x_1232_, lean_object* v_x_1233_, lean_object* v_x_1234_){
_start:
{
lean_object* v_ks_1235_; lean_object* v_vs_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1260_; 
v_ks_1235_ = lean_ctor_get(v_x_1231_, 0);
v_vs_1236_ = lean_ctor_get(v_x_1231_, 1);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_x_1231_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1238_ = v_x_1231_;
v_isShared_1239_ = v_isSharedCheck_1260_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_vs_1236_);
lean_inc(v_ks_1235_);
lean_dec(v_x_1231_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1260_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1240_; uint8_t v___x_1241_; 
v___x_1240_ = lean_array_get_size(v_ks_1235_);
v___x_1241_ = lean_nat_dec_lt(v_x_1232_, v___x_1240_);
if (v___x_1241_ == 0)
{
lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1245_; 
lean_dec(v_x_1232_);
v___x_1242_ = lean_array_push(v_ks_1235_, v_x_1233_);
v___x_1243_ = lean_array_push(v_vs_1236_, v_x_1234_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 1, v___x_1243_);
lean_ctor_set(v___x_1238_, 0, v___x_1242_);
v___x_1245_ = v___x_1238_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1242_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v___x_1243_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
else
{
lean_object* v_k_x27_1247_; uint8_t v___x_1248_; 
v_k_x27_1247_ = lean_array_fget_borrowed(v_ks_1235_, v_x_1232_);
v___x_1248_ = l_Lean_instBEqMVarId_beq(v_x_1233_, v_k_x27_1247_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1250_; 
if (v_isShared_1239_ == 0)
{
v___x_1250_ = v___x_1238_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_ks_1235_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_vs_1236_);
v___x_1250_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = lean_unsigned_to_nat(1u);
v___x_1252_ = lean_nat_add(v_x_1232_, v___x_1251_);
lean_dec(v_x_1232_);
v_x_1231_ = v___x_1250_;
v_x_1232_ = v___x_1252_;
goto _start;
}
}
else
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1255_ = lean_array_fset(v_ks_1235_, v_x_1232_, v_x_1233_);
v___x_1256_ = lean_array_fset(v_vs_1236_, v_x_1232_, v_x_1234_);
lean_dec(v_x_1232_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 1, v___x_1256_);
lean_ctor_set(v___x_1238_, 0, v___x_1255_);
v___x_1258_ = v___x_1238_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1255_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v___x_1256_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_1261_, lean_object* v_k_1262_, lean_object* v_v_1263_){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1264_ = lean_unsigned_to_nat(0u);
v___x_1265_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_1261_, v___x_1264_, v_k_1262_, v_v_1263_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1266_, size_t v_x_1267_, size_t v_x_1268_, lean_object* v_x_1269_, lean_object* v_x_1270_){
_start:
{
if (lean_obj_tag(v_x_1266_) == 0)
{
lean_object* v_es_1271_; size_t v___x_1272_; size_t v___x_1273_; lean_object* v_j_1274_; lean_object* v___x_1275_; uint8_t v___x_1276_; 
v_es_1271_ = lean_ctor_get(v_x_1266_, 0);
v___x_1272_ = ((size_t)31ULL);
v___x_1273_ = lean_usize_land(v_x_1267_, v___x_1272_);
v_j_1274_ = lean_usize_to_nat(v___x_1273_);
v___x_1275_ = lean_array_get_size(v_es_1271_);
v___x_1276_ = lean_nat_dec_lt(v_j_1274_, v___x_1275_);
if (v___x_1276_ == 0)
{
lean_dec(v_j_1274_);
lean_dec(v_x_1270_);
lean_dec(v_x_1269_);
return v_x_1266_;
}
else
{
lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1315_; 
lean_inc_ref(v_es_1271_);
v_isSharedCheck_1315_ = !lean_is_exclusive(v_x_1266_);
if (v_isSharedCheck_1315_ == 0)
{
lean_object* v_unused_1316_; 
v_unused_1316_ = lean_ctor_get(v_x_1266_, 0);
lean_dec(v_unused_1316_);
v___x_1278_ = v_x_1266_;
v_isShared_1279_ = v_isSharedCheck_1315_;
goto v_resetjp_1277_;
}
else
{
lean_dec(v_x_1266_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1315_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v_v_1280_; lean_object* v___x_1281_; lean_object* v_xs_x27_1282_; lean_object* v___y_1284_; 
v_v_1280_ = lean_array_fget(v_es_1271_, v_j_1274_);
v___x_1281_ = lean_box(0);
v_xs_x27_1282_ = lean_array_fset(v_es_1271_, v_j_1274_, v___x_1281_);
switch(lean_obj_tag(v_v_1280_))
{
case 0:
{
lean_object* v_key_1289_; lean_object* v_val_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1300_; 
v_key_1289_ = lean_ctor_get(v_v_1280_, 0);
v_val_1290_ = lean_ctor_get(v_v_1280_, 1);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_v_1280_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1292_ = v_v_1280_;
v_isShared_1293_ = v_isSharedCheck_1300_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_val_1290_);
lean_inc(v_key_1289_);
lean_dec(v_v_1280_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1300_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
uint8_t v___x_1294_; 
v___x_1294_ = l_Lean_instBEqMVarId_beq(v_x_1269_, v_key_1289_);
if (v___x_1294_ == 0)
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
lean_del_object(v___x_1292_);
v___x_1295_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1289_, v_val_1290_, v_x_1269_, v_x_1270_);
v___x_1296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
v___y_1284_ = v___x_1296_;
goto v___jp_1283_;
}
else
{
lean_object* v___x_1298_; 
lean_dec(v_val_1290_);
lean_dec(v_key_1289_);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 1, v_x_1270_);
lean_ctor_set(v___x_1292_, 0, v_x_1269_);
v___x_1298_ = v___x_1292_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_x_1269_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v_x_1270_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
v___y_1284_ = v___x_1298_;
goto v___jp_1283_;
}
}
}
}
case 1:
{
lean_object* v_node_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1313_; 
v_node_1301_ = lean_ctor_get(v_v_1280_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v_v_1280_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1303_ = v_v_1280_;
v_isShared_1304_ = v_isSharedCheck_1313_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_node_1301_);
lean_dec(v_v_1280_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1313_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
size_t v___x_1305_; size_t v___x_1306_; size_t v___x_1307_; size_t v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1311_; 
v___x_1305_ = ((size_t)5ULL);
v___x_1306_ = lean_usize_shift_right(v_x_1267_, v___x_1305_);
v___x_1307_ = ((size_t)1ULL);
v___x_1308_ = lean_usize_add(v_x_1268_, v___x_1307_);
v___x_1309_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1___redArg(v_node_1301_, v___x_1306_, v___x_1308_, v_x_1269_, v_x_1270_);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v___x_1309_);
v___x_1311_ = v___x_1303_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___x_1309_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
v___y_1284_ = v___x_1311_;
goto v___jp_1283_;
}
}
}
default: 
{
lean_object* v___x_1314_; 
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v_x_1269_);
lean_ctor_set(v___x_1314_, 1, v_x_1270_);
v___y_1284_ = v___x_1314_;
goto v___jp_1283_;
}
}
v___jp_1283_:
{
lean_object* v___x_1285_; lean_object* v___x_1287_; 
v___x_1285_ = lean_array_fset(v_xs_x27_1282_, v_j_1274_, v___y_1284_);
lean_dec(v_j_1274_);
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 0, v___x_1285_);
v___x_1287_ = v___x_1278_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v___x_1285_);
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
lean_object* v_ks_1317_; lean_object* v_vs_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1336_; 
v_ks_1317_ = lean_ctor_get(v_x_1266_, 0);
v_vs_1318_ = lean_ctor_get(v_x_1266_, 1);
v_isSharedCheck_1336_ = !lean_is_exclusive(v_x_1266_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1320_ = v_x_1266_;
v_isShared_1321_ = v_isSharedCheck_1336_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_vs_1318_);
lean_inc(v_ks_1317_);
lean_dec(v_x_1266_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1336_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_ks_1317_);
lean_ctor_set(v_reuseFailAlloc_1335_, 1, v_vs_1318_);
v___x_1323_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
lean_object* v_newNode_1324_; size_t v___x_1325_; uint8_t v___x_1326_; 
v_newNode_1324_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2___redArg(v___x_1323_, v_x_1269_, v_x_1270_);
v___x_1325_ = ((size_t)7ULL);
v___x_1326_ = lean_usize_dec_le(v___x_1325_, v_x_1268_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1327_; lean_object* v___x_1328_; uint8_t v___x_1329_; 
v___x_1327_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1324_);
v___x_1328_ = lean_unsigned_to_nat(4u);
v___x_1329_ = lean_nat_dec_lt(v___x_1327_, v___x_1328_);
lean_dec(v___x_1327_);
if (v___x_1329_ == 0)
{
lean_object* v_ks_1330_; lean_object* v_vs_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v_ks_1330_ = lean_ctor_get(v_newNode_1324_, 0);
lean_inc_ref(v_ks_1330_);
v_vs_1331_ = lean_ctor_get(v_newNode_1324_, 1);
lean_inc_ref(v_vs_1331_);
lean_dec_ref(v_newNode_1324_);
v___x_1332_ = lean_unsigned_to_nat(0u);
v___x_1333_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx_spec__0_spec__0___redArg___closed__0);
v___x_1334_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1268_, v_ks_1330_, v_vs_1331_, v___x_1332_, v___x_1333_);
lean_dec_ref(v_vs_1331_);
lean_dec_ref(v_ks_1330_);
return v___x_1334_;
}
else
{
return v_newNode_1324_;
}
}
else
{
return v_newNode_1324_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_1337_, lean_object* v_keys_1338_, lean_object* v_vals_1339_, lean_object* v_i_1340_, lean_object* v_entries_1341_){
_start:
{
lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1342_ = lean_array_get_size(v_keys_1338_);
v___x_1343_ = lean_nat_dec_lt(v_i_1340_, v___x_1342_);
if (v___x_1343_ == 0)
{
lean_dec(v_i_1340_);
return v_entries_1341_;
}
else
{
lean_object* v_k_1344_; lean_object* v_v_1345_; uint64_t v___x_1346_; size_t v_h_1347_; size_t v___x_1348_; lean_object* v___x_1349_; size_t v___x_1350_; size_t v___x_1351_; size_t v___x_1352_; size_t v_h_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v_k_1344_ = lean_array_fget_borrowed(v_keys_1338_, v_i_1340_);
v_v_1345_ = lean_array_fget_borrowed(v_vals_1339_, v_i_1340_);
v___x_1346_ = l_Lean_instHashableMVarId_hash(v_k_1344_);
v_h_1347_ = lean_uint64_to_usize(v___x_1346_);
v___x_1348_ = ((size_t)5ULL);
v___x_1349_ = lean_unsigned_to_nat(1u);
v___x_1350_ = ((size_t)1ULL);
v___x_1351_ = lean_usize_sub(v_depth_1337_, v___x_1350_);
v___x_1352_ = lean_usize_mul(v___x_1348_, v___x_1351_);
v_h_1353_ = lean_usize_shift_right(v_h_1347_, v___x_1352_);
v___x_1354_ = lean_nat_add(v_i_1340_, v___x_1349_);
lean_dec(v_i_1340_);
lean_inc(v_v_1345_);
lean_inc(v_k_1344_);
v___x_1355_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1___redArg(v_entries_1341_, v_h_1353_, v_depth_1337_, v_k_1344_, v_v_1345_);
v_i_1340_ = v___x_1354_;
v_entries_1341_ = v___x_1355_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_1357_, lean_object* v_keys_1358_, lean_object* v_vals_1359_, lean_object* v_i_1360_, lean_object* v_entries_1361_){
_start:
{
size_t v_depth_boxed_1362_; lean_object* v_res_1363_; 
v_depth_boxed_1362_ = lean_unbox_usize(v_depth_1357_);
lean_dec(v_depth_1357_);
v_res_1363_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_1362_, v_keys_1358_, v_vals_1359_, v_i_1360_, v_entries_1361_);
lean_dec_ref(v_vals_1359_);
lean_dec_ref(v_keys_1358_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1364_, lean_object* v_x_1365_, lean_object* v_x_1366_, lean_object* v_x_1367_, lean_object* v_x_1368_){
_start:
{
size_t v_x_2266__boxed_1369_; size_t v_x_2267__boxed_1370_; lean_object* v_res_1371_; 
v_x_2266__boxed_1369_ = lean_unbox_usize(v_x_1365_);
lean_dec(v_x_1365_);
v_x_2267__boxed_1370_ = lean_unbox_usize(v_x_1366_);
lean_dec(v_x_1366_);
v_res_1371_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1___redArg(v_x_1364_, v_x_2266__boxed_1369_, v_x_2267__boxed_1370_, v_x_1367_, v_x_1368_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0___redArg(lean_object* v_x_1372_, lean_object* v_x_1373_, lean_object* v_x_1374_){
_start:
{
uint64_t v___x_1375_; size_t v___x_1376_; size_t v___x_1377_; lean_object* v___x_1378_; 
v___x_1375_ = l_Lean_instHashableMVarId_hash(v_x_1373_);
v___x_1376_ = lean_uint64_to_usize(v___x_1375_);
v___x_1377_ = ((size_t)1ULL);
v___x_1378_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1___redArg(v_x_1372_, v___x_1376_, v___x_1377_, v_x_1373_, v_x_1374_);
return v___x_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0___redArg(lean_object* v_mvarId_1379_, lean_object* v_val_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v___x_1383_; lean_object* v_mctx_1384_; lean_object* v_cache_1385_; lean_object* v_zetaDeltaFVarIds_1386_; lean_object* v_postponed_1387_; lean_object* v_diag_1388_; lean_object* v_rewriteFires_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1419_; 
v___x_1383_ = lean_st_ref_take(v___y_1381_);
v_mctx_1384_ = lean_ctor_get(v___x_1383_, 0);
v_cache_1385_ = lean_ctor_get(v___x_1383_, 1);
v_zetaDeltaFVarIds_1386_ = lean_ctor_get(v___x_1383_, 2);
v_postponed_1387_ = lean_ctor_get(v___x_1383_, 3);
v_diag_1388_ = lean_ctor_get(v___x_1383_, 4);
v_rewriteFires_1389_ = lean_ctor_get(v___x_1383_, 5);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1391_ = v___x_1383_;
v_isShared_1392_ = v_isSharedCheck_1419_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_rewriteFires_1389_);
lean_inc(v_diag_1388_);
lean_inc(v_postponed_1387_);
lean_inc(v_zetaDeltaFVarIds_1386_);
lean_inc(v_cache_1385_);
lean_inc(v_mctx_1384_);
lean_dec(v___x_1383_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1419_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v_depth_1393_; lean_object* v_levelAssignDepth_1394_; lean_object* v_lmvarCounter_1395_; lean_object* v_mvarCounter_1396_; lean_object* v_lDecls_1397_; lean_object* v_decls_1398_; lean_object* v_userNames_1399_; lean_object* v_lAssignment_1400_; lean_object* v_eAssignment_1401_; lean_object* v_dAssignment_1402_; lean_object* v_instanceTypedMVars_1403_; lean_object* v_synthNormMemo_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1418_; 
v_depth_1393_ = lean_ctor_get(v_mctx_1384_, 0);
v_levelAssignDepth_1394_ = lean_ctor_get(v_mctx_1384_, 1);
v_lmvarCounter_1395_ = lean_ctor_get(v_mctx_1384_, 2);
v_mvarCounter_1396_ = lean_ctor_get(v_mctx_1384_, 3);
v_lDecls_1397_ = lean_ctor_get(v_mctx_1384_, 4);
v_decls_1398_ = lean_ctor_get(v_mctx_1384_, 5);
v_userNames_1399_ = lean_ctor_get(v_mctx_1384_, 6);
v_lAssignment_1400_ = lean_ctor_get(v_mctx_1384_, 7);
v_eAssignment_1401_ = lean_ctor_get(v_mctx_1384_, 8);
v_dAssignment_1402_ = lean_ctor_get(v_mctx_1384_, 9);
v_instanceTypedMVars_1403_ = lean_ctor_get(v_mctx_1384_, 10);
v_synthNormMemo_1404_ = lean_ctor_get(v_mctx_1384_, 11);
v_isSharedCheck_1418_ = !lean_is_exclusive(v_mctx_1384_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1406_ = v_mctx_1384_;
v_isShared_1407_ = v_isSharedCheck_1418_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_synthNormMemo_1404_);
lean_inc(v_instanceTypedMVars_1403_);
lean_inc(v_dAssignment_1402_);
lean_inc(v_eAssignment_1401_);
lean_inc(v_lAssignment_1400_);
lean_inc(v_userNames_1399_);
lean_inc(v_decls_1398_);
lean_inc(v_lDecls_1397_);
lean_inc(v_mvarCounter_1396_);
lean_inc(v_lmvarCounter_1395_);
lean_inc(v_levelAssignDepth_1394_);
lean_inc(v_depth_1393_);
lean_dec(v_mctx_1384_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1418_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1411_; 
v___x_1408_ = lean_box(0);
v___x_1409_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0___redArg(v_eAssignment_1401_, v_mvarId_1379_, v_val_1380_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 8, v___x_1409_);
v___x_1411_ = v___x_1406_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_depth_1393_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v_levelAssignDepth_1394_);
lean_ctor_set(v_reuseFailAlloc_1417_, 2, v_lmvarCounter_1395_);
lean_ctor_set(v_reuseFailAlloc_1417_, 3, v_mvarCounter_1396_);
lean_ctor_set(v_reuseFailAlloc_1417_, 4, v_lDecls_1397_);
lean_ctor_set(v_reuseFailAlloc_1417_, 5, v_decls_1398_);
lean_ctor_set(v_reuseFailAlloc_1417_, 6, v_userNames_1399_);
lean_ctor_set(v_reuseFailAlloc_1417_, 7, v_lAssignment_1400_);
lean_ctor_set(v_reuseFailAlloc_1417_, 8, v___x_1409_);
lean_ctor_set(v_reuseFailAlloc_1417_, 9, v_dAssignment_1402_);
lean_ctor_set(v_reuseFailAlloc_1417_, 10, v_instanceTypedMVars_1403_);
lean_ctor_set(v_reuseFailAlloc_1417_, 11, v_synthNormMemo_1404_);
v___x_1411_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
lean_object* v___x_1413_; 
if (v_isShared_1392_ == 0)
{
lean_ctor_set(v___x_1391_, 0, v___x_1411_);
v___x_1413_ = v___x_1391_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v___x_1411_);
lean_ctor_set(v_reuseFailAlloc_1416_, 1, v_cache_1385_);
lean_ctor_set(v_reuseFailAlloc_1416_, 2, v_zetaDeltaFVarIds_1386_);
lean_ctor_set(v_reuseFailAlloc_1416_, 3, v_postponed_1387_);
lean_ctor_set(v_reuseFailAlloc_1416_, 4, v_diag_1388_);
lean_ctor_set(v_reuseFailAlloc_1416_, 5, v_rewriteFires_1389_);
v___x_1413_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1414_ = lean_st_ref_put(v___y_1381_, v___x_1413_);
v___x_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1408_);
return v___x_1415_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0___redArg___boxed(lean_object* v_mvarId_1420_, lean_object* v_val_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0___redArg(v_mvarId_1420_, v_val_1421_, v___y_1422_);
lean_dec(v___y_1422_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_preprocessMVar(lean_object* v_mvarId_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_){
_start:
{
lean_object* v___x_1433_; 
lean_inc(v_mvarId_1425_);
v___x_1433_ = l_Lean_MVarId_getDecl(v_mvarId_1425_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v_a_1434_; lean_object* v_userName_1435_; lean_object* v_lctx_1436_; lean_object* v_type_1437_; lean_object* v_localInstances_1438_; lean_object* v___x_1439_; 
v_a_1434_ = lean_ctor_get(v___x_1433_, 0);
lean_inc(v_a_1434_);
lean_dec_ref_known(v___x_1433_, 1);
v_userName_1435_ = lean_ctor_get(v_a_1434_, 0);
lean_inc(v_userName_1435_);
v_lctx_1436_ = lean_ctor_get(v_a_1434_, 1);
lean_inc_ref(v_lctx_1436_);
v_type_1437_ = lean_ctor_get(v_a_1434_, 2);
lean_inc_ref(v_type_1437_);
v_localInstances_1438_ = lean_ctor_get(v_a_1434_, 4);
lean_inc_ref(v_localInstances_1438_);
lean_dec(v_a_1434_);
v___x_1439_ = l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_preprocessLCtx(v_lctx_1436_, v_a_1426_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; lean_object* v___x_1441_; 
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1439_, 1);
v___x_1441_ = l_Lean_Meta_Sym_preprocessExpr(v_type_1437_, v_a_1426_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_);
if (lean_obj_tag(v___x_1441_) == 0)
{
lean_object* v_a_1442_; uint8_t v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v_a_1442_ = lean_ctor_get(v___x_1441_, 0);
lean_inc(v_a_1442_);
lean_dec_ref_known(v___x_1441_, 1);
v___x_1443_ = 2;
v___x_1444_ = lean_unsigned_to_nat(0u);
v___x_1445_ = l_Lean_Meta_mkFreshExprMVarAt(v_a_1440_, v_localInstances_1438_, v_a_1442_, v___x_1443_, v_userName_1435_, v___x_1444_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1455_; 
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
lean_inc_n(v_a_1446_, 2);
lean_dec_ref_known(v___x_1445_, 1);
v___x_1447_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0___redArg(v_mvarId_1425_, v_a_1446_, v_a_1429_);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1455_ == 0)
{
lean_object* v_unused_1456_; 
v_unused_1456_ = lean_ctor_get(v___x_1447_, 0);
lean_dec(v_unused_1456_);
v___x_1449_ = v___x_1447_;
v_isShared_1450_ = v_isSharedCheck_1455_;
goto v_resetjp_1448_;
}
else
{
lean_dec(v___x_1447_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1455_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1453_; 
v___x_1451_ = l_Lean_Expr_mvarId_x21(v_a_1446_);
lean_dec(v_a_1446_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 0, v___x_1451_);
v___x_1453_ = v___x_1449_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1451_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
lean_dec(v_mvarId_1425_);
v_a_1457_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___x_1445_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1445_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
lean_dec(v_a_1440_);
lean_dec_ref(v_localInstances_1438_);
lean_dec(v_userName_1435_);
lean_dec(v_mvarId_1425_);
v_a_1465_ = lean_ctor_get(v___x_1441_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1441_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v___x_1441_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1441_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_a_1465_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
else
{
lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1480_; 
lean_dec_ref(v_localInstances_1438_);
lean_dec_ref(v_type_1437_);
lean_dec(v_userName_1435_);
lean_dec(v_mvarId_1425_);
v_a_1473_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1475_ = v___x_1439_;
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1439_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1478_; 
if (v_isShared_1476_ == 0)
{
v___x_1478_ = v___x_1475_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_a_1473_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1488_; 
lean_dec(v_mvarId_1425_);
v_a_1481_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v___x_1433_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1433_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1486_; 
if (v_isShared_1484_ == 0)
{
v___x_1486_ = v___x_1483_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_a_1481_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_preprocessMVar___boxed(lean_object* v_mvarId_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_){
_start:
{
lean_object* v_res_1497_; 
v_res_1497_ = l_Lean_Meta_Sym_preprocessMVar(v_mvarId_1489_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
lean_dec(v_a_1495_);
lean_dec_ref(v_a_1494_);
lean_dec(v_a_1493_);
lean_dec_ref(v_a_1492_);
lean_dec(v_a_1491_);
lean_dec_ref(v_a_1490_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0(lean_object* v_mvarId_1498_, lean_object* v_val_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v___x_1507_; 
v___x_1507_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0___redArg(v_mvarId_1498_, v_val_1499_, v___y_1503_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0___boxed(lean_object* v_mvarId_1508_, lean_object* v_val_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0(v_mvarId_1508_, v_val_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
lean_dec(v___y_1511_);
lean_dec_ref(v___y_1510_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0(lean_object* v_00_u03b2_1518_, lean_object* v_x_1519_, lean_object* v_x_1520_, lean_object* v_x_1521_){
_start:
{
lean_object* v___x_1522_; 
v___x_1522_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0___redArg(v_x_1519_, v_x_1520_, v_x_1521_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1523_, lean_object* v_x_1524_, size_t v_x_1525_, size_t v_x_1526_, lean_object* v_x_1527_, lean_object* v_x_1528_){
_start:
{
lean_object* v___x_1529_; 
v___x_1529_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1___redArg(v_x_1524_, v_x_1525_, v_x_1526_, v_x_1527_, v_x_1528_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1530_, lean_object* v_x_1531_, lean_object* v_x_1532_, lean_object* v_x_1533_, lean_object* v_x_1534_, lean_object* v_x_1535_){
_start:
{
size_t v_x_2615__boxed_1536_; size_t v_x_2616__boxed_1537_; lean_object* v_res_1538_; 
v_x_2615__boxed_1536_ = lean_unbox_usize(v_x_1532_);
lean_dec(v_x_1532_);
v_x_2616__boxed_1537_ = lean_unbox_usize(v_x_1533_);
lean_dec(v_x_1533_);
v_res_1538_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1(v_00_u03b2_1530_, v_x_1531_, v_x_2615__boxed_1536_, v_x_2616__boxed_1537_, v_x_1534_, v_x_1535_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1539_, lean_object* v_n_1540_, lean_object* v_k_1541_, lean_object* v_v_1542_){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2___redArg(v_n_1540_, v_k_1541_, v_v_1542_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1544_, size_t v_depth_1545_, lean_object* v_keys_1546_, lean_object* v_vals_1547_, lean_object* v_heq_1548_, lean_object* v_i_1549_, lean_object* v_entries_1550_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_1545_, v_keys_1546_, v_vals_1547_, v_i_1549_, v_entries_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1552_, lean_object* v_depth_1553_, lean_object* v_keys_1554_, lean_object* v_vals_1555_, lean_object* v_heq_1556_, lean_object* v_i_1557_, lean_object* v_entries_1558_){
_start:
{
size_t v_depth_boxed_1559_; lean_object* v_res_1560_; 
v_depth_boxed_1559_ = lean_unbox_usize(v_depth_1553_);
lean_dec(v_depth_1553_);
v_res_1560_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_1552_, v_depth_boxed_1559_, v_keys_1554_, v_vals_1555_, v_heq_1556_, v_i_1557_, v_entries_1558_);
lean_dec_ref(v_vals_1555_);
lean_dec_ref(v_keys_1554_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1561_, lean_object* v_x_1562_, lean_object* v_x_1563_, lean_object* v_x_1564_, lean_object* v_x_1565_){
_start:
{
lean_object* v___x_1566_; 
v___x_1566_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_preprocessMVar_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_1562_, v_x_1563_, v_x_1564_, v_x_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0_spec__0(lean_object* v_msgData_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_){
_start:
{
lean_object* v___x_1573_; lean_object* v_env_1574_; uint8_t v___x_1575_; lean_object* v_env_1576_; lean_object* v___x_1577_; lean_object* v_toCold_1578_; lean_object* v_mctx_1579_; lean_object* v_lctx_1580_; lean_object* v_options_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1573_ = lean_st_ref_get(v___y_1571_);
v_env_1574_ = lean_ctor_get(v___x_1573_, 0);
lean_inc_ref(v_env_1574_);
lean_dec(v___x_1573_);
v___x_1575_ = 0;
v_env_1576_ = l_Lean_Environment_setRecordingDeps(v_env_1574_, v___x_1575_);
v___x_1577_ = lean_st_ref_get(v___y_1569_);
v_toCold_1578_ = lean_ctor_get(v___y_1570_, 0);
v_mctx_1579_ = lean_ctor_get(v___x_1577_, 0);
lean_inc_ref(v_mctx_1579_);
lean_dec(v___x_1577_);
v_lctx_1580_ = lean_ctor_get(v___y_1568_, 2);
v_options_1581_ = lean_ctor_get(v_toCold_1578_, 2);
lean_inc_ref(v_options_1581_);
lean_inc_ref(v_lctx_1580_);
v___x_1582_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1582_, 0, v_env_1576_);
lean_ctor_set(v___x_1582_, 1, v_mctx_1579_);
lean_ctor_set(v___x_1582_, 2, v_lctx_1580_);
lean_ctor_set(v___x_1582_, 3, v_options_1581_);
v___x_1583_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
lean_ctor_set(v___x_1583_, 1, v_msgData_1567_);
v___x_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1583_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0_spec__0___boxed(lean_object* v_msgData_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0_spec__0(v_msgData_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0___redArg(lean_object* v_msg_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
lean_object* v_ref_1598_; lean_object* v___x_1599_; lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1608_; 
v_ref_1598_ = lean_ctor_get(v___y_1595_, 2);
v___x_1599_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0_spec__0(v_msg_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_);
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1608_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1602_ = v___x_1599_;
v_isShared_1603_ = v_isSharedCheck_1608_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1599_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1608_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1604_; lean_object* v___x_1606_; 
lean_inc(v_ref_1598_);
v___x_1604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1604_, 0, v_ref_1598_);
lean_ctor_set(v___x_1604_, 1, v_a_1600_);
if (v_isShared_1603_ == 0)
{
lean_ctor_set_tag(v___x_1602_, 1);
lean_ctor_set(v___x_1602_, 0, v___x_1604_);
v___x_1606_ = v___x_1602_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1604_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
return v___x_1606_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0___redArg___boxed(lean_object* v_msg_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0___redArg(v_msg_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
return v_res_1615_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__1(void){
_start:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1617_ = ((lean_object*)(l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__0));
v___x_1618_ = l_Lean_stringToMessageData(v___x_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared(lean_object* v_msg_1622_, lean_object* v_e_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_){
_start:
{
lean_object* v___y_1632_; lean_object* v___x_1639_; uint8_t v___x_1640_; 
v___x_1639_ = ((lean_object*)(l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__2));
v___x_1640_ = lean_string_dec_eq(v_msg_1622_, v___x_1639_);
if (v___x_1640_ == 0)
{
lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1641_ = ((lean_object*)(l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__3));
v___x_1642_ = lean_string_append(v___x_1641_, v_msg_1622_);
lean_dec_ref(v_msg_1622_);
v___x_1643_ = ((lean_object*)(l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__4));
v___x_1644_ = lean_string_append(v___x_1642_, v___x_1643_);
v___y_1632_ = v___x_1644_;
goto v___jp_1631_;
}
else
{
v___y_1632_ = v_msg_1622_;
goto v___jp_1631_;
}
v___jp_1631_:
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1633_ = l_Lean_stringToMessageData(v___y_1632_);
v___x_1634_ = lean_obj_once(&l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__1, &l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__1_once, _init_l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___closed__1);
v___x_1635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1633_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
v___x_1636_ = l_Lean_indentExpr(v_e_1623_);
v___x_1637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1635_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
v___x_1638_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0___redArg(v___x_1637_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_1629_);
return v___x_1638_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared___boxed(lean_object* v_msg_1645_, lean_object* v_e_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared(v_msg_1645_, v_e_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_);
lean_dec(v_a_1652_);
lean_dec_ref(v_a_1651_);
lean_dec(v_a_1650_);
lean_dec_ref(v_a_1649_);
lean_dec(v_a_1648_);
lean_dec_ref(v_a_1647_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0(lean_object* v_00_u03b1_1655_, lean_object* v_msg_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0___redArg(v_msg_1656_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0___boxed(lean_object* v_00_u03b1_1665_, lean_object* v_msg_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared_spec__0(v_00_u03b1_1665_, v_msg_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_);
lean_dec(v___y_1672_);
lean_dec_ref(v___y_1671_);
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1669_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1675_, lean_object* v_vals_1676_, lean_object* v_i_1677_, lean_object* v_k_1678_){
_start:
{
lean_object* v___x_1679_; uint8_t v___x_1680_; 
v___x_1679_ = lean_array_get_size(v_keys_1675_);
v___x_1680_ = lean_nat_dec_lt(v_i_1677_, v___x_1679_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; 
lean_dec(v_i_1677_);
v___x_1681_ = lean_box(0);
return v___x_1681_;
}
else
{
lean_object* v_k_x27_1682_; uint8_t v___x_1683_; 
v_k_x27_1682_ = lean_array_fget_borrowed(v_keys_1675_, v_i_1677_);
v___x_1683_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_1678_, v_k_x27_1682_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1684_; lean_object* v___x_1685_; 
v___x_1684_ = lean_unsigned_to_nat(1u);
v___x_1685_ = lean_nat_add(v_i_1677_, v___x_1684_);
lean_dec(v_i_1677_);
v_i_1677_ = v___x_1685_;
goto _start;
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1687_ = lean_array_fget_borrowed(v_vals_1676_, v_i_1677_);
lean_dec(v_i_1677_);
lean_inc(v___x_1687_);
lean_inc(v_k_x27_1682_);
v___x_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1688_, 0, v_k_x27_1682_);
lean_ctor_set(v___x_1688_, 1, v___x_1687_);
v___x_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
return v___x_1689_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1690_, lean_object* v_vals_1691_, lean_object* v_i_1692_, lean_object* v_k_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1___redArg(v_keys_1690_, v_vals_1691_, v_i_1692_, v_k_1693_);
lean_dec_ref(v_k_1693_);
lean_dec_ref(v_vals_1691_);
lean_dec_ref(v_keys_1690_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0___redArg(lean_object* v_x_1695_, size_t v_x_1696_, lean_object* v_x_1697_){
_start:
{
if (lean_obj_tag(v_x_1695_) == 0)
{
lean_object* v_es_1698_; lean_object* v___x_1699_; size_t v___x_1700_; size_t v___x_1701_; lean_object* v_j_1702_; lean_object* v___x_1703_; 
v_es_1698_ = lean_ctor_get(v_x_1695_, 0);
v___x_1699_ = lean_box(2);
v___x_1700_ = ((size_t)31ULL);
v___x_1701_ = lean_usize_land(v_x_1696_, v___x_1700_);
v_j_1702_ = lean_usize_to_nat(v___x_1701_);
v___x_1703_ = lean_array_get_borrowed(v___x_1699_, v_es_1698_, v_j_1702_);
lean_dec(v_j_1702_);
switch(lean_obj_tag(v___x_1703_))
{
case 0:
{
lean_object* v_key_1704_; lean_object* v_val_1705_; uint8_t v___x_1706_; 
v_key_1704_ = lean_ctor_get(v___x_1703_, 0);
v_val_1705_ = lean_ctor_get(v___x_1703_, 1);
v___x_1706_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_1697_, v_key_1704_);
if (v___x_1706_ == 0)
{
lean_object* v___x_1707_; 
v___x_1707_ = lean_box(0);
return v___x_1707_;
}
else
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
lean_inc(v_val_1705_);
lean_inc(v_key_1704_);
v___x_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1708_, 0, v_key_1704_);
lean_ctor_set(v___x_1708_, 1, v_val_1705_);
v___x_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1708_);
return v___x_1709_;
}
}
case 1:
{
lean_object* v_node_1710_; size_t v___x_1711_; size_t v___x_1712_; 
v_node_1710_ = lean_ctor_get(v___x_1703_, 0);
v___x_1711_ = ((size_t)5ULL);
v___x_1712_ = lean_usize_shift_right(v_x_1696_, v___x_1711_);
v_x_1695_ = v_node_1710_;
v_x_1696_ = v___x_1712_;
goto _start;
}
default: 
{
lean_object* v___x_1714_; 
v___x_1714_ = lean_box(0);
return v___x_1714_;
}
}
}
else
{
lean_object* v_ks_1715_; lean_object* v_vs_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
v_ks_1715_ = lean_ctor_get(v_x_1695_, 0);
v_vs_1716_ = lean_ctor_get(v_x_1695_, 1);
v___x_1717_ = lean_unsigned_to_nat(0u);
v___x_1718_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1___redArg(v_ks_1715_, v_vs_1716_, v___x_1717_, v_x_1697_);
return v___x_1718_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0___redArg___boxed(lean_object* v_x_1719_, lean_object* v_x_1720_, lean_object* v_x_1721_){
_start:
{
size_t v_x_7386__boxed_1722_; lean_object* v_res_1723_; 
v_x_7386__boxed_1722_ = lean_unbox_usize(v_x_1720_);
lean_dec(v_x_1720_);
v_res_1723_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0___redArg(v_x_1719_, v_x_7386__boxed_1722_, v_x_1721_);
lean_dec_ref(v_x_1721_);
lean_dec_ref(v_x_1719_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0___redArg(lean_object* v_x_1724_, lean_object* v_x_1725_){
_start:
{
uint64_t v___x_1726_; size_t v___x_1727_; lean_object* v___x_1728_; 
v___x_1726_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_1725_);
v___x_1727_ = lean_uint64_to_usize(v___x_1726_);
v___x_1728_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0___redArg(v_x_1724_, v___x_1727_, v_x_1725_);
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0___redArg___boxed(lean_object* v_x_1729_, lean_object* v_x_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0___redArg(v_x_1729_, v_x_1730_);
lean_dec_ref(v_x_1730_);
lean_dec_ref(v_x_1729_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_checkMaxShared___lam__0(lean_object* v_msg_1732_, lean_object* v_e_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v___y_1746_; lean_object* v___x_1755_; lean_object* v_share_1756_; lean_object* v___x_1757_; 
v___x_1755_ = lean_st_ref_get(v___y_1735_);
v_share_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc_ref(v_share_1756_);
lean_dec(v___x_1755_);
v___x_1757_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0___redArg(v_share_1756_, v_e_1733_);
lean_dec_ref(v_share_1756_);
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_object* v___x_1758_; 
v___x_1758_ = l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared(v_msg_1732_, v_e_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
v___y_1746_ = v___x_1758_;
goto v___jp_1745_;
}
else
{
lean_object* v_val_1759_; lean_object* v_fst_1760_; size_t v___x_1761_; size_t v___x_1762_; uint8_t v___x_1763_; 
v_val_1759_ = lean_ctor_get(v___x_1757_, 0);
lean_inc(v_val_1759_);
lean_dec_ref_known(v___x_1757_, 1);
v_fst_1760_ = lean_ctor_get(v_val_1759_, 0);
lean_inc(v_fst_1760_);
lean_dec(v_val_1759_);
v___x_1761_ = lean_ptr_addr(v_fst_1760_);
lean_dec(v_fst_1760_);
v___x_1762_ = lean_ptr_addr(v_e_1733_);
v___x_1763_ = lean_usize_dec_eq(v___x_1761_, v___x_1762_);
if (v___x_1763_ == 0)
{
lean_object* v___x_1764_; 
v___x_1764_ = l___private_Lean_Meta_Sym_Util_0__Lean_Expr_checkMaxShared_throwNotMaxShared(v_msg_1732_, v_e_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
v___y_1746_ = v___x_1764_;
goto v___jp_1745_;
}
else
{
lean_dec_ref(v_e_1733_);
lean_dec_ref(v_msg_1732_);
goto v___jp_1741_;
}
}
v___jp_1741_:
{
uint8_t v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1742_ = 1;
v___x_1743_ = lean_box(v___x_1742_);
v___x_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1743_);
return v___x_1744_;
}
v___jp_1745_:
{
lean_object* v_a_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1754_; 
v_a_1747_ = lean_ctor_get(v___y_1746_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___y_1746_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1749_ = v___y_1746_;
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_a_1747_);
lean_dec(v___y_1746_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___x_1752_; 
if (v_isShared_1750_ == 0)
{
v___x_1752_ = v___x_1749_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_a_1747_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_checkMaxShared___lam__0___boxed(lean_object* v_msg_1765_, lean_object* v_e_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l_Lean_Expr_checkMaxShared___lam__0(v_msg_1765_, v_e_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_);
lean_dec(v___y_1772_);
lean_dec_ref(v___y_1771_);
lean_dec(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec(v___y_1768_);
lean_dec_ref(v___y_1767_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4___redArg(lean_object* v_a_1775_, lean_object* v_x_1776_){
_start:
{
if (lean_obj_tag(v_x_1776_) == 0)
{
lean_object* v___x_1777_; 
v___x_1777_ = lean_box(0);
return v___x_1777_;
}
else
{
lean_object* v_key_1778_; lean_object* v_value_1779_; lean_object* v_tail_1780_; uint8_t v___x_1781_; 
v_key_1778_ = lean_ctor_get(v_x_1776_, 0);
v_value_1779_ = lean_ctor_get(v_x_1776_, 1);
v_tail_1780_ = lean_ctor_get(v_x_1776_, 2);
v___x_1781_ = lean_expr_eqv(v_key_1778_, v_a_1775_);
if (v___x_1781_ == 0)
{
v_x_1776_ = v_tail_1780_;
goto _start;
}
else
{
lean_object* v___x_1783_; 
lean_inc(v_value_1779_);
v___x_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1783_, 0, v_value_1779_);
return v___x_1783_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_a_1784_, lean_object* v_x_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4___redArg(v_a_1784_, v_x_1785_);
lean_dec(v_x_1785_);
lean_dec_ref(v_a_1784_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2___redArg(lean_object* v_m_1787_, lean_object* v_a_1788_){
_start:
{
lean_object* v_buckets_1789_; lean_object* v___x_1790_; uint64_t v___x_1791_; uint64_t v___x_1792_; uint64_t v___x_1793_; uint64_t v_fold_1794_; uint64_t v___x_1795_; uint64_t v___x_1796_; uint64_t v___x_1797_; size_t v___x_1798_; size_t v___x_1799_; size_t v___x_1800_; size_t v___x_1801_; size_t v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v_buckets_1789_ = lean_ctor_get(v_m_1787_, 1);
v___x_1790_ = lean_array_get_size(v_buckets_1789_);
v___x_1791_ = l_Lean_Expr_hash(v_a_1788_);
v___x_1792_ = 32ULL;
v___x_1793_ = lean_uint64_shift_right(v___x_1791_, v___x_1792_);
v_fold_1794_ = lean_uint64_xor(v___x_1791_, v___x_1793_);
v___x_1795_ = 16ULL;
v___x_1796_ = lean_uint64_shift_right(v_fold_1794_, v___x_1795_);
v___x_1797_ = lean_uint64_xor(v_fold_1794_, v___x_1796_);
v___x_1798_ = lean_uint64_to_usize(v___x_1797_);
v___x_1799_ = lean_usize_of_nat(v___x_1790_);
v___x_1800_ = ((size_t)1ULL);
v___x_1801_ = lean_usize_sub(v___x_1799_, v___x_1800_);
v___x_1802_ = lean_usize_land(v___x_1798_, v___x_1801_);
v___x_1803_ = lean_array_uget_borrowed(v_buckets_1789_, v___x_1802_);
v___x_1804_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4___redArg(v_a_1788_, v___x_1803_);
return v___x_1804_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2___redArg___boxed(lean_object* v_m_1805_, lean_object* v_a_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2___redArg(v_m_1805_, v_a_1806_);
lean_dec_ref(v_a_1806_);
lean_dec_ref(v_m_1805_);
return v_res_1807_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6___redArg(lean_object* v_a_1808_, lean_object* v_x_1809_){
_start:
{
if (lean_obj_tag(v_x_1809_) == 0)
{
uint8_t v___x_1810_; 
v___x_1810_ = 0;
return v___x_1810_;
}
else
{
lean_object* v_key_1811_; lean_object* v_tail_1812_; uint8_t v___x_1813_; 
v_key_1811_ = lean_ctor_get(v_x_1809_, 0);
v_tail_1812_ = lean_ctor_get(v_x_1809_, 2);
v___x_1813_ = lean_expr_eqv(v_key_1811_, v_a_1808_);
if (v___x_1813_ == 0)
{
v_x_1809_ = v_tail_1812_;
goto _start;
}
else
{
return v___x_1813_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_a_1815_, lean_object* v_x_1816_){
_start:
{
uint8_t v_res_1817_; lean_object* v_r_1818_; 
v_res_1817_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6___redArg(v_a_1815_, v_x_1816_);
lean_dec(v_x_1816_);
lean_dec_ref(v_a_1815_);
v_r_1818_ = lean_box(v_res_1817_);
return v_r_1818_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__8___redArg(lean_object* v_a_1819_, lean_object* v_b_1820_, lean_object* v_x_1821_){
_start:
{
if (lean_obj_tag(v_x_1821_) == 0)
{
lean_dec(v_b_1820_);
lean_dec_ref(v_a_1819_);
return v_x_1821_;
}
else
{
lean_object* v_key_1822_; lean_object* v_value_1823_; lean_object* v_tail_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1836_; 
v_key_1822_ = lean_ctor_get(v_x_1821_, 0);
v_value_1823_ = lean_ctor_get(v_x_1821_, 1);
v_tail_1824_ = lean_ctor_get(v_x_1821_, 2);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_x_1821_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1826_ = v_x_1821_;
v_isShared_1827_ = v_isSharedCheck_1836_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_tail_1824_);
lean_inc(v_value_1823_);
lean_inc(v_key_1822_);
lean_dec(v_x_1821_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1836_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
uint8_t v___x_1828_; 
v___x_1828_ = lean_expr_eqv(v_key_1822_, v_a_1819_);
if (v___x_1828_ == 0)
{
lean_object* v___x_1829_; lean_object* v___x_1831_; 
v___x_1829_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__8___redArg(v_a_1819_, v_b_1820_, v_tail_1824_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 2, v___x_1829_);
v___x_1831_ = v___x_1826_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_key_1822_);
lean_ctor_set(v_reuseFailAlloc_1832_, 1, v_value_1823_);
lean_ctor_set(v_reuseFailAlloc_1832_, 2, v___x_1829_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
else
{
lean_object* v___x_1834_; 
lean_dec(v_value_1823_);
lean_dec(v_key_1822_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 1, v_b_1820_);
lean_ctor_set(v___x_1826_, 0, v_a_1819_);
v___x_1834_ = v___x_1826_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1819_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v_b_1820_);
lean_ctor_set(v_reuseFailAlloc_1835_, 2, v_tail_1824_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8_spec__9___redArg(lean_object* v_x_1837_, lean_object* v_x_1838_){
_start:
{
if (lean_obj_tag(v_x_1838_) == 0)
{
return v_x_1837_;
}
else
{
lean_object* v_key_1839_; lean_object* v_value_1840_; lean_object* v_tail_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1864_; 
v_key_1839_ = lean_ctor_get(v_x_1838_, 0);
v_value_1840_ = lean_ctor_get(v_x_1838_, 1);
v_tail_1841_ = lean_ctor_get(v_x_1838_, 2);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_x_1838_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1843_ = v_x_1838_;
v_isShared_1844_ = v_isSharedCheck_1864_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_tail_1841_);
lean_inc(v_value_1840_);
lean_inc(v_key_1839_);
lean_dec(v_x_1838_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1864_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1845_; uint64_t v___x_1846_; uint64_t v___x_1847_; uint64_t v___x_1848_; uint64_t v_fold_1849_; uint64_t v___x_1850_; uint64_t v___x_1851_; uint64_t v___x_1852_; size_t v___x_1853_; size_t v___x_1854_; size_t v___x_1855_; size_t v___x_1856_; size_t v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1860_; 
v___x_1845_ = lean_array_get_size(v_x_1837_);
v___x_1846_ = l_Lean_Expr_hash(v_key_1839_);
v___x_1847_ = 32ULL;
v___x_1848_ = lean_uint64_shift_right(v___x_1846_, v___x_1847_);
v_fold_1849_ = lean_uint64_xor(v___x_1846_, v___x_1848_);
v___x_1850_ = 16ULL;
v___x_1851_ = lean_uint64_shift_right(v_fold_1849_, v___x_1850_);
v___x_1852_ = lean_uint64_xor(v_fold_1849_, v___x_1851_);
v___x_1853_ = lean_uint64_to_usize(v___x_1852_);
v___x_1854_ = lean_usize_of_nat(v___x_1845_);
v___x_1855_ = ((size_t)1ULL);
v___x_1856_ = lean_usize_sub(v___x_1854_, v___x_1855_);
v___x_1857_ = lean_usize_land(v___x_1853_, v___x_1856_);
v___x_1858_ = lean_array_uget_borrowed(v_x_1837_, v___x_1857_);
lean_inc(v___x_1858_);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 2, v___x_1858_);
v___x_1860_ = v___x_1843_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_key_1839_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v_value_1840_);
lean_ctor_set(v_reuseFailAlloc_1863_, 2, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
lean_object* v___x_1861_; 
v___x_1861_ = lean_array_uset(v_x_1837_, v___x_1857_, v___x_1860_);
v_x_1837_ = v___x_1861_;
v_x_1838_ = v_tail_1841_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8___redArg(lean_object* v_i_1865_, lean_object* v_source_1866_, lean_object* v_target_1867_){
_start:
{
lean_object* v___x_1868_; uint8_t v___x_1869_; 
v___x_1868_ = lean_array_get_size(v_source_1866_);
v___x_1869_ = lean_nat_dec_lt(v_i_1865_, v___x_1868_);
if (v___x_1869_ == 0)
{
lean_dec_ref(v_source_1866_);
lean_dec(v_i_1865_);
return v_target_1867_;
}
else
{
lean_object* v_es_1870_; lean_object* v___x_1871_; lean_object* v_source_1872_; lean_object* v_target_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v_es_1870_ = lean_array_fget(v_source_1866_, v_i_1865_);
v___x_1871_ = lean_box(0);
v_source_1872_ = lean_array_fset(v_source_1866_, v_i_1865_, v___x_1871_);
v_target_1873_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8_spec__9___redArg(v_target_1867_, v_es_1870_);
v___x_1874_ = lean_unsigned_to_nat(1u);
v___x_1875_ = lean_nat_add(v_i_1865_, v___x_1874_);
lean_dec(v_i_1865_);
v_i_1865_ = v___x_1875_;
v_source_1866_ = v_source_1872_;
v_target_1867_ = v_target_1873_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7___redArg(lean_object* v_data_1877_){
_start:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v_nbuckets_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1878_ = lean_array_get_size(v_data_1877_);
v___x_1879_ = lean_unsigned_to_nat(2u);
v_nbuckets_1880_ = lean_nat_mul(v___x_1878_, v___x_1879_);
v___x_1881_ = lean_unsigned_to_nat(0u);
v___x_1882_ = lean_box(0);
v___x_1883_ = lean_mk_array(v_nbuckets_1880_, v___x_1882_);
v___x_1884_ = lean_array_propagate_mark(v_data_1877_, v___x_1883_);
v___x_1885_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8___redArg(v___x_1881_, v_data_1877_, v___x_1884_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3___redArg(lean_object* v_m_1886_, lean_object* v_a_1887_, lean_object* v_b_1888_){
_start:
{
lean_object* v_size_1889_; lean_object* v_buckets_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1933_; 
v_size_1889_ = lean_ctor_get(v_m_1886_, 0);
v_buckets_1890_ = lean_ctor_get(v_m_1886_, 1);
v_isSharedCheck_1933_ = !lean_is_exclusive(v_m_1886_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1892_ = v_m_1886_;
v_isShared_1893_ = v_isSharedCheck_1933_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_buckets_1890_);
lean_inc(v_size_1889_);
lean_dec(v_m_1886_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1933_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1894_; uint64_t v___x_1895_; uint64_t v___x_1896_; uint64_t v___x_1897_; uint64_t v_fold_1898_; uint64_t v___x_1899_; uint64_t v___x_1900_; uint64_t v___x_1901_; size_t v___x_1902_; size_t v___x_1903_; size_t v___x_1904_; size_t v___x_1905_; size_t v___x_1906_; lean_object* v_bkt_1907_; uint8_t v___x_1908_; 
v___x_1894_ = lean_array_get_size(v_buckets_1890_);
v___x_1895_ = l_Lean_Expr_hash(v_a_1887_);
v___x_1896_ = 32ULL;
v___x_1897_ = lean_uint64_shift_right(v___x_1895_, v___x_1896_);
v_fold_1898_ = lean_uint64_xor(v___x_1895_, v___x_1897_);
v___x_1899_ = 16ULL;
v___x_1900_ = lean_uint64_shift_right(v_fold_1898_, v___x_1899_);
v___x_1901_ = lean_uint64_xor(v_fold_1898_, v___x_1900_);
v___x_1902_ = lean_uint64_to_usize(v___x_1901_);
v___x_1903_ = lean_usize_of_nat(v___x_1894_);
v___x_1904_ = ((size_t)1ULL);
v___x_1905_ = lean_usize_sub(v___x_1903_, v___x_1904_);
v___x_1906_ = lean_usize_land(v___x_1902_, v___x_1905_);
v_bkt_1907_ = lean_array_uget_borrowed(v_buckets_1890_, v___x_1906_);
v___x_1908_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6___redArg(v_a_1887_, v_bkt_1907_);
if (v___x_1908_ == 0)
{
lean_object* v___x_1909_; lean_object* v_size_x27_1910_; lean_object* v___x_1911_; lean_object* v_buckets_x27_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; uint8_t v___x_1918_; 
v___x_1909_ = lean_unsigned_to_nat(1u);
v_size_x27_1910_ = lean_nat_add(v_size_1889_, v___x_1909_);
lean_dec(v_size_1889_);
lean_inc(v_bkt_1907_);
v___x_1911_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1911_, 0, v_a_1887_);
lean_ctor_set(v___x_1911_, 1, v_b_1888_);
lean_ctor_set(v___x_1911_, 2, v_bkt_1907_);
v_buckets_x27_1912_ = lean_array_uset(v_buckets_1890_, v___x_1906_, v___x_1911_);
v___x_1913_ = lean_unsigned_to_nat(4u);
v___x_1914_ = lean_nat_mul(v_size_x27_1910_, v___x_1913_);
v___x_1915_ = lean_unsigned_to_nat(3u);
v___x_1916_ = lean_nat_div(v___x_1914_, v___x_1915_);
lean_dec(v___x_1914_);
v___x_1917_ = lean_array_get_size(v_buckets_x27_1912_);
v___x_1918_ = lean_nat_dec_le(v___x_1916_, v___x_1917_);
lean_dec(v___x_1916_);
if (v___x_1918_ == 0)
{
lean_object* v_val_1919_; lean_object* v___x_1921_; 
v_val_1919_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7___redArg(v_buckets_x27_1912_);
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 1, v_val_1919_);
lean_ctor_set(v___x_1892_, 0, v_size_x27_1910_);
v___x_1921_ = v___x_1892_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_size_x27_1910_);
lean_ctor_set(v_reuseFailAlloc_1922_, 1, v_val_1919_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
else
{
lean_object* v___x_1924_; 
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 1, v_buckets_x27_1912_);
lean_ctor_set(v___x_1892_, 0, v_size_x27_1910_);
v___x_1924_ = v___x_1892_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_size_x27_1910_);
lean_ctor_set(v_reuseFailAlloc_1925_, 1, v_buckets_x27_1912_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
else
{
lean_object* v___x_1926_; lean_object* v_buckets_x27_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1931_; 
lean_inc(v_bkt_1907_);
v___x_1926_ = lean_box(0);
v_buckets_x27_1927_ = lean_array_uset(v_buckets_1890_, v___x_1906_, v___x_1926_);
v___x_1928_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__8___redArg(v_a_1887_, v_b_1888_, v_bkt_1907_);
v___x_1929_ = lean_array_uset(v_buckets_x27_1927_, v___x_1906_, v___x_1928_);
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 1, v___x_1929_);
v___x_1931_ = v___x_1892_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_size_1889_);
lean_ctor_set(v_reuseFailAlloc_1932_, 1, v___x_1929_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(lean_object* v_g_1934_, lean_object* v_e_1935_, lean_object* v_a_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
lean_object* v_a_1945_; lean_object* v___y_1951_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1953_ = lean_st_ref_get(v_a_1936_);
v___x_1954_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2___redArg(v___x_1953_, v_e_1935_);
lean_dec(v___x_1953_);
if (lean_obj_tag(v___x_1954_) == 0)
{
lean_object* v___x_1955_; 
lean_inc_ref(v_g_1934_);
lean_inc(v___y_1942_);
lean_inc_ref(v___y_1941_);
lean_inc(v___y_1940_);
lean_inc_ref(v___y_1939_);
lean_inc(v___y_1938_);
lean_inc_ref(v___y_1937_);
lean_inc_ref(v_e_1935_);
v___x_1955_ = lean_apply_8(v_g_1934_, v_e_1935_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_, lean_box(0));
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; lean_object* v_d_1958_; lean_object* v_b_1959_; lean_object* v___y_1960_; uint8_t v___x_1963_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
lean_inc(v_a_1956_);
lean_dec_ref_known(v___x_1955_, 1);
v___x_1963_ = lean_unbox(v_a_1956_);
lean_dec(v_a_1956_);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; 
lean_dec_ref(v_g_1934_);
v___x_1964_ = lean_box(0);
v_a_1945_ = v___x_1964_;
goto v___jp_1944_;
}
else
{
switch(lean_obj_tag(v_e_1935_))
{
case 7:
{
lean_object* v_binderType_1965_; lean_object* v_body_1966_; 
v_binderType_1965_ = lean_ctor_get(v_e_1935_, 1);
v_body_1966_ = lean_ctor_get(v_e_1935_, 2);
lean_inc_ref(v_body_1966_);
lean_inc_ref(v_binderType_1965_);
v_d_1958_ = v_binderType_1965_;
v_b_1959_ = v_body_1966_;
v___y_1960_ = v_a_1936_;
goto v___jp_1957_;
}
case 6:
{
lean_object* v_binderType_1967_; lean_object* v_body_1968_; 
v_binderType_1967_ = lean_ctor_get(v_e_1935_, 1);
v_body_1968_ = lean_ctor_get(v_e_1935_, 2);
lean_inc_ref(v_body_1968_);
lean_inc_ref(v_binderType_1967_);
v_d_1958_ = v_binderType_1967_;
v_b_1959_ = v_body_1968_;
v___y_1960_ = v_a_1936_;
goto v___jp_1957_;
}
case 8:
{
lean_object* v_type_1969_; lean_object* v_value_1970_; lean_object* v_body_1971_; lean_object* v___x_1972_; 
v_type_1969_ = lean_ctor_get(v_e_1935_, 1);
v_value_1970_ = lean_ctor_get(v_e_1935_, 2);
v_body_1971_ = lean_ctor_get(v_e_1935_, 3);
lean_inc_ref(v_type_1969_);
lean_inc_ref(v_g_1934_);
v___x_1972_ = l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(v_g_1934_, v_type_1969_, v_a_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
if (lean_obj_tag(v___x_1972_) == 0)
{
lean_object* v___x_1973_; 
lean_dec_ref_known(v___x_1972_, 1);
lean_inc_ref(v_value_1970_);
lean_inc_ref(v_g_1934_);
v___x_1973_ = l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(v_g_1934_, v_value_1970_, v_a_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v___x_1974_; 
lean_dec_ref_known(v___x_1973_, 1);
lean_inc_ref(v_body_1971_);
v___x_1974_ = l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(v_g_1934_, v_body_1971_, v_a_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
v___y_1951_ = v___x_1974_;
goto v___jp_1950_;
}
else
{
lean_dec_ref_known(v_e_1935_, 4);
lean_dec_ref(v_g_1934_);
return v___x_1973_;
}
}
else
{
lean_dec_ref_known(v_e_1935_, 4);
lean_dec_ref(v_g_1934_);
return v___x_1972_;
}
}
case 5:
{
lean_object* v_fn_1975_; lean_object* v_arg_1976_; lean_object* v___x_1977_; 
v_fn_1975_ = lean_ctor_get(v_e_1935_, 0);
v_arg_1976_ = lean_ctor_get(v_e_1935_, 1);
lean_inc_ref(v_fn_1975_);
lean_inc_ref(v_g_1934_);
v___x_1977_ = l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(v_g_1934_, v_fn_1975_, v_a_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v___x_1978_; 
lean_dec_ref_known(v___x_1977_, 1);
lean_inc_ref(v_arg_1976_);
v___x_1978_ = l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(v_g_1934_, v_arg_1976_, v_a_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
v___y_1951_ = v___x_1978_;
goto v___jp_1950_;
}
else
{
lean_dec_ref_known(v_e_1935_, 2);
lean_dec_ref(v_g_1934_);
return v___x_1977_;
}
}
case 10:
{
lean_object* v_expr_1979_; lean_object* v___x_1980_; 
v_expr_1979_ = lean_ctor_get(v_e_1935_, 1);
lean_inc_ref(v_expr_1979_);
v___x_1980_ = l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(v_g_1934_, v_expr_1979_, v_a_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
v___y_1951_ = v___x_1980_;
goto v___jp_1950_;
}
case 11:
{
lean_object* v_struct_1981_; lean_object* v___x_1982_; 
v_struct_1981_ = lean_ctor_get(v_e_1935_, 2);
lean_inc_ref(v_struct_1981_);
v___x_1982_ = l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(v_g_1934_, v_struct_1981_, v_a_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
v___y_1951_ = v___x_1982_;
goto v___jp_1950_;
}
default: 
{
lean_object* v___x_1983_; 
lean_dec_ref(v_g_1934_);
v___x_1983_ = lean_box(0);
v_a_1945_ = v___x_1983_;
goto v___jp_1944_;
}
}
}
v___jp_1957_:
{
lean_object* v___x_1961_; 
lean_inc_ref(v_g_1934_);
v___x_1961_ = l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(v_g_1934_, v_d_1958_, v___y_1960_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v___x_1962_; 
lean_dec_ref_known(v___x_1961_, 1);
v___x_1962_ = l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(v_g_1934_, v_b_1959_, v___y_1960_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
v___y_1951_ = v___x_1962_;
goto v___jp_1950_;
}
else
{
lean_dec_ref(v_b_1959_);
lean_dec_ref(v_e_1935_);
lean_dec_ref(v_g_1934_);
return v___x_1961_;
}
}
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1991_; 
lean_dec_ref(v_e_1935_);
lean_dec_ref(v_g_1934_);
v_a_1984_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1986_ = v___x_1955_;
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1955_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1989_; 
if (v_isShared_1987_ == 0)
{
v___x_1989_ = v___x_1986_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_a_1984_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
else
{
lean_object* v_val_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_1999_; 
lean_dec_ref(v_e_1935_);
lean_dec_ref(v_g_1934_);
v_val_1992_ = lean_ctor_get(v___x_1954_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1954_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1994_ = v___x_1954_;
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_val_1992_);
lean_dec(v___x_1954_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set_tag(v___x_1994_, 0);
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_val_1992_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
v___jp_1944_:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1946_ = lean_st_ref_take(v_a_1936_);
v___x_1947_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3___redArg(v___x_1946_, v_e_1935_, v_a_1945_);
v___x_1948_ = lean_st_ref_put(v_a_1936_, v___x_1947_);
v___x_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1949_, 0, v_a_1945_);
return v___x_1949_;
}
v___jp_1950_:
{
if (lean_obj_tag(v___y_1951_) == 0)
{
lean_object* v_a_1952_; 
v_a_1952_ = lean_ctor_get(v___y_1951_, 0);
lean_inc(v_a_1952_);
lean_dec_ref_known(v___y_1951_, 1);
v_a_1945_ = v_a_1952_;
goto v___jp_1944_;
}
else
{
lean_dec_ref(v_e_1935_);
return v___y_1951_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1___boxed(lean_object* v_g_2000_, lean_object* v_e_2001_, lean_object* v_a_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(v_g_2000_, v_e_2001_, v_a_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
lean_dec(v___y_2004_);
lean_dec_ref(v___y_2003_);
lean_dec(v_a_2002_);
return v_res_2010_;
}
}
static lean_object* _init_l_Lean_Expr_checkMaxShared___closed__0(void){
_start:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2011_ = lean_box(0);
v___x_2012_ = lean_unsigned_to_nat(16u);
v___x_2013_ = lean_mk_array(v___x_2012_, v___x_2011_);
return v___x_2013_;
}
}
static lean_object* _init_l_Lean_Expr_checkMaxShared___closed__1(void){
_start:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2014_ = lean_obj_once(&l_Lean_Expr_checkMaxShared___closed__0, &l_Lean_Expr_checkMaxShared___closed__0_once, _init_l_Lean_Expr_checkMaxShared___closed__0);
v___x_2015_ = lean_unsigned_to_nat(0u);
v___x_2016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2015_);
lean_ctor_set(v___x_2016_, 1, v___x_2014_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_checkMaxShared(lean_object* v_e_2017_, lean_object* v_msg_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_){
_start:
{
lean_object* v___f_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___f_2026_ = lean_alloc_closure((void*)(l_Lean_Expr_checkMaxShared___lam__0___boxed), 9, 1);
lean_closure_set(v___f_2026_, 0, v_msg_2018_);
v___x_2027_ = lean_obj_once(&l_Lean_Expr_checkMaxShared___closed__1, &l_Lean_Expr_checkMaxShared___closed__1_once, _init_l_Lean_Expr_checkMaxShared___closed__1);
v___x_2028_ = lean_st_mk_ref(v___x_2027_);
v___x_2029_ = l_Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1(v___f_2026_, v_e_2017_, v___x_2028_, v_a_2019_, v_a_2020_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2038_; 
v_a_2030_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2032_ = v___x_2029_;
v_isShared_2033_ = v_isSharedCheck_2038_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_2029_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2038_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2034_; lean_object* v___x_2036_; 
v___x_2034_ = lean_st_ref_get(v___x_2028_);
lean_dec(v___x_2028_);
lean_dec(v___x_2034_);
if (v_isShared_2033_ == 0)
{
v___x_2036_ = v___x_2032_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2030_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
else
{
lean_dec(v___x_2028_);
return v___x_2029_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_checkMaxShared___boxed(lean_object* v_e_2039_, lean_object* v_msg_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_){
_start:
{
lean_object* v_res_2048_; 
v_res_2048_ = l_Lean_Expr_checkMaxShared(v_e_2039_, v_msg_2040_, v_a_2041_, v_a_2042_, v_a_2043_, v_a_2044_, v_a_2045_, v_a_2046_);
lean_dec(v_a_2046_);
lean_dec_ref(v_a_2045_);
lean_dec(v_a_2044_);
lean_dec_ref(v_a_2043_);
lean_dec(v_a_2042_);
lean_dec_ref(v_a_2041_);
return v_res_2048_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0(lean_object* v_00_u03b2_2049_, lean_object* v_x_2050_, lean_object* v_x_2051_){
_start:
{
lean_object* v___x_2052_; 
v___x_2052_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0___redArg(v_x_2050_, v_x_2051_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0___boxed(lean_object* v_00_u03b2_2053_, lean_object* v_x_2054_, lean_object* v_x_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0(v_00_u03b2_2053_, v_x_2054_, v_x_2055_);
lean_dec_ref(v_x_2055_);
lean_dec_ref(v_x_2054_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0(lean_object* v_00_u03b2_2057_, lean_object* v_x_2058_, size_t v_x_2059_, lean_object* v_x_2060_){
_start:
{
lean_object* v___x_2061_; 
v___x_2061_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0___redArg(v_x_2058_, v_x_2059_, v_x_2060_);
return v___x_2061_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2062_, lean_object* v_x_2063_, lean_object* v_x_2064_, lean_object* v_x_2065_){
_start:
{
size_t v_x_7973__boxed_2066_; lean_object* v_res_2067_; 
v_x_7973__boxed_2066_ = lean_unbox_usize(v_x_2064_);
lean_dec(v_x_2064_);
v_res_2067_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0(v_00_u03b2_2062_, v_x_2063_, v_x_7973__boxed_2066_, v_x_2065_);
lean_dec_ref(v_x_2065_);
lean_dec_ref(v_x_2063_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2(lean_object* v_00_u03b2_2068_, lean_object* v_m_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v___x_2071_; 
v___x_2071_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2___redArg(v_m_2069_, v_a_2070_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2072_, lean_object* v_m_2073_, lean_object* v_a_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2(v_00_u03b2_2072_, v_m_2073_, v_a_2074_);
lean_dec_ref(v_a_2074_);
lean_dec_ref(v_m_2073_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3(lean_object* v_00_u03b2_2076_, lean_object* v_m_2077_, lean_object* v_a_2078_, lean_object* v_b_2079_){
_start:
{
lean_object* v___x_2080_; 
v___x_2080_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3___redArg(v_m_2077_, v_a_2078_, v_b_2079_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2081_, lean_object* v_keys_2082_, lean_object* v_vals_2083_, lean_object* v_heq_2084_, lean_object* v_i_2085_, lean_object* v_k_2086_){
_start:
{
lean_object* v___x_2087_; 
v___x_2087_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1___redArg(v_keys_2082_, v_vals_2083_, v_i_2085_, v_k_2086_);
return v___x_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2088_, lean_object* v_keys_2089_, lean_object* v_vals_2090_, lean_object* v_heq_2091_, lean_object* v_i_2092_, lean_object* v_k_2093_){
_start:
{
lean_object* v_res_2094_; 
v_res_2094_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Expr_checkMaxShared_spec__0_spec__0_spec__1(v_00_u03b2_2088_, v_keys_2089_, v_vals_2090_, v_heq_2091_, v_i_2092_, v_k_2093_);
lean_dec_ref(v_k_2093_);
lean_dec_ref(v_vals_2090_);
lean_dec_ref(v_keys_2089_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_2095_, lean_object* v_a_2096_, lean_object* v_x_2097_){
_start:
{
lean_object* v___x_2098_; 
v___x_2098_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4___redArg(v_a_2096_, v_x_2097_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_2099_, lean_object* v_a_2100_, lean_object* v_x_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__2_spec__4(v_00_u03b2_2099_, v_a_2100_, v_x_2101_);
lean_dec(v_x_2101_);
lean_dec_ref(v_a_2100_);
return v_res_2102_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_2103_, lean_object* v_a_2104_, lean_object* v_x_2105_){
_start:
{
uint8_t v___x_2106_; 
v___x_2106_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6___redArg(v_a_2104_, v_x_2105_);
return v___x_2106_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b2_2107_, lean_object* v_a_2108_, lean_object* v_x_2109_){
_start:
{
uint8_t v_res_2110_; lean_object* v_r_2111_; 
v_res_2110_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__6(v_00_u03b2_2107_, v_a_2108_, v_x_2109_);
lean_dec(v_x_2109_);
lean_dec_ref(v_a_2108_);
v_r_2111_ = lean_box(v_res_2110_);
return v_r_2111_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2112_, lean_object* v_data_2113_){
_start:
{
lean_object* v___x_2114_; 
v___x_2114_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7___redArg(v_data_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_2115_, lean_object* v_a_2116_, lean_object* v_b_2117_, lean_object* v_x_2118_){
_start:
{
lean_object* v___x_2119_; 
v___x_2119_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__8___redArg(v_a_2116_, v_b_2117_, v_x_2118_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8(lean_object* v_00_u03b2_2120_, lean_object* v_i_2121_, lean_object* v_source_2122_, lean_object* v_target_2123_){
_start:
{
lean_object* v___x_2124_; 
v___x_2124_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8___redArg(v_i_2121_, v_source_2122_, v_target_2123_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8_spec__9(lean_object* v_00_u03b2_2125_, lean_object* v_x_2126_, lean_object* v_x_2127_){
_start:
{
lean_object* v___x_2128_; 
v___x_2128_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00Lean_Expr_checkMaxShared_spec__1_spec__3_spec__7_spec__8_spec__9___redArg(v_x_2126_, v_x_2127_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_checkMaxShared(lean_object* v_mvarId_2129_, lean_object* v_msg_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_){
_start:
{
lean_object* v___x_2138_; 
v___x_2138_ = l_Lean_MVarId_getDecl(v_mvarId_2129_, v_a_2133_, v_a_2134_, v_a_2135_, v_a_2136_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v_type_2140_; lean_object* v___x_2141_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
lean_inc(v_a_2139_);
lean_dec_ref_known(v___x_2138_, 1);
v_type_2140_ = lean_ctor_get(v_a_2139_, 2);
lean_inc_ref(v_type_2140_);
lean_dec(v_a_2139_);
v___x_2141_ = l_Lean_Expr_checkMaxShared(v_type_2140_, v_msg_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_, v_a_2136_);
return v___x_2141_;
}
else
{
lean_object* v_a_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2149_; 
lean_dec_ref(v_msg_2130_);
v_a_2142_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2144_ = v___x_2138_;
v_isShared_2145_ = v_isSharedCheck_2149_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_a_2142_);
lean_dec(v___x_2138_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2149_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v___x_2147_; 
if (v_isShared_2145_ == 0)
{
v___x_2147_ = v___x_2144_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v_a_2142_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_checkMaxShared___boxed(lean_object* v_mvarId_2150_, lean_object* v_msg_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_Lean_MVarId_checkMaxShared(v_mvarId_2150_, v_msg_2151_, v_a_2152_, v_a_2153_, v_a_2154_, v_a_2155_, v_a_2156_, v_a_2157_);
lean_dec(v_a_2157_);
lean_dec_ref(v_a_2156_);
lean_dec(v_a_2155_);
lean_dec_ref(v_a_2154_);
lean_dec(v_a_2153_);
lean_dec_ref(v_a_2152_);
return v_res_2159_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized_spec__0(lean_object* v_x_2160_){
_start:
{
if (lean_obj_tag(v_x_2160_) == 0)
{
uint8_t v___x_2161_; 
v___x_2161_ = 0;
return v___x_2161_;
}
else
{
lean_object* v_head_2162_; lean_object* v_tail_2163_; uint8_t v___x_2164_; 
v_head_2162_ = lean_ctor_get(v_x_2160_, 0);
v_tail_2163_ = lean_ctor_get(v_x_2160_, 1);
v___x_2164_ = l_Lean_Level_isAlreadyNormalizedCheap(v_head_2162_);
if (v___x_2164_ == 0)
{
uint8_t v___x_2165_; 
v___x_2165_ = 1;
return v___x_2165_;
}
else
{
v_x_2160_ = v_tail_2163_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized_spec__0___boxed(lean_object* v_x_2167_){
_start:
{
uint8_t v_res_2168_; lean_object* v_r_2169_; 
v_res_2168_ = l_List_any___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized_spec__0(v_x_2167_);
lean_dec(v_x_2167_);
v_r_2169_ = lean_box(v_res_2168_);
return v_r_2169_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___lam__0(lean_object* v_x_2170_){
_start:
{
switch(lean_obj_tag(v_x_2170_))
{
case 4:
{
lean_object* v_us_2171_; uint8_t v___x_2172_; 
v_us_2171_ = lean_ctor_get(v_x_2170_, 1);
v___x_2172_ = l_List_any___at___00__private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized_spec__0(v_us_2171_);
return v___x_2172_;
}
case 3:
{
lean_object* v_u_2173_; uint8_t v___x_2174_; 
v_u_2173_ = lean_ctor_get(v_x_2170_, 0);
v___x_2174_ = l_Lean_Level_isAlreadyNormalizedCheap(v_u_2173_);
if (v___x_2174_ == 0)
{
uint8_t v___x_2175_; 
v___x_2175_ = 1;
return v___x_2175_;
}
else
{
uint8_t v___x_2176_; 
v___x_2176_ = 0;
return v___x_2176_;
}
}
default: 
{
uint8_t v___x_2177_; 
v___x_2177_ = 0;
return v___x_2177_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___lam__0___boxed(lean_object* v_x_2178_){
_start:
{
uint8_t v_res_2179_; lean_object* v_r_2180_; 
v_res_2179_ = l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___lam__0(v_x_2178_);
lean_dec_ref(v_x_2178_);
v_r_2180_ = lean_box(v_res_2179_);
return v_r_2180_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized(lean_object* v_e_2182_){
_start:
{
lean_object* v___f_2183_; lean_object* v___x_2184_; 
v___f_2183_ = ((lean_object*)(l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___closed__0));
v___x_2184_ = lean_find_expr(v___f_2183_, v_e_2182_);
if (lean_obj_tag(v___x_2184_) == 0)
{
uint8_t v___x_2185_; 
v___x_2185_ = 1;
return v___x_2185_;
}
else
{
uint8_t v___x_2186_; 
lean_dec_ref_known(v___x_2184_, 1);
v___x_2186_ = 0;
return v___x_2186_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized___boxed(lean_object* v_e_2187_){
_start:
{
uint8_t v_res_2188_; lean_object* v_r_2189_; 
v_res_2188_ = l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized(v_e_2187_);
lean_dec_ref(v_e_2187_);
v_r_2189_ = lean_box(v_res_2188_);
return v_r_2189_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_normalizeLevels_spec__0(lean_object* v_a_2190_, lean_object* v_a_2191_){
_start:
{
if (lean_obj_tag(v_a_2190_) == 0)
{
lean_object* v___x_2192_; 
v___x_2192_ = l_List_reverse___redArg(v_a_2191_);
return v___x_2192_;
}
else
{
lean_object* v_head_2193_; lean_object* v_tail_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2203_; 
v_head_2193_ = lean_ctor_get(v_a_2190_, 0);
v_tail_2194_ = lean_ctor_get(v_a_2190_, 1);
v_isSharedCheck_2203_ = !lean_is_exclusive(v_a_2190_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2196_ = v_a_2190_;
v_isShared_2197_ = v_isSharedCheck_2203_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_tail_2194_);
lean_inc(v_head_2193_);
lean_dec(v_a_2190_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2203_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2198_; lean_object* v___x_2200_; 
v___x_2198_ = l_Lean_Level_normalize(v_head_2193_);
lean_dec(v_head_2193_);
if (v_isShared_2197_ == 0)
{
lean_ctor_set(v___x_2196_, 1, v_a_2191_);
lean_ctor_set(v___x_2196_, 0, v___x_2198_);
v___x_2200_ = v___x_2196_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v___x_2198_);
lean_ctor_set(v_reuseFailAlloc_2202_, 1, v_a_2191_);
v___x_2200_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
v_a_2190_ = v_tail_2194_;
v_a_2191_ = v___x_2200_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels___lam__0(lean_object* v_e_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_){
_start:
{
lean_object* v___y_2211_; lean_object* v___y_2215_; 
switch(lean_obj_tag(v_e_2206_))
{
case 3:
{
lean_object* v_u_2218_; lean_object* v___x_2219_; size_t v___x_2220_; size_t v___x_2221_; uint8_t v___x_2222_; 
v_u_2218_ = lean_ctor_get(v_e_2206_, 0);
v___x_2219_ = l_Lean_Level_normalize(v_u_2218_);
v___x_2220_ = lean_ptr_addr(v_u_2218_);
v___x_2221_ = lean_ptr_addr(v___x_2219_);
v___x_2222_ = lean_usize_dec_eq(v___x_2220_, v___x_2221_);
if (v___x_2222_ == 0)
{
lean_object* v___x_2223_; 
lean_dec_ref_known(v_e_2206_, 1);
v___x_2223_ = l_Lean_Expr_sort___override(v___x_2219_);
v___y_2211_ = v___x_2223_;
goto v___jp_2210_;
}
else
{
lean_dec(v___x_2219_);
v___y_2211_ = v_e_2206_;
goto v___jp_2210_;
}
}
case 4:
{
lean_object* v_declName_2224_; lean_object* v_us_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; uint8_t v___x_2228_; 
v_declName_2224_ = lean_ctor_get(v_e_2206_, 0);
v_us_2225_ = lean_ctor_get(v_e_2206_, 1);
v___x_2226_ = lean_box(0);
lean_inc(v_us_2225_);
v___x_2227_ = l_List_mapTR_loop___at___00Lean_Meta_Sym_normalizeLevels_spec__0(v_us_2225_, v___x_2226_);
v___x_2228_ = l_ptrEqList___redArg(v_us_2225_, v___x_2227_);
if (v___x_2228_ == 0)
{
lean_object* v___x_2229_; 
lean_inc(v_declName_2224_);
lean_dec_ref_known(v_e_2206_, 2);
v___x_2229_ = l_Lean_Expr_const___override(v_declName_2224_, v___x_2227_);
v___y_2215_ = v___x_2229_;
goto v___jp_2214_;
}
else
{
lean_dec(v___x_2227_);
v___y_2215_ = v_e_2206_;
goto v___jp_2214_;
}
}
default: 
{
lean_object* v___x_2230_; lean_object* v___x_2231_; 
lean_dec_ref(v_e_2206_);
v___x_2230_ = ((lean_object*)(l_Lean_Meta_Sym_normalizeLevels___lam__0___closed__0));
v___x_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2230_);
return v___x_2231_;
}
}
v___jp_2210_:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2212_, 0, v___y_2211_);
v___x_2213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2212_);
return v___x_2213_;
}
v___jp_2214_:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___y_2215_);
v___x_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2216_);
return v___x_2217_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels___lam__0___boxed(lean_object* v_e_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v_res_2236_; 
v_res_2236_ = l_Lean_Meta_Sym_normalizeLevels___lam__0(v_e_2232_, v___y_2233_, v___y_2234_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels___lam__1(lean_object* v_e_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2241_, 0, v_e_2237_);
v___x_2242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2241_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels___lam__1___boxed(lean_object* v_e_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l_Lean_Meta_Sym_normalizeLevels___lam__1(v_e_2243_, v___y_2244_, v___y_2245_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
return v_res_2247_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2253_ = l_Lean_maxRecDepthErrorMessage;
v___x_2254_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2253_);
return v___x_2254_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__4(void){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__3);
v___x_2256_ = l_Lean_MessageData_ofFormat(v___x_2255_);
return v___x_2256_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2257_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__4);
v___x_2258_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__2));
v___x_2259_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2258_);
lean_ctor_set(v___x_2259_, 1, v___x_2257_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg(lean_object* v_ref_2260_){
_start:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2262_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___closed__5);
v___x_2263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2263_, 0, v_ref_2260_);
lean_ctor_set(v___x_2263_, 1, v___x_2262_);
v___x_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2264_, 0, v___x_2263_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object* v_ref_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg(v_ref_2265_);
return v_res_2267_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2268_ = lean_box(0);
v___x_2269_ = l_Lean_interruptExceptionId;
v___x_2270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
lean_ctor_set(v___x_2270_, 1, v___x_2268_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg(){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2272_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg___closed__0);
v___x_2273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg___boxed(lean_object* v___y_2274_){
_start:
{
lean_object* v_res_2275_; 
v_res_2275_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg();
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6___redArg(lean_object* v_x_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
lean_object* v___y_2282_; uint8_t v___y_2292_; uint8_t v___y_2293_; lean_object* v___y_2294_; uint16_t v___y_2295_; lean_object* v___y_2296_; lean_object* v___y_2297_; lean_object* v_toCold_2302_; lean_object* v_currRecDepth_2303_; lean_object* v_ref_2304_; uint16_t v_optionFlags_2305_; uint8_t v_suppressElabErrors_2306_; uint8_t v_isRecordingDeps_2307_; lean_object* v_maxRecDepth_2308_; lean_object* v_cancelTk_x3f_2309_; 
v_toCold_2302_ = lean_ctor_get(v___y_2278_, 0);
v_currRecDepth_2303_ = lean_ctor_get(v___y_2278_, 1);
v_ref_2304_ = lean_ctor_get(v___y_2278_, 2);
v_optionFlags_2305_ = lean_ctor_get_uint16(v___y_2278_, sizeof(void*)*3);
v_suppressElabErrors_2306_ = lean_ctor_get_uint8(v___y_2278_, sizeof(void*)*3 + 2);
v_isRecordingDeps_2307_ = lean_ctor_get_uint8(v___y_2278_, sizeof(void*)*3 + 3);
v_maxRecDepth_2308_ = lean_ctor_get(v_toCold_2302_, 3);
v_cancelTk_x3f_2309_ = lean_ctor_get(v_toCold_2302_, 10);
if (lean_obj_tag(v_cancelTk_x3f_2309_) == 1)
{
lean_object* v_val_2315_; uint8_t v___x_2316_; 
v_val_2315_ = lean_ctor_get(v_cancelTk_x3f_2309_, 0);
v___x_2316_ = l_IO_CancelToken_isSet(v_val_2315_);
if (v___x_2316_ == 0)
{
goto v___jp_2310_;
}
else
{
lean_object* v___x_2317_; lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2325_; 
lean_dec_ref(v_x_2276_);
v___x_2317_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg();
v_a_2318_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2320_ = v___x_2317_;
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v___x_2317_);
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
goto v___jp_2310_;
}
v___jp_2281_:
{
if (lean_obj_tag(v___y_2282_) == 0)
{
return v___y_2282_;
}
else
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
v_a_2283_ = lean_ctor_get(v___y_2282_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___y_2282_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v___y_2282_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___y_2282_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_a_2283_);
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
v___jp_2291_:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2298_ = lean_unsigned_to_nat(1u);
v___x_2299_ = lean_nat_add(v___y_2296_, v___x_2298_);
lean_inc_ref(v___y_2294_);
v___x_2300_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_2300_, 0, v___y_2294_);
lean_ctor_set(v___x_2300_, 1, v___x_2299_);
lean_ctor_set(v___x_2300_, 2, v___y_2297_);
lean_ctor_set_uint16(v___x_2300_, sizeof(void*)*3, v___y_2295_);
lean_ctor_set_uint8(v___x_2300_, sizeof(void*)*3 + 2, v___y_2293_);
lean_ctor_set_uint8(v___x_2300_, sizeof(void*)*3 + 3, v___y_2292_);
lean_inc(v___y_2279_);
lean_inc(v___y_2277_);
v___x_2301_ = lean_apply_4(v_x_2276_, v___y_2277_, v___x_2300_, v___y_2279_, lean_box(0));
v___y_2282_ = v___x_2301_;
goto v___jp_2281_;
}
v___jp_2310_:
{
lean_object* v___x_2311_; uint8_t v___x_2312_; 
v___x_2311_ = lean_unsigned_to_nat(0u);
v___x_2312_ = lean_nat_dec_eq(v_maxRecDepth_2308_, v___x_2311_);
if (v___x_2312_ == 0)
{
uint8_t v___x_2313_; 
v___x_2313_ = lean_nat_dec_eq(v_currRecDepth_2303_, v_maxRecDepth_2308_);
if (v___x_2313_ == 0)
{
lean_inc(v_ref_2304_);
v___y_2292_ = v_isRecordingDeps_2307_;
v___y_2293_ = v_suppressElabErrors_2306_;
v___y_2294_ = v_toCold_2302_;
v___y_2295_ = v_optionFlags_2305_;
v___y_2296_ = v_currRecDepth_2303_;
v___y_2297_ = v_ref_2304_;
goto v___jp_2291_;
}
else
{
lean_object* v___x_2314_; 
lean_dec_ref(v_x_2276_);
lean_inc(v_ref_2304_);
v___x_2314_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg(v_ref_2304_);
v___y_2282_ = v___x_2314_;
goto v___jp_2281_;
}
}
else
{
lean_inc(v_ref_2304_);
v___y_2292_ = v_isRecordingDeps_2307_;
v___y_2293_ = v_suppressElabErrors_2306_;
v___y_2294_ = v_toCold_2302_;
v___y_2295_ = v_optionFlags_2305_;
v___y_2296_ = v_currRecDepth_2303_;
v___y_2297_ = v_ref_2304_;
goto v___jp_2291_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6___redArg___boxed(lean_object* v_x_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_){
_start:
{
lean_object* v_res_2331_; 
v_res_2331_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6___redArg(v_x_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v___y_2327_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13_spec__14___redArg(lean_object* v_x_2332_, lean_object* v_x_2333_){
_start:
{
if (lean_obj_tag(v_x_2333_) == 0)
{
return v_x_2332_;
}
else
{
lean_object* v_key_2334_; lean_object* v_value_2335_; lean_object* v_tail_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2359_; 
v_key_2334_ = lean_ctor_get(v_x_2333_, 0);
v_value_2335_ = lean_ctor_get(v_x_2333_, 1);
v_tail_2336_ = lean_ctor_get(v_x_2333_, 2);
v_isSharedCheck_2359_ = !lean_is_exclusive(v_x_2333_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2338_ = v_x_2333_;
v_isShared_2339_ = v_isSharedCheck_2359_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_tail_2336_);
lean_inc(v_value_2335_);
lean_inc(v_key_2334_);
lean_dec(v_x_2333_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2359_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2340_; uint64_t v___x_2341_; uint64_t v___x_2342_; uint64_t v___x_2343_; uint64_t v_fold_2344_; uint64_t v___x_2345_; uint64_t v___x_2346_; uint64_t v___x_2347_; size_t v___x_2348_; size_t v___x_2349_; size_t v___x_2350_; size_t v___x_2351_; size_t v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2355_; 
v___x_2340_ = lean_array_get_size(v_x_2332_);
v___x_2341_ = l_Lean_ExprStructEq_hash(v_key_2334_);
v___x_2342_ = 32ULL;
v___x_2343_ = lean_uint64_shift_right(v___x_2341_, v___x_2342_);
v_fold_2344_ = lean_uint64_xor(v___x_2341_, v___x_2343_);
v___x_2345_ = 16ULL;
v___x_2346_ = lean_uint64_shift_right(v_fold_2344_, v___x_2345_);
v___x_2347_ = lean_uint64_xor(v_fold_2344_, v___x_2346_);
v___x_2348_ = lean_uint64_to_usize(v___x_2347_);
v___x_2349_ = lean_usize_of_nat(v___x_2340_);
v___x_2350_ = ((size_t)1ULL);
v___x_2351_ = lean_usize_sub(v___x_2349_, v___x_2350_);
v___x_2352_ = lean_usize_land(v___x_2348_, v___x_2351_);
v___x_2353_ = lean_array_uget_borrowed(v_x_2332_, v___x_2352_);
lean_inc(v___x_2353_);
if (v_isShared_2339_ == 0)
{
lean_ctor_set(v___x_2338_, 2, v___x_2353_);
v___x_2355_ = v___x_2338_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_key_2334_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v_value_2335_);
lean_ctor_set(v_reuseFailAlloc_2358_, 2, v___x_2353_);
v___x_2355_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
lean_object* v___x_2356_; 
v___x_2356_ = lean_array_uset(v_x_2332_, v___x_2352_, v___x_2355_);
v_x_2332_ = v___x_2356_;
v_x_2333_ = v_tail_2336_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13___redArg(lean_object* v_i_2360_, lean_object* v_source_2361_, lean_object* v_target_2362_){
_start:
{
lean_object* v___x_2363_; uint8_t v___x_2364_; 
v___x_2363_ = lean_array_get_size(v_source_2361_);
v___x_2364_ = lean_nat_dec_lt(v_i_2360_, v___x_2363_);
if (v___x_2364_ == 0)
{
lean_dec_ref(v_source_2361_);
lean_dec(v_i_2360_);
return v_target_2362_;
}
else
{
lean_object* v_es_2365_; lean_object* v___x_2366_; lean_object* v_source_2367_; lean_object* v_target_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; 
v_es_2365_ = lean_array_fget(v_source_2361_, v_i_2360_);
v___x_2366_ = lean_box(0);
v_source_2367_ = lean_array_fset(v_source_2361_, v_i_2360_, v___x_2366_);
v_target_2368_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13_spec__14___redArg(v_target_2362_, v_es_2365_);
v___x_2369_ = lean_unsigned_to_nat(1u);
v___x_2370_ = lean_nat_add(v_i_2360_, v___x_2369_);
lean_dec(v_i_2360_);
v_i_2360_ = v___x_2370_;
v_source_2361_ = v_source_2367_;
v_target_2362_ = v_target_2368_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12___redArg(lean_object* v_data_2372_){
_start:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v_nbuckets_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
v___x_2373_ = lean_array_get_size(v_data_2372_);
v___x_2374_ = lean_unsigned_to_nat(2u);
v_nbuckets_2375_ = lean_nat_mul(v___x_2373_, v___x_2374_);
v___x_2376_ = lean_unsigned_to_nat(0u);
v___x_2377_ = lean_box(0);
v___x_2378_ = lean_mk_array(v_nbuckets_2375_, v___x_2377_);
v___x_2379_ = lean_array_propagate_mark(v_data_2372_, v___x_2378_);
v___x_2380_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13___redArg(v___x_2376_, v_data_2372_, v___x_2379_);
return v___x_2380_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__13___redArg(lean_object* v_a_2381_, lean_object* v_b_2382_, lean_object* v_x_2383_){
_start:
{
if (lean_obj_tag(v_x_2383_) == 0)
{
lean_dec(v_b_2382_);
lean_dec_ref(v_a_2381_);
return v_x_2383_;
}
else
{
lean_object* v_key_2384_; lean_object* v_value_2385_; lean_object* v_tail_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2398_; 
v_key_2384_ = lean_ctor_get(v_x_2383_, 0);
v_value_2385_ = lean_ctor_get(v_x_2383_, 1);
v_tail_2386_ = lean_ctor_get(v_x_2383_, 2);
v_isSharedCheck_2398_ = !lean_is_exclusive(v_x_2383_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2388_ = v_x_2383_;
v_isShared_2389_ = v_isSharedCheck_2398_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_tail_2386_);
lean_inc(v_value_2385_);
lean_inc(v_key_2384_);
lean_dec(v_x_2383_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2398_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
uint8_t v___x_2390_; 
v___x_2390_ = l_Lean_ExprStructEq_beq(v_key_2384_, v_a_2381_);
if (v___x_2390_ == 0)
{
lean_object* v___x_2391_; lean_object* v___x_2393_; 
v___x_2391_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__13___redArg(v_a_2381_, v_b_2382_, v_tail_2386_);
if (v_isShared_2389_ == 0)
{
lean_ctor_set(v___x_2388_, 2, v___x_2391_);
v___x_2393_ = v___x_2388_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_key_2384_);
lean_ctor_set(v_reuseFailAlloc_2394_, 1, v_value_2385_);
lean_ctor_set(v_reuseFailAlloc_2394_, 2, v___x_2391_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
return v___x_2393_;
}
}
else
{
lean_object* v___x_2396_; 
lean_dec(v_value_2385_);
lean_dec(v_key_2384_);
if (v_isShared_2389_ == 0)
{
lean_ctor_set(v___x_2388_, 1, v_b_2382_);
lean_ctor_set(v___x_2388_, 0, v_a_2381_);
v___x_2396_ = v___x_2388_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_a_2381_);
lean_ctor_set(v_reuseFailAlloc_2397_, 1, v_b_2382_);
lean_ctor_set(v_reuseFailAlloc_2397_, 2, v_tail_2386_);
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
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11___redArg(lean_object* v_a_2399_, lean_object* v_x_2400_){
_start:
{
if (lean_obj_tag(v_x_2400_) == 0)
{
uint8_t v___x_2401_; 
v___x_2401_ = 0;
return v___x_2401_;
}
else
{
lean_object* v_key_2402_; lean_object* v_tail_2403_; uint8_t v___x_2404_; 
v_key_2402_ = lean_ctor_get(v_x_2400_, 0);
v_tail_2403_ = lean_ctor_get(v_x_2400_, 2);
v___x_2404_ = l_Lean_ExprStructEq_beq(v_key_2402_, v_a_2399_);
if (v___x_2404_ == 0)
{
v_x_2400_ = v_tail_2403_;
goto _start;
}
else
{
return v___x_2404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11___redArg___boxed(lean_object* v_a_2406_, lean_object* v_x_2407_){
_start:
{
uint8_t v_res_2408_; lean_object* v_r_2409_; 
v_res_2408_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11___redArg(v_a_2406_, v_x_2407_);
lean_dec(v_x_2407_);
lean_dec_ref(v_a_2406_);
v_r_2409_ = lean_box(v_res_2408_);
return v_r_2409_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7___redArg(lean_object* v_m_2410_, lean_object* v_a_2411_, lean_object* v_b_2412_){
_start:
{
lean_object* v_size_2413_; lean_object* v_buckets_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2457_; 
v_size_2413_ = lean_ctor_get(v_m_2410_, 0);
v_buckets_2414_ = lean_ctor_get(v_m_2410_, 1);
v_isSharedCheck_2457_ = !lean_is_exclusive(v_m_2410_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2416_ = v_m_2410_;
v_isShared_2417_ = v_isSharedCheck_2457_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_buckets_2414_);
lean_inc(v_size_2413_);
lean_dec(v_m_2410_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2457_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2418_; uint64_t v___x_2419_; uint64_t v___x_2420_; uint64_t v___x_2421_; uint64_t v_fold_2422_; uint64_t v___x_2423_; uint64_t v___x_2424_; uint64_t v___x_2425_; size_t v___x_2426_; size_t v___x_2427_; size_t v___x_2428_; size_t v___x_2429_; size_t v___x_2430_; lean_object* v_bkt_2431_; uint8_t v___x_2432_; 
v___x_2418_ = lean_array_get_size(v_buckets_2414_);
v___x_2419_ = l_Lean_ExprStructEq_hash(v_a_2411_);
v___x_2420_ = 32ULL;
v___x_2421_ = lean_uint64_shift_right(v___x_2419_, v___x_2420_);
v_fold_2422_ = lean_uint64_xor(v___x_2419_, v___x_2421_);
v___x_2423_ = 16ULL;
v___x_2424_ = lean_uint64_shift_right(v_fold_2422_, v___x_2423_);
v___x_2425_ = lean_uint64_xor(v_fold_2422_, v___x_2424_);
v___x_2426_ = lean_uint64_to_usize(v___x_2425_);
v___x_2427_ = lean_usize_of_nat(v___x_2418_);
v___x_2428_ = ((size_t)1ULL);
v___x_2429_ = lean_usize_sub(v___x_2427_, v___x_2428_);
v___x_2430_ = lean_usize_land(v___x_2426_, v___x_2429_);
v_bkt_2431_ = lean_array_uget_borrowed(v_buckets_2414_, v___x_2430_);
v___x_2432_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11___redArg(v_a_2411_, v_bkt_2431_);
if (v___x_2432_ == 0)
{
lean_object* v___x_2433_; lean_object* v_size_x27_2434_; lean_object* v___x_2435_; lean_object* v_buckets_x27_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; uint8_t v___x_2442_; 
v___x_2433_ = lean_unsigned_to_nat(1u);
v_size_x27_2434_ = lean_nat_add(v_size_2413_, v___x_2433_);
lean_dec(v_size_2413_);
lean_inc(v_bkt_2431_);
v___x_2435_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2435_, 0, v_a_2411_);
lean_ctor_set(v___x_2435_, 1, v_b_2412_);
lean_ctor_set(v___x_2435_, 2, v_bkt_2431_);
v_buckets_x27_2436_ = lean_array_uset(v_buckets_2414_, v___x_2430_, v___x_2435_);
v___x_2437_ = lean_unsigned_to_nat(4u);
v___x_2438_ = lean_nat_mul(v_size_x27_2434_, v___x_2437_);
v___x_2439_ = lean_unsigned_to_nat(3u);
v___x_2440_ = lean_nat_div(v___x_2438_, v___x_2439_);
lean_dec(v___x_2438_);
v___x_2441_ = lean_array_get_size(v_buckets_x27_2436_);
v___x_2442_ = lean_nat_dec_le(v___x_2440_, v___x_2441_);
lean_dec(v___x_2440_);
if (v___x_2442_ == 0)
{
lean_object* v_val_2443_; lean_object* v___x_2445_; 
v_val_2443_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12___redArg(v_buckets_x27_2436_);
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 1, v_val_2443_);
lean_ctor_set(v___x_2416_, 0, v_size_x27_2434_);
v___x_2445_ = v___x_2416_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v_size_x27_2434_);
lean_ctor_set(v_reuseFailAlloc_2446_, 1, v_val_2443_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
return v___x_2445_;
}
}
else
{
lean_object* v___x_2448_; 
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 1, v_buckets_x27_2436_);
lean_ctor_set(v___x_2416_, 0, v_size_x27_2434_);
v___x_2448_ = v___x_2416_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_size_x27_2434_);
lean_ctor_set(v_reuseFailAlloc_2449_, 1, v_buckets_x27_2436_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
else
{
lean_object* v___x_2450_; lean_object* v_buckets_x27_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2455_; 
lean_inc(v_bkt_2431_);
v___x_2450_ = lean_box(0);
v_buckets_x27_2451_ = lean_array_uset(v_buckets_2414_, v___x_2430_, v___x_2450_);
v___x_2452_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__13___redArg(v_a_2411_, v_b_2412_, v_bkt_2431_);
v___x_2453_ = lean_array_uset(v_buckets_x27_2451_, v___x_2430_, v___x_2452_);
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 1, v___x_2453_);
v___x_2455_ = v___x_2416_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_size_2413_);
lean_ctor_set(v_reuseFailAlloc_2456_, 1, v___x_2453_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__2(lean_object* v_a_2458_, lean_object* v_e_2459_, lean_object* v_a_2460_){
_start:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2462_ = lean_st_ref_take(v_a_2458_);
v___x_2463_ = lean_box(0);
v___x_2464_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7___redArg(v___x_2462_, v_e_2459_, v_a_2460_);
v___x_2465_ = lean_st_ref_put(v_a_2458_, v___x_2464_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__2___boxed(lean_object* v_a_2466_, lean_object* v_e_2467_, lean_object* v_a_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__2(v_a_2466_, v_e_2467_, v_a_2468_);
lean_dec(v_a_2466_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5___redArg(lean_object* v_a_2471_, lean_object* v_x_2472_){
_start:
{
if (lean_obj_tag(v_x_2472_) == 0)
{
lean_object* v___x_2473_; 
v___x_2473_ = lean_box(0);
return v___x_2473_;
}
else
{
lean_object* v_key_2474_; lean_object* v_value_2475_; lean_object* v_tail_2476_; uint8_t v___x_2477_; 
v_key_2474_ = lean_ctor_get(v_x_2472_, 0);
v_value_2475_ = lean_ctor_get(v_x_2472_, 1);
v_tail_2476_ = lean_ctor_get(v_x_2472_, 2);
v___x_2477_ = l_Lean_ExprStructEq_beq(v_key_2474_, v_a_2471_);
if (v___x_2477_ == 0)
{
v_x_2472_ = v_tail_2476_;
goto _start;
}
else
{
lean_object* v___x_2479_; 
lean_inc(v_value_2475_);
v___x_2479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2479_, 0, v_value_2475_);
return v___x_2479_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5___redArg___boxed(lean_object* v_a_2480_, lean_object* v_x_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5___redArg(v_a_2480_, v_x_2481_);
lean_dec(v_x_2481_);
lean_dec_ref(v_a_2480_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4___redArg(lean_object* v_m_2483_, lean_object* v_a_2484_){
_start:
{
lean_object* v_buckets_2485_; lean_object* v___x_2486_; uint64_t v___x_2487_; uint64_t v___x_2488_; uint64_t v___x_2489_; uint64_t v_fold_2490_; uint64_t v___x_2491_; uint64_t v___x_2492_; uint64_t v___x_2493_; size_t v___x_2494_; size_t v___x_2495_; size_t v___x_2496_; size_t v___x_2497_; size_t v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
v_buckets_2485_ = lean_ctor_get(v_m_2483_, 1);
v___x_2486_ = lean_array_get_size(v_buckets_2485_);
v___x_2487_ = l_Lean_ExprStructEq_hash(v_a_2484_);
v___x_2488_ = 32ULL;
v___x_2489_ = lean_uint64_shift_right(v___x_2487_, v___x_2488_);
v_fold_2490_ = lean_uint64_xor(v___x_2487_, v___x_2489_);
v___x_2491_ = 16ULL;
v___x_2492_ = lean_uint64_shift_right(v_fold_2490_, v___x_2491_);
v___x_2493_ = lean_uint64_xor(v_fold_2490_, v___x_2492_);
v___x_2494_ = lean_uint64_to_usize(v___x_2493_);
v___x_2495_ = lean_usize_of_nat(v___x_2486_);
v___x_2496_ = ((size_t)1ULL);
v___x_2497_ = lean_usize_sub(v___x_2495_, v___x_2496_);
v___x_2498_ = lean_usize_land(v___x_2494_, v___x_2497_);
v___x_2499_ = lean_array_uget_borrowed(v_buckets_2485_, v___x_2498_);
v___x_2500_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5___redArg(v_a_2484_, v___x_2499_);
return v___x_2500_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_m_2501_, lean_object* v_a_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4___redArg(v_m_2501_, v_a_2502_);
lean_dec_ref(v_a_2502_);
lean_dec_ref(v_m_2501_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_2504_, lean_object* v_x_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_){
_start:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; 
v___x_2509_ = lean_apply_1(v_x_2505_, lean_box(0));
v___x_2510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2509_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2511_, lean_object* v_x_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__0(v_00_u03b1_2511_, v_x_2512_, v___y_2513_, v___y_2514_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
return v_res_2516_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2518_; lean_object* v_dummy_2519_; 
v___x_2518_ = lean_box(0);
v_dummy_2519_ = l_Lean_Expr_sort___override(v___x_2518_);
return v_dummy_2519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__2(lean_object* v_pre_2520_, lean_object* v_post_2521_, size_t v_sz_2522_, size_t v_i_2523_, lean_object* v_bs_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
uint8_t v___x_2529_; 
v___x_2529_ = lean_usize_dec_lt(v_i_2523_, v_sz_2522_);
if (v___x_2529_ == 0)
{
lean_object* v___x_2530_; 
lean_dec_ref(v_post_2521_);
lean_dec_ref(v_pre_2520_);
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v_bs_2524_);
return v___x_2530_;
}
else
{
lean_object* v_v_2531_; lean_object* v___x_2532_; lean_object* v_bs_x27_2533_; lean_object* v___x_2534_; 
v_v_2531_ = lean_array_uget(v_bs_2524_, v_i_2523_);
v___x_2532_ = lean_unsigned_to_nat(0u);
v_bs_x27_2533_ = lean_array_uset(v_bs_2524_, v_i_2523_, v___x_2532_);
lean_inc_ref(v_post_2521_);
lean_inc_ref(v_pre_2520_);
v___x_2534_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2520_, v_post_2521_, v_v_2531_, v___y_2525_, v___y_2526_, v___y_2527_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_object* v_a_2535_; size_t v___x_2536_; size_t v___x_2537_; lean_object* v___x_2538_; 
v_a_2535_ = lean_ctor_get(v___x_2534_, 0);
lean_inc(v_a_2535_);
lean_dec_ref_known(v___x_2534_, 1);
v___x_2536_ = ((size_t)1ULL);
v___x_2537_ = lean_usize_add(v_i_2523_, v___x_2536_);
v___x_2538_ = lean_array_uset(v_bs_x27_2533_, v_i_2523_, v_a_2535_);
v_i_2523_ = v___x_2537_;
v_bs_2524_ = v___x_2538_;
goto _start;
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
lean_dec_ref(v_bs_x27_2533_);
lean_dec_ref(v_post_2521_);
lean_dec_ref(v_pre_2520_);
v_a_2540_ = lean_ctor_get(v___x_2534_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2534_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2534_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__5(lean_object* v_pre_2548_, lean_object* v_post_2549_, lean_object* v_x_2550_, lean_object* v_x_2551_, lean_object* v_x_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
if (lean_obj_tag(v_x_2550_) == 5)
{
lean_object* v_fn_2557_; lean_object* v_arg_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v_fn_2557_ = lean_ctor_get(v_x_2550_, 0);
lean_inc_ref(v_fn_2557_);
v_arg_2558_ = lean_ctor_get(v_x_2550_, 1);
lean_inc_ref(v_arg_2558_);
lean_dec_ref_known(v_x_2550_, 2);
v___x_2559_ = lean_array_set(v_x_2551_, v_x_2552_, v_arg_2558_);
v___x_2560_ = lean_unsigned_to_nat(1u);
v___x_2561_ = lean_nat_sub(v_x_2552_, v___x_2560_);
lean_dec(v_x_2552_);
v_x_2550_ = v_fn_2557_;
v_x_2551_ = v___x_2559_;
v_x_2552_ = v___x_2561_;
goto _start;
}
else
{
lean_object* v___x_2563_; 
lean_dec(v_x_2552_);
lean_inc_ref(v_post_2549_);
lean_inc_ref(v_pre_2548_);
v___x_2563_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2548_, v_post_2549_, v_x_2550_, v___y_2553_, v___y_2554_, v___y_2555_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; size_t v_sz_2565_; size_t v___x_2566_; lean_object* v___x_2567_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v___x_2563_, 1);
v_sz_2565_ = lean_array_size(v_x_2551_);
v___x_2566_ = ((size_t)0ULL);
lean_inc_ref(v_post_2549_);
lean_inc_ref(v_pre_2548_);
v___x_2567_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__2(v_pre_2548_, v_post_2549_, v_sz_2565_, v___x_2566_, v_x_2551_, v___y_2553_, v___y_2554_, v___y_2555_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref_known(v___x_2567_, 1);
v___x_2569_ = l_Lean_mkAppN(v_a_2564_, v_a_2568_);
lean_dec(v_a_2568_);
v___x_2570_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2548_, v_post_2549_, v___x_2569_, v___y_2553_, v___y_2554_, v___y_2555_);
return v___x_2570_;
}
else
{
lean_object* v_a_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2578_; 
lean_dec(v_a_2564_);
lean_dec_ref(v_post_2549_);
lean_dec_ref(v_pre_2548_);
v_a_2571_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2573_ = v___x_2567_;
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_a_2571_);
lean_dec(v___x_2567_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v___x_2576_; 
if (v_isShared_2574_ == 0)
{
v___x_2576_ = v___x_2573_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2571_);
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
lean_dec_ref(v_x_2551_);
lean_dec_ref(v_post_2549_);
lean_dec_ref(v_pre_2548_);
return v___x_2563_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1(lean_object* v___x_2579_, lean_object* v_pre_2580_, lean_object* v_e_2581_, lean_object* v_post_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v___x_2587_; 
v___x_2587_ = l_Lean_Core_checkSystem(v___x_2579_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v___x_2588_; 
lean_dec_ref_known(v___x_2587_, 1);
lean_inc_ref(v_pre_2580_);
lean_inc(v___y_2585_);
lean_inc_ref(v___y_2584_);
lean_inc_ref(v_e_2581_);
v___x_2588_ = lean_apply_4(v_pre_2580_, v_e_2581_, v___y_2584_, v___y_2585_, lean_box(0));
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2704_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2591_ = v___x_2588_;
v_isShared_2592_ = v_isSharedCheck_2704_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_a_2589_);
lean_dec(v___x_2588_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2704_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v___y_2594_; 
switch(lean_obj_tag(v_a_2589_))
{
case 0:
{
lean_object* v_e_2694_; lean_object* v___x_2696_; 
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_e_2581_);
lean_dec_ref(v_pre_2580_);
v_e_2694_ = lean_ctor_get(v_a_2589_, 0);
lean_inc_ref(v_e_2694_);
lean_dec_ref_known(v_a_2589_, 1);
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 0, v_e_2694_);
v___x_2696_ = v___x_2591_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_e_2694_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
case 1:
{
lean_object* v_e_2698_; lean_object* v___x_2699_; 
lean_del_object(v___x_2591_);
lean_dec_ref(v_e_2581_);
v_e_2698_ = lean_ctor_get(v_a_2589_, 0);
lean_inc_ref(v_e_2698_);
lean_dec_ref_known(v_a_2589_, 1);
lean_inc_ref(v_post_2582_);
lean_inc_ref(v_pre_2580_);
v___x_2699_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2580_, v_post_2582_, v_e_2698_, v___y_2583_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; lean_object* v___x_2701_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2700_);
lean_dec_ref_known(v___x_2699_, 1);
v___x_2701_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v_a_2700_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2701_;
}
else
{
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_pre_2580_);
return v___x_2699_;
}
}
default: 
{
lean_object* v_e_x3f_2702_; 
lean_del_object(v___x_2591_);
v_e_x3f_2702_ = lean_ctor_get(v_a_2589_, 0);
lean_inc(v_e_x3f_2702_);
lean_dec_ref_known(v_a_2589_, 1);
if (lean_obj_tag(v_e_x3f_2702_) == 0)
{
v___y_2594_ = v_e_2581_;
goto v___jp_2593_;
}
else
{
lean_object* v_val_2703_; 
lean_dec_ref(v_e_2581_);
v_val_2703_ = lean_ctor_get(v_e_x3f_2702_, 0);
lean_inc(v_val_2703_);
lean_dec_ref_known(v_e_x3f_2702_, 1);
v___y_2594_ = v_val_2703_;
goto v___jp_2593_;
}
}
}
v___jp_2593_:
{
switch(lean_obj_tag(v___y_2594_))
{
case 7:
{
lean_object* v_binderName_2595_; lean_object* v_binderType_2596_; lean_object* v_body_2597_; uint8_t v_binderInfo_2598_; lean_object* v___x_2599_; 
v_binderName_2595_ = lean_ctor_get(v___y_2594_, 0);
v_binderType_2596_ = lean_ctor_get(v___y_2594_, 1);
v_body_2597_ = lean_ctor_get(v___y_2594_, 2);
v_binderInfo_2598_ = lean_ctor_get_uint8(v___y_2594_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2596_);
lean_inc_ref(v_post_2582_);
lean_inc_ref(v_pre_2580_);
v___x_2599_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2580_, v_post_2582_, v_binderType_2596_, v___y_2583_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v_a_2600_; lean_object* v___x_2601_; 
v_a_2600_ = lean_ctor_get(v___x_2599_, 0);
lean_inc(v_a_2600_);
lean_dec_ref_known(v___x_2599_, 1);
lean_inc_ref(v_body_2597_);
lean_inc_ref(v_post_2582_);
lean_inc_ref(v_pre_2580_);
v___x_2601_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2580_, v_post_2582_, v_body_2597_, v___y_2583_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v_a_2602_; size_t v___x_2603_; size_t v___x_2604_; uint8_t v___x_2605_; 
v_a_2602_ = lean_ctor_get(v___x_2601_, 0);
lean_inc(v_a_2602_);
lean_dec_ref_known(v___x_2601_, 1);
v___x_2603_ = lean_ptr_addr(v_binderType_2596_);
v___x_2604_ = lean_ptr_addr(v_a_2600_);
v___x_2605_ = lean_usize_dec_eq(v___x_2603_, v___x_2604_);
if (v___x_2605_ == 0)
{
lean_object* v___x_2606_; lean_object* v___x_2607_; 
lean_inc(v_binderName_2595_);
lean_dec_ref_known(v___y_2594_, 3);
v___x_2606_ = l_Lean_Expr_forallE___override(v_binderName_2595_, v_a_2600_, v_a_2602_, v_binderInfo_2598_);
v___x_2607_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___x_2606_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2607_;
}
else
{
size_t v___x_2608_; size_t v___x_2609_; uint8_t v___x_2610_; 
v___x_2608_ = lean_ptr_addr(v_body_2597_);
v___x_2609_ = lean_ptr_addr(v_a_2602_);
v___x_2610_ = lean_usize_dec_eq(v___x_2608_, v___x_2609_);
if (v___x_2610_ == 0)
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
lean_inc(v_binderName_2595_);
lean_dec_ref_known(v___y_2594_, 3);
v___x_2611_ = l_Lean_Expr_forallE___override(v_binderName_2595_, v_a_2600_, v_a_2602_, v_binderInfo_2598_);
v___x_2612_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___x_2611_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2612_;
}
else
{
uint8_t v___x_2613_; 
v___x_2613_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2598_, v_binderInfo_2598_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; lean_object* v___x_2615_; 
lean_inc(v_binderName_2595_);
lean_dec_ref_known(v___y_2594_, 3);
v___x_2614_ = l_Lean_Expr_forallE___override(v_binderName_2595_, v_a_2600_, v_a_2602_, v_binderInfo_2598_);
v___x_2615_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___x_2614_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2615_;
}
else
{
lean_object* v___x_2616_; 
lean_dec(v_a_2602_);
lean_dec(v_a_2600_);
v___x_2616_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___y_2594_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2616_;
}
}
}
}
else
{
lean_dec(v_a_2600_);
lean_dec_ref_known(v___y_2594_, 3);
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_pre_2580_);
return v___x_2601_;
}
}
else
{
lean_dec_ref_known(v___y_2594_, 3);
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_pre_2580_);
return v___x_2599_;
}
}
case 6:
{
lean_object* v_binderName_2617_; lean_object* v_binderType_2618_; lean_object* v_body_2619_; uint8_t v_binderInfo_2620_; lean_object* v___x_2621_; 
v_binderName_2617_ = lean_ctor_get(v___y_2594_, 0);
v_binderType_2618_ = lean_ctor_get(v___y_2594_, 1);
v_body_2619_ = lean_ctor_get(v___y_2594_, 2);
v_binderInfo_2620_ = lean_ctor_get_uint8(v___y_2594_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2618_);
lean_inc_ref(v_post_2582_);
lean_inc_ref(v_pre_2580_);
v___x_2621_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2580_, v_post_2582_, v_binderType_2618_, v___y_2583_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2621_) == 0)
{
lean_object* v_a_2622_; lean_object* v___x_2623_; 
v_a_2622_ = lean_ctor_get(v___x_2621_, 0);
lean_inc(v_a_2622_);
lean_dec_ref_known(v___x_2621_, 1);
lean_inc_ref(v_body_2619_);
lean_inc_ref(v_post_2582_);
lean_inc_ref(v_pre_2580_);
v___x_2623_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2580_, v_post_2582_, v_body_2619_, v___y_2583_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; size_t v___x_2625_; size_t v___x_2626_; uint8_t v___x_2627_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
lean_inc(v_a_2624_);
lean_dec_ref_known(v___x_2623_, 1);
v___x_2625_ = lean_ptr_addr(v_binderType_2618_);
v___x_2626_ = lean_ptr_addr(v_a_2622_);
v___x_2627_ = lean_usize_dec_eq(v___x_2625_, v___x_2626_);
if (v___x_2627_ == 0)
{
lean_object* v___x_2628_; lean_object* v___x_2629_; 
lean_inc(v_binderName_2617_);
lean_dec_ref_known(v___y_2594_, 3);
v___x_2628_ = l_Lean_Expr_lam___override(v_binderName_2617_, v_a_2622_, v_a_2624_, v_binderInfo_2620_);
v___x_2629_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___x_2628_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2629_;
}
else
{
size_t v___x_2630_; size_t v___x_2631_; uint8_t v___x_2632_; 
v___x_2630_ = lean_ptr_addr(v_body_2619_);
v___x_2631_ = lean_ptr_addr(v_a_2624_);
v___x_2632_ = lean_usize_dec_eq(v___x_2630_, v___x_2631_);
if (v___x_2632_ == 0)
{
lean_object* v___x_2633_; lean_object* v___x_2634_; 
lean_inc(v_binderName_2617_);
lean_dec_ref_known(v___y_2594_, 3);
v___x_2633_ = l_Lean_Expr_lam___override(v_binderName_2617_, v_a_2622_, v_a_2624_, v_binderInfo_2620_);
v___x_2634_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___x_2633_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2634_;
}
else
{
uint8_t v___x_2635_; 
v___x_2635_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2620_, v_binderInfo_2620_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2636_; lean_object* v___x_2637_; 
lean_inc(v_binderName_2617_);
lean_dec_ref_known(v___y_2594_, 3);
v___x_2636_ = l_Lean_Expr_lam___override(v_binderName_2617_, v_a_2622_, v_a_2624_, v_binderInfo_2620_);
v___x_2637_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___x_2636_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2637_;
}
else
{
lean_object* v___x_2638_; 
lean_dec(v_a_2624_);
lean_dec(v_a_2622_);
v___x_2638_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___y_2594_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2638_;
}
}
}
}
else
{
lean_dec(v_a_2622_);
lean_dec_ref_known(v___y_2594_, 3);
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_pre_2580_);
return v___x_2623_;
}
}
else
{
lean_dec_ref_known(v___y_2594_, 3);
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_pre_2580_);
return v___x_2621_;
}
}
case 8:
{
lean_object* v_declName_2639_; lean_object* v_type_2640_; lean_object* v_value_2641_; lean_object* v_body_2642_; uint8_t v_nondep_2643_; lean_object* v___x_2644_; 
v_declName_2639_ = lean_ctor_get(v___y_2594_, 0);
v_type_2640_ = lean_ctor_get(v___y_2594_, 1);
v_value_2641_ = lean_ctor_get(v___y_2594_, 2);
v_body_2642_ = lean_ctor_get(v___y_2594_, 3);
v_nondep_2643_ = lean_ctor_get_uint8(v___y_2594_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_2640_);
lean_inc_ref(v_post_2582_);
lean_inc_ref(v_pre_2580_);
v___x_2644_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2580_, v_post_2582_, v_type_2640_, v___y_2583_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_a_2645_; lean_object* v___x_2646_; 
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_a_2645_);
lean_dec_ref_known(v___x_2644_, 1);
lean_inc_ref(v_value_2641_);
lean_inc_ref(v_post_2582_);
lean_inc_ref(v_pre_2580_);
v___x_2646_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2580_, v_post_2582_, v_value_2641_, v___y_2583_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v_a_2647_; lean_object* v___x_2648_; 
v_a_2647_ = lean_ctor_get(v___x_2646_, 0);
lean_inc(v_a_2647_);
lean_dec_ref_known(v___x_2646_, 1);
lean_inc_ref(v_body_2642_);
lean_inc_ref(v_post_2582_);
lean_inc_ref(v_pre_2580_);
v___x_2648_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2580_, v_post_2582_, v_body_2642_, v___y_2583_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2649_; size_t v___x_2650_; size_t v___x_2651_; uint8_t v___x_2652_; 
v_a_2649_ = lean_ctor_get(v___x_2648_, 0);
lean_inc(v_a_2649_);
lean_dec_ref_known(v___x_2648_, 1);
v___x_2650_ = lean_ptr_addr(v_type_2640_);
v___x_2651_ = lean_ptr_addr(v_a_2645_);
v___x_2652_ = lean_usize_dec_eq(v___x_2650_, v___x_2651_);
if (v___x_2652_ == 0)
{
lean_object* v___x_2653_; lean_object* v___x_2654_; 
lean_inc(v_declName_2639_);
lean_dec_ref_known(v___y_2594_, 4);
v___x_2653_ = l_Lean_Expr_letE___override(v_declName_2639_, v_a_2645_, v_a_2647_, v_a_2649_, v_nondep_2643_);
v___x_2654_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___x_2653_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2654_;
}
else
{
size_t v___x_2655_; size_t v___x_2656_; uint8_t v___x_2657_; 
v___x_2655_ = lean_ptr_addr(v_value_2641_);
v___x_2656_ = lean_ptr_addr(v_a_2647_);
v___x_2657_ = lean_usize_dec_eq(v___x_2655_, v___x_2656_);
if (v___x_2657_ == 0)
{
lean_object* v___x_2658_; lean_object* v___x_2659_; 
lean_inc(v_declName_2639_);
lean_dec_ref_known(v___y_2594_, 4);
v___x_2658_ = l_Lean_Expr_letE___override(v_declName_2639_, v_a_2645_, v_a_2647_, v_a_2649_, v_nondep_2643_);
v___x_2659_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___x_2658_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2659_;
}
else
{
size_t v___x_2660_; size_t v___x_2661_; uint8_t v___x_2662_; 
v___x_2660_ = lean_ptr_addr(v_body_2642_);
v___x_2661_ = lean_ptr_addr(v_a_2649_);
v___x_2662_ = lean_usize_dec_eq(v___x_2660_, v___x_2661_);
if (v___x_2662_ == 0)
{
lean_object* v___x_2663_; lean_object* v___x_2664_; 
lean_inc(v_declName_2639_);
lean_dec_ref_known(v___y_2594_, 4);
v___x_2663_ = l_Lean_Expr_letE___override(v_declName_2639_, v_a_2645_, v_a_2647_, v_a_2649_, v_nondep_2643_);
v___x_2664_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___x_2663_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2664_;
}
else
{
lean_object* v___x_2665_; 
lean_dec(v_a_2649_);
lean_dec(v_a_2647_);
lean_dec(v_a_2645_);
v___x_2665_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___y_2594_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2665_;
}
}
}
}
else
{
lean_dec(v_a_2647_);
lean_dec(v_a_2645_);
lean_dec_ref_known(v___y_2594_, 4);
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_pre_2580_);
return v___x_2648_;
}
}
else
{
lean_dec(v_a_2645_);
lean_dec_ref_known(v___y_2594_, 4);
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_pre_2580_);
return v___x_2646_;
}
}
else
{
lean_dec_ref_known(v___y_2594_, 4);
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_pre_2580_);
return v___x_2644_;
}
}
case 5:
{
lean_object* v_dummy_2666_; lean_object* v_nargs_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v_dummy_2666_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1___closed__0);
v_nargs_2667_ = l_Lean_Expr_getAppNumArgs(v___y_2594_);
lean_inc(v_nargs_2667_);
v___x_2668_ = lean_mk_array(v_nargs_2667_, v_dummy_2666_);
v___x_2669_ = lean_unsigned_to_nat(1u);
v___x_2670_ = lean_nat_sub(v_nargs_2667_, v___x_2669_);
lean_dec(v_nargs_2667_);
v___x_2671_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__5(v_pre_2580_, v_post_2582_, v___y_2594_, v___x_2668_, v___x_2670_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2671_;
}
case 10:
{
lean_object* v_data_2672_; lean_object* v_expr_2673_; lean_object* v___x_2674_; 
v_data_2672_ = lean_ctor_get(v___y_2594_, 0);
v_expr_2673_ = lean_ctor_get(v___y_2594_, 1);
lean_inc_ref(v_expr_2673_);
lean_inc_ref(v_post_2582_);
lean_inc_ref(v_pre_2580_);
v___x_2674_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2580_, v_post_2582_, v_expr_2673_, v___y_2583_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2675_; size_t v___x_2676_; size_t v___x_2677_; uint8_t v___x_2678_; 
v_a_2675_ = lean_ctor_get(v___x_2674_, 0);
lean_inc(v_a_2675_);
lean_dec_ref_known(v___x_2674_, 1);
v___x_2676_ = lean_ptr_addr(v_expr_2673_);
v___x_2677_ = lean_ptr_addr(v_a_2675_);
v___x_2678_ = lean_usize_dec_eq(v___x_2676_, v___x_2677_);
if (v___x_2678_ == 0)
{
lean_object* v___x_2679_; lean_object* v___x_2680_; 
lean_inc(v_data_2672_);
lean_dec_ref_known(v___y_2594_, 2);
v___x_2679_ = l_Lean_Expr_mdata___override(v_data_2672_, v_a_2675_);
v___x_2680_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___x_2679_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2680_;
}
else
{
lean_object* v___x_2681_; 
lean_dec(v_a_2675_);
v___x_2681_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___y_2594_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2681_;
}
}
else
{
lean_dec_ref_known(v___y_2594_, 2);
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_pre_2580_);
return v___x_2674_;
}
}
case 11:
{
lean_object* v_typeName_2682_; lean_object* v_idx_2683_; lean_object* v_struct_2684_; lean_object* v___x_2685_; 
v_typeName_2682_ = lean_ctor_get(v___y_2594_, 0);
v_idx_2683_ = lean_ctor_get(v___y_2594_, 1);
v_struct_2684_ = lean_ctor_get(v___y_2594_, 2);
lean_inc_ref(v_struct_2684_);
lean_inc_ref(v_post_2582_);
lean_inc_ref(v_pre_2580_);
v___x_2685_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2580_, v_post_2582_, v_struct_2684_, v___y_2583_, v___y_2584_, v___y_2585_);
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_object* v_a_2686_; size_t v___x_2687_; size_t v___x_2688_; uint8_t v___x_2689_; 
v_a_2686_ = lean_ctor_get(v___x_2685_, 0);
lean_inc(v_a_2686_);
lean_dec_ref_known(v___x_2685_, 1);
v___x_2687_ = lean_ptr_addr(v_struct_2684_);
v___x_2688_ = lean_ptr_addr(v_a_2686_);
v___x_2689_ = lean_usize_dec_eq(v___x_2687_, v___x_2688_);
if (v___x_2689_ == 0)
{
lean_object* v___x_2690_; lean_object* v___x_2691_; 
lean_inc(v_idx_2683_);
lean_inc(v_typeName_2682_);
lean_dec_ref_known(v___y_2594_, 3);
v___x_2690_ = l_Lean_Expr_proj___override(v_typeName_2682_, v_idx_2683_, v_a_2686_);
v___x_2691_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___x_2690_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2691_;
}
else
{
lean_object* v___x_2692_; 
lean_dec(v_a_2686_);
v___x_2692_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___y_2594_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2692_;
}
}
else
{
lean_dec_ref_known(v___y_2594_, 3);
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_pre_2580_);
return v___x_2685_;
}
}
default: 
{
lean_object* v___x_2693_; 
v___x_2693_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2580_, v_post_2582_, v___y_2594_, v___y_2583_, v___y_2584_, v___y_2585_);
return v___x_2693_;
}
}
}
}
}
else
{
lean_object* v_a_2705_; lean_object* v___x_2707_; uint8_t v_isShared_2708_; uint8_t v_isSharedCheck_2712_; 
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_e_2581_);
lean_dec_ref(v_pre_2580_);
v_a_2705_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2712_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2712_ == 0)
{
v___x_2707_ = v___x_2588_;
v_isShared_2708_ = v_isSharedCheck_2712_;
goto v_resetjp_2706_;
}
else
{
lean_inc(v_a_2705_);
lean_dec(v___x_2588_);
v___x_2707_ = lean_box(0);
v_isShared_2708_ = v_isSharedCheck_2712_;
goto v_resetjp_2706_;
}
v_resetjp_2706_:
{
lean_object* v___x_2710_; 
if (v_isShared_2708_ == 0)
{
v___x_2710_ = v___x_2707_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v_a_2705_);
v___x_2710_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
return v___x_2710_;
}
}
}
}
else
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2720_; 
lean_dec_ref(v_post_2582_);
lean_dec_ref(v_e_2581_);
lean_dec_ref(v_pre_2580_);
v_a_2713_ = lean_ctor_get(v___x_2587_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2715_ = v___x_2587_;
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2587_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2718_; 
if (v_isShared_2716_ == 0)
{
v___x_2718_ = v___x_2715_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_a_2713_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1___boxed(lean_object* v___x_2721_, lean_object* v_pre_2722_, lean_object* v_e_2723_, lean_object* v_post_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1(v___x_2721_, v_pre_2722_, v_e_2723_, v_post_2724_, v___y_2725_, v___y_2726_, v___y_2727_);
lean_dec(v___y_2727_);
lean_dec_ref(v___y_2726_);
lean_dec(v___y_2725_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(lean_object* v_pre_2730_, lean_object* v_post_2731_, lean_object* v_e_2732_, lean_object* v_a_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; 
lean_inc(v_a_2733_);
v___x_2737_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2737_, 0, lean_box(0));
lean_closure_set(v___x_2737_, 1, lean_box(0));
lean_closure_set(v___x_2737_, 2, v_a_2733_);
v___x_2738_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__0(lean_box(0), v___x_2737_, v___y_2734_, v___y_2735_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2770_; 
v_a_2739_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2741_ = v___x_2738_;
v_isShared_2742_ = v_isSharedCheck_2770_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___x_2738_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2770_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2743_; 
v___x_2743_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4___redArg(v_a_2739_, v_e_2732_);
lean_dec(v_a_2739_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v___x_2744_; lean_object* v___f_2745_; lean_object* v___x_2746_; 
lean_del_object(v___x_2741_);
v___x_2744_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___closed__0));
lean_inc_ref(v_e_2732_);
v___f_2745_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__1___boxed), 8, 4);
lean_closure_set(v___f_2745_, 0, v___x_2744_);
lean_closure_set(v___f_2745_, 1, v_pre_2730_);
lean_closure_set(v___f_2745_, 2, v_e_2732_);
lean_closure_set(v___f_2745_, 3, v_post_2731_);
v___x_2746_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6___redArg(v___f_2745_, v_a_2733_, v___y_2734_, v___y_2735_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; lean_object* v___f_2748_; lean_object* v___x_2749_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc_n(v_a_2747_, 2);
lean_dec_ref_known(v___x_2746_, 1);
lean_inc(v_a_2733_);
v___f_2748_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2748_, 0, v_a_2733_);
lean_closure_set(v___f_2748_, 1, v_e_2732_);
lean_closure_set(v___f_2748_, 2, v_a_2747_);
v___x_2749_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___lam__0(lean_box(0), v___f_2748_, v___y_2734_, v___y_2735_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2756_; 
v_isSharedCheck_2756_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2756_ == 0)
{
lean_object* v_unused_2757_; 
v_unused_2757_ = lean_ctor_get(v___x_2749_, 0);
lean_dec(v_unused_2757_);
v___x_2751_ = v___x_2749_;
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
else
{
lean_dec(v___x_2749_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v___x_2754_; 
if (v_isShared_2752_ == 0)
{
lean_ctor_set(v___x_2751_, 0, v_a_2747_);
v___x_2754_ = v___x_2751_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v_a_2747_);
v___x_2754_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
return v___x_2754_;
}
}
}
else
{
lean_object* v_a_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2765_; 
lean_dec(v_a_2747_);
v_a_2758_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2765_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2760_ = v___x_2749_;
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_a_2758_);
lean_dec(v___x_2749_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___x_2763_; 
if (v_isShared_2761_ == 0)
{
v___x_2763_ = v___x_2760_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v_a_2758_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
return v___x_2763_;
}
}
}
}
else
{
lean_dec_ref(v_e_2732_);
return v___x_2746_;
}
}
else
{
lean_object* v_val_2766_; lean_object* v___x_2768_; 
lean_dec_ref(v_e_2732_);
lean_dec_ref(v_post_2731_);
lean_dec_ref(v_pre_2730_);
v_val_2766_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_val_2766_);
lean_dec_ref_known(v___x_2743_, 1);
if (v_isShared_2742_ == 0)
{
lean_ctor_set(v___x_2741_, 0, v_val_2766_);
v___x_2768_ = v___x_2741_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_val_2766_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
else
{
lean_object* v_a_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2778_; 
lean_dec_ref(v_e_2732_);
lean_dec_ref(v_post_2731_);
lean_dec_ref(v_pre_2730_);
v_a_2771_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2778_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2773_ = v___x_2738_;
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v___x_2738_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(lean_object* v_pre_2779_, lean_object* v_post_2780_, lean_object* v_e_2781_, lean_object* v_a_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
lean_object* v___x_2786_; 
lean_inc_ref(v_post_2780_);
lean_inc(v___y_2784_);
lean_inc_ref(v___y_2783_);
lean_inc_ref(v_e_2781_);
v___x_2786_ = lean_apply_4(v_post_2780_, v_e_2781_, v___y_2783_, v___y_2784_, lean_box(0));
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2805_; 
v_a_2787_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2789_ = v___x_2786_;
v_isShared_2790_ = v_isSharedCheck_2805_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2786_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2805_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
switch(lean_obj_tag(v_a_2787_))
{
case 0:
{
lean_object* v_e_2791_; lean_object* v___x_2793_; 
lean_dec_ref(v_e_2781_);
lean_dec_ref(v_post_2780_);
lean_dec_ref(v_pre_2779_);
v_e_2791_ = lean_ctor_get(v_a_2787_, 0);
lean_inc_ref(v_e_2791_);
lean_dec_ref_known(v_a_2787_, 1);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 0, v_e_2791_);
v___x_2793_ = v___x_2789_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v_e_2791_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
case 1:
{
lean_object* v_e_2795_; lean_object* v___x_2796_; 
lean_del_object(v___x_2789_);
lean_dec_ref(v_e_2781_);
v_e_2795_ = lean_ctor_get(v_a_2787_, 0);
lean_inc_ref(v_e_2795_);
lean_dec_ref_known(v_a_2787_, 1);
v___x_2796_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2779_, v_post_2780_, v_e_2795_, v_a_2782_, v___y_2783_, v___y_2784_);
return v___x_2796_;
}
default: 
{
lean_object* v_e_x3f_2797_; 
lean_dec_ref(v_post_2780_);
lean_dec_ref(v_pre_2779_);
v_e_x3f_2797_ = lean_ctor_get(v_a_2787_, 0);
lean_inc(v_e_x3f_2797_);
lean_dec_ref_known(v_a_2787_, 1);
if (lean_obj_tag(v_e_x3f_2797_) == 0)
{
lean_object* v___x_2799_; 
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 0, v_e_2781_);
v___x_2799_ = v___x_2789_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_e_2781_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
else
{
lean_object* v_val_2801_; lean_object* v___x_2803_; 
lean_dec_ref(v_e_2781_);
v_val_2801_ = lean_ctor_get(v_e_x3f_2797_, 0);
lean_inc(v_val_2801_);
lean_dec_ref_known(v_e_x3f_2797_, 1);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 0, v_val_2801_);
v___x_2803_ = v___x_2789_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_val_2801_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
}
}
}
else
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
lean_dec_ref(v_e_2781_);
lean_dec_ref(v_post_2780_);
lean_dec_ref(v_pre_2779_);
v_a_2806_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2808_ = v___x_2786_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___x_2786_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2806_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_2814_, lean_object* v_post_2815_, lean_object* v_e_2816_, lean_object* v_a_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v_res_2821_; 
v_res_2821_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__3(v_pre_2814_, v_post_2815_, v_e_2816_, v_a_2817_, v___y_2818_, v___y_2819_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
lean_dec(v_a_2817_);
return v_res_2821_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_2822_, lean_object* v_post_2823_, lean_object* v_sz_2824_, lean_object* v_i_2825_, lean_object* v_bs_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_){
_start:
{
size_t v_sz_boxed_2831_; size_t v_i_boxed_2832_; lean_object* v_res_2833_; 
v_sz_boxed_2831_ = lean_unbox_usize(v_sz_2824_);
lean_dec(v_sz_2824_);
v_i_boxed_2832_ = lean_unbox_usize(v_i_2825_);
lean_dec(v_i_2825_);
v_res_2833_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__2(v_pre_2822_, v_post_2823_, v_sz_boxed_2831_, v_i_boxed_2832_, v_bs_2826_, v___y_2827_, v___y_2828_, v___y_2829_);
lean_dec(v___y_2829_);
lean_dec_ref(v___y_2828_);
lean_dec(v___y_2827_);
return v_res_2833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__5___boxed(lean_object* v_pre_2834_, lean_object* v_post_2835_, lean_object* v_x_2836_, lean_object* v_x_2837_, lean_object* v_x_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_){
_start:
{
lean_object* v_res_2843_; 
v_res_2843_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__5(v_pre_2834_, v_post_2835_, v_x_2836_, v_x_2837_, v_x_2838_, v___y_2839_, v___y_2840_, v___y_2841_);
lean_dec(v___y_2841_);
lean_dec_ref(v___y_2840_);
lean_dec(v___y_2839_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1___boxed(lean_object* v_pre_2844_, lean_object* v_post_2845_, lean_object* v_e_2846_, lean_object* v_a_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_){
_start:
{
lean_object* v_res_2851_; 
v_res_2851_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2844_, v_post_2845_, v_e_2846_, v_a_2847_, v___y_2848_, v___y_2849_);
lean_dec(v___y_2849_);
lean_dec_ref(v___y_2848_);
lean_dec(v_a_2847_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___lam__0(lean_object* v_00_u03b1_2852_, lean_object* v_x_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_){
_start:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2857_ = lean_apply_1(v_x_2853_, lean_box(0));
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2859_, lean_object* v_x_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_){
_start:
{
lean_object* v_res_2864_; 
v_res_2864_ = l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___lam__0(v_00_u03b1_2859_, v_x_2860_, v___y_2861_, v___y_2862_);
lean_dec(v___y_2862_);
lean_dec_ref(v___y_2861_);
return v_res_2864_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2865_ = lean_obj_once(&l_Lean_Expr_checkMaxShared___closed__1, &l_Lean_Expr_checkMaxShared___closed__1_once, _init_l_Lean_Expr_checkMaxShared___closed__1);
v___x_2866_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2866_, 0, lean_box(0));
lean_closure_set(v___x_2866_, 1, lean_box(0));
lean_closure_set(v___x_2866_, 2, v___x_2865_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1(lean_object* v_input_2867_, lean_object* v_pre_2868_, lean_object* v_post_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_){
_start:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v_a_2875_; lean_object* v___x_2876_; 
v___x_2873_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___closed__0, &l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___closed__0_once, _init_l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___closed__0);
v___x_2874_ = l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___lam__0(lean_box(0), v___x_2873_, v___y_2870_, v___y_2871_);
v_a_2875_ = lean_ctor_get(v___x_2874_, 0);
lean_inc(v_a_2875_);
lean_dec_ref(v___x_2874_);
v___x_2876_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1(v_pre_2868_, v_post_2869_, v_input_2867_, v_a_2875_, v___y_2870_, v___y_2871_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2877_);
lean_dec_ref_known(v___x_2876_, 1);
v___x_2878_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2878_, 0, lean_box(0));
lean_closure_set(v___x_2878_, 1, lean_box(0));
lean_closure_set(v___x_2878_, 2, v_a_2875_);
v___x_2879_ = l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___lam__0(lean_box(0), v___x_2878_, v___y_2870_, v___y_2871_);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2879_);
if (v_isSharedCheck_2886_ == 0)
{
lean_object* v_unused_2887_; 
v_unused_2887_ = lean_ctor_get(v___x_2879_, 0);
lean_dec(v_unused_2887_);
v___x_2881_ = v___x_2879_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_dec(v___x_2879_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
lean_ctor_set(v___x_2881_, 0, v_a_2877_);
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2877_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
}
else
{
lean_dec(v_a_2875_);
return v___x_2876_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1___boxed(lean_object* v_input_2888_, lean_object* v_pre_2889_, lean_object* v_post_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
lean_object* v_res_2894_; 
v_res_2894_ = l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1(v_input_2888_, v_pre_2889_, v_post_2890_, v___y_2891_, v___y_2892_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels(lean_object* v_e_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_){
_start:
{
uint8_t v___x_2901_; 
v___x_2901_ = l___private_Lean_Meta_Sym_Util_0__Lean_Meta_Sym_levelsAlreadyNormalized(v_e_2897_);
if (v___x_2901_ == 0)
{
lean_object* v_pre_2902_; lean_object* v___f_2903_; lean_object* v___x_2904_; 
v_pre_2902_ = ((lean_object*)(l_Lean_Meta_Sym_normalizeLevels___closed__0));
v___f_2903_ = ((lean_object*)(l_Lean_Meta_Sym_normalizeLevels___closed__1));
v___x_2904_ = l_Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1(v_e_2897_, v_pre_2902_, v___f_2903_, v_a_2898_, v_a_2899_);
return v___x_2904_;
}
else
{
lean_object* v___x_2905_; 
v___x_2905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2905_, 0, v_e_2897_);
return v___x_2905_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_normalizeLevels___boxed(lean_object* v_e_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_){
_start:
{
lean_object* v_res_2910_; 
v_res_2910_ = l_Lean_Meta_Sym_normalizeLevels(v_e_2906_, v_a_2907_, v_a_2908_);
lean_dec(v_a_2908_);
lean_dec_ref(v_a_2907_);
return v_res_2910_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_2911_, lean_object* v_m_2912_, lean_object* v_a_2913_){
_start:
{
lean_object* v___x_2914_; 
v___x_2914_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4___redArg(v_m_2912_, v_a_2913_);
return v___x_2914_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_2915_, lean_object* v_m_2916_, lean_object* v_a_2917_){
_start:
{
lean_object* v_res_2918_; 
v_res_2918_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4(v_00_u03b2_2915_, v_m_2916_, v_a_2917_);
lean_dec_ref(v_a_2917_);
lean_dec_ref(v_m_2916_);
return v_res_2918_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8(lean_object* v_00_u03b1_2919_, lean_object* v_ref_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_){
_start:
{
lean_object* v___x_2924_; 
v___x_2924_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___redArg(v_ref_2920_);
return v___x_2924_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8___boxed(lean_object* v_00_u03b1_2925_, lean_object* v_ref_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_){
_start:
{
lean_object* v_res_2930_; 
v_res_2930_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__8(v_00_u03b1_2925_, v_ref_2926_, v___y_2927_, v___y_2928_);
lean_dec(v___y_2928_);
lean_dec_ref(v___y_2927_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9(lean_object* v_00_u03b1_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_){
_start:
{
lean_object* v___x_2935_; 
v___x_2935_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___redArg();
return v___x_2935_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9___boxed(lean_object* v_00_u03b1_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v_res_2940_; 
v_res_2940_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6_spec__9(v_00_u03b1_2936_, v___y_2937_, v___y_2938_);
lean_dec(v___y_2938_);
lean_dec_ref(v___y_2937_);
return v_res_2940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6(lean_object* v_00_u03b1_2941_, lean_object* v_x_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_){
_start:
{
lean_object* v___x_2947_; 
v___x_2947_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6___redArg(v_x_2942_, v___y_2943_, v___y_2944_, v___y_2945_);
return v___x_2947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6___boxed(lean_object* v_00_u03b1_2948_, lean_object* v_x_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
lean_object* v_res_2954_; 
v_res_2954_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__6(v_00_u03b1_2948_, v_x_2949_, v___y_2950_, v___y_2951_, v___y_2952_);
lean_dec(v___y_2952_);
lean_dec_ref(v___y_2951_);
lean_dec(v___y_2950_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7(lean_object* v_00_u03b2_2955_, lean_object* v_m_2956_, lean_object* v_a_2957_, lean_object* v_b_2958_){
_start:
{
lean_object* v___x_2959_; 
v___x_2959_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7___redArg(v_m_2956_, v_a_2957_, v_b_2958_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_2960_, lean_object* v_a_2961_, lean_object* v_x_2962_){
_start:
{
lean_object* v___x_2963_; 
v___x_2963_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5___redArg(v_a_2961_, v_x_2962_);
return v___x_2963_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5___boxed(lean_object* v_00_u03b2_2964_, lean_object* v_a_2965_, lean_object* v_x_2966_){
_start:
{
lean_object* v_res_2967_; 
v_res_2967_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__4_spec__5(v_00_u03b2_2964_, v_a_2965_, v_x_2966_);
lean_dec(v_x_2966_);
lean_dec_ref(v_a_2965_);
return v_res_2967_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11(lean_object* v_00_u03b2_2968_, lean_object* v_a_2969_, lean_object* v_x_2970_){
_start:
{
uint8_t v___x_2971_; 
v___x_2971_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11___redArg(v_a_2969_, v_x_2970_);
return v___x_2971_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11___boxed(lean_object* v_00_u03b2_2972_, lean_object* v_a_2973_, lean_object* v_x_2974_){
_start:
{
uint8_t v_res_2975_; lean_object* v_r_2976_; 
v_res_2975_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__11(v_00_u03b2_2972_, v_a_2973_, v_x_2974_);
lean_dec(v_x_2974_);
lean_dec_ref(v_a_2973_);
v_r_2976_ = lean_box(v_res_2975_);
return v_r_2976_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12(lean_object* v_00_u03b2_2977_, lean_object* v_data_2978_){
_start:
{
lean_object* v___x_2979_; 
v___x_2979_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12___redArg(v_data_2978_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__13(lean_object* v_00_u03b2_2980_, lean_object* v_a_2981_, lean_object* v_b_2982_, lean_object* v_x_2983_){
_start:
{
lean_object* v___x_2984_; 
v___x_2984_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__13___redArg(v_a_2981_, v_b_2982_, v_x_2983_);
return v___x_2984_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13(lean_object* v_00_u03b2_2985_, lean_object* v_i_2986_, lean_object* v_source_2987_, lean_object* v_target_2988_){
_start:
{
lean_object* v___x_2989_; 
v___x_2989_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13___redArg(v_i_2986_, v_source_2987_, v_target_2988_);
return v___x_2989_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13_spec__14(lean_object* v_00_u03b2_2990_, lean_object* v_x_2991_, lean_object* v_x_2992_){
_start:
{
lean_object* v___x_2993_; 
v___x_2993_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Sym_normalizeLevels_spec__1_spec__1_spec__7_spec__12_spec__13_spec__14___redArg(v_x_2991_, v_x_2992_);
return v___x_2993_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Util(builtin);
}
#ifdef __cplusplus
}
#endif
